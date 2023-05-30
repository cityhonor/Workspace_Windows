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
#define MF_BEMFC_CTRL_STS_PHW_ZC_STS_Pos                             (18UL)
#define MF_BEMFC_CTRL_STS_PHW_ZC_STS_Msk                             (0x40000UL)
#define MF_BEMFC_CTRL_STS_PHV_ZC_STS_Pos                             (17UL)
#define MF_BEMFC_CTRL_STS_PHV_ZC_STS_Msk                             (0x20000UL)
#define MF_BEMFC_CTRL_STS_PHU_ZC_STS_Pos                             (16UL)
#define MF_BEMFC_CTRL_STS_PHU_ZC_STS_Msk                             (0x10000UL)
#define MF_BEMFC_CTRL_STS_CCPOS_INSEL_Pos                            (12UL)
#define MF_BEMFC_CTRL_STS_CCPOS_INSEL_Msk                            (0x1000UL)
#define MF_BEMFC_CTRL_STS_PHWCOMP_ON_Pos                             (10UL)
#define MF_BEMFC_CTRL_STS_PHWCOMP_ON_Msk                             (0x400UL)
#define MF_BEMFC_CTRL_STS_PHVCOMP_ON_Pos                             (9UL)
#define MF_BEMFC_CTRL_STS_PHVCOMP_ON_Msk                             (0x200UL)
#define MF_BEMFC_CTRL_STS_PHUCOMP_ON_Pos                             (8UL)
#define MF_BEMFC_CTRL_STS_PHUCOMP_ON_Msk                             (0x100UL)
#define MF_BEMFC_CTRL_STS_GPT12CAPINSW_Pos                           (5UL)
#define MF_BEMFC_CTRL_STS_GPT12CAPINSW_Msk                           (0x20UL)
#define MF_BEMFC_CTRL_STS_FILTBYPS_Pos                               (4UL)
#define MF_BEMFC_CTRL_STS_FILTBYPS_Msk                               (0x10UL)
#define MF_BEMFC_CTRL_STS_DEMGFILTDIS_Pos                            (3UL)
#define MF_BEMFC_CTRL_STS_DEMGFILTDIS_Msk                            (0x8UL)
#define MF_BEMFC_CTRL_STS_PHWCOMP_EN_Pos                             (2UL)
#define MF_BEMFC_CTRL_STS_PHWCOMP_EN_Msk                             (0x4UL)
#define MF_BEMFC_CTRL_STS_PHVCOMP_EN_Pos                             (1UL)
#define MF_BEMFC_CTRL_STS_PHVCOMP_EN_Msk                             (0x2UL)
#define MF_BEMFC_CTRL_STS_PHUCOMP_EN_Pos                             (0UL)
#define MF_BEMFC_CTRL_STS_PHUCOMP_EN_Msk                             (0x1UL)
#define MF_CSA_CTRL_VZERO_Pos                                        (8UL)
#define MF_CSA_CTRL_VZERO_Msk                                        (0x100UL)
#define MF_CSA_CTRL_GAIN_Pos                                         (1UL)
#define MF_CSA_CTRL_GAIN_Msk                                         (0x6UL)
#define MF_CSA_CTRL_EN_Pos                                           (0UL)
#define MF_CSA_CTRL_EN_Msk                                           (0x1UL)
#define MF_P2_ADCSEL_CTRL_ADC1_CH1_SEL_Pos                           (10UL)
#define MF_P2_ADCSEL_CTRL_ADC1_CH1_SEL_Msk                           (0x400UL)
#define MF_P2_ADCSEL_CTRL_ADC3_INN_SEL_Pos                           (9UL)
#define MF_P2_ADCSEL_CTRL_ADC3_INN_SEL_Msk                           (0x200UL)
#define MF_P2_ADCSEL_CTRL_ADC3_INP_SEL_Pos                           (8UL)
#define MF_P2_ADCSEL_CTRL_ADC3_INP_SEL_Msk                           (0x100UL)
#define MF_P2_ADCSEL_CTRL_P2_0_ADC_SEL_Pos                           (0UL)
#define MF_P2_ADCSEL_CTRL_P2_0_ADC_SEL_Msk                           (0x1UL)
#define MF_P2_ADCSEL_CTRL_P2_2_ADC_SEL_Pos                           (1UL)
#define MF_P2_ADCSEL_CTRL_P2_2_ADC_SEL_Msk                           (0x2UL)
#define MF_P2_ADCSEL_CTRL_P2_3_ADC_SEL_Pos                           (2UL)
#define MF_P2_ADCSEL_CTRL_P2_3_ADC_SEL_Msk                           (0x4UL)
#define MF_P2_ADCSEL_CTRL_P2_4_ADC_SEL_Pos                           (3UL)
#define MF_P2_ADCSEL_CTRL_P2_4_ADC_SEL_Msk                           (0x8UL)
#define MF_P2_ADCSEL_CTRL_P2_5_ADC_SEL_Pos                           (4UL)
#define MF_P2_ADCSEL_CTRL_P2_5_ADC_SEL_Msk                           (0x10UL)
#define MF_REF1_STS_REFBG_UPTHWARN_STS_Pos                           (5UL)
#define MF_REF1_STS_REFBG_UPTHWARN_STS_Msk                           (0x20UL)
#define MF_REF1_STS_REFBG_LOTHWARN_STS_Pos                           (4UL)
#define MF_REF1_STS_REFBG_LOTHWARN_STS_Msk                           (0x10UL)
#define MF_REF2_CTRL_VREF5V_OV_STS_Pos                               (3UL)
#define MF_REF2_CTRL_VREF5V_OV_STS_Msk                               (0x8UL)
#define MF_REF2_CTRL_VREF5V_UV_STS_Pos                               (2UL)
#define MF_REF2_CTRL_VREF5V_UV_STS_Msk                               (0x4UL)
#define MF_REF2_CTRL_VREF5V_OVL_STS_Pos                              (1UL)
#define MF_REF2_CTRL_VREF5V_OVL_STS_Msk                              (0x2UL)
#define MF_REF2_CTRL_VREF5V_PD_N_Pos                                 (0UL)
#define MF_REF2_CTRL_VREF5V_PD_N_Msk                                 (0x1UL)
#define MF_TEMPSENSE_CTRL_SYS_OT_STS_Pos                             (7UL)
#define MF_TEMPSENSE_CTRL_SYS_OT_STS_Msk                             (0x80UL)
#define MF_TEMPSENSE_CTRL_SYS_OTWARN_STS_Pos                         (6UL)
#define MF_TEMPSENSE_CTRL_SYS_OTWARN_STS_Msk                         (0x40UL)
#define MF_TEMPSENSE_CTRL_PMU_OT_STS_Pos                             (5UL)
#define MF_TEMPSENSE_CTRL_PMU_OT_STS_Msk                             (0x20UL)
#define MF_TEMPSENSE_CTRL_PMU_OTWARN_STS_Pos                         (4UL)
#define MF_TEMPSENSE_CTRL_PMU_OTWARN_STS_Msk                         (0x10UL)
#define MF_TRIM_BEMFx_BEMF_TFILT_SEL_Pos                             (8UL)
#define MF_TRIM_BEMFx_BEMF_TFILT_SEL_Msk                             (0x300UL)
#define MF_TRIM_BEMFx_BEMF_GPT_CAPIN_SEL_Pos                         (4UL)
#define MF_TRIM_BEMFx_BEMF_GPT_CAPIN_SEL_Msk                         (0x30UL)
#define MF_TRIM_BEMFx_BEMF_BT_TFILT_SEL_Pos                          (0UL)
#define MF_TRIM_BEMFx_BEMF_BT_TFILT_SEL_Msk                          (0x7UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_SEL_INRANGE_Pos                    (5UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_SEL_INRANGE_Msk                    (0x20UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_HRESO_5V_Pos                       (4UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_HRESO_5V_Msk                       (0x10UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_PD_N_Pos                           (0UL)
#define MF_VMON_SEN_CTRL_VMON_SEN_PD_N_Msk                           (0x1UL)

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
      __IOM uint32_t P2_0_ADC_SEL : 1;
      __IOM uint32_t P2_2_ADC_SEL : 1;
      __IOM uint32_t P2_3_ADC_SEL : 1;
      __IOM uint32_t P2_4_ADC_SEL : 1;
      __IOM uint32_t P2_5_ADC_SEL : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t ADC3_INP_SEL : 1;
      __IOM uint32_t ADC3_INN_SEL : 1;
      __IOM uint32_t ADC1_CH1_SEL : 1;
    }bit;
  }P2_ADCSEL_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t VMON_SEN_PD_N : 1;
      __IM  uint32_t            : 3;
      __IOM uint32_t VMON_SEN_HRESO_5V : 1;
      __IOM uint32_t VMON_SEN_SEL_INRANGE : 1;
    }bit;
  }VMON_SEN_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t PHUCOMP_EN : 1;
      __IOM uint32_t PHVCOMP_EN : 1;
      __IOM uint32_t PHWCOMP_EN : 1;
      __IOM uint32_t DEMGFILTDIS : 1;
      __IOM uint32_t FILTBYPS   : 1;
      __IOM uint32_t GPT12CAPINSW : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t PHUCOMP_ON : 1;
      __IOM uint32_t PHVCOMP_ON : 1;
      __IOM uint32_t PHWCOMP_ON : 1;
      __IM  uint32_t            : 1;
      __IOM uint32_t CCPOS_INSEL : 1;
      __IM  uint32_t            : 3;
      __IM  uint32_t PHU_ZC_STS : 1;
      __IM  uint32_t PHV_ZC_STS : 1;
      __IM  uint32_t PHW_ZC_STS : 1;
    }bit;
  }BEMFC_CTRL_STS;
  __IM  uint32_t  RESERVED0;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 4;
      __IM  uint32_t PMU_OTWARN_STS : 1;
      __IM  uint32_t PMU_OT_STS : 1;
      __IM  uint32_t SYS_OTWARN_STS : 1;
      __IM  uint32_t SYS_OT_STS : 1;
    }bit;
  }TEMPSENSE_CTRL;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 4;
      __IM  uint32_t REFBG_LOTHWARN_STS : 1;
      __IM  uint32_t REFBG_UPTHWARN_STS : 1;
    }bit;
  }REF1_STS;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t VREF5V_PD_N : 1;
      __IM  uint32_t VREF5V_OVL_STS : 1;
      __IM  uint32_t VREF5V_UV_STS : 1;
      __IM  uint32_t VREF5V_OV_STS : 1;
    }bit;
  }REF2_CTRL;
  __IM  uint32_t  RESERVED1;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t BEMF_BT_TFILT_SEL : 3;
      __IM  uint32_t            : 1;
      __IOM uint32_t BEMF_GPT_CAPIN_SEL : 2;
      __IM  uint32_t            : 2;
      __IOM uint32_t BEMF_TFILT_SEL : 2;
    }bit;
  }TRIM_BEMFx;
}MF_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern MF_Type                                                               MF;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


