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
#define GPT12E_CAPREL_CAPREL_Pos                                      (0UL)
#define GPT12E_CAPREL_CAPREL_Msk                                      (0xffffUL)
#define GPT12E_ID_MOD_REV_Pos                                         (0UL)
#define GPT12E_ID_MOD_REV_Msk                                         (0xffUL)
#define GPT12E_ID_MOD_TYPE_Pos                                        (8UL)
#define GPT12E_ID_MOD_TYPE_Msk                                        (0xff00UL)
#define GPT12E_PISEL_IST2IN_Pos                                       (0UL)
#define GPT12E_PISEL_IST2IN_Msk                                       (0x1UL)
#define GPT12E_PISEL_IST2EUD_Pos                                      (1UL)
#define GPT12E_PISEL_IST2EUD_Msk                                      (0x2UL)
#define GPT12E_PISEL_IST3IN_Pos                                       (2UL)
#define GPT12E_PISEL_IST3IN_Msk                                       (0xcUL)
#define GPT12E_PISEL_IST3EUD_Pos                                      (4UL)
#define GPT12E_PISEL_IST3EUD_Msk                                      (0x30UL)
#define GPT12E_PISEL_IST4IN_Pos                                       (6UL)
#define GPT12E_PISEL_IST4IN_Msk                                       (0xc0UL)
#define GPT12E_PISEL_IST4EUD_Pos                                      (8UL)
#define GPT12E_PISEL_IST4EUD_Msk                                      (0x300UL)
#define GPT12E_PISEL_IST5IN_Pos                                       (10UL)
#define GPT12E_PISEL_IST5IN_Msk                                       (0x400UL)
#define GPT12E_PISEL_IST5EUD_Pos                                      (11UL)
#define GPT12E_PISEL_IST5EUD_Msk                                      (0x800UL)
#define GPT12E_PISEL_IST6IN_Pos                                       (12UL)
#define GPT12E_PISEL_IST6IN_Msk                                       (0x1000UL)
#define GPT12E_PISEL_IST6EUD_Pos                                      (13UL)
#define GPT12E_PISEL_IST6EUD_Msk                                      (0x2000UL)
#define GPT12E_PISEL_ISCAPIN_Pos                                      (14UL)
#define GPT12E_PISEL_ISCAPIN_Msk                                      (0xc000UL)
#define GPT12E_T2_T2_Pos                                              (0UL)
#define GPT12E_T2_T2_Msk                                              (0xffffUL)
#define GPT12E_T2CON_T2I_Pos                                          (0UL)
#define GPT12E_T2CON_T2I_Msk                                          (0x7UL)
#define GPT12E_T2CON_T2M_Pos                                          (3UL)
#define GPT12E_T2CON_T2M_Msk                                          (0x38UL)
#define GPT12E_T2CON_T2R_Pos                                          (6UL)
#define GPT12E_T2CON_T2R_Msk                                          (0x40UL)
#define GPT12E_T2CON_T2UD_Pos                                         (7UL)
#define GPT12E_T2CON_T2UD_Msk                                         (0x80UL)
#define GPT12E_T2CON_T2UDE_Pos                                        (8UL)
#define GPT12E_T2CON_T2UDE_Msk                                        (0x100UL)
#define GPT12E_T2CON_T2RC_Pos                                         (9UL)
#define GPT12E_T2CON_T2RC_Msk                                         (0x200UL)
#define GPT12E_T2CON_T2IRDIS_Pos                                      (12UL)
#define GPT12E_T2CON_T2IRDIS_Msk                                      (0x1000UL)
#define GPT12E_T2CON_T2EDGE_Pos                                       (13UL)
#define GPT12E_T2CON_T2EDGE_Msk                                       (0x2000UL)
#define GPT12E_T2CON_T2CHDIR_Pos                                      (14UL)
#define GPT12E_T2CON_T2CHDIR_Msk                                      (0x4000UL)
#define GPT12E_T2CON_T2RDIR_Pos                                       (15UL)
#define GPT12E_T2CON_T2RDIR_Msk                                       (0x8000UL)
#define GPT12E_T3_T3_Pos                                              (0UL)
#define GPT12E_T3_T3_Msk                                              (0xffffUL)
#define GPT12E_T3CON_T3I_Pos                                          (0UL)
#define GPT12E_T3CON_T3I_Msk                                          (0x7UL)
#define GPT12E_T3CON_T3M_Pos                                          (3UL)
#define GPT12E_T3CON_T3M_Msk                                          (0x38UL)
#define GPT12E_T3CON_T3R_Pos                                          (6UL)
#define GPT12E_T3CON_T3R_Msk                                          (0x40UL)
#define GPT12E_T3CON_T3UD_Pos                                         (7UL)
#define GPT12E_T3CON_T3UD_Msk                                         (0x80UL)
#define GPT12E_T3CON_T3UDE_Pos                                        (8UL)
#define GPT12E_T3CON_T3UDE_Msk                                        (0x100UL)
#define GPT12E_T3CON_T3OE_Pos                                         (9UL)
#define GPT12E_T3CON_T3OE_Msk                                         (0x200UL)
#define GPT12E_T3CON_T3OTL_Pos                                        (10UL)
#define GPT12E_T3CON_T3OTL_Msk                                        (0x400UL)
#define GPT12E_T3CON_BPS1_Pos                                         (11UL)
#define GPT12E_T3CON_BPS1_Msk                                         (0x1800UL)
#define GPT12E_T3CON_T3EDGE_Pos                                       (13UL)
#define GPT12E_T3CON_T3EDGE_Msk                                       (0x2000UL)
#define GPT12E_T3CON_T3CHDIR_Pos                                      (14UL)
#define GPT12E_T3CON_T3CHDIR_Msk                                      (0x4000UL)
#define GPT12E_T3CON_T3RDIR_Pos                                       (15UL)
#define GPT12E_T3CON_T3RDIR_Msk                                       (0x8000UL)
#define GPT12E_T4_T4_Pos                                              (0UL)
#define GPT12E_T4_T4_Msk                                              (0xffffUL)
#define GPT12E_T4CON_T4I_Pos                                          (0UL)
#define GPT12E_T4CON_T4I_Msk                                          (0x7UL)
#define GPT12E_T4CON_T4M_Pos                                          (3UL)
#define GPT12E_T4CON_T4M_Msk                                          (0x38UL)
#define GPT12E_T4CON_T4R_Pos                                          (6UL)
#define GPT12E_T4CON_T4R_Msk                                          (0x40UL)
#define GPT12E_T4CON_T4UD_Pos                                         (7UL)
#define GPT12E_T4CON_T4UD_Msk                                         (0x80UL)
#define GPT12E_T4CON_T4UDE_Pos                                        (8UL)
#define GPT12E_T4CON_T4UDE_Msk                                        (0x100UL)
#define GPT12E_T4CON_T4RC_Pos                                         (9UL)
#define GPT12E_T4CON_T4RC_Msk                                         (0x200UL)
#define GPT12E_T4CON_CLRT2EN_Pos                                      (10UL)
#define GPT12E_T4CON_CLRT2EN_Msk                                      (0x400UL)
#define GPT12E_T4CON_CLRT3EN_Pos                                      (11UL)
#define GPT12E_T4CON_CLRT3EN_Msk                                      (0x800UL)
#define GPT12E_T4CON_T4IRDIS_Pos                                      (12UL)
#define GPT12E_T4CON_T4IRDIS_Msk                                      (0x1000UL)
#define GPT12E_T4CON_T4EDGE_Pos                                       (13UL)
#define GPT12E_T4CON_T4EDGE_Msk                                       (0x2000UL)
#define GPT12E_T4CON_T4CHDIR_Pos                                      (14UL)
#define GPT12E_T4CON_T4CHDIR_Msk                                      (0x4000UL)
#define GPT12E_T4CON_T4RDIR_Pos                                       (15UL)
#define GPT12E_T4CON_T4RDIR_Msk                                       (0x8000UL)
#define GPT12E_T5_T5_Pos                                              (0UL)
#define GPT12E_T5_T5_Msk                                              (0xffffUL)
#define GPT12E_T5CON_T5I_Pos                                          (0UL)
#define GPT12E_T5CON_T5I_Msk                                          (0x7UL)
#define GPT12E_T5CON_T5M_Pos                                          (3UL)
#define GPT12E_T5CON_T5M_Msk                                          (0x18UL)
#define GPT12E_T5CON_T5R_Pos                                          (6UL)
#define GPT12E_T5CON_T5R_Msk                                          (0x40UL)
#define GPT12E_T5CON_T5UD_Pos                                         (7UL)
#define GPT12E_T5CON_T5UD_Msk                                         (0x80UL)
#define GPT12E_T5CON_T5UDE_Pos                                        (8UL)
#define GPT12E_T5CON_T5UDE_Msk                                        (0x100UL)
#define GPT12E_T5CON_T5RC_Pos                                         (9UL)
#define GPT12E_T5CON_T5RC_Msk                                         (0x200UL)
#define GPT12E_T5CON_CT3_Pos                                          (10UL)
#define GPT12E_T5CON_CT3_Msk                                          (0x400UL)
#define GPT12E_T5CON_CI_Pos                                           (12UL)
#define GPT12E_T5CON_CI_Msk                                           (0x3000UL)
#define GPT12E_T5CON_T5CLR_Pos                                        (14UL)
#define GPT12E_T5CON_T5CLR_Msk                                        (0x4000UL)
#define GPT12E_T5CON_T5SC_Pos                                         (15UL)
#define GPT12E_T5CON_T5SC_Msk                                         (0x8000UL)
#define GPT12E_T6_T6_Pos                                              (0UL)
#define GPT12E_T6_T6_Msk                                              (0xffffUL)
#define GPT12E_T6CON_T6I_Pos                                          (0UL)
#define GPT12E_T6CON_T6I_Msk                                          (0x7UL)
#define GPT12E_T6CON_T6M_Pos                                          (3UL)
#define GPT12E_T6CON_T6M_Msk                                          (0x38UL)
#define GPT12E_T6CON_T6R_Pos                                          (6UL)
#define GPT12E_T6CON_T6R_Msk                                          (0x40UL)
#define GPT12E_T6CON_T6UD_Pos                                         (7UL)
#define GPT12E_T6CON_T6UD_Msk                                         (0x80UL)
#define GPT12E_T6CON_T6UDE_Pos                                        (8UL)
#define GPT12E_T6CON_T6UDE_Msk                                        (0x100UL)
#define GPT12E_T6CON_T6OE_Pos                                         (9UL)
#define GPT12E_T6CON_T6OE_Msk                                         (0x200UL)
#define GPT12E_T6CON_T6OTL_Pos                                        (10UL)
#define GPT12E_T6CON_T6OTL_Msk                                        (0x400UL)
#define GPT12E_T6CON_BPS2_Pos                                         (11UL)
#define GPT12E_T6CON_BPS2_Msk                                         (0x1800UL)
#define GPT12E_T6CON_T6CLR_Pos                                        (14UL)
#define GPT12E_T6CON_T6CLR_Msk                                        (0x4000UL)
#define GPT12E_T6CON_T6SR_Pos                                         (15UL)
#define GPT12E_T6CON_T6SR_Msk                                         (0x8000UL)
#define TIMER2_RC2H_RC2_Pos                                           (0UL)
#define TIMER2_RC2H_RC2_Msk                                           (0xffUL)
#define TIMER2_RC2L_RC2_Pos                                           (0UL)
#define TIMER2_RC2L_RC2_Msk                                           (0xffUL)
#define TIMER2_T2CON_CP_RL2_Pos                                       (0UL)
#define TIMER2_T2CON_CP_RL2_Msk                                       (0x1UL)
#define TIMER2_T2CON_C_T2_Pos                                         (1UL)
#define TIMER2_T2CON_C_T2_Msk                                         (0x2UL)
#define TIMER2_T2CON_TR2_Pos                                          (2UL)
#define TIMER2_T2CON_TR2_Msk                                          (0x4UL)
#define TIMER2_T2CON_EXEN2_Pos                                        (3UL)
#define TIMER2_T2CON_EXEN2_Msk                                        (0x8UL)
#define TIMER2_T2CON_EXF2_Pos                                         (6UL)
#define TIMER2_T2CON_EXF2_Msk                                         (0x40UL)
#define TIMER2_T2CON_TF2_Pos                                          (7UL)
#define TIMER2_T2CON_TF2_Msk                                          (0x80UL)
#define TIMER2_T2CON1_EXF2EN_Pos                                      (0UL)
#define TIMER2_T2CON1_EXF2EN_Msk                                      (0x1UL)
#define TIMER2_T2CON1_TF2EN_Pos                                       (1UL)
#define TIMER2_T2CON1_TF2EN_Msk                                       (0x2UL)
#define TIMER2_T2H_T2H_Pos                                            (0UL)
#define TIMER2_T2H_T2H_Msk                                            (0xffUL)
#define TIMER2_T2ICLR_EXF2CLR_Pos                                     (6UL)
#define TIMER2_T2ICLR_EXF2CLR_Msk                                     (0x40UL)
#define TIMER2_T2ICLR_TF2CLR_Pos                                      (7UL)
#define TIMER2_T2ICLR_TF2CLR_Msk                                      (0x80UL)
#define TIMER2_T2L_T2L_Pos                                            (0UL)
#define TIMER2_T2L_T2L_Msk                                            (0xffUL)
#define TIMER2_T2MOD_DCEN_Pos                                         (0UL)
#define TIMER2_T2MOD_DCEN_Msk                                         (0x1UL)
#define TIMER2_T2MOD_T2PRE_Pos                                        (1UL)
#define TIMER2_T2MOD_T2PRE_Msk                                        (0xeUL)
#define TIMER2_T2MOD_PREN_Pos                                         (4UL)
#define TIMER2_T2MOD_PREN_Msk                                         (0x10UL)
#define TIMER2_T2MOD_EDGESEL_Pos                                      (5UL)
#define TIMER2_T2MOD_EDGESEL_Msk                                      (0x20UL)
#define TIMER2_T2MOD_T2RHEN_Pos                                       (6UL)
#define TIMER2_T2MOD_T2RHEN_Msk                                       (0x40UL)
#define TIMER2_T2MOD_T2REGS_Pos                                       (7UL)
#define TIMER2_T2MOD_T2REGS_Msk                                       (0x80UL)
#define TIMER21_RC2H_RC2_Pos                                          (0UL)
#define TIMER21_RC2H_RC2_Msk                                          (0xffUL)
#define TIMER21_RC2L_RC2_Pos                                          (0UL)
#define TIMER21_RC2L_RC2_Msk                                          (0xffUL)
#define TIMER21_T2CON_CP_RL2_Pos                                      (0UL)
#define TIMER21_T2CON_CP_RL2_Msk                                      (0x1UL)
#define TIMER21_T2CON_C_T2_Pos                                        (1UL)
#define TIMER21_T2CON_C_T2_Msk                                        (0x2UL)
#define TIMER21_T2CON_TR2_Pos                                         (2UL)
#define TIMER21_T2CON_TR2_Msk                                         (0x4UL)
#define TIMER21_T2CON_EXEN2_Pos                                       (3UL)
#define TIMER21_T2CON_EXEN2_Msk                                       (0x8UL)
#define TIMER21_T2CON_EXF2_Pos                                        (6UL)
#define TIMER21_T2CON_EXF2_Msk                                        (0x40UL)
#define TIMER21_T2CON_TF2_Pos                                         (7UL)
#define TIMER21_T2CON_TF2_Msk                                         (0x80UL)
#define TIMER21_T2CON1_EXF2EN_Pos                                     (0UL)
#define TIMER21_T2CON1_EXF2EN_Msk                                     (0x1UL)
#define TIMER21_T2CON1_TF2EN_Pos                                      (1UL)
#define TIMER21_T2CON1_TF2EN_Msk                                      (0x2UL)
#define TIMER21_T2H_T2H_Pos                                           (0UL)
#define TIMER21_T2H_T2H_Msk                                           (0xffUL)
#define TIMER21_T2ICLR_EXF2CLR_Pos                                    (6UL)
#define TIMER21_T2ICLR_EXF2CLR_Msk                                    (0x40UL)
#define TIMER21_T2ICLR_TF2CLR_Pos                                     (7UL)
#define TIMER21_T2ICLR_TF2CLR_Msk                                     (0x80UL)
#define TIMER21_T2L_T2L_Pos                                           (0UL)
#define TIMER21_T2L_T2L_Msk                                           (0xffUL)
#define TIMER21_T2MOD_DCEN_Pos                                        (0UL)
#define TIMER21_T2MOD_DCEN_Msk                                        (0x1UL)
#define TIMER21_T2MOD_T2PRE_Pos                                       (1UL)
#define TIMER21_T2MOD_T2PRE_Msk                                       (0xeUL)
#define TIMER21_T2MOD_PREN_Pos                                        (4UL)
#define TIMER21_T2MOD_PREN_Msk                                        (0x10UL)
#define TIMER21_T2MOD_EDGESEL_Pos                                     (5UL)
#define TIMER21_T2MOD_EDGESEL_Msk                                     (0x20UL)
#define TIMER21_T2MOD_T2RHEN_Pos                                      (6UL)
#define TIMER21_T2MOD_T2RHEN_Msk                                      (0x40UL)
#define TIMER21_T2MOD_T2REGS_Pos                                      (7UL)
#define TIMER21_T2MOD_T2REGS_Msk                                      (0x80UL)
#define TIMER3_CMP_HI_Pos                                             (8UL)
#define TIMER3_CMP_HI_Msk                                             (0xff00UL)
#define TIMER3_CMP_LO_Pos                                             (0UL)
#define TIMER3_CMP_LO_Msk                                             (0xffUL)
#define TIMER3_CNT_HI_Pos                                             (8UL)
#define TIMER3_CNT_HI_Msk                                             (0xff00UL)
#define TIMER3_CNT_LO_Pos                                             (0UL)
#define TIMER3_CNT_LO_Msk                                             (0xffUL)
#define TIMER3_CTRL_T3H_OVF_IE_Pos                                    (9UL)
#define TIMER3_CTRL_T3H_OVF_IE_Msk                                    (0x200UL)
#define TIMER3_CTRL_T3L_OVF_IE_Pos                                    (8UL)
#define TIMER3_CTRL_T3L_OVF_IE_Msk                                    (0x100UL)
#define TIMER3_CTRL_T3L_OVF_STS_Pos                                   (7UL)
#define TIMER3_CTRL_T3L_OVF_STS_Msk                                   (0x80UL)
#define TIMER3_CTRL_TR3L_Pos                                          (6UL)
#define TIMER3_CTRL_TR3L_Msk                                          (0x40UL)
#define TIMER3_CTRL_T3H_OVF_STS_Pos                                   (5UL)
#define TIMER3_CTRL_T3H_OVF_STS_Msk                                   (0x20UL)
#define TIMER3_CTRL_TR3H_Pos                                          (4UL)
#define TIMER3_CTRL_TR3H_Msk                                          (0x10UL)
#define TIMER3_CTRL_CNT_RDY_Pos                                       (3UL)
#define TIMER3_CTRL_CNT_RDY_Msk                                       (0x8UL)
#define TIMER3_CTRL_T3_RD_REQ_CONF_Pos                                (2UL)
#define TIMER3_CTRL_T3_RD_REQ_CONF_Msk                                (0x4UL)
#define TIMER3_CTRL_T3_RD_REQ_Pos                                     (1UL)
#define TIMER3_CTRL_T3_RD_REQ_Msk                                     (0x2UL)
#define TIMER3_CTRL_T3_PD_N_Pos                                       (0UL)
#define TIMER3_CTRL_T3_PD_N_Msk                                       (0x1UL)
#define TIMER3_ISRCLR_T3L_OVF_ICLR_Pos                                (7UL)
#define TIMER3_ISRCLR_T3L_OVF_ICLR_Msk                                (0x80UL)
#define TIMER3_ISRCLR_T3H_OVF_ICLR_Pos                                (5UL)
#define TIMER3_ISRCLR_T3H_OVF_ICLR_Msk                                (0x20UL)
#define TIMER3_MODE_CONF_T3_SUBM_Pos                                  (6UL)
#define TIMER3_MODE_CONF_T3_SUBM_Msk                                  (0xc0UL)
#define TIMER3_MODE_CONF_T3M_Pos                                      (0UL)
#define TIMER3_MODE_CONF_T3M_Msk                                      (0x3UL)
#define TIMER3_T3_TRIGG_CTRL_RETRIG_Pos                               (6UL)
#define TIMER3_T3_TRIGG_CTRL_RETRIG_Msk                               (0x40UL)
#define TIMER3_T3_TRIGG_CTRL_T3_RES_CONF_Pos                          (4UL)
#define TIMER3_T3_TRIGG_CTRL_T3_RES_CONF_Msk                          (0x30UL)
#define TIMER3_T3_TRIGG_CTRL_T3_TRIGG_INP_SEL_Pos                     (0UL)
#define TIMER3_T3_TRIGG_CTRL_T3_TRIGG_INP_SEL_Msk                     (0x7UL)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t MOD_REV    : 8;
      __IM  uint16_t MOD_TYPE   : 8;
    }bit;
  }ID;
  __IM  uint16_t  RESERVED;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t IST2IN     : 1;
      __IOM uint16_t IST2EUD    : 1;
      __IOM uint16_t IST3IN     : 2;
      __IOM uint16_t IST3EUD    : 2;
      __IOM uint16_t IST4IN     : 2;
      __IOM uint16_t IST4EUD    : 2;
      __IOM uint16_t IST5IN     : 1;
      __IOM uint16_t IST5EUD    : 1;
      __IOM uint16_t IST6IN     : 1;
      __IOM uint16_t IST6EUD    : 1;
      __IOM uint16_t ISCAPIN    : 2;
    }bit;
  }PISEL;
  __IM  uint16_t  RESERVED1;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T2I        : 3;
      __IOM uint16_t T2M        : 3;
      __IOM uint16_t T2R        : 1;
      __IOM uint16_t T2UD       : 1;
      __IOM uint16_t T2UDE      : 1;
      __IOM uint16_t T2RC       : 1;
      __IM  uint16_t            : 2;
      __IOM uint16_t T2IRDIS    : 1;
      __IOM uint16_t T2EDGE     : 1;
      __IOM uint16_t T2CHDIR    : 1;
      __IM  uint16_t T2RDIR     : 1;
    }bit;
  }T2CON;
  __IM  uint16_t  RESERVED2;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T3I        : 3;
      __IOM uint16_t T3M        : 3;
      __IOM uint16_t T3R        : 1;
      __IOM uint16_t T3UD       : 1;
      __IOM uint16_t T3UDE      : 1;
      __IOM uint16_t T3OE       : 1;
      __IOM uint16_t T3OTL      : 1;
      __IOM uint16_t BPS1       : 2;
      __IOM uint16_t T3EDGE     : 1;
      __IOM uint16_t T3CHDIR    : 1;
      __IM  uint16_t T3RDIR     : 1;
    }bit;
  }T3CON;
  __IM  uint16_t  RESERVED3;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T4I        : 3;
      __IOM uint16_t T4M        : 3;
      __IOM uint16_t T4R        : 1;
      __IOM uint16_t T4UD       : 1;
      __IOM uint16_t T4UDE      : 1;
      __IOM uint16_t T4RC       : 1;
      __IOM uint16_t CLRT2EN    : 1;
      __IOM uint16_t CLRT3EN    : 1;
      __IOM uint16_t T4IRDIS    : 1;
      __IOM uint16_t T4EDGE     : 1;
      __IOM uint16_t T4CHDIR    : 1;
      __IM  uint16_t T4RDIR     : 1;
    }bit;
  }T4CON;
  __IM  uint16_t  RESERVED4;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T5I        : 3;
      __IOM uint16_t T5M        : 2;
      __IM  uint16_t            : 1;
      __IOM uint16_t T5R        : 1;
      __IOM uint16_t T5UD       : 1;
      __IOM uint16_t T5UDE      : 1;
      __IOM uint16_t T5RC       : 1;
      __IOM uint16_t CT3        : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t CI         : 2;
      __IOM uint16_t T5CLR      : 1;
      __IOM uint16_t T5SC       : 1;
    }bit;
  }T5CON;
  __IM  uint16_t  RESERVED5;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T6I        : 3;
      __IOM uint16_t T6M        : 3;
      __IOM uint16_t T6R        : 1;
      __IOM uint16_t T6UD       : 1;
      __IOM uint16_t T6UDE      : 1;
      __IOM uint16_t T6OE       : 1;
      __IOM uint16_t T6OTL      : 1;
      __IOM uint16_t BPS2       : 2;
      __IM  uint16_t            : 1;
      __IOM uint16_t T6CLR      : 1;
      __IOM uint16_t T6SR       : 1;
    }bit;
  }T6CON;
  __IM  uint16_t  RESERVED6;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CAPREL     : 16;
    }bit;
  }CAPREL;
  __IM  uint16_t  RESERVED7;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T2         : 16;
    }bit;
  }T2;
  __IM  uint16_t  RESERVED8;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T3         : 16;
    }bit;
  }T3;
  __IM  uint16_t  RESERVED9;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T4         : 16;
    }bit;
  }T4;
  __IM  uint16_t  RESERVED10;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T5         : 16;
    }bit;
  }T5;
  __IM  uint16_t  RESERVED11;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T6         : 16;
    }bit;
  }T6;
}GPT12E_Type;

