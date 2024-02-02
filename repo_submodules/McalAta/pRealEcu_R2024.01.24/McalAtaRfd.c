/******************************************************************************/
/* File   : McalAtaRfd.c                                                      */
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

#include "TypesMcalAtaRfd.hpp"
#include "infMcalAtaRfdMcalMcu.hpp"

#include "infMcalAtaRx.hpp"
#include "infMcalDioMcalAta.hpp"
#include "infMcalLinMcalAta.hpp"
#include "clocksX.hpp"
#include "Os_ConfigInterrupts.hpp"
#include "ata5785_sram.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
TypeMcalAtaRfd_stTelegram McalAtaRfd_stTelegram;

static uint8 rf_tempMeas_cfg[] = {
      0x02
   ,  0xC3
   ,  0x01
   ,  0x4B
};

static uint8 rf_sysConf_rd[] = {
      0x02
   ,  0xE5
   ,  0x01
   ,  0x0C
};

static void  McalAtaRfd_lvInitFunction_1st          (void);
static void  McalAtaRfd_lvInitFunction_PwrOn        (void);
static void  McalAtaRfd_lvInitFunction_SysRes       (void);
static void  McalAtaRfd_lvInitFunction_WtResetEvent (void);
static void  McalAtaRfd_lvInitFunction_Seq1         (void);
static void  McalAtaRfd_lvInitFunction_Seq2         (void);
static void  McalAtaRfd_lvInitFunction_Seq3         (void);
static void  McalAtaRfd_lvInitFunction_Seq4         (void);
static void  McalAtaRfd_lvInitFunction_Seq5         (void);
static void  McalAtaRfd_lvInitFunction_Seq6         (void);
static void  McalAtaRfd_lvInitFunction_StartService (void);
static void  McalAtaRfd_lvInitFunction_Initialized  (void);

static void (*McalAtaRfd_lfptrInitFunction) (void) = McalAtaRfd_lvInitFunction_1st;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
static void  rf_ata5785_system_reset (void);
static uint8 rf_ata5785_read_version (void);
static void  rf_ata5785_set_mode     (uint8 mode, uint8 channel);
static void  rf_ata5785_write_sram   (const uint8 data[]);
static void  rf_ata5785_set_watchdog (const uint8 data[]);
static void  release_ata5785         (void);
static void  select_ata5785          (void);

void rf_ata5785_StartInitSM(void){
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_1st;
   infMcalAtaRx_vFlagIrqClear();
}

uint8 rf_ata5785_InitSM(void){
   McalAtaRfd_lfptrInitFunction();
   if(McalAtaRfd_lfptrInitFunction == McalAtaRfd_lvInitFunction_Initialized){
      return 1;
   }
   else{
      return 0;
   }
}

void SetServNPath(uint8 ui8SrvNPath){
   infMcalLinMcalAta_vInitCSig0();
   if(ui8SrvNPath == McalAtaRfd_stTelegram.channel){
      McalAtaRfd_stTelegram.mode = 0x12;
   }
   else{
      McalAtaRfd_stTelegram.mode = 0xB2;
      McalAtaRfd_stTelegram.channel = ui8SrvNPath;
   }
   rf_ata5785_set_mode(McalAtaRfd_stTelegram.mode, McalAtaRfd_stTelegram.channel);
   infMcalLinMcalAta_vDisableCSig0();
}

void rf_ata5785_get_events(uint8 buf[]){
   select_ata5785();
   buf[0] = infMcalLinMcalAta_u8ActiveTransferSpi(0x04);
   buf[1] = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   buf[2] = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   buf[3] = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   release_ata5785();
   return;
}

void rf_ata5785_start_rssi_measurement(uint8 channel){
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x1B);
   infMcalLinMcalAta_u8ActiveTransferSpi(channel);
   release_ata5785();
   return;
}

uint8 rf_ata5785_get_rssi_level(void){
   uint8 rssav;
   uint8 rsspk;
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x1C);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   rssav = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   rsspk = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   rsspk = rsspk;
   release_ata5785();
   return rssav;
}

void rf_ata5785_read_rx_buf(uint8 buf[], uint8* len){
   uint8 i;
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x01);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   *len = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   release_ata5785();
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x06);
   infMcalLinMcalAta_u8ActiveTransferSpi(*len);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   for(i = 0; i < *len; i++){
      buf[i] = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   }
   release_ata5785();
   return;
}

void rf_ata5785_read_rssi_buf(uint8 buf[], uint8* len){
   uint8 i;
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x03);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   *len = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   release_ata5785();
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x05);
   infMcalLinMcalAta_u8ActiveTransferSpi(*len);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   for(i=0; i<*len; i++){
   	buf[i] = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   }
   release_ata5785();
}

