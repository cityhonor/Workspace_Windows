#pragma once
/******************************************************************************/
/* File   : Wrapper_HBG_CddDataX.h                                            */
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

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define cMaxReElements  7
#define cRecEleIx_Slot0 0                   // Historische Position 0
#define cRecEleIx_Slot1 1                   // Historische Position 1
#define cRecEleIx_Slot2 2                   // Historische Position 2
#define cRecEleIx_Slot3 3                   // Historische Position 3
#define cRecEleIx_FR    4                   // Fremdrad
#define cRecEleIx_RID   5                   // RID Telegramm
#define cRecEleIx_Alive 6                   // Alive Botschaft

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct
{
  ImpTypeRecCddRdcData  tRecCddRdcData;
  uint16                ushPabs_iso_hPa;
  sint16                sshTabs_iso_K;
  uint16                ushPlast_rel_hPa;
  sint16                sshTlast_celsius;
  boolean               bAliveError;
  boolean               bInputIsochor;
  boolean               bBatteryEmpty;
  boolean               bTyrIdFromFile;
  boolean               bSuppIdFromFile;
  boolean               bPckgIdFromFile;
  boolean               bDt1PressureFromFile;
  boolean               bDt2TemperatureFromFile;
  boolean               bWuDataFromFile;
} RdcDataType;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif

extern void PutTimerTicks( uint32 ulTimerTicks );
extern uint32 ulGetTimerTicks(void);
extern uint32 ulGetTRdcRfWriteCounter(void);
extern uint32 ulGetTRdcRfReadCounter(void);
extern void InitRecCddRdcData(void);
extern ImpTypeRecCddRdcData * ptGetRecCddRdcDataPtr( uint8 ucIx );
extern RdcDataType * ptGetRdcDataPtr(uint8 ucRe);
extern void PutRecCddRdcData( uint8 ucRe );
extern uint16 ushGetTelCountCddRdcDataPtr( uint8 ucRe );
extern uint8 ucGetNextValidAliveCounter( uint8 ucAliveStartValue );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Receive_CddAbsData(P2VAR(ImpTypeRecCddAbsData, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Receive_CddRdcData( P2VAR(ImpTypeRecCddRdcData, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );

#ifdef __cplusplus
}
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

