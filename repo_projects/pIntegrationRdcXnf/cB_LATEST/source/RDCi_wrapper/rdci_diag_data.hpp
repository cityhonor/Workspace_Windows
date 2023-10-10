#pragma once
/******************************************************************************/
/* File   : rdci_diag_data.hpp                                                */
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
#include "Rte_Rdci.hpp"
#include "Rte_Rdci_Type.hpp"
#include "Dtms_types.hpp"
#include "Dtms_control.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define DCM_POS_RESP                                                          0U
#define RDC_ACTIVE                                                            2U
#define RPA_ACTIVE                                                            1U
#define RDC_INACTIVE                                                          0U

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef uint8 Dcm_NegativeResponseCodeType; //TBD: Move to Dcm_Types.hpp

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
#define Rdci_START_SEC_VAR_INIT_UNSPECIFIED
#include "Rdci_MemMap.hpp"
extern uint8_t rdci_flag;
#define Rdci_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Rdci_MemMap.hpp"

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#define Rdci_START_SEC_CODE
#include "Rdci_MemMap.hpp"
Std_ReturnType rdci_diagjob_conditioncheckread_call                             (Dcm_NegativeResponseCodeType* const);
Std_ReturnType Rdci_RDC_ANLERNEN_LOKALISIERUNG_LESEN_ConditionCheckRead         (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_ERFS_ECO_TABELLE_LESEN_ConditionCheckRead               (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_RUECKNAHME_ConditionCheckRead           (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_1_ConditionCheckRead                    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_2_ConditionCheckRead                    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_3_ConditionCheckRead                    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_WEICH_1_ConditionCheckRead              (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_WEICH_2_ConditionCheckRead              (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_WEICH_3_ConditionCheckRead              (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_MESSDATENBLOCK_1_ConditionCheckRead                     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_MESSDATENBLOCK_2_ConditionCheckRead                     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_MESSDATENBLOCK_3_ConditionCheckRead                     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_MESSDATENBLOCK_4_ConditionCheckRead                     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STATUS_RDC_ERFS_AKT_REIFEN_ECO_LESEN_ConditionCheckRead     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STATUS_RDC_ERFS_AKT_REIFEN_LESEN_ConditionCheckRead         (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_RID_ALTE_REIFEN_LAUFSTRECKE_LESEN_ConditionCheckRead    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_RID_ALTE_REIFEN_QR_CODE_LESEN_ConditionCheckRead        (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STATUS_RDC_LESEN_ConditionCheckRead                         (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_RID_AKT_REIFEN_LAUFSTRECKE_LESEN_ConditionCheckRead     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_RID_AKT_REIFEN_QR_CODE_LESEN_ConditionCheckRead         (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STATUS_RDC_DEVELOPER_DATA_LESEN_ConditionCheckRead          (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STATUS_RDC_ERFS_TSA_DATEN_LESEN_ConditionCheckRead          (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STATUS_RDC_EXT_PARK_SUPERVISION_LESEN_ConditionCheckRead    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STATUS_RE_LESEN_DRUCKCODIERUNG_ConditionCheckRead           (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_INAKTIVEREIGNIS_ConditionCheckRead                   (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_HS_KALIBRIEREREIGNIS_ConditionCheckRead                 (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_RDC_ANLERNEN_LOKALISIERUNG_LESEN_ReadData                   (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_ERFS_ECO_TABELLE_LESEN_ReadData                         (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_RUECKNAHME_ReadData                     (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_1_ReadData                              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_2_ReadData                              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_3_ReadData                              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_WEICH_1_ReadData                        (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_WEICH_2_ReadData                        (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_WARNEREIGNIS_WEICH_3_ReadData                        (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_MESSDATENBLOCK_1_ReadData                               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_MESSDATENBLOCK_2_ReadData                               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_MESSDATENBLOCK_3_ReadData                               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_MESSDATENBLOCK_4_ReadData                               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_STATUS_RDC_ERFS_AKT_REIFEN_ECO_LESEN_ReadData               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_STATUS_RDC_ERFS_AKT_REIFEN_LESEN_ReadData                   (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_RID_ALTE_REIFEN_LAUFSTRECKE_LESEN_ReadData              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_RID_ALTE_REIFEN_QR_CODE_LESEN_ReadData                  (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_STATUS_RDC_LESEN_ReadData                                   (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_RID_AKT_REIFEN_LAUFSTRECKE_LESEN_ReadData               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_RID_AKT_REIFEN_QR_CODE_LESEN_ReadData                   (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_STATUS_RDC_DEVELOPER_DATA_LESEN_ReadData                    (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_STATUS_RDC_ERFS_TSA_DATEN_LESEN_ReadData                    (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_STATUS_RDC_EXT_PARK_SUPERVISION_LESEN_ReadData              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_STATUS_RE_LESEN_DRUCKCODIERUNG_ReadData                     (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_INAKTIVEREIGNIS_ReadData                             (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_RDC_HS_KALIBRIEREREIGNIS_ReadData                           (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data);
Std_ReturnType Rdci_STEUERN_DIGITAL_RDC_WriteData                               (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STEUERN_RADELEKTRONIK_VORGEBEN_WriteData                    (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STEUERN_RDC_DEVELOPER_CONFIG_WriteData                      (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STEUERN_RDC_ERFS_DEVELOPER_CONFIG_WriteData                 (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STEUERN_RDC_ERFS_ECO_REIFENTABELLE_VORGEBEN_WriteData       (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STEUERN_RDC_ERFS_TSA_DATEN_VORGEBEN_WriteData               (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STEUERN_RDC_ERFS_ECO_AKT_REIFEN_POS_VORGEBEN_WriteData      (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType Rdci_STEUERN_RDC_ERFS_ECO_NEUE_REIFEN_VORGEBEN_WriteData         (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode);
Std_ReturnType handle_rdc_hs_inaktivereignis_readdata_call                      (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rdc_hs_inaktivereignis_type_st*            const));
Std_ReturnType handle_rdc_hs_kalibrierereignis_readdata_call                    (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rdc_hs_kalibrierereignis_type_st*          const));
Std_ReturnType handle_rdc_messdatenblock_readdata_call                          (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rdc_messdatenblock_type_st*                const));
Std_ReturnType handle_status_rdc_lesen_readdata_call                            (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rdc_status_type_st*                        const));
Std_ReturnType handle_status_rdc_version_readdata_call                          (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_version_type_st*                           const));
Std_ReturnType handle_rdc_rid_akt_reifen_laufstrecke_lesen_readdata_call        (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rid_akt_reifen_laufstrecke_lesen_type_st*  const));
Std_ReturnType handle_rdc_rid_akt_reifen_qr_code_lesen_readdata_call            (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rid_akt_reifen_qr_code_lesen_type_st*      const));
Std_ReturnType handle_rdc_developer_data_lesen_readdata_call                    (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_developer_data_lesen_type_st*              const));
Std_ReturnType handle_rdc_erfs_tsa_daten_lesen_readdata_call                    (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_erfs_tsa_daten_lesen_type_st*              const));
Std_ReturnType handle_rdc_ext_park_supervision_lesen_readdata_call              (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_ext_park_supervision_lesen_type_st*        const));
Std_ReturnType handle_rdc_erfs_akt_reifen_eco_lesen_readdata_call               (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_erfs_akt_reifen_eco_lesen_type_st*         const));
Std_ReturnType handle_rdc_erfs_akt_reifen_lesen_readdata_call                   (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_erfs_akt_reifen_lesen_type_st*             const));
Std_ReturnType handle_rdc_rid_alte_reifen_laufstrecke_lesen_readdata_call       (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rid_alte_reifen_laufstrecke_lesen_type_st* const));
Std_ReturnType handle_rdc_rid_alte_reifen_qr_code_lesen_readdata_call           (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rid_alte_reifen_qr_code_lesen_type_st*     const));
Std_ReturnType handle_rdc_re_lesen_druckcodierung_readdata_call                 (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_re_lesen_druckcodierung_type_st*           const));
Std_ReturnType handle_rdc_anlernen_lokalisierung_readdata_call                  (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_anlernen_lokalisierung_lesen_type_st*      const));
Std_ReturnType handle_rdc_erfs_eco_tabelle_readdata_call                        (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_erfs_eco_tabelle_lesen_type_st*            const));
Std_ReturnType handle_rdc_hs_warnereignis_ruecknahme_readdata_call              (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rdc_hs_warnereignis_ruecknahme_type_st*    const));
Std_ReturnType handle_rdc_hs_warnereignis_readdata_call                         (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rdc_hs_warnereignis_type_st*               const));
Std_ReturnType handle_rdc_hs_warnereignis_weich_readdata_call                   (uint8* const Data, uint8_t (*api_dtms_diag_call)(Dtms_diag_rdc_hs_warnereignis_weich_type_st*         const));
Std_ReturnType handle_steuern_digital_rdc_writedata_call                        (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8_t (*api_dtms_diag_call)(const Dtms_diag_digital_rdc_type_st*                          const, uint8_t*));
Std_ReturnType handle_steuern_radelektronik_vorgeben_writedata_call             (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8_t (*api_dtms_diag_call)(const Dtms_diag_radelektronik_vorgeben_type_st*               const, uint8_t*));
Std_ReturnType handle_rdc_developer_config_writedata_call                       (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8_t (*api_dtms_diag_call)(const Dtms_diag_rdc_developer_config_type_st*                 const, uint8_t*));
Std_ReturnType handle_rdc_erfs_developer_config_writedata_call                  (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8_t (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_developer_config_type_st*            const, uint8_t*));
Std_ReturnType handle_rdc_erfs_eco_reifentabelle_vorgeben_writedata_call        (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8_t (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_eco_reifentabelle_vorgeben_type_st*  const, uint8_t*));
Std_ReturnType handle_rdc_erfs_tsa_daten_vorgeben_writedata_call                (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8_t (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_tsa_daten_vorgeben_type_st*          const, uint8_t*));
Std_ReturnType handle_rdc_erfs_eco_akt_reifen_pos_vorgeben_writedata_call       (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8_t (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_eco_akt_reifen_pos_vorgeben_type_st* const, uint8_t*));
Std_ReturnType handle_rdc_erfs_eco_neue_reifen_vorgeben_writedata_call          (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8_t (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_eco_neue_reifen_vorgeben_type_st*    const, uint8_t*));
#define Rdci_STOP_SEC_CODE
#include "Rdci_MemMap.hpp"

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

