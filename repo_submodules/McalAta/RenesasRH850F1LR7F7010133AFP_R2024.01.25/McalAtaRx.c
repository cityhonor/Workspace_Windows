/******************************************************************************/
/* File   : McalAtaRx.c                                                       */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "infMcalAtaRx.hpp"
#include "infMcalAtaRxSwcApplOs.hpp"

//#include "gpioX.hpp"
//#include "NvmManagerX.hpp"
//#include "Os_ConfigInterrupts.hpp"
//#include "iTpms_Interface.hpp"
//#include "RdcManagerX.hpp"

#include "infMcalDioMcalAta.hpp"
#include "infMcalLinMcalAta.hpp"
#include "Os_ConfigInterrupts.hpp"

#include "TypesMcalAtaRfd.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define cRFTelAK            0x00U
#define cRFTelAKLfResponse  0x01U
#define cRFTelLfResponse    0x03U
#define cRFTelStatus        0x83U
#define cRFTelStatusLearn   0xA3U
#define cRFTelApc           0xE7U
#define cRFTelStandstill    0x90U
#define cMaxNumberOfTgs     7U

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      McalAtaRx_eStateStartUpDelay = 0
   ,  McalAtaRx_eStateStartInit
   ,  McalAtaRx_eStateInit
   ,  McalAtaRx_eStateWtIniFini
   ,  McalAtaRx_eStateProcess
}TypeMcalAtaRx_eState;

