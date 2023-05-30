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
#define ADC1_CHx_EIM_TRIG_SEL_Pos                                    (16UL)
#define ADC1_CHx_EIM_TRIG_SEL_Msk                                    (0x70000UL)
#define ADC1_CHx_EIM_REP_Pos                                         (4UL)
#define ADC1_CHx_EIM_REP_Msk                                         (0x70UL)
#define ADC1_CHx_EIM_CHx_Pos                                         (0UL)
#define ADC1_CHx_EIM_CHx_Msk                                         (0x7UL)
#define ADC1_CHx_ESM_TRIG_SEL_Pos                                    (16UL)
#define ADC1_CHx_ESM_TRIG_SEL_Msk                                    (0x70000UL)
#define ADC1_CHx_ESM_ESM_0_Pos                                       (0UL)
#define ADC1_CHx_ESM_ESM_0_Msk                                       (0xffUL)
#define ADC1_CTRL_STS_IN_MUX_SEL_Pos                                 (4UL)
#define ADC1_CTRL_STS_IN_MUX_SEL_Msk                                 (0x70UL)
#define ADC1_CTRL_STS_EOC_Pos                                        (3UL)
#define ADC1_CTRL_STS_EOC_Msk                                        (0x8UL)
#define ADC1_CTRL_STS_SOC_Pos                                        (2UL)
#define ADC1_CTRL_STS_SOC_Msk                                        (0x4UL)
#define ADC1_CTRL_STS_PD_N_Pos                                       (0UL)
#define ADC1_CTRL_STS_PD_N_Msk                                       (0x1UL)
#define ADC1_DWSEL_ch7_Pos                                           (7UL)
#define ADC1_DWSEL_ch7_Msk                                           (0x80UL)
#define ADC1_DWSEL_ch6_Pos                                           (6UL)
#define ADC1_DWSEL_ch6_Msk                                           (0x40UL)
#define ADC1_DWSEL_ch5_Pos                                           (5UL)
#define ADC1_DWSEL_ch5_Msk                                           (0x20UL)
#define ADC1_DWSEL_ch4_Pos                                           (4UL)
#define ADC1_DWSEL_ch4_Msk                                           (0x10UL)
#define ADC1_DWSEL_ch3_Pos                                           (3UL)
#define ADC1_DWSEL_ch3_Msk                                           (0x8UL)
#define ADC1_DWSEL_ch2_Pos                                           (2UL)
#define ADC1_DWSEL_ch2_Msk                                           (0x4UL)
#define ADC1_DWSEL_ch1_Pos                                           (1UL)
#define ADC1_DWSEL_ch1_Msk                                           (0x2UL)
#define ADC1_DWSEL_ch0_Pos                                           (0UL)
#define ADC1_DWSEL_ch0_Msk                                           (0x1UL)
#define ADC1_GLOBCTR_ANON_Pos                                        (8UL)
#define ADC1_GLOBCTR_ANON_Msk                                        (0x300UL)
#define ADC1_GLOBCTR_DIVA_Pos                                        (0UL)
#define ADC1_GLOBCTR_DIVA_Msk                                        (0x3fUL)
#define ADC1_GLOBSTR_ANON_ST_Pos                                     (8UL)
#define ADC1_GLOBSTR_ANON_ST_Msk                                     (0x300UL)
#define ADC1_GLOBSTR_CHNR_Pos                                        (3UL)
#define ADC1_GLOBSTR_CHNR_Msk                                        (0x38UL)
#define ADC1_GLOBSTR_SAMPLE_Pos                                      (1UL)
#define ADC1_GLOBSTR_SAMPLE_Msk                                      (0x2UL)
#define ADC1_GLOBSTR_BUSY_Pos                                        (0UL)
#define ADC1_GLOBSTR_BUSY_Msk                                        (0x1UL)
#define ADC1_ICLR_ESM_ICLR_Pos                                       (9UL)
#define ADC1_ICLR_ESM_ICLR_Msk                                       (0x200UL)
#define ADC1_ICLR_EIM_ICLR_Pos                                       (8UL)
#define ADC1_ICLR_EIM_ICLR_Msk                                       (0x100UL)
#define ADC1_ICLR_CH7_ICLR_Pos                                       (7UL)
#define ADC1_ICLR_CH7_ICLR_Msk                                       (0x80UL)
#define ADC1_ICLR_CH6_ICLR_Pos                                       (6UL)
#define ADC1_ICLR_CH6_ICLR_Msk                                       (0x40UL)
#define ADC1_ICLR_CH5_ICLR_Pos                                       (5UL)
#define ADC1_ICLR_CH5_ICLR_Msk                                       (0x20UL)
#define ADC1_ICLR_CH4_ICLR_Pos                                       (4UL)
#define ADC1_ICLR_CH4_ICLR_Msk                                       (0x10UL)
#define ADC1_ICLR_CH3_ICLR_Pos                                       (3UL)
#define ADC1_ICLR_CH3_ICLR_Msk                                       (0x8UL)
#define ADC1_ICLR_CH2_ICLR_Pos                                       (2UL)
#define ADC1_ICLR_CH2_ICLR_Msk                                       (0x4UL)
#define ADC1_ICLR_CH1_ICLR_Pos                                       (1UL)
#define ADC1_ICLR_CH1_ICLR_Msk                                       (0x2UL)
#define ADC1_ICLR_CH0_ICLR_Pos                                       (0UL)
#define ADC1_ICLR_CH0_ICLR_Msk                                       (0x1UL)
#define ADC1_IE_ESM_IE_Pos                                           (9UL)
#define ADC1_IE_ESM_IE_Msk                                           (0x200UL)
#define ADC1_IE_EIM_IE_Pos                                           (8UL)
#define ADC1_IE_EIM_IE_Msk                                           (0x100UL)
#define ADC1_IE_CH7_IE_Pos                                           (7UL)
#define ADC1_IE_CH7_IE_Msk                                           (0x80UL)
#define ADC1_IE_CH6_IE_Pos                                           (6UL)
#define ADC1_IE_CH6_IE_Msk                                           (0x40UL)
#define ADC1_IE_CH5_IE_Pos                                           (5UL)
#define ADC1_IE_CH5_IE_Msk                                           (0x20UL)
#define ADC1_IE_CH4_IE_Pos                                           (4UL)
#define ADC1_IE_CH4_IE_Msk                                           (0x10UL)
#define ADC1_IE_CH3_IE_Pos                                           (3UL)
#define ADC1_IE_CH3_IE_Msk                                           (0x8UL)
#define ADC1_IE_CH2_IE_Pos                                           (2UL)
#define ADC1_IE_CH2_IE_Msk                                           (0x4UL)
#define ADC1_IE_CH1_IE_Pos                                           (1UL)
#define ADC1_IE_CH1_IE_Msk                                           (0x2UL)
#define ADC1_IE_CH0_IE_Pos                                           (0UL)
#define ADC1_IE_CH0_IE_Msk                                           (0x1UL)
#define ADC1_IS_ESM_STS_Pos                                          (9UL)
#define ADC1_IS_ESM_STS_Msk                                          (0x200UL)
#define ADC1_IS_EIM_STS_Pos                                          (8UL)
#define ADC1_IS_EIM_STS_Msk                                          (0x100UL)
#define ADC1_IS_CH7_STS_Pos                                          (7UL)
#define ADC1_IS_CH7_STS_Msk                                          (0x80UL)
#define ADC1_IS_CH6_STS_Pos                                          (6UL)
#define ADC1_IS_CH6_STS_Msk                                          (0x40UL)
#define ADC1_IS_CH5_STS_Pos                                          (5UL)
#define ADC1_IS_CH5_STS_Msk                                          (0x20UL)
#define ADC1_IS_CH4_STS_Pos                                          (4UL)
#define ADC1_IS_CH4_STS_Msk                                          (0x10UL)
#define ADC1_IS_CH3_STS_Pos                                          (3UL)
#define ADC1_IS_CH3_STS_Msk                                          (0x8UL)
#define ADC1_IS_CH2_STS_Pos                                          (2UL)
#define ADC1_IS_CH2_STS_Msk                                          (0x4UL)
#define ADC1_IS_CH1_STS_Pos                                          (1UL)
#define ADC1_IS_CH1_STS_Msk                                          (0x2UL)
#define ADC1_IS_CH0_STS_Pos                                          (0UL)
#define ADC1_IS_CH0_STS_Msk                                          (0x1UL)
#define ADC1_RES_OUT0_OF0_Pos                                        (18UL)
#define ADC1_RES_OUT0_OF0_Msk                                        (0x40000UL)
#define ADC1_RES_OUT0_VF0_Pos                                        (17UL)
#define ADC1_RES_OUT0_VF0_Msk                                        (0x20000UL)
#define ADC1_RES_OUT0_WFR0_Pos                                       (16UL)
#define ADC1_RES_OUT0_WFR0_Msk                                       (0x10000UL)
#define ADC1_RES_OUT0_OUT_CH0_Pos                                    (0UL)
#define ADC1_RES_OUT0_OUT_CH0_Msk                                    (0xfffUL)
#define ADC1_RES_OUT1_OF1_Pos                                        (18UL)
#define ADC1_RES_OUT1_OF1_Msk                                        (0x40000UL)
#define ADC1_RES_OUT1_VF1_Pos                                        (17UL)
#define ADC1_RES_OUT1_VF1_Msk                                        (0x20000UL)
#define ADC1_RES_OUT1_WFR1_Pos                                       (16UL)
#define ADC1_RES_OUT1_WFR1_Msk                                       (0x10000UL)
#define ADC1_RES_OUT1_OUT_CH1_Pos                                    (0UL)
#define ADC1_RES_OUT1_OUT_CH1_Msk                                    (0xfffUL)
#define ADC1_RES_OUT2_OF2_Pos                                        (18UL)
#define ADC1_RES_OUT2_OF2_Msk                                        (0x40000UL)
#define ADC1_RES_OUT2_VF2_Pos                                        (17UL)
#define ADC1_RES_OUT2_VF2_Msk                                        (0x20000UL)
#define ADC1_RES_OUT2_WFR2_Pos                                       (16UL)
#define ADC1_RES_OUT2_WFR2_Msk                                       (0x10000UL)
#define ADC1_RES_OUT2_OUT_CH2_Pos                                    (0UL)
#define ADC1_RES_OUT2_OUT_CH2_Msk                                    (0xfffUL)
#define ADC1_RES_OUT3_OF3_Pos                                        (18UL)
#define ADC1_RES_OUT3_OF3_Msk                                        (0x40000UL)
#define ADC1_RES_OUT3_VF3_Pos                                        (17UL)
#define ADC1_RES_OUT3_VF3_Msk                                        (0x20000UL)
#define ADC1_RES_OUT3_WFR3_Pos                                       (16UL)
#define ADC1_RES_OUT3_WFR3_Msk                                       (0x10000UL)
#define ADC1_RES_OUT3_OUT_CH3_Pos                                    (0UL)
#define ADC1_RES_OUT3_OUT_CH3_Msk                                    (0xfffUL)
#define ADC1_RES_OUT4_OF4_Pos                                        (18UL)
#define ADC1_RES_OUT4_OF4_Msk                                        (0x40000UL)
#define ADC1_RES_OUT4_VF4_Pos                                        (17UL)
#define ADC1_RES_OUT4_VF4_Msk                                        (0x20000UL)
#define ADC1_RES_OUT4_WFR4_Pos                                       (16UL)
#define ADC1_RES_OUT4_WFR4_Msk                                       (0x10000UL)
#define ADC1_RES_OUT4_OUT_CH4_Pos                                    (0UL)
#define ADC1_RES_OUT4_OUT_CH4_Msk                                    (0xfffUL)
#define ADC1_RES_OUT5_OF5_Pos                                        (18UL)
#define ADC1_RES_OUT5_OF5_Msk                                        (0x40000UL)
#define ADC1_RES_OUT5_VF5_Pos                                        (17UL)
#define ADC1_RES_OUT5_VF5_Msk                                        (0x20000UL)
#define ADC1_RES_OUT5_WFR5_Pos                                       (16UL)
#define ADC1_RES_OUT5_WFR5_Msk                                       (0x10000UL)
#define ADC1_RES_OUT5_OUT_CH5_Pos                                    (0UL)
#define ADC1_RES_OUT5_OUT_CH5_Msk                                    (0xfffUL)
#define ADC1_RES_OUT6_OF6_Pos                                        (18UL)
#define ADC1_RES_OUT6_OF6_Msk                                        (0x40000UL)
#define ADC1_RES_OUT6_VF6_Pos                                        (17UL)
#define ADC1_RES_OUT6_VF6_Msk                                        (0x20000UL)
#define ADC1_RES_OUT6_WFR6_Pos                                       (16UL)
#define ADC1_RES_OUT6_WFR6_Msk                                       (0x10000UL)
#define ADC1_RES_OUT6_OUT_CH6_Pos                                    (0UL)
#define ADC1_RES_OUT6_OUT_CH6_Msk                                    (0xfffUL)
#define ADC1_RES_OUT7_OF7_Pos                                        (18UL)
#define ADC1_RES_OUT7_OF7_Msk                                        (0x40000UL)
#define ADC1_RES_OUT7_VF7_Pos                                        (17UL)
#define ADC1_RES_OUT7_VF7_Msk                                        (0x20000UL)
#define ADC1_RES_OUT7_WFR7_Pos                                       (16UL)
#define ADC1_RES_OUT7_WFR7_Msk                                       (0x10000UL)
#define ADC1_RES_OUT7_OUT_CH7_Pos                                    (0UL)
#define ADC1_RES_OUT7_OUT_CH7_Msk                                    (0xfffUL)
#define ADC1_RES_OUT_EIM_OF8_Pos                                     (18UL)
#define ADC1_RES_OUT_EIM_OF8_Msk                                     (0x40000UL)
#define ADC1_RES_OUT_EIM_VF8_Pos                                     (17UL)
#define ADC1_RES_OUT_EIM_VF8_Msk                                     (0x20000UL)
#define ADC1_RES_OUT_EIM_WFR8_Pos                                    (16UL)
#define ADC1_RES_OUT_EIM_WFR8_Msk                                    (0x10000UL)
#define ADC1_RES_OUT_EIM_OUT_CH_EIM_Pos                              (0UL)
#define ADC1_RES_OUT_EIM_OUT_CH_EIM_Msk                              (0xfffUL)
#define ADC1_SQ1_4_SQ4_Pos                                           (24UL)
#define ADC1_SQ1_4_SQ4_Msk                                           (0xff000000UL)
#define ADC1_SQ1_4_SQ3_Pos                                           (16UL)
#define ADC1_SQ1_4_SQ3_Msk                                           (0xff0000UL)
#define ADC1_SQ1_4_SQ2_Pos                                           (8UL)
#define ADC1_SQ1_4_SQ2_Msk                                           (0xff00UL)
#define ADC1_SQ1_4_SQ1_Pos                                           (0UL)
#define ADC1_SQ1_4_SQ1_Msk                                           (0xffUL)
#define ADC1_SQ5_8_SQ8_Pos                                           (24UL)
#define ADC1_SQ5_8_SQ8_Msk                                           (0xff000000UL)
#define ADC1_SQ5_8_SQ7_Pos                                           (16UL)
#define ADC1_SQ5_8_SQ7_Msk                                           (0xff0000UL)
#define ADC1_SQ5_8_SQ6_Pos                                           (8UL)
#define ADC1_SQ5_8_SQ6_Msk                                           (0xff00UL)
#define ADC1_SQ5_8_SQ5_Pos                                           (0UL)
#define ADC1_SQ5_8_SQ5_Msk                                           (0xffUL)
#define ADC1_SQ_FB_CHx_Pos                                           (16UL)
#define ADC1_SQ_FB_CHx_Msk                                           (0x70000UL)
#define ADC1_SQ_FB_SQx_Pos                                           (11UL)
#define ADC1_SQ_FB_SQx_Msk                                           (0x3800UL)
#define ADC1_SQ_FB_ESM_ACTIVE_Pos                                    (10UL)
#define ADC1_SQ_FB_ESM_ACTIVE_Msk                                    (0x400UL)
#define ADC1_SQ_FB_EIM_ACTIVE_Pos                                    (9UL)
#define ADC1_SQ_FB_EIM_ACTIVE_Msk                                    (0x200UL)
#define ADC1_SQ_FB_SQ_RUN_Pos                                        (8UL)
#define ADC1_SQ_FB_SQ_RUN_Msk                                        (0x100UL)
#define ADC1_STC_0_3_ch3_Pos                                         (24UL)
#define ADC1_STC_0_3_ch3_Msk                                         (0xff000000UL)
#define ADC1_STC_0_3_ch2_Pos                                         (16UL)
#define ADC1_STC_0_3_ch2_Msk                                         (0xff0000UL)
#define ADC1_STC_0_3_ch1_Pos                                         (8UL)
#define ADC1_STC_0_3_ch1_Msk                                         (0xff00UL)
#define ADC1_STC_0_3_ch0_Pos                                         (0UL)
#define ADC1_STC_0_3_ch0_Msk                                         (0xffUL)
#define ADC1_STC_4_7_ch7_Pos                                         (24UL)
#define ADC1_STC_4_7_ch7_Msk                                         (0xff000000UL)
#define ADC1_STC_4_7_ch6_Pos                                         (16UL)
#define ADC1_STC_4_7_ch6_Msk                                         (0xff0000UL)
#define ADC1_STC_4_7_ch5_Pos                                         (8UL)
#define ADC1_STC_4_7_ch5_Msk                                         (0xff00UL)
#define ADC1_STC_4_7_ch4_Pos                                         (0UL)
#define ADC1_STC_4_7_ch4_Msk                                         (0xffUL)
#define ADC2_CAL_CH0_1_GAIN_CH1_Pos                                  (24UL)
#define ADC2_CAL_CH0_1_GAIN_CH1_Msk                                  (0xff000000UL)
#define ADC2_CAL_CH0_1_OFFS_CH1_Pos                                  (16UL)
#define ADC2_CAL_CH0_1_OFFS_CH1_Msk                                  (0xff0000UL)
#define ADC2_CAL_CH0_1_GAIN_CH0_Pos                                  (8UL)
#define ADC2_CAL_CH0_1_GAIN_CH0_Msk                                  (0xff00UL)
#define ADC2_CAL_CH0_1_OFFS_CH0_Pos                                  (0UL)
#define ADC2_CAL_CH0_1_OFFS_CH0_Msk                                  (0xffUL)
#define ADC2_CAL_CH2_3_GAIN_CH3_Pos                                  (24UL)
#define ADC2_CAL_CH2_3_GAIN_CH3_Msk                                  (0xff000000UL)
#define ADC2_CAL_CH2_3_OFFS_CH3_Pos                                  (16UL)
#define ADC2_CAL_CH2_3_OFFS_CH3_Msk                                  (0xff0000UL)
#define ADC2_CAL_CH2_3_GAIN_CH2_Pos                                  (8UL)
#define ADC2_CAL_CH2_3_GAIN_CH2_Msk                                  (0xff00UL)
#define ADC2_CAL_CH2_3_OFFS_CH2_Pos                                  (0UL)
#define ADC2_CAL_CH2_3_OFFS_CH2_Msk                                  (0xffUL)
#define ADC2_CAL_CH4_5_GAIN_CH5_Pos                                  (24UL)
#define ADC2_CAL_CH4_5_GAIN_CH5_Msk                                  (0xff000000UL)
#define ADC2_CAL_CH4_5_OFFS_CH5_Pos                                  (16UL)
#define ADC2_CAL_CH4_5_OFFS_CH5_Msk                                  (0xff0000UL)
#define ADC2_CAL_CH4_5_GAIN_CH4_Pos                                  (8UL)
#define ADC2_CAL_CH4_5_GAIN_CH4_Msk                                  (0xff00UL)
#define ADC2_CAL_CH4_5_OFFS_CH4_Pos                                  (0UL)
#define ADC2_CAL_CH4_5_OFFS_CH4_Msk                                  (0xffUL)
#define ADC2_CAL_CH6_7_GAIN_CH7_Pos                                  (24UL)
#define ADC2_CAL_CH6_7_GAIN_CH7_Msk                                  (0xff000000UL)
#define ADC2_CAL_CH6_7_OFFS_CH7_Pos                                  (16UL)
#define ADC2_CAL_CH6_7_OFFS_CH7_Msk                                  (0xff0000UL)
#define ADC2_CAL_CH6_7_GAIN_CH6_Pos                                  (8UL)
#define ADC2_CAL_CH6_7_GAIN_CH6_Msk                                  (0xff00UL)
#define ADC2_CAL_CH6_7_OFFS_CH6_Pos                                  (0UL)
#define ADC2_CAL_CH6_7_OFFS_CH6_Msk                                  (0xffUL)
#define ADC2_CAL_CH8_9_GAIN_CH9_Pos                                  (24UL)
#define ADC2_CAL_CH8_9_GAIN_CH9_Msk                                  (0xff000000UL)
#define ADC2_CAL_CH8_9_OFFS_CH9_Pos                                  (16UL)
#define ADC2_CAL_CH8_9_OFFS_CH9_Msk                                  (0xff0000UL)
#define ADC2_CAL_CH8_9_GAIN_CH8_Pos                                  (8UL)
#define ADC2_CAL_CH8_9_GAIN_CH8_Msk                                  (0xff00UL)
#define ADC2_CAL_CH8_9_OFFS_CH8_Pos                                  (0UL)
#define ADC2_CAL_CH8_9_OFFS_CH8_Msk                                  (0xffUL)
#define ADC2_CHx_EIM_SEL_Pos                                         (12UL)
#define ADC2_CHx_EIM_SEL_Msk                                         (0x1000UL)
#define ADC2_CHx_EIM_EN_Pos                                          (11UL)
#define ADC2_CHx_EIM_EN_Msk                                          (0x800UL)
#define ADC2_CHx_EIM_REP_Pos                                         (8UL)
#define ADC2_CHx_EIM_REP_Msk                                         (0x700UL)
#define ADC2_CHx_EIM_CHx_Pos                                         (0UL)
#define ADC2_CHx_EIM_CHx_Msk                                         (0x1fUL)
#define ADC2_CHx_ESM_STS_Pos                                         (17UL)
#define ADC2_CHx_ESM_STS_Msk                                         (0x20000UL)
#define ADC2_CHx_ESM_EN_Pos                                          (16UL)
#define ADC2_CHx_ESM_EN_Msk                                          (0x10000UL)
#define ADC2_CHx_ESM_SEL_Pos                                         (10UL)
#define ADC2_CHx_ESM_SEL_Msk                                         (0x400UL)
#define ADC2_CHx_ESM_ESM_1_Pos                                       (6UL)
#define ADC2_CHx_ESM_ESM_1_Msk                                       (0x3c0UL)
#define ADC2_CHx_ESM_ESM_0_Pos                                       (0UL)
#define ADC2_CHx_ESM_ESM_0_Msk                                       (0x3fUL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH3_Pos                            (27UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH3_Msk                            (0x18000000UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH3_Pos                             (24UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH3_Msk                             (0x7000000UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH2_Pos                            (19UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH2_Msk                            (0x180000UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH2_Pos                             (16UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH2_Msk                             (0x70000UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH1_Pos                            (11UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH1_Msk                            (0x1800UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH1_Pos                             (8UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH1_Msk                             (0x700UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH0_Pos                            (3UL)
#define ADC2_CNT0_3_LOWER_HYST_LO_CH0_Msk                            (0x18UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH0_Pos                             (0UL)
#define ADC2_CNT0_3_LOWER_CNT_LO_CH0_Msk                             (0x7UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH3_Pos                            (27UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH3_Msk                            (0x18000000UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH3_Pos                             (24UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH3_Msk                             (0x7000000UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH2_Pos                            (19UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH2_Msk                            (0x180000UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH2_Pos                             (16UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH2_Msk                             (0x70000UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH1_Pos                            (11UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH1_Msk                            (0x1800UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH1_Pos                             (8UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH1_Msk                             (0x700UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH0_Pos                            (3UL)
#define ADC2_CNT0_3_UPPER_HYST_UP_CH0_Msk                            (0x18UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH0_Pos                             (0UL)
#define ADC2_CNT0_3_UPPER_CNT_UP_CH0_Msk                             (0x7UL)
#define ADC2_CNT4_5_LOWER_HYST_LO_CH5_Pos                            (11UL)
#define ADC2_CNT4_5_LOWER_HYST_LO_CH5_Msk                            (0x1800UL)
#define ADC2_CNT4_5_LOWER_CNT_LO_CH5_Pos                             (8UL)
#define ADC2_CNT4_5_LOWER_CNT_LO_CH5_Msk                             (0x700UL)
#define ADC2_CNT4_5_LOWER_HYST_LO_CH4_Pos                            (3UL)
#define ADC2_CNT4_5_LOWER_HYST_LO_CH4_Msk                            (0x18UL)
#define ADC2_CNT4_5_LOWER_CNT_LO_CH4_Pos                             (0UL)
#define ADC2_CNT4_5_LOWER_CNT_LO_CH4_Msk                             (0x7UL)
#define ADC2_CNT4_5_UPPER_HYST_UP_CH5_Pos                            (11UL)
#define ADC2_CNT4_5_UPPER_HYST_UP_CH5_Msk                            (0x1800UL)
#define ADC2_CNT4_5_UPPER_CNT_UP_CH5_Pos                             (8UL)
#define ADC2_CNT4_5_UPPER_CNT_UP_CH5_Msk                             (0x700UL)
#define ADC2_CNT4_5_UPPER_HYST_UP_CH4_Pos                            (3UL)
#define ADC2_CNT4_5_UPPER_HYST_UP_CH4_Msk                            (0x18UL)
#define ADC2_CNT4_5_UPPER_CNT_UP_CH4_Pos                             (0UL)
#define ADC2_CNT4_5_UPPER_CNT_UP_CH4_Msk                             (0x7UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH9_Pos                            (27UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH9_Msk                            (0x18000000UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH9_Pos                             (24UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH9_Msk                             (0x7000000UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH8_Pos                            (19UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH8_Msk                            (0x180000UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH8_Pos                             (16UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH8_Msk                             (0x70000UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH7_Pos                            (11UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH7_Msk                            (0x1800UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH7_Pos                             (8UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH7_Msk                             (0x700UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH6_Pos                            (3UL)
#define ADC2_CNT6_9_LOWER_HYST_LO_CH6_Msk                            (0x18UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH6_Pos                             (0UL)
#define ADC2_CNT6_9_LOWER_CNT_LO_CH6_Msk                             (0x7UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH9_Pos                            (27UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH9_Msk                            (0x18000000UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH9_Pos                             (24UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH9_Msk                             (0x7000000UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH8_Pos                            (19UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH8_Msk                            (0x180000UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH8_Pos                             (16UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH8_Msk                             (0x70000UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH7_Pos                            (11UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH7_Msk                            (0x1800UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH7_Pos                             (8UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH7_Msk                             (0x700UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH6_Pos                            (3UL)
#define ADC2_CNT6_9_UPPER_HYST_UP_CH6_Msk                            (0x18UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH6_Pos                             (0UL)
#define ADC2_CNT6_9_UPPER_CNT_UP_CH6_Msk                             (0x7UL)
#define ADC2_CTRL1_CALIB_EN_Pos                                      (0UL)
#define ADC2_CTRL1_CALIB_EN_Msk                                      (0x3fUL)
#define ADC2_CTRL2_SEL_TS_COUNT_Pos                                  (16UL)
#define ADC2_CTRL2_SEL_TS_COUNT_Msk                                  (0xf0000UL)
#define ADC2_CTRL2_SAMPLE_TIME_int_Pos                               (8UL)
#define ADC2_CTRL2_SAMPLE_TIME_int_Msk                               (0xf00UL)
#define ADC2_CTRL2_MCM_RDY_Pos                                       (7UL)
#define ADC2_CTRL2_MCM_RDY_Msk                                       (0x80UL)
#define ADC2_CTRL2_TSENSE_SD_SEL_Pos                                 (2UL)
#define ADC2_CTRL2_TSENSE_SD_SEL_Msk                                 (0x4UL)
#define ADC2_CTRL2_TS_SD_SEL_CONF_Pos                                (1UL)
#define ADC2_CTRL2_TS_SD_SEL_CONF_Msk                                (0x2UL)
#define ADC2_CTRL2_MCM_PD_N_Pos                                      (0UL)
#define ADC2_CTRL2_MCM_PD_N_Msk                                      (0x1UL)
#define ADC2_CTRL4_FILT_OUT_SEL_9_6_Pos                              (8UL)
#define ADC2_CTRL4_FILT_OUT_SEL_9_6_Msk                              (0xf00UL)
#define ADC2_CTRL4_FILT_OUT_SEL_5_0_Pos                              (0UL)
#define ADC2_CTRL4_FILT_OUT_SEL_5_0_Msk                              (0x3fUL)
#define ADC2_CTRL_STS_VS_RANGE_Pos                                   (17UL)
#define ADC2_CTRL_STS_VS_RANGE_Msk                                   (0x20000UL)
#define ADC2_FILT_LO_CTRL_Ch5_EN_Pos                                 (5UL)
#define ADC2_FILT_LO_CTRL_Ch5_EN_Msk                                 (0x20UL)
#define ADC2_FILT_LO_CTRL_Ch4_EN_Pos                                 (4UL)
#define ADC2_FILT_LO_CTRL_Ch4_EN_Msk                                 (0x10UL)
#define ADC2_FILT_LO_CTRL_Ch3_EN_Pos                                 (3UL)
#define ADC2_FILT_LO_CTRL_Ch3_EN_Msk                                 (0x8UL)
#define ADC2_FILT_LO_CTRL_Ch2_EN_Pos                                 (2UL)
#define ADC2_FILT_LO_CTRL_Ch2_EN_Msk                                 (0x4UL)
#define ADC2_FILT_LO_CTRL_Ch1_EN_Pos                                 (1UL)
#define ADC2_FILT_LO_CTRL_Ch1_EN_Msk                                 (0x2UL)
#define ADC2_FILT_LO_CTRL_Ch0_EN_Pos                                 (0UL)
#define ADC2_FILT_LO_CTRL_Ch0_EN_Msk                                 (0x1UL)
#define ADC2_FILT_OUT0_OUT_CH0_Pos                                   (0UL)
#define ADC2_FILT_OUT0_OUT_CH0_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT1_OUT_CH1_Pos                                   (0UL)
#define ADC2_FILT_OUT1_OUT_CH1_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT2_OUT_CH2_Pos                                   (0UL)
#define ADC2_FILT_OUT2_OUT_CH2_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT3_OUT_CH3_Pos                                   (0UL)
#define ADC2_FILT_OUT3_OUT_CH3_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT4_OUT_CH4_Pos                                   (0UL)
#define ADC2_FILT_OUT4_OUT_CH4_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT5_OUT_CH5_Pos                                   (0UL)
#define ADC2_FILT_OUT5_OUT_CH5_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT6_OUT_CH6_Pos                                   (0UL)
#define ADC2_FILT_OUT6_OUT_CH6_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT7_OUT_CH7_Pos                                   (0UL)
#define ADC2_FILT_OUT7_OUT_CH7_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT8_OUT_CH8_Pos                                   (0UL)
#define ADC2_FILT_OUT8_OUT_CH8_Msk                                   (0x3ffUL)
#define ADC2_FILT_OUT9_OUT_CH9_Pos                                   (0UL)
#define ADC2_FILT_OUT9_OUT_CH9_Msk                                   (0x3ffUL)
#define ADC2_FILT_UP_CTRL_Ch5_EN_Pos                                 (5UL)
#define ADC2_FILT_UP_CTRL_Ch5_EN_Msk                                 (0x20UL)
#define ADC2_FILT_UP_CTRL_Ch4_EN_Pos                                 (4UL)
#define ADC2_FILT_UP_CTRL_Ch4_EN_Msk                                 (0x10UL)
#define ADC2_FILT_UP_CTRL_Ch3_EN_Pos                                 (3UL)
#define ADC2_FILT_UP_CTRL_Ch3_EN_Msk                                 (0x8UL)
#define ADC2_FILT_UP_CTRL_Ch2_EN_Pos                                 (2UL)
#define ADC2_FILT_UP_CTRL_Ch2_EN_Msk                                 (0x4UL)
#define ADC2_FILT_UP_CTRL_Ch1_EN_Pos                                 (1UL)
#define ADC2_FILT_UP_CTRL_Ch1_EN_Msk                                 (0x2UL)
#define ADC2_FILT_UP_CTRL_Ch0_EN_Pos                                 (0UL)
#define ADC2_FILT_UP_CTRL_Ch0_EN_Msk                                 (0x1UL)
#define ADC2_FILTCOEFF0_5_CH5_Pos                                    (10UL)
#define ADC2_FILTCOEFF0_5_CH5_Msk                                    (0xc00UL)
#define ADC2_FILTCOEFF0_5_CH4_Pos                                    (8UL)
#define ADC2_FILTCOEFF0_5_CH4_Msk                                    (0x300UL)
#define ADC2_FILTCOEFF0_5_CH3_Pos                                    (6UL)
#define ADC2_FILTCOEFF0_5_CH3_Msk                                    (0xc0UL)
#define ADC2_FILTCOEFF0_5_CH2_Pos                                    (4UL)
#define ADC2_FILTCOEFF0_5_CH2_Msk                                    (0x30UL)
#define ADC2_FILTCOEFF0_5_CH1_Pos                                    (2UL)
#define ADC2_FILTCOEFF0_5_CH1_Msk                                    (0xcUL)
#define ADC2_FILTCOEFF0_5_CH0_Pos                                    (0UL)
#define ADC2_FILTCOEFF0_5_CH0_Msk                                    (0x3UL)
#define ADC2_FILTCOEFF6_9_CH9_Pos                                    (6UL)
#define ADC2_FILTCOEFF6_9_CH9_Msk                                    (0xc0UL)
#define ADC2_FILTCOEFF6_9_CH8_Pos                                    (4UL)
#define ADC2_FILTCOEFF6_9_CH8_Msk                                    (0x30UL)
#define ADC2_FILTCOEFF6_9_CH7_Pos                                    (2UL)
#define ADC2_FILTCOEFF6_9_CH7_Msk                                    (0xcUL)
#define ADC2_FILTCOEFF6_9_CH6_Pos                                    (0UL)
#define ADC2_FILTCOEFF6_9_CH6_Msk                                    (0x3UL)
#define ADC2_HV_STS_READY_Pos                                        (1UL)
#define ADC2_HV_STS_READY_Msk                                        (0x2UL)
#define ADC2_MMODE0_5_Ch5_Pos                                        (10UL)
#define ADC2_MMODE0_5_Ch5_Msk                                        (0xc00UL)
#define ADC2_MMODE0_5_Ch4_Pos                                        (8UL)
#define ADC2_MMODE0_5_Ch4_Msk                                        (0x300UL)
#define ADC2_MMODE0_5_Ch3_Pos                                        (6UL)
#define ADC2_MMODE0_5_Ch3_Msk                                        (0xc0UL)
#define ADC2_MMODE0_5_Ch2_Pos                                        (4UL)
#define ADC2_MMODE0_5_Ch2_Msk                                        (0x30UL)
#define ADC2_MMODE0_5_Ch1_Pos                                        (2UL)
#define ADC2_MMODE0_5_Ch1_Msk                                        (0xcUL)
#define ADC2_MMODE0_5_Ch0_Pos                                        (0UL)
#define ADC2_MMODE0_5_Ch0_Msk                                        (0x3UL)
#define ADC2_SQ1_4_SQ4_Pos                                           (24UL)
#define ADC2_SQ1_4_SQ4_Msk                                           (0x3f000000UL)
#define ADC2_SQ1_4_SQ3_Pos                                           (16UL)
#define ADC2_SQ1_4_SQ3_Msk                                           (0x3f0000UL)
#define ADC2_SQ1_4_SQ2_Pos                                           (8UL)
#define ADC2_SQ1_4_SQ2_Msk                                           (0x3f00UL)
#define ADC2_SQ1_4_SQ1_Pos                                           (0UL)
#define ADC2_SQ1_4_SQ1_Msk                                           (0x3fUL)
#define ADC2_SQ1_8_int_SQ8_int_Pos                                   (28UL)
#define ADC2_SQ1_8_int_SQ8_int_Msk                                   (0xf0000000UL)
#define ADC2_SQ1_8_int_SQ7_int_Pos                                   (24UL)
#define ADC2_SQ1_8_int_SQ7_int_Msk                                   (0xf000000UL)
#define ADC2_SQ1_8_int_SQ6_int_Pos                                   (20UL)
#define ADC2_SQ1_8_int_SQ6_int_Msk                                   (0xf00000UL)
#define ADC2_SQ1_8_int_SQ5_int_Pos                                   (16UL)
#define ADC2_SQ1_8_int_SQ5_int_Msk                                   (0xf0000UL)
#define ADC2_SQ1_8_int_SQ4_int_Pos                                   (12UL)
#define ADC2_SQ1_8_int_SQ4_int_Msk                                   (0xf000UL)
#define ADC2_SQ1_8_int_SQ3_int_Pos                                   (8UL)
#define ADC2_SQ1_8_int_SQ3_int_Msk                                   (0xf00UL)
#define ADC2_SQ1_8_int_SQ2_int_Pos                                   (4UL)
#define ADC2_SQ1_8_int_SQ2_int_Msk                                   (0xf0UL)
#define ADC2_SQ1_8_int_SQ1_int_Pos                                   (0UL)
#define ADC2_SQ1_8_int_SQ1_int_Msk                                   (0xfUL)
#define ADC2_SQ5_8_SQ8_Pos                                           (24UL)
#define ADC2_SQ5_8_SQ8_Msk                                        (0x3f000000UL)
#define ADC2_SQ5_8_SQ7_Pos                                           (16UL)
#define ADC2_SQ5_8_SQ7_Msk                                          (0x3f0000UL)
#define ADC2_SQ5_8_SQ6_Pos                                           (8UL)
#define ADC2_SQ5_8_SQ6_Msk                                           (0x3f00UL)
#define ADC2_SQ5_8_SQ5_Pos                                           (0UL)
#define ADC2_SQ5_8_SQ5_Msk                                           (0x3fUL)
#define ADC2_SQ9_10_SQ10_Pos                                         (8UL)
#define ADC2_SQ9_10_SQ10_Msk                                         (0x3f00UL)
#define ADC2_SQ9_10_SQ9_Pos                                          (0UL)
#define ADC2_SQ9_10_SQ9_Msk                                          (0x3fUL)
#define ADC2_SQ9_10_int_SQ10_int_Pos                                 (4UL)
#define ADC2_SQ9_10_int_SQ10_int_Msk                                 (0xf0UL)
#define ADC2_SQ9_10_int_SQ9_int_Pos                                  (0UL)
#define ADC2_SQ9_10_int_SQ9_int_Msk                                  (0xfUL)
#define ADC2_SQ_FB_CHx_Pos                                           (16UL)
#define ADC2_SQ_FB_CHx_Msk                                          (0x1f0000UL)
#define ADC2_SQ_FB_SQx_Pos                                           (11UL)
#define ADC2_SQ_FB_SQx_Msk                                           (0x7800UL)
#define ADC2_SQ_FB_ESM_ACTIVE_Pos                                    (10UL)
#define ADC2_SQ_FB_ESM_ACTIVE_Msk                                    (0x400UL)
#define ADC2_SQ_FB_EIM_ACTIVE_Pos                                    (9UL)
#define ADC2_SQ_FB_EIM_ACTIVE_Msk                                    (0x200UL)
#define ADC2_SQ_FB_SQ_STOP_Pos                                       (8UL)
#define ADC2_SQ_FB_SQ_STOP_Msk                                       (0x100UL)
#define ADC2_SQ_FB_SQ_FB_Pos                                         (0UL)
#define ADC2_SQ_FB_SQ_FB_Msk                                         (0xfUL)
#define ADC2_TH0_3_LOWER_CH3_Pos                                     (24UL)
#define ADC2_TH0_3_LOWER_CH3_Msk                                  (0xff000000UL)
#define ADC2_TH0_3_LOWER_CH2_Pos                                     (16UL)
#define ADC2_TH0_3_LOWER_CH2_Msk                                    (0xff0000UL)
#define ADC2_TH0_3_LOWER_CH1_Pos                                     (8UL)
#define ADC2_TH0_3_LOWER_CH1_Msk                                     (0xff00UL)
#define ADC2_TH0_3_LOWER_CH0_Pos                                     (0UL)
#define ADC2_TH0_3_LOWER_CH0_Msk                                     (0xffUL)
#define ADC2_TH0_3_UPPER_CH3_Pos                                     (24UL)
#define ADC2_TH0_3_UPPER_CH3_Msk                                  (0xff000000UL)
#define ADC2_TH0_3_UPPER_CH2_Pos                                     (16UL)
#define ADC2_TH0_3_UPPER_CH2_Msk                                    (0xff0000UL)
#define ADC2_TH0_3_UPPER_CH1_Pos                                     (8UL)
#define ADC2_TH0_3_UPPER_CH1_Msk                                     (0xff00UL)
#define ADC2_TH0_3_UPPER_CH0_Pos                                     (0UL)
#define ADC2_TH0_3_UPPER_CH0_Msk                                     (0xffUL)
#define ADC2_TH4_5_LOWER_CH5_Pos                                     (8UL)
#define ADC2_TH4_5_LOWER_CH5_Msk                                     (0xff00UL)
#define ADC2_TH4_5_LOWER_CH4_Pos                                     (0UL)
#define ADC2_TH4_5_LOWER_CH4_Msk                                     (0xffUL)
#define ADC2_TH4_5_UPPER_CH5_Pos                                     (8UL)
#define ADC2_TH4_5_UPPER_CH5_Msk                                     (0xff00UL)
#define ADC2_TH4_5_UPPER_CH4_Pos                                     (0UL)
#define ADC2_TH4_5_UPPER_CH4_Msk                                     (0xffUL)
#define ADC2_TH6_9_LOWER_CH9_Pos                                     (24UL)
#define ADC2_TH6_9_LOWER_CH9_Msk                                  (0xff000000UL)
#define ADC2_TH6_9_LOWER_CH8_Pos                                     (16UL)
#define ADC2_TH6_9_LOWER_CH8_Msk                                    (0xff0000UL)
#define ADC2_TH6_9_LOWER_CH7_Pos                                     (8UL)
#define ADC2_TH6_9_LOWER_CH7_Msk                                     (0xff00UL)
#define ADC2_TH6_9_LOWER_CH6_Pos                                     (0UL)
#define ADC2_TH6_9_LOWER_CH6_Msk                                     (0xffUL)
#define ADC2_TH6_9_UPPER_CH9_Pos                                     (24UL)
#define ADC2_TH6_9_UPPER_CH9_Msk                                  (0xff000000UL)
#define ADC2_TH6_9_UPPER_CH8_Pos                                     (16UL)
#define ADC2_TH6_9_UPPER_CH8_Msk                                    (0xff0000UL)
#define ADC2_TH6_9_UPPER_CH7_Pos                                     (8UL)
#define ADC2_TH6_9_UPPER_CH7_Msk                                     (0xff00UL)
#define ADC2_TH6_9_UPPER_CH6_Pos                                     (0UL)
#define ADC2_TH6_9_UPPER_CH6_Msk                                     (0xffUL)
#define ADC34_CTRL_STS_ADC4_OSR_Pos                                  (28UL)
#define ADC34_CTRL_STS_ADC4_OSR_Msk                               (0xf0000000UL)
#define ADC34_CTRL_STS_ADC34_DITHVAL_Pos                             (24UL)
#define ADC34_CTRL_STS_ADC34_DITHVAL_Msk                           (0xf000000UL)
#define ADC34_CTRL_STS_ADC34_DITHEN_Pos                              (23UL)
#define ADC34_CTRL_STS_ADC34_DITHEN_Msk                             (0x800000UL)
#define ADC34_CTRL_STS_ADC34_EoC_CNT_Pos                             (21UL)
#define ADC34_CTRL_STS_ADC34_EoC_CNT_Msk                            (0x600000UL)
#define ADC34_CTRL_STS_ADC4_EoC_STS_Pos                              (20UL)
#define ADC34_CTRL_STS_ADC4_EoC_STS_Msk                             (0x100000UL)
#define ADC34_CTRL_STS_ADC4_SOC_Pos                                  (18UL)
#define ADC34_CTRL_STS_ADC4_SOC_Msk                                  (0x40000UL)
#define ADC34_CTRL_STS_ADC4_OFS_MEAS_EN_Pos                          (17UL)
#define ADC34_CTRL_STS_ADC4_OFS_MEAS_EN_Msk                          (0x20000UL)
#define ADC34_CTRL_STS_ADC4_EN_Pos                                   (16UL)
#define ADC34_CTRL_STS_ADC4_EN_Msk                                   (0x10000UL)
#define ADC34_CTRL_STS_ADC3_OSR_Pos                                  (12UL)
#define ADC34_CTRL_STS_ADC3_OSR_Msk                                  (0xf000UL)
#define ADC34_CTRL_STS_ADC34_REF_SEL_Pos                             (11UL)
#define ADC34_CTRL_STS_ADC34_REF_SEL_Msk                             (0x800UL)
#define ADC34_CTRL_STS_ADC34_DREQ_SEL_Pos                            (5UL)
#define ADC34_CTRL_STS_ADC34_DREQ_SEL_Msk                            (0x60UL)
#define ADC34_CTRL_STS_ADC3_EoC_STS_Pos                              (4UL)
#define ADC34_CTRL_STS_ADC3_EoC_STS_Msk                              (0x10UL)
#define ADC34_CTRL_STS_ADC3_SOC_Pos                                  (2UL)
#define ADC34_CTRL_STS_ADC3_SOC_Msk                                  (0x4UL)
#define ADC34_CTRL_STS_ADC3_OFS_MEAS_EN_Pos                          (1UL)
#define ADC34_CTRL_STS_ADC3_OFS_MEAS_EN_Msk                          (0x2UL)
#define ADC34_CTRL_STS_ADC3_EN_Pos                                   (0UL)
#define ADC34_CTRL_STS_ADC3_EN_Msk                                   (0x1UL)
#define ADC34_RESU_ADC4_RESU_Pos                                     (16UL)
#define ADC34_RESU_ADC4_RESU_Msk                                  (0xffff0000UL)
#define ADC34_RESU_ADC3_RESU_Pos                                     (0UL)
#define ADC34_RESU_ADC3_RESU_Msk                                     (0xffffUL)

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
      __IOM uint32_t PD_N       : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t SOC        : 1;
      __IM  uint32_t EOC        : 1;
      __IOM uint32_t IN_MUX_SEL : 3;
    }bit;
  }CTRL_STS;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t DIVA       : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t ANON       : 2;
    }bit;
  }GLOBCTR;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t CHx        : 3;
      __IM  uint32_t            : 1;
      __IOM uint32_t REP        : 3;
      __IM  uint32_t            : 9;
      __IOM uint32_t TRIG_SEL   : 3;
    }bit;
  }CHx_EIM;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t ESM_0      : 8;
      __IM  uint32_t            : 8;
      __IOM uint32_t TRIG_SEL   : 3;
    }bit;
  }CHx_ESM;
  __IM  uint32_t  RESERVED[2];

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t SQ1        : 8;
      __IOM uint32_t SQ2        : 8;
      __IOM uint32_t SQ3        : 8;
      __IOM uint32_t SQ4        : 8;
    }bit;
  }SQ1_4;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t SQ5        : 8;
      __IOM uint32_t SQ6        : 8;
      __IOM uint32_t SQ7        : 8;
      __IOM uint32_t SQ8        : 8;
    }bit;
  }SQ5_8;
  __IM  uint32_t  RESERVED1;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t ch0        : 1;
      __IOM uint32_t ch1        : 1;
      __IOM uint32_t ch2        : 1;
      __IOM uint32_t ch3        : 1;
      __IOM uint32_t ch4        : 1;
      __IOM uint32_t ch5        : 1;
      __IOM uint32_t ch6        : 1;
      __IOM uint32_t ch7        : 1;
    }bit;
  }DWSEL;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t ch0        : 8;
      __IOM uint32_t ch1        : 8;
      __IOM uint32_t ch2        : 8;
      __IOM uint32_t ch3        : 8;
    }bit;
  }STC_0_3;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t ch4        : 8;
      __IOM uint32_t ch5        : 8;
      __IOM uint32_t ch6        : 8;
      __IOM uint32_t ch7        : 8;
    }bit;
  }STC_4_7;
  __IM  uint32_t  RESERVED2[4];

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH_EIM : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR8       : 1;
      __IM  uint32_t VF8        : 1;
      __IM  uint32_t OF8        : 1;
    }bit;
  }RES_OUT_EIM;
  __IM  uint32_t  RESERVED3[3];

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t            : 8;
      __IOM uint32_t SQ_RUN     : 1;
      __IM  uint32_t EIM_ACTIVE : 1;
      __IM  uint32_t ESM_ACTIVE : 1;
      __IM  uint32_t SQx        : 3;
      __IM  uint32_t            : 2;
      __IM  uint32_t CHx        : 3;
    }bit;
  }SQ_FB;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH7    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR7       : 1;
      __IM  uint32_t VF7        : 1;
      __IM  uint32_t OF7        : 1;
    }bit;
  }RES_OUT7;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH6    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR6       : 1;
      __IM  uint32_t VF6        : 1;
      __IM  uint32_t OF6        : 1;
    }bit;
  }RES_OUT6;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH5    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR5       : 1;
      __IM  uint32_t VF5        : 1;
      __IM  uint32_t OF5        : 1;
    }bit;
  }RES_OUT5;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH4    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR4       : 1;
      __IM  uint32_t VF4        : 1;
      __IM  uint32_t OF4        : 1;
    }bit;
  }RES_OUT4;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH3    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR3       : 1;
      __IM  uint32_t VF3        : 1;
      __IM  uint32_t OF3        : 1;
    }bit;
  }RES_OUT3;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH2    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR2       : 1;
      __IM  uint32_t VF2        : 1;
      __IM  uint32_t OF2        : 1;
    }bit;
  }RES_OUT2;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH1    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR1       : 1;
      __IM  uint32_t VF1        : 1;
      __IM  uint32_t OF1        : 1;
    }bit;
  }RES_OUT1;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t OUT_CH0    : 12;
      __IM  uint32_t            : 4;
      __IOM uint32_t WFR0       : 1;
      __IM  uint32_t VF0        : 1;
      __IM  uint32_t OF0        : 1;
    }bit;
  }RES_OUT0;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t BUSY       : 1;
      __IM  uint32_t SAMPLE     : 1;
      __IM  uint32_t            : 1;
      __IM  uint32_t CHNR       : 3;
      __IM  uint32_t            : 2;
      __IM  uint32_t ANON_ST    : 2;
    }bit;
  }GLOBSTR;

  union{
    __IOM uint32_t reg;
    struct{
      __IM  uint32_t CH0_STS    : 1;
      __IM  uint32_t CH1_STS    : 1;
      __IM  uint32_t CH2_STS    : 1;
      __IM  uint32_t CH3_STS    : 1;
      __IM  uint32_t CH4_STS    : 1;
      __IM  uint32_t CH5_STS    : 1;
      __IM  uint32_t CH6_STS    : 1;
      __IM  uint32_t CH7_STS    : 1;
      __IM  uint32_t EIM_STS    : 1;
      __IM  uint32_t ESM_STS    : 1;
    }bit;
  }IS;

  union{
    __IOM uint32_t reg;
    struct{
      __IOM uint32_t CH0_IE     : 1;
      __IOM uint32_t CH1_IE     : 1;
      __IOM uint32_t CH2_IE     : 1;
      __IOM uint32_t CH3_IE     : 1;
      __IOM uint32_t CH4_IE     : 1;
      __IOM uint32_t CH5_IE     : 1;
      __IOM uint32_t CH6_IE     : 1;
      __IOM uint32_t CH7_IE     : 1;
      __IOM uint32_t EIM_IE     : 1;
      __IOM uint32_t ESM_IE     : 1;
    }bit;
  }IE;

  union{
    __IOM uint32_t reg;
    struct{
      __OM  uint32_t CH0_ICLR   : 1;
      __OM  uint32_t CH1_ICLR   : 1;
      __OM  uint32_t CH2_ICLR   : 1;
      __OM  uint32_t CH3_ICLR   : 1;
      __OM  uint32_t CH4_ICLR   : 1;
      __OM  uint32_t CH5_ICLR   : 1;
      __OM  uint32_t CH6_ICLR   : 1;
      __OM  uint32_t CH7_ICLR   : 1;
      __OM  uint32_t EIM_ICLR   : 1;
      __OM  uint32_t ESM_ICLR   : 1;
    }bit;
  }ICLR;
}ADC1_Type;

