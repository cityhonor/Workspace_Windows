/******************************************************************************/
/* File   : SwcApplTpms.cpp                                                   */
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
#include "Types_Std.hpp"

#include "infSwcApplTpmsAra.hpp"

#include "infAraSwcApplTpms.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   Dtms_bmw_vehicle_state_et             eStateVehicle;
   uint16                                u16VelocityVehicle;
   uint32                                u32Odometer;
   sint16                                s16TemperatureAir;
   Dtms_signal_grp_date_and_time_type_st stDateAndTime;
   uint16                                u16PressureAtmospheric;
   uint32                                u32TimeRelative;
   float32                               f32Altitude_Param1; //TBD: Need for 2 param
   float32                               f32Altitude_Param2; //TBD: Need for 2 param
   Dtms_bmw_vehicle_gear_et              eGearVehicle;
   Dtms_network_status_et                eStatusNetwork;
   uint8                                 u8DtcSuppressionNetwork;
   Dtms_coding_type_st                   stParameterCodingTpms;
   Dtms_coding_erfs_caf_type_st          stCodingErfsCaf;
   Dtms_nvm_block_addresses_type_st      stAddressesBlockNvM;
   Dtms_nvm_req_et                       aeReqNvM[CfgSwcApplTpms_dSizeReqNvM];
   Dtms_signal_quali_et                  eQualitySignalStateVehicle;
   Dtms_signal_quali_et                  eQualitySignalVelocityVehicle;
   Dtms_signal_quali_et                  eQualitySignalOdometer;
   Dtms_signal_quali_et                  eQualitySignalTemperatureAir;
   Dtms_signal_quali_et                  eQualitySignalDateAndTime;
   Dtms_signal_quali_et                  eQualitySignalPressureAtmospheric;
   Dtms_signal_quali_et                  eQualitySignalTimeRelative;
   Dtms_signal_quali_et                  eQualitySignalAltitude;
   Dtms_signal_quali_et                  eQualitySignalGearVehicle;
}Type_SwcApplTpms_stReceivers;

typedef struct{
   Dtms_ccm_type_st                      stCcm;
   Dtms_display_pressure_type_st         stPressureTarget;
   Dtms_display_pressure_type_st         stPressureLatestDisplay;
   Dtms_display_temperature_type_st      stTemperatureLatestDisplay;
   uint8                                 au8LogDevelopment[CfgSwcApplTpms_dSizeLogDevelopment];
   Dtms_tyre_status_type_st              stStatusTyre;
   Dtms_fbd_control_data_type_st         stDataControlFbd;
   Dtms_tyre_mileage_data_type_st        stDataMileageTyre;
   Dtms_qr_code_data_type_st             stDataTyreCodeQR;
   Dtms_last_internal_data_type_st       stDataTyreInternalLast;
   Dtms_tyre_parking_supervision_type_st stTyreParkingSupervision;
   Dtms_wheel_status_change_type_st      stStatusWheelChange;
   Dtms_parking_monitoring_type_st       stMonitoringParking;
   Dtms_calibration_data_type_st         stDataCalibration;
   Dtms_erfs_actual_tyre_data_type_st    stDataTyreErfsActual;
   Dtms_erfs_hmi_axle_tyre_type_st       stTyreAxleErfsHmi;
   Dtms_erfs_status_type_st              stStatusErfs;
   Dtms_pressure_level_indicator_type_st stIndicatorLevelPressure;
   Dtms_erfs_hmi_notification_type_st    stNotificationErfsHmi;
   Dtms_dtc_set_event_et                 astStatusEventDtc[CfgSwcApplTpms_dNumberStatusEventDtc];
}Type_SwcApplTpms_stSenders;

typedef struct{
   Type_SwcApplTpms_stReceivers stReceivers;
   Type_SwcApplTpms_stSenders   stSenders;
}Type_SwcApplTpms_stContext;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
static Type_SwcApplTpms_stContext SwcApplTpms_stContext = {
      {
            0, 0, 0, 0, {0}, 0, 0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, {0}
         ,  0, 0, 0, 0,   0, 0, 0,        0, 0
      }
   ,  {0, 0, 0, 0, {0}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, {0}}
};

static Type_infSwcApplTpmsAra_stContext* infSwcApplTpmsAra_pstContext = ((Type_infSwcApplTpmsAra_stContext*)NULL_PTR);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void infSwcApplTpmsAra_vInit(
   Type_infSwcApplTpmsAra_stContext* lpstContext
){
   //TBD: Component init complete
   infSwcApplTpmsAra_pstContext = lpstContext;
}

