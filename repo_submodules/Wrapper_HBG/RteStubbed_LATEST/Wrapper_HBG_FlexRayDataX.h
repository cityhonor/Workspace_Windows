#pragma once
/******************************************************************************/
/* File   : Wrapper_HBG_FlexRayDataX.h                                        */
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
#ifdef __cplusplus
extern "C"
{
#endif

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_CON_VEH( P2VAR(Rdci_CON_VEH_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_V_VEH( P2VAR(Rdci_V_VEH_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_WMOM_DRV_4( P2VAR(Rdci_WMOM_DRV_4_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_TEMP_EX( P2VAR(Rdci_TEMP_EX_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_SLCTN_TYR_AVLB( P2VAR(Rdci_OP_SLCTN_TYR_AVLB_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TAR_P_LOCO_TPCT( P2VAR(Rdci_OP_TAR_P_LOCO_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TPCT( P2VAR(Rdci_OP_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TYR_SEA_TPCT( P2VAR(Rdci_OP_TYR_SEA_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_RQ_OL_TPCT( P2VAR(Rdci_RQ_OL_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_IDR_SLCTN( P2VAR(Rdci_OP_IDR_SLCTN_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_IDR_MSGC( P2VAR(Rdci_ST_IDR_MSGC_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_AIP_ENG_DRV( P2VAR(Rdci_AIP_ENG_DRV_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_AIP( P2VAR(Rdci_UN_AIP_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_MILE( P2VAR(Rdci_UN_MILE_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_TEMP( P2VAR(Rdci_UN_TEMP_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_ILK_ERRM_FZM( P2VAR(Rdci_ST_ILK_ERRM_FZM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_ENERG_FZM( P2VAR(Rdci_ST_ENERG_FZM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_MILE_KM( P2VAR(Rdci_MILE_KM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_GNSSPositionAltitude( P2VAR(Rdci_GNSSPositionAltitude_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_GNSSErrorAltitudeMeters( P2VAR(Rdci_GNSSErrorAltitudeMeters_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_T_SEC_COU_REL( P2VAR(Rdci_T_SEC_COU_REL_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UHRZEIT_DATUM( P2VAR(Rdci_UHRZEIT_DATUM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_FrBusState( P2VAR(ImpTypeValFrBusState, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_CON_VEH(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_V_VEH(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_WMOM_DRV_4(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_TEMP_EX(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_SLCTN_TYR_AVLB(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TAR_P_LOCO_TPCT(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TPCT(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TYR_SEA_TPCT(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_RQ_OL_TPCT(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_IDR_MSGC(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_IDR_SLCTN(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_AIP_ENG_DRV(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_AIP(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_MILE(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_TEMP(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_ILK_ERRM_FZM(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_ENERG_FZM(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_MILE_KM(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_GNSSPositionAltitude(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_GNSSErrorAltitudeMeters(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_T_SEC_COU_REL(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UHRZEIT_DATUM(void);
FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_FrBusState(void);

#ifdef __cplusplus
}
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