typedef struct{
  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t CP_RL2      : 1;
      __IOM uint8_t C_T2        : 1;
      __IOM uint8_t TR2         : 1;
      __IOM uint8_t EXEN2       : 1;
      __IM  uint8_t             : 2;
      __IM  uint8_t EXF2        : 1;
      __IM  uint8_t TF2         : 1;
    }bit;
  }T2CON;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t DCEN        : 1;
      __IOM uint8_t T2PRE       : 3;
      __IOM uint8_t PREN        : 1;
      __IOM uint8_t EDGESEL     : 1;
      __IOM uint8_t T2RHEN      : 1;
      __IOM uint8_t T2REGS      : 1;
    }bit;
  }T2MOD;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RC2         : 8;
    }bit;
  }RC2L;
  __IM  uint8_t   RESERVED2[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RC2         : 8;
    }bit;
  }RC2H;
  __IM  uint8_t   RESERVED3[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T2L         : 8;
    }bit;
  }T2L;
  __IM  uint8_t   RESERVED4[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T2H         : 8;
    }bit;
  }T2H;
  __IM  uint8_t   RESERVED5[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EXF2EN      : 1;
      __IOM uint8_t TF2EN       : 1;
    }bit;
  }T2CON1;
  __IM  uint8_t   RESERVED6[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 6;
      __OM  uint8_t EXF2CLR     : 1;
      __OM  uint8_t TF2CLR      : 1;
    }bit;
  }T2ICLR;
}TIMER2x_Type;