typedef struct{
  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 17;
      __IOM uint32_t VS_RANGE   : 1;
    }bit;
  }CTRL_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t SQ_FB      : 4;
      __IM  uint32_t            : 4;
      __IM  uint32_t SQ_STOP    : 1;
      __IM  uint32_t EIM_ACTIVE : 1;
      __IM  uint32_t ESM_ACTIVE : 1;
      __IM  uint32_t SQx        : 4;
      __IM  uint32_t            : 1;
      __IM  uint32_t CHx        : 5;
    }bit;
  }SQ_FB;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHx        : 5;
      __IM  uint32_t            : 3;
      __IOM uint32_t REP        : 3;
      __IOM uint32_t EN         : 1;
      __IOM uint32_t SEL        : 1;
    }bit;
  }CHx_EIM;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ESM_0      : 6;
      __IOM uint32_t ESM_1      : 4;
      __IOM uint32_t SEL        : 1;
      __IM  uint32_t            : 5;
      __IOM uint32_t EN         : 1;
      __IM  uint32_t STS        : 1;
    }bit;
  }CHx_ESM;
  __IM  uint32_t  RESERVED;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CALIB_EN   : 6;
    }bit;
  }CTRL1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t MCM_PD_N   : 1;
      __IOM uint32_t TS_SD_SEL_CONF : 1;
      __IOM uint32_t TSENSE_SD_SEL : 1;
      __IM  uint32_t            : 4;
      __IM  uint32_t MCM_RDY    : 1;
      __IOM uint32_t SAMPLE_TIME_int : 4;
      __IM  uint32_t            : 4;
      __IOM uint32_t SEL_TS_COUNT : 4;
    }bit;
  }CTRL2;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t FILT_OUT_SEL_5_0 : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t FILT_OUT_SEL_9_6 : 4;
    }bit;
  }CTRL4;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t SQ1        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ2        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ3        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ4        : 6;
    }bit;
  }SQ1_4;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t SQ5        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ6        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ7        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ8        : 6;
    }bit;
  }SQ5_8;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t SQ9        : 6;
      __IM  uint32_t            : 2;
      __IOM uint32_t SQ10       : 6;
    }bit;
  }SQ9_10;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t SQ1_int    : 4;
      __IM  uint32_t SQ2_int    : 4;
      __IM  uint32_t SQ3_int    : 4;
      __IM  uint32_t SQ4_int    : 4;
      __IM  uint32_t SQ5_int    : 4;
      __IM  uint32_t SQ6_int    : 4;
      __IM  uint32_t SQ7_int    : 4;
      __IM  uint32_t SQ8_int    : 4;
    }bit;
  }SQ1_8_int;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t SQ9_int    : 4;
      __IM  uint32_t SQ10_int   : 4;
    }bit;
  }SQ9_10_int;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t OFFS_CH0   : 8;
      __IOM uint32_t GAIN_CH0   : 8;
      __IOM uint32_t OFFS_CH1   : 8;
      __IOM uint32_t GAIN_CH1   : 8;
    }bit;
  }CAL_CH0_1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t OFFS_CH2   : 8;
      __IOM uint32_t GAIN_CH2   : 8;
      __IOM uint32_t OFFS_CH3   : 8;
      __IOM uint32_t GAIN_CH3   : 8;
    }bit;
  }CAL_CH2_3;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t OFFS_CH4   : 8;
      __IOM uint32_t GAIN_CH4   : 8;
      __IOM uint32_t OFFS_CH5   : 8;
      __IOM uint32_t GAIN_CH5   : 8;
    }bit;
  }CAL_CH4_5;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OFFS_CH6   : 8;
      __IM  uint32_t GAIN_CH6   : 8;
      __IM  uint32_t OFFS_CH7   : 8;
      __IM  uint32_t GAIN_CH7   : 8;
    }bit;
  }CAL_CH6_7;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OFFS_CH8   : 8;
      __IM  uint32_t GAIN_CH8   : 8;
      __IM  uint32_t OFFS_CH9   : 8;
      __IM  uint32_t GAIN_CH9   : 8;
    }bit;
  }CAL_CH8_9;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH0        : 2;
      __IOM uint32_t CH1        : 2;
      __IOM uint32_t CH2        : 2;
      __IOM uint32_t CH3        : 2;
      __IOM uint32_t CH4        : 2;
      __IOM uint32_t CH5        : 2;
    }bit;
  }FILTCOEFF0_5;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t CH6        : 2;
      __IM  uint32_t CH7        : 2;
      __IM  uint32_t CH8        : 2;
      __IM  uint32_t CH9        : 2;
    }bit;
  }FILTCOEFF6_9;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH0    : 10;
    }bit;
  }FILT_OUT0;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH1    : 10;
    }bit;
  }FILT_OUT1;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH2    : 10;
    }bit;
  }FILT_OUT2;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH3    : 10;
    }bit;
  }FILT_OUT3;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH4    : 10;
    }bit;
  }FILT_OUT4;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH5    : 10;
    }bit;
  }FILT_OUT5;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH6    : 10;
    }bit;
  }FILT_OUT6;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH7    : 10;
    }bit;
  }FILT_OUT7;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH8    : 10;
    }bit;
  }FILT_OUT8;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t OUT_CH9    : 10;
    }bit;
  }FILT_OUT9;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Ch0_EN     : 1;
      __IOM uint32_t Ch1_EN     : 1;
      __IOM uint32_t Ch2_EN     : 1;
      __IOM uint32_t Ch3_EN     : 1;
      __IOM uint32_t Ch4_EN     : 1;
      __IOM uint32_t Ch5_EN     : 1;
    }bit;
  }FILT_UP_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Ch0_EN     : 1;
      __IOM uint32_t Ch1_EN     : 1;
      __IOM uint32_t Ch2_EN     : 1;
      __IOM uint32_t Ch3_EN     : 1;
      __IOM uint32_t Ch4_EN     : 1;
      __IOM uint32_t Ch5_EN     : 1;
    }bit;
  }FILT_LO_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH0        : 8;
      __IOM uint32_t CH1        : 8;
      __IOM uint32_t CH2        : 8;
      __IOM uint32_t CH3        : 8;
    }bit;
  }TH0_3_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH4        : 8;
      __IOM uint32_t CH5        : 8;
    }bit;
  }TH4_5_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH6        : 8;
      __IM  uint32_t CH7        : 8;
      __IOM uint32_t CH8        : 8;
      __IOM uint32_t CH9        : 8;
    }bit;
  }TH6_9_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH0        : 8;
      __IOM uint32_t CH1        : 8;
      __IOM uint32_t CH2        : 8;
      __IOM uint32_t CH3        : 8;
    }bit;
  }TH0_3_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CH4        : 8;
      __IOM uint32_t CH5        : 8;
    }bit;
  }TH4_5_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t CH6        : 8;
      __IM  uint32_t CH7        : 8;
      __IM  uint32_t CH8        : 8;
      __IM  uint32_t CH9        : 8;
    }bit;
  }TH6_9_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CNT_LO_CH0 : 3;
      __IOM uint32_t HYST_LO_CH0 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_LO_CH1 : 3;
      __IOM uint32_t HYST_LO_CH1 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_LO_CH2 : 3;
      __IOM uint32_t HYST_LO_CH2 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_LO_CH3 : 3;
      __IOM uint32_t HYST_LO_CH3 : 2;
    }bit;
  }CNT0_3_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CNT_LO_CH4 : 3;
      __IOM uint32_t HYST_LO_CH4 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_LO_CH5 : 3;
      __IOM uint32_t HYST_LO_CH5 : 2;
    }bit;
  }CNT4_5_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t CNT_LO_CH6 : 3;
      __IM  uint32_t HYST_LO_CH6 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_LO_CH7 : 3;
      __IM  uint32_t HYST_LO_CH7 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_LO_CH8 : 3;
      __IM  uint32_t HYST_LO_CH8 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_LO_CH9 : 3;
      __IM  uint32_t HYST_LO_CH9 : 2;
    }bit;
  }CNT6_9_LOWER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CNT_UP_CH0 : 3;
      __IOM uint32_t HYST_UP_CH0 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_UP_CH1 : 3;
      __IOM uint32_t HYST_UP_CH1 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_UP_CH2 : 3;
      __IOM uint32_t HYST_UP_CH2 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_UP_CH3 : 3;
      __IOM uint32_t HYST_UP_CH3 : 2;
    }bit;
  }CNT0_3_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CNT_UP_CH4 : 3;
      __IOM uint32_t HYST_UP_CH4 : 2;
      __IM  uint32_t            : 3;
      __IOM uint32_t CNT_UP_CH5 : 3;
      __IOM uint32_t HYST_UP_CH5 : 2;
    }bit;
  }CNT4_5_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t CNT_UP_CH6 : 3;
      __IM  uint32_t HYST_UP_CH6 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_UP_CH7 : 3;
      __IM  uint32_t HYST_UP_CH7 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_UP_CH8 : 3;
      __IM  uint32_t HYST_UP_CH8 : 2;
      __IM  uint32_t            : 3;
      __IM  uint32_t CNT_UP_CH9 : 3;
      __IM  uint32_t HYST_UP_CH9 : 2;
    }bit;
  }CNT6_9_UPPER;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Ch0        : 2;
      __IOM uint32_t Ch1        : 2;
      __IOM uint32_t Ch2        : 2;
      __IOM uint32_t Ch3        : 2;
      __IOM uint32_t Ch4        : 2;
      __IOM uint32_t Ch5        : 2;
    }bit;
  }MMODE0_5;
  __IM  uint32_t  RESERVED1[2];

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IM  uint32_t READY      : 1;
    }bit;
  }HV_STS;
}ADC2_Type;

