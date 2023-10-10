/******************************************************************************/
/* File   : stubs.cpp                                                         */
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

#include "rdci_context_handling.hpp"
#include "rdci_diag_data.hpp"
#include "rdci_interface.hpp"

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
int main(void){
   swc_rdci_init_context(
         receive_vehicle_state
      ,  receive_vehicle_velocity
      ,  receive_odometer
      ,  receive_air_temperature
      ,  receive_date_and_time
      ,  receive_atmospheric_pressure
      ,  receive_relative_time
      ,  receive_altitude
      ,  receive_vehicle_gear
      ,  receive_network_status
      ,  receive_network_dtc_suppression
      ,  receive_rdci_coding_parameters
      ,  send_check_control_message
      ,  send_tyre_current_data
      ,  send_tyre_target_pressures
      ,  send_rdci_debug_msg
      ,  send_tyre_status
      ,  send_fbd_control
      ,  send_tyre_mileage
      ,  send_tyre_qr_code
      ,  send_tyre_last_internal_data
      ,  send_tyre_parking_supervision
      ,  send_wheel_status_change
      ,  send_parking_monitoring
      ,  send_calibration_data
      ,  send_erfs_actual_tyre_data
      ,  send_erfs_hmi_axle_tyre_data
      ,  send_erfs_hmi_status
      ,  send_tyre_pressure_level_data
      ,  send_erfs_hmi_notification
      ,  receive_rdci_coding_erfs_caf
      ,  send_dtc_event_status
      ,  receive_nvm_block_addresses
      ,  receive_nvm_block_error_status
      ,  send_nvm_write_block_request
      ,  send_diagnostic_log_and_trace
   );
   return 0;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