typedef struct{
  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t T3_TRIGG_INP_SEL : 3;
      __IM  uint32_t            : 1;
      __IOM uint32_t T3_RES_CONF : 2;
      __IOM uint32_t RETRIG     : 1;
    }bit;
  }T3_TRIGG_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LO         : 8;
      __IOM uint32_t HI         : 8;
    }bit;
  }CMP;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LO         : 8;
      __IOM uint32_t HI         : 8;
    }bit;
  }CNT;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t T3_PD_N    : 1;
      __IOM uint32_t T3_RD_REQ  : 1;
      __IOM uint32_t T3_RD_REQ_CONF : 1;
      __IOM uint32_t CNT_RDY    : 1;
      __IOM uint32_t TR3H       : 1;
      __IM  uint32_t T3H_OVF_STS : 1;
      __IOM uint32_t TR3L       : 1;
      __IM  uint32_t T3L_OVF_STS : 1;
      __IOM uint32_t T3L_OVF_IE : 1;
      __IOM uint32_t T3H_OVF_IE : 1;
    }bit;
  }CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t T3M        : 2;
      __IM  uint32_t            : 4;
      __IOM uint32_t T3_SUBM    : 2;
    }bit;
  }MODE_CONF;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 5;
      __OM  uint32_t T3H_OVF_ICLR : 1;
      __IM  uint32_t            : 1;
      __OM  uint32_t T3L_OVF_ICLR : 1;
    }bit;
  }ISRCLR;
}TIMER3_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern GPT12E_Type                                                      GPT12E;
extern TIMER2x_Type                                                     TIMER2;
extern TIMER2x_Type                                                     TIMER21;
extern TIMER3_Type                                                      TIMER3;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