typedef struct{
   union{
      __IOM uint32_t reg;
      struct{
      __IOM uint32_t ADC3_EN          : 1;
      __IOM uint32_t ADC3_OFS_MEAS_EN : 1;
      __IOM uint32_t ADC3_SOC         : 1;
      __IM  uint32_t                  : 1;
      __IM  uint32_t ADC3_EoC_STS     : 1;
      __IM  uint32_t ADC34_DREQ_SEL   : 2;
      __IM  uint32_t                  : 4;
      __IOM uint32_t ADC34_REF_SEL    : 1;
      __IOM uint32_t ADC3_OSR         : 4;
      __IOM uint32_t ADC4_EN          : 1;
      __IOM uint32_t ADC4_OFS_MEAS_EN : 1;
      __IOM uint32_t ADC4_SOC         : 1;
      __IM  uint32_t                  : 1;
      __IM  uint32_t ADC4_EoC_STS     : 1;
      __IOM uint32_t ADC34_EoC_CNT    : 2;
      __IOM uint32_t ADC34_DITHEN     : 1;
      __IOM uint32_t ADC34_DITHVAL    : 4;
      __IOM uint32_t ADC4_OSR         : 4;
      }bit;
   }CTRL_STS;
   union{
      __IOM uint32_t reg;
      struct{
         __IM  uint32_t ADC3_RESU  : 16;
         __IM  uint32_t ADC4_RESU  : 16;
      }bit;
   }RESU;
}ADC34_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern ADC1_Type                                                          ADC1;
extern ADC2_Type                                                          ADC2;
extern ADC34_Type                                                         ADC34;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