void infSwcApplTpmsAra_vRunnable(void){
   //TBD: Component init check
   //TBD: Component init check fail - report Det error

   //TBD: Delete test code - "Receivers"
   infSwcApplTpmsAra_pstContext->get_vehicle_state        (&SwcApplTpms_stContext.stReceivers.eQualitySignalStateVehicle,        &SwcApplTpms_stContext.stReceivers.eStateVehicle);
   infSwcApplTpmsAra_pstContext->get_vehicle_velocity     (&SwcApplTpms_stContext.stReceivers.eQualitySignalVelocityVehicle,     &SwcApplTpms_stContext.stReceivers.u16VelocityVehicle);
   infSwcApplTpmsAra_pstContext->get_odometer             (&SwcApplTpms_stContext.stReceivers.eQualitySignalOdometer,            &SwcApplTpms_stContext.stReceivers.u32Odometer);
   infSwcApplTpmsAra_pstContext->get_air_temperature      (&SwcApplTpms_stContext.stReceivers.eQualitySignalTemperatureAir,      &SwcApplTpms_stContext.stReceivers.s16TemperatureAir);
   infSwcApplTpmsAra_pstContext->get_date_and_time        (&SwcApplTpms_stContext.stReceivers.eQualitySignalDateAndTime,         &SwcApplTpms_stContext.stReceivers.stDateAndTime);
   infSwcApplTpmsAra_pstContext->get_atmospheric_pressure (&SwcApplTpms_stContext.stReceivers.eQualitySignalPressureAtmospheric, &SwcApplTpms_stContext.stReceivers.u16PressureAtmospheric);
   infSwcApplTpmsAra_pstContext->get_relative_time        (&SwcApplTpms_stContext.stReceivers.eQualitySignalTimeRelative,        &SwcApplTpms_stContext.stReceivers.u32TimeRelative);
   infSwcApplTpmsAra_pstContext->get_altitude             (&SwcApplTpms_stContext.stReceivers.eQualitySignalAltitude,            &SwcApplTpms_stContext.stReceivers.f32Altitude_Param1, &SwcApplTpms_stContext.stReceivers.f32Altitude_Param2);
   infSwcApplTpmsAra_pstContext->get_vehicle_gear         (&SwcApplTpms_stContext.stReceivers.eQualitySignalGearVehicle,         &SwcApplTpms_stContext.stReceivers.eGearVehicle);
   SwcApplTpms_stContext.stReceivers.eStatusNetwork          = infSwcApplTpmsAra_pstContext->get_network_status();
   SwcApplTpms_stContext.stReceivers.u8DtcSuppressionNetwork = infSwcApplTpmsAra_pstContext->get_network_dtc_suppression();
   (void)infSwcApplTpmsAra_pstContext->get_rdci_coding_parameters (&SwcApplTpms_stContext.stReceivers.stParameterCodingTpms); //TBD: What is returned?
   (void)infSwcApplTpmsAra_pstContext->get_rdci_coding_erfs_caf   (&SwcApplTpms_stContext.stReceivers.stCodingErfsCaf);       //TBD: What is returned?
         infSwcApplTpmsAra_pstContext->get_nvm_block_addresses    (&SwcApplTpms_stContext.stReceivers.stAddressesBlockNvM);
         infSwcApplTpmsAra_pstContext->get_nvm_block_error_status (0, &SwcApplTpms_stContext.stReceivers.aeReqNvM[0]); //TBD: request vs status? (per block id - total len configured?)

   //TBD: Delete test code - "Senders"
   infSwcApplTpmsAra_pstContext->set_check_control_message    (&SwcApplTpms_stContext.stSenders.stCcm);
   infSwcApplTpmsAra_pstContext->set_tyre_current_data        (&SwcApplTpms_stContext.stSenders.stPressureLatestDisplay, &SwcApplTpms_stContext.stSenders.stTemperatureLatestDisplay);
   infSwcApplTpmsAra_pstContext->set_tyre_target_pressures    (&SwcApplTpms_stContext.stSenders.stPressureTarget);
   infSwcApplTpmsAra_pstContext->set_rdci_debug_msg           (&SwcApplTpms_stContext.stSenders.au8LogDevelopment[0]);
   infSwcApplTpmsAra_pstContext->set_tyre_status              (&SwcApplTpms_stContext.stSenders.stStatusTyre);
   infSwcApplTpmsAra_pstContext->set_fbd_control              (&SwcApplTpms_stContext.stSenders.stDataControlFbd);
   infSwcApplTpmsAra_pstContext->set_tyre_mileage             (&SwcApplTpms_stContext.stSenders.stDataMileageTyre);
   infSwcApplTpmsAra_pstContext->set_tyre_qr_code             (&SwcApplTpms_stContext.stSenders.stDataTyreCodeQR);
   infSwcApplTpmsAra_pstContext->set_tyre_last_internal_data  (&SwcApplTpms_stContext.stSenders.stDataTyreInternalLast);
   infSwcApplTpmsAra_pstContext->set_tyre_parking_supervision (&SwcApplTpms_stContext.stSenders.stTyreParkingSupervision);
   infSwcApplTpmsAra_pstContext->set_wheel_status_change      (&SwcApplTpms_stContext.stSenders.stStatusWheelChange);
   infSwcApplTpmsAra_pstContext->set_parking_monitoring       (&SwcApplTpms_stContext.stSenders.stMonitoringParking);
   infSwcApplTpmsAra_pstContext->set_calibration_data         (&SwcApplTpms_stContext.stSenders.stDataCalibration);
   infSwcApplTpmsAra_pstContext->set_erfs_actual_tyre_data    (&SwcApplTpms_stContext.stSenders.stDataTyreErfsActual);
   infSwcApplTpmsAra_pstContext->set_erfs_hmi_axle_tyre_data  (&SwcApplTpms_stContext.stSenders.stTyreAxleErfsHmi);
   infSwcApplTpmsAra_pstContext->set_erfs_hmi_status          (&SwcApplTpms_stContext.stSenders.stStatusErfs);
   infSwcApplTpmsAra_pstContext->set_tyre_pressure_level_data (&SwcApplTpms_stContext.stSenders.stIndicatorLevelPressure);
   infSwcApplTpmsAra_pstContext->set_erfs_hmi_notification    (&SwcApplTpms_stContext.stSenders.stNotificationErfsHmi);
   (void)infSwcApplTpmsAra_pstContext->set_dtc_event_status   (0, SwcApplTpms_stContext.stSenders.astStatusEventDtc[0]); //TBD: What is returned?
   (void)infSwcApplTpmsAra_pstContext->set_nvm_write_block_request(0); //TBD: What is returned?
   infSwcApplTpmsAra_pstContext->set_diagnostic_log_and_trace(0, 0);
}

