#pragma once
/******************************************************************************/
/* File   : uC_Scu.hpp                                                        */
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
#define SCU_APCLK1_APCLK3SCLR_Pos                                 (7UL)
#define SCU_APCLK1_APCLK3SCLR_Msk                                 (0x80UL)
#define SCU_APCLK1_APCLK3STS_Pos                                  (6UL)
#define SCU_APCLK1_APCLK3STS_Msk                                  (0x40UL)
#define SCU_APCLK1_APCLK1STS_Pos                                  (4UL)
#define SCU_APCLK1_APCLK1STS_Msk                                  (0x30UL)
#define SCU_APCLK1_APCLK1SCLR_Pos                                 (2UL)
#define SCU_APCLK1_APCLK1SCLR_Msk                                 (0x4UL)
#define SCU_APCLK1_APCLK1FAC_Pos                                  (0UL)
#define SCU_APCLK1_APCLK1FAC_Msk                                  (0x3UL)
#define SCU_APCLK2_APCLK2SCLR_Pos                                 (7UL)
#define SCU_APCLK2_APCLK2SCLR_Msk                                 (0x80UL)
#define SCU_APCLK2_APCLK2STS_Pos                                  (5UL)
#define SCU_APCLK2_APCLK2STS_Msk                                  (0x60UL)
#define SCU_APCLK2_APCLK2FAC_Pos                                  (0UL)
#define SCU_APCLK2_APCLK2FAC_Msk                                  (0x1fUL)
#define SCU_APCLK_CTRL1_CPCLK_DIV_Pos                             (7UL)
#define SCU_APCLK_CTRL1_CPCLK_DIV_Msk                             (0x80UL)
#define SCU_APCLK_CTRL1_CPCLK_SEL_Pos                             (6UL)
#define SCU_APCLK_CTRL1_CPCLK_SEL_Msk                             (0x40UL)
#define SCU_APCLK_CTRL1_BGCLK_DIV_Pos                             (5UL)
#define SCU_APCLK_CTRL1_BGCLK_DIV_Msk                             (0x20UL)
#define SCU_APCLK_CTRL1_BGCLK_SEL_Pos                             (4UL)
#define SCU_APCLK_CTRL1_BGCLK_SEL_Msk                             (0x10UL)
#define SCU_APCLK_CTRL1_CLKWDT_IE_Pos                             (3UL)
#define SCU_APCLK_CTRL1_CLKWDT_IE_Msk                             (0x8UL)
#define SCU_APCLK_CTRL1_T3CLK_SEL_Pos                             (2UL)
#define SCU_APCLK_CTRL1_T3CLK_SEL_Msk                             (0x4UL)
#define SCU_APCLK_CTRL1_APCLK_SET_Pos                             (1UL)
#define SCU_APCLK_CTRL1_APCLK_SET_Msk                             (0x2UL)
#define SCU_APCLK_CTRL1_PLL_LOCK_Pos                              (0UL)
#define SCU_APCLK_CTRL1_PLL_LOCK_Msk                              (0x1UL)
#define SCU_APCLK_CTRL2_T3CLK_DIV_Pos                             (2UL)
#define SCU_APCLK_CTRL2_T3CLK_DIV_Msk                             (0xcUL)
#define SCU_APCLK_CTRL2_SDADCCLK_DIV_Pos                          (0UL)
#define SCU_APCLK_CTRL2_SDADCCLK_DIV_Msk                          (0x3UL)
#define SCU_BCON1_R_Pos                                           (0UL)
#define SCU_BCON1_R_Msk                                           (0x1UL)
#define SCU_BCON1_BRPRE_Pos                                       (1UL)
#define SCU_BCON1_BRPRE_Msk                                       (0xeUL)
#define SCU_BCON2_R_Pos                                           (0UL)
#define SCU_BCON2_R_Msk                                           (0x1UL)
#define SCU_BCON2_BRPRE_Pos                                       (1UL)
#define SCU_BCON2_BRPRE_Msk                                       (0xeUL)
#define SCU_BGH1_BR_VALUE_Pos                                     (0UL)
#define SCU_BGH1_BR_VALUE_Msk                                     (0xffUL)
#define SCU_BGH2_BR_VALUE_Pos                                     (0UL)
#define SCU_BGH2_BR_VALUE_Msk                                     (0xffUL)
#define SCU_BGL1_FD_SEL_Pos                                       (0UL)
#define SCU_BGL1_FD_SEL_Msk                                       (0x1fUL)
#define SCU_BGL1_BR_VALUE_Pos                                     (5UL)
#define SCU_BGL1_BR_VALUE_Msk                                     (0xe0UL)
#define SCU_BGL2_FD_SEL_Pos                                       (0UL)
#define SCU_BGL2_FD_SEL_Msk                                       (0x1fUL)
#define SCU_BGL2_BR_VALUE_Pos                                     (5UL)
#define SCU_BGL2_BR_VALUE_Msk                                     (0xe0UL)
#define SCU_CMCON1_VCOSEL_Pos                                     (7UL)
#define SCU_CMCON1_VCOSEL_Msk                                     (0x80UL)
#define SCU_CMCON1_K1DIV_Pos                                      (6UL)
#define SCU_CMCON1_K1DIV_Msk                                      (0x40UL)
#define SCU_CMCON1_K2DIV_Pos                                      (4UL)
#define SCU_CMCON1_K2DIV_Msk                                      (0x30UL)
#define SCU_CMCON1_CLKREL_Pos                                     (0UL)
#define SCU_CMCON1_CLKREL_Msk                                     (0xfUL)
#define SCU_CMCON2_PBA0CLKREL_Pos                                 (0UL)
#define SCU_CMCON2_PBA0CLKREL_Msk                                 (0x1UL)
#define SCU_COCON_EN_Pos                                          (7UL)
#define SCU_COCON_EN_Msk                                          (0x80UL)
#define SCU_COCON_COUTS1_Pos                                      (6UL)
#define SCU_COCON_COUTS1_Msk                                      (0x40UL)
#define SCU_COCON_TLEN_Pos                                        (5UL)
#define SCU_COCON_TLEN_Msk                                        (0x20UL)
#define SCU_COCON_COUTS0_Pos                                      (4UL)
#define SCU_COCON_COUTS0_Msk                                      (0x10UL)
#define SCU_COCON_COREL_Pos                                       (0UL)
#define SCU_COCON_COREL_Msk                                       (0xfUL)
#define SCU_DMAIEN1_CH8IE_Pos                                     (7UL)
#define SCU_DMAIEN1_CH8IE_Msk                                     (0x80UL)
#define SCU_DMAIEN1_CH7IE_Pos                                     (6UL)
#define SCU_DMAIEN1_CH7IE_Msk                                     (0x40UL)
#define SCU_DMAIEN1_CH6IE_Pos                                     (5UL)
#define SCU_DMAIEN1_CH6IE_Msk                                     (0x20UL)
#define SCU_DMAIEN1_CH5IE_Pos                                     (4UL)
#define SCU_DMAIEN1_CH5IE_Msk                                     (0x10UL)
#define SCU_DMAIEN1_CH4IE_Pos                                     (3UL)
#define SCU_DMAIEN1_CH4IE_Msk                                     (0x8UL)
#define SCU_DMAIEN1_CH3IE_Pos                                     (2UL)
#define SCU_DMAIEN1_CH3IE_Msk                                     (0x4UL)
#define SCU_DMAIEN1_CH2IE_Pos                                     (1UL)
#define SCU_DMAIEN1_CH2IE_Msk                                     (0x2UL)
#define SCU_DMAIEN1_CH1IE_Pos                                     (0UL)
#define SCU_DMAIEN1_CH1IE_Msk                                     (0x1UL)
#define SCU_DMAIEN2_SDADCIE_Pos                                   (6UL)
#define SCU_DMAIEN2_SDADCIE_Msk                                   (0x40UL)
#define SCU_DMAIEN2_GPT12IE_Pos                                   (5UL)
#define SCU_DMAIEN2_GPT12IE_Msk                                   (0x20UL)
#define SCU_DMAIEN2_SSCRXIE_Pos                                   (4UL)
#define SCU_DMAIEN2_SSCRXIE_Msk                                   (0x10UL)
#define SCU_DMAIEN2_SSCTXIE_Pos                                   (3UL)
#define SCU_DMAIEN2_SSCTXIE_Msk                                   (0x8UL)
#define SCU_DMAIEN2_TRSEQ2RDYIE_Pos                               (2UL)
#define SCU_DMAIEN2_TRSEQ2RDYIE_Msk                               (0x4UL)
#define SCU_DMAIEN2_TRSEQ1RDYIE_Pos                               (1UL)
#define SCU_DMAIEN2_TRSEQ1RDYIE_Msk                               (0x2UL)
#define SCU_DMAIEN2_TRERRIE_Pos                                   (0UL)
#define SCU_DMAIEN2_TRERRIE_Msk                                   (0x1UL)
#define SCU_DMAIRC1_CH8_Pos                                       (7UL)
#define SCU_DMAIRC1_CH8_Msk                                       (0x80UL)
#define SCU_DMAIRC1_CH7_Pos                                       (6UL)
#define SCU_DMAIRC1_CH7_Msk                                       (0x40UL)
#define SCU_DMAIRC1_CH6_Pos                                       (5UL)
#define SCU_DMAIRC1_CH6_Msk                                       (0x20UL)
#define SCU_DMAIRC1_CH5_Pos                                       (4UL)
#define SCU_DMAIRC1_CH5_Msk                                       (0x10UL)
#define SCU_DMAIRC1_CH4_Pos                                       (3UL)
#define SCU_DMAIRC1_CH4_Msk                                       (0x8UL)
#define SCU_DMAIRC1_CH3_Pos                                       (2UL)
#define SCU_DMAIRC1_CH3_Msk                                       (0x4UL)
#define SCU_DMAIRC1_CH2_Pos                                       (1UL)
#define SCU_DMAIRC1_CH2_Msk                                       (0x2UL)
#define SCU_DMAIRC1_CH1_Pos                                       (0UL)
#define SCU_DMAIRC1_CH1_Msk                                       (0x1UL)
#define SCU_DMAIRC1CLR_CH8C_Pos                                   (7UL)
#define SCU_DMAIRC1CLR_CH8C_Msk                                   (0x80UL)
#define SCU_DMAIRC1CLR_CH7C_Pos                                   (6UL)
#define SCU_DMAIRC1CLR_CH7C_Msk                                   (0x40UL)
#define SCU_DMAIRC1CLR_CH6C_Pos                                   (5UL)
#define SCU_DMAIRC1CLR_CH6C_Msk                                   (0x20UL)
#define SCU_DMAIRC1CLR_CH5C_Pos                                   (4UL)
#define SCU_DMAIRC1CLR_CH5C_Msk                                   (0x10UL)
#define SCU_DMAIRC1CLR_CH4C_Pos                                   (3UL)
#define SCU_DMAIRC1CLR_CH4C_Msk                                   (0x8UL)
#define SCU_DMAIRC1CLR_CH3C_Pos                                   (2UL)
#define SCU_DMAIRC1CLR_CH3C_Msk                                   (0x4UL)
#define SCU_DMAIRC1CLR_CH2C_Pos                                   (1UL)
#define SCU_DMAIRC1CLR_CH2C_Msk                                   (0x2UL)
#define SCU_DMAIRC1CLR_CH1C_Pos                                   (0UL)
#define SCU_DMAIRC1CLR_CH1C_Msk                                   (0x1UL)
#define SCU_DMAIRC2_SDADC_Pos                                     (6UL)
#define SCU_DMAIRC2_SDADC_Msk                                     (0x40UL)
#define SCU_DMAIRC2_GPT12_Pos                                     (5UL)
#define SCU_DMAIRC2_GPT12_Msk                                     (0x20UL)
#define SCU_DMAIRC2_SSC2RDY_Pos                                   (4UL)
#define SCU_DMAIRC2_SSC2RDY_Msk                                   (0x10UL)
#define SCU_DMAIRC2_SSC1RDY_Pos                                   (3UL)
#define SCU_DMAIRC2_SSC1RDY_Msk                                   (0x8UL)
#define SCU_DMAIRC2_TRSEQ2DY_Pos                                  (2UL)
#define SCU_DMAIRC2_TRSEQ2DY_Msk                                  (0x4UL)
#define SCU_DMAIRC2_TRSEQ1DY_Pos                                  (1UL)
#define SCU_DMAIRC2_TRSEQ1DY_Msk                                  (0x2UL)
#define SCU_DMAIRC2_STRDY_Pos                                     (0UL)
#define SCU_DMAIRC2_STRDY_Msk                                     (0x1UL)
#define SCU_DMAIRC2CLR_SDADCC_Pos                                 (6UL)
#define SCU_DMAIRC2CLR_SDADCC_Msk                                 (0x40UL)
#define SCU_DMAIRC2CLR_GPT12C_Pos                                 (5UL)
#define SCU_DMAIRC2CLR_GPT12C_Msk                                 (0x20UL)
#define SCU_DMAIRC2CLR_SSC2C_Pos                                  (4UL)
#define SCU_DMAIRC2CLR_SSC2C_Msk                                  (0x10UL)
#define SCU_DMAIRC2CLR_SSC1C_Pos                                  (3UL)
#define SCU_DMAIRC2CLR_SSC1C_Msk                                  (0x8UL)
#define SCU_DMAIRC2CLR_TRSEQ2DYC_Pos                              (2UL)
#define SCU_DMAIRC2CLR_TRSEQ2DYC_Msk                              (0x4UL)
#define SCU_DMAIRC2CLR_TRSEQ1DYC_Pos                              (1UL)
#define SCU_DMAIRC2CLR_TRSEQ1DYC_Msk                              (0x2UL)
#define SCU_DMASRCCLR_GPT12_T3C_Pos                               (7UL)
#define SCU_DMASRCCLR_GPT12_T3C_Msk                               (0x80UL)
#define SCU_DMASRCCLR_SSCRXC_Pos                                  (6UL)
#define SCU_DMASRCCLR_SSCRXC_Msk                                  (0x40UL)
#define SCU_DMASRCCLR_SSCTXC_Pos                                  (5UL)
#define SCU_DMASRCCLR_SSCTXC_Msk                                  (0x20UL)
#define SCU_DMASRCSEL_GPT12_T3_Pos                                (7UL)
#define SCU_DMASRCSEL_GPT12_T3_Msk                                (0x80UL)
#define SCU_DMASRCSEL_SSCRX_Pos                                   (6UL)
#define SCU_DMASRCSEL_SSCRX_Msk                                   (0x40UL)
#define SCU_DMASRCSEL_SSCTX_Pos                                   (5UL)
#define SCU_DMASRCSEL_SSCTX_Msk                                   (0x20UL)
#define SCU_DMASRCSEL_T12PM_DMAEN_Pos                             (3UL)
#define SCU_DMASRCSEL_T12PM_DMAEN_Msk                             (0x8UL)
#define SCU_DMASRCSEL_T12ZM_DMAEN_Pos                             (2UL)
#define SCU_DMASRCSEL_T12ZM_DMAEN_Msk                             (0x4UL)
#define SCU_DMASRCSEL_SSCRXSRCSEL_Pos                             (1UL)
#define SCU_DMASRCSEL_SSCRXSRCSEL_Msk                             (0x2UL)
#define SCU_DMASRCSEL_SSCTXSRCSEL_Pos                             (0UL)
#define SCU_DMASRCSEL_SSCTXSRCSEL_Msk                             (0x1UL)
#define SCU_DMASRCSEL2_GPT12_DMAEN_Pos                            (0UL)
#define SCU_DMASRCSEL2_GPT12_DMAEN_Msk                            (0x3UL)
#define SCU_EDCCON_NVMIE_Pos                                      (2UL)
#define SCU_EDCCON_NVMIE_Msk                                      (0x4UL)
#define SCU_EDCCON_RIE_Pos                                        (0UL)
#define SCU_EDCCON_RIE_Msk                                        (0x1UL)
#define SCU_EDCSCLR_RSBEC_Pos                                     (4UL)
#define SCU_EDCSCLR_RSBEC_Msk                                     (0x10UL)
#define SCU_EDCSCLR_NVMDBEC_Pos                                   (2UL)
#define SCU_EDCSCLR_NVMDBEC_Msk                                   (0x4UL)
#define SCU_EDCSCLR_RDBEC_Pos                                     (0UL)
#define SCU_EDCSCLR_RDBEC_Msk                                     (0x1UL)
#define SCU_EDCSTAT_RSBE_Pos                                      (4UL)
#define SCU_EDCSTAT_RSBE_Msk                                      (0x10UL)
#define SCU_EDCSTAT_NVMDBE_Pos                                    (2UL)
#define SCU_EDCSTAT_NVMDBE_Msk                                    (0x4UL)
#define SCU_EDCSTAT_RDBE_Pos                                      (0UL)
#define SCU_EDCSTAT_RDBE_Msk                                      (0x1UL)
#define SCU_EXICON0_MON_Trig_Sel_Pos                              (6UL)
#define SCU_EXICON0_MON_Trig_Sel_Msk                              (0xc0UL)
#define SCU_EXICON0_EXINT2_Pos                                    (4UL)
#define SCU_EXICON0_EXINT2_Msk                                    (0x30UL)
#define SCU_EXICON0_EXINT1_Pos                                    (2UL)
#define SCU_EXICON0_EXINT1_Msk                                    (0xcUL)
#define SCU_EXICON0_EXINT0_Pos                                    (0UL)
#define SCU_EXICON0_EXINT0_Msk                                    (0x3UL)
#define SCU_GPT12ICLR_CRC_Pos                                     (5UL)
#define SCU_GPT12ICLR_CRC_Msk                                     (0x20UL)
#define SCU_GPT12ICLR_T6C_Pos                                     (4UL)
#define SCU_GPT12ICLR_T6C_Msk                                     (0x10UL)
#define SCU_GPT12ICLR_T5C_Pos                                     (3UL)
#define SCU_GPT12ICLR_T5C_Msk                                     (0x8UL)
#define SCU_GPT12ICLR_T4C_Pos                                     (2UL)
#define SCU_GPT12ICLR_T4C_Msk                                     (0x4UL)
#define SCU_GPT12ICLR_T3C_Pos                                     (1UL)
#define SCU_GPT12ICLR_T3C_Msk                                     (0x2UL)
#define SCU_GPT12ICLR_T2C_Pos                                     (0UL)
#define SCU_GPT12ICLR_T2C_Msk                                     (0x1UL)
#define SCU_GPT12IEN_CRIE_Pos                                     (5UL)
#define SCU_GPT12IEN_CRIE_Msk                                     (0x20UL)
#define SCU_GPT12IEN_T6IE_Pos                                     (4UL)
#define SCU_GPT12IEN_T6IE_Msk                                     (0x10UL)
#define SCU_GPT12IEN_T5IE_Pos                                     (3UL)
#define SCU_GPT12IEN_T5IE_Msk                                     (0x8UL)
#define SCU_GPT12IEN_T4IE_Pos                                     (2UL)
#define SCU_GPT12IEN_T4IE_Msk                                     (0x4UL)
#define SCU_GPT12IEN_T3IE_Pos                                     (1UL)
#define SCU_GPT12IEN_T3IE_Msk                                     (0x2UL)
#define SCU_GPT12IEN_T2IE_Pos                                     (0UL)
#define SCU_GPT12IEN_T2IE_Msk                                     (0x1UL)
#define SCU_GPT12IRC_CR_Pos                                       (5UL)
#define SCU_GPT12IRC_CR_Msk                                       (0x20UL)
#define SCU_GPT12IRC_T6_Pos                                       (4UL)
#define SCU_GPT12IRC_T6_Msk                                       (0x10UL)
#define SCU_GPT12IRC_T5_Pos                                       (3UL)
#define SCU_GPT12IRC_T5_Msk                                       (0x8UL)
#define SCU_GPT12IRC_T4_Pos                                       (2UL)
#define SCU_GPT12IRC_T4_Msk                                       (0x4UL)
#define SCU_GPT12IRC_T3_Pos                                       (1UL)
#define SCU_GPT12IRC_T3_Msk                                       (0x2UL)
#define SCU_GPT12IRC_T2_Pos                                       (0UL)
#define SCU_GPT12IRC_T2_Msk                                       (0x1UL)
#define SCU_GPT12PISEL_T3_GPT12_SEL_Pos                           (5UL)
#define SCU_GPT12PISEL_T3_GPT12_SEL_Msk                           (0x20UL)
#define SCU_GPT12PISEL_TRIG_CONF_Pos                              (4UL)
#define SCU_GPT12PISEL_TRIG_CONF_Msk                              (0x10UL)
#define SCU_GPT12PISEL_GPT12_Pos                                  (0UL)
#define SCU_GPT12PISEL_GPT12_Msk                                  (0xfUL)
#define SCU_ID_PRODID_Pos                                         (3UL)
#define SCU_ID_PRODID_Msk                                         (0xf8UL)
#define SCU_ID_VERID_Pos                                          (0UL)
#define SCU_ID_VERID_Msk                                          (0x7UL)
#define SCU_IEN0_EA_Pos                                           (7UL)
#define SCU_IEN0_EA_Msk                                           (0x80UL)
#define SCU_IRCON0_MONF_Pos                                       (7UL)
#define SCU_IRCON0_MONF_Msk                                       (0x80UL)
#define SCU_IRCON0_MONR_Pos                                       (6UL)
#define SCU_IRCON0_MONR_Msk                                       (0x40UL)
#define SCU_IRCON0_EXINT2F_Pos                                    (5UL)
#define SCU_IRCON0_EXINT2F_Msk                                    (0x20UL)
#define SCU_IRCON0_EXINT2R_Pos                                    (4UL)
#define SCU_IRCON0_EXINT2R_Msk                                    (0x10UL)
#define SCU_IRCON0_EXINT1F_Pos                                    (3UL)
#define SCU_IRCON0_EXINT1F_Msk                                    (0x8UL)
#define SCU_IRCON0_EXINT1R_Pos                                    (2UL)
#define SCU_IRCON0_EXINT1R_Msk                                    (0x4UL)
#define SCU_IRCON0_EXINT0F_Pos                                    (1UL)
#define SCU_IRCON0_EXINT0F_Msk                                    (0x2UL)
#define SCU_IRCON0_EXINT0R_Pos                                    (0UL)
#define SCU_IRCON0_EXINT0R_Msk                                    (0x1UL)
#define SCU_IRCON0CLR_MONFC_Pos                                   (7UL)
#define SCU_IRCON0CLR_MONFC_Msk                                   (0x80UL)
#define SCU_IRCON0CLR_MONRC_Pos                                   (6UL)
#define SCU_IRCON0CLR_MONRC_Msk                                   (0x40UL)
#define SCU_IRCON0CLR_EXINT2FC_Pos                                (5UL)
#define SCU_IRCON0CLR_EXINT2FC_Msk                                (0x20UL)
#define SCU_IRCON0CLR_EXINT2RC_Pos                                (4UL)
#define SCU_IRCON0CLR_EXINT2RC_Msk                                (0x10UL)
#define SCU_IRCON0CLR_EXINT1FC_Pos                                (3UL)
#define SCU_IRCON0CLR_EXINT1FC_Msk                                (0x8UL)
#define SCU_IRCON0CLR_EXINT1RC_Pos                                (2UL)
#define SCU_IRCON0CLR_EXINT1RC_Msk                                (0x4UL)
#define SCU_IRCON0CLR_EXINT0FC_Pos                                (1UL)
#define SCU_IRCON0CLR_EXINT0FC_Msk                                (0x2UL)
#define SCU_IRCON0CLR_EXINT0RC_Pos                                (0UL)
#define SCU_IRCON0CLR_EXINT0RC_Msk                                (0x1UL)
#define SCU_IRCON1_RIR_Pos                                        (2UL)
#define SCU_IRCON1_RIR_Msk                                        (0x4UL)
#define SCU_IRCON1_TIR_Pos                                        (1UL)
#define SCU_IRCON1_TIR_Msk                                        (0x2UL)
#define SCU_IRCON1_EIR_Pos                                        (0UL)
#define SCU_IRCON1_EIR_Msk                                        (0x1UL)
#define SCU_IRCON1CLR_RIRC_Pos                                    (2UL)
#define SCU_IRCON1CLR_RIRC_Msk                                    (0x4UL)
#define SCU_IRCON1CLR_TIRC_Pos                                    (1UL)
#define SCU_IRCON1CLR_TIRC_Msk                                    (0x2UL)
#define SCU_IRCON1CLR_EIRC_Pos                                    (0UL)
#define SCU_IRCON1CLR_EIRC_Msk                                    (0x1UL)
#define SCU_IRCON2_RIR_Pos                                        (2UL)
#define SCU_IRCON2_RIR_Msk                                        (0x4UL)
#define SCU_IRCON2_TIR_Pos                                        (1UL)
#define SCU_IRCON2_TIR_Msk                                        (0x2UL)
#define SCU_IRCON2_EIR_Pos                                        (0UL)
#define SCU_IRCON2_EIR_Msk                                        (0x1UL)
#define SCU_IRCON2CLR_RIRC_Pos                                    (2UL)
#define SCU_IRCON2CLR_RIRC_Msk                                    (0x4UL)
#define SCU_IRCON2CLR_TIRC_Pos                                    (1UL)
#define SCU_IRCON2CLR_TIRC_Msk                                    (0x2UL)
#define SCU_IRCON2CLR_EIRC_Pos                                    (0UL)
#define SCU_IRCON2CLR_EIRC_Msk                                    (0x1UL)
#define SCU_IRCON3_CCU6SR1_Pos                                    (4UL)
#define SCU_IRCON3_CCU6SR1_Msk                                    (0x10UL)
#define SCU_IRCON3_CCU6SR0_Pos                                    (0UL)
#define SCU_IRCON3_CCU6SR0_Msk                                    (0x1UL)
#define SCU_IRCON3CLR_CCU6SR1C_Pos                                (4UL)
#define SCU_IRCON3CLR_CCU6SR1C_Msk                                (0x10UL)
#define SCU_IRCON3CLR_CCU6SR0C_Pos                                (0UL)
#define SCU_IRCON3CLR_CCU6SR0C_Msk                                (0x1UL)
#define SCU_IRCON4_CCU6SR3_Pos                                    (4UL)
#define SCU_IRCON4_CCU6SR3_Msk                                    (0x10UL)
#define SCU_IRCON4_CCU6SR2_Pos                                    (0UL)
#define SCU_IRCON4_CCU6SR2_Msk                                    (0x1UL)
#define SCU_IRCON4CLR_CCU6SR3C_Pos                                (4UL)
#define SCU_IRCON4CLR_CCU6SR3C_Msk                                (0x10UL)
#define SCU_IRCON4CLR_CCU6SR2C_Pos                                (0UL)
#define SCU_IRCON4CLR_CCU6SR2C_Msk                                (0x1UL)
#define SCU_LINSCLR_BRKC_Pos                                      (3UL)
#define SCU_LINSCLR_BRKC_Msk                                      (0x8UL)
#define SCU_LINSCLR_EOFSYNC_Pos                                   (4UL)
#define SCU_LINSCLR_EOFSYNC_Msk                                   (0x10UL)
#define SCU_LINSCLR_ERRSYNC_Pos                                   (5UL)
#define SCU_LINSCLR_ERRSYNC_Msk                                   (0x20UL)
#define SCU_LINST_BRDIS_Pos                                       (0UL)
#define SCU_LINST_BRDIS_Msk                                       (0x1UL)
#define SCU_LINST_BGSEL_Pos                                       (1UL)
#define SCU_LINST_BGSEL_Msk                                       (0x6UL)
#define SCU_LINST_BRK_Pos                                         (3UL)
#define SCU_LINST_BRK_Msk                                         (0x8UL)
#define SCU_LINST_EOFSYN_Pos                                      (4UL)
#define SCU_LINST_EOFSYN_Msk                                      (0x10UL)
#define SCU_LINST_ERRSYN_Pos                                      (5UL)
#define SCU_LINST_ERRSYN_Msk                                      (0x20UL)
#define SCU_LINST_SYNEN_Pos                                       (6UL)
#define SCU_LINST_SYNEN_Msk                                       (0x40UL)
#define SCU_MEM_ACC_STS_RAM_PROT_ERR_Pos                          (6UL)
#define SCU_MEM_ACC_STS_RAM_PROT_ERR_Msk                          (0x40UL)
#define SCU_MEM_ACC_STS_ROM_ADDR_ERR_Pos                          (5UL)
#define SCU_MEM_ACC_STS_ROM_ADDR_ERR_Msk                          (0x20UL)
#define SCU_MEM_ACC_STS_ROM_PROT_ERR_Pos                          (4UL)
#define SCU_MEM_ACC_STS_ROM_PROT_ERR_Msk                          (0x10UL)
#define SCU_MEM_ACC_STS_NVM_SFR_ADDR_ERR_Pos                      (3UL)
#define SCU_MEM_ACC_STS_NVM_SFR_ADDR_ERR_Msk                      (0x8UL)
#define SCU_MEM_ACC_STS_NVM_SFR_PROT_ERR_Pos                      (2UL)
#define SCU_MEM_ACC_STS_NVM_SFR_PROT_ERR_Msk                      (0x4UL)
#define SCU_MEM_ACC_STS_NVM_ADDR_ERR_Pos                          (1UL)
#define SCU_MEM_ACC_STS_NVM_ADDR_ERR_Msk                          (0x2UL)
#define SCU_MEM_ACC_STS_NVM_PROT_ERR_Pos                          (0UL)
#define SCU_MEM_ACC_STS_NVM_PROT_ERR_Msk                          (0x1UL)
#define SCU_MEMSTAT_SASTATUS_Pos                                  (6UL)
#define SCU_MEMSTAT_SASTATUS_Msk                                  (0xc0UL)
#define SCU_MEMSTAT_SECTORINFO_Pos                                (0UL)
#define SCU_MEMSTAT_SECTORINFO_Msk                                (0x3fUL)
#define SCU_MODIEN1_TIEN1_Pos                                     (7UL)
#define SCU_MODIEN1_TIEN1_Msk                                     (0x80UL)
#define SCU_MODIEN1_RIEN1_Pos                                     (6UL)
#define SCU_MODIEN1_RIEN1_Msk                                     (0x40UL)
#define SCU_MODIEN1_RIREN1_Pos                                    (2UL)
#define SCU_MODIEN1_RIREN1_Msk                                    (0x4UL)
#define SCU_MODIEN1_TIREN1_Pos                                    (1UL)
#define SCU_MODIEN1_TIREN1_Msk                                    (0x2UL)
#define SCU_MODIEN1_EIREN1_Pos                                    (0UL)
#define SCU_MODIEN1_EIREN1_Msk                                    (0x1UL)
#define SCU_MODIEN2_TIEN2_Pos                                     (7UL)
#define SCU_MODIEN2_TIEN2_Msk                                     (0x80UL)
#define SCU_MODIEN2_RIEN2_Pos                                     (6UL)
#define SCU_MODIEN2_RIEN2_Msk                                     (0x40UL)
#define SCU_MODIEN2_EXINT2_EN_Pos                                 (5UL)
#define SCU_MODIEN2_EXINT2_EN_Msk                                 (0x20UL)
#define SCU_MODIEN2_RIREN2_Pos                                    (2UL)
#define SCU_MODIEN2_RIREN2_Msk                                    (0x4UL)
#define SCU_MODIEN2_TIREN2_Pos                                    (1UL)
#define SCU_MODIEN2_TIREN2_Msk                                    (0x2UL)
#define SCU_MODIEN2_EIREN2_Pos                                    (0UL)
#define SCU_MODIEN2_EIREN2_Msk                                    (0x1UL)
#define SCU_MODIEN3_MONSTS_Pos                                    (5UL)
#define SCU_MODIEN3_MONSTS_Msk                                    (0x20UL)
#define SCU_MODIEN3_MONIE_Pos                                     (4UL)
#define SCU_MODIEN3_MONIE_Msk                                     (0x10UL)
#define SCU_MODIEN3_IE0_Pos                                       (0UL)
#define SCU_MODIEN3_IE0_Msk                                       (0x1UL)
#define SCU_MODIEN4_IE1_Pos                                       (0UL)
#define SCU_MODIEN4_IE1_Msk                                       (0x1UL)
#define SCU_MODPISEL_U_TX_CONDIS_Pos                              (7UL)
#define SCU_MODPISEL_U_TX_CONDIS_Msk                              (0x80UL)
#define SCU_MODPISEL_URIOS1_Pos                                   (6UL)
#define SCU_MODPISEL_URIOS1_Msk                                   (0x40UL)
#define SCU_MODPISEL_EXINT2IS_Pos                                 (4UL)
#define SCU_MODPISEL_EXINT2IS_Msk                                 (0x30UL)
#define SCU_MODPISEL_EXINT1IS_Pos                                 (2UL)
#define SCU_MODPISEL_EXINT1IS_Msk                                 (0xcUL)
#define SCU_MODPISEL_EXINT0IS_Pos                                 (0UL)
#define SCU_MODPISEL_EXINT0IS_Msk                                 (0x3UL)
#define SCU_MODPISEL1_T21EXCON_Pos                                (7UL)
#define SCU_MODPISEL1_T21EXCON_Msk                                (0x80UL)
#define SCU_MODPISEL1_T2EXCON_Pos                                 (6UL)
#define SCU_MODPISEL1_T2EXCON_Msk                                 (0x40UL)
#define SCU_MODPISEL1_GPT12CAPINB_Pos                             (0UL)
#define SCU_MODPISEL1_GPT12CAPINB_Msk                             (0x1UL)
#define SCU_MODPISEL2_T21EXIS_Pos                                 (6UL)
#define SCU_MODPISEL2_T21EXIS_Msk                                 (0xc0UL)
#define SCU_MODPISEL2_T2EXIS_Pos                                  (4UL)
#define SCU_MODPISEL2_T2EXIS_Msk                                  (0x30UL)
#define SCU_MODPISEL2_T21IS_Pos                                   (2UL)
#define SCU_MODPISEL2_T21IS_Msk                                   (0xcUL)
#define SCU_MODPISEL2_T2IS_Pos                                    (0UL)
#define SCU_MODPISEL2_T2IS_Msk                                    (0x3UL)
#define SCU_MODPISEL3_URIOS2_Pos                                  (6UL)
#define SCU_MODPISEL3_URIOS2_Msk                                  (0x40UL)
#define SCU_MODSUSP1_T21_SUSP_Pos                                 (6UL)
#define SCU_MODSUSP1_T21_SUSP_Msk                                 (0x40UL)
#define SCU_MODSUSP1_GPT12_SUSP_Pos                               (4UL)
#define SCU_MODSUSP1_GPT12_SUSP_Msk                               (0x10UL)
#define SCU_MODSUSP1_T2_SUSP_Pos                                  (3UL)
#define SCU_MODSUSP1_T2_SUSP_Msk                                  (0x8UL)
#define SCU_MODSUSP1_T13SUSP_Pos                                  (2UL)
#define SCU_MODSUSP1_T13SUSP_Msk                                  (0x4UL)
#define SCU_MODSUSP1_T12SUSP_Pos                                  (1UL)
#define SCU_MODSUSP1_T12SUSP_Msk                                  (0x2UL)
#define SCU_MODSUSP1_WDTSUSP_Pos                                  (0UL)
#define SCU_MODSUSP1_WDTSUSP_Msk                                  (0x1UL)
#define SCU_MODSUSP2_ADC1_SUSP_Pos                                (2UL)
#define SCU_MODSUSP2_ADC1_SUSP_Msk                                (0x4UL)
#define SCU_MODSUSP2_MU_SUSP_Pos                                  (1UL)
#define SCU_MODSUSP2_MU_SUSP_Msk                                  (0x2UL)
#define SCU_MODSUSP2_T3_SUSP_Pos                                  (0UL)
#define SCU_MODSUSP2_T3_SUSP_Msk                                  (0x1UL)
#define SCU_NMICLR_NMISUPC_Pos                                    (7UL)
#define SCU_NMICLR_NMISUPC_Msk                                    (0x80UL)
#define SCU_NMICLR_NMIECCC_Pos                                    (6UL)
#define SCU_NMICLR_NMIECCC_Msk                                    (0x40UL)
#define SCU_NMICLR_NMIMAPC_Pos                                    (5UL)
#define SCU_NMICLR_NMIMAPC_Msk                                    (0x20UL)
#define SCU_NMICLR_NMIOWDC_Pos                                    (4UL)
#define SCU_NMICLR_NMIOWDC_Msk                                    (0x10UL)
#define SCU_NMICLR_NMIOTC_Pos                                     (3UL)
#define SCU_NMICLR_NMIOTC_Msk                                     (0x8UL)
#define SCU_NMICLR_NMINVMC_Pos                                    (2UL)
#define SCU_NMICLR_NMINVMC_Msk                                    (0x4UL)
#define SCU_NMICLR_NMIPLLC_Pos                                    (1UL)
#define SCU_NMICLR_NMIPLLC_Msk                                    (0x2UL)
#define SCU_NMICLR_NMIWDTC_Pos                                    (0UL)
#define SCU_NMICLR_NMIWDTC_Msk                                    (0x1UL)
#define SCU_NMICON_NMISUP_Pos                                     (7UL)
#define SCU_NMICON_NMISUP_Msk                                     (0x80UL)
#define SCU_NMICON_NMIECC_Pos                                     (6UL)
#define SCU_NMICON_NMIECC_Msk                                     (0x40UL)
#define SCU_NMICON_NMIMAP_Pos                                     (5UL)
#define SCU_NMICON_NMIMAP_Msk                                     (0x20UL)
#define SCU_NMICON_NMIOWD_Pos                                     (4UL)
#define SCU_NMICON_NMIOWD_Msk                                     (0x10UL)
#define SCU_NMICON_NMIOT_Pos                                      (3UL)
#define SCU_NMICON_NMIOT_Msk                                      (0x8UL)
#define SCU_NMICON_NMINVM_Pos                                     (2UL)
#define SCU_NMICON_NMINVM_Msk                                     (0x4UL)
#define SCU_NMICON_NMIPLL_Pos                                     (1UL)
#define SCU_NMICON_NMIPLL_Msk                                     (0x2UL)
#define SCU_NMICON_NMIWDT_Pos                                     (0UL)
#define SCU_NMICON_NMIWDT_Msk                                     (0x1UL)
#define SCU_NMISR_FNMISUP_Pos                                     (7UL)
#define SCU_NMISR_FNMISUP_Msk                                     (0x80UL)
#define SCU_NMISR_FNMIECC_Pos                                     (6UL)
#define SCU_NMISR_FNMIECC_Msk                                     (0x40UL)
#define SCU_NMISR_FNMIMAP_Pos                                     (5UL)
#define SCU_NMISR_FNMIMAP_Msk                                     (0x20UL)
#define SCU_NMISR_FNMIOWD_Pos                                     (4UL)
#define SCU_NMISR_FNMIOWD_Msk                                     (0x10UL)
#define SCU_NMISR_FNMIOT_Pos                                      (3UL)
#define SCU_NMISR_FNMIOT_Msk                                      (0x8UL)
#define SCU_NMISR_FNMINVM_Pos                                     (2UL)
#define SCU_NMISR_FNMINVM_Msk                                     (0x4UL)
#define SCU_NMISR_FNMIPLL_Pos                                     (1UL)
#define SCU_NMISR_FNMIPLL_Msk                                     (0x2UL)
#define SCU_NMISR_FNMIWDT_Pos                                     (0UL)
#define SCU_NMISR_FNMIWDT_Msk                                     (0x1UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_3_Pos                        (3UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_3_Msk                        (0x8UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_2_Pos                        (2UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_2_Msk                        (0x4UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_1_Pos                        (1UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_1_Msk                        (0x2UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_0_Pos                        (0UL)
#define SCU_NVM_PROT_STS_NVMPROTSTSL_0_Msk                        (0x1UL)
#define SCU_OSC_CON_OSCTRIM_8_Pos                                 (7UL)
#define SCU_OSC_CON_OSCTRIM_8_Msk                                 (0x80UL)
#define SCU_OSC_CON_XPD_Pos                                       (4UL)
#define SCU_OSC_CON_XPD_Msk                                       (0x10UL)
#define SCU_OSC_CON_OSC2L_Pos                                     (3UL)
#define SCU_OSC_CON_OSC2L_Msk                                     (0x8UL)
#define SCU_OSC_CON_OSCWDTRST_Pos                                 (2UL)
#define SCU_OSC_CON_OSCWDTRST_Msk                                 (0x4UL)
#define SCU_OSC_CON_OSCSS_Pos                                     (0UL)
#define SCU_OSC_CON_OSCSS_Msk                                     (0x3UL)
#define SCU_P0_POCON0_PDM1_Pos                                    (4UL)
#define SCU_P0_POCON0_PDM1_Msk                                    (0x70UL)
#define SCU_P0_POCON0_PDM0_Pos                                    (0UL)
#define SCU_P0_POCON0_PDM0_Msk                                    (0x7UL)
#define SCU_P0_POCON1_PDM3_Pos                                    (4UL)
#define SCU_P0_POCON1_PDM3_Msk                                    (0x70UL)
#define SCU_P0_POCON1_PDM2_Pos                                    (0UL)
#define SCU_P0_POCON1_PDM2_Msk                                    (0x7UL)
#define SCU_P0_POCON2_PDM4_Pos                                    (0UL)
#define SCU_P0_POCON2_PDM4_Msk                                    (0x7UL)
#define SCU_P1_POCON0_PDM1_Pos                                    (4UL)
#define SCU_P1_POCON0_PDM1_Msk                                    (0x70UL)
#define SCU_P1_POCON0_PDM0_Pos                                    (0UL)
#define SCU_P1_POCON0_PDM0_Msk                                    (0x7UL)
#define SCU_P1_POCON1_PDM3_Pos                                    (4UL)
#define SCU_P1_POCON1_PDM3_Msk                                    (0x70UL)
#define SCU_P1_POCON1_PDM2_Pos                                    (0UL)
#define SCU_P1_POCON1_PDM2_Msk                                    (0x7UL)
#define SCU_P1_POCON2_PDM4_Pos                                    (0UL)
#define SCU_P1_POCON2_PDM4_Msk                                    (0x7UL)
#define SCU_PASSWD_PASS_Pos                                       (3UL)
#define SCU_PASSWD_PASS_Msk                                       (0xf8UL)
#define SCU_PASSWD_PROTECT_S_Pos                                  (2UL)
#define SCU_PASSWD_PROTECT_S_Msk                                  (0x4UL)
#define SCU_PASSWD_MODE_Pos                                       (0UL)
#define SCU_PASSWD_MODE_Msk                                       (0x3UL)
#define SCU_PLL_CON_NDIV_Pos                                      (4UL)
#define SCU_PLL_CON_NDIV_Msk                                      (0xf0UL)
#define SCU_PLL_CON_VCOBYP_Pos                                    (3UL)
#define SCU_PLL_CON_VCOBYP_Msk                                    (0x8UL)
#define SCU_PLL_CON_OSCDISC_Pos                                   (2UL)
#define SCU_PLL_CON_OSCDISC_Msk                                   (0x4UL)
#define SCU_PLL_CON_RESLD_Pos                                     (1UL)
#define SCU_PLL_CON_RESLD_Msk                                     (0x2UL)
#define SCU_PLL_CON_LOCK_Pos                                      (0UL)
#define SCU_PLL_CON_LOCK_Msk                                      (0x1UL)
#define SCU_PMCON0_SD_Pos                                         (3UL)
#define SCU_PMCON0_SD_Msk                                         (0x8UL)
#define SCU_PMCON0_PD_Pos                                         (2UL)
#define SCU_PMCON0_PD_Msk                                         (0x4UL)
#define SCU_PMCON0_SL_Pos                                         (1UL)
#define SCU_PMCON0_SL_Msk                                         (0x2UL)
#define SCU_PMCON0_XTAL_ON_Pos                                    (0UL)
#define SCU_PMCON0_XTAL_ON_Msk                                    (0x1UL)
#define SCU_PMCON1_GPT12_DIS_Pos                                  (4UL)
#define SCU_PMCON1_GPT12_DIS_Msk                                  (0x10UL)
#define SCU_PMCON1_T2_DIS_Pos                                     (3UL)
#define SCU_PMCON1_T2_DIS_Msk                                     (0x8UL)
#define SCU_PMCON1_CCU6_DIS_Pos                                   (2UL)
#define SCU_PMCON1_CCU6_DIS_Msk                                   (0x4UL)
#define SCU_PMCON1_SSC1_DIS_Pos                                   (1UL)
#define SCU_PMCON1_SSC1_DIS_Msk                                   (0x2UL)
#define SCU_PMCON1_ADC1_DIS_Pos                                   (0UL)
#define SCU_PMCON1_ADC1_DIS_Msk                                   (0x1UL)
#define SCU_PMCON2_T3_DIS_Pos                                     (5UL)
#define SCU_PMCON2_T3_DIS_Msk                                     (0x20UL)
#define SCU_PMCON2_T21_DIS_Pos                                    (3UL)
#define SCU_PMCON2_T21_DIS_Msk                                    (0x8UL)
#define SCU_PMCON2_SSC2_DIS_Pos                                   (1UL)
#define SCU_PMCON2_SSC2_DIS_Msk                                   (0x2UL)
#define SCU_RSTCON_LOCKUP_EN_Pos                                  (7UL)
#define SCU_RSTCON_LOCKUP_EN_Msk                                  (0x80UL)
#define SCU_RSTCON_LOCKUP_Pos                                     (0UL)
#define SCU_RSTCON_LOCKUP_Msk                                     (0x1UL)
#define SCU_SYS_STRTUP_STS_PG100TP_CHKS_ERR_Pos                   (2UL)
#define SCU_SYS_STRTUP_STS_PG100TP_CHKS_ERR_Msk                   (0x4UL)
#define SCU_SYS_STRTUP_STS_MRAMINITSTS_Pos                        (1UL)
#define SCU_SYS_STRTUP_STS_MRAMINITSTS_Msk                        (0x2UL)
#define SCU_SYS_STRTUP_STS_INIT_FAIL_Pos                          (0UL)
#define SCU_SYS_STRTUP_STS_INIT_FAIL_Msk                          (0x1UL)
#define SCU_SYSCON0_SYSCLKSEL_Pos                                 (6UL)
#define SCU_SYSCON0_SYSCLKSEL_Msk                                 (0xc0UL)
#define SCU_SYSCON0_NVMCLKFAC_Pos                                 (4UL)
#define SCU_SYSCON0_NVMCLKFAC_Msk                                 (0x30UL)
#define SCU_TCCR_TCC_Pos                                          (0UL)
#define SCU_TCCR_TCC_Msk                                          (0x3UL)
#define SCU_WDTCON_WINBEN_Pos                                     (5UL)
#define SCU_WDTCON_WINBEN_Msk                                     (0x20UL)
#define SCU_WDTCON_WDTPR_Pos                                      (4UL)
#define SCU_WDTCON_WDTPR_Msk                                      (0x10UL)
#define SCU_WDTCON_WDTEN_Pos                                      (2UL)
#define SCU_WDTCON_WDTEN_Msk                                      (0x4UL)
#define SCU_WDTCON_WDTRS_Pos                                      (1UL)
#define SCU_WDTCON_WDTRS_Msk                                      (0x2UL)
#define SCU_WDTCON_WDTIN_Pos                                      (0UL)
#define SCU_WDTCON_WDTIN_Msk                                      (0x1UL)
#define SCU_WDTH_WDT_Pos                                          (0UL)
#define SCU_WDTH_WDT_Msk                                          (0xffUL)
#define SCU_WDTL_WDT_Pos                                          (0UL)
#define SCU_WDTL_WDT_Msk                                          (0xffUL)
#define SCU_WDTREL_WDTREL_Pos                                     (0UL)
#define SCU_WDTREL_WDTREL_Msk                                     (0xffUL)
#define SCU_WDTWINB_WDTWINB_Pos                                   (0UL)
#define SCU_WDTWINB_WDTWINB_Msk                                   (0xffUL)
#define SCUPM_AMCLK_CTRL_CLKWDT_PD_N_Pos                          (0UL)
#define SCUPM_AMCLK_CTRL_CLKWDT_PD_N_Msk                          (0x1UL)
#define SCUPM_AMCLK_FREQ_STS_AMCLK2_FREQ_Pos                      (8UL)
#define SCUPM_AMCLK_FREQ_STS_AMCLK2_FREQ_Msk                      (0x3f00UL)
#define SCUPM_AMCLK_FREQ_STS_AMCLK1_FREQ_Pos                      (0UL)
#define SCUPM_AMCLK_FREQ_STS_AMCLK1_FREQ_Msk                      (0x3fUL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_LOW_HYS_Pos                     (30UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_LOW_HYS_Msk                     (0xc0000000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_LOW_TH_Pos                      (24UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_LOW_TH_Msk                      (0x3f000000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_UP_HYS_Pos                      (22UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_UP_HYS_Msk                      (0xc00000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_UP_TH_Pos                       (16UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK2_UP_TH_Msk                       (0x3f0000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_LOW_HYS_Pos                     (14UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_LOW_HYS_Msk                     (0xc000UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_LOW_TH_Pos                      (8UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_LOW_TH_Msk                      (0x3f00UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_UP_HYS_Pos                      (6UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_UP_HYS_Msk                      (0xc0UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_UP_TH_Pos                       (0UL)
#define SCUPM_AMCLK_TH_HYS_AMCLK1_UP_TH_Msk                       (0x3fUL)
#define SCUPM_BDRV_IRQ_CTRL_VSD_UPTH_IE_Pos                       (20UL)
#define SCUPM_BDRV_IRQ_CTRL_VSD_UPTH_IE_Msk                       (0x100000UL)
#define SCUPM_BDRV_IRQ_CTRL_VSD_LOWTH_IE_Pos                      (19UL)
#define SCUPM_BDRV_IRQ_CTRL_VSD_LOWTH_IE_Msk                      (0x80000UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_UPTH_IE_Pos                       (18UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_UPTH_IE_Msk                       (0x40000UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_LOWTH1_IE_Pos                     (17UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_LOWTH1_IE_Msk                     (0x20000UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_LOWTH2_IE_Pos                     (16UL)
#define SCUPM_BDRV_IRQ_CTRL_VCP_LOWTH2_IE_Msk                     (0x10000UL)
#define SCUPM_BDRV_IRQ_CTRL_HS3_OC_IE_Pos                         (15UL)
#define SCUPM_BDRV_IRQ_CTRL_HS3_OC_IE_Msk                         (0x8000UL)
#define SCUPM_BDRV_IRQ_CTRL_LS3_OC_IE_Pos                         (14UL)
#define SCUPM_BDRV_IRQ_CTRL_LS3_OC_IE_Msk                         (0x4000UL)
#define SCUPM_BDRV_IRQ_CTRL_HS2_OC_IE_Pos                         (13UL)
#define SCUPM_BDRV_IRQ_CTRL_HS2_OC_IE_Msk                         (0x2000UL)
#define SCUPM_BDRV_IRQ_CTRL_HS1_OC_IE_Pos                         (12UL)
#define SCUPM_BDRV_IRQ_CTRL_HS1_OC_IE_Msk                         (0x1000UL)
#define SCUPM_BDRV_IRQ_CTRL_LS2_OC_IE_Pos                         (11UL)
#define SCUPM_BDRV_IRQ_CTRL_LS2_OC_IE_Msk                         (0x800UL)
#define SCUPM_BDRV_IRQ_CTRL_LS1_OC_IE_Pos                         (10UL)
#define SCUPM_BDRV_IRQ_CTRL_LS1_OC_IE_Msk                         (0x400UL)
#define SCUPM_BDRV_IRQ_CTRL_HS3_DS_IE_Pos                         (5UL)
#define SCUPM_BDRV_IRQ_CTRL_HS3_DS_IE_Msk                         (0x20UL)
#define SCUPM_BDRV_IRQ_CTRL_LS3_DS_IE_Pos                         (4UL)
#define SCUPM_BDRV_IRQ_CTRL_LS3_DS_IE_Msk                         (0x10UL)
#define SCUPM_BDRV_IRQ_CTRL_HS2_DS_IE_Pos                         (3UL)
#define SCUPM_BDRV_IRQ_CTRL_HS2_DS_IE_Msk                         (0x8UL)
#define SCUPM_BDRV_IRQ_CTRL_HS1_DS_IE_Pos                         (2UL)
#define SCUPM_BDRV_IRQ_CTRL_HS1_DS_IE_Msk                         (0x4UL)
#define SCUPM_BDRV_IRQ_CTRL_LS2_DS_IE_Pos                         (1UL)
#define SCUPM_BDRV_IRQ_CTRL_LS2_DS_IE_Msk                         (0x2UL)
#define SCUPM_BDRV_IRQ_CTRL_LS1_DS_IE_Pos                         (0UL)
#define SCUPM_BDRV_IRQ_CTRL_LS1_DS_IE_Msk                         (0x1UL)
#define SCUPM_BDRV_IS_VSD_UPTH_STS_Pos                            (28UL)
#define SCUPM_BDRV_IS_VSD_UPTH_STS_Msk                            (0x10000000UL)
#define SCUPM_BDRV_IS_VSD_LOWTH_STS_Pos                           (27UL)
#define SCUPM_BDRV_IS_VSD_LOWTH_STS_Msk                           (0x8000000UL)
#define SCUPM_BDRV_IS_VCP_UPTH_STS_Pos                            (26UL)
#define SCUPM_BDRV_IS_VCP_UPTH_STS_Msk                            (0x4000000UL)
#define SCUPM_BDRV_IS_VCP_LOWTH1_STS_Pos                          (25UL)
#define SCUPM_BDRV_IS_VCP_LOWTH1_STS_Msk                          (0x2000000UL)
#define SCUPM_BDRV_IS_VCP_LOWTH2_STS_Pos                          (24UL)
#define SCUPM_BDRV_IS_VCP_LOWTH2_STS_Msk                          (0x1000000UL)
#define SCUPM_BDRV_IS_VSD_UPTH_IS_Pos                             (20UL)
#define SCUPM_BDRV_IS_VSD_UPTH_IS_Msk                             (0x100000UL)
#define SCUPM_BDRV_IS_VSD_LOWTH_IS_Pos                            (19UL)
#define SCUPM_BDRV_IS_VSD_LOWTH_IS_Msk                            (0x80000UL)
#define SCUPM_BDRV_IS_VCP_UPTH_IS_Pos                             (18UL)
#define SCUPM_BDRV_IS_VCP_UPTH_IS_Msk                             (0x40000UL)
#define SCUPM_BDRV_IS_VCP_LOWTH1_IS_Pos                           (17UL)
#define SCUPM_BDRV_IS_VCP_LOWTH1_IS_Msk                           (0x20000UL)
#define SCUPM_BDRV_IS_VCP_LOWTH2_IS_Pos                           (16UL)
#define SCUPM_BDRV_IS_VCP_LOWTH2_IS_Msk                           (0x10000UL)
#define SCUPM_BDRV_IS_HS3_OC_IS_Pos                               (15UL)
#define SCUPM_BDRV_IS_HS3_OC_IS_Msk                               (0x8000UL)
#define SCUPM_BDRV_IS_LS3_OC_IS_Pos                               (14UL)
#define SCUPM_BDRV_IS_LS3_OC_IS_Msk                               (0x4000UL)
#define SCUPM_BDRV_IS_HS2_OC_IS_Pos                               (13UL)
#define SCUPM_BDRV_IS_HS2_OC_IS_Msk                               (0x2000UL)
#define SCUPM_BDRV_IS_HS1_OC_IS_Pos                               (12UL)
#define SCUPM_BDRV_IS_HS1_OC_IS_Msk                               (0x1000UL)
#define SCUPM_BDRV_IS_LS2_OC_IS_Pos                               (11UL)
#define SCUPM_BDRV_IS_LS2_OC_IS_Msk                               (0x800UL)
#define SCUPM_BDRV_IS_LS1_OC_IS_Pos                               (10UL)
#define SCUPM_BDRV_IS_LS1_OC_IS_Msk                               (0x400UL)
#define SCUPM_BDRV_IS_HS3_DS_IS_Pos                               (5UL)
#define SCUPM_BDRV_IS_HS3_DS_IS_Msk                               (0x20UL)
#define SCUPM_BDRV_IS_LS3_DS_IS_Pos                               (4UL)
#define SCUPM_BDRV_IS_LS3_DS_IS_Msk                               (0x10UL)
#define SCUPM_BDRV_IS_HS2_DS_IS_Pos                               (3UL)
#define SCUPM_BDRV_IS_HS2_DS_IS_Msk                               (0x8UL)
#define SCUPM_BDRV_IS_HS1_DS_IS_Pos                               (2UL)
#define SCUPM_BDRV_IS_HS1_DS_IS_Msk                               (0x4UL)
#define SCUPM_BDRV_IS_LS2_DS_IS_Pos                               (1UL)
#define SCUPM_BDRV_IS_LS2_DS_IS_Msk                               (0x2UL)
#define SCUPM_BDRV_IS_LS1_DS_IS_Pos                               (0UL)
#define SCUPM_BDRV_IS_LS1_DS_IS_Msk                               (0x1UL)
#define SCUPM_BDRV_ISCLR_VSD_UPTH_SCLR_Pos                        (28UL)
#define SCUPM_BDRV_ISCLR_VSD_UPTH_SCLR_Msk                        (0x10000000UL)
#define SCUPM_BDRV_ISCLR_VSD_LOWTH_SCLR_Pos                       (27UL)
#define SCUPM_BDRV_ISCLR_VSD_LOWTH_SCLR_Msk                       (0x8000000UL)
#define SCUPM_BDRV_ISCLR_VCP_UPTH_SCLR_Pos                        (26UL)
#define SCUPM_BDRV_ISCLR_VCP_UPTH_SCLR_Msk                        (0x4000000UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH1_SCLR_Pos                      (25UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH1_SCLR_Msk                      (0x2000000UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH2_SCLR_Pos                      (24UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH2_SCLR_Msk                      (0x1000000UL)
#define SCUPM_BDRV_ISCLR_VSD_UPTH_ICLR_Pos                        (20UL)
#define SCUPM_BDRV_ISCLR_VSD_UPTH_ICLR_Msk                        (0x100000UL)
#define SCUPM_BDRV_ISCLR_VSD_LOWTH_ICLR_Pos                       (19UL)
#define SCUPM_BDRV_ISCLR_VSD_LOWTH_ICLR_Msk                       (0x80000UL)
#define SCUPM_BDRV_ISCLR_VCP_UPTH_ICLR_Pos                        (18UL)
#define SCUPM_BDRV_ISCLR_VCP_UPTH_ICLR_Msk                        (0x40000UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH1_ICLR_Pos                      (17UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH1_ICLR_Msk                      (0x20000UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH2_ICLR_Pos                      (16UL)
#define SCUPM_BDRV_ISCLR_VCP_LOWTH2_ICLR_Msk                      (0x10000UL)
#define SCUPM_BDRV_ISCLR_HS3_OC_ICLR_Pos                          (15UL)
#define SCUPM_BDRV_ISCLR_HS3_OC_ICLR_Msk                          (0x8000UL)
#define SCUPM_BDRV_ISCLR_LS3_OC_ICLR_Pos                          (14UL)
#define SCUPM_BDRV_ISCLR_LS3_OC_ICLR_Msk                          (0x4000UL)
#define SCUPM_BDRV_ISCLR_HS2_OC_ICLR_Pos                          (13UL)
#define SCUPM_BDRV_ISCLR_HS2_OC_ICLR_Msk                          (0x2000UL)
#define SCUPM_BDRV_ISCLR_HS1_OC_ICLR_Pos                          (12UL)
#define SCUPM_BDRV_ISCLR_HS1_OC_ICLR_Msk                          (0x1000UL)
#define SCUPM_BDRV_ISCLR_LS2_OC_ICLR_Pos                          (11UL)
#define SCUPM_BDRV_ISCLR_LS2_OC_ICLR_Msk                          (0x800UL)
#define SCUPM_BDRV_ISCLR_LS1_OC_ICLR_Pos                          (10UL)
#define SCUPM_BDRV_ISCLR_LS1_OC_ICLR_Msk                          (0x400UL)
#define SCUPM_BDRV_ISCLR_HS3_DS_ICLR_Pos                          (5UL)
#define SCUPM_BDRV_ISCLR_HS3_DS_ICLR_Msk                          (0x20UL)
#define SCUPM_BDRV_ISCLR_LS3_DS_ICLR_Pos                          (4UL)
#define SCUPM_BDRV_ISCLR_LS3_DS_ICLR_Msk                          (0x10UL)
#define SCUPM_BDRV_ISCLR_HS2_DS_ICLR_Pos                          (3UL)
#define SCUPM_BDRV_ISCLR_HS2_DS_ICLR_Msk                          (0x8UL)
#define SCUPM_BDRV_ISCLR_HS1_DS_ICLR_Pos                          (2UL)
#define SCUPM_BDRV_ISCLR_HS1_DS_ICLR_Msk                          (0x4UL)
#define SCUPM_BDRV_ISCLR_LS2_DS_ICLR_Pos                          (1UL)
#define SCUPM_BDRV_ISCLR_LS2_DS_ICLR_Msk                          (0x2UL)
#define SCUPM_BDRV_ISCLR_LS1_DS_ICLR_Pos                          (0UL)
#define SCUPM_BDRV_ISCLR_LS1_DS_ICLR_Msk                          (0x1UL)
#define SCUPM_BFSTS_SBFSTS_Pos                                    (1UL)
#define SCUPM_BFSTS_SBFSTS_Msk                                    (0x2UL)
#define SCUPM_BFSTS_DBFSTS_Pos                                    (0UL)
#define SCUPM_BFSTS_DBFSTS_Msk                                    (0x1UL)
#define SCUPM_BFSTS_CLR_SBFSTSCLR_Pos                             (1UL)
#define SCUPM_BFSTS_CLR_SBFSTSCLR_Msk                             (0x2UL)
#define SCUPM_BFSTS_CLR_DBFSTSCLR_Pos                             (0UL)
#define SCUPM_BFSTS_CLR_DBFSTSCLR_Msk                             (0x1UL)
#define SCUPM_DBFA_DBFA_Pos                                       (0UL)
#define SCUPM_DBFA_DBFA_Msk                                       (0xffffffffUL)
#define SCUPM_PCU_CTRL_STS_CLKWDT_RES_SD_DIS_Pos                  (26UL)
#define SCUPM_PCU_CTRL_STS_CLKWDT_RES_SD_DIS_Msk                  (0x4000000UL)
#define SCUPM_PCU_CTRL_STS_CLKLOSS_SD_DIS_Pos                     (25UL)
#define SCUPM_PCU_CTRL_STS_CLKLOSS_SD_DIS_Msk                     (0x2000000UL)
#define SCUPM_PCU_CTRL_STS_SYS_OT_PS_DIS_Pos                      (24UL)
#define SCUPM_PCU_CTRL_STS_SYS_OT_PS_DIS_Msk                      (0x1000000UL)
#define SCUPM_PCU_CTRL_STS_SYS_VSD_OV_SLM_DIS_Pos                 (14UL)
#define SCUPM_PCU_CTRL_STS_SYS_VSD_OV_SLM_DIS_Msk                 (0x4000UL)
#define SCUPM_PCU_CTRL_STS_LIN_VS_UV_SD_DIS_Pos                   (8UL)
#define SCUPM_PCU_CTRL_STS_LIN_VS_UV_SD_DIS_Msk                   (0x100UL)
#define SCUPM_PCU_CTRL_STS_FAIL_PS_DIS_Pos                        (7UL)
#define SCUPM_PCU_CTRL_STS_FAIL_PS_DIS_Msk                        (0x80UL)
#define SCUPM_PCU_CTRL_STS_CLKWDT_SD_DIS_Pos                      (1UL)
#define SCUPM_PCU_CTRL_STS_CLKWDT_SD_DIS_Msk                      (0x2UL)
#define SCUPM_SBFA_SBFA_Pos                                       (0UL)
#define SCUPM_SBFA_SBFA_Msk                                       (0xffffffffUL)
#define SCUPM_STCALIB_STCALIB_Pos                                 (0UL)
#define SCUPM_STCALIB_STCALIB_Msk                                 (0x3ffffffUL)
#define SCUPM_SYS_IRQ_CTRL_ADC4_EOC_IE_Pos                        (23UL)
#define SCUPM_SYS_IRQ_CTRL_ADC4_EOC_IE_Msk                        (0x800000UL)
#define SCUPM_SYS_IRQ_CTRL_ADC3_EOC_IE_Pos                        (22UL)
#define SCUPM_SYS_IRQ_CTRL_ADC3_EOC_IE_Msk                        (0x400000UL)
#define SCUPM_SYS_IRQ_CTRL_PHW_ZCHI_IE_Pos                        (21UL)
#define SCUPM_SYS_IRQ_CTRL_PHW_ZCHI_IE_Msk                        (0x200000UL)
#define SCUPM_SYS_IRQ_CTRL_PHW_ZCLOW_IE_Pos                       (20UL)
#define SCUPM_SYS_IRQ_CTRL_PHW_ZCLOW_IE_Msk                       (0x100000UL)
#define SCUPM_SYS_IRQ_CTRL_PHV_ZCHI_IE_Pos                        (19UL)
#define SCUPM_SYS_IRQ_CTRL_PHV_ZCHI_IE_Msk                        (0x80000UL)
#define SCUPM_SYS_IRQ_CTRL_PHV_ZCLOW_IE_Pos                       (18UL)
#define SCUPM_SYS_IRQ_CTRL_PHV_ZCLOW_IE_Msk                       (0x40000UL)
#define SCUPM_SYS_IRQ_CTRL_PHU_ZCHI_IE_Pos                        (17UL)
#define SCUPM_SYS_IRQ_CTRL_PHU_ZCHI_IE_Msk                        (0x20000UL)
#define SCUPM_SYS_IRQ_CTRL_PHU_ZCLOW_IE_Pos                       (16UL)
#define SCUPM_SYS_IRQ_CTRL_PHU_ZCLOW_IE_Msk                       (0x10000UL)
#define SCUPM_SYS_IRQ_CTRL_ADC2_ESM_IE_Pos                        (15UL)
#define SCUPM_SYS_IRQ_CTRL_ADC2_ESM_IE_Msk                        (0x8000UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_OVL_IE_Pos                      (14UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_OVL_IE_Msk                      (0x4000UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_UPTH_IE_Pos                     (13UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_UPTH_IE_Msk                     (0x2000UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_LOWTH_IE_Pos                    (12UL)
#define SCUPM_SYS_IRQ_CTRL_VREF5V_LOWTH_IE_Msk                    (0x1000UL)
#define SCUPM_SYS_IRQ_CTRL_REFBG_UPTHWARN_IE_Pos                  (11UL)
#define SCUPM_SYS_IRQ_CTRL_REFBG_UPTHWARN_IE_Msk                  (0x800UL)
#define SCUPM_SYS_IRQ_CTRL_REFBG_LOTHWARN_IE_Pos                  (10UL)
#define SCUPM_SYS_IRQ_CTRL_REFBG_LOTHWARN_IE_Msk                  (0x400UL)
#define SCUPM_SYS_IRQ_CTRL_SYS_OT_IE_Pos                          (9UL)
#define SCUPM_SYS_IRQ_CTRL_SYS_OT_IE_Msk                          (0x200UL)
#define SCUPM_SYS_IRQ_CTRL_SYS_OTWARN_IE_Pos                      (8UL)
#define SCUPM_SYS_IRQ_CTRL_SYS_OTWARN_IE_Msk                      (0x100UL)
#define SCUPM_SYS_IRQ_CTRL_PMU_OT_IE_Pos                          (7UL)
#define SCUPM_SYS_IRQ_CTRL_PMU_OT_IE_Msk                          (0x80UL)
#define SCUPM_SYS_IRQ_CTRL_PMU_OTWARN_IE_Pos                      (6UL)
#define SCUPM_SYS_IRQ_CTRL_PMU_OTWARN_IE_Msk                      (0x40UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_TMOUT_IE_Pos                       (2UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_TMOUT_IE_Msk                       (0x4UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_OT_IE_Pos                          (1UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_OT_IE_Msk                          (0x2UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_OC_IE_Pos                          (0UL)
#define SCUPM_SYS_IRQ_CTRL_LIN_OC_IE_Msk                          (0x1UL)
#define SCUPM_SYS_IS_PHW_ZCHI_STS_Pos                             (29UL)
#define SCUPM_SYS_IS_PHW_ZCHI_STS_Msk                             (0x20000000UL)
#define SCUPM_SYS_IS_PHW_ZCLOW_STS_Pos                            (28UL)
#define SCUPM_SYS_IS_PHW_ZCLOW_STS_Msk                            (0x10000000UL)
#define SCUPM_SYS_IS_PHV_ZCHI_STS_Pos                             (27UL)
#define SCUPM_SYS_IS_PHV_ZCHI_STS_Msk                             (0x8000000UL)
#define SCUPM_SYS_IS_PHV_ZCLOW_STS_Pos                            (26UL)
#define SCUPM_SYS_IS_PHV_ZCLOW_STS_Msk                            (0x4000000UL)
#define SCUPM_SYS_IS_PHU_ZCHI_STS_Pos                             (25UL)
#define SCUPM_SYS_IS_PHU_ZCHI_STS_Msk                             (0x2000000UL)
#define SCUPM_SYS_IS_PHU_ZCLOW_STS_Pos                            (24UL)
#define SCUPM_SYS_IS_PHU_ZCLOW_STS_Msk                            (0x1000000UL)
#define SCUPM_SYS_IS_ADC4_EOC_IS_Pos                              (23UL)
#define SCUPM_SYS_IS_ADC4_EOC_IS_Msk                              (0x800000UL)
#define SCUPM_SYS_IS_ADC3_EOC_IS_Pos                              (22UL)
#define SCUPM_SYS_IS_ADC3_EOC_IS_Msk                              (0x400000UL)
#define SCUPM_SYS_IS_PHW_ZCHI_IS_Pos                              (21UL)
#define SCUPM_SYS_IS_PHW_ZCHI_IS_Msk                              (0x200000UL)
#define SCUPM_SYS_IS_PHW_ZCLOW_IS_Pos                             (20UL)
#define SCUPM_SYS_IS_PHW_ZCLOW_IS_Msk                             (0x100000UL)
#define SCUPM_SYS_IS_PHV_ZCHI_IS_Pos                              (19UL)
#define SCUPM_SYS_IS_PHV_ZCHI_IS_Msk                              (0x80000UL)
#define SCUPM_SYS_IS_PHV_ZCLOW_IS_Pos                             (18UL)
#define SCUPM_SYS_IS_PHV_ZCLOW_IS_Msk                             (0x40000UL)
#define SCUPM_SYS_IS_PHU_ZCHI_IS_Pos                              (17UL)
#define SCUPM_SYS_IS_PHU_ZCHI_IS_Msk                              (0x20000UL)
#define SCUPM_SYS_IS_PHU_ZCLOW_IS_Pos                             (16UL)
#define SCUPM_SYS_IS_PHU_ZCLOW_IS_Msk                             (0x10000UL)
#define SCUPM_SYS_IS_ADC2_ESM_IS_Pos                              (15UL)
#define SCUPM_SYS_IS_ADC2_ESM_IS_Msk                              (0x8000UL)
#define SCUPM_SYS_IS_VREF5V_OVL_IS_Pos                            (14UL)
#define SCUPM_SYS_IS_VREF5V_OVL_IS_Msk                            (0x4000UL)
#define SCUPM_SYS_IS_VREF5V_UPTH_IS_Pos                           (13UL)
#define SCUPM_SYS_IS_VREF5V_UPTH_IS_Msk                           (0x2000UL)
#define SCUPM_SYS_IS_VREF5V_LOWTH_IS_Pos                          (12UL)
#define SCUPM_SYS_IS_VREF5V_LOWTH_IS_Msk                          (0x1000UL)
#define SCUPM_SYS_IS_REFBG_UPTHWARN_IS_Pos                        (11UL)
#define SCUPM_SYS_IS_REFBG_UPTHWARN_IS_Msk                        (0x800UL)
#define SCUPM_SYS_IS_REFBG_LOTHWARN_IS_Pos                        (10UL)
#define SCUPM_SYS_IS_REFBG_LOTHWARN_IS_Msk                        (0x400UL)
#define SCUPM_SYS_IS_SYS_OT_IS_Pos                                (9UL)
#define SCUPM_SYS_IS_SYS_OT_IS_Msk                                (0x200UL)
#define SCUPM_SYS_IS_SYS_OTWARN_IS_Pos                            (8UL)
#define SCUPM_SYS_IS_SYS_OTWARN_IS_Msk                            (0x100UL)
#define SCUPM_SYS_IS_PMU_OT_IS_Pos                                (7UL)
#define SCUPM_SYS_IS_PMU_OT_IS_Msk                                (0x80UL)
#define SCUPM_SYS_IS_PMU_OTWARN_IS_Pos                            (6UL)
#define SCUPM_SYS_IS_PMU_OTWARN_IS_Msk                            (0x40UL)
#define SCUPM_SYS_IS_LIN_TMOUT_IS_Pos                             (2UL)
#define SCUPM_SYS_IS_LIN_TMOUT_IS_Msk                             (0x4UL)
#define SCUPM_SYS_IS_LIN_OT_IS_Pos                                (1UL)
#define SCUPM_SYS_IS_LIN_OT_IS_Msk                                (0x2UL)
#define SCUPM_SYS_IS_LIN_OC_IS_Pos                                (0UL)
#define SCUPM_SYS_IS_LIN_OC_IS_Msk                                (0x1UL)
#define SCUPM_SYS_ISCLR_PHW_ZCHI_SCLR_Pos                         (29UL)
#define SCUPM_SYS_ISCLR_PHW_ZCHI_SCLR_Msk                         (0x20000000UL)
#define SCUPM_SYS_ISCLR_PHW_ZCLOW_SCLR_Pos                        (28UL)
#define SCUPM_SYS_ISCLR_PHW_ZCLOW_SCLR_Msk                        (0x10000000UL)
#define SCUPM_SYS_ISCLR_PHV_ZCHI_SCLR_Pos                         (27UL)
#define SCUPM_SYS_ISCLR_PHV_ZCHI_SCLR_Msk                         (0x8000000UL)
#define SCUPM_SYS_ISCLR_PHV_ZCLOW_SCLR_Pos                        (26UL)
#define SCUPM_SYS_ISCLR_PHV_ZCLOW_SCLR_Msk                        (0x4000000UL)
#define SCUPM_SYS_ISCLR_PHU_ZCHI_SCLR_Pos                         (25UL)
#define SCUPM_SYS_ISCLR_PHU_ZCHI_SCLR_Msk                         (0x2000000UL)
#define SCUPM_SYS_ISCLR_PHU_ZCLOW_SCLR_Pos                        (24UL)
#define SCUPM_SYS_ISCLR_PHU_ZCLOW_SCLR_Msk                        (0x1000000UL)
#define SCUPM_SYS_ISCLR_ADC4_EOC_ICLR_Pos                         (23UL)
#define SCUPM_SYS_ISCLR_ADC4_EOC_ICLR_Msk                         (0x800000UL)
#define SCUPM_SYS_ISCLR_ADC3_EOC_ICLR_Pos                         (22UL)
#define SCUPM_SYS_ISCLR_ADC3_EOC_ICLR_Msk                         (0x400000UL)
#define SCUPM_SYS_ISCLR_PHW_ZCHI_ICLR_Pos                         (21UL)
#define SCUPM_SYS_ISCLR_PHW_ZCHI_ICLR_Msk                         (0x200000UL)
#define SCUPM_SYS_ISCLR_PHW_ZCLOW_ICLR_Pos                        (20UL)
#define SCUPM_SYS_ISCLR_PHW_ZCLOW_ICLR_Msk                        (0x100000UL)
#define SCUPM_SYS_ISCLR_PHV_ZCHI_ICLR_Pos                         (19UL)
#define SCUPM_SYS_ISCLR_PHV_ZCHI_ICLR_Msk                         (0x80000UL)
#define SCUPM_SYS_ISCLR_PHV_ZCLOW_ICLR_Pos                        (18UL)
#define SCUPM_SYS_ISCLR_PHV_ZCLOW_ICLR_Msk                        (0x40000UL)
#define SCUPM_SYS_ISCLR_PHU_ZCHI_ICLR_Pos                         (17UL)
#define SCUPM_SYS_ISCLR_PHU_ZCHI_ICLR_Msk                         (0x20000UL)
#define SCUPM_SYS_ISCLR_PHU_ZCLOW_ICLR_Pos                        (16UL)
#define SCUPM_SYS_ISCLR_PHU_ZCLOW_ICLR_Msk                        (0x10000UL)
#define SCUPM_SYS_ISCLR_ADC2_ESM_ICLR_Pos                         (15UL)
#define SCUPM_SYS_ISCLR_ADC2_ESM_ICLR_Msk                         (0x8000UL)
#define SCUPM_SYS_ISCLR_VREF5V_OVL_ICLR_Pos                       (14UL)
#define SCUPM_SYS_ISCLR_VREF5V_OVL_ICLR_Msk                       (0x4000UL)
#define SCUPM_SYS_ISCLR_VREF5V_UPTH_ICLR_Pos                      (13UL)
#define SCUPM_SYS_ISCLR_VREF5V_UPTH_ICLR_Msk                      (0x2000UL)
#define SCUPM_SYS_ISCLR_VREF5V_LOWTH_ICLR_Pos                     (12UL)
#define SCUPM_SYS_ISCLR_VREF5V_LOWTH_ICLR_Msk                     (0x1000UL)
#define SCUPM_SYS_ISCLR_REFBG_UPTHWARN_ICLR_Pos                   (11UL)
#define SCUPM_SYS_ISCLR_REFBG_UPTHWARN_ICLR_Msk                   (0x800UL)
#define SCUPM_SYS_ISCLR_REFBG_LOTHWARN_ICLR_Pos                   (10UL)
#define SCUPM_SYS_ISCLR_REFBG_LOTHWARN_ICLR_Msk                   (0x400UL)
#define SCUPM_SYS_ISCLR_SYS_OT_ICLR_Pos                           (9UL)
#define SCUPM_SYS_ISCLR_SYS_OT_ICLR_Msk                           (0x200UL)
#define SCUPM_SYS_ISCLR_SYS_OTWARN_ICLR_Pos                       (8UL)
#define SCUPM_SYS_ISCLR_SYS_OTWARN_ICLR_Msk                       (0x100UL)
#define SCUPM_SYS_ISCLR_PMU_OT_ICLR_Pos                           (7UL)
#define SCUPM_SYS_ISCLR_PMU_OT_ICLR_Msk                           (0x80UL)
#define SCUPM_SYS_ISCLR_PMU_OTWARN_ICLR_Pos                       (6UL)
#define SCUPM_SYS_ISCLR_PMU_OTWARN_ICLR_Msk                       (0x40UL)
#define SCUPM_SYS_ISCLR_LIN_TMOUT_ICLR_Pos                        (2UL)
#define SCUPM_SYS_ISCLR_LIN_TMOUT_ICLR_Msk                        (0x4UL)
#define SCUPM_SYS_ISCLR_LIN_OT_ICLR_Pos                           (1UL)
#define SCUPM_SYS_ISCLR_LIN_OT_ICLR_Msk                           (0x2UL)
#define SCUPM_SYS_ISCLR_LIN_OC_ICLR_Pos                           (0UL)
#define SCUPM_SYS_ISCLR_LIN_OC_ICLR_Msk                           (0x1UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_OV_SCLR_Pos               (23UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_OV_SCLR_Msk               (0x800000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_OV_SCLR_Pos                (22UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_OV_SCLR_Msk                (0x400000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_OV_SCLR_Pos                   (21UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_OV_SCLR_Msk                   (0x200000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_OV_SCLR_Pos                  (20UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_OV_SCLR_Msk                  (0x100000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_UV_SCLR_Pos               (19UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_UV_SCLR_Msk               (0x80000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_UV_SCLR_Pos                (18UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_UV_SCLR_Msk                (0x40000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_UV_SCLR_Pos                   (17UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_UV_SCLR_Msk                   (0x20000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_UV_SCLR_Pos                  (16UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_UV_SCLR_Msk                  (0x10000UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_OV_ICLR_Pos               (7UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_OV_ICLR_Msk               (0x80UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_OV_ICLR_Pos                (6UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_OV_ICLR_Msk                (0x40UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_OV_ICLR_Pos                   (5UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_OV_ICLR_Msk                   (0x20UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_OV_ICLR_Pos                  (4UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_OV_ICLR_Msk                  (0x10UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_UV_ICLR_Pos               (3UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD1V5_UV_ICLR_Msk               (0x8UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_UV_ICLR_Pos                (2UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VDD5V_UV_ICLR_Msk                (0x4UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_UV_ICLR_Pos                   (1UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_VS_UV_ICLR_Msk                   (0x2UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_UV_ICLR_Pos                  (0UL)
#define SCUPM_SYS_SUPPLY_IRQ_CLR_MON_UV_ICLR_Msk                  (0x1UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD1V5_OV_IE_Pos                (7UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD1V5_OV_IE_Msk                (0x80UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD5V_OV_IE_Pos                 (6UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD5V_OV_IE_Msk                 (0x40UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VS_OV_IE_Pos                    (5UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VS_OV_IE_Msk                    (0x20UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_MON_OV_IE_Pos                   (4UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_MON_OV_IE_Msk                   (0x10UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD1V5_UV_IE_Pos                (3UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD1V5_UV_IE_Msk                (0x8UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD5V_UV_IE_Pos                 (2UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VDD5V_UV_IE_Msk                 (0x4UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VS_UV_IE_Pos                    (1UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_VS_UV_IE_Msk                    (0x2UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_MON_UV_IE_Pos                   (0UL)
#define SCUPM_SYS_SUPPLY_IRQ_CTRL_MON_UV_IE_Msk                   (0x1UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_OV_STS_Pos                (23UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_OV_STS_Msk                (0x800000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_OV_STS_Pos                 (22UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_OV_STS_Msk                 (0x400000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_OV_STS_Pos                    (21UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_OV_STS_Msk                    (0x200000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_OV_STS_Pos                   (20UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_OV_STS_Msk                   (0x100000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_UV_STS_Pos                (19UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_UV_STS_Msk                (0x80000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_UV_STS_Pos                 (18UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_UV_STS_Msk                 (0x40000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_UV_STS_Pos                    (17UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_UV_STS_Msk                    (0x20000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_UV_STS_Pos                   (16UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_UV_STS_Msk                   (0x10000UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_OV_IS_Pos                 (7UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_OV_IS_Msk                 (0x80UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_OV_IS_Pos                  (6UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_OV_IS_Msk                  (0x40UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_OV_IS_Pos                     (5UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_OV_IS_Msk                     (0x20UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_OV_IS_Pos                    (4UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_OV_IS_Msk                    (0x10UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_UV_IS_Pos                 (3UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD1V5_UV_IS_Msk                 (0x8UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_UV_IS_Pos                  (2UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VDD5V_UV_IS_Msk                  (0x4UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_UV_IS_Pos                     (1UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_VS_UV_IS_Msk                     (0x2UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_UV_IS_Pos                    (0UL)
#define SCUPM_SYS_SUPPLY_IRQ_STS_MON_UV_IS_Msk                    (0x1UL)
#define SCUPM_WDT1_TRIG_SOWCONF_Pos                               (6UL)
#define SCUPM_WDT1_TRIG_SOWCONF_Msk                               (0xc0UL)
#define SCUPM_WDT1_TRIG_WDP_SEL_Pos                               (0UL)
#define SCUPM_WDT1_TRIG_WDP_SEL_Msk                               (0x3fUL)

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
      __OM  uint8_t NMIWDTC     : 1;
      __OM  uint8_t NMIPLLC     : 1;
      __OM  uint8_t NMINVMC     : 1;
      __OM  uint8_t NMIOTC      : 1;
      __OM  uint8_t NMIOWDC     : 1;
      __OM  uint8_t NMIMAPC     : 1;
      __OM  uint8_t NMIECCC     : 1;
      __OM  uint8_t NMISUPC     : 1;
    }bit;
  }NMICLR;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t EXINT0R     : 1;
      __IM  uint8_t EXINT0F     : 1;
      __IM  uint8_t EXINT1R     : 1;
      __IM  uint8_t EXINT1F     : 1;
      __IM  uint8_t EXINT2R     : 1;
      __IM  uint8_t EXINT2F     : 1;
      __IM  uint8_t MONR        : 1;
      __IM  uint8_t MONF        : 1;
    }bit;
  }IRCON0;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t EIR         : 1;
      __IM  uint8_t TIR         : 1;
      __IM  uint8_t RIR         : 1;
    }bit;
  }IRCON1;
  __IM  uint8_t   RESERVED2[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t EIR         : 1;
      __IM  uint8_t TIR         : 1;
      __IM  uint8_t RIR         : 1;
    }bit;
  }IRCON2;
  __IM  uint8_t   RESERVED3[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t CCU6SR0     : 1;
      __IM  uint8_t             : 3;
      __IM  uint8_t CCU6SR1     : 1;
    }bit;
  }IRCON3;
  __IM  uint8_t   RESERVED4[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t CCU6SR2     : 1;
      __IM  uint8_t             : 3;
      __IM  uint8_t CCU6SR3     : 1;
    }bit;
  }IRCON4;
  __IM  uint8_t   RESERVED5[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t FNMIWDT     : 1;
      __IM  uint8_t FNMIPLL     : 1;
      __IM  uint8_t FNMINVM     : 1;
      __IM  uint8_t FNMIOT      : 1;
      __IM  uint8_t FNMIOWD     : 1;
      __IM  uint8_t FNMIMAP     : 1;
      __IM  uint8_t FNMIECC     : 1;
      __IM  uint8_t FNMISUP     : 1;
    }bit;
  }NMISR;
  __IM  uint8_t   RESERVED6[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 7;
      __IOM uint8_t EA          : 1;
    }bit;
  }IEN0;
  __IM  uint8_t   RESERVED7[7];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t NMIWDT      : 1;
      __IOM uint8_t NMIPLL      : 1;
      __IOM uint8_t NMINVM      : 1;
      __IOM uint8_t NMIOT       : 1;
      __IOM uint8_t NMIOWD      : 1;
      __IOM uint8_t NMIMAP      : 1;
      __IOM uint8_t NMIECC      : 1;
      __IOM uint8_t NMISUP      : 1;
    }bit;
  }NMICON;
  __IM  uint8_t   RESERVED8[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EXINT0      : 2;
      __IOM uint8_t EXINT1      : 2;
      __IOM uint8_t EXINT2      : 2;
      __IOM uint8_t MON_Trig_Sel : 2;
    }bit;
  }EXICON0;
  __IM  uint8_t   RESERVED9[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t EXINT0RC    : 1;
      __OM  uint8_t EXINT0FC    : 1;
      __OM  uint8_t EXINT1RC    : 1;
      __OM  uint8_t EXINT1FC    : 1;
      __OM  uint8_t EXINT2RC    : 1;
      __OM  uint8_t EXINT2FC    : 1;
      __OM  uint8_t MONRC       : 1;
      __OM  uint8_t MONFC       : 1;
    }bit;
  }IRCON0CLR;
  __IM  uint8_t   RESERVED10[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EIREN1      : 1;
      __IOM uint8_t TIREN1      : 1;
      __IOM uint8_t RIREN1      : 1;
      __IM  uint8_t             : 3;
      __IOM uint8_t RIEN1       : 1;
      __IOM uint8_t TIEN1       : 1;
    }bit;
  }MODIEN1;
  __IM  uint8_t   RESERVED11[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EIREN2      : 1;
      __IOM uint8_t TIREN2      : 1;
      __IOM uint8_t RIREN2      : 1;
      __IM  uint8_t             : 2;
      __IOM uint8_t EXINT2_EN   : 1;
      __IOM uint8_t RIEN2       : 1;
      __IOM uint8_t TIEN2       : 1;
    }bit;
  }MODIEN2;
  __IM  uint8_t   RESERVED12[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t IE0         : 1;
      __IM  uint8_t             : 3;
      __IOM uint8_t MONIE       : 1;
      __IM  uint8_t MONSTS      : 1;
    }bit;
  }MODIEN3;
  __IM  uint8_t   RESERVED13[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t IE1         : 1;
    }bit;
  }MODIEN4;
  __IM  uint8_t   RESERVED14[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t XTAL_ON     : 1;
      __IOM uint8_t SL          : 1;
      __IOM uint8_t PD          : 1;
      __IOM uint8_t SD          : 1;
    }bit;
  }PMCON0;
  __IM  uint8_t   RESERVED15[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t LOCK        : 1;
      __IOM uint8_t RESLD       : 1;
      __IOM uint8_t OSCDISC     : 1;
      __IOM uint8_t VCOBYP      : 1;
      __IOM uint8_t NDIV        : 4;
    }bit;
  }PLL_CON;
  __IM  uint8_t   RESERVED16[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t CLKREL      : 4;
      __IOM uint8_t K2DIV       : 2;
      __IOM uint8_t K1DIV       : 1;
      __IOM uint8_t VCOSEL      : 1;
    }bit;
  }CMCON1;
  __IM  uint8_t   RESERVED17[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PBA0CLKREL  : 1;
    }bit;
  }CMCON2;
  __IM  uint8_t   RESERVED18[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WDTIN       : 1;
      __IOM uint8_t WDTRS       : 1;
      __IOM uint8_t WDTEN       : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t WDTPR       : 1;
      __IOM uint8_t WINBEN      : 1;
    }bit;
  }WDTCON;
  __IM  uint8_t   RESERVED19[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t PLL_LOCK    : 1;
      __IOM uint8_t APCLK_SET   : 1;
      __IOM uint8_t T3CLK_SEL   : 1;
      __IOM uint8_t CLKWDT_IE   : 1;
      __IOM uint8_t BGCLK_SEL   : 1;
      __IOM uint8_t BGCLK_DIV   : 1;
      __IOM uint8_t CPCLK_SEL   : 1;
      __IOM uint8_t CPCLK_DIV   : 1;
    }bit;
  }APCLK_CTRL1;
  __IM  uint8_t   RESERVED20[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t APCLK1FAC   : 2;
      __IOM uint8_t APCLK1SCLR  : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t APCLK1STS   : 2;
      __IM  uint8_t APCLK3STS   : 1;
      __IOM uint8_t APCLK3SCLR  : 1;
    }bit;
  }APCLK1;
  __IM  uint8_t   RESERVED21[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t APCLK2FAC   : 5;
      __IM  uint8_t APCLK2STS   : 2;
      __IOM uint8_t APCLK2SCLR  : 1;
    }bit;
  }APCLK2;
  __IM  uint8_t   RESERVED22[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t ADC1_DIS    : 1;
      __IOM uint8_t SSC1_DIS    : 1;
      __IOM uint8_t CCU6_DIS    : 1;
      __IOM uint8_t T2_DIS      : 1;
      __IOM uint8_t GPT12_DIS   : 1;
    }bit;
  }PMCON1;
  __IM  uint8_t   RESERVED23[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 1;
      __IOM uint8_t SSC2_DIS    : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t T21_DIS     : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t T3_DIS      : 1;
    }bit;
  }PMCON2;
  __IM  uint8_t   RESERVED24[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t LOCKUP      : 1;
      __IM  uint8_t             : 6;
      __IOM uint8_t LOCKUP_EN   : 1;
    }bit;
  }RSTCON;
  __IM  uint8_t   RESERVED25[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SDADCCLK_DIV : 2;
      __IOM uint8_t T3CLK_DIV   : 2;
    }bit;
  }APCLK_CTRL2;
  __IM  uint8_t   RESERVED26[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 4;
      __IOM uint8_t NVMCLKFAC   : 2;
      __IOM uint8_t SYSCLKSEL   : 2;
    }bit;
  }SYSCON0;
  __IM  uint8_t   RESERVED27[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t INIT_FAIL   : 1;
      __IOM uint8_t MRAMINITSTS : 1;
      __IOM uint8_t PG100TP_CHKS_ERR : 1;
    }bit;
  }SYS_STRTUP_STS;
  __IM  uint8_t   RESERVED28[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WDTREL      : 8;
    }bit;
  }WDTREL;
  __IM  uint8_t   RESERVED29[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WDTWINB     : 8;
    }bit;
  }WDTWINB;
  __IM  uint8_t   RESERVED30[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t WDT         : 8;
    }bit;
  }WDTL;
  __IM  uint8_t   RESERVED31[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t WDT         : 8;
    }bit;
  }WDTH;
  __IM  uint8_t   RESERVED32[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t R           : 1;
      __IOM uint8_t BRPRE       : 3;
    }bit;
  }BCON1;
  __IM  uint8_t   RESERVED33[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t FD_SEL      : 5;
      __IOM uint8_t BR_VALUE    : 3;
    }bit;
  }BGL1;
  __IM  uint8_t   RESERVED34[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t BR_VALUE    : 8;
    }bit;
  }BGH1;
  __IM  uint8_t   RESERVED35[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t BRDIS       : 1;
      __IOM uint8_t BGSEL       : 2;
      __IM  uint8_t BRK         : 1;
      __IM  uint8_t EOFSYN      : 1;
      __IM  uint8_t ERRSYN      : 1;
      __IOM uint8_t SYNEN       : 1;
    }bit;
  }LINST;
  __IM  uint8_t   RESERVED36[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t R           : 1;
      __IOM uint8_t BRPRE       : 3;
    }bit;
  }BCON2;
  __IM  uint8_t   RESERVED37[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t FD_SEL      : 5;
      __IOM uint8_t BR_VALUE    : 3;
    }bit;
  }BGL2;
  __IM  uint8_t   RESERVED38[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t BR_VALUE    : 8;
    }bit;
  }BGH2;
  __IM  uint8_t   RESERVED39[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 3;
      __OM  uint8_t BRKC        : 1;
      __OM  uint8_t EOFSYNC     : 1;
      __OM  uint8_t ERRSYNC     : 1;
    }bit;
  }LINSCLR;
  __IM  uint8_t   RESERVED40[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t VERID       : 3;
      __IM  uint8_t PRODID      : 5;
    }bit;
  }ID;
  __IM  uint8_t   RESERVED41[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t MODE        : 2;
      __IM  uint8_t PROTECT_S   : 1;
      __IOM uint8_t PASS        : 5;
    }bit;
  }PASSWD;
  __IM  uint8_t   RESERVED42[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t OSCSS       : 2;
      __IOM uint8_t OSCWDTRST   : 1;
      __IM  uint8_t OSC2L       : 1;
      __IOM uint8_t XPD         : 1;
      __IM  uint8_t             : 2;
      __IOM uint8_t OSCTRIM_8   : 1;
    }bit;
  }OSC_CON;
  __IM  uint8_t   RESERVED43[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t COREL       : 4;
      __IOM uint8_t COUTS0      : 1;
      __IOM uint8_t TLEN        : 1;
      __IOM uint8_t COUTS1      : 1;
      __IOM uint8_t EN          : 1;
    }bit;
  }COCON;
  __IM  uint8_t   RESERVED44[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t EXINT0IS    : 2;
      __IOM uint8_t EXINT1IS    : 2;
      __IOM uint8_t EXINT2IS    : 2;
      __IOM uint8_t URIOS1      : 1;
      __IOM uint8_t U_TX_CONDIS : 1;
    }bit;
  }MODPISEL;
  __IM  uint8_t   RESERVED45[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPT12CAPINB : 1;
      __IM  uint8_t             : 5;
      __IOM uint8_t T2EXCON     : 1;
      __IOM uint8_t T21EXCON    : 1;
    }bit;
  }MODPISEL1;
  __IM  uint8_t   RESERVED46[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T2IS        : 2;
      __IOM uint8_t T21IS       : 2;
      __IOM uint8_t T2EXIS      : 2;
      __IOM uint8_t T21EXIS     : 2;
    }bit;
  }MODPISEL2;
  __IM  uint8_t   RESERVED47[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 6;
      __IOM uint8_t URIOS2      : 1;
    }bit;
  }MODPISEL3;
  __IM  uint8_t   RESERVED48[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t WDTSUSP     : 1;
      __IOM uint8_t T12SUSP     : 1;
      __IOM uint8_t T13SUSP     : 1;
      __IOM uint8_t T2_SUSP     : 1;
      __IOM uint8_t GPT12_SUSP  : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t T21_SUSP    : 1;
    }bit;
  }MODSUSP1;
  __IM  uint8_t   RESERVED49[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T3_SUSP     : 1;
      __IOM uint8_t MU_SUSP     : 1;
      __IOM uint8_t ADC1_SUSP   : 1;
    }bit;
  }MODSUSP2;
  __IM  uint8_t   RESERVED50[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPT12       : 4;
      __IOM uint8_t TRIG_CONF   : 1;
      __IOM uint8_t T3_GPT12_SEL : 1;
    }bit;
  }GPT12PISEL;
  __IM  uint8_t   RESERVED51[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RIE         : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t NVMIE       : 1;
    }bit;
  }EDCCON;
  __IM  uint8_t   RESERVED52[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t RDBE        : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t NVMDBE      : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t RSBE        : 1;
    }bit;
  }EDCSTAT;
  __IM  uint8_t   RESERVED53[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SECTORINFO  : 6;
      __IOM uint8_t SASTATUS    : 2;
    }bit;
  }MEMSTAT;
  __IM  uint8_t   RESERVED54[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t NVMPROTSTSL_0 : 1;
      __IOM uint8_t NVMPROTSTSL_1 : 1;
      __IOM uint8_t NVMPROTSTSL_2 : 1;
      __IOM uint8_t NVMPROTSTSL_3 : 1;
    }bit;
  }NVM_PROT_STS;
  __IM  uint8_t   RESERVED55[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t NVM_PROT_ERR : 1;
      __IM  uint8_t NVM_ADDR_ERR : 1;
      __IM  uint8_t NVM_SFR_PROT_ERR : 1;
      __IM  uint8_t NVM_SFR_ADDR_ERR : 1;
      __IM  uint8_t ROM_PROT_ERR : 1;
      __IM  uint8_t ROM_ADDR_ERR : 1;
      __IM  uint8_t RAM_PROT_ERR : 1;
    }bit;
  }MEM_ACC_STS;
  __IM  uint8_t   RESERVED56[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM0        : 3;
      __IM  uint8_t             : 1;
      __IOM uint8_t PDM1        : 3;
    }bit;
  }P0_POCON0;
  __IM  uint8_t   RESERVED57[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM2        : 3;
      __IM  uint8_t             : 1;
      __IOM uint8_t PDM3        : 3;
    }bit;
  }P0_POCON1;
  __IM  uint8_t   RESERVED58[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM4        : 3;
    }bit;
  }P0_POCON2;
  __IM  uint8_t   RESERVED59[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t TCC         : 2;
    }bit;
  }TCCR;
  __IM  uint8_t   RESERVED60[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM0        : 3;
      __IM  uint8_t             : 1;
      __IOM uint8_t PDM1        : 3;
    }bit;
  }P1_POCON0;
  __IM  uint8_t   RESERVED61[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM2        : 3;
      __IM  uint8_t             : 1;
      __IOM uint8_t PDM3        : 3;
    }bit;
  }P1_POCON1;
  __IM  uint8_t   RESERVED62[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t PDM4        : 3;
    }bit;
  }P1_POCON2;
  __IM  uint8_t   RESERVED63[11];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t RDBEC       : 1;
      __IM  uint8_t             : 1;
      __OM  uint8_t NVMDBEC     : 1;
      __IM  uint8_t             : 1;
      __OM  uint8_t RSBEC       : 1;
    }bit;
  }EDCSCLR;
  __IM  uint8_t   RESERVED64[55];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t CH1IE       : 1;
      __IOM uint8_t CH2IE       : 1;
      __IOM uint8_t CH3IE       : 1;
      __IOM uint8_t CH4IE       : 1;
      __IOM uint8_t CH5IE       : 1;
      __IOM uint8_t CH6IE       : 1;
      __IOM uint8_t CH7IE       : 1;
      __IOM uint8_t CH8IE       : 1;
    }bit;
  }DMAIEN1;
  __IM  uint8_t   RESERVED65[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t TRERRIE     : 1;
      __IOM uint8_t TRSEQ1RDYIE : 1;
      __IOM uint8_t TRSEQ2RDYIE : 1;
      __IOM uint8_t SSCTXIE     : 1;
      __IOM uint8_t SSCRXIE     : 1;
      __IOM uint8_t GPT12IE     : 1;
      __IOM uint8_t SDADCIE     : 1;
    }bit;
  }DMAIEN2;
  __IM  uint8_t   RESERVED66[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t SSCTXSRCSEL : 1;
      __IOM uint8_t SSCRXSRCSEL : 1;
      __IOM uint8_t T12ZM_DMAEN : 1;
      __IOM uint8_t T12PM_DMAEN : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t SSCTX       : 1;
      __IM  uint8_t SSCRX       : 1;
      __IM  uint8_t GPT12_T3    : 1;
    }bit;
  }DMASRCSEL;
  __IM  uint8_t   RESERVED67[7];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t CH1         : 1;
      __IM  uint8_t CH2         : 1;
      __IM  uint8_t CH3         : 1;
      __IM  uint8_t CH4         : 1;
      __IM  uint8_t CH5         : 1;
      __IM  uint8_t CH6         : 1;
      __IM  uint8_t CH7         : 1;
      __IM  uint8_t CH8         : 1;
    }bit;
  }DMAIRC1;
  __IM  uint8_t   RESERVED68[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t STRDY       : 1;
      __IM  uint8_t TRSEQ1DY    : 1;
      __IM  uint8_t TRSEQ2DY    : 1;
      __IM  uint8_t SSC1RDY     : 1;
      __IM  uint8_t SSC2RDY     : 1;
      __IM  uint8_t GPT12       : 1;
      __IM  uint8_t SDADC       : 1;
    }bit;
  }DMAIRC2;
  __IM  uint8_t   RESERVED69[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t T2IE        : 1;
      __IOM uint8_t T3IE        : 1;
      __IOM uint8_t T4IE        : 1;
      __IOM uint8_t T5IE        : 1;
      __IOM uint8_t T6IE        : 1;
      __IOM uint8_t CRIE        : 1;
    }bit;
  }GPT12IEN;
  __IM  uint8_t   RESERVED70[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t T2          : 1;
      __IM  uint8_t T3          : 1;
      __IM  uint8_t T4          : 1;
      __IM  uint8_t T5          : 1;
      __IM  uint8_t T6          : 1;
      __IM  uint8_t CR          : 1;
    }bit;
  }GPT12IRC;
  __IM  uint8_t   RESERVED71[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t T2C         : 1;
      __OM  uint8_t T3C         : 1;
      __OM  uint8_t T4C         : 1;
      __OM  uint8_t T5C         : 1;
      __OM  uint8_t T6C         : 1;
      __OM  uint8_t CRC         : 1;
    }bit;
  }GPT12ICLR;
  __IM  uint8_t   RESERVED72[19];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t EIRC        : 1;
      __OM  uint8_t TIRC        : 1;
      __OM  uint8_t RIRC        : 1;
    }bit;
  }IRCON1CLR;
  __IM  uint8_t   RESERVED73[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t EIRC        : 1;
      __OM  uint8_t TIRC        : 1;
      __OM  uint8_t RIRC        : 1;
    }bit;
  }IRCON2CLR;
  __IM  uint8_t   RESERVED74[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t GPT12_DMAEN : 2;
    }bit;
  }DMASRCSEL2;
  __IM  uint8_t   RESERVED75[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t CH1C        : 1;
      __OM  uint8_t CH2C        : 1;
      __OM  uint8_t CH3C        : 1;
      __OM  uint8_t CH4C        : 1;
      __OM  uint8_t CH5C        : 1;
      __OM  uint8_t CH6C        : 1;
      __OM  uint8_t CH7C        : 1;
      __OM  uint8_t CH8C        : 1;
    }bit;
  }DMAIRC1CLR;
  __IM  uint8_t   RESERVED76[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 1;
      __OM  uint8_t TRSEQ1DYC   : 1;
      __OM  uint8_t TRSEQ2DYC   : 1;
      __OM  uint8_t SSC1C       : 1;
      __OM  uint8_t SSC2C       : 1;
      __OM  uint8_t GPT12C      : 1;
      __OM  uint8_t SDADCC      : 1;
    }bit;
  }DMAIRC2CLR;
  __IM  uint8_t   RESERVED77[7];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t CCU6SR0C    : 1;
      __IM  uint8_t             : 3;
      __OM  uint8_t CCU6SR1C    : 1;
    }bit;
  }IRCON3CLR;
  __IM  uint8_t   RESERVED78[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t CCU6SR2C    : 1;
      __IM  uint8_t             : 3;
      __OM  uint8_t CCU6SR3C    : 1;
    }bit;
  }IRCON4CLR;
  __IM  uint8_t   RESERVED79[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 5;
      __OM  uint8_t SSCTXC      : 1;
      __OM  uint8_t SSCRXC      : 1;
      __OM  uint8_t GPT12_T3C   : 1;
    }bit;
  }DMASRCCLR;
}SCU_Type;

