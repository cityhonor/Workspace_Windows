#ifndef Wrapper_HBG_CalPrmNvmBlock_h
#define Wrapper_HBG_CalPrmNvmBlock_h
/******************************************************************************/
/* File   : Wrapper_HBG_CalPrmNvmBlock.h                                      */
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

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define C_FUNKTION_REIFENPANNENERKENNUNG_AKTIV_BYTE           ( (uint8) 0x16 )  // byte 22
#define C_FUNKTION_REIFENPANNENERKENNUNG_AKTIV_MASK           ( (uint8) 0x03 )  // bitmask 0000 00xx

#define C_RDCI_T_PREWARN_NC_BYTE                              ( (uint8) 0x00 )  // byte 0
#define C_RDCI_MAX_THRESHOLD_BYTE                             ( (uint8) 0x00 )  // byte 0
#define C_RDCI_PREWARN_ENABLE_BYTE                            ( (uint8) 0x00 )  // byte 0
#define C_RDCI_STAT_INIT_BYTE                                 ( (uint8) 0x00 )  // byte 0
#define C_RDCI_NUM_PREWARN_DETECT_BYTE                        ( (uint8) 0x00 )  // byte 0
#define C_RDCI_PREWARN_IGNITION_BYTE                          ( (uint8) 0x00 )  // byte 0
#define C_RDCI_PANNE_BEF_POS_BYTE                             ( (uint8) 0x00 )  // byte 0
#define C_RDCI_FAST_DEFLATE_ENABLE_BYTE                       ( (uint8) 0x00 )  // byte 0
#define C_RDCI_TYR_ID_FILT_GW_BYTE                            ( (uint8) 0x01 )  // byte 1
#define C_RDCI_RESET_PLAUSI_BYTE                              ( (uint8) 0x01 )  // byte 1
#define C_RDCI_TPMS_MARKET_BYTE                               ( (uint8) 0x01 )  // byte 1
#define C_RDCI_SENSOR_FOREIGN_AK_RDK_BYTE                     ( (uint8) 0x01 )  // byte 1
#define C_RDCI_SENSOR_LOC_SYNC_BYTE                           ( (uint8) 0x01 )  // byte 1
#define C_RDCI_ERFS_ENABLE_BYTE                               ( (uint8) 0x01 )  // byte 1
#define C_RDCI_TREF_SEASONAL_ADJUSTMENT_ENABLE_BYTE           ( (uint8) 0x02 )  // byte 2
#define C_RDCI_DEBUG_SWITCH_2_BYTE                            ( (uint8) 0x02 )  // byte 2
#define C_RDCI_DEBUG_SWITCH_3_BYTE                            ( (uint8) 0x02 )  // byte 2
#define C_RDCI_DEBUG_SWITCH_4_BYTE                            ( (uint8) 0x02 )  // byte 2
#define C_RDCI_DISP_RESET_BYTE                                ( (uint8) 0x02 )  // byte 2
#define C_RDCI_COR_HOLD_OFF_TIME_BYTE                         ( (uint8) 0x02 )  // byte 2
#define C_RDCI_T_REF_SHIFT_BYTE                               ( (uint8) 0x03 )  // byte 3
#define C_RDCI_UIA_TH_C_BYTE                                  ( (uint8) 0x04 )  // byte 4
#define C_RDCI_UIW_TH_C_BYTE                                  ( (uint8) 0x05 )  // byte 5
#define C_RDCI_UIA_TH_NC_BYTE                                 ( (uint8) 0x06 )  // byte 6
#define C_RDCI_UIW_TH_NC_BYTE                                 ( (uint8) 0x07 )  // byte 7
#define C_RDCI_PANNE_TH_BYTE                                  ( (uint8) 0x08 )  // byte 8
#define C_RDCI_MIN_RCP_FA_BYTE                                ( (uint8) 0x09 )  // byte 9
#define C_RDCI_MIN_RCP_RA_BYTE                                ( (uint8) 0x0A )  // byte 10
#define C_RDCI_DELTA_P_L_R_BYTE                               ( (uint8) 0x0B )  // byte 11
#define C_RDCI_P_INIT_RANGE_MAX_BYTE                          ( (uint8) 0x0C )  // byte 12
#define C_RDCI_TIMEOUT_PREWARN_BYTE                           ( (uint8) 0x0D )  // byte 13
#define C_RDCI_DT_AMB_PREWARN_BYTE                            ( (uint8) 0x0E )  // byte 14
#define C_RDCI_DP_TO_I_PMIN_BYTE                              ( (uint8) 0x0F )  // byte 15
#define C_RDCI_LEARN_LOCATE_CONFIG_BYTE_0                     ( (uint8) 0x10 )  // byte 16
#define C_RDCI_LEARN_LOCATE_CONFIG_BYTE_1                     ( (uint8) 0x11 )  // byte 17
#define C_RDCI_XMIN_COOL_TIRE_BYTE                            ( (uint8) 0x12 )  // byte 18
#define C_RDCI_MAX_COR_TIME_BYTE                              ( (uint8) 0x13 )  // byte 19
#define C_RDCI_MAX_COR_RCP_BYTE                               ( (uint8) 0x14 )  // byte 20
#define C_RDCI_TH_C_TOL_BYTE                                  ( (uint8) 0x15 )  // byte 21
#define C_RDCI_TH_NC_TOL_BYTE                                 ( (uint8) 0x15 )  // byte 21
#define C_RDCI_LONG_HOLD_TIME_BYTE                            ( (uint8) 0x16 )  // byte 22
#define C_RDCI_SHORT_HOLD_TIME_BYTE                           ( (uint8) 0x16 )  // byte 22
#define C_RDCI_ECO_RCP_ENABLE_BYTE                            ( (uint8) 0x16 )  // byte 22
#define C_RDCI_DEFAULT_LOAD_COND_BYTE                         ( (uint8) 0x17 )  // byte 23
#define C_RDCI_ERFS_PLACARD_SOURCE_BYTE                       ( (uint8) 0x17 )  // byte 23
#define C_RDCI_DEFAULT_MENU_SEL_BYTE                          ( (uint8) 0x17 )  // byte 23
#define C_RDCI_DISP_CONF_TIMEOUT_BYTE                         ( (uint8) 0x17 )  // byte 23
#define C_RDCI_RID_ENABLE_BYTE                                ( (uint8) 0x18 )  // byte 24
#define C_RDCI_RESERVE_24_BYTE                                ( (uint8) 0x18 )  // byte 24
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_0                    ( (uint8) 0x19 )  // byte 25
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_1                    ( (uint8) 0x1A )  // byte 26
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_2                    ( (uint8) 0x1B )  // byte 27
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_3                    ( (uint8) 0x1C )  // byte 28
#define C_RDCI_RESERVE_29_BYTE                                ( (uint8) 0x1D )  // byte 29

