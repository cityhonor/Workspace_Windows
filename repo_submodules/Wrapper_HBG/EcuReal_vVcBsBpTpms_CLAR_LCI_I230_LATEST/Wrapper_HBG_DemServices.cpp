/******************************************************************************/
/* File   : Wrapper_HBG_DemServices.cpp                                       */
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
#include "Rte_CtApHufTpmsSWC_Type.h"
#include "Rte_CtApHufTpmsSWC.h"

#include "Wrapper_HBG_DemServices.h"
#ifdef _EcuVirtual
#include "RTE_Stub_DemServices.h"
#else
#endif


#include "Wrapper_HBG_DcmServices.h"
#include "Wrapper_HBG_DtcNvmBlock.h"
#include "Wrapper_HBG_FlexRayDataX.h"
#include "Wrapper_HBG_StbMBX.h"

#include "DataManagerX.h"
#include "HS_InaktivEreignisX.h"
#include "state_bzX.h"
#include "state_fzzX.h"
#include "SecondaryDTCX.h"
#include "WAlloc_if.h"
#include "USCS.h"
#include "uswarn_ifX.h"

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_TpmsManufactoryModeInfo_GetEventStatus(P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_TpmsManufactoryMode_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_TpmsManufactoryMode_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_1To3WrongWuMountedInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_1To3WrongWuMounted_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_1To3WrongWuMounted_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_4WrongWuMountedInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_4WrongWuMounted_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_4WrongWuMounted_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_AutoLearningFailedInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_AutoLearningFailed_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_AutoLearningFailed_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_GatewayOrAntennaErrorInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_GatewayOrAntennaError_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_GatewayOrAntennaError_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_OtherWuSensorTypeInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_OtherWuSensorType_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_OtherWuSensorType_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RfExternalInterferenceInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RfExternalInterference_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RfExternalInterference_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWfcDefectInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWfcDefect_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWfcDefect_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWuMuteInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWuMute_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWuMute_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFl_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFl_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFr_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFr_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRl_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRl_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRr_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRr_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLocalisationFailedInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLocalisationFailed_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLocalisationFailed_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFl_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFl_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFr_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFr_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRl_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRl_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRr_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRr_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFl_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFl_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFr_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFr_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRl_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRl_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRr_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRr_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempInvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempInvalid_ResetEventStatus(void)
{ 
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempInvalid_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempTimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempTimeout_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempTimeout_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehAliveInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehAlive_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehAlive_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehCrcInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehCrc_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehCrc_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehInvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehInvalid_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehInvalid_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehTimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehTimeout_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehTimeout_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020InvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020Invalid_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020Invalid_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020TimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020Timeout_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020Timeout_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ErfsCodingDataInconsistentInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{  
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ErfsCodingDataInconsistent_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ErfsCodingDataInconsistent_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1AliveInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Alive_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Alive_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1InvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Invalid_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Invalid_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1TimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Timeout_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Timeout_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitInvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitInvalid_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitInvalid_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitTimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitTimeout_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitTimeout_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehAliveFailureInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehAliveFailure_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehAliveFailure_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogInvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogInvalid_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogInvalid_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogQualifierInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogQualifier_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogQualifier_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCrcFailureInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCrcFailure_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCrcFailure_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehTimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehTimeout_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehTimeout_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_KalibrierungInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Kalibrierung_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Kalibrierung_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_AusfallInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Ausfall_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Ausfall_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_PannenwarnungInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Pannenwarnung_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Pannenwarnung_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_PartialSystemAvailabilityInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_PartialSystemAvailability_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_PartialSystemAvailability_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_SystemNotAvailableInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_SystemNotAvailable_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_SystemNotAvailable_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_DruckwarnungInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Druckwarnung_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Druckwarnung_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_BefuellhinweisInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Befuellhinweis_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Befuellhinweis_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WarnruecknahmeInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte )
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Warnruecknahme_ResetEventStatus(void)
{
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Warnruecknahme_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus )
{
   return E_OK;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

