/******************************************************************************/
/* File   : Wrapper_HBG_FlexRayData.cpp                                       */
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
#include "Rte_CtApHufTpmsSWC_Type.h"
#include "Rte_CtApHufTpmsSWC.h"
#include "Wrapper_HBG_FlexRayDataX.h"

#ifdef _EcuVirtual
#include "RTE_Stub_FlexRayDataX.h"
#else
#endif

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define cIx_DISP_HR           ((uint8) 0x01)
#define cIx_DISP_MN           ((uint8) 0x02)
#define cIx_DISP_SEC          ((uint8) 0x04)
#define cIx_DISP_DATE_DAY     ((uint8) 0x08)
#define cIx_DISP_DATE_WDAY    ((uint8) 0x10)
#define cIx_DISP_DATE_MON     ((uint8) 0x20)
#define cIx_DISP_DATE_YR      ((uint8) 0x40)
#define cIx_ST_DISP_CTI_DATE  ((uint8) 0x80)

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
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_V_VEH(P2VAR(Rdci_V_VEH_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_V_VEH(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_WMOM_DRV_4(P2VAR(Rdci_WMOM_DRV_4_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_WMOM_DRV_4(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_TEMP_EX(P2VAR(Rdci_TEMP_EX_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_TEMP_EX(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_AIP(P2VAR(Rdci_UN_AIP_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_UN_AIP(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_MILE(P2VAR(Rdci_UN_MILE_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_UN_MILE(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_TEMP(P2VAR(Rdci_UN_TEMP_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_UN_TEMP(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_CON_VEH(P2VAR(Rdci_CON_VEH_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_CON_VEH(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_SLCTN_TYR_AVLB(P2VAR(Rdci_OP_SLCTN_TYR_AVLB_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_OP_SLCTN_TYR_AVLB(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TAR_P_LOCO_TPCT(P2VAR(Rdci_OP_TAR_P_LOCO_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_OP_TAR_P_LOCO_TPCT(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TPCT(P2VAR(Rdci_OP_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_OP_TPCT(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TYR_SEA_TPCT(P2VAR(Rdci_OP_TYR_SEA_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_OP_TYR_SEA_TPCT(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_RQ_OL_TPCT(P2VAR(Rdci_RQ_OL_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_RQ_OL_TPCT(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_IDR_SLCTN(P2VAR(Rdci_OP_IDR_SLCTN_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_OP_IDR_SLCTN(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_IDR_MSGC(P2VAR(Rdci_ST_IDR_MSGC_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_ST_IDR_MSGC(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UHRZEIT_DATUM(P2VAR(Rdci_UHRZEIT_DATUM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_UHRZEIT_DATUM(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_T_SEC_COU_REL(P2VAR(Rdci_T_SEC_COU_REL_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_T_SEC_COU_REL(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_AIP_ENG_DRV(P2VAR(Rdci_AIP_ENG_DRV_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_AIP_ENG_DRV(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_GNSSPositionAltitude(P2VAR(Rdci_GNSSPositionAltitude_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_GNSSPositionAltitude(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_GNSSErrorAltitudeMeters(P2VAR(Rdci_GNSSErrorAltitudeMeters_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_GNSSErrorAltitudeMeters(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_MILE_KM(P2VAR(Rdci_MILE_KM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_MILE_KM(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_ILK_ERRM_FZM(P2VAR(Rdci_ST_ILK_ERRM_FZM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_ST_ILK_ERRM_FZM(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_ENERG_FZM(P2VAR(Rdci_ST_ENERG_FZM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_ST_ENERG_FZM(data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_FrBusState(P2VAR(ImpTypeValFrBusState, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Read_FrBusState(data)
#else
      E_OK
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_TEMP_EX(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_TEMP_EX()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_AIP(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_UN_AIP()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_MILE(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_UN_MILE()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_TEMP(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_UN_TEMP()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_CON_VEH(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_CON_VEH()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_V_VEH(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_V_VEH()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_WMOM_DRV_4(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_WMOM_DRV_4()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_SLCTN_TYR_AVLB(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_OP_SLCTN_TYR_AVLB()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TAR_P_LOCO_TPCT(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_OP_TAR_P_LOCO_TPCT()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TPCT(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_OP_TPCT()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TYR_SEA_TPCT(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_OP_TYR_SEA_TPCT()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_RQ_OL_TPCT(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_RQ_OL_TPCT()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_IDR_MSGC(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_ST_IDR_MSGC()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_IDR_SLCTN(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_OP_IDR_SLCTN()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UHRZEIT_DATUM(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_UHRZEIT_DATUM()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_AIP_ENG_DRV(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_AIP_ENG_DRV()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_GNSSPositionAltitude(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_GNSSPositionAltitude()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_GNSSErrorAltitudeMeters(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_GNSSErrorAltitudeMeters()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_T_SEC_COU_REL(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_T_SEC_COU_REL()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_MILE_KM(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_MILE_KM()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_ILK_ERRM_FZM(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_ST_ILK_ERRM_FZM()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_ENERG_FZM(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_ST_ENERG_FZM()
#else
      TRUE
#endif
   );
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_FrBusState(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_IsUpdated_FrBusState()
#else
      TRUE
#endif
   );
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
