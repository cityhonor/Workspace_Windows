/******************************************************************************/
/* File   : Wrapper_HBG_Output.cpp                                            */
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
/* All rights reserved. Copyright � 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Rte_CtApHufTpmsSWC.h"

#include "Wrapper_HBG_Output.h"
#ifdef _EcuVirtual
#include "RTE_Stub_Output.h"
#else
#endif

#include "Wrapper_HBG_NvmServicesX.h"
#include "Wrapper_HBG_CalPrmX.h"
#include "Wrapper_HBG_CddDataX.h"
#include "Wrapper_HBG_CcmX.h"
#include "Wrapper_HBG_FlexRayDataX.h"
#include "Wrapper_HBG_StbMBX.h"
#include "Wrapper_HBG_DemServicesX.h"

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
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciCommonBlock                           = { &Wrap_HBG_Call_NvmRdciCommonBlock_GetDataIndex,       &Wrap_HBG_Call_NvmRdciCommonBlock_GetErrorStatus,       &Wrap_HBG_Call_NvmRdciCommonBlock_ReadBlock,      &Wrap_HBG_Call_NvmRdciCommonBlock_SetDataIndex,     &Wrap_HBG_Call_NvmRdciCommonBlock_SetRamBlockStatus,      &Wrap_HBG_Call_NvmRdciCommonBlock_WriteBlock      };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciDiagBlock1                            = { &Wrap_HBG_Call_NvmRdciDiagBlock1_GetDataIndex,        &Wrap_HBG_Call_NvmRdciDiagBlock1_GetErrorStatus,        &Wrap_HBG_Call_NvmRdciDiagBlock1_ReadBlock,       &Wrap_HBG_Call_NvmRdciDiagBlock1_SetDataIndex,      &Wrap_HBG_Call_NvmRdciDiagBlock1_SetRamBlockStatus,       &Wrap_HBG_Call_NvmRdciDiagBlock1_WriteBlock       };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciDiagBlock2                            = { &Wrap_HBG_Call_NvmRdciDiagBlock2_GetDataIndex,        &Wrap_HBG_Call_NvmRdciDiagBlock2_GetErrorStatus,        &Wrap_HBG_Call_NvmRdciDiagBlock2_ReadBlock,       &Wrap_HBG_Call_NvmRdciDiagBlock2_SetDataIndex,      &Wrap_HBG_Call_NvmRdciDiagBlock2_SetRamBlockStatus,       &Wrap_HBG_Call_NvmRdciDiagBlock2_WriteBlock       };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciErfsBlock                             = { &Wrap_HBG_Call_NvmRdciErfsBlock_GetDataIndex,         &Wrap_HBG_Call_NvmRdciErfsBlock_GetErrorStatus,         &Wrap_HBG_Call_NvmRdciErfsBlock_ReadBlock,        &Wrap_HBG_Call_NvmRdciErfsBlock_SetDataIndex,       &Wrap_HBG_Call_NvmRdciErfsBlock_SetRamBlockStatus,        &Wrap_HBG_Call_NvmRdciErfsBlock_WriteBlock        };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciErfsEcoBlock                          = { &Wrap_HBG_Call_NvmRdciErfsEcoBlock_GetDataIndex,      &Wrap_HBG_Call_NvmRdciErfsEcoBlock_GetErrorStatus,      &Wrap_HBG_Call_NvmRdciErfsEcoBlock_ReadBlock,     &Wrap_HBG_Call_NvmRdciErfsEcoBlock_SetDataIndex,    &Wrap_HBG_Call_NvmRdciErfsEcoBlock_SetRamBlockStatus,     &Wrap_HBG_Call_NvmRdciErfsEcoBlock_WriteBlock     };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciErfsTsaBlock                          = { &Wrap_HBG_Call_NvmRdciErfsTsaBlock_GetDataIndex,      &Wrap_HBG_Call_NvmRdciErfsTsaBlock_GetErrorStatus,      &Wrap_HBG_Call_NvmRdciErfsTsaBlock_ReadBlock,     &Wrap_HBG_Call_NvmRdciErfsTsaBlock_SetDataIndex,    &Wrap_HBG_Call_NvmRdciErfsTsaBlock_SetRamBlockStatus,     &Wrap_HBG_Call_NvmRdciErfsTsaBlock_WriteBlock     };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciRidQrBlock1                           = { &Wrap_HBG_Call_NvmRdciRidQrBlock1_GetDataIndex,       &Wrap_HBG_Call_NvmRdciRidQrBlock1_GetErrorStatus,       &Wrap_HBG_Call_NvmRdciRidQrBlock1_ReadBlock,      &Wrap_HBG_Call_NvmRdciRidQrBlock1_SetDataIndex,     &Wrap_HBG_Call_NvmRdciRidQrBlock1_SetRamBlockStatus,      &Wrap_HBG_Call_NvmRdciRidQrBlock1_WriteBlock      };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciRidQrBlock2                           = { &Wrap_HBG_Call_NvmRdciRidQrBlock2_GetDataIndex,       &Wrap_HBG_Call_NvmRdciRidQrBlock2_GetErrorStatus,       &Wrap_HBG_Call_NvmRdciRidQrBlock2_ReadBlock,      &Wrap_HBG_Call_NvmRdciRidQrBlock2_SetDataIndex,     &Wrap_HBG_Call_NvmRdciRidQrBlock2_SetRamBlockStatus,      &Wrap_HBG_Call_NvmRdciRidQrBlock2_WriteBlock      };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciWarnStatusBlock                       = { &Wrap_HBG_Call_NvmRdciWarnStatusBlock_GetDataIndex,   &Wrap_HBG_Call_NvmRdciWarnStatusBlock_GetErrorStatus,   &Wrap_HBG_Call_NvmRdciWarnStatusBlock_ReadBlock,  &Wrap_HBG_Call_NvmRdciWarnStatusBlock_SetDataIndex, &Wrap_HBG_Call_NvmRdciWarnStatusBlock_SetRamBlockStatus,  &Wrap_HBG_Call_NvmRdciWarnStatusBlock_WriteBlock  };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciZoHistoryBlock                        = { &Wrap_HBG_Call_NvmRdciZoHistoryBlock_GetDataIndex,    &Wrap_HBG_Call_NvmRdciZoHistoryBlock_GetErrorStatus,    &Wrap_HBG_Call_NvmRdciZoHistoryBlock_ReadBlock,   &Wrap_HBG_Call_NvmRdciZoHistoryBlock_SetDataIndex,  &Wrap_HBG_Call_NvmRdciZoHistoryBlock_SetRamBlockStatus,   &Wrap_HBG_Call_NvmRdciZoHistoryBlock_WriteBlock   };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciZomBlock1                             = { &Wrap_HBG_Call_NvmRdciZomBlock1_GetDataIndex,         &Wrap_HBG_Call_NvmRdciZomBlock1_GetErrorStatus,         &Wrap_HBG_Call_NvmRdciZomBlock1_ReadBlock,        &Wrap_HBG_Call_NvmRdciZomBlock1_SetDataIndex,       &Wrap_HBG_Call_NvmRdciZomBlock1_SetRamBlockStatus,        &Wrap_HBG_Call_NvmRdciZomBlock1_WriteBlock        };
struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciZomBlock2                             = { &Wrap_HBG_Call_NvmRdciZomBlock2_GetDataIndex,         &Wrap_HBG_Call_NvmRdciZomBlock2_GetErrorStatus,         &Wrap_HBG_Call_NvmRdciZomBlock2_ReadBlock,        &Wrap_HBG_Call_NvmRdciZomBlock2_SetDataIndex,       &Wrap_HBG_Call_NvmRdciZomBlock2_SetRamBlockStatus,        &Wrap_HBG_Call_NvmRdciZomBlock2_WriteBlock        };
struct Rte_PDS_CtApHufTpmsSWC_PiCalPrmRDCi_R                      tRpCalPrmRDCi                                   = { &Wrap_HBG_Prm_CRdciCorHoldOffTime,
                                                                                                                      &Wrap_HBG_Prm_CRdciDefaultLoadCond,
                                                                                                                      &Wrap_HBG_Prm_CRdciDefaultMenuSel,
                                                                                                                      &Wrap_HBG_Prm_CRdciDeltaPLR,
                                                                                                                      &Wrap_HBG_Prm_CRdciDispConfTimeout,
                                                                                                                      &Wrap_HBG_Prm_CRdciDispReset,
                                                                                                                      &Wrap_HBG_Prm_CRdciDpToIPmin,
                                                                                                                      &Wrap_HBG_Prm_CRdciDtAmbPrewarn,
                                                                                                                      &Wrap_HBG_Prm_CRdciEcoRcpEnable,
                                                                                                                      &Wrap_HBG_Prm_CRdciErfsEnable,
                                                                                                                      &Wrap_HBG_Prm_CRdciErfsPlacardSource,
                                                                                                                      &Wrap_HBG_Prm_CRdciErfsReifenEco,
                                                                                                                      &Wrap_HBG_Prm_CRdciFastDeflateEnable,
                                                                                                                      &Wrap_HBG_Prm_CRdciLearnLocateConfig,
                                                                                                                      &Wrap_HBG_Prm_CRdciLongHoldTime,
                                                                                                                      &Wrap_HBG_Prm_CRdciMaxCorRcp,
                                                                                                                      &Wrap_HBG_Prm_CRdciMaxCorTime,
                                                                                                                      &Wrap_HBG_Prm_CRdciMaxThreshold,
                                                                                                                      &Wrap_HBG_Prm_CRdciMinRcpFa,
                                                                                                                      &Wrap_HBG_Prm_CRdciMinRcpRa,
                                                                                                                      &Wrap_HBG_Prm_CRdciNumPrewarnDetect,
                                                                                                                      &Wrap_HBG_Prm_CRdciPInitRangeMax,
                                                                                                                      &Wrap_HBG_Prm_CRdciPanneBefPos,
                                                                                                                      &Wrap_HBG_Prm_CRdciPanneTh,
                                                                                                                      &Wrap_HBG_Prm_CRdciParkSupExtParkSupConfig,
                                                                                                                      &Wrap_HBG_Prm_CRdciParkSupMobilityLossThresholdValue,
                                                                                                                      &Wrap_HBG_Prm_CRdciParkSupNotificationThresholdValueC,
                                                                                                                      &Wrap_HBG_Prm_CRdciParkSupNotificationThresholdValueNc,
                                                                                                                      &Wrap_HBG_Prm_CRdciParkSupTolNoTempComp,
                                                                                                                      &Wrap_HBG_Prm_CRdciParkSupTolTempComp,
                                                                                                                      &Wrap_HBG_Prm_CRdciParkSupWarningThresholdValueC,
                                                                                                                      &Wrap_HBG_Prm_CRdciParkSupWarningThresholdValueNc,
                                                                                                                      &Wrap_HBG_Prm_CRdciPrewarnEnable,
                                                                                                                      &Wrap_HBG_Prm_CRdciPrewarnIgnition,
                                                                                                                      &Wrap_HBG_Prm_CRdciResetPlausi,
                                                                                                                      &Wrap_HBG_Prm_CRdciRidEnable,
                                                                                                                      &Wrap_HBG_Prm_CRdciSensorForeignAkRdk,
                                                                                                                      &Wrap_HBG_Prm_CRdciSensorLocSync,
                                                                                                                      &Wrap_HBG_Prm_CRdciShortHoldTime,
                                                                                                                      &Wrap_HBG_Prm_CRdciSpeedCcmEnable,
                                                                                                                      &Wrap_HBG_Prm_CRdciSpeedCcmHyst,
                                                                                                                      &Wrap_HBG_Prm_CRdciSpeedCcmPressOffsetFa,
                                                                                                                      &Wrap_HBG_Prm_CRdciSpeedCcmPressOffsetRa,
                                                                                                                      &Wrap_HBG_Prm_CRdciSpeedCcmTh,
                                                                                                                      &Wrap_HBG_Prm_CRdciSpeedCcmTime,
                                                                                                                      &Wrap_HBG_Prm_CRdciStatInit,
                                                                                                                      &Wrap_HBG_Prm_CRdciTPrewarnNc,
                                                                                                                      &Wrap_HBG_Prm_CRdciTRefShift,
                                                                                                                      &Wrap_HBG_Prm_CRdciThCTol,
                                                                                                                      &Wrap_HBG_Prm_CRdciThNCTol,
                                                                                                                      &Wrap_HBG_Prm_CRdciTimeoutPrewarn,
                                                                                                                      &Wrap_HBG_Prm_CRdciTpmsMarket,
                                                                                                                      &Wrap_HBG_Prm_CRdciTrefSeasAdjConfig,
                                                                                                                      &Wrap_HBG_Prm_CRdciTrefSeasonalAdjustment,
                                                                                                                      &Wrap_HBG_Prm_CRdciTyrIdFiltGw,
                                                                                                                      &Wrap_HBG_Prm_CRdciUiaThC,
                                                                                                                      &Wrap_HBG_Prm_CRdciUiaThNc,
                                                                                                                      &Wrap_HBG_Prm_CRdciUiwThC,
                                                                                                                      &Wrap_HBG_Prm_CRdciUiwThNc,
                                                                                                                      &Wrap_HBG_Prm_CRdciXminCoolTire,
                                                                                                                      &Wrap_HBG_Prm_C_Funktion_ReifenPannenerkennung_aktiv_e 
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiCcm_DISP_CC_BYPA_00_P             tPpCcm_DISP_CC_BYPA_00                          = { &Wrap_HBG_Send_Ccm };
struct Rte_PDS_CtApHufTpmsSWC_PiCddAbsData_R                      tRpCddAbsData                                   = { &Wrap_HBG_Receive_CddAbsData };
struct Rte_PDS_CtApHufTpmsSWC_PiCddRdcData_R                      tRpCddRdcData                                   = { &Wrap_HBG_Receive_CddRdcData };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_CON_VEH_R                   tRpFrPdu_CON_VEH                                = { &Wrap_HBG_IsUpdated_CON_VEH, &Wrap_HBG_Read_CON_VEH };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_ST_TYR_P                    tPpFrPdu_ST_TYR                                 = { &Wrap_HBG_Send_ST_TYR };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_V_VEH_R                     tRpFrPdu_V_VEH                                  = { &Wrap_HBG_IsUpdated_V_VEH, &Wrap_HBG_Read_V_VEH };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_WMOM_DRV_4_R                tRpFrPdu_WMOM_DRV_4                             = { &Wrap_HBG_IsUpdated_WMOM_DRV_4, &Wrap_HBG_Read_WMOM_DRV_4 };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_A_TEMP_R                    tRpFrPdu_A_TEMP                                 = { &Wrap_HBG_IsUpdated_TEMP_EX, &Wrap_HBG_Read_TEMP_EX };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_BEDIENUNG_FAHRWERK_R        tRpFrPdu_BEDIENUNG_FAHRWERK                     = { 
                                                                                                                      &Wrap_HBG_IsUpdated_OP_IDR_SLCTN,
                                                                                                                      &Wrap_HBG_IsUpdated_OP_SLCTN_TYR_AVLB,
                                                                                                                      &Wrap_HBG_IsUpdated_OP_TAR_P_LOCO_TPCT,
                                                                                                                      &Wrap_HBG_IsUpdated_OP_TPCT,
                                                                                                                      &Wrap_HBG_IsUpdated_OP_TYR_SEA_TPCT,
                                                                                                                      &Wrap_HBG_IsUpdated_RQ_OL_TPCT,
                                                                                                                      &Wrap_HBG_IsUpdated_ST_IDR_MSGC,
                                                                                                                      &Wrap_HBG_Read_OP_IDR_SLCTN,
                                                                                                                      &Wrap_HBG_Read_OP_SLCTN_TYR_AVLB,
                                                                                                                      &Wrap_HBG_Read_OP_TAR_P_LOCO_TPCT,
                                                                                                                      &Wrap_HBG_Read_OP_TPCT,
                                                                                                                      &Wrap_HBG_Read_OP_TYR_SEA_TPCT,
                                                                                                                      &Wrap_HBG_Read_RQ_OL_TPCT,
                                                                                                                      &Wrap_HBG_Read_ST_IDR_MSGC
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_DT_PT_1_R                   tRpFrPdu_DT_PT_1                                = { &Wrap_HBG_IsUpdated_AIP_ENG_DRV, &Wrap_HBG_Read_AIP_ENG_DRV };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_EINHEITEN_BN2020_R          tRpFrPdu_EINHEITEN_BN2020                       = {
                                                                                                                      &Wrap_HBG_IsUpdated_UN_AIP,
                                                                                                                      &Wrap_HBG_IsUpdated_UN_MILE,
                                                                                                                      &Wrap_HBG_IsUpdated_UN_TEMP,
                                                                                                                      &Wrap_HBG_Read_UN_AIP,
                                                                                                                      &Wrap_HBG_Read_UN_MILE,
                                                                                                                      &Wrap_HBG_Read_UN_TEMP
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_FZZSTD_R                    tRpFrPdu_FZZSTD                                 = {
                                                                                                                      &Wrap_HBG_IsUpdated_ST_ENERG_FZM,
                                                                                                                      &Wrap_HBG_IsUpdated_ST_ILK_ERRM_FZM,
                                                                                                                      &Wrap_HBG_Read_ST_ENERG_FZM,
                                                                                                                      &Wrap_HBG_Read_ST_ILK_ERRM_FZM
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_KILOMETERSTAND_R            tRpFrPdu_KILOMETERSTAND                         = { 
                                                                                                                      &Wrap_HBG_IsUpdated_MILE_KM,
                                                                                                                      &Wrap_HBG_Read_MILE_KM
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_NMEARawData2Part2_R         tRpFrPdu_NMEARawData2Part2                      = { 
                                                                                                                      &Wrap_HBG_IsUpdated_GNSSPositionAltitude,
                                                                                                                      &Wrap_HBG_Read_GNSSPositionAltitude
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_NMEARawData2Part3_R         tRpFrPdu_NMEARawData2Part3                      = { 
                                                                                                                      &Wrap_HBG_IsUpdated_GNSSErrorAltitudeMeters,
                                                                                                                      &Wrap_HBG_Read_GNSSErrorAltitudeMeters
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_RELATIVZEIT_R               tRpFrPdu_RELATIVZEIT                            = { &Wrap_HBG_IsUpdated_T_SEC_COU_REL, Wrap_HBG_Read_T_SEC_COU_REL };
struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_UHRZEIT_DATUM_R             tRpFrPdu_UHRZEIT_DATUM                          = { &Wrap_HBG_IsUpdated_UHRZEIT_DATUM, Wrap_HBG_Read_UHRZEIT_DATUM };

struct Rte_PDS_CtApHufTpmsSWC_PiRdci_FrBusState_R                 tRpRdci_FrBusState                              = { &Wrap_HBG_IsUpdated_FrBusState, Wrap_HBG_Read_FrBusState };

struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdci1To3WrongWuMountedInfo             = {
                                                                                                                      &Wrap_HBG_Call_Dem_1To3WrongWuMountedInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdci1To3WrongWuMounted                 = { 
                                                                                                                      &Wrap_HBG_Call_Dem_1To3WrongWuMounted_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_1To3WrongWuMounted_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdci4WrongWuMountedInfo                = {
                                                                                                                      &Wrap_HBG_Call_Dem_4WrongWuMountedInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdci4WrongWuMounted                    = { 
                                                                                                                      &Wrap_HBG_Call_Dem_4WrongWuMounted_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_4WrongWuMounted_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciATempInvalidInfo                   = {
                                                                                                                      &Wrap_HBG_Call_Dem_ATempInvalidInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciATempInvalid                       = { 
                                                                                                                      &Wrap_HBG_Call_Dem_ATempInvalid_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_ATempInvalid_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciATempTimeoutInfo                   = {
                                                                                                                      &Wrap_HBG_Call_Dem_ATempTimeoutInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciATempTimeout                       = { 
                                                                                                                      &Wrap_HBG_Call_Dem_ATempTimeout_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_ATempTimeout_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciAusfallInfo                        = {
                                                                                                                      &Wrap_HBG_Call_Dem_AusfallInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciAusfall                            = { 
                                                                                                                      &Wrap_HBG_Call_Dem_Ausfall_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_Ausfall_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciAutoLearningFailedInfo             = {
                                                                                                                      &Wrap_HBG_Call_Dem_AutoLearningFailedInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciAutoLearningFailed                 = { 
                                                                                                                      &Wrap_HBG_Call_Dem_AutoLearningFailed_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_AutoLearningFailed_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciBefuellhinweisInfo                 = {
                                                                                                                      &Wrap_HBG_Call_Dem_BefuellhinweisInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciBefuellhinweis                     = { 
                                                                                                                      &Wrap_HBG_Call_Dem_Befuellhinweis_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_Befuellhinweis_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciConVehAliveInfo                    = {
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehAliveInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciConVehAlive                        = { 
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehAlive_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehAlive_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciConVehCrcInfo                      = {
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehCrcInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciConVehCrc                          = { 
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehCrc_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehCrc_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciConVehInvalidInfo                  = {
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehInvalidInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciConVehInvalid                      = { 
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehInvalid_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehInvalid_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciConVehTimeoutInfo                  = {
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehTimeoutInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciConVehTimeout                      = { 
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehTimeout_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_ConVehTimeout_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciDruckwarnungInfo                   = {
                                                                                                                      &Wrap_HBG_Call_Dem_DruckwarnungInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciDruckwarnung                       = { 
                                                                                                                      &Wrap_HBG_Call_Dem_Druckwarnung_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_Druckwarnung_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciEinheitenBn2020InvalidInfo         = {
                                                                                                                      &Wrap_HBG_Call_Dem_EinheitenBn2020InvalidInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciEinheitenBn2020Invalid             = { 
                                                                                                                      &Wrap_HBG_Call_Dem_EinheitenBn2020Invalid_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_EinheitenBn2020Invalid_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciEinheitenBn2020TimeoutInfo         = {
                                                                                                                      &Wrap_HBG_Call_Dem_EinheitenBn2020TimeoutInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciEinheitenBn2020Timeout             = { 
                                                                                                                      &Wrap_HBG_Call_Dem_EinheitenBn2020Timeout_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_EinheitenBn2020Timeout_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciErfsCodingDataInconsistentInfo     = {
                                                                                                                      &Wrap_HBG_Call_Dem_ErfsCodingDataInconsistentInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciErfsCodingDataInconsistent         = {
                                                                                                                      &Wrap_HBG_Call_Dem_ErfsCodingDataInconsistent_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_ErfsCodingDataInconsistent_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciGatewayOrAntennaErrorInfo          = {
                                                                                                                      &Wrap_HBG_Call_Dem_GatewayOrAntennaErrorInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciGatewayOrAntennaError              = { 
                                                                                                                      &Wrap_HBG_Call_Dem_GatewayOrAntennaError_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_GatewayOrAntennaError_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciKalibrierungInfo                   = {
                                                                                                                      &Wrap_HBG_Call_Dem_KalibrierungInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciKalibrierung                       = { 
                                                                                                                      &Wrap_HBG_Call_Dem_Kalibrierung_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_Kalibrierung_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciOtherWuSensorTypeInfo              = {
                                                                                                                      &Wrap_HBG_Call_Dem_OtherWuSensorTypeInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciOtherWuSensorType                  = { 
                                                                                                                      &Wrap_HBG_Call_Dem_OtherWuSensorType_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_OtherWuSensorType_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciPannenwarnungInfo                  = {
                                                                                                                      &Wrap_HBG_Call_Dem_PannenwarnungInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciPannenwarnung                      = { 
                                                                                                                      &Wrap_HBG_Call_Dem_Pannenwarnung_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_Pannenwarnung_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciPartialSystemAvailabilityInfo      = {
                                                                                                                      &Wrap_HBG_Call_Dem_PartialSystemAvailabilityInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciPartialSystemAvailability          = { 
                                                                                                                      &Wrap_HBG_Call_Dem_PartialSystemAvailability_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_PartialSystemAvailability_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciSystemNotAvailableInfo             = {
                                                                                                                      &Wrap_HBG_Call_Dem_SystemNotAvailableInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciSystemNotAvailable                 = { 
                                                                                                                      &Wrap_HBG_Call_Dem_SystemNotAvailable_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_SystemNotAvailable_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRdcDtPckg1AliveInfo                = {
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1AliveInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRdcDtPckg1Alive                    = { 
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1Alive_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1Alive_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRdcDtPckg1InvalidInfo              = {
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1InvalidInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRdcDtPckg1Invalid                  = { 
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1Invalid_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1Invalid_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRdcDtPckg1TimeoutInfo              = {
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1TimeoutInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRdcDtPckg1Timeout                  = { 
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1Timeout_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_RdcDtPckg1Timeout_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRelativzeitInvalidInfo             = {
                                                                                                                      &Wrap_HBG_Call_Dem_RelativzeitInvalidInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRelativzeitInvalid                 = { 
                                                                                                                      &Wrap_HBG_Call_Dem_RelativzeitInvalid_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_RelativzeitInvalid_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRelativzeitTimeoutInfo             = {
                                                                                                                      &Wrap_HBG_Call_Dem_RelativzeitTimeoutInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRelativzeitTimeout                 = { 
                                                                                                                      &Wrap_HBG_Call_Dem_RelativzeitTimeout_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_RelativzeitTimeout_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRfExternalInterferenceInfo         = {
                                                                                                                      &Wrap_HBG_Call_Dem_RfExternalInterferenceInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRfExternalInterference             = { 
                                                                                                                      &Wrap_HBG_Call_Dem_RfExternalInterference_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_RfExternalInterference_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciTpmsManufactoryModeInfo            = {
                                                                                                                      &Wrap_HBG_Call_Dem_TpmsManufactoryModeInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciTpmsManufactoryMode                = { 
                                                                                                                      &Wrap_HBG_Call_Dem_TpmsManufactoryMode_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_TpmsManufactoryMode_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciUnspecifiedWfcDefectInfo           = {
                                                                                                                      &Wrap_HBG_Call_Dem_UnspecifiedWfcDefectInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciUnspecifiedWfcDefect               = { 
                                                                                                                      &Wrap_HBG_Call_Dem_UnspecifiedWfcDefect_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_UnspecifiedWfcDefect_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciUnspecifiedWuMuteInfo              = {
                                                                                                                      &Wrap_HBG_Call_Dem_UnspecifiedWuMuteInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciUnspecifiedWuMute                  = { 
                                                                                                                      &Wrap_HBG_Call_Dem_UnspecifiedWuMute_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_UnspecifiedWuMute_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehAliveFailureInfo               = {
                                                                                                                      &Wrap_HBG_Call_Dem_VVehAliveFailureInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehAliveFailure                   = { 
                                                                                                                      &Wrap_HBG_Call_Dem_VVehAliveFailure_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_VVehAliveFailure_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehCogInvalidInfo                 = {
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCogInvalidInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehCogInvalid                     = { 
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCogInvalid_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCogInvalid_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehCogQualifierInfo               = {
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCogQualifierInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehCogQualifier                   = { 
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCogQualifier_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCogQualifier_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehCrcFailureInfo                 = {
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCrcFailureInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehCrcFailure                     = { 
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCrcFailure_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_VVehCrcFailure_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehTimeoutInfo                    = {
                                                                                                                      &Wrap_HBG_Call_Dem_VVehTimeoutInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehTimeout                        = { 
                                                                                                                      &Wrap_HBG_Call_Dem_VVehTimeout_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_VVehTimeout_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWarnruecknahmeInfo                 = {
                                                                                                                      &Wrap_HBG_Call_Dem_WarnruecknahmeInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWarnruecknahme                     = { 
                                                                                                                      &Wrap_HBG_Call_Dem_Warnruecknahme_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_Warnruecknahme_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuDefectFlInfo                     = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectFlInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuDefectFl                         = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectFl_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectFl_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuDefectFrInfo                     = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectFrInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuDefectFr                         = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectFr_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectFr_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuDefectRlInfo                     = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectRlInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuDefectRl                         = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectRl_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectRl_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuDefectRrInfo                     = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectRrInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuDefectRr                         = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectRr_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuDefectRr_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLocalisationFailedInfo           = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuLocalisationFailedInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLocalisationFailed               = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuLocalisationFailed_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuLocalisationFailed_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLowBatteryFlInfo                 = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryFlInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLowBatteryFl                     = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryFl_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryFl_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLowBatteryFrInfo                 = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryFrInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLowBatteryFr                     = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryFr_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryFr_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLowBatteryRlInfo                 = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryRlInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLowBatteryRl                     = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryRl_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryRl_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLowBatteryRrInfo                 = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryRrInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLowBatteryRr                     = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryRr_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuLowBatteryRr_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuMuteFlInfo                       = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteFlInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuMuteFl                           = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteFl_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteFl_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuMuteFrInfo                       = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteFrInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuMuteFr                           = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteFr_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteFr_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuMuteRlInfo                       = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteRlInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuMuteRl                           = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteRl_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteRl_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuMuteRrInfo                       = {
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteRrInfo_GetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuMuteRr                           = { 
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteRr_ResetEventStatus,
                                                                                                                      &Wrap_HBG_Call_Dem_WuMuteRr_SetEventStatus
                                                                                                                    };
struct Rte_PDS_CtApHufTpmsSWC_StbMB_AbsoluteTimeBaseValue_R       tStbMB_AbsoluteTimeBaseValue                    = { &Wrap_HBG_Call_StbMB_GetAbsoluteTime,
                                                                                                                      &Wrap_HBG_Call_StbMB_GetGlobalTime,
                                                                                                                      &Wrap_HBG_Call_StbMB_GetSyncState,
                                                                                                                      &Wrap_HBG_Call_StbMB_GetTickDuration
                                                                                                                    };

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Send_ST_TYR(P2CONST(Rdci_ST_TYR_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) data){
   return 0;
}

void Wrap_HBG_CyclicOutputFunction(void){
#ifdef _EcuVirtual
   RTE_Stub_CyclicOutputFunction();
#else
#endif
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

