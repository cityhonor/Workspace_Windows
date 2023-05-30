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
#define CPU_AFSR_CP0_Pos                                          (0UL)
#define CPU_AFSR_CP0_Msk                                          (0x3UL)
#define CPU_AFSR_CP1_Pos                                          (2UL)
#define CPU_AFSR_CP1_Msk                                          (0xcUL)
#define CPU_AFSR_CP2_Pos                                          (4UL)
#define CPU_AFSR_CP2_Msk                                          (0x30UL)
#define CPU_AFSR_CP3_Pos                                          (6UL)
#define CPU_AFSR_CP3_Msk                                          (0xc0UL)
#define CPU_AFSR_CP4_Pos                                          (8UL)
#define CPU_AFSR_CP4_Msk                                          (0x300UL)
#define CPU_AFSR_CP5_Pos                                          (10UL)
#define CPU_AFSR_CP5_Msk                                          (0xc00UL)
#define CPU_AFSR_CP6_Pos                                          (12UL)
#define CPU_AFSR_CP6_Msk                                          (0x3000UL)
#define CPU_AFSR_CP7_Pos                                          (14UL)
#define CPU_AFSR_CP7_Msk                                          (0xc000UL)
#define CPU_AFSR_CP10_Pos                                         (20UL)
#define CPU_AFSR_CP10_Msk                                         (0x300000UL)
#define CPU_AFSR_CP11_Pos                                         (22UL)
#define CPU_AFSR_CP11_Msk                                         (0xc00000UL)
#define CPU_AIRCR_VECTKEY_Pos                                     (16UL)
#define CPU_AIRCR_VECTKEY_Msk                                     (0xffff0000UL)
#define CPU_AIRCR_ENDIANNESS_Pos                                  (15UL)
#define CPU_AIRCR_ENDIANNESS_Msk                                  (0x8000UL)
#define CPU_AIRCR_PRIGROUP_Pos                                    (8UL)
#define CPU_AIRCR_PRIGROUP_Msk                                    (0x700UL)
#define CPU_AIRCR_SYSRESETREQ_Pos                                 (2UL)
#define CPU_AIRCR_SYSRESETREQ_Msk                                 (0x4UL)
#define CPU_AIRCR_VECTCLRACTIVE_Pos                               (1UL)
#define CPU_AIRCR_VECTCLRACTIVE_Msk                               (0x2UL)
#define CPU_AIRCR_VECTRESET_Pos                                   (0UL)
#define CPU_AIRCR_VECTRESET_Msk                                   (0x1UL)
#define CPU_BFAR_ADDRESS_Pos                                      (0UL)
#define CPU_BFAR_ADDRESS_Msk                                      (0xffffffffUL)
#define CPU_CCR_STKALIGN_Pos                                      (9UL)
#define CPU_CCR_STKALIGN_Msk                                      (0x200UL)
#define CPU_CCR_BFHFMIGN_Pos                                      (8UL)
#define CPU_CCR_BFHFMIGN_Msk                                      (0x100UL)
#define CPU_CCR_DIV_0_TRP_Pos                                     (4UL)
#define CPU_CCR_DIV_0_TRP_Msk                                     (0x10UL)
#define CPU_CCR_UNALIGN_TRP_Pos                                   (3UL)
#define CPU_CCR_UNALIGN_TRP_Msk                                   (0x8UL)
#define CPU_CCR_USERSETMPEND_Pos                                  (1UL)
#define CPU_CCR_USERSETMPEND_Msk                                  (0x2UL)
#define CPU_CCR_NONBASETHRDENA_Pos                                (0UL)
#define CPU_CCR_NONBASETHRDENA_Msk                                (0x1UL)
#define CPU_CFSR_DIVBYZERO_Pos                                    (25UL)
#define CPU_CFSR_DIVBYZERO_Msk                                    (0x2000000UL)
#define CPU_CFSR_UNALIGNED_Pos                                    (24UL)
#define CPU_CFSR_UNALIGNED_Msk                                    (0x1000000UL)
#define CPU_CFSR_NOCP_Pos                                         (19UL)
#define CPU_CFSR_NOCP_Msk                                         (0x80000UL)
#define CPU_CFSR_INVPC_Pos                                        (18UL)
#define CPU_CFSR_INVPC_Msk                                        (0x40000UL)
#define CPU_CFSR_INVSTATE_Pos                                     (17UL)
#define CPU_CFSR_INVSTATE_Msk                                     (0x20000UL)
#define CPU_CFSR_UNDEFINSTR_Pos                                   (16UL)
#define CPU_CFSR_UNDEFINSTR_Msk                                   (0x10000UL)
#define CPU_CFSR_BFARVALID_Pos                                    (15UL)
#define CPU_CFSR_BFARVALID_Msk                                    (0x8000UL)
#define CPU_CFSR_STKERR_Pos                                       (12UL)
#define CPU_CFSR_STKERR_Msk                                       (0x1000UL)
#define CPU_CFSR_UNSTKERR_Pos                                     (11UL)
#define CPU_CFSR_UNSTKERR_Msk                                     (0x800UL)
#define CPU_CFSR_IMPRECISERR_Pos                                  (10UL)
#define CPU_CFSR_IMPRECISERR_Msk                                  (0x400UL)
#define CPU_CFSR_PRECISERR_Pos                                    (9UL)
#define CPU_CFSR_PRECISERR_Msk                                    (0x200UL)
#define CPU_CFSR_IBUSERR_Pos                                      (8UL)
#define CPU_CFSR_IBUSERR_Msk                                      (0x100UL)
#define CPU_CFSR_MMARVALID_Pos                                    (7UL)
#define CPU_CFSR_MMARVALID_Msk                                    (0x80UL)
#define CPU_CFSR_MSTERR_Pos                                       (4UL)
#define CPU_CFSR_MSTERR_Msk                                       (0x10UL)
#define CPU_CFSR_MUNSTKERR_Pos                                    (3UL)
#define CPU_CFSR_MUNSTKERR_Msk                                    (0x8UL)
#define CPU_CFSR_DACCVIOL_Pos                                     (1UL)
#define CPU_CFSR_DACCVIOL_Msk                                     (0x2UL)
#define CPU_CFSR_IACCVIOL_Pos                                     (0UL)
#define CPU_CFSR_IACCVIOL_Msk                                     (0x1UL)
#define CPU_CPUID_IMPLEMENTER_Pos                                 (24UL)
#define CPU_CPUID_IMPLEMENTER_Msk                                 (0xff000000UL)
#define CPU_CPUID_VARIANT_Pos                                     (20UL)
#define CPU_CPUID_VARIANT_Msk                                     (0xf00000UL)
#define CPU_CPUID_ARCHITECTURE_Pos                                (16UL)
#define CPU_CPUID_ARCHITECTURE_Msk                                (0xf0000UL)
#define CPU_CPUID_PARTNO_Pos                                      (4UL)
#define CPU_CPUID_PARTNO_Msk                                      (0xfff0UL)
#define CPU_CPUID_REVISION_Pos                                    (0UL)
#define CPU_CPUID_REVISION_Msk                                    (0xfUL)
#define CPU_DFSR_EXTERNAL_Pos                                     (4UL)
#define CPU_DFSR_EXTERNAL_Msk                                     (0x10UL)
#define CPU_DFSR_VCATCH_Pos                                       (3UL)
#define CPU_DFSR_VCATCH_Msk                                       (0x8UL)
#define CPU_DFSR_DWTTRAP_Pos                                      (2UL)
#define CPU_DFSR_DWTTRAP_Msk                                      (0x4UL)
#define CPU_DFSR_BKPT_Pos                                         (1UL)
#define CPU_DFSR_BKPT_Msk                                         (0x2UL)
#define CPU_DFSR_HALTED_Pos                                       (0UL)
#define CPU_DFSR_HALTED_Msk                                       (0x1UL)
#define CPU_HFSR_DEBUGEVT_Pos                                     (31UL)
#define CPU_HFSR_DEBUGEVT_Msk                                     (0x80000000UL)
#define CPU_HFSR_FORCED_Pos                                       (30UL)
#define CPU_HFSR_FORCED_Msk                                       (0x40000000UL)
#define CPU_HFSR_VECTTBL_Pos                                      (1UL)
#define CPU_HFSR_VECTTBL_Msk                                      (0x2UL)
#define CPU_ICSR_NMIPENDSET_Pos                                   (31UL)
#define CPU_ICSR_NMIPENDSET_Msk                                   (0x80000000UL)
#define CPU_ICSR_PENDSVSET_Pos                                    (28UL)
#define CPU_ICSR_PENDSVSET_Msk                                    (0x10000000UL)
#define CPU_ICSR_PENDSVCLR_Pos                                    (27UL)
#define CPU_ICSR_PENDSVCLR_Msk                                    (0x8000000UL)
#define CPU_ICSR_PENDSTSET_Pos                                    (26UL)
#define CPU_ICSR_PENDSTSET_Msk                                    (0x4000000UL)
#define CPU_ICSR_PENDSTCLR_Pos                                    (25UL)
#define CPU_ICSR_PENDSTCLR_Msk                                    (0x2000000UL)
#define CPU_ICSR_ISRPREEMPT_Pos                                   (23UL)
#define CPU_ICSR_ISRPREEMPT_Msk                                   (0x800000UL)
#define CPU_ICSR_ISRPENDING_Pos                                   (22UL)
#define CPU_ICSR_ISRPENDING_Msk                                   (0x400000UL)
#define CPU_ICSR_VECTPENDING_Pos                                  (12UL)
#define CPU_ICSR_VECTPENDING_Msk                                  (0x1ff000UL)
#define CPU_ICSR_RETTOBASE_Pos                                    (11UL)
#define CPU_ICSR_RETTOBASE_Msk                                    (0x800UL)
#define CPU_ICSR_VECTACTIVE_Pos                                   (0UL)
#define CPU_ICSR_VECTACTIVE_Msk                                   (0x1ffUL)
#define CPU_ICT_INTLINESNUM_Pos                                   (0UL)
#define CPU_ICT_INTLINESNUM_Msk                                   (0x1fUL)
#define CPU_MMFAR_ADDRESS_Pos                                     (0UL)
#define CPU_MMFAR_ADDRESS_Msk                                     (0xffffffffUL)
#define CPU_NVIC_IABR0_Int_DMA_Pos                                (15UL)
#define CPU_NVIC_IABR0_Int_DMA_Msk                                (0x8000UL)
#define CPU_NVIC_IABR0_Int_BDRV_Pos                               (14UL)
#define CPU_NVIC_IABR0_Int_BDRV_Msk                               (0x4000UL)
#define CPU_NVIC_IABR0_Int_EXINT1_Pos                             (13UL)
#define CPU_NVIC_IABR0_Int_EXINT1_Msk                             (0x2000UL)
#define CPU_NVIC_IABR0_Int_EXINT0_Pos                             (12UL)
#define CPU_NVIC_IABR0_Int_EXINT0_Msk                             (0x1000UL)
#define CPU_NVIC_IABR0_Int_UART2_Pos                              (11UL)
#define CPU_NVIC_IABR0_Int_UART2_Msk                              (0x800UL)
#define CPU_NVIC_IABR0_Int_UART1_Pos                              (10UL)
#define CPU_NVIC_IABR0_Int_UART1_Msk                              (0x400UL)
#define CPU_NVIC_IABR0_Int_SSC2_Pos                               (9UL)
#define CPU_NVIC_IABR0_Int_SSC2_Msk                               (0x200UL)
#define CPU_NVIC_IABR0_Int_SSC1_Pos                               (8UL)
#define CPU_NVIC_IABR0_Int_SSC1_Msk                               (0x100UL)
#define CPU_NVIC_IABR0_Int_CCU6SR3_Pos                            (7UL)
#define CPU_NVIC_IABR0_Int_CCU6SR3_Msk                            (0x80UL)
#define CPU_NVIC_IABR0_Int_CCU6SR2_Pos                            (6UL)
#define CPU_NVIC_IABR0_Int_CCU6SR2_Msk                            (0x40UL)
#define CPU_NVIC_IABR0_Int_CCU6SR1_Pos                            (5UL)
#define CPU_NVIC_IABR0_Int_CCU6SR1_Msk                            (0x20UL)
#define CPU_NVIC_IABR0_Int_CCU6SR0_Pos                            (4UL)
#define CPU_NVIC_IABR0_Int_CCU6SR0_Msk                            (0x10UL)
#define CPU_NVIC_IABR0_Int_ADC1_Pos                               (3UL)
#define CPU_NVIC_IABR0_Int_ADC1_Msk                               (0x8UL)
#define CPU_NVIC_IABR0_Int_ADC2_Pos                               (2UL)
#define CPU_NVIC_IABR0_Int_ADC2_Msk                               (0x4UL)
#define CPU_NVIC_IABR0_Int_GPT2_Pos                               (1UL)
#define CPU_NVIC_IABR0_Int_GPT2_Msk                               (0x2UL)
#define CPU_NVIC_IABR0_Int_GPT1_Pos                               (0UL)
#define CPU_NVIC_IABR0_Int_GPT1_Msk                               (0x1UL)
#define CPU_NVIC_ICER0_Int_DMA_Pos                                (15UL)
#define CPU_NVIC_ICER0_Int_DMA_Msk                                (0x8000UL)
#define CPU_NVIC_ICER0_Int_BDRV_Pos                               (14UL)
#define CPU_NVIC_ICER0_Int_BDRV_Msk                               (0x4000UL)
#define CPU_NVIC_ICER0_Int_EXINT1_Pos                             (13UL)
#define CPU_NVIC_ICER0_Int_EXINT1_Msk                             (0x2000UL)
#define CPU_NVIC_ICER0_Int_EXINT0_Pos                             (12UL)
#define CPU_NVIC_ICER0_Int_EXINT0_Msk                             (0x1000UL)
#define CPU_NVIC_ICER0_Int_UART2_Pos                              (11UL)
#define CPU_NVIC_ICER0_Int_UART2_Msk                              (0x800UL)
#define CPU_NVIC_ICER0_Int_UART1_Pos                              (10UL)
#define CPU_NVIC_ICER0_Int_UART1_Msk                              (0x400UL)
#define CPU_NVIC_ICER0_Int_SSC2_Pos                               (9UL)
#define CPU_NVIC_ICER0_Int_SSC2_Msk                               (0x200UL)
#define CPU_NVIC_ICER0_Int_SSC1_Pos                               (8UL)
#define CPU_NVIC_ICER0_Int_SSC1_Msk                               (0x100UL)
#define CPU_NVIC_ICER0_Int_CCU6SR3_Pos                            (7UL)
#define CPU_NVIC_ICER0_Int_CCU6SR3_Msk                            (0x80UL)
#define CPU_NVIC_ICER0_Int_CCU6SR2_Pos                            (6UL)
#define CPU_NVIC_ICER0_Int_CCU6SR2_Msk                            (0x40UL)
#define CPU_NVIC_ICER0_Int_CCU6SR1_Pos                            (5UL)
#define CPU_NVIC_ICER0_Int_CCU6SR1_Msk                            (0x20UL)
#define CPU_NVIC_ICER0_Int_CCU6SR0_Pos                            (4UL)
#define CPU_NVIC_ICER0_Int_CCU6SR0_Msk                            (0x10UL)
#define CPU_NVIC_ICER0_Int_ADC1_Pos                               (3UL)
#define CPU_NVIC_ICER0_Int_ADC1_Msk                               (0x8UL)
#define CPU_NVIC_ICER0_Int_ADC2_Pos                               (2UL)
#define CPU_NVIC_ICER0_Int_ADC2_Msk                               (0x4UL)
#define CPU_NVIC_ICER0_Int_GPT2_Pos                               (1UL)
#define CPU_NVIC_ICER0_Int_GPT2_Msk                               (0x2UL)
#define CPU_NVIC_ICER0_Int_GPT1_Pos                               (0UL)
#define CPU_NVIC_ICER0_Int_GPT1_Msk                               (0x1UL)
#define CPU_NVIC_ICPR0_Int_DMA_Pos                                (15UL)
#define CPU_NVIC_ICPR0_Int_DMA_Msk                                (0x8000UL)
#define CPU_NVIC_ICPR0_Int_BDRV_Pos                               (14UL)
#define CPU_NVIC_ICPR0_Int_BDRV_Msk                               (0x4000UL)
#define CPU_NVIC_ICPR0_Int_EXINT1_Pos                             (13UL)
#define CPU_NVIC_ICPR0_Int_EXINT1_Msk                             (0x2000UL)
#define CPU_NVIC_ICPR0_Int_EXINT0_Pos                             (12UL)
#define CPU_NVIC_ICPR0_Int_EXINT0_Msk                             (0x1000UL)
#define CPU_NVIC_ICPR0_Int_UART2_Pos                              (11UL)
#define CPU_NVIC_ICPR0_Int_UART2_Msk                              (0x800UL)
#define CPU_NVIC_ICPR0_Int_UART1_Pos                              (10UL)
#define CPU_NVIC_ICPR0_Int_UART1_Msk                              (0x400UL)
#define CPU_NVIC_ICPR0_Int_SSC2_Pos                               (9UL)
#define CPU_NVIC_ICPR0_Int_SSC2_Msk                               (0x200UL)
#define CPU_NVIC_ICPR0_Int_SSC1_Pos                               (8UL)
#define CPU_NVIC_ICPR0_Int_SSC1_Msk                               (0x100UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR3_Pos                            (7UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR3_Msk                            (0x80UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR2_Pos                            (6UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR2_Msk                            (0x40UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR1_Pos                            (5UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR1_Msk                            (0x20UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR0_Pos                            (4UL)
#define CPU_NVIC_ICPR0_Int_CCU6SR0_Msk                            (0x10UL)
#define CPU_NVIC_ICPR0_Int_ADC1_Pos                               (3UL)
#define CPU_NVIC_ICPR0_Int_ADC1_Msk                               (0x8UL)
#define CPU_NVIC_ICPR0_Int_ADC2_Pos                               (2UL)
#define CPU_NVIC_ICPR0_Int_ADC2_Msk                               (0x4UL)
#define CPU_NVIC_ICPR0_Int_GPT2_Pos                               (1UL)
#define CPU_NVIC_ICPR0_Int_GPT2_Msk                               (0x2UL)
#define CPU_NVIC_ICPR0_Int_GPT1_Pos                               (0UL)
#define CPU_NVIC_ICPR0_Int_GPT1_Msk                               (0x1UL)
#define CPU_NVIC_IPR0_PRI_ADC1_Pos                                (24UL)
#define CPU_NVIC_IPR0_PRI_ADC1_Msk                                (0xff000000UL)
#define CPU_NVIC_IPR0_PRI_ADC2_Pos                                (16UL)
#define CPU_NVIC_IPR0_PRI_ADC2_Msk                                (0xff0000UL)
#define CPU_NVIC_IPR0_PRI_GPT2_Pos                                (8UL)
#define CPU_NVIC_IPR0_PRI_GPT2_Msk                                (0xff00UL)
#define CPU_NVIC_IPR0_PRI_GPT1_Pos                                (0UL)
#define CPU_NVIC_IPR0_PRI_GPT1_Msk                                (0xffUL)
#define CPU_NVIC_IPR1_PRI_CCU6SR3_Pos                             (24UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR3_Msk                             (0xff000000UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR2_Pos                             (16UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR2_Msk                             (0xff0000UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR1_Pos                             (8UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR1_Msk                             (0xff00UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR0_Pos                             (0UL)
#define CPU_NVIC_IPR1_PRI_CCU6SR0_Msk                             (0xffUL)
#define CPU_NVIC_IPR2_PRI_UART2_Pos                               (24UL)
#define CPU_NVIC_IPR2_PRI_UART2_Msk                               (0xff000000UL)
#define CPU_NVIC_IPR2_PRI_UART1_Pos                               (16UL)
#define CPU_NVIC_IPR2_PRI_UART1_Msk                               (0xff0000UL)
#define CPU_NVIC_IPR2_PRI_SSC2_Pos                                (8UL)
#define CPU_NVIC_IPR2_PRI_SSC2_Msk                                (0xff00UL)
#define CPU_NVIC_IPR2_PRI_SSC1_Pos                                (0UL)
#define CPU_NVIC_IPR2_PRI_SSC1_Msk                                (0xffUL)
#define CPU_NVIC_IPR3_PRI_DMA_Pos                                 (24UL)
#define CPU_NVIC_IPR3_PRI_DMA_Msk                                 (0xff000000UL)
#define CPU_NVIC_IPR3_PRI_BDRV_Pos                                (16UL)
#define CPU_NVIC_IPR3_PRI_BDRV_Msk                                (0xff0000UL)
#define CPU_NVIC_IPR3_PRI_EXINT1_Pos                              (8UL)
#define CPU_NVIC_IPR3_PRI_EXINT1_Msk                              (0xff00UL)
#define CPU_NVIC_IPR3_PRI_EXINT0_Pos                              (0UL)
#define CPU_NVIC_IPR3_PRI_EXINT0_Msk                              (0xffUL)
#define CPU_NVIC_ISER0_Int_DMA_Pos                                (15UL)
#define CPU_NVIC_ISER0_Int_DMA_Msk                                (0x8000UL)
#define CPU_NVIC_ISER0_Int_BDRV_Pos                               (14UL)
#define CPU_NVIC_ISER0_Int_BDRV_Msk                               (0x4000UL)
#define CPU_NVIC_ISER0_Int_EXINT1_Pos                             (13UL)
#define CPU_NVIC_ISER0_Int_EXINT1_Msk                             (0x2000UL)
#define CPU_NVIC_ISER0_Int_EXINT0_Pos                             (12UL)
#define CPU_NVIC_ISER0_Int_EXINT0_Msk                             (0x1000UL)
#define CPU_NVIC_ISER0_Int_UART2_Pos                              (11UL)
#define CPU_NVIC_ISER0_Int_UART2_Msk                              (0x800UL)
#define CPU_NVIC_ISER0_Int_UART1_Pos                              (10UL)
#define CPU_NVIC_ISER0_Int_UART1_Msk                              (0x400UL)
#define CPU_NVIC_ISER0_Int_SSC2_Pos                               (9UL)
#define CPU_NVIC_ISER0_Int_SSC2_Msk                               (0x200UL)
#define CPU_NVIC_ISER0_Int_SSC1_Pos                               (8UL)
#define CPU_NVIC_ISER0_Int_SSC1_Msk                               (0x100UL)
#define CPU_NVIC_ISER0_Int_CCU6SR3_Pos                            (7UL)
#define CPU_NVIC_ISER0_Int_CCU6SR3_Msk                            (0x80UL)
#define CPU_NVIC_ISER0_Int_CCU6SR2_Pos                            (6UL)
#define CPU_NVIC_ISER0_Int_CCU6SR2_Msk                            (0x40UL)
#define CPU_NVIC_ISER0_Int_CCU6SR1_Pos                            (5UL)
#define CPU_NVIC_ISER0_Int_CCU6SR1_Msk                            (0x20UL)
#define CPU_NVIC_ISER0_Int_CCU6SR0_Pos                            (4UL)
#define CPU_NVIC_ISER0_Int_CCU6SR0_Msk                            (0x10UL)
#define CPU_NVIC_ISER0_Int_ADC1_Pos                               (3UL)
#define CPU_NVIC_ISER0_Int_ADC1_Msk                               (0x8UL)
#define CPU_NVIC_ISER0_Int_ADC2_Pos                               (2UL)
#define CPU_NVIC_ISER0_Int_ADC2_Msk                               (0x4UL)
#define CPU_NVIC_ISER0_Int_GPT2_Pos                               (1UL)
#define CPU_NVIC_ISER0_Int_GPT2_Msk                               (0x2UL)
#define CPU_NVIC_ISER0_Int_GPT1_Pos                               (0UL)
#define CPU_NVIC_ISER0_Int_GPT1_Msk                               (0x1UL)
#define CPU_NVIC_ISPR0_Int_DMA_Pos                                (15UL)
#define CPU_NVIC_ISPR0_Int_DMA_Msk                                (0x8000UL)
#define CPU_NVIC_ISPR0_Int_BDRV_Pos                               (14UL)
#define CPU_NVIC_ISPR0_Int_BDRV_Msk                               (0x4000UL)
#define CPU_NVIC_ISPR0_Int_EXINT1_Pos                             (13UL)
#define CPU_NVIC_ISPR0_Int_EXINT1_Msk                             (0x2000UL)
#define CPU_NVIC_ISPR0_Int_EXINT0_Pos                             (12UL)
#define CPU_NVIC_ISPR0_Int_EXINT0_Msk                             (0x1000UL)
#define CPU_NVIC_ISPR0_Int_UART2_Pos                              (11UL)
#define CPU_NVIC_ISPR0_Int_UART2_Msk                              (0x800UL)
#define CPU_NVIC_ISPR0_Int_UART1_Pos                              (10UL)
#define CPU_NVIC_ISPR0_Int_UART1_Msk                              (0x400UL)
#define CPU_NVIC_ISPR0_Int_SSC2_Pos                               (9UL)
#define CPU_NVIC_ISPR0_Int_SSC2_Msk                               (0x200UL)
#define CPU_NVIC_ISPR0_Int_SSC1_Pos                               (8UL)
#define CPU_NVIC_ISPR0_Int_SSC1_Msk                               (0x100UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR3_Pos                            (7UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR3_Msk                            (0x80UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR2_Pos                            (6UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR2_Msk                            (0x40UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR1_Pos                            (5UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR1_Msk                            (0x20UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR0_Pos                            (4UL)
#define CPU_NVIC_ISPR0_Int_CCU6SR0_Msk                            (0x10UL)
#define CPU_NVIC_ISPR0_Int_ADC1_Pos                               (3UL)
#define CPU_NVIC_ISPR0_Int_ADC1_Msk                               (0x8UL)
#define CPU_NVIC_ISPR0_Int_ADC2_Pos                               (2UL)
#define CPU_NVIC_ISPR0_Int_ADC2_Msk                               (0x4UL)
#define CPU_NVIC_ISPR0_Int_GPT2_Pos                               (1UL)
#define CPU_NVIC_ISPR0_Int_GPT2_Msk                               (0x2UL)
#define CPU_NVIC_ISPR0_Int_GPT1_Pos                               (0UL)
#define CPU_NVIC_ISPR0_Int_GPT1_Msk                               (0x1UL)
#define CPU_SCR_SEVONPEND_Pos                                     (4UL)
#define CPU_SCR_SEVONPEND_Msk                                     (0x10UL)
#define CPU_SCR_SLEEPDEEP_Pos                                     (2UL)
#define CPU_SCR_SLEEPDEEP_Msk                                     (0x4UL)
#define CPU_SCR_SLEEPONEXIT_Pos                                   (1UL)
#define CPU_SCR_SLEEPONEXIT_Msk                                   (0x2UL)
#define CPU_SHCSR_USGFAULTENA_Pos                                 (18UL)
#define CPU_SHCSR_USGFAULTENA_Msk                                 (0x40000UL)
#define CPU_SHCSR_BUSFAULTENA_Pos                                 (17UL)
#define CPU_SHCSR_BUSFAULTENA_Msk                                 (0x20000UL)
#define CPU_SHCSR_MEMFAULTENA_Pos                                 (16UL)
#define CPU_SHCSR_MEMFAULTENA_Msk                                 (0x10000UL)
#define CPU_SHCSR_SVCALLPENDED_Pos                                (15UL)
#define CPU_SHCSR_SVCALLPENDED_Msk                                (0x8000UL)
#define CPU_SHCSR_BUSFAULTPENDED_Pos                              (14UL)
#define CPU_SHCSR_BUSFAULTPENDED_Msk                              (0x4000UL)
#define CPU_SHCSR_MEMFAULTPENDED_Pos                              (13UL)
#define CPU_SHCSR_MEMFAULTPENDED_Msk                              (0x2000UL)
#define CPU_SHCSR_USGFAULTPENDED_Pos                              (12UL)
#define CPU_SHCSR_USGFAULTPENDED_Msk                              (0x1000UL)
#define CPU_SHCSR_SYSTICKACT_Pos                                  (11UL)
#define CPU_SHCSR_SYSTICKACT_Msk                                  (0x800UL)
#define CPU_SHCSR_PENDSVACT_Pos                                   (10UL)
#define CPU_SHCSR_PENDSVACT_Msk                                   (0x400UL)
#define CPU_SHCSR_MONITORACT_Pos                                  (8UL)
#define CPU_SHCSR_MONITORACT_Msk                                  (0x100UL)
#define CPU_SHCSR_SVCALLACT_Pos                                   (7UL)
#define CPU_SHCSR_SVCALLACT_Msk                                   (0x80UL)
#define CPU_SHCSR_USGFAULTACT_Pos                                 (3UL)
#define CPU_SHCSR_USGFAULTACT_Msk                                 (0x8UL)
#define CPU_SHCSR_BUSFAULTACT_Pos                                 (1UL)
#define CPU_SHCSR_BUSFAULTACT_Msk                                 (0x2UL)
#define CPU_SHCSR_MEMFAULTACT_Pos                                 (0UL)
#define CPU_SHCSR_MEMFAULTACT_Msk                                 (0x1UL)
#define CPU_SHPR1_PRI_7_Pos                                       (24UL)
#define CPU_SHPR1_PRI_7_Msk                                       (0xff000000UL)
#define CPU_SHPR1_PRI_6_Pos                                       (16UL)
#define CPU_SHPR1_PRI_6_Msk                                       (0xff0000UL)
#define CPU_SHPR1_PRI_5_Pos                                       (8UL)
#define CPU_SHPR1_PRI_5_Msk                                       (0xff00UL)
#define CPU_SHPR1_PRI_4_Pos                                       (0UL)
#define CPU_SHPR1_PRI_4_Msk                                       (0xffUL)
#define CPU_SHPR2_PRI_11_Pos                                      (24UL)
#define CPU_SHPR2_PRI_11_Msk                                      (0xff000000UL)
#define CPU_SHPR2_PRI_10_Pos                                      (16UL)
#define CPU_SHPR2_PRI_10_Msk                                      (0xff0000UL)
#define CPU_SHPR2_PRI_9_Pos                                       (8UL)
#define CPU_SHPR2_PRI_9_Msk                                       (0xff00UL)
#define CPU_SHPR2_PRI_8_Pos                                       (0UL)
#define CPU_SHPR2_PRI_8_Msk                                       (0xffUL)
#define CPU_SHPR3_PRI_15_Pos                                      (24UL)
#define CPU_SHPR3_PRI_15_Msk                                      (0xff000000UL)
#define CPU_SHPR3_PRI_14_Pos                                      (16UL)
#define CPU_SHPR3_PRI_14_Msk                                      (0xff0000UL)
#define CPU_SHPR3_PRI_13_Pos                                      (8UL)
#define CPU_SHPR3_PRI_13_Msk                                      (0xff00UL)
#define CPU_SHPR3_PRI_12_Pos                                      (0UL)
#define CPU_SHPR3_PRI_12_Msk                                      (0xffUL)
#define CPU_SYSTICK_CAL_NOREF_Pos                                 (31UL)
#define CPU_SYSTICK_CAL_NOREF_Msk                                 (0x80000000UL)
#define CPU_SYSTICK_CAL_SKEW_Pos                                  (30UL)
#define CPU_SYSTICK_CAL_SKEW_Msk                                  (0x40000000UL)
#define CPU_SYSTICK_CAL_TENMS_Pos                                 (0UL)
#define CPU_SYSTICK_CAL_TENMS_Msk                                 (0xffffffUL)
#define CPU_SYSTICK_CS_COUNTFLAG_Pos                              (16UL)
#define CPU_SYSTICK_CS_COUNTFLAG_Msk                              (0x10000UL)
#define CPU_SYSTICK_CS_CLKSOURCE_Pos                              (2UL)
#define CPU_SYSTICK_CS_CLKSOURCE_Msk                              (0x4UL)
#define CPU_SYSTICK_CS_TICKINT_Pos                                (1UL)
#define CPU_SYSTICK_CS_TICKINT_Msk                                (0x2UL)
#define CPU_SYSTICK_CS_ENABLE_Pos                                 (0UL)
#define CPU_SYSTICK_CS_ENABLE_Msk                                 (0x1UL)
#define CPU_SYSTICK_CUR_CURRENT_Pos                               (0UL)
#define CPU_SYSTICK_CUR_CURRENT_Msk                               (0xffffffUL)
#define CPU_SYSTICK_RL_RELOAD_Pos                                 (0UL)
#define CPU_SYSTICK_RL_RELOAD_Msk                                 (0xffffffUL)
#define CPU_VTOR_TBLOFF_Pos                                       (7UL)
#define CPU_VTOR_TBLOFF_Msk                                       (0xffffff80UL)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
  __IM  uint32_t  RESERVED;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t INTLINESNUM : 5;
    }bit;
  }ICT;
  __IM  uint32_t  RESERVED1[2];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ENABLE     : 1;
      __IOM uint32_t TICKINT    : 1;
      __IOM uint32_t CLKSOURCE  : 1;
      __IM  uint32_t            : 13;
      __IOM uint32_t COUNTFLAG  : 1;
    }bit;
  }SYSTICK_CS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t RELOAD     : 24;
    }bit;
  }SYSTICK_RL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CURRENT    : 24;
    }bit;
  }SYSTICK_CUR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t TENMS      : 24;
      __IM  uint32_t            : 6;
      __IM  uint32_t SKEW       : 1;
      __IM  uint32_t NOREF      : 1;
    }bit;
  }SYSTICK_CAL;
  __IM  uint32_t  RESERVED2[56];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Int_GPT1   : 1;
      __IOM uint32_t Int_GPT2   : 1;
      __IOM uint32_t Int_ADC2   : 1;
      __IOM uint32_t Int_ADC1   : 1;
      __IOM uint32_t Int_CCU6SR0 : 1;
      __IOM uint32_t Int_CCU6SR1 : 1;
      __IOM uint32_t Int_CCU6SR2 : 1;
      __IOM uint32_t Int_CCU6SR3 : 1;
      __IOM uint32_t Int_SSC1   : 1;
      __IOM uint32_t Int_SSC2   : 1;
      __IOM uint32_t Int_UART1  : 1;
      __IOM uint32_t Int_UART2  : 1;
      __IOM uint32_t Int_EXINT0 : 1;
      __IOM uint32_t Int_EXINT1 : 1;
      __IOM uint32_t Int_BDRV   : 1;
      __IOM uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_ISER0;
  __IM  uint32_t  RESERVED3[31];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Int_GPT1   : 1;
      __IOM uint32_t Int_GPT2   : 1;
      __IOM uint32_t Int_ADC2   : 1;
      __IOM uint32_t Int_ADC1   : 1;
      __IOM uint32_t Int_CCU6SR0 : 1;
      __IOM uint32_t Int_CCU6SR1 : 1;
      __IOM uint32_t Int_CCU6SR2 : 1;
      __IOM uint32_t Int_CCU6SR3 : 1;
      __IOM uint32_t Int_SSC1   : 1;
      __IOM uint32_t Int_SSC2   : 1;
      __IOM uint32_t Int_UART1  : 1;
      __IOM uint32_t Int_UART2  : 1;
      __IOM uint32_t Int_EXINT0 : 1;
      __IOM uint32_t Int_EXINT1 : 1;
      __IOM uint32_t Int_BDRV   : 1;
      __IOM uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_ICER0;
  __IM  uint32_t  RESERVED4[31];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Int_GPT1   : 1;
      __IOM uint32_t Int_GPT2   : 1;
      __IOM uint32_t Int_ADC2   : 1;
      __IOM uint32_t Int_ADC1   : 1;
      __IOM uint32_t Int_CCU6SR0 : 1;
      __IOM uint32_t Int_CCU6SR1 : 1;
      __IOM uint32_t Int_CCU6SR2 : 1;
      __IOM uint32_t Int_CCU6SR3 : 1;
      __IOM uint32_t Int_SSC1   : 1;
      __IOM uint32_t Int_SSC2   : 1;
      __IOM uint32_t Int_UART1  : 1;
      __IOM uint32_t Int_UART2  : 1;
      __IOM uint32_t Int_EXINT0 : 1;
      __IOM uint32_t Int_EXINT1 : 1;
      __IOM uint32_t Int_BDRV   : 1;
      __IOM uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_ISPR0;
  __IM  uint32_t  RESERVED5[31];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t Int_GPT1   : 1;
      __IOM uint32_t Int_GPT2   : 1;
      __IOM uint32_t Int_ADC2   : 1;
      __IOM uint32_t Int_ADC1   : 1;
      __IOM uint32_t Int_CCU6SR0 : 1;
      __IOM uint32_t Int_CCU6SR1 : 1;
      __IOM uint32_t Int_CCU6SR2 : 1;
      __IOM uint32_t Int_CCU6SR3 : 1;
      __IOM uint32_t Int_SSC1   : 1;
      __IOM uint32_t Int_SSC2   : 1;
      __IOM uint32_t Int_UART1  : 1;
      __IOM uint32_t Int_UART2  : 1;
      __IOM uint32_t Int_EXINT0 : 1;
      __IOM uint32_t Int_EXINT1 : 1;
      __IOM uint32_t Int_BDRV   : 1;
      __IOM uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_ICPR0;
  __IM  uint32_t  RESERVED6[31];

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t Int_GPT1   : 1;
      __IM  uint32_t Int_GPT2   : 1;
      __IM  uint32_t Int_ADC2   : 1;
      __IM  uint32_t Int_ADC1   : 1;
      __IM  uint32_t Int_CCU6SR0 : 1;
      __IM  uint32_t Int_CCU6SR1 : 1;
      __IM  uint32_t Int_CCU6SR2 : 1;
      __IM  uint32_t Int_CCU6SR3 : 1;
      __IM  uint32_t Int_SSC1   : 1;
      __IM  uint32_t Int_SSC2   : 1;
      __IM  uint32_t Int_UART1  : 1;
      __IM  uint32_t Int_UART2  : 1;
      __IM  uint32_t Int_EXINT0 : 1;
      __IM  uint32_t Int_EXINT1 : 1;
      __IM  uint32_t Int_BDRV   : 1;
      __IM  uint32_t Int_DMA    : 1;
    }bit;
  }NVIC_IABR0;
  __IM  uint32_t  RESERVED7[63];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_GPT1   : 8;
      __IOM uint32_t PRI_GPT2   : 8;
      __IOM uint32_t PRI_ADC2   : 8;
      __IOM uint32_t PRI_ADC1   : 8;
    }bit;
  }NVIC_IPR0;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_CCU6SR0 : 8;
      __IOM uint32_t PRI_CCU6SR1 : 8;
      __IOM uint32_t PRI_CCU6SR2 : 8;
      __IOM uint32_t PRI_CCU6SR3 : 8;
    }bit;
  }NVIC_IPR1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_SSC1   : 8;
      __IOM uint32_t PRI_SSC2   : 8;
      __IOM uint32_t PRI_UART1  : 8;
      __IOM uint32_t PRI_UART2  : 8;
    }bit;
  }NVIC_IPR2;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_EXINT0 : 8;
      __IOM uint32_t PRI_EXINT1 : 8;
      __IOM uint32_t PRI_BDRV   : 8;
      __IOM uint32_t PRI_DMA    : 8;
    }bit;
  }NVIC_IPR3;
  __IM  uint32_t  RESERVED8[572];

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t REVISION   : 4;
      __IM  uint32_t PARTNO     : 12;
      __IM  uint32_t ARCHITECTURE : 4;
      __IM  uint32_t VARIANT    : 4;
      __IM  uint32_t IMPLEMENTER : 8;
    }bit;
  }CPUID;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t VECTACTIVE : 9;
      __IM  uint32_t            : 2;
      __IM  uint32_t RETTOBASE  : 1;
      __IM  uint32_t VECTPENDING : 9;
      __IM  uint32_t            : 1;
      __IM  uint32_t ISRPENDING : 1;
      __IM  uint32_t ISRPREEMPT : 1;
      __IM  uint32_t            : 1;
      __OM  uint32_t PENDSTCLR  : 1;
      __IOM uint32_t PENDSTSET  : 1;
      __OM  uint32_t PENDSVCLR  : 1;
      __IOM uint32_t PENDSVSET  : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t NMIPENDSET : 1;
    }bit;
  }ICSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 7;
      __IOM uint32_t TBLOFF     : 25;
    }bit;
  }VTOR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t VECTRESET  : 1;
      __IOM uint32_t VECTCLRACTIVE : 1;
      __IOM uint32_t SYSRESETREQ : 1;
      __IM  uint32_t            : 5;
      __IOM uint32_t PRIGROUP   : 3;
      __IM  uint32_t            : 4;
      __IM  uint32_t ENDIANNESS : 1;
      __IOM uint32_t VECTKEY    : 16;
    }bit;
  }AIRCR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IOM uint32_t SLEEPONEXIT : 1;
      __IOM uint32_t SLEEPDEEP  : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t SEVONPEND  : 1;
    }bit;
  }SCR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t NONBASETHRDENA : 1;
      __IOM uint32_t USERSETMPEND : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t UNALIGN_TRP : 1;
      __IOM uint32_t DIV_0_TRP  : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t BFHFMIGN   : 1;
      __IOM uint32_t STKALIGN   : 1;
    }bit;
  }CCR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_4      : 8;
      __IOM uint32_t PRI_5      : 8;
      __IOM uint32_t PRI_6      : 8;
      __IOM uint32_t PRI_7      : 8;
    }bit;
  }SHPR1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_8      : 8;
      __IOM uint32_t PRI_9      : 8;
      __IOM uint32_t PRI_10     : 8;
      __IOM uint32_t PRI_11     : 8;
    }bit;
  }SHPR2;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PRI_12     : 8;
      __IOM uint32_t PRI_13     : 8;
      __IOM uint32_t PRI_14     : 8;
      __IOM uint32_t PRI_15     : 8;
    }bit;
  }SHPR3;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t MEMFAULTACT : 1;
      __IOM uint32_t BUSFAULTACT : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t USGFAULTACT : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t SVCALLACT  : 1;
      __IOM uint32_t MONITORACT : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t PENDSVACT  : 1;
      __IOM uint32_t SYSTICKACT : 1;
      __IOM uint32_t USGFAULTPENDED : 1;
      __IOM uint32_t MEMFAULTPENDED : 1;
      __IOM uint32_t BUSFAULTPENDED : 1;
      __IOM uint32_t SVCALLPENDED : 1;
      __IOM uint32_t MEMFAULTENA : 1;
      __IOM uint32_t BUSFAULTENA : 1;
      __IOM uint32_t USGFAULTENA : 1;
    }bit;
  }SHCSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t IACCVIOL   : 1;
      __IOM uint32_t DACCVIOL   : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t MUNSTKERR  : 1;
      __IOM uint32_t MSTERR     : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t MMARVALID  : 1;
      __IOM uint32_t IBUSERR    : 1;
      __IOM uint32_t PRECISERR  : 1;
      __IOM uint32_t IMPRECISERR : 1;
      __IOM uint32_t UNSTKERR   : 1;
      __IOM uint32_t STKERR     : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t BFARVALID  : 1;
      __IOM uint32_t UNDEFINSTR : 1;
      __IOM uint32_t INVSTATE   : 1;
      __IOM uint32_t INVPC      : 1;
      __IOM uint32_t NOCP       : 1;
      __IM  uint32_t            : 4;
      __IOM uint32_t UNALIGNED  : 1;
      __IOM uint32_t DIVBYZERO  : 1;
    }bit;
  }CFSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IOM uint32_t VECTTBL    : 1;
      __IM  uint32_t            : 28;
      __IOM uint32_t FORCED     : 1;
      __IOM uint32_t DEBUGEVT   : 1;
    }bit;
  }HFSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t HALTED     : 1;
      __IOM uint32_t BKPT       : 1;
      __IOM uint32_t DWTTRAP    : 1;
      __IOM uint32_t VCATCH     : 1;
      __IOM uint32_t EXTERNAL   : 1;
    }bit;
  }DFSR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ADDRESS    : 32;
    }bit;
  }MMFAR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ADDRESS    : 32;
    }bit;
  }BFAR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CP0        : 2;
      __IOM uint32_t CP1        : 2;
      __IOM uint32_t CP2        : 2;
      __IOM uint32_t CP3        : 2;
      __IOM uint32_t CP4        : 2;
      __IOM uint32_t CP5        : 2;
      __IOM uint32_t CP6        : 2;
      __IOM uint32_t CP7        : 2;
      __IM  uint32_t            : 4;
      __IOM uint32_t CP10       : 2;
      __IOM uint32_t CP11       : 2;
    }bit;
  }AFSR;
}CPU_Type;


/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern CPU_Type                                                             CPU;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