/* Diag Data callouts*/
#define Rdci_START_SEC_CODE
#include "Rdci_MemMap.hpp"
Type_Std_tValueReturn rdci_diagjob_conditioncheckread_call                             (Dcm_NegativeResponseCodeType* const){return E_OK;}
Type_Std_tValueReturn Rdci_RDC_ANLERNEN_LOKALISIERUNG_LESEN_ConditionCheckRead         (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_ERFS_ECO_TABELLE_LESEN_ConditionCheckRead               (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_RUECKNAHME_ConditionCheckRead           (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_1_ConditionCheckRead                    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_2_ConditionCheckRead                    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_3_ConditionCheckRead                    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_WEICH_1_ConditionCheckRead              (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_WEICH_2_ConditionCheckRead              (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_WEICH_3_ConditionCheckRead              (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_MESSDATENBLOCK_1_ConditionCheckRead                     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_MESSDATENBLOCK_2_ConditionCheckRead                     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_MESSDATENBLOCK_3_ConditionCheckRead                     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_MESSDATENBLOCK_4_ConditionCheckRead                     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_ERFS_AKT_REIFEN_ECO_LESEN_ConditionCheckRead     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_ERFS_AKT_REIFEN_LESEN_ConditionCheckRead         (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_RID_ALTE_REIFEN_LAUFSTRECKE_LESEN_ConditionCheckRead    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_RID_ALTE_REIFEN_QR_CODE_LESEN_ConditionCheckRead        (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_LESEN_ConditionCheckRead                         (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_RID_AKT_REIFEN_LAUFSTRECKE_LESEN_ConditionCheckRead     (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_RID_AKT_REIFEN_QR_CODE_LESEN_ConditionCheckRead         (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_DEVELOPER_DATA_LESEN_ConditionCheckRead          (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_ERFS_TSA_DATEN_LESEN_ConditionCheckRead          (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_EXT_PARK_SUPERVISION_LESEN_ConditionCheckRead    (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RE_LESEN_DRUCKCODIERUNG_ConditionCheckRead           (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_INAKTIVEREIGNIS_ConditionCheckRead                   (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_KALIBRIEREREIGNIS_ConditionCheckRead                 (P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_ANLERNEN_LOKALISIERUNG_LESEN_ReadData                   (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_ERFS_ECO_TABELLE_LESEN_ReadData                         (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_RUECKNAHME_ReadData                     (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_1_ReadData                              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_2_ReadData                              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_3_ReadData                              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_WEICH_1_ReadData                        (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_WEICH_2_ReadData                        (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_WARNEREIGNIS_WEICH_3_ReadData                        (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_MESSDATENBLOCK_1_ReadData                               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_MESSDATENBLOCK_2_ReadData                               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_MESSDATENBLOCK_3_ReadData                               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_MESSDATENBLOCK_4_ReadData                               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_ERFS_AKT_REIFEN_ECO_LESEN_ReadData               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_ERFS_AKT_REIFEN_LESEN_ReadData                   (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_RID_ALTE_REIFEN_LAUFSTRECKE_LESEN_ReadData              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_RID_ALTE_REIFEN_QR_CODE_LESEN_ReadData                  (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_LESEN_ReadData                                   (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_RID_AKT_REIFEN_LAUFSTRECKE_LESEN_ReadData               (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_RID_AKT_REIFEN_QR_CODE_LESEN_ReadData                   (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_DEVELOPER_DATA_LESEN_ReadData                    (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_ERFS_TSA_DATEN_LESEN_ReadData                    (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RDC_EXT_PARK_SUPERVISION_LESEN_ReadData              (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_STATUS_RE_LESEN_DRUCKCODIERUNG_ReadData                     (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_INAKTIVEREIGNIS_ReadData                             (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_RDC_HS_KALIBRIEREREIGNIS_ReadData                           (P2VAR(uint8, AUTOMATIC, Rdci_APPL_DATA) Data){UNUSED(Data); return E_OK;}
Type_Std_tValueReturn Rdci_STEUERN_DIGITAL_RDC_WriteData                               (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(Data); UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STEUERN_RADELEKTRONIK_VORGEBEN_WriteData                    (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(Data); UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STEUERN_RDC_DEVELOPER_CONFIG_WriteData                      (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(Data); UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STEUERN_RDC_ERFS_DEVELOPER_CONFIG_WriteData                 (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(Data); UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STEUERN_RDC_ERFS_ECO_REIFENTABELLE_VORGEBEN_WriteData       (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(Data); UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STEUERN_RDC_ERFS_TSA_DATEN_VORGEBEN_WriteData               (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(Data); UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STEUERN_RDC_ERFS_ECO_AKT_REIFEN_POS_VORGEBEN_WriteData      (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(Data); UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn Rdci_STEUERN_RDC_ERFS_ECO_NEUE_REIFEN_VORGEBEN_WriteData         (P2CONST(uint8, AUTOMATIC, Rdci_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, Rdci_APPL_DATA) ErrorCode){UNUSED(Data); UNUSED(ErrorCode); return E_OK;}
Type_Std_tValueReturn handle_rdc_hs_inaktivereignis_readdata_call                      (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rdc_hs_inaktivereignis_type_st*            const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rdc_hs_inaktivereignis_type_st*           )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_hs_kalibrierereignis_readdata_call                    (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rdc_hs_kalibrierereignis_type_st*          const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rdc_hs_kalibrierereignis_type_st*         )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_messdatenblock_readdata_call                          (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rdc_messdatenblock_type_st*                const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rdc_messdatenblock_type_st*               )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_status_rdc_lesen_readdata_call                            (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rdc_status_type_st*                        const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rdc_status_type_st*                       )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_status_rdc_version_readdata_call                          (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_version_type_st*                           const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_version_type_st*                          )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_rid_akt_reifen_laufstrecke_lesen_readdata_call        (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rid_akt_reifen_laufstrecke_lesen_type_st*  const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rid_akt_reifen_laufstrecke_lesen_type_st* )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_rid_akt_reifen_qr_code_lesen_readdata_call            (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rid_akt_reifen_qr_code_lesen_type_st*      const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rid_akt_reifen_qr_code_lesen_type_st*     )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_developer_data_lesen_readdata_call                    (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_developer_data_lesen_type_st*              const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_developer_data_lesen_type_st*             )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_tsa_daten_lesen_readdata_call                    (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_erfs_tsa_daten_lesen_type_st*              const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_erfs_tsa_daten_lesen_type_st*             )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_ext_park_supervision_lesen_readdata_call              (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_ext_park_supervision_lesen_type_st*        const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_ext_park_supervision_lesen_type_st*       )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_akt_reifen_eco_lesen_readdata_call               (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_erfs_akt_reifen_eco_lesen_type_st*         const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_erfs_akt_reifen_eco_lesen_type_st*        )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_akt_reifen_lesen_readdata_call                   (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_erfs_akt_reifen_lesen_type_st*             const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_erfs_akt_reifen_lesen_type_st*            )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_rid_alte_reifen_laufstrecke_lesen_readdata_call       (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rid_alte_reifen_laufstrecke_lesen_type_st* const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rid_alte_reifen_laufstrecke_lesen_type_st*)NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_rid_alte_reifen_qr_code_lesen_readdata_call           (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rid_alte_reifen_qr_code_lesen_type_st*     const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rid_alte_reifen_qr_code_lesen_type_st*    )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_re_lesen_druckcodierung_readdata_call                 (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_re_lesen_druckcodierung_type_st*           const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_re_lesen_druckcodierung_type_st*          )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_anlernen_lokalisierung_readdata_call                  (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_anlernen_lokalisierung_lesen_type_st*      const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_anlernen_lokalisierung_lesen_type_st*     )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_eco_tabelle_readdata_call                        (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_erfs_eco_tabelle_lesen_type_st*            const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_erfs_eco_tabelle_lesen_type_st*           )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_hs_warnereignis_ruecknahme_readdata_call              (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rdc_hs_warnereignis_ruecknahme_type_st*    const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rdc_hs_warnereignis_ruecknahme_type_st*   )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_hs_warnereignis_readdata_call                         (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rdc_hs_warnereignis_type_st*               const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rdc_hs_warnereignis_type_st*              )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_rdc_hs_warnereignis_weich_readdata_call                   (uint8* const Data, uint8 (*api_dtms_diag_call)(Dtms_diag_rdc_hs_warnereignis_weich_type_st*         const)){UNUSED(Data); (*api_dtms_diag_call)((Dtms_diag_rdc_hs_warnereignis_weich_type_st*        )NULL_PTR); return E_OK;}
Type_Std_tValueReturn handle_steuern_digital_rdc_writedata_call                        (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8 (*api_dtms_diag_call)(const Dtms_diag_digital_rdc_type_st*                          const, uint8*)){(*api_dtms_diag_call)((Dtms_diag_digital_rdc_type_st*                         )NULL_PTR, ((uint8*)NULL_PTR)); return E_OK;}
Type_Std_tValueReturn handle_steuern_radelektronik_vorgeben_writedata_call             (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8 (*api_dtms_diag_call)(const Dtms_diag_radelektronik_vorgeben_type_st*               const, uint8*)){(*api_dtms_diag_call)((Dtms_diag_radelektronik_vorgeben_type_st*              )NULL_PTR, ((uint8*)NULL_PTR)); return E_OK;}
Type_Std_tValueReturn handle_rdc_developer_config_writedata_call                       (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8 (*api_dtms_diag_call)(const Dtms_diag_rdc_developer_config_type_st*                 const, uint8*)){(*api_dtms_diag_call)((Dtms_diag_rdc_developer_config_type_st*                )NULL_PTR, ((uint8*)NULL_PTR)); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_developer_config_writedata_call                  (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8 (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_developer_config_type_st*            const, uint8*)){(*api_dtms_diag_call)((Dtms_diag_rdc_erfs_developer_config_type_st*           )NULL_PTR, ((uint8*)NULL_PTR)); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_eco_reifentabelle_vorgeben_writedata_call        (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8 (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_eco_reifentabelle_vorgeben_type_st*  const, uint8*)){(*api_dtms_diag_call)((Dtms_diag_rdc_erfs_eco_reifentabelle_vorgeben_type_st* )NULL_PTR, ((uint8*)NULL_PTR)); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_tsa_daten_vorgeben_writedata_call                (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8 (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_tsa_daten_vorgeben_type_st*          const, uint8*)){(*api_dtms_diag_call)((Dtms_diag_rdc_erfs_tsa_daten_vorgeben_type_st*         )NULL_PTR, ((uint8*)NULL_PTR)); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_eco_akt_reifen_pos_vorgeben_writedata_call       (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8 (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_eco_akt_reifen_pos_vorgeben_type_st* const, uint8*)){(*api_dtms_diag_call)((Dtms_diag_rdc_erfs_eco_akt_reifen_pos_vorgeben_type_st*)NULL_PTR, ((uint8*)NULL_PTR)); return E_OK;}
Type_Std_tValueReturn handle_rdc_erfs_eco_neue_reifen_vorgeben_writedata_call          (const uint8* const, Dcm_NegativeResponseCodeType* const, uint8 (*api_dtms_diag_call)(const Dtms_diag_rdc_erfs_eco_neue_reifen_vorgeben_type_st*    const, uint8*)){(*api_dtms_diag_call)((Dtms_diag_rdc_erfs_eco_neue_reifen_vorgeben_type_st*   )NULL_PTR, ((uint8*)NULL_PTR)); return E_OK;}
#define Rdci_STOP_SEC_CODE
#include "Rdci_MemMap.hpp"

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