typedef enum{
      McalAtaRx_eStatusIrq_NotPending = 0
   ,  McalAtaRx_eStatusIrq_Pending
}TypeMcalAtaRx_eStatusIrq;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
static const uint8 Rdc__U8_TgLengthList[cMaxNumberOfTgs][2] = {
      {cRFTelAK,            8}
   ,  {cRFTelAKLfResponse,  8}
   ,  {cRFTelLfResponse,   11}
   ,  {cRFTelStatus,       10}
   ,  {cRFTelStatusLearn,  10}
   ,  {cRFTelApc,           8}
   ,  {cRFTelStandstill,    1}
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
static TypeMcalAtaRx_eState     McalAtaRx_leState    = McalAtaRx_eStateStartUpDelay;
static TypeMcalAtaRx_eStatusIrq McalAtaRx_eStatusIrq = McalAtaRx_eStatusIrq_NotPending;
static uint8                    uiErrorCNT           = 0;
static uint8                    ucCrcPassedTel       = 0;
static uint8                    ucCrcFailedTel       = 0;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void  rf_ata5785_StartInitSM            (void);
extern uint8 rf_ata5785_InitSM                 (void);
extern void  rf_ata5785_get_events             (uint8 buf[]);
extern void  rf_ata5785_start_rssi_measurement (uint8 channel);
extern uint8 rf_ata5785_get_rssi_level         (void);
extern void  rf_ata5785_read_rx_buf            (uint8 buf[], uint8* len);
extern void  rf_ata5785_read_rssi_buf          (uint8 buf[], uint8* len);
extern void  SetServNPath                      (uint8 ui8SrvNPath);
extern void  Rdc_ProcessTelegram               (TypeMcalAtaRfd_stTelegram* pstTelegram);

void infMcalAtaRxSwcApplOs_vFlagIrqSet(void){
   McalAtaRx_eStatusIrq = McalAtaRx_eStatusIrq_Pending;
}

void infMcalAtaRx_vFlagIrqClear(void){
   McalAtaRx_eStatusIrq = McalAtaRx_eStatusIrq_NotPending;
}

boolean infMcalAtaRx_bIsIrqPending(void){
   return(
      (McalAtaRx_eStatusIrq_Pending == McalAtaRx_eStatusIrq)
      ?  TRUE
      :  FALSE
   );
}

void infMcalAtaRxSwcApplOs_vStateMachine(void){
   switch(McalAtaRx_leState){
      case McalAtaRx_eStateStartUpDelay:
      case McalAtaRx_eStateStartInit:
         FastPWR_3Pin4_ATA(0);
         GPIO_ChipSelectAta(0);
         rf_ata5785_StartInitSM();
         (void) rf_ata5785_InitSM();
         McalAtaRx_leState = McalAtaRx_eStateWtIniFini;
         break;

      case McalAtaRx_eStateWtIniFini:
         if(1 == rf_ata5785_InitSM()){
            McalAtaRx_leState = McalAtaRx_eStateProcess;
         }
         break;

      default:
         break;
   }
}

boolean infMcalAtaRx_bIsStateProcess(void){
   return(
      (McalAtaRx_eStateProcess == McalAtaRx_leState)
      ?  TRUE
      :  FALSE
   );
}

static uint8 GetAtaTelegramLength(uint8 ucTelType){
   uint8 i        = 0;
   uint8 ucRetVal = McalAtaRfd_dLenDataRB;
   while(
         (i < cMaxNumberOfTgs)
      && (ucTelType != Rdc__U8_TgLengthList[i][0])
   ){
      i++;
   }
   if(
         i
      <  cMaxNumberOfTgs
   ){
      ucRetVal = Rdc__U8_TgLengthList[i][1];
   }
   return ucRetVal;
}

static uint8 appBuild8CRC(
      const uint8* pui8Buffer
   ,        uint8  ui8MessageLen
   ,        uint8  ui8BitsInFirstByte
   ,        uint8  ui8Polynom
   ,        uint8  ui8CrcStartValue
){
   uint8 ui8CRC = ui8CrcStartValue;
   do{
      uint8 ui8BitNumber = 0x00U;
      uint8 byteContent  = (uint8)pui8Buffer[0] << (uint8) 8 - ui8BitsInFirstByte;
      if(1U < ui8MessageLen){
         byteContent |= ( pui8Buffer[1] >> ( ui8BitsInFirstByte ) );
         ui8BitNumber = 8U;
      }
      else{
         ui8BitNumber = ui8BitsInFirstByte;
      }
      ui8CRC ^= byteContent;
      do{
         if((uint8)0 != (0x80U & ui8CRC)){
            ui8CRC = (uint8) ( ( ui8CRC << 1U ) ^ ( ui8Polynom ) );
         }
         else{
            ui8CRC = (uint8) ( ( ui8CRC << 1U ) );
         }
         ui8BitNumber--;
      }while((uint8)0 != ui8BitNumber);
      pui8Buffer++;
      if(ui8MessageLen > 0){
         ui8MessageLen--;
      }
   }while((uint8)0 != ui8MessageLen);
   return ui8CRC;
}

extern TypeMcalAtaRfd_stTelegram McalAtaRfd_stTelegram;
void infMcalAtaRxSwcApplOs_vProcessIrq(void){
   uint8 ui8MessageLen;
   uint8 ui8Polynom         = 0x2F;
   uint8 ui8CrcStartValue   = 0xAA;
   uint8 ui8BitsInFirstByte = 8U;
   uint8 ucTelegramType;
   infMcalLinMcalAta_vInitCSig0();
   rf_ata5785_get_events(McalAtaRfd_stTelegram.events);
   if(
         (
               (
                     McalAtaRfd_stTelegram.events[3]
                  &  McalAtaRfd_stTelegram.channel
               )
            == McalAtaRfd_stTelegram.channel
         )
      && (
               ((McalAtaRfd_stTelegram.events[1] & 0x07) == 0x07)
            || ((McalAtaRfd_stTelegram.events[1] & 0x70) == 0x70)
         )
   ){
      rf_ata5785_read_rx_buf(McalAtaRfd_stTelegram.buffer,    &(McalAtaRfd_stTelegram.level));
      rf_ata5785_read_rssi_buf(McalAtaRfd_stTelegram.rssibuf, &(McalAtaRfd_stTelegram.rssilvl));
      if(McalAtaRfd_stTelegram.level > (uint8)3){
         ucTelegramType = McalAtaRfd_stTelegram.buffer[0];
         ui8MessageLen  = GetAtaTelegramLength(ucTelegramType);
         if(
               appBuild8CRC(
                     McalAtaRfd_stTelegram.buffer
                  ,  ui8MessageLen - (uint8)1
                  ,  ui8BitsInFirstByte
                  ,  ui8Polynom
                  ,  ui8CrcStartValue
               )
            == McalAtaRfd_stTelegram.buffer[ui8MessageLen - (uint8)1]
         ){
            Rdc_ProcessTelegram(&McalAtaRfd_stTelegram);
         }
         else{
         }
      }
      else{
      }
      SetServNPath(McalAtaRfd_stTelegram.channel);
   }
   else{
      if(McalAtaRfd_stTelegram.events[0] & 0x80){
         if(uiErrorCNT < 0xFF){
            uiErrorCNT++;
         }
         infMcalAtaRxSwcApplOs_vReInitAfterError();
      }
      else{
         SetServNPath(McalAtaRfd_stTelegram.channel);
      }
   }
}

uint8 infMcalAtaRxSwcApplOs_u8MeasureNoiseRssiLevel(void){
   uint8 ucRssiNulllevel;
   if(
         (McalAtaRx_leState == McalAtaRx_eStateProcess)
      && (McalAtaRx_eStatusIrq_NotPending == McalAtaRx_eStatusIrq)
   ){
      Os_Disable_CAT2ISR_TelRec();
      infMcalLinMcalAta_vEnableCSig0();
      rf_ata5785_start_rssi_measurement(McalAtaRfd_stTelegram.channel);
      ucRssiNulllevel = rf_ata5785_get_rssi_level();
      if(
            (0 == intMcalDioMcalAta_u8GetLevelPortPinIrq())
         || (1 == GPIO_GetAtaIrqPendingFlag())
      ){
         infMcalAtaRxSwcApplOs_vProcessIrq();
         ucRssiNulllevel = 0xff;
         Os_Clear_CAT2ISR_TelRec();
      }
      else{
         SetServNPath(McalAtaRfd_stTelegram.channel);
      }
      Os_Enable_CAT2ISR_TelRec();
   }
   else{
      ucRssiNulllevel = 0xff;
   }
   return ucRssiNulllevel;
}

void infMcalAtaRxSwcApplOs_vReInitAfterError(void){
   McalAtaRx_leState = McalAtaRx_eStateStartUpDelay;
}

uint8 ATA_GetCrcPassedTelCounter(void){
   return ucCrcPassedTel;
}

uint8 ATA_GetCrcFailedTelCounter(void){
   return ucCrcFailedTel;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