#define C_RDCI_SPEED_CCM_ENABLE_BYTE                          ( (uint8) 0x1E )  // byte 30
#define C_RDCI_SPEED_CCM_HYST_BYTE                            ( (uint8) 0x1F )  // byte 31
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_BYTE_0               ( (uint8) 0x20 )  // byte 32
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_BYTE_1               ( (uint8) 0x21 )  // byte 33
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_BYTE_0               ( (uint8) 0x22 )  // byte 34
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_BYTE_1               ( (uint8) 0x23 )  // byte 35
#define C_RDCI_SPEED_CCM_TH_BYTE_0                            ( (uint8) 0x24 )  // byte 36
#define C_RDCI_SPEED_CCM_TH_BYTE_1                            ( (uint8) 0x25 )  // byte 37
#define C_RDCI_SPEED_CCM_TIME_BYTE                            ( (uint8) 0x26 )  // byte 38

#define C_RDCI_PARK_SUP_EXT_PARK_SUP_CONFIG_BYTE              ( (uint8) 0x27 )  // byte 39
#define C_RDCI_PARK_SUP_MOBILITY_LOSS_THRESHOLD_BYTE          ( (uint8) 0x28 )  // byte 40
#define C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_C_BYTE   ( (uint8) 0x29 )  // byte 41
#define C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_NC_BYTE  ( (uint8) 0x2A )  // byte 42
#define C_RDCI_PARK_SUP_TOL_NO_TEMP_COMP_BYTE                 ( (uint8) 0x2B )  // byte 43
#define C_RDCI_PARK_SUP_TOL_TEMP_COMP_BYTE                    ( (uint8) 0x2C )  // byte 44
#define C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_C_BYTE        ( (uint8) 0x2D )  // byte 45
#define C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_NC_BYTE       ( (uint8) 0x2E )  // byte 46


