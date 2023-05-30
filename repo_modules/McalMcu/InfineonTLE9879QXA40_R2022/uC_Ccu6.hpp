#pragma once
/******************************************************************************/
/* File   : uC_Ccu6.hpp                                                       */
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
#define CCU6_CC60R_CCV_Pos                                    (0UL)
#define CCU6_CC60R_CCV_Msk                                    (0xffffUL)
#define CCU6_CC60SR_CCS_Pos                                   (0UL)
#define CCU6_CC60SR_CCS_Msk                                   (0xffffUL)
#define CCU6_CC61R_CCV_Pos                                    (0UL)
#define CCU6_CC61R_CCV_Msk                                    (0xffffUL)
#define CCU6_CC61SR_CCS_Pos                                   (0UL)
#define CCU6_CC61SR_CCS_Msk                                   (0xffffUL)
#define CCU6_CC62R_CCV_Pos                                    (0UL)
#define CCU6_CC62R_CCV_Msk                                    (0xffffUL)
#define CCU6_CC62SR_CCS_Pos                                   (0UL)
#define CCU6_CC62SR_CCS_Msk                                   (0xffffUL)
#define CCU6_CC63R_CCV_Pos                                    (0UL)
#define CCU6_CC63R_CCV_Msk                                    (0xffffUL)
#define CCU6_CC63SR_CCS_Pos                                   (0UL)
#define CCU6_CC63SR_CCS_Msk                                   (0xffffUL)
#define CCU6_CMPMODIF_MCC60S_Pos                              (0UL)
#define CCU6_CMPMODIF_MCC60S_Msk                              (0x1UL)
#define CCU6_CMPMODIF_MCC61S_Pos                              (1UL)
#define CCU6_CMPMODIF_MCC61S_Msk                              (0x2UL)
#define CCU6_CMPMODIF_MCC62S_Pos                              (2UL)
#define CCU6_CMPMODIF_MCC62S_Msk                              (0x4UL)
#define CCU6_CMPMODIF_MCC63S_Pos                              (6UL)
#define CCU6_CMPMODIF_MCC63S_Msk                              (0x40UL)
#define CCU6_CMPMODIF_MCC60R_Pos                              (8UL)
#define CCU6_CMPMODIF_MCC60R_Msk                              (0x100UL)
#define CCU6_CMPMODIF_MCC61R_Pos                              (9UL)
#define CCU6_CMPMODIF_MCC61R_Msk                              (0x200UL)
#define CCU6_CMPMODIF_MCC62R_Pos                              (10UL)
#define CCU6_CMPMODIF_MCC62R_Msk                              (0x400UL)
#define CCU6_CMPMODIF_MCC63R_Pos                              (14UL)
#define CCU6_CMPMODIF_MCC63R_Msk                              (0x4000UL)
#define CCU6_CMPSTAT_CC60ST_Pos                               (0UL)
#define CCU6_CMPSTAT_CC60ST_Msk                               (0x1UL)
#define CCU6_CMPSTAT_CC61ST_Pos                               (1UL)
#define CCU6_CMPSTAT_CC61ST_Msk                               (0x2UL)
#define CCU6_CMPSTAT_CC62ST_Pos                               (2UL)
#define CCU6_CMPSTAT_CC62ST_Msk                               (0x4UL)
#define CCU6_CMPSTAT_CC63ST_Pos                               (6UL)
#define CCU6_CMPSTAT_CC63ST_Msk                               (0x40UL)
#define CCU6_CMPSTAT_CCPOS0_Pos                               (3UL)
#define CCU6_CMPSTAT_CCPOS0_Msk                               (0x8UL)
#define CCU6_CMPSTAT_CCPOS1_Pos                               (4UL)
#define CCU6_CMPSTAT_CCPOS1_Msk                               (0x10UL)
#define CCU6_CMPSTAT_CCPOS2_Pos                               (5UL)
#define CCU6_CMPSTAT_CCPOS2_Msk                               (0x20UL)
#define CCU6_CMPSTAT_CC60PS_Pos                               (8UL)
#define CCU6_CMPSTAT_CC60PS_Msk                               (0x100UL)
#define CCU6_CMPSTAT_CC61PS_Pos                               (10UL)
#define CCU6_CMPSTAT_CC61PS_Msk                               (0x400UL)
#define CCU6_CMPSTAT_CC62PS_Pos                               (12UL)
#define CCU6_CMPSTAT_CC62PS_Msk                               (0x1000UL)
#define CCU6_CMPSTAT_COUT60PS_Pos                             (9UL)
#define CCU6_CMPSTAT_COUT60PS_Msk                             (0x200UL)
#define CCU6_CMPSTAT_COUT61PS_Pos                             (11UL)
#define CCU6_CMPSTAT_COUT61PS_Msk                             (0x800UL)
#define CCU6_CMPSTAT_COUT62PS_Pos                             (13UL)
#define CCU6_CMPSTAT_COUT62PS_Msk                             (0x2000UL)
#define CCU6_CMPSTAT_COUT63PS_Pos                             (14UL)
#define CCU6_CMPSTAT_COUT63PS_Msk                             (0x4000UL)
#define CCU6_CMPSTAT_T13IM_Pos                                (15UL)
#define CCU6_CMPSTAT_T13IM_Msk                                (0x8000UL)
#define CCU6_IEN_ENCC60R_Pos                                  (0UL)
#define CCU6_IEN_ENCC60R_Msk                                  (0x1UL)
#define CCU6_IEN_ENCC60F_Pos                                  (1UL)
#define CCU6_IEN_ENCC60F_Msk                                  (0x2UL)
#define CCU6_IEN_ENCC61R_Pos                                  (2UL)
#define CCU6_IEN_ENCC61R_Msk                                  (0x4UL)
#define CCU6_IEN_ENCC61F_Pos                                  (3UL)
#define CCU6_IEN_ENCC61F_Msk                                  (0x8UL)
#define CCU6_IEN_ENCC62R_Pos                                  (4UL)
#define CCU6_IEN_ENCC62R_Msk                                  (0x10UL)
#define CCU6_IEN_ENCC62F_Pos                                  (5UL)
#define CCU6_IEN_ENCC62F_Msk                                  (0x20UL)
#define CCU6_IEN_ENT12OM_Pos                                  (6UL)
#define CCU6_IEN_ENT12OM_Msk                                  (0x40UL)
#define CCU6_IEN_ENT12PM_Pos                                  (7UL)
#define CCU6_IEN_ENT12PM_Msk                                  (0x80UL)
#define CCU6_IEN_ENT13CM_Pos                                  (8UL)
#define CCU6_IEN_ENT13CM_Msk                                  (0x100UL)
#define CCU6_IEN_ENT13PM_Pos                                  (9UL)
#define CCU6_IEN_ENT13PM_Msk                                  (0x200UL)
#define CCU6_IEN_ENTRPF_Pos                                   (10UL)
#define CCU6_IEN_ENTRPF_Msk                                   (0x400UL)
#define CCU6_IEN_ENCHE_Pos                                    (12UL)
#define CCU6_IEN_ENCHE_Msk                                    (0x1000UL)
#define CCU6_IEN_ENWHE_Pos                                    (13UL)
#define CCU6_IEN_ENWHE_Msk                                    (0x2000UL)
#define CCU6_IEN_ENIDLE_Pos                                   (14UL)
#define CCU6_IEN_ENIDLE_Msk                                   (0x4000UL)
#define CCU6_IEN_ENSTR_Pos                                    (15UL)
#define CCU6_IEN_ENSTR_Msk                                    (0x8000UL)
#define CCU6_INP_INPCC60_Pos                                  (0UL)
#define CCU6_INP_INPCC60_Msk                                  (0x3UL)
#define CCU6_INP_INPCC61_Pos                                  (2UL)
#define CCU6_INP_INPCC61_Msk                                  (0xcUL)
#define CCU6_INP_INPCC62_Pos                                  (4UL)
#define CCU6_INP_INPCC62_Msk                                  (0x30UL)
#define CCU6_INP_INPCHE_Pos                                   (6UL)
#define CCU6_INP_INPCHE_Msk                                   (0xc0UL)
#define CCU6_INP_INPERR_Pos                                   (8UL)
#define CCU6_INP_INPERR_Msk                                   (0x300UL)
#define CCU6_INP_INPT12_Pos                                   (10UL)
#define CCU6_INP_INPT12_Msk                                   (0xc00UL)
#define CCU6_INP_INPT13_Pos                                   (12UL)
#define CCU6_INP_INPT13_Msk                                   (0x3000UL)
#define CCU6_IS_ICC60R_Pos                                    (0UL)
#define CCU6_IS_ICC60R_Msk                                    (0x1UL)
#define CCU6_IS_ICC61R_Pos                                    (2UL)
#define CCU6_IS_ICC61R_Msk                                    (0x4UL)
#define CCU6_IS_ICC62R_Pos                                    (4UL)
#define CCU6_IS_ICC62R_Msk                                    (0x10UL)
#define CCU6_IS_ICC60F_Pos                                    (1UL)
#define CCU6_IS_ICC60F_Msk                                    (0x2UL)
#define CCU6_IS_ICC61F_Pos                                    (3UL)
#define CCU6_IS_ICC61F_Msk                                    (0x8UL)
#define CCU6_IS_ICC62F_Pos                                    (5UL)
#define CCU6_IS_ICC62F_Msk                                    (0x20UL)
#define CCU6_IS_T12OM_Pos                                     (6UL)
#define CCU6_IS_T12OM_Msk                                     (0x40UL)
#define CCU6_IS_T12PM_Pos                                     (7UL)
#define CCU6_IS_T12PM_Msk                                     (0x80UL)
#define CCU6_IS_T13CM_Pos                                     (8UL)
#define CCU6_IS_T13CM_Msk                                     (0x100UL)
#define CCU6_IS_T13PM_Pos                                     (9UL)
#define CCU6_IS_T13PM_Msk                                     (0x200UL)
#define CCU6_IS_TRPF_Pos                                      (10UL)
#define CCU6_IS_TRPF_Msk                                      (0x400UL)
#define CCU6_IS_TRPS_Pos                                      (11UL)
#define CCU6_IS_TRPS_Msk                                      (0x800UL)
#define CCU6_IS_CHE_Pos                                       (12UL)
#define CCU6_IS_CHE_Msk                                       (0x1000UL)
#define CCU6_IS_WHE_Pos                                       (13UL)
#define CCU6_IS_WHE_Msk                                       (0x2000UL)
#define CCU6_IS_IDLE_Pos                                      (14UL)
#define CCU6_IS_IDLE_Msk                                      (0x4000UL)
#define CCU6_IS_STR_Pos                                       (15UL)
#define CCU6_IS_STR_Msk                                       (0x8000UL)
#define CCU6_ISR_RCC60R_Pos                                   (0UL)
#define CCU6_ISR_RCC60R_Msk                                   (0x1UL)
#define CCU6_ISR_RCC60F_Pos                                   (1UL)
#define CCU6_ISR_RCC60F_Msk                                   (0x2UL)
#define CCU6_ISR_RCC61R_Pos                                   (2UL)
#define CCU6_ISR_RCC61R_Msk                                   (0x4UL)
#define CCU6_ISR_RCC61F_Pos                                   (3UL)
#define CCU6_ISR_RCC61F_Msk                                   (0x8UL)
#define CCU6_ISR_RCC62R_Pos                                   (4UL)
#define CCU6_ISR_RCC62R_Msk                                   (0x10UL)
#define CCU6_ISR_RCC62F_Pos                                   (5UL)
#define CCU6_ISR_RCC62F_Msk                                   (0x20UL)
#define CCU6_ISR_RT12OM_Pos                                   (6UL)
#define CCU6_ISR_RT12OM_Msk                                   (0x40UL)
#define CCU6_ISR_RT12PM_Pos                                   (7UL)
#define CCU6_ISR_RT12PM_Msk                                   (0x80UL)
#define CCU6_ISR_RT13CM_Pos                                   (8UL)
#define CCU6_ISR_RT13CM_Msk                                   (0x100UL)
#define CCU6_ISR_RT13PM_Pos                                   (9UL)
#define CCU6_ISR_RT13PM_Msk                                   (0x200UL)
#define CCU6_ISR_RTRPF_Pos                                    (10UL)
#define CCU6_ISR_RTRPF_Msk                                    (0x400UL)
#define CCU6_ISR_RCHE_Pos                                     (12UL)
#define CCU6_ISR_RCHE_Msk                                     (0x1000UL)
#define CCU6_ISR_RWHE_Pos                                     (13UL)
#define CCU6_ISR_RWHE_Msk                                     (0x2000UL)
#define CCU6_ISR_RIDLE_Pos                                    (14UL)
#define CCU6_ISR_RIDLE_Msk                                    (0x4000UL)
#define CCU6_ISR_RSTR_Pos                                     (15UL)
#define CCU6_ISR_RSTR_Msk                                     (0x8000UL)
#define CCU6_ISS_SCC60R_Pos                                   (0UL)
#define CCU6_ISS_SCC60R_Msk                                   (0x1UL)
#define CCU6_ISS_SCC60F_Pos                                   (1UL)
#define CCU6_ISS_SCC60F_Msk                                   (0x2UL)
#define CCU6_ISS_SCC61R_Pos                                   (2UL)
#define CCU6_ISS_SCC61R_Msk                                   (0x4UL)
#define CCU6_ISS_SCC61F_Pos                                   (3UL)
#define CCU6_ISS_SCC61F_Msk                                   (0x8UL)
#define CCU6_ISS_SCC62R_Pos                                   (4UL)
#define CCU6_ISS_SCC62R_Msk                                   (0x10UL)
#define CCU6_ISS_SCC62F_Pos                                   (5UL)
#define CCU6_ISS_SCC62F_Msk                                   (0x20UL)
#define CCU6_ISS_ST12OM_Pos                                   (6UL)
#define CCU6_ISS_ST12OM_Msk                                   (0x40UL)
#define CCU6_ISS_ST12PM_Pos                                   (7UL)
#define CCU6_ISS_ST12PM_Msk                                   (0x80UL)
#define CCU6_ISS_ST13CM_Pos                                   (8UL)
#define CCU6_ISS_ST13CM_Msk                                   (0x100UL)
#define CCU6_ISS_ST13PM_Pos                                   (9UL)
#define CCU6_ISS_ST13PM_Msk                                   (0x200UL)
#define CCU6_ISS_STRPF_Pos                                    (10UL)
#define CCU6_ISS_STRPF_Msk                                    (0x400UL)
#define CCU6_ISS_SWHC_Pos                                     (11UL)
#define CCU6_ISS_SWHC_Msk                                     (0x800UL)
#define CCU6_ISS_SCHE_Pos                                     (12UL)
#define CCU6_ISS_SCHE_Msk                                     (0x1000UL)
#define CCU6_ISS_SWHE_Pos                                     (13UL)
#define CCU6_ISS_SWHE_Msk                                     (0x2000UL)
#define CCU6_ISS_SIDLE_Pos                                    (14UL)
#define CCU6_ISS_SIDLE_Msk                                    (0x4000UL)
#define CCU6_ISS_SSTR_Pos                                     (15UL)
#define CCU6_ISS_SSTR_Msk                                     (0x8000UL)
#define CCU6_MCMCTR_SWSEL_Pos                                 (0UL)
#define CCU6_MCMCTR_SWSEL_Msk                                 (0x7UL)
#define CCU6_MCMCTR_SWSYN_Pos                                 (4UL)
#define CCU6_MCMCTR_SWSYN_Msk                                 (0x30UL)
#define CCU6_MCMCTR_STE12U_Pos                                (8UL)
#define CCU6_MCMCTR_STE12U_Msk                                (0x100UL)
#define CCU6_MCMCTR_STE12D_Pos                                (9UL)
#define CCU6_MCMCTR_STE12D_Msk                                (0x200UL)
#define CCU6_MCMCTR_STE13U_Pos                                (10UL)
#define CCU6_MCMCTR_STE13U_Msk                                (0x400UL)
#define CCU6_MCMOUT_MCMP_Pos                                  (0UL)
#define CCU6_MCMOUT_MCMP_Msk                                  (0x3fUL)
#define CCU6_MCMOUT_R_Pos                                     (6UL)
#define CCU6_MCMOUT_R_Msk                                     (0x40UL)
#define CCU6_MCMOUT_EXPH_Pos                                  (8UL)
#define CCU6_MCMOUT_EXPH_Msk                                  (0x700UL)
#define CCU6_MCMOUT_CURH_Pos                                  (11UL)
#define CCU6_MCMOUT_CURH_Msk                                  (0x3800UL)
#define CCU6_MCMOUTS_MCMPS_Pos                                (0UL)
#define CCU6_MCMOUTS_MCMPS_Msk                                (0x3fUL)
#define CCU6_MCMOUTS_STRMCM_Pos                               (7UL)
#define CCU6_MCMOUTS_STRMCM_Msk                               (0x80UL)
#define CCU6_MCMOUTS_EXPHS_Pos                                (8UL)
#define CCU6_MCMOUTS_EXPHS_Msk                                (0x700UL)
#define CCU6_MCMOUTS_CURHS_Pos                                (11UL)
#define CCU6_MCMOUTS_CURHS_Msk                                (0x3800UL)
#define CCU6_MCMOUTS_STRHP_Pos                                (15UL)
#define CCU6_MCMOUTS_STRHP_Msk                                (0x8000UL)
#define CCU6_MODCTR_T12MODEN_Pos                              (0UL)
#define CCU6_MODCTR_T12MODEN_Msk                              (0x3fUL)
#define CCU6_MODCTR_MCMEN_Pos                                 (7UL)
#define CCU6_MODCTR_MCMEN_Msk                                 (0x80UL)
#define CCU6_MODCTR_T13MODEN_Pos                              (8UL)
#define CCU6_MODCTR_T13MODEN_Msk                              (0x3f00UL)
#define CCU6_MODCTR_ECT13O_Pos                                (15UL)
#define CCU6_MODCTR_ECT13O_Msk                                (0x8000UL)
#define CCU6_PISEL0_ISCC60_Pos                                (0UL)
#define CCU6_PISEL0_ISCC60_Msk                                (0x3UL)
#define CCU6_PISEL0_ISCC61_Pos                                (2UL)
#define CCU6_PISEL0_ISCC61_Msk                                (0xcUL)
#define CCU6_PISEL0_ISCC62_Pos                                (4UL)
#define CCU6_PISEL0_ISCC62_Msk                                (0x30UL)
#define CCU6_PISEL0_ISTRP_Pos                                 (6UL)
#define CCU6_PISEL0_ISTRP_Msk                                 (0xc0UL)
#define CCU6_PISEL0_ISPOS0_Pos                                (8UL)
#define CCU6_PISEL0_ISPOS0_Msk                                (0x300UL)
#define CCU6_PISEL0_ISPOS1_Pos                                (10UL)
#define CCU6_PISEL0_ISPOS1_Msk                                (0xc00UL)
#define CCU6_PISEL0_ISPOS2_Pos                                (12UL)
#define CCU6_PISEL0_ISPOS2_Msk                                (0x3000UL)
#define CCU6_PISEL0_IST12HR_Pos                               (14UL)
#define CCU6_PISEL0_IST12HR_Msk                               (0xc000UL)
#define CCU6_PISEL2_IST13HR_Pos                               (0UL)
#define CCU6_PISEL2_IST13HR_Msk                               (0x3UL)
#define CCU6_PISEL2_ISCNT12_Pos                               (2UL)
#define CCU6_PISEL2_ISCNT12_Msk                               (0xcUL)
#define CCU6_PISEL2_ISCNT13_Pos                               (4UL)
#define CCU6_PISEL2_ISCNT13_Msk                               (0x30UL)
#define CCU6_PISEL2_T12EXT_Pos                                (6UL)
#define CCU6_PISEL2_T12EXT_Msk                                (0x40UL)
#define CCU6_PISEL2_T13EXT_Pos                                (7UL)
#define CCU6_PISEL2_T13EXT_Msk                                (0x80UL)
#define CCU6_PSLR_PSL_Pos                                     (0UL)
#define CCU6_PSLR_PSL_Msk                                     (0x3fUL)
#define CCU6_PSLR_PSL63_Pos                                   (7UL)
#define CCU6_PSLR_PSL63_Msk                                   (0x80UL)
#define CCU6_T12_T12CV_Pos                                    (0UL)
#define CCU6_T12_T12CV_Msk                                    (0xffffUL)
#define CCU6_T12DTC_DTM_Pos                                   (0UL)
#define CCU6_T12DTC_DTM_Msk                                   (0xffUL)
#define CCU6_T12DTC_DTE0_Pos                                  (8UL)
#define CCU6_T12DTC_DTE0_Msk                                  (0x100UL)
#define CCU6_T12DTC_DTE1_Pos                                  (9UL)
#define CCU6_T12DTC_DTE1_Msk                                  (0x200UL)
#define CCU6_T12DTC_DTE2_Pos                                  (10UL)
#define CCU6_T12DTC_DTE2_Msk                                  (0x400UL)
#define CCU6_T12DTC_DTR0_Pos                                  (12UL)
#define CCU6_T12DTC_DTR0_Msk                                  (0x1000UL)
#define CCU6_T12DTC_DTR1_Pos                                  (13UL)
#define CCU6_T12DTC_DTR1_Msk                                  (0x2000UL)
#define CCU6_T12DTC_DTR2_Pos                                  (14UL)
#define CCU6_T12DTC_DTR2_Msk                                  (0x4000UL)
#define CCU6_T12MSEL_MSEL60_Pos                               (0UL)
#define CCU6_T12MSEL_MSEL60_Msk                               (0xfUL)
#define CCU6_T12MSEL_MSEL61_Pos                               (4UL)
#define CCU6_T12MSEL_MSEL61_Msk                               (0xf0UL)
#define CCU6_T12MSEL_MSEL62_Pos                               (8UL)
#define CCU6_T12MSEL_MSEL62_Msk                               (0xf00UL)
#define CCU6_T12MSEL_HSYNC_Pos                                (12UL)
#define CCU6_T12MSEL_HSYNC_Msk                                (0x7000UL)
#define CCU6_T12MSEL_DBYP_Pos                                 (15UL)
#define CCU6_T12MSEL_DBYP_Msk                                 (0x8000UL)
#define CCU6_T12PR_T12PV_Pos                                  (0UL)
#define CCU6_T12PR_T12PV_Msk                                  (0xffffUL)
#define CCU6_T13_T13CV_Pos                                    (0UL)
#define CCU6_T13_T13CV_Msk                                    (0xffffUL)
#define CCU6_T13PR_T13PV_Pos                                  (0UL)
#define CCU6_T13PR_T13PV_Msk                                  (0xffffUL)
#define CCU6_TCTR0_T12CLK_Pos                                 (0UL)
#define CCU6_TCTR0_T12CLK_Msk                                 (0x7UL)
#define CCU6_TCTR0_T12PRE_Pos                                 (3UL)
#define CCU6_TCTR0_T12PRE_Msk                                 (0x8UL)
#define CCU6_TCTR0_T12R_Pos                                   (4UL)
#define CCU6_TCTR0_T12R_Msk                                   (0x10UL)
#define CCU6_TCTR0_STE12_Pos                                  (5UL)
#define CCU6_TCTR0_STE12_Msk                                  (0x20UL)
#define CCU6_TCTR0_CDIR_Pos                                   (6UL)
#define CCU6_TCTR0_CDIR_Msk                                   (0x40UL)
#define CCU6_TCTR0_CTM_Pos                                    (7UL)
#define CCU6_TCTR0_CTM_Msk                                    (0x80UL)
#define CCU6_TCTR0_T13CLK_Pos                                 (8UL)
#define CCU6_TCTR0_T13CLK_Msk                                 (0x700UL)
#define CCU6_TCTR0_T13PRE_Pos                                 (11UL)
#define CCU6_TCTR0_T13PRE_Msk                                 (0x800UL)
#define CCU6_TCTR0_T13R_Pos                                   (12UL)
#define CCU6_TCTR0_T13R_Msk                                   (0x1000UL)
#define CCU6_TCTR0_STE13_Pos                                  (13UL)
#define CCU6_TCTR0_STE13_Msk                                  (0x2000UL)
#define CCU6_TCTR2_T12SSC_Pos                                 (0UL)
#define CCU6_TCTR2_T12SSC_Msk                                 (0x1UL)
#define CCU6_TCTR2_T13SSC_Pos                                 (1UL)
#define CCU6_TCTR2_T13SSC_Msk                                 (0x2UL)
#define CCU6_TCTR2_T13TEC_Pos                                 (2UL)
#define CCU6_TCTR2_T13TEC_Msk                                 (0x1cUL)
#define CCU6_TCTR2_T13TED_Pos                                 (5UL)
#define CCU6_TCTR2_T13TED_Msk                                 (0x60UL)
#define CCU6_TCTR2_T12RSEL_Pos                                (8UL)
#define CCU6_TCTR2_T12RSEL_Msk                                (0x300UL)
#define CCU6_TCTR2_T13RSEL_Pos                                (10UL)
#define CCU6_TCTR2_T13RSEL_Msk                                (0xc00UL)
#define CCU6_TCTR4_T12RR_Pos                                  (0UL)
#define CCU6_TCTR4_T12RR_Msk                                  (0x1UL)
#define CCU6_TCTR4_T12RS_Pos                                  (1UL)
#define CCU6_TCTR4_T12RS_Msk                                  (0x2UL)
#define CCU6_TCTR4_T12RES_Pos                                 (2UL)
#define CCU6_TCTR4_T12RES_Msk                                 (0x4UL)
#define CCU6_TCTR4_DTRES_Pos                                  (3UL)
#define CCU6_TCTR4_DTRES_Msk                                  (0x8UL)
#define CCU6_TCTR4_T12CNT_Pos                                 (5UL)
#define CCU6_TCTR4_T12CNT_Msk                                 (0x20UL)
#define CCU6_TCTR4_T12STR_Pos                                 (6UL)
#define CCU6_TCTR4_T12STR_Msk                                 (0x40UL)
#define CCU6_TCTR4_T12STD_Pos                                 (7UL)
#define CCU6_TCTR4_T12STD_Msk                                 (0x80UL)
#define CCU6_TCTR4_T13RR_Pos                                  (8UL)
#define CCU6_TCTR4_T13RR_Msk                                  (0x100UL)
#define CCU6_TCTR4_T13RS_Pos                                  (9UL)
#define CCU6_TCTR4_T13RS_Msk                                  (0x200UL)
#define CCU6_TCTR4_T13RES_Pos                                 (10UL)
#define CCU6_TCTR4_T13RES_Msk                                 (0x400UL)
#define CCU6_TCTR4_T13CNT_Pos                                 (13UL)
#define CCU6_TCTR4_T13CNT_Msk                                 (0x2000UL)
#define CCU6_TCTR4_T13STR_Pos                                 (14UL)
#define CCU6_TCTR4_T13STR_Msk                                 (0x4000UL)
#define CCU6_TCTR4_T13STD_Pos                                 (15UL)
#define CCU6_TCTR4_T13STD_Msk                                 (0x8000UL)
#define CCU6_TRPCTR_TRPM0_Pos                                 (0UL)
#define CCU6_TRPCTR_TRPM0_Msk                                 (0x1UL)
#define CCU6_TRPCTR_TRPM1_Pos                                 (1UL)
#define CCU6_TRPCTR_TRPM1_Msk                                 (0x2UL)
#define CCU6_TRPCTR_TRPM2_Pos                                 (2UL)
#define CCU6_TRPCTR_TRPM2_Msk                                 (0x4UL)
#define CCU6_TRPCTR_TRPEN_Pos                                 (8UL)
#define CCU6_TRPCTR_TRPEN_Msk                                 (0x3f00UL)
#define CCU6_TRPCTR_TRPEN13_Pos                               (14UL)
#define CCU6_TRPCTR_TRPEN13_Msk                               (0x4000UL)
#define CCU6_TRPCTR_TRPPEN_Pos                                (15UL)
#define CCU6_TRPCTR_TRPPEN_Msk                                (0x8000UL)

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
      __IM  uint16_t CCV        : 16;
    }bit;
  }CC63R;
  __IM  uint16_t  RESERVED;

  union{
    __IOM uint16_t reg;

    struct{
      __OM  uint16_t T12RR      : 1;
      __OM  uint16_t T12RS      : 1;
      __OM  uint16_t T12RES     : 1;
      __OM  uint16_t DTRES      : 1;
      __IM  uint16_t            : 1;
      __OM  uint16_t T12CNT     : 1;
      __OM  uint16_t T12STR     : 1;
      __OM  uint16_t T12STD     : 1;
      __OM  uint16_t T13RR      : 1;
      __OM  uint16_t T13RS      : 1;
      __OM  uint16_t T13RES     : 1;
      __IM  uint16_t            : 2;
      __OM  uint16_t T13CNT     : 1;
      __OM  uint16_t T13STR     : 1;
      __OM  uint16_t T13STD     : 1;
    }bit;
  }TCTR4;
  __IM  uint16_t  RESERVED1;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t MCMPS      : 6;
      __IM  uint16_t            : 1;
      __IOM uint16_t STRMCM     : 1;
      __IOM uint16_t EXPHS      : 3;
      __IOM uint16_t CURHS      : 3;
      __IM  uint16_t            : 1;
      __IOM uint16_t STRHP      : 1;
    }bit;
  }MCMOUTS;
  __IM  uint16_t  RESERVED2;

  union{
    __IOM uint16_t reg;

    struct{
      __OM  uint16_t RCC60R     : 1;
      __OM  uint16_t RCC60F     : 1;
      __OM  uint16_t RCC61R     : 1;
      __OM  uint16_t RCC61F     : 1;
      __OM  uint16_t RCC62R     : 1;
      __OM  uint16_t RCC62F     : 1;
      __OM  uint16_t RT12OM     : 1;
      __OM  uint16_t RT12PM     : 1;
      __OM  uint16_t RT13CM     : 1;
      __OM  uint16_t RT13PM     : 1;
      __OM  uint16_t RTRPF      : 1;
      __IM  uint16_t            : 1;
      __OM  uint16_t RCHE       : 1;
      __OM  uint16_t RWHE       : 1;
      __OM  uint16_t RIDLE      : 1;
      __OM  uint16_t RSTR       : 1;
    }bit;
  }ISR;
  __IM  uint16_t  RESERVED3;

  union{
    __IOM uint16_t reg;

    struct{
      __OM  uint16_t MCC60S     : 1;
      __OM  uint16_t MCC61S     : 1;
      __OM  uint16_t MCC62S     : 1;
      __IM  uint16_t            : 3;
      __OM  uint16_t MCC63S     : 1;
      __IM  uint16_t            : 1;
      __OM  uint16_t MCC60R     : 1;
      __OM  uint16_t MCC61R     : 1;
      __OM  uint16_t MCC62R     : 1;
      __IM  uint16_t            : 3;
      __OM  uint16_t MCC63R     : 1;
    }bit;
  }CMPMODIF;
  __IM  uint16_t  RESERVED4;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CCS        : 16;
    }bit;
  }CC60SR;
  __IM  uint16_t  RESERVED5;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CCS        : 16;
    }bit;
  }CC61SR;
  __IM  uint16_t  RESERVED6;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CCS        : 16;
    }bit;
  }CC62SR;
  __IM  uint16_t  RESERVED7;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t CCS        : 16;
    }bit;
  }CC63SR;
  __IM  uint16_t  RESERVED8;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12PV      : 16;
    }bit;
  }T12PR;
  __IM  uint16_t  RESERVED9;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T13PV      : 16;
    }bit;
  }T13PR;
  __IM  uint16_t  RESERVED10;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t DTM        : 8;
      __IOM uint16_t DTE0       : 1;
      __IOM uint16_t DTE1       : 1;
      __IOM uint16_t DTE2       : 1;
      __IM  uint16_t            : 1;
      __IM  uint16_t DTR0       : 1;
      __IM  uint16_t DTR1       : 1;
      __IM  uint16_t DTR2       : 1;
    }bit;
  }T12DTC;
  __IM  uint16_t  RESERVED11;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12CLK     : 3;
      __IOM uint16_t T12PRE     : 1;
      __IM  uint16_t T12R       : 1;
      __IM  uint16_t STE12      : 1;
      __IM  uint16_t CDIR       : 1;
      __IOM uint16_t CTM        : 1;
      __IOM uint16_t T13CLK     : 3;
      __IOM uint16_t T13PRE     : 1;
      __IM  uint16_t T13R       : 1;
      __IM  uint16_t STE13      : 1;
    }bit;
  }TCTR0;
  __IM  uint16_t  RESERVED12;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CCV        : 16;
    }bit;
  }CC60R;
  __IM  uint16_t  RESERVED13;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CCV        : 16;
    }bit;
  }CC61R;
  __IM  uint16_t  RESERVED14;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CCV        : 16;
    }bit;
  }CC62R;
  __IM  uint16_t  RESERVED15;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t MSEL60     : 4;
      __IOM uint16_t MSEL61     : 4;
      __IOM uint16_t MSEL62     : 4;
      __IOM uint16_t HSYNC      : 3;
      __IOM uint16_t DBYP       : 1;
    }bit;
  }T12MSEL;
  __IM  uint16_t  RESERVED16;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t ENCC60R    : 1;
      __IOM uint16_t ENCC60F    : 1;
      __IOM uint16_t ENCC61R    : 1;
      __IOM uint16_t ENCC61F    : 1;
      __IOM uint16_t ENCC62R    : 1;
      __IOM uint16_t ENCC62F    : 1;
      __IOM uint16_t ENT12OM    : 1;
      __IOM uint16_t ENT12PM    : 1;
      __IOM uint16_t ENT13CM    : 1;
      __IOM uint16_t ENT13PM    : 1;
      __IOM uint16_t ENTRPF     : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t ENCHE      : 1;
      __IOM uint16_t ENWHE      : 1;
      __IOM uint16_t ENIDLE     : 1;
      __IOM uint16_t ENSTR      : 1;
    }bit;
  }IEN;
  __IM  uint16_t  RESERVED17;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t INPCC60    : 2;
      __IOM uint16_t INPCC61    : 2;
      __IOM uint16_t INPCC62    : 2;
      __IOM uint16_t INPCHE     : 2;
      __IOM uint16_t INPERR     : 2;
      __IOM uint16_t INPT12     : 2;
      __IOM uint16_t INPT13     : 2;
    }bit;
  }INP;
  __IM  uint16_t  RESERVED18;

  union{
    __IOM uint16_t reg;

    struct{
      __OM  uint16_t SCC60R     : 1;
      __OM  uint16_t SCC60F     : 1;
      __OM  uint16_t SCC61R     : 1;
      __OM  uint16_t SCC61F     : 1;
      __OM  uint16_t SCC62R     : 1;
      __OM  uint16_t SCC62F     : 1;
      __OM  uint16_t ST12OM     : 1;
      __OM  uint16_t ST12PM     : 1;
      __OM  uint16_t ST13CM     : 1;
      __OM  uint16_t ST13PM     : 1;
      __OM  uint16_t STRPF      : 1;
      __OM  uint16_t SWHC       : 1;
      __OM  uint16_t SCHE       : 1;
      __OM  uint16_t SWHE       : 1;
      __OM  uint16_t SIDLE      : 1;
      __OM  uint16_t SSTR       : 1;
    }bit;
  }ISS;
  __IM  uint16_t  RESERVED19;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t PSL        : 6;
      __IM  uint16_t            : 1;
      __IOM uint16_t PSL63      : 1;
    }bit;
  }PSLR;
  __IM  uint16_t  RESERVED20;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t SWSEL      : 3;
      __IM  uint16_t            : 1;
      __IOM uint16_t SWSYN      : 2;
      __IM  uint16_t            : 2;
      __IOM uint16_t STE12U     : 1;
      __IOM uint16_t STE12D     : 1;
      __IOM uint16_t STE13U     : 1;
    }bit;
  }MCMCTR;
  __IM  uint16_t  RESERVED21;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12SSC     : 1;
      __IOM uint16_t T13SSC     : 1;
      __IOM uint16_t T13TEC     : 3;
      __IOM uint16_t T13TED     : 2;
      __IM  uint16_t            : 1;
      __IOM uint16_t T12RSEL    : 2;
      __IOM uint16_t T13RSEL    : 2;
    }bit;
  }TCTR2;
  __IM  uint16_t  RESERVED22;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12MODEN   : 6;
      __IM  uint16_t            : 1;
      __IOM uint16_t MCMEN      : 1;
      __IOM uint16_t T13MODEN   : 6;
      __IM  uint16_t            : 1;
      __IOM uint16_t ECT13O     : 1;
    }bit;
  }MODCTR;
  __IM  uint16_t  RESERVED23;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t TRPM0      : 1;
      __IOM uint16_t TRPM1      : 1;
      __IOM uint16_t TRPM2      : 1;
      __IM  uint16_t            : 5;
      __IOM uint16_t TRPEN      : 6;
      __IOM uint16_t TRPEN13    : 1;
      __IOM uint16_t TRPPEN     : 1;
    }bit;
  }TRPCTR;
  __IM  uint16_t  RESERVED24;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t MCMP       : 6;
      __IM  uint16_t R          : 1;
      __IM  uint16_t            : 1;
      __IM  uint16_t EXPH       : 3;
      __IM  uint16_t CURH       : 3;
    }bit;
  }MCMOUT;
  __IM  uint16_t  RESERVED25;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t ICC60R     : 1;
      __IM  uint16_t ICC60F     : 1;
      __IM  uint16_t ICC61R     : 1;
      __IM  uint16_t ICC61F     : 1;
      __IM  uint16_t ICC62R     : 1;
      __IM  uint16_t ICC62F     : 1;
      __IM  uint16_t T12OM      : 1;
      __IM  uint16_t T12PM      : 1;
      __IM  uint16_t T13CM      : 1;
      __IM  uint16_t T13PM      : 1;
      __IM  uint16_t TRPF       : 1;
      __IM  uint16_t TRPS       : 1;
      __IM  uint16_t CHE        : 1;
      __IM  uint16_t WHE        : 1;
      __IM  uint16_t IDLE       : 1;
      __IM  uint16_t STR        : 1;
    }bit;
  }IS;
  __IM  uint16_t  RESERVED26;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t ISCC60     : 2;
      __IOM uint16_t ISCC61     : 2;
      __IOM uint16_t ISCC62     : 2;
      __IOM uint16_t ISTRP      : 2;
      __IOM uint16_t ISPOS0     : 2;
      __IOM uint16_t ISPOS1     : 2;
      __IOM uint16_t ISPOS2     : 2;
      __IOM uint16_t IST12HR    : 2;
    }bit;
  }PISEL0;
  __IM  uint16_t  RESERVED27[3];

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t IST13HR    : 2;
      __IOM uint16_t ISCNT12    : 2;
      __IOM uint16_t ISCNT13    : 2;
      __IOM uint16_t T12EXT     : 1;
      __IOM uint16_t T13EXT     : 1;
    }bit;
  }PISEL2;
  __IM  uint16_t  RESERVED28;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T12CV      : 16;
    }bit;
  }T12;
  __IM  uint16_t  RESERVED29;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t T13CV      : 16;
    }bit;
  }T13;
  __IM  uint16_t  RESERVED30;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t CC60ST     : 1;
      __IM  uint16_t CC61ST     : 1;
      __IM  uint16_t CC62ST     : 1;
      __IM  uint16_t CCPOS0     : 1;
      __IM  uint16_t CCPOS1     : 1;
      __IM  uint16_t CCPOS2     : 1;
      __IM  uint16_t CC63ST     : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t CC60PS     : 1;
      __IOM uint16_t COUT60PS   : 1;
      __IOM uint16_t CC61PS     : 1;
      __IOM uint16_t COUT61PS   : 1;
      __IOM uint16_t CC62PS     : 1;
      __IOM uint16_t COUT62PS   : 1;
      __IOM uint16_t COUT63PS   : 1;
      __IOM uint16_t T13IM      : 1;
    }bit;
  }CMPSTAT;
}CCU6_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern CCU6_Type                                                           CCU6;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
