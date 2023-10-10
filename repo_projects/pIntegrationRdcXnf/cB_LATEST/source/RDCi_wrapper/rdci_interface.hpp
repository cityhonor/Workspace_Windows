#pragma once
/******************************************************************************/
/* File   : rdci_interface.hpp                                                */
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
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "Std_Types.hpp"

#include "Dtms_types.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
typedef enum{
      infSwcTpms_eTimeBase_IN_SYNC
   ,  infSwcTpms_eTimeBase_NOT_IN_SYNC
   ,  infSwcTpms_eTimeBase_TIMEOUT
   ,  infSwcTpms_eTimeBase_INVALID
}Type_infSwcTpms_eTimeBase;

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
#define Rdci_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Rdci_MemMap.hpp"
extern uint32_t rdci_global_time_sec;
extern uint8_t  rdci_global_time_in_sync;
#define Rdci_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Rdci_MemMap.hpp"

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#define Rdci_START_SEC_CODE
#include "Rdci_MemMap.hpp"
extern Dtms_network_status_et receive_network_status          (void);
extern uint8_t                receive_network_dtc_suppression (void);
extern uint8_t                receive_rdci_coding_parameters  (Dtms_coding_type_st*);
extern uint8_t                receive_rdci_coding_erfs_caf    (Dtms_coding_erfs_caf_type_st*);
extern void                   receive_nvm_block_addresses     (Dtms_nvm_block_addresses_type_st* const);
extern void                   receive_nvm_block_error_status  (Dtms_nvm_block_ids_et,                   Dtms_nvm_req_et*                       const);
extern void                   receive_date_and_time           (Dtms_signal_quali_et*             const, Dtms_signal_grp_date_and_time_type_st* const);
extern void                   receive_vehicle_state           (Dtms_signal_quali_et*             const, Dtms_bmw_vehicle_state_et*             const);
extern void                   receive_vehicle_gear            (Dtms_signal_quali_et*             const, Dtms_bmw_vehicle_gear_et*              const);
extern void                   receive_vehicle_velocity        (Dtms_signal_quali_et*             const, uint16_t*                              const);
extern void                   receive_odometer                (Dtms_signal_quali_et*             const, uint32_t*                              const);
extern void                   receive_air_temperature         (Dtms_signal_quali_et*             const, int16_t*                               const);
extern void                   receive_atmospheric_pressure    (Dtms_signal_quali_et*             const, uint16_t*                              const);
extern void                   receive_relative_time           (Dtms_signal_quali_et*             const, uint32_t*                              const);
extern void                   receive_altitude                (Dtms_signal_quali_et*             const, float*                                 const, float* const);
extern void                   send_rdci_debug_msg             (uint8_t development_log_p[DTMS_DEV_LOG_SIZE_BYTES]);
extern uint8_t                send_nvm_write_block_request    (Dtms_nvm_block_ids_et);
extern void                   send_check_control_message      (Dtms_ccm_type_st*                       const);
extern void                   send_tyre_target_pressures      (Dtms_display_pressure_type_st*          const);
extern void                   send_tyre_status                (Dtms_tyre_status_type_st*               const);
extern void                   send_fbd_control                (Dtms_fbd_control_data_type_st*          const);
extern void                   send_tyre_mileage               (Dtms_tyre_mileage_data_type_st*         const);
extern void                   send_tyre_qr_code               (Dtms_qr_code_data_type_st*              const);
extern void                   send_tyre_last_internal_data    (Dtms_last_internal_data_type_st*        const);
extern void                   send_tyre_parking_supervision   (Dtms_tyre_parking_supervision_type_st*  const);
extern void                   send_wheel_status_change        (Dtms_wheel_status_change_type_st*       const);
extern void                   send_parking_monitoring         (Dtms_parking_monitoring_type_st*        const);
extern void                   send_calibration_data           (Dtms_calibration_data_type_st*          const);
extern void                   send_erfs_actual_tyre_data      (Dtms_erfs_actual_tyre_data_type_st*     const);
extern void                   send_erfs_hmi_axle_tyre_data    (Dtms_erfs_hmi_axle_tyre_type_st*        const);
extern void                   send_erfs_hmi_status            (Dtms_erfs_status_type_st*               const);
extern void                   send_tyre_pressure_level_data   (Dtms_pressure_level_indicator_type_st*  const);
extern void                   send_erfs_hmi_notification      (Dtms_erfs_hmi_notification_type_st*     const);
extern void                   send_tyre_current_data          (Dtms_display_pressure_type_st*          const, Dtms_display_temperature_type_st* const);
extern void                   send_diagnostic_log_and_trace   (uint8_t source_file_id,                        uint16_t                          line_number);
extern uint8_t                send_dtc_event_status           (Dtms_dtc_id_et,                                Dtms_dtc_set_event_et);
#define Rdci_STOP_SEC_CODE
#include "Rdci_MemMap.hpp"

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

