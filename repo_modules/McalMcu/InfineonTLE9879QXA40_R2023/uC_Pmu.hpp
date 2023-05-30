#pragma once
/******************************************************************************/
/* File   : uC_Pmu.hpp                                                        */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "tle987x.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PMU_CNF_CYC_SAMPLE_DEL_M03_Pos                                  (0UL)
#define PMU_CNF_CYC_SAMPLE_DEL_M03_Msk                                  (0xfUL)
#define PMU_CNF_CYC_SENSE_OSC_100kHz_EN_Pos                             (7UL)
#define PMU_CNF_CYC_SENSE_OSC_100kHz_EN_Msk                             (0x80UL)
#define PMU_CNF_CYC_SENSE_E01_Pos                                       (4UL)
#define PMU_CNF_CYC_SENSE_E01_Msk                                       (0x30UL)
#define PMU_CNF_CYC_SENSE_M03_Pos                                       (0UL)
#define PMU_CNF_CYC_SENSE_M03_Msk                                       (0xfUL)
#define PMU_CNF_CYC_WAKE_E01_Pos                                        (4UL)
#define PMU_CNF_CYC_WAKE_E01_Msk                                        (0x30UL)
#define PMU_CNF_CYC_WAKE_M03_Pos                                        (0UL)
#define PMU_CNF_CYC_WAKE_M03_Msk                                        (0xfUL)
#define PMU_CNF_PMU_SETTINGS_EN_VDDEXT_OC_OFF_N_Pos                     (7UL)
#define PMU_CNF_PMU_SETTINGS_EN_VDDEXT_OC_OFF_N_Msk                     (0x80UL)
#define PMU_CNF_PMU_SETTINGS_CYC_SENSE_EN_Pos                           (3UL)
#define PMU_CNF_PMU_SETTINGS_CYC_SENSE_EN_Msk                           (0x8UL)
#define PMU_CNF_PMU_SETTINGS_CYC_WAKE_EN_Pos                            (2UL)
#define PMU_CNF_PMU_SETTINGS_CYC_WAKE_EN_Msk                            (0x4UL)
#define PMU_CNF_PMU_SETTINGS_EN_0V9_N_Pos                               (1UL)
#define PMU_CNF_PMU_SETTINGS_EN_0V9_N_Msk                               (0x2UL)
#define PMU_CNF_PMU_SETTINGS_WAKE_W_RST_Pos                             (0UL)
#define PMU_CNF_PMU_SETTINGS_WAKE_W_RST_Msk                             (0x1UL)
#define PMU_CNF_RST_TFB_RST_TFB_Pos                                     (0UL)
#define PMU_CNF_RST_TFB_RST_TFB_Msk                                     (0x3UL)
#define PMU_CNF_WAKE_FILTER_CNF_GPIO_FT_Pos                             (2UL)
#define PMU_CNF_WAKE_FILTER_CNF_GPIO_FT_Msk                             (0xcUL)
#define PMU_CNF_WAKE_FILTER_CNF_MON_FT_Pos                              (1UL)
#define PMU_CNF_WAKE_FILTER_CNF_MON_FT_Msk                              (0x2UL)
#define PMU_CNF_WAKE_FILTER_CNF_LIN_FT_Pos                              (0UL)
#define PMU_CNF_WAKE_FILTER_CNF_LIN_FT_Msk                              (0x1UL)
#define PMU_GPUDATA00_DATA0_Pos                                         (0UL)
#define PMU_GPUDATA00_DATA0_Msk                                         (0xffUL)
#define PMU_GPUDATA01_DATA1_Pos                                         (0UL)
#define PMU_GPUDATA01_DATA1_Msk                                         (0xffUL)
#define PMU_GPUDATA02_DATA2_Pos                                         (0UL)
#define PMU_GPUDATA02_DATA2_Msk                                         (0xffUL)
#define PMU_GPUDATA03_DATA3_Pos                                         (0UL)
#define PMU_GPUDATA03_DATA3_Msk                                         (0xffUL)
#define PMU_GPUDATA04_DATA4_Pos                                         (0UL)
#define PMU_GPUDATA04_DATA4_Msk                                         (0xffUL)
#define PMU_GPUDATA05_DATA5_Pos                                         (0UL)
#define PMU_GPUDATA05_DATA5_Msk                                         (0xffUL)
#define PMU_LIN_WAKE_EN_LIN_EN_Pos                                      (7UL)
#define PMU_LIN_WAKE_EN_LIN_EN_Msk                                      (0x80UL)
#define PMU_MON_CNF_STS_Pos                                             (7UL)
#define PMU_MON_CNF_STS_Msk                                             (0x80UL)
#define PMU_MON_CNF_PU_Pos                                              (5UL)
#define PMU_MON_CNF_PU_Msk                                              (0x20UL)
#define PMU_MON_CNF_PD_Pos                                              (4UL)
#define PMU_MON_CNF_PD_Msk                                              (0x10UL)
#define PMU_MON_CNF_CYC_Pos                                             (3UL)
#define PMU_MON_CNF_CYC_Msk                                             (0x8UL)
#define PMU_MON_CNF_RISE_Pos                                            (2UL)
#define PMU_MON_CNF_RISE_Msk                                            (0x4UL)
#define PMU_MON_CNF_FALL_Pos                                            (1UL)
#define PMU_MON_CNF_FALL_Msk                                            (0x2UL)
#define PMU_MON_CNF_EN_Pos                                              (0UL)
#define PMU_MON_CNF_EN_Msk                                              (0x1UL)
#define PMU_PMU_RESET_STS1_PMU_1V5DidPOR_Pos                            (7UL)
#define PMU_PMU_RESET_STS1_PMU_1V5DidPOR_Msk                            (0x80UL)
#define PMU_PMU_RESET_STS1_PMU_PIN_Pos                                  (6UL)
#define PMU_PMU_RESET_STS1_PMU_PIN_Msk                                  (0x40UL)
#define PMU_PMU_RESET_STS1_PMU_ExtWDT_Pos                               (5UL)
#define PMU_PMU_RESET_STS1_PMU_ExtWDT_Msk                               (0x20UL)
#define PMU_PMU_RESET_STS1_PMU_ClkWDT_Pos                               (4UL)
#define PMU_PMU_RESET_STS1_PMU_ClkWDT_Msk                               (0x10UL)
#define PMU_PMU_RESET_STS1_PMU_LPR_Pos                                  (3UL)
#define PMU_PMU_RESET_STS1_PMU_LPR_Msk                                  (0x8UL)
#define PMU_PMU_RESET_STS1_PMU_SleepEX_Pos                              (2UL)
#define PMU_PMU_RESET_STS1_PMU_SleepEX_Msk                              (0x4UL)
#define PMU_PMU_RESET_STS1_PMU_WAKE_Pos                                 (1UL)
#define PMU_PMU_RESET_STS1_PMU_WAKE_Msk                                 (0x2UL)
#define PMU_PMU_RESET_STS1_SYS_FAIL_Pos                                 (0UL)
#define PMU_PMU_RESET_STS1_SYS_FAIL_Msk                                 (0x1UL)
#define PMU_PMU_RESET_STS2_LOCKUP_Pos                                   (2UL)
#define PMU_PMU_RESET_STS2_LOCKUP_Msk                                   (0x4UL)
#define PMU_PMU_RESET_STS2_PMU_SOFT_Pos                                 (1UL)
#define PMU_PMU_RESET_STS2_PMU_SOFT_Msk                                 (0x2UL)
#define PMU_PMU_RESET_STS2_PMU_IntWDT_Pos                               (0UL)
#define PMU_PMU_RESET_STS2_PMU_IntWDT_Msk                               (0x1UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_FAIL_EN_Pos                           (6UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_FAIL_EN_Msk                           (0x40UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_OVERLOAD_Pos                          (5UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_OVERLOAD_Msk                          (0x20UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_OVERVOLT_Pos                          (4UL)
#define PMU_PMU_SUPPLY_STS_PMU_5V_OVERVOLT_Msk                          (0x10UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_FAIL_EN_Pos                          (2UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_FAIL_EN_Msk                          (0x4UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_OVERLOAD_Pos                         (1UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_OVERLOAD_Msk                         (0x2UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_OVERVOLT_Pos                         (0UL)
#define PMU_PMU_SUPPLY_STS_PMU_1V5_OVERVOLT_Msk                         (0x1UL)
#define PMU_SYS_FAIL_STS_WDT1_SEQ_FAIL_Pos                              (6UL)
#define PMU_SYS_FAIL_STS_WDT1_SEQ_FAIL_Msk                              (0x40UL)
#define PMU_SYS_FAIL_STS_SYS_OT_Pos                                     (5UL)
#define PMU_SYS_FAIL_STS_SYS_OT_Msk                                     (0x20UL)
#define PMU_SYS_FAIL_STS_PMU_5V_OVL_Pos                                 (3UL)
#define PMU_SYS_FAIL_STS_PMU_5V_OVL_Msk                                 (0x8UL)
#define PMU_SYS_FAIL_STS_PMU_1V5_OVL_Pos                                (2UL)
#define PMU_SYS_FAIL_STS_PMU_1V5_OVL_Msk                                (0x4UL)
#define PMU_SYS_FAIL_STS_SUPP_TMOUT_Pos                                 (1UL)
#define PMU_SYS_FAIL_STS_SUPP_TMOUT_Msk                                 (0x2UL)
#define PMU_SYS_FAIL_STS_SUPP_SHORT_Pos                                 (0UL)
#define PMU_SYS_FAIL_STS_SUPP_SHORT_Msk                                 (0x1UL)
#define PMU_SystemStartConfig_MBIST_EN_Pos                              (0UL)
#define PMU_SystemStartConfig_MBIST_EN_Msk                              (0x1UL)
#define PMU_VDDEXT_CTRL_STABLE_Pos                                      (7UL)
#define PMU_VDDEXT_CTRL_STABLE_Msk                                      (0x80UL)
#define PMU_VDDEXT_CTRL_OK_Pos                                          (6UL)
#define PMU_VDDEXT_CTRL_OK_Msk                                          (0x40UL)
#define PMU_VDDEXT_CTRL_OVERLOAD_Pos                                    (5UL)
#define PMU_VDDEXT_CTRL_OVERLOAD_Msk                                    (0x20UL)
#define PMU_VDDEXT_CTRL_OVERVOLT_Pos                                    (4UL)
#define PMU_VDDEXT_CTRL_OVERVOLT_Msk                                    (0x10UL)
#define PMU_VDDEXT_CTRL_SHORT_Pos                                       (3UL)
#define PMU_VDDEXT_CTRL_SHORT_Msk                                       (0x8UL)
#define PMU_VDDEXT_CTRL_FAIL_EN_Pos                                     (2UL)
#define PMU_VDDEXT_CTRL_FAIL_EN_Msk                                     (0x4UL)
#define PMU_VDDEXT_CTRL_CYC_EN_Pos                                      (1UL)
#define PMU_VDDEXT_CTRL_CYC_EN_Msk                                      (0x2UL)
#define PMU_VDDEXT_CTRL_ENABLE_Pos                                      (0UL)
#define PMU_VDDEXT_CTRL_ENABLE_Msk                                      (0x1UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_4_Pos                         (4UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_4_Msk                         (0x10UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_3_Pos                         (3UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_3_Msk                         (0x8UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_2_Pos                         (2UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_2_Msk                         (0x4UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_1_Pos                         (1UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_1_Msk                         (0x2UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_0_Pos                         (0UL)
#define PMU_WAKE_CONF_GPIO0_CYC_GPIO0_CYC_0_Msk                         (0x1UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_4_Pos                         (4UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_4_Msk                         (0x10UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_3_Pos                         (3UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_3_Msk                         (0x8UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_2_Pos                         (2UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_2_Msk                         (0x4UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_1_Pos                         (1UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_1_Msk                         (0x2UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_0_Pos                         (0UL)
#define PMU_WAKE_CONF_GPIO0_FALL_GPIO0_FA_0_Msk                         (0x1UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_4_Pos                         (4UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_4_Msk                         (0x10UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_3_Pos                         (3UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_3_Msk                         (0x8UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_2_Pos                         (2UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_2_Msk                         (0x4UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_1_Pos                         (1UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_1_Msk                         (0x2UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_0_Pos                         (0UL)
#define PMU_WAKE_CONF_GPIO0_RISE_GPIO0_RI_0_Msk                         (0x1UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_4_Pos                         (4UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_4_Msk                         (0x10UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_3_Pos                         (3UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_3_Msk                         (0x8UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_2_Pos                         (2UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_2_Msk                         (0x4UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_1_Pos                         (1UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_1_Msk                         (0x2UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_0_Pos                         (0UL)
#define PMU_WAKE_CONF_GPIO1_CYC_GPIO1_CYC_0_Msk                         (0x1UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_4_Pos                         (4UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_4_Msk                         (0x10UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_3_Pos                         (3UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_3_Msk                         (0x8UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_2_Pos                         (2UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_2_Msk                         (0x4UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_1_Pos                         (1UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_1_Msk                         (0x2UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_0_Pos                         (0UL)
#define PMU_WAKE_CONF_GPIO1_FALL_GPIO1_FA_0_Msk                         (0x1UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_4_Pos                         (4UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_4_Msk                         (0x10UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_3_Pos                         (3UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_3_Msk                         (0x8UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_2_Pos                         (2UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_2_Msk                         (0x4UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_1_Pos                         (1UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_1_Msk                         (0x2UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_0_Pos                         (0UL)
#define PMU_WAKE_CONF_GPIO1_RISE_GPIO1_RI_0_Msk                         (0x1UL)
#define PMU_WAKE_STATUS_FAIL_Pos                                        (5UL)
#define PMU_WAKE_STATUS_FAIL_Msk                                        (0x20UL)
#define PMU_WAKE_STATUS_CYC_WAKE_Pos                                    (4UL)
#define PMU_WAKE_STATUS_CYC_WAKE_Msk                                    (0x10UL)
#define PMU_WAKE_STATUS_GPIO1_Pos                                       (3UL)
#define PMU_WAKE_STATUS_GPIO1_Msk                                       (0x8UL)
#define PMU_WAKE_STATUS_GPIO0_Pos                                       (2UL)
#define PMU_WAKE_STATUS_GPIO0_Msk                                       (0x4UL)
#define PMU_WAKE_STATUS_MON_WAKE_Pos                                    (1UL)
#define PMU_WAKE_STATUS_MON_WAKE_Msk                                    (0x2UL)
#define PMU_WAKE_STATUS_LIN_WAKE_Pos                                    (0UL)
#define PMU_WAKE_STATUS_LIN_WAKE_Msk                                    (0x1UL)
#define PMU_WAKE_STS_FAIL_VDDEXTSHORT_Pos                               (2UL)
#define PMU_WAKE_STS_FAIL_VDDEXTSHORT_Msk                               (0x4UL)
#define PMU_WAKE_STS_FAIL_SUPPFAIL_Pos                                  (0UL)
#define PMU_WAKE_STS_FAIL_SUPPFAIL_Msk                                  (0x1UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_4_Pos                              (4UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_4_Msk                              (0x10UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_3_Pos                              (3UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_3_Msk                              (0x8UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_2_Pos                              (2UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_2_Msk                              (0x4UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_1_Pos                              (1UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_1_Msk                              (0x2UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_0_Pos                              (0UL)
#define PMU_WAKE_STS_GPIO0_GPIO0_STS_0_Msk                              (0x1UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_4_Pos                              (4UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_4_Msk                              (0x10UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_3_Pos                              (3UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_3_Msk                              (0x8UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_2_Pos                              (2UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_2_Msk                              (0x4UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_1_Pos                              (1UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_1_Msk                              (0x2UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_0_Pos                              (0UL)
#define PMU_WAKE_STS_GPIO1_GPIO1_STS_0_Msk                              (0x1UL)
#define PMU_WAKE_STS_MON_WAKE_STS_Pos                                   (0UL)
#define PMU_WAKE_STS_MON_WAKE_STS_Msk                                   (0x1UL)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t LIN_WAKE    : 1;
      __IM  uint8_t MON_WAKE    : 1;
      __IM  uint8_t GPIO0       : 1;
      __IM  uint8_t GPIO1       : 1;
      __IM  uint8_t CYC_WAKE    : 1;
      __IM  uint8_t FAIL        : 1;
    }bit;
  }WAKE_STATUS;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t PMU_1V5_OVERVOLT : 1;
      __IM  uint8_t PMU_1V5_OVERLOAD : 1;
      __IOM uint8_t PMU_1V5_FAIL_EN : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t PMU_5V_OVERVOLT : 1;
      __IM  uint8_t PMU_5V_OVERLOAD : 1;
      __IOM uint8_t PMU_5V_FAIL_EN : 1;
    }bit;
  }PMU_SUPPLY_STS;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t ENABLE      : 1;
      __IOM uint8_t CYC_EN      : 1;
      __IOM uint8_t FAIL_EN     : 1;
      __IOM uint8_t SHORT       : 1;
      __IOM uint8_t OVERVOLT    : 1;
      __IOM uint8_t OVERLOAD    : 1;
      __IM  uint8_t OK          : 1;
      __IM  uint8_t STABLE      : 1;
    }bit;
  }VDDEXT_CTRL;
  __IM  uint8_t   RESERVED2[7];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SYS_FAIL    : 1;
      __IOM uint8_t PMU_WAKE    : 1;
      __IOM uint8_t PMU_SleepEX : 1;
      __IOM uint8_t PMU_LPR     : 1;
      __IOM uint8_t PMU_ClkWDT  : 1;
      __IOM uint8_t PMU_ExtWDT  : 1;
      __IOM uint8_t PMU_PIN     : 1;
      __IOM uint8_t PMU_1V5DidPOR : 1;
    }bit;
  }PMU_RESET_STS1;
  __IM  uint8_t   RESERVED3[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PMU_IntWDT  : 1;
      __IOM uint8_t PMU_SOFT    : 1;
      __IOM uint8_t LOCKUP      : 1;
    }bit;
  }PMU_RESET_STS2;
  __IM  uint8_t   RESERVED4[11];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WAKE_W_RST  : 1;
      __IOM uint8_t EN_0V9_N    : 1;
      __IOM uint8_t CYC_WAKE_EN : 1;
      __IOM uint8_t CYC_SENSE_EN : 1;
      __IM  uint8_t             : 3;
      __IOM uint8_t EN_VDDEXT_OC_OFF_N : 1;
    }bit;
  }CNF_PMU_SETTINGS;
  __IM  uint8_t   RESERVED5[7];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t M03         : 4;
      __IOM uint8_t E01         : 2;
      __IM  uint8_t             : 1;
      __IOM uint8_t OSC_100kHz_EN : 1;
    }bit;
  }CNF_CYC_SENSE;
  __IM  uint8_t   RESERVED6[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t M03         : 4;
      __IOM uint8_t E01         : 2;
    }bit;
  }CNF_CYC_WAKE;
  __IM  uint8_t   RESERVED7[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t M03         : 4;
    }bit;
  }CNF_CYC_SAMPLE_DEL;
  __IM  uint8_t   RESERVED9[31];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 7;
      __IOM uint8_t LIN_EN      : 1;
    }bit;
  }LIN_WAKE_EN;
  __IM  uint8_t   RESERVED10[27];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RST_TFB     : 2;
    }bit;
  }CNF_RST_TFB;
  __IM  uint8_t   RESERVED11[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SUPP_SHORT  : 1;
      __IOM uint8_t SUPP_TMOUT  : 1;
      __IOM uint8_t PMU_1V5_OVL : 1;
      __IOM uint8_t PMU_5V_OVL  : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t SYS_OT      : 1;
      __IOM uint8_t WDT1_SEQ_FAIL : 1;
    }bit;
  }SYS_FAIL_STS;
  __IM  uint8_t   RESERVED12[15];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SUPPFAIL    : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t VDDEXTSHORT : 1;
    }bit;
  }WAKE_STS_FAIL;
  __IM  uint8_t   RESERVED13[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t WAKE_STS    : 1;
    }bit;
  }WAKE_STS_MON;
  __IM  uint8_t   RESERVED14[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t GPIO0_STS_0 : 1;
      __IM  uint8_t GPIO0_STS_1 : 1;
      __IM  uint8_t GPIO0_STS_2 : 1;
      __IM  uint8_t GPIO0_STS_3 : 1;
      __IM  uint8_t GPIO0_STS_4 : 1;
    }bit;
  }WAKE_STS_GPIO0;
  __IM  uint8_t   RESERVED15[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t GPIO1_STS_0 : 1;
      __IM  uint8_t GPIO1_STS_1 : 1;
      __IM  uint8_t GPIO1_STS_2 : 1;
      __IM  uint8_t GPIO1_STS_3 : 1;
      __IM  uint8_t GPIO1_STS_4 : 1;
    }bit;
  }WAKE_STS_GPIO1;
  __IM  uint8_t   RESERVED16[31];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t CNF_LIN_FT  : 1;
      __IOM uint8_t CNF_MON_FT  : 1;
      __IOM uint8_t CNF_GPIO_FT : 2;
    }bit;
  }CNF_WAKE_FILTER;
  __IM  uint8_t   RESERVED17[19];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA0       : 8;
    }bit;
  }GPUDATA00;
  __IM  uint8_t   RESERVED18[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA1       : 8;
    }bit;
  }GPUDATA01;
  __IM  uint8_t   RESERVED19[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA2       : 8;
    }bit;
  }GPUDATA02;
  __IM  uint8_t   RESERVED20[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA3       : 8;
    }bit;
  }GPUDATA03;
  __IM  uint8_t   RESERVED21[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA4       : 8;
    }bit;
  }GPUDATA04;
  __IM  uint8_t   RESERVED22[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DATA5       : 8;
    }bit;
  }GPUDATA05;
  __IM  uint8_t   RESERVED23[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO0_RI_0  : 1;
      __IOM uint8_t GPIO0_RI_1  : 1;
      __IOM uint8_t GPIO0_RI_2  : 1;
      __IOM uint8_t GPIO0_RI_3  : 1;
      __IOM uint8_t GPIO0_RI_4  : 1;
    }bit;
  }WAKE_CONF_GPIO0_RISE;
  __IM  uint8_t   RESERVED24[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO0_FA_0  : 1;
      __IOM uint8_t GPIO0_FA_1  : 1;
      __IOM uint8_t GPIO0_FA_2  : 1;
      __IOM uint8_t GPIO0_FA_3  : 1;
      __IOM uint8_t GPIO0_FA_4  : 1;
    }bit;
  }WAKE_CONF_GPIO0_FALL;
  __IM  uint8_t   RESERVED25[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO0_CYC_0 : 1;
      __IOM uint8_t GPIO0_CYC_1 : 1;
      __IOM uint8_t GPIO0_CYC_2 : 1;
      __IOM uint8_t GPIO0_CYC_3 : 1;
      __IOM uint8_t GPIO0_CYC_4 : 1;
    }bit;
  }WAKE_CONF_GPIO0_CYC;
  __IM  uint8_t   RESERVED26[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO1_RI_0  : 1;
      __IOM uint8_t GPIO1_RI_1  : 1;
      __IOM uint8_t GPIO1_RI_2  : 1;
      __IOM uint8_t GPIO1_RI_3  : 1;
      __IOM uint8_t GPIO1_RI_4  : 1;
    }bit;
  }WAKE_CONF_GPIO1_RISE;
  __IM  uint8_t   RESERVED27[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO1_FA_0  : 1;
      __IOM uint8_t GPIO1_FA_1  : 1;
      __IOM uint8_t GPIO1_FA_2  : 1;
      __IOM uint8_t GPIO1_FA_3  : 1;
      __IOM uint8_t GPIO1_FA_4  : 1;
    }bit;
  }WAKE_CONF_GPIO1_FALL;
  __IM  uint8_t   RESERVED28[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPIO1_CYC_0 : 1;
      __IOM uint8_t GPIO1_CYC_1 : 1;
      __IOM uint8_t GPIO1_CYC_2 : 1;
      __IOM uint8_t GPIO1_CYC_3 : 1;
      __IOM uint8_t GPIO1_CYC_4 : 1;
    }bit;
  }WAKE_CONF_GPIO1_CYC;
  __IM  uint8_t   RESERVED29[487];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t MBIST_EN    : 1;
    }bit;
  }SystemStartConfig;
}PMU_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern PMU_Type                                                             PMU;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

