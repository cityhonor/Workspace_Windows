#pragma once
/******************************************************************************/
/* File   : Template.hpp                                                      */
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
#define BDRV_CP_CLK_CTRL_CPCLK_EN_Pos                             (15UL)
#define BDRV_CP_CLK_CTRL_CPCLK_EN_Msk                             (0x8000UL)
#define BDRV_CP_CLK_CTRL_F_CP_Pos                                 (13UL)
#define BDRV_CP_CLK_CTRL_F_CP_Msk                                 (0x6000UL)
#define BDRV_CP_CLK_CTRL_DITH_UPPER_Pos                           (8UL)
#define BDRV_CP_CLK_CTRL_DITH_UPPER_Msk                           (0x1f00UL)
#define BDRV_CP_CLK_CTRL_DITH_LOWER_Pos                           (0UL)
#define BDRV_CP_CLK_CTRL_DITH_LOWER_Msk                           (0x1fUL)
#define BDRV_CP_CTRL_STS_VTHVCP9V_TRIM_Pos                        (26UL)
#define BDRV_CP_CTRL_STS_VTHVCP9V_TRIM_Msk                        (0xc000000UL)
#define BDRV_CP_CTRL_STS_VCP9V_SET_Pos                            (25UL)
#define BDRV_CP_CTRL_STS_VCP9V_SET_Msk                            (0x2000000UL)
#define BDRV_CP_CTRL_STS_CPLOPWRM_EN_Pos                          (24UL)
#define BDRV_CP_CTRL_STS_CPLOPWRM_EN_Msk                          (0x1000000UL)
#define BDRV_CP_CTRL_STS_VSD_UPTH_STS_Pos                         (23UL)
#define BDRV_CP_CTRL_STS_VSD_UPTH_STS_Msk                         (0x800000UL)
#define BDRV_CP_CTRL_STS_DRVx_VSDUP_DIS_Pos                       (22UL)
#define BDRV_CP_CTRL_STS_DRVx_VSDUP_DIS_Msk                       (0x400000UL)
#define BDRV_CP_CTRL_STS_VSD_LOTH_STS_Pos                         (21UL)
#define BDRV_CP_CTRL_STS_VSD_LOTH_STS_Msk                         (0x200000UL)
#define BDRV_CP_CTRL_STS_DRVx_VSDLO_DIS_Pos                       (20UL)
#define BDRV_CP_CTRL_STS_DRVx_VSDLO_DIS_Msk                       (0x100000UL)
#define BDRV_CP_CTRL_STS_VCP_UPTH_STS_Pos                         (19UL)
#define BDRV_CP_CTRL_STS_VCP_UPTH_STS_Msk                         (0x80000UL)
#define BDRV_CP_CTRL_STS_DRVx_VCPUP_DIS_Pos                       (18UL)
#define BDRV_CP_CTRL_STS_DRVx_VCPUP_DIS_Msk                       (0x40000UL)
#define BDRV_CP_CTRL_STS_VCP_LOTH1_STS_Pos                        (17UL)
#define BDRV_CP_CTRL_STS_VCP_LOTH1_STS_Msk                        (0x20000UL)
#define BDRV_CP_CTRL_STS_DRVx_VCPLO_DIS_Pos                       (16UL)
#define BDRV_CP_CTRL_STS_DRVx_VCPLO_DIS_Msk                       (0x10000UL)
#define BDRV_CP_CTRL_STS_VCP_LOWTH2_Pos                           (8UL)
#define BDRV_CP_CTRL_STS_VCP_LOWTH2_Msk                           (0x700UL)
#define BDRV_CP_CTRL_STS_VCP_LOTH2_STS_Pos                        (5UL)
#define BDRV_CP_CTRL_STS_VCP_LOTH2_STS_Msk                        (0x20UL)
#define BDRV_CP_CTRL_STS_CP_RDY_EN_Pos                            (2UL)
#define BDRV_CP_CTRL_STS_CP_RDY_EN_Msk                            (0x4UL)
#define BDRV_CP_CTRL_STS_CP_EN_Pos                                (0UL)
#define BDRV_CP_CTRL_STS_CP_EN_Msk                                (0x1UL)
#define BDRV_CTRL1_HS2_OC_DIS_Pos                                 (31UL)
#define BDRV_CTRL1_HS2_OC_DIS_Msk                                 (0x80000000UL)
#define BDRV_CTRL1_HS2_OC_STS_Pos                                 (30UL)
#define BDRV_CTRL1_HS2_OC_STS_Msk                                 (0x40000000UL)
#define BDRV_CTRL1_HS2_SUPERR_STS_Pos                             (29UL)
#define BDRV_CTRL1_HS2_SUPERR_STS_Msk                             (0x20000000UL)
#define BDRV_CTRL1_HS2_DS_STS_Pos                                 (28UL)
#define BDRV_CTRL1_HS2_DS_STS_Msk                                 (0x10000000UL)
#define BDRV_CTRL1_HS2_DCS_EN_Pos                                 (27UL)
#define BDRV_CTRL1_HS2_DCS_EN_Msk                                 (0x8000000UL)
#define BDRV_CTRL1_HS2_ON_Pos                                     (26UL)
#define BDRV_CTRL1_HS2_ON_Msk                                     (0x4000000UL)
#define BDRV_CTRL1_HS2_PWM_Pos                                    (25UL)
#define BDRV_CTRL1_HS2_PWM_Msk                                    (0x2000000UL)
#define BDRV_CTRL1_HS2_EN_Pos                                     (24UL)
#define BDRV_CTRL1_HS2_EN_Msk                                     (0x1000000UL)
#define BDRV_CTRL1_HS1_OC_DIS_Pos                                 (23UL)
#define BDRV_CTRL1_HS1_OC_DIS_Msk                                 (0x800000UL)
#define BDRV_CTRL1_HS1_OC_STS_Pos                                 (22UL)
#define BDRV_CTRL1_HS1_OC_STS_Msk                                 (0x400000UL)
#define BDRV_CTRL1_HS1_SUPERR_STS_Pos                             (21UL)
#define BDRV_CTRL1_HS1_SUPERR_STS_Msk                             (0x200000UL)
#define BDRV_CTRL1_HS1_DS_STS_Pos                                 (20UL)
#define BDRV_CTRL1_HS1_DS_STS_Msk                                 (0x100000UL)
#define BDRV_CTRL1_HS1_DCS_EN_Pos                                 (19UL)
#define BDRV_CTRL1_HS1_DCS_EN_Msk                                 (0x80000UL)
#define BDRV_CTRL1_HS1_ON_Pos                                     (18UL)
#define BDRV_CTRL1_HS1_ON_Msk                                     (0x40000UL)
#define BDRV_CTRL1_HS1_PWM_Pos                                    (17UL)
#define BDRV_CTRL1_HS1_PWM_Msk                                    (0x20000UL)
#define BDRV_CTRL1_HS1_EN_Pos                                     (16UL)
#define BDRV_CTRL1_HS1_EN_Msk                                     (0x10000UL)
#define BDRV_CTRL1_LS2_OC_DIS_Pos                                 (15UL)
#define BDRV_CTRL1_LS2_OC_DIS_Msk                                 (0x8000UL)
#define BDRV_CTRL1_LS2_OC_STS_Pos                                 (14UL)
#define BDRV_CTRL1_LS2_OC_STS_Msk                                 (0x4000UL)
#define BDRV_CTRL1_LS2_SUPERR_STS_Pos                             (13UL)
#define BDRV_CTRL1_LS2_SUPERR_STS_Msk                             (0x2000UL)
#define BDRV_CTRL1_LS2_DS_STS_Pos                                 (12UL)
#define BDRV_CTRL1_LS2_DS_STS_Msk                                 (0x1000UL)
#define BDRV_CTRL1_LS2_DCS_EN_Pos                                 (11UL)
#define BDRV_CTRL1_LS2_DCS_EN_Msk                                 (0x800UL)
#define BDRV_CTRL1_LS2_ON_Pos                                     (10UL)
#define BDRV_CTRL1_LS2_ON_Msk                                     (0x400UL)
#define BDRV_CTRL1_LS2_PWM_Pos                                    (9UL)
#define BDRV_CTRL1_LS2_PWM_Msk                                    (0x200UL)
#define BDRV_CTRL1_LS2_EN_Pos                                     (8UL)
#define BDRV_CTRL1_LS2_EN_Msk                                     (0x100UL)
#define BDRV_CTRL1_LS1_OC_DIS_Pos                                 (7UL)
#define BDRV_CTRL1_LS1_OC_DIS_Msk                                 (0x80UL)
#define BDRV_CTRL1_LS1_OC_STS_Pos                                 (6UL)
#define BDRV_CTRL1_LS1_OC_STS_Msk                                 (0x40UL)
#define BDRV_CTRL1_LS1_SUPERR_STS_Pos                             (5UL)
#define BDRV_CTRL1_LS1_SUPERR_STS_Msk                             (0x20UL)
#define BDRV_CTRL1_LS1_DS_STS_Pos                                 (4UL)
#define BDRV_CTRL1_LS1_DS_STS_Msk                                 (0x10UL)
#define BDRV_CTRL1_LS1_DCS_EN_Pos                                 (3UL)
#define BDRV_CTRL1_LS1_DCS_EN_Msk                                 (0x8UL)
#define BDRV_CTRL1_LS1_ON_Pos                                     (2UL)
#define BDRV_CTRL1_LS1_ON_Msk                                     (0x4UL)
#define BDRV_CTRL1_LS1_PWM_Pos                                    (1UL)
#define BDRV_CTRL1_LS1_PWM_Msk                                    (0x2UL)
#define BDRV_CTRL1_LS1_EN_Pos                                     (0UL)
#define BDRV_CTRL1_LS1_EN_Msk                                     (0x1UL)
#define BDRV_CTRL2_DLY_DIAG_DIRSEL_Pos                            (31UL)
#define BDRV_CTRL2_DLY_DIAG_DIRSEL_Msk                            (0x80000000UL)
#define BDRV_CTRL2_DLY_DIAG_CHSEL_Pos                             (28UL)
#define BDRV_CTRL2_DLY_DIAG_CHSEL_Msk                             (0x70000000UL)
#define BDRV_CTRL2_DLY_DIAG_STS_Pos                               (27UL)
#define BDRV_CTRL2_DLY_DIAG_STS_Msk                               (0x8000000UL)
#define BDRV_CTRL2_DLY_DIAG_SCLR_Pos                              (26UL)
#define BDRV_CTRL2_DLY_DIAG_SCLR_Msk                              (0x4000000UL)
#define BDRV_CTRL2_DLY_DIAG_TIM_Pos                               (16UL)
#define BDRV_CTRL2_DLY_DIAG_TIM_Msk                               (0x3ff0000UL)
#define BDRV_CTRL2_HS3_OC_DIS_Pos                                 (15UL)
#define BDRV_CTRL2_HS3_OC_DIS_Msk                                 (0x8000UL)
#define BDRV_CTRL2_HS3_OC_STS_Pos                                 (14UL)
#define BDRV_CTRL2_HS3_OC_STS_Msk                                 (0x4000UL)
#define BDRV_CTRL2_HS3_SUPERR_STS_Pos                             (13UL)
#define BDRV_CTRL2_HS3_SUPERR_STS_Msk                             (0x2000UL)
#define BDRV_CTRL2_HS3_DS_STS_Pos                                 (12UL)
#define BDRV_CTRL2_HS3_DS_STS_Msk                                 (0x1000UL)
#define BDRV_CTRL2_HS3_DCS_EN_Pos                                 (11UL)
#define BDRV_CTRL2_HS3_DCS_EN_Msk                                 (0x800UL)
#define BDRV_CTRL2_HS3_ON_Pos                                     (10UL)
#define BDRV_CTRL2_HS3_ON_Msk                                     (0x400UL)
#define BDRV_CTRL2_HS3_PWM_Pos                                    (9UL)
#define BDRV_CTRL2_HS3_PWM_Msk                                    (0x200UL)
#define BDRV_CTRL2_HS3_EN_Pos                                     (8UL)
#define BDRV_CTRL2_HS3_EN_Msk                                     (0x100UL)
#define BDRV_CTRL2_LS3_OC_DIS_Pos                                 (7UL)
#define BDRV_CTRL2_LS3_OC_DIS_Msk                                 (0x80UL)
#define BDRV_CTRL2_LS3_OC_STS_Pos                                 (6UL)
#define BDRV_CTRL2_LS3_OC_STS_Msk                                 (0x40UL)
#define BDRV_CTRL2_LS3_SUPERR_STS_Pos                             (5UL)
#define BDRV_CTRL2_LS3_SUPERR_STS_Msk                             (0x20UL)
#define BDRV_CTRL2_LS3_DS_STS_Pos                                 (4UL)
#define BDRV_CTRL2_LS3_DS_STS_Msk                                 (0x10UL)
#define BDRV_CTRL2_LS3_DCS_EN_Pos                                 (3UL)
#define BDRV_CTRL2_LS3_DCS_EN_Msk                                 (0x8UL)
#define BDRV_CTRL2_LS3_ON_Pos                                     (2UL)
#define BDRV_CTRL2_LS3_ON_Msk                                     (0x4UL)
#define BDRV_CTRL2_LS3_PWM_Pos                                    (1UL)
#define BDRV_CTRL2_LS3_PWM_Msk                                    (0x2UL)
#define BDRV_CTRL2_LS3_EN_Pos                                     (0UL)
#define BDRV_CTRL2_LS3_EN_Msk                                     (0x1UL)
#define BDRV_CTRL3_DRV_CCP_DIS_Pos                                (26UL)
#define BDRV_CTRL3_DRV_CCP_DIS_Msk                                (0x4000000UL)
#define BDRV_CTRL3_DRV_CCP_TIMSEL_Pos                             (24UL)
#define BDRV_CTRL3_DRV_CCP_TIMSEL_Msk                             (0x3000000UL)
#define BDRV_CTRL3_DSMONVTH_Pos                                   (16UL)
#define BDRV_CTRL3_DSMONVTH_Msk                                   (0x70000UL)
#define BDRV_CTRL3_OFF_SEQ_EN_Pos                                 (15UL)
#define BDRV_CTRL3_OFF_SEQ_EN_Msk                                 (0x8000UL)
#define BDRV_CTRL3_IDISCHARGEDIV2_N_Pos                           (14UL)
#define BDRV_CTRL3_IDISCHARGEDIV2_N_Msk                           (0x4000UL)
#define BDRV_CTRL3_IDISCHARGE_TRIM_Pos                            (8UL)
#define BDRV_CTRL3_IDISCHARGE_TRIM_Msk                            (0x1f00UL)
#define BDRV_CTRL3_ON_SEQ_EN_Pos                                  (7UL)
#define BDRV_CTRL3_ON_SEQ_EN_Msk                                  (0x80UL)
#define BDRV_CTRL3_ICHARGEDIV2_N_Pos                              (6UL)
#define BDRV_CTRL3_ICHARGEDIV2_N_Msk                              (0x40UL)
#define BDRV_CTRL3_ICHARGE_TRIM_Pos                               (0UL)
#define BDRV_CTRL3_ICHARGE_TRIM_Msk                               (0x1fUL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_1_Pos                         (27UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_1_Msk                         (0xf8000000UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_1_Pos                         (24UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_1_Msk                         (0x7000000UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_2_Pos                         (19UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_2_Msk                         (0xf80000UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_2_Pos                         (16UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_2_Msk                         (0x70000UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_3_Pos                         (11UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_3_Msk                         (0xf800UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_3_Pos                         (8UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_3_Msk                         (0x700UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_4_Pos                         (3UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_I_4_Msk                         (0xf8UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_4_Pos                         (0UL)
#define BDRV_OFF_SEQ_CTRL_DRV_OFF_t_4_Msk                         (0x7UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_1_Pos                           (27UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_1_Msk                           (0xf8000000UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_1_Pos                           (24UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_1_Msk                           (0x7000000UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_2_Pos                           (19UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_2_Msk                           (0xf80000UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_2_Pos                           (16UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_2_Msk                           (0x70000UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_3_Pos                           (11UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_3_Msk                           (0xf800UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_3_Pos                           (8UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_3_Msk                           (0x700UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_4_Pos                           (3UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_I_4_Msk                           (0xf8UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_4_Pos                           (0UL)
#define BDRV_ON_SEQ_CTRL_DRV_ON_t_4_Msk                           (0x7UL)
#define BDRV_TRIM_DRVx_CPLOW_TFILT_SEL_Pos                        (24UL)
#define BDRV_TRIM_DRVx_CPLOW_TFILT_SEL_Msk                        (0x3000000UL)
#define BDRV_TRIM_DRVx_HS3DRV_OCSDN_DIS_Pos                       (23UL)
#define BDRV_TRIM_DRVx_HS3DRV_OCSDN_DIS_Msk                       (0x800000UL)
#define BDRV_TRIM_DRVx_HS2DRV_OCSDN_DIS_Pos                       (22UL)
#define BDRV_TRIM_DRVx_HS2DRV_OCSDN_DIS_Msk                       (0x400000UL)
#define BDRV_TRIM_DRVx_HS1DRV_OCSDN_DIS_Pos                       (21UL)
#define BDRV_TRIM_DRVx_HS1DRV_OCSDN_DIS_Msk                       (0x200000UL)
#define BDRV_TRIM_DRVx_HS3DRV_FDISCHG_DIS_Pos                     (20UL)
#define BDRV_TRIM_DRVx_HS3DRV_FDISCHG_DIS_Msk                     (0x100000UL)
#define BDRV_TRIM_DRVx_HS2DRV_FDISCHG_DIS_Pos                     (19UL)
#define BDRV_TRIM_DRVx_HS2DRV_FDISCHG_DIS_Msk                     (0x80000UL)
#define BDRV_TRIM_DRVx_HS1DRV_FDISCHG_DIS_Pos                     (18UL)
#define BDRV_TRIM_DRVx_HS1DRV_FDISCHG_DIS_Msk                     (0x40000UL)
#define BDRV_TRIM_DRVx_HSDRV_DS_TFILT_SEL_Pos                     (16UL)
#define BDRV_TRIM_DRVx_HSDRV_DS_TFILT_SEL_Msk                     (0x30000UL)
#define BDRV_TRIM_DRVx_LS3DRV_OCSDN_DIS_Pos                       (15UL)
#define BDRV_TRIM_DRVx_LS3DRV_OCSDN_DIS_Msk                       (0x8000UL)
#define BDRV_TRIM_DRVx_LS2DRV_OCSDN_DIS_Pos                       (14UL)
#define BDRV_TRIM_DRVx_LS2DRV_OCSDN_DIS_Msk                       (0x4000UL)
#define BDRV_TRIM_DRVx_LS1DRV_OCSDN_DIS_Pos                       (13UL)
#define BDRV_TRIM_DRVx_LS1DRV_OCSDN_DIS_Msk                       (0x2000UL)
#define BDRV_TRIM_DRVx_LS3DRV_FDISCHG_DIS_Pos                     (12UL)
#define BDRV_TRIM_DRVx_LS3DRV_FDISCHG_DIS_Msk                     (0x1000UL)
#define BDRV_TRIM_DRVx_LS2DRV_FDISCHG_DIS_Pos                     (11UL)
#define BDRV_TRIM_DRVx_LS2DRV_FDISCHG_DIS_Msk                     (0x800UL)
#define BDRV_TRIM_DRVx_LS1DRV_FDISCHG_DIS_Pos                     (10UL)
#define BDRV_TRIM_DRVx_LS1DRV_FDISCHG_DIS_Msk                     (0x400UL)
#define BDRV_TRIM_DRVx_LSDRV_DS_TFILT_SEL_Pos                     (8UL)
#define BDRV_TRIM_DRVx_LSDRV_DS_TFILT_SEL_Msk                     (0x300UL)
#define BDRV_TRIM_DRVx_DRV_CCPTIMMUL_Pos                          (5UL)
#define BDRV_TRIM_DRVx_DRV_CCPTIMMUL_Msk                          (0x60UL)
#define BDRV_TRIM_DRVx_LS_HS_BT_TFILT_SEL_Pos                     (0UL)
#define BDRV_TRIM_DRVx_LS_HS_BT_TFILT_SEL_Msk                     (0x3UL)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LS1_EN     : 1;
      __IOM uint32_t LS1_PWM    : 1;
      __IOM uint32_t LS1_ON     : 1;
      __IOM uint32_t LS1_DCS_EN : 1;
      __IM  uint32_t LS1_DS_STS : 1;
      __IM  uint32_t LS1_SUPERR_STS : 1;
      __IM  uint32_t LS1_OC_STS : 1;
      __IOM uint32_t LS1_OC_DIS : 1;
      __IOM uint32_t LS2_EN     : 1;
      __IOM uint32_t LS2_PWM    : 1;
      __IOM uint32_t LS2_ON     : 1;
      __IOM uint32_t LS2_DCS_EN : 1;
      __IM  uint32_t LS2_DS_STS : 1;
      __IM  uint32_t LS2_SUPERR_STS : 1;
      __IM  uint32_t LS2_OC_STS : 1;
      __IOM uint32_t LS2_OC_DIS : 1;
      __IOM uint32_t HS1_EN     : 1;
      __IOM uint32_t HS1_PWM    : 1;
      __IOM uint32_t HS1_ON     : 1;
      __IOM uint32_t HS1_DCS_EN : 1;
      __IM  uint32_t HS1_DS_STS : 1;
      __IM  uint32_t HS1_SUPERR_STS : 1;
      __IM  uint32_t HS1_OC_STS : 1;
      __IOM uint32_t HS1_OC_DIS : 1;
      __IOM uint32_t HS2_EN     : 1;
      __IOM uint32_t HS2_PWM    : 1;
      __IOM uint32_t HS2_ON     : 1;
      __IOM uint32_t HS2_DCS_EN : 1;
      __IM  uint32_t HS2_DS_STS : 1;
      __IM  uint32_t HS2_SUPERR_STS : 1;
      __IM  uint32_t HS2_OC_STS : 1;
      __IOM uint32_t HS2_OC_DIS : 1;
    }bit;
  }CTRL1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LS3_EN     : 1;
      __IOM uint32_t LS3_PWM    : 1;
      __IOM uint32_t LS3_ON     : 1;
      __IOM uint32_t LS3_DCS_EN : 1;
      __IM  uint32_t LS3_DS_STS : 1;
      __IM  uint32_t LS3_SUPERR_STS : 1;
      __IM  uint32_t LS3_OC_STS : 1;
      __IOM uint32_t LS3_OC_DIS : 1;
      __IOM uint32_t HS3_EN     : 1;
      __IOM uint32_t HS3_PWM    : 1;
      __IOM uint32_t HS3_ON     : 1;
      __IOM uint32_t HS3_DCS_EN : 1;
      __IM  uint32_t HS3_DS_STS : 1;
      __IM  uint32_t HS3_SUPERR_STS : 1;
      __IM  uint32_t HS3_OC_STS : 1;
      __IOM uint32_t HS3_OC_DIS : 1;
      __IM  uint32_t DLY_DIAG_TIM : 10;
      __OM  uint32_t DLY_DIAG_SCLR : 1;
      __IM  uint32_t DLY_DIAG_STS : 1;
      __IOM uint32_t DLY_DIAG_CHSEL : 3;
      __IOM uint32_t DLY_DIAG_DIRSEL : 1;
    }bit;
  }CTRL2;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ICHARGE_TRIM : 5;
      __IM  uint32_t            : 1;
      __IOM uint32_t ICHARGEDIV2_N : 1;
      __IOM uint32_t ON_SEQ_EN  : 1;
      __IOM uint32_t IDISCHARGE_TRIM : 5;
      __IM  uint32_t            : 1;
      __IOM uint32_t IDISCHARGEDIV2_N : 1;
      __IOM uint32_t OFF_SEQ_EN : 1;
      __IOM uint32_t DSMONVTH   : 3;
      __IM  uint32_t            : 5;
      __IOM uint32_t DRV_CCP_TIMSEL : 2;
      __IOM uint32_t DRV_CCP_DIS : 1;
    }bit;
  }CTRL3;
  __IM  uint32_t  RESERVED;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t DRV_OFF_t_4 : 3;
      __IOM uint32_t DRV_OFF_I_4 : 5;
      __IOM uint32_t DRV_OFF_t_3 : 3;
      __IOM uint32_t DRV_OFF_I_3 : 5;
      __IOM uint32_t DRV_OFF_t_2 : 3;
      __IOM uint32_t DRV_OFF_I_2 : 5;
      __IOM uint32_t DRV_OFF_t_1 : 3;
      __IOM uint32_t DRV_OFF_I_1 : 5;
    }bit;
  }OFF_SEQ_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t DRV_ON_t_4 : 3;
      __IOM uint32_t DRV_ON_I_4 : 5;
      __IOM uint32_t DRV_ON_t_3 : 3;
      __IOM uint32_t DRV_ON_I_3 : 5;
      __IOM uint32_t DRV_ON_t_2 : 3;
      __IOM uint32_t DRV_ON_I_2 : 5;
      __IOM uint32_t DRV_ON_t_1 : 3;
      __IOM uint32_t DRV_ON_I_1 : 5;
    }bit;
  }ON_SEQ_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LS_HS_BT_TFILT_SEL : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t DRV_CCPTIMMUL : 2;
      __IM  uint32_t            : 1;
      __IOM uint32_t LSDRV_DS_TFILT_SEL : 2;
      __IOM uint32_t LS1DRV_FDISCHG_DIS : 1;
      __IOM uint32_t LS2DRV_FDISCHG_DIS : 1;
      __IOM uint32_t LS3DRV_FDISCHG_DIS : 1;
      __IOM uint32_t LS1DRV_OCSDN_DIS : 1;
      __IOM uint32_t LS2DRV_OCSDN_DIS : 1;
      __IOM uint32_t LS3DRV_OCSDN_DIS : 1;
      __IOM uint32_t HSDRV_DS_TFILT_SEL : 2;
      __IOM uint32_t HS1DRV_FDISCHG_DIS : 1;
      __IOM uint32_t HS2DRV_FDISCHG_DIS : 1;
      __IOM uint32_t HS3DRV_FDISCHG_DIS : 1;
      __IOM uint32_t HS1DRV_OCSDN_DIS : 1;
      __IOM uint32_t HS2DRV_OCSDN_DIS : 1;
      __IOM uint32_t HS3DRV_OCSDN_DIS : 1;
      __IOM uint32_t CPLOW_TFILT_SEL : 2;
    }bit;
  }TRIM_DRVx;
  __IM  uint32_t  RESERVED1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CP_EN      : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t CP_RDY_EN  : 1;
      __IM  uint32_t            : 2;
      __IM  uint32_t VCP_LOTH2_STS : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t VCP_LOWTH2 : 3;
      __IM  uint32_t            : 5;
      __IOM uint32_t DRVx_VCPLO_DIS : 1;
      __IM  uint32_t VCP_LOTH1_STS : 1;
      __IOM uint32_t DRVx_VCPUP_DIS : 1;
      __IM  uint32_t VCP_UPTH_STS : 1;
      __IOM uint32_t DRVx_VSDLO_DIS : 1;
      __IM  uint32_t VSD_LOTH_STS : 1;
      __IOM uint32_t DRVx_VSDUP_DIS : 1;
      __IM  uint32_t VSD_UPTH_STS : 1;
      __IOM uint32_t CPLOPWRM_EN : 1;
      __IOM uint32_t VCP9V_SET  : 1;
      __IOM uint32_t VTHVCP9V_TRIM : 2;
    }bit;
  }CP_CTRL_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t DITH_LOWER : 5;
      __IM  uint32_t            : 3;
      __IOM uint32_t DITH_UPPER : 5;
      __IOM uint32_t F_CP       : 2;
      __IOM uint32_t CPCLK_EN   : 1;
    }bit;
  }CP_CLK_CTRL;
}BDRV_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern BDRV_Type                                                           BDRV;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