typedef struct{
  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t AMCLK1_FREQ : 6;
      __IM  uint32_t            : 2;
      __IM  uint32_t AMCLK2_FREQ : 6;
    }bit;
  }AMCLK_FREQ_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CLKWDT_PD_N : 1;
    }bit;
  }AMCLK_CTRL;
  __IM  uint32_t  RESERVED;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t AMCLK1_UP_TH : 6;
      __IOM uint32_t AMCLK1_UP_HYS : 2;
      __IOM uint32_t AMCLK1_LOW_TH : 6;
      __IOM uint32_t AMCLK1_LOW_HYS : 2;
      __IOM uint32_t AMCLK2_UP_TH : 6;
      __IOM uint32_t AMCLK2_UP_HYS : 2;
      __IOM uint32_t AMCLK2_LOW_TH : 6;
      __IOM uint32_t AMCLK2_LOW_HYS : 2;
    }bit;
  }AMCLK_TH_HYS;
  __IM  uint32_t  RESERVED1;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t LIN_OC_ICLR : 1;
      __OM  uint32_t LIN_OT_ICLR : 1;
      __OM  uint32_t LIN_TMOUT_ICLR : 1;
      __IM  uint32_t            : 3;
      __OM  uint32_t PMU_OTWARN_ICLR : 1;
      __OM  uint32_t PMU_OT_ICLR : 1;
      __OM  uint32_t SYS_OTWARN_ICLR : 1;
      __OM  uint32_t SYS_OT_ICLR : 1;
      __OM  uint32_t REFBG_LOTHWARN_ICLR : 1;
      __OM  uint32_t REFBG_UPTHWARN_ICLR : 1;
      __OM  uint32_t VREF5V_LOWTH_ICLR : 1;
      __OM  uint32_t VREF5V_UPTH_ICLR : 1;
      __OM  uint32_t VREF5V_OVL_ICLR : 1;
      __OM  uint32_t ADC2_ESM_ICLR : 1;
      __OM  uint32_t PHU_ZCLOW_ICLR : 1;
      __OM  uint32_t PHU_ZCHI_ICLR : 1;
      __OM  uint32_t PHV_ZCLOW_ICLR : 1;
      __OM  uint32_t PHV_ZCHI_ICLR : 1;
      __OM  uint32_t PHW_ZCLOW_ICLR : 1;
      __OM  uint32_t PHW_ZCHI_ICLR : 1;
      __OM  uint32_t ADC3_EOC_ICLR : 1;
      __OM  uint32_t ADC4_EOC_ICLR : 1;
      __OM  uint32_t PHU_ZCLOW_SCLR : 1;
      __OM  uint32_t PHU_ZCHI_SCLR : 1;
      __OM  uint32_t PHV_ZCLOW_SCLR : 1;
      __OM  uint32_t PHV_ZCHI_SCLR : 1;
      __OM  uint32_t PHW_ZCLOW_SCLR : 1;
      __OM  uint32_t PHW_ZCHI_SCLR : 1;
    }bit;
  }SYS_ISCLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t LIN_OC_IS  : 1;
      __IM  uint32_t LIN_OT_IS  : 1;
      __IM  uint32_t LIN_TMOUT_IS : 1;
      __IM  uint32_t            : 3;
      __IM  uint32_t PMU_OTWARN_IS : 1;
      __IM  uint32_t PMU_OT_IS  : 1;
      __IM  uint32_t SYS_OTWARN_IS : 1;
      __IM  uint32_t SYS_OT_IS  : 1;
      __IM  uint32_t REFBG_LOTHWARN_IS : 1;
      __IM  uint32_t REFBG_UPTHWARN_IS : 1;
      __IM  uint32_t VREF5V_LOWTH_IS : 1;
      __IM  uint32_t VREF5V_UPTH_IS : 1;
      __IM  uint32_t VREF5V_OVL_IS : 1;
      __IM  uint32_t ADC2_ESM_IS : 1;
      __IM  uint32_t PHU_ZCLOW_IS : 1;
      __IM  uint32_t PHU_ZCHI_IS : 1;
      __IM  uint32_t PHV_ZCLOW_IS : 1;
      __IM  uint32_t PHV_ZCHI_IS : 1;
      __IM  uint32_t PHW_ZCLOW_IS : 1;
      __IM  uint32_t PHW_ZCHI_IS : 1;
      __IM  uint32_t ADC3_EOC_IS : 1;
      __IM  uint32_t ADC4_EOC_IS : 1;
      __IM  uint32_t PHU_ZCLOW_STS : 1;
      __IM  uint32_t PHU_ZCHI_STS : 1;
      __IM  uint32_t PHV_ZCLOW_STS : 1;
      __IM  uint32_t PHV_ZCHI_STS : 1;
      __IM  uint32_t PHW_ZCLOW_STS : 1;
      __IM  uint32_t PHW_ZCHI_STS : 1;
    }bit;
  }SYS_IS;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t MON_UV_IS  : 1;
      __IM  uint32_t VS_UV_IS   : 1;
      __IM  uint32_t VDD5V_UV_IS : 1;
      __IM  uint32_t VDD1V5_UV_IS : 1;
      __IM  uint32_t MON_OV_IS  : 1;
      __IM  uint32_t VS_OV_IS   : 1;
      __IM  uint32_t VDD5V_OV_IS : 1;
      __IM  uint32_t VDD1V5_OV_IS : 1;
      __IM  uint32_t            : 8;
      __IM  uint32_t MON_UV_STS : 1;
      __IM  uint32_t VS_UV_STS  : 1;
      __IM  uint32_t VDD5V_UV_STS : 1;
      __IM  uint32_t VDD1V5_UV_STS : 1;
      __IM  uint32_t MON_OV_STS : 1;
      __IM  uint32_t VS_OV_STS  : 1;
      __IM  uint32_t VDD5V_OV_STS : 1;
      __IM  uint32_t VDD1V5_OV_STS : 1;
    }bit;
  }SYS_SUPPLY_IRQ_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t MON_UV_IE  : 1;
      __IOM uint32_t VS_UV_IE   : 1;
      __IOM uint32_t VDD5V_UV_IE : 1;
      __IOM uint32_t VDD1V5_UV_IE : 1;
      __IOM uint32_t MON_OV_IE  : 1;
      __IOM uint32_t VS_OV_IE   : 1;
      __IOM uint32_t VDD5V_OV_IE : 1;
      __IOM uint32_t VDD1V5_OV_IE : 1;
    }bit;
  }SYS_SUPPLY_IRQ_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t MON_UV_ICLR : 1;
      __OM  uint32_t VS_UV_ICLR : 1;
      __OM  uint32_t VDD5V_UV_ICLR : 1;
      __OM  uint32_t VDD1V5_UV_ICLR : 1;
      __OM  uint32_t MON_OV_ICLR : 1;
      __OM  uint32_t VS_OV_ICLR : 1;
      __OM  uint32_t VDD5V_OV_ICLR : 1;
      __OM  uint32_t VDD1V5_OV_ICLR : 1;
      __IM  uint32_t            : 8;
      __OM  uint32_t MON_UV_SCLR : 1;
      __OM  uint32_t VS_UV_SCLR : 1;
      __OM  uint32_t VDD5V_UV_SCLR : 1;
      __OM  uint32_t VDD1V5_UV_SCLR : 1;
      __OM  uint32_t MON_OV_SCLR : 1;
      __OM  uint32_t VS_OV_SCLR : 1;
      __OM  uint32_t VDD5V_OV_SCLR : 1;
      __OM  uint32_t VDD1V5_OV_SCLR : 1;
    }bit;
  }SYS_SUPPLY_IRQ_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LIN_OC_IE  : 1;
      __IOM uint32_t LIN_OT_IE  : 1;
      __IOM uint32_t LIN_TMOUT_IE : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t PMU_OTWARN_IE : 1;
      __IOM uint32_t PMU_OT_IE  : 1;
      __IOM uint32_t SYS_OTWARN_IE : 1;
      __IOM uint32_t SYS_OT_IE  : 1;
      __IOM uint32_t REFBG_LOTHWARN_IE : 1;
      __IOM uint32_t REFBG_UPTHWARN_IE : 1;
      __IOM uint32_t VREF5V_LOWTH_IE : 1;
      __IOM uint32_t VREF5V_UPTH_IE : 1;
      __IOM uint32_t VREF5V_OVL_IE : 1;
      __IOM uint32_t ADC2_ESM_IE : 1;
      __IOM uint32_t PHU_ZCLOW_IE : 1;
      __IOM uint32_t PHU_ZCHI_IE : 1;
      __IOM uint32_t PHV_ZCLOW_IE : 1;
      __IOM uint32_t PHV_ZCHI_IE : 1;
      __IOM uint32_t PHW_ZCLOW_IE : 1;
      __IOM uint32_t PHW_ZCHI_IE : 1;
      __IOM uint32_t ADC3_EOC_IE : 1;
      __IOM uint32_t ADC4_EOC_IE : 1;
    }bit;
  }SYS_IRQ_CTRL;
  __IM  uint32_t  RESERVED2;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IOM uint32_t CLKWDT_SD_DIS : 1;
      __IM  uint32_t            : 5;
      __IOM uint32_t FAIL_PS_DIS : 1;
      __IOM uint32_t LIN_VS_UV_SD_DIS : 1;
      __IM  uint32_t            : 5;
      __IOM uint32_t SYS_VSD_OV_SLM_DIS : 1;
      __IM  uint32_t            : 9;
      __IOM uint32_t SYS_OT_PS_DIS : 1;
      __IOM uint32_t CLKLOSS_SD_DIS : 1;
      __IOM uint32_t CLKWDT_RES_SD_DIS : 1;
    }bit;
  }PCU_CTRL_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t WDP_SEL    : 6;
      __IOM uint32_t SOWCONF    : 2;
    }bit;
  }WDT1_TRIG;
  __IM  uint32_t  RESERVED3[7];

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t LS1_DS_ICLR : 1;
      __OM  uint32_t LS2_DS_ICLR : 1;
      __OM  uint32_t HS1_DS_ICLR : 1;
      __OM  uint32_t HS2_DS_ICLR : 1;
      __OM  uint32_t LS3_DS_ICLR : 1;
      __OM  uint32_t HS3_DS_ICLR : 1;
      __IM  uint32_t            : 4;
      __OM  uint32_t LS1_OC_ICLR : 1;
      __OM  uint32_t LS2_OC_ICLR : 1;
      __OM  uint32_t HS1_OC_ICLR : 1;
      __OM  uint32_t HS2_OC_ICLR : 1;
      __OM  uint32_t LS3_OC_ICLR : 1;
      __OM  uint32_t HS3_OC_ICLR : 1;
      __OM  uint32_t VCP_LOWTH2_ICLR : 1;
      __OM  uint32_t VCP_LOWTH1_ICLR : 1;
      __OM  uint32_t VCP_UPTH_ICLR : 1;
      __OM  uint32_t VSD_LOWTH_ICLR : 1;
      __OM  uint32_t VSD_UPTH_ICLR : 1;
      __IM  uint32_t            : 3;
      __OM  uint32_t VCP_LOWTH2_SCLR : 1;
      __OM  uint32_t VCP_LOWTH1_SCLR : 1;
      __OM  uint32_t VCP_UPTH_SCLR : 1;
      __OM  uint32_t VSD_LOWTH_SCLR : 1;
      __OM  uint32_t VSD_UPTH_SCLR : 1;

    }bit;
  }BDRV_ISCLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t LS1_DS_IS  : 1;
      __IM  uint32_t LS2_DS_IS  : 1;
      __IM  uint32_t HS1_DS_IS  : 1;
      __IM  uint32_t HS2_DS_IS  : 1;
      __IM  uint32_t LS3_DS_IS  : 1;
      __IM  uint32_t HS3_DS_IS  : 1;
      __IM  uint32_t            : 4;
      __IM  uint32_t LS1_OC_IS  : 1;
      __IM  uint32_t LS2_OC_IS  : 1;
      __IM  uint32_t HS1_OC_IS  : 1;
      __IM  uint32_t HS2_OC_IS  : 1;
      __IM  uint32_t LS3_OC_IS  : 1;
      __IM  uint32_t HS3_OC_IS  : 1;
      __IM  uint32_t VCP_LOWTH2_IS : 1;
      __IM  uint32_t VCP_LOWTH1_IS : 1;
      __IM  uint32_t VCP_UPTH_IS : 1;
      __IM  uint32_t VSD_LOWTH_IS : 1;
      __IM  uint32_t VSD_UPTH_IS : 1;
      __IM  uint32_t            : 3;
      __IM  uint32_t VCP_LOWTH2_STS : 1;
      __IM  uint32_t VCP_LOWTH1_STS : 1;
      __IM  uint32_t VCP_UPTH_STS : 1;
      __IM  uint32_t VSD_LOWTH_STS : 1;
      __IM  uint32_t VSD_UPTH_STS : 1;

    }bit;
  }BDRV_IS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t LS1_DS_IE  : 1;
      __IOM uint32_t LS2_DS_IE  : 1;
      __IOM uint32_t HS1_DS_IE  : 1;
      __IOM uint32_t HS2_DS_IE  : 1;
      __IOM uint32_t LS3_DS_IE  : 1;
      __IOM uint32_t HS3_DS_IE  : 1;
      __IM  uint32_t            : 4;
      __IOM uint32_t LS1_OC_IE  : 1;
      __IOM uint32_t LS2_OC_IE  : 1;
      __IOM uint32_t HS1_OC_IE  : 1;
      __IOM uint32_t HS2_OC_IE  : 1;
      __IOM uint32_t LS3_OC_IE  : 1;
      __IOM uint32_t HS3_OC_IE  : 1;
      __IOM uint32_t VCP_LOWTH2_IE : 1;
      __IOM uint32_t VCP_LOWTH1_IE : 1;
      __IOM uint32_t VCP_UPTH_IE : 1;
      __IOM uint32_t VSD_LOWTH_IE : 1;
      __IOM uint32_t VSD_UPTH_IE : 1;
    }bit;
  }BDRV_IRQ_CTRL;
  __IM  uint32_t  RESERVED4[3];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t STCALIB    : 26;
    }bit;
  }STCALIB;
  __IM  uint32_t  RESERVED5[4];

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t DBFSTS     : 1;
      __IM  uint32_t SBFSTS     : 1;
    }bit;
  }BFSTS;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t DBFA       : 32;
    }bit;
  }DBFA;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t SBFA       : 32;
    }bit;
  }SBFA;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t DBFSTSCLR  : 1;
      __OM  uint32_t SBFSTSCLR  : 1;
    }bit;
  }BFSTS_CLR;
}SCUPM_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern SCU_Type                                                             SCU;
extern SCUPM_Type                                                         SCUPM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

