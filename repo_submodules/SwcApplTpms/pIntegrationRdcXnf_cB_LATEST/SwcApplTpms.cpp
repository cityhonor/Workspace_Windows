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
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
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
static Type_SwcApplTpms_stContext        SwcApplTpms_stContext = {
      0, 0, 0, 0, {0}, 0, 0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, {0}
   ,  0, 0, 0, 0,   0, 0, 0,        0, 0
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
   infSwcApplTpmsAra_pstContext->get_vehicle_state        (&SwcApplTpms_stContext.eQualitySignalStateVehicle,        &SwcApplTpms_stContext.eStateVehicle);
   infSwcApplTpmsAra_pstContext->get_vehicle_velocity     (&SwcApplTpms_stContext.eQualitySignalVelocityVehicle,     &SwcApplTpms_stContext.u16VelocityVehicle);
   infSwcApplTpmsAra_pstContext->get_odometer             (&SwcApplTpms_stContext.eQualitySignalOdometer,            &SwcApplTpms_stContext.u32Odometer);
   infSwcApplTpmsAra_pstContext->get_air_temperature      (&SwcApplTpms_stContext.eQualitySignalTemperatureAir,      &SwcApplTpms_stContext.s16TemperatureAir);
   infSwcApplTpmsAra_pstContext->get_date_and_time        (&SwcApplTpms_stContext.eQualitySignalDateAndTime,         &SwcApplTpms_stContext.stDateAndTime);
   infSwcApplTpmsAra_pstContext->get_atmospheric_pressure (&SwcApplTpms_stContext.eQualitySignalPressureAtmospheric, &SwcApplTpms_stContext.u16PressureAtmospheric);
   infSwcApplTpmsAra_pstContext->get_relative_time        (&SwcApplTpms_stContext.eQualitySignalTimeRelative,        &SwcApplTpms_stContext.u32TimeRelative);
   infSwcApplTpmsAra_pstContext->get_altitude             (&SwcApplTpms_stContext.eQualitySignalAltitude,            &SwcApplTpms_stContext.f32Altitude_Param1, &SwcApplTpms_stContext.f32Altitude_Param2);
   infSwcApplTpmsAra_pstContext->get_vehicle_gear         (&SwcApplTpms_stContext.eQualitySignalGearVehicle,         &SwcApplTpms_stContext.eGearVehicle);
   SwcApplTpms_stContext.eStatusNetwork          = infSwcApplTpmsAra_pstContext->get_network_status();
   SwcApplTpms_stContext.u8DtcSuppressionNetwork = infSwcApplTpmsAra_pstContext->get_network_dtc_suppression();
   (void)infSwcApplTpmsAra_pstContext->get_rdci_coding_parameters (&SwcApplTpms_stContext.stParameterCodingTpms); //TBD: What is returned?
   (void)infSwcApplTpmsAra_pstContext->get_rdci_coding_erfs_caf   (&SwcApplTpms_stContext.stCodingErfsCaf);       //TBD: What is returned?
         infSwcApplTpmsAra_pstContext->get_nvm_block_addresses    (&SwcApplTpms_stContext.stAddressesBlockNvM);
         infSwcApplTpmsAra_pstContext->get_nvm_block_error_status(0, &SwcApplTpms_stContext.aeReqNvM[0]); //TBD: request vs status? (per block id - total len configured?)

   //TBD: Delete test code - "Senders"
/*
   infSwcApplTpmsAra_pstContext->set_check_control_message();
   infSwcApplTpmsAra_pstContext->set_tyre_current_data();
   infSwcApplTpmsAra_pstContext->set_tyre_target_pressures();
   infSwcApplTpmsAra_pstContext->set_rdci_debug_msg();
   infSwcApplTpmsAra_pstContext->set_tyre_status();
   infSwcApplTpmsAra_pstContext->set_fbd_control();
   infSwcApplTpmsAra_pstContext->set_tyre_mileage();
   infSwcApplTpmsAra_pstContext->set_tyre_qr_code();
   infSwcApplTpmsAra_pstContext->set_tyre_last_internal_data();
   infSwcApplTpmsAra_pstContext->set_tyre_parking_supervision();
   infSwcApplTpmsAra_pstContext->set_wheel_status_change();
   infSwcApplTpmsAra_pstContext->set_parking_monitoring();
   infSwcApplTpmsAra_pstContext->set_calibration_data();
   infSwcApplTpmsAra_pstContext->set_erfs_actual_tyre_data();
   infSwcApplTpmsAra_pstContext->set_erfs_hmi_axle_tyre_data();
   infSwcApplTpmsAra_pstContext->set_erfs_hmi_status();
   infSwcApplTpmsAra_pstContext->set_tyre_pressure_level_data();
   infSwcApplTpmsAra_pstContext->set_erfs_hmi_notification();
   infSwcApplTpmsAra_pstContext->set_dtc_event_status();
   infSwcApplTpmsAra_pstContext->set_nvm_write_block_request();
   infSwcApplTpmsAra_pstContext->set_diagnostic_log_and_trace();
*/
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