void infMcalAtaRfdMcalMcu_vPutDeviceInOffMode(void){
   infMcalLinMcalAta_vInitCSig0();
   select_ata5785();
   (void)infMcalLinMcalAta_u8ActiveTransferSpi(0x18);
   (void)infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   release_ata5785();
   infMcalLinMcalAta_vDisableCSig0();
   FastPWR_3Pin4_ATA(0);
}

static void select_ata5785(void){
   GPIO_ChipSelectAta(1);
   WaitHard(47);
}

static void release_ata5785(void){
   WaitHard(36);
   GPIO_ChipSelectAta(0);
   WaitHard(17);
}

static void McalAtaRfd_lvInitFunction_1st(void){
   uint8 i;
   Os_Disable_CAT2ISR_TelRec();
   FastPWR_3Pin4_ATA(0);
   McalAtaRfd_stTelegram.rom       = 0;
   McalAtaRfd_stTelegram.level     = 0;
   McalAtaRfd_stTelegram.rssilvl   = 0;
   McalAtaRfd_stTelegram.mode      = 0;
   McalAtaRfd_stTelegram.channel   = 0;
   McalAtaRfd_stTelegram.events[0] = 0;
   McalAtaRfd_stTelegram.events[1] = 0;
   McalAtaRfd_stTelegram.events[2] = 0;
   McalAtaRfd_stTelegram.events[3] = 0;
   for(i = ((uint8) 0); i < McalAtaRfd_dLenBufData; i++){
      McalAtaRfd_stTelegram.buffer[i]  = (uint8) 0;
      McalAtaRfd_stTelegram.rssibuf[i] = (uint8) 0;
   }
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_PwrOn;
}

static void McalAtaRfd_lvInitFunction_PwrOn(void){
   infMcalLinMcalAta_vInitCSig0();
   FastPWR_3Pin4_ATA(1);
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_SysRes;
}

static void McalAtaRfd_lvInitFunction_SysRes(void){
   infMcalAtaRx_vFlagIrqClear();
   rf_ata5785_system_reset();
   Os_Enable_CAT2ISR_TelRec();
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_WtResetEvent;
}

static void McalAtaRfd_lvInitFunction_WtResetEvent(void){
   static uint8 tOCtIn50msec = (uint8) 3;
   if(0 < tOCtIn50msec){
      tOCtIn50msec--;
      if(FALSE != infMcalAtaRx_bIsIrqPending()){
         infMcalAtaRx_vFlagIrqClear();
         tOCtIn50msec = (uint8) 3;
         McalAtaRfd_lfptrInitFunction  = McalAtaRfd_lvInitFunction_Seq1;
         rf_ata5785_get_events(McalAtaRfd_stTelegram.events);
         McalAtaRfd_stTelegram.rom = rf_ata5785_read_version();
         rf_ata5785_write_sram(rf_idCtrl_cfg);
      }
   }
   else{
      tOCtIn50msec = (uint8) 3;
      McalAtaRfd_lfptrInitFunction  = McalAtaRfd_lvInitFunction_1st;
      infMcalLinMcalAta_vDisableCSig0();
   }
}

static void McalAtaRfd_lvInitFunction_Seq1(void){
   rf_ata5785_write_sram(rf_events_cfg);
   rf_ata5785_set_watchdog(rf_watchdog_cfg);
   rf_ata5785_write_sram(rf_dbgsw_cfg);
   rf_ata5785_write_sram(rf_PORTB_cfg);
   rf_ata5785_write_sram(rf_DDRB_cfg);
   rf_ata5785_write_sram(rf_PORTC_cfg);
   rf_ata5785_write_sram(rf_DDRC_cfg);
   rf_ata5785_write_sram(rf_PCMSK0_cfg);
   rf_ata5785_write_sram(rf_PCMSK1_cfg);
   rf_ata5785_write_sram(rf_PCICR_cfg);
   rf_ata5785_write_sram(rf_MCUCR_cfg);
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_Seq2;
}

static void McalAtaRfd_lvInitFunction_Seq2(void){
   rf_ata5785_write_sram(rf_temperatureCalibration_cfg);
   rf_ata5785_write_sram(rf_trxCalibConfiguration_cfg);
   rf_ata5785_write_sram(rf_sleepModeConfig_cfg);
   rf_ata5785_write_sram(rf_frcCalibrationConfiguration_cfg);
   rf_ata5785_write_sram(rf_pollConfig_cfg);
   rf_ata5785_write_sram(rf_calib_srcRes_cfg);
   rf_ata5785_write_sram(rf_calib_srcCorVal_cfg);
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_Seq3;
}

static void McalAtaRfd_lvInitFunction_Seq3(void){
   rf_ata5785_write_sram(rf_sramService3_cfg);
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_Seq4;
}

static void McalAtaRfd_lvInitFunction_Seq4(void){
   rf_ata5785_write_sram(rf_sramService4_cfg);
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_Seq5;
}

static void McalAtaRfd_lvInitFunction_Seq5(void){
   rf_ata5785_write_sram(rf_gapMode_cfg);
   rf_ata5785_write_sram(rf_eomConfig_cfg);
   rf_ata5785_write_sram(rf_tempMeas_cfg);
   rf_ata5785_write_sram(rf_sysConf_rd);
   rf_ata5785_write_sram(rf_disableClock_cfg);
   rf_ata5785_write_sram(rf_setClockDivider_cfg);
   rf_ata5785_write_sram(rf_reenableClock_cfg);
   McalAtaRfd_stTelegram.mode    = 0x00;
   McalAtaRfd_stTelegram.channel = 0x00;
   rf_ata5785_set_mode(McalAtaRfd_stTelegram.mode, McalAtaRfd_stTelegram.channel);
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_Seq6;
}

static void McalAtaRfd_lvInitFunction_Seq6(void){
   rf_ata5785_get_events(McalAtaRfd_stTelegram.events);
   infMcalLinMcalAta_vDisableCSig0();
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_StartService;
}

static void McalAtaRfd_lvInitFunction_StartService(void){
   if(FALSE != intMcalDio_bIsFrequency433KHz()){
      SetServNPath(0x83);
   }
   else{
      SetServNPath(0x84);
   }
   Os_Enable_CAT2ISR_TelRec();
   McalAtaRfd_lfptrInitFunction = McalAtaRfd_lvInitFunction_Initialized;
}

static void McalAtaRfd_lvInitFunction_Initialized(void){
}

static uint8 rf_ata5785_read_version(void){
   uint8 rtn;
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x13);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   rtn = infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   release_ata5785();
   return rtn;
}

static void rf_ata5785_set_mode(uint8 mode, uint8 channel){
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x0D);
   infMcalLinMcalAta_u8ActiveTransferSpi(mode);
   infMcalLinMcalAta_u8ActiveTransferSpi(channel);
   release_ata5785();
   return;
}

static void rf_ata5785_write_sram(const uint8 data[]){
   uint8 i;
   uint8 length;
   uint8 offset;
   union{
      uint16 ui;
      uint8  uc[2];
   }addr;

#define SRAM_BUFFER_SIZE 32
   addr.ui = (uint16)data[0];
   addr.ui <<= 8;
   addr.ui += (uint16) data[1];
   length = data[2];
   offset = 3;
   do{
      if(length <= SRAM_BUFFER_SIZE){
         select_ata5785();
         infMcalLinMcalAta_u8ActiveTransferSpi(0x07);
         infMcalLinMcalAta_u8ActiveTransferSpi(length);
         infMcalLinMcalAta_u8ActiveTransferSpi((uint8) (addr.ui>>8));
         infMcalLinMcalAta_u8ActiveTransferSpi((uint8) addr.ui);
         for(i = 0; i < length; i++) infMcalLinMcalAta_u8ActiveTransferSpi(data[i+offset]);
         release_ata5785();
         length = 0;
      }
      else{
         select_ata5785();
         infMcalLinMcalAta_u8ActiveTransferSpi(0x07 );
         infMcalLinMcalAta_u8ActiveTransferSpi(SRAM_BUFFER_SIZE);
         infMcalLinMcalAta_u8ActiveTransferSpi((uint8) (addr.ui>>8));
         infMcalLinMcalAta_u8ActiveTransferSpi((uint8) addr.ui);
         for(i = 0; i < SRAM_BUFFER_SIZE; i++) infMcalLinMcalAta_u8ActiveTransferSpi(data[i+offset]);
         release_ata5785();
         addr.ui += SRAM_BUFFER_SIZE;
         length  -= SRAM_BUFFER_SIZE;
         offset  += SRAM_BUFFER_SIZE;
      }
   }while(length > 0);
   return;
}

static void rf_ata5785_set_watchdog(const uint8 data[]){
   select_ata5785();
   infMcalLinMcalAta_u8ActiveTransferSpi(0x10);
   infMcalLinMcalAta_u8ActiveTransferSpi(data[0]);
   release_ata5785();
   return;
}

static void rf_ata5785_system_reset(void){
   select_ata5785();
   (void)infMcalLinMcalAta_u8ActiveTransferSpi(0x15);
   (void)infMcalLinMcalAta_u8ActiveTransferSpi(0x00);
   release_ata5785();
   return;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