#define C_RDCI_T_PREWARN_NC_MASK                              ( (uint8) 0x01 )  // bitmask 0000 000x
#define C_RDCI_MAX_THRESHOLD_MASK                             ( (uint8) 0x02 )  // bitmask 0000 00x0
#define C_RDCI_PREWARN_ENABLE_MASK                            ( (uint8) 0x04 )  // bitmask 0000 0x00
#define C_RDCI_STAT_INIT_MASK                                 ( (uint8) 0x08 )  // bitmask 0000 x000
#define C_RDCI_NUM_PREWARN_DETECT_MASK                        ( (uint8) 0x10 )  // bitmask 000x 0000
#define C_RDCI_PREWARN_IGNITION_MASK                          ( (uint8) 0x20 )  // bitmask 00x0 0000
#define C_RDCI_PANNE_BEF_POS_MASK                             ( (uint8) 0x40 )  // bitmask 0x00 0000
#define C_RDCI_FAST_DEFLATE_ENABLE_MASK                       ( (uint8) 0x80 )  // bitmask x000 0000
#define C_RDCI_TYR_ID_FILT_GW_MASK                            ( (uint8) 0x01 )  // bitmask 0000 000x
#define C_RDCI_RESET_PLAUSI_MASK                              ( (uint8) 0x02 )  // bitmask 0000 00x0
#define C_RDCI_TPMS_MARKET_MASK                               ( (uint8) 0x1C )  // bitmask 000x xx00
#define C_RDCI_SENSOR_FOREIGN_AK_RDK_MASK                     ( (uint8) 0x20 )  // bitmask 00x0 0000
#define C_RDCI_SENSOR_LOC_SYNC_MASK                           ( (uint8) 0x40 )  // bitmask 0x00 0000
#define C_RDCI_ERFS_ENABLE_MASK                               ( (uint8) 0x80 )  // bitmask x000 0000
#define C_RDCI_TREF_SEASONAL_ADJUSTMENT_ENABLE_MASK           ( (uint8) 0x01 )  // bitmask 0000 000x
#define C_RDCI_DEBUG_SWITCH_2_MASK                            ( (uint8) 0x02 )  // bitmask 0000 00x0
#define C_RDCI_DEBUG_SWITCH_3_MASK                            ( (uint8) 0x04 )  // bitmask 0000 0x00
#define C_RDCI_DEBUG_SWITCH_4_MASK                            ( (uint8) 0x08 )  // bitmask 0000 x000
#define C_RDCI_DISP_RESET_MASK                                ( (uint8) 0x10 )  // bitmask 000x 0000
#define C_RDCI_COR_HOLD_OFF_TIME_MASK                         ( (uint8) 0xE0 )  // bitmask xxx0 0000
#define C_RDCI_T_REF_SHIFT_MASK                               ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_UIA_TH_C_MASK                                  ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_UIW_TH_C_MASK                                  ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_UIA_TH_NC_MASK                                 ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_UIW_TH_NC_MASK                                 ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_PANNE_TH_MASK                                  ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_MIN_RCP_FA_MASK                                ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_MIN_RCP_RA_MASK                                ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_DELTA_P_L_R_MASK                               ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_P_INIT_RANGE_MAX_MASK                          ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_TIMEOUT_PREWARN_MASK                           ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_DT_AMB_PREWARN_MASK                            ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_DP_TO_I_PMIN_MASK                              ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_LEARN_LOCATE_CONFIG_MASK_0                     ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_LEARN_LOCATE_CONFIG_MASK_1                     ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_XMIN_COOL_TIRE_MASK                            ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_MAX_COR_TIME_MASK                              ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_MAX_COR_RCP_MASK                               ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_TH_C_TOL_MASK                                  ( (uint8) 0x0F )  // bitmask 0000 xxxx
#define C_RDCI_TH_NC_TOL_MASK                                 ( (uint8) 0xF0 )  // bitmask xxxx 0000
#define C_RDCI_LONG_HOLD_TIME_MASK                            ( (uint8) 0x0F )  // bitmask 0000 xxxx
#define C_RDCI_SHORT_HOLD_TIME_MASK                           ( (uint8) 0x70 )  // bitmask 0xxx 0000
#define C_RDCI_ECO_RCP_ENABLE_MASK                            ( (uint8) 0x80 )  // bitmask x000 0000
#define C_RDCI_DEFAULT_LOAD_COND_MASK                         ( (uint8) 0x01 )  // bitmask 0000 000x
#define C_RDCI_ERFS_PLACARD_SOURCE_MASK                       ( (uint8) 0x06 )  // bitmask 0000 0xx0
#define C_RDCI_DEFAULT_MENU_SEL_MASK                          ( (uint8) 0x08 )  // bitmask 0000 x000
#define C_RDCI_DISP_CONF_TIMEOUT_MASK                         ( (uint8) 0xF0 )  // bitmask xxxx 0000
#define C_RDCI_RID_ENABLE_MASK                                ( (uint8) 0x01 )  // bitmask 0000 000x
#define C_RDCI_RESERVE_24_MASK                                ( (uint8) 0xFE )  // bitmask xxxx xxx0
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_0                    ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_1                    ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_2                    ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_3                    ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_RESERVE_29_MASK                                ( (uint8) 0xFF )  // bitmask xxxx xxxx

#define C_RDCI_SPEED_CCM_ENABLE_MASK                          ( (uint8) 0x01 )  // bitmask 0000 000x
#define C_RDCI_SPEED_CCM_HYST_MASK                            ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_MASK_0               ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_MASK_1               ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_MASK_0               ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_MASK_1               ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_SPEED_CCM_TH_MASK_0                            ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_SPEED_CCM_TH_MASK_1                            ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_SPEED_CCM_TIME_MASK                            ( (uint8) 0xFF )  // bitmask xxxx xxxx

#define C_RDCI_PARK_SUP_EXT_PARK_SUP_CONFIG_MASK              ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_PARK_SUP_MOBILITY_LOSS_THRESHOLD_MASK          ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_C_MASK   ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_NC_MASK  ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_PARK_SUP_TOL_NO_TEMP_COMP_MASK                 ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_PARK_SUP_TOL_TEMP_COMP_MASK                    ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_C_MASK        ( (uint8) 0xFF )  // bitmask xxxx xxxx
#define C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_NC_MASK       ( (uint8) 0xFF )  // bitmask xxxx xxxx

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
extern void NVM_ReadAllCalPrmBlocks( void );
extern void NVM_WriteAllCalPrmBlocks( void );

extern uint8 NvmDscCodierdatenAllgemein_ReadByte( uint8 , uint8 );
extern void NvmDscCodierdatenAllgemein_WriteByte( uint8 , uint8 , uint8 );

extern uint8 NvmDscCodierdatenRDCi_ReadByte( uint8 , uint8 );
extern void NvmDscCodierdatenRDCi_WriteByte( uint8 , uint8 , uint8 );

extern void NvmDscCodierdatenRDCi_Activate( uint8 );

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif
