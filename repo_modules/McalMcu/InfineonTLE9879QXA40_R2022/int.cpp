/******************************************************************************/
/* File   : int.cpp                                                           */
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
#include "types.hpp"

#include "int.hpp"

#include "uC_Scu.hpp"
#include "uC_Cpu.hpp"
#include "sfr_access.hpp"
#include "scu_defines.hpp"

#include "int_defines.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

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
void INT_Init(void){
   SCU.NMICLR.reg = (uint8) SCU_NMICON;
   SCU.NMICON.reg = (uint8) SCU_NMICON;
   SCU.EXICON0.reg = (uint8) SCU_EXICON0;
   SCU.MODIEN1.reg = (uint8) SCU_MODIEN1;
   SCU.MODIEN2.reg = (uint8) SCU_MODIEN2;
   SCU.MODIEN3.reg = (uint8) SCU_MODIEN3;
   SCU.MODIEN4.reg = (uint8) SCU_MODIEN4;
   SCU.GPT12IEN.reg = (uint8) SCU_GPT12IEN;
   SCUPM.SYS_SUPPLY_IRQ_CLR.reg = (uint32) 0x00FF00FF;
   SCUPM.SYS_ISCLR.reg = (uint32)0x3F3FFFC7;
#if(CONFIGWIZARD == 1)
   SCUPM.SYS_SUPPLY_IRQ_CTRL.reg = (uint32) SCU_SYS_SUPPLY_IRQ_CTRL;
   SCUPM.SYS_IRQ_CTRL.reg = SCU_SYS_IRQ_CTRL;
#else
   SCUPM.SYS_SUPPLY_IRQ_CTRL.reg = (uint32) SCUPM_SYS_SUPPLY_IRQ_CTRL;
   SCUPM.SYS_IRQ_CTRL.reg = SCUPM_SYS_IRQ_CTRL;
#endif
   SCU.EDCCON.reg = (uint8) SCU_EDCCON;
#ifdef SCU_BDRV_IRQ_CTRL
   SCUPM.BDRV_IRQ_CTRL.reg = (uint32) SCU_BDRV_IRQ_CTRL;
#endif
#ifdef SCUPM_BDRV_IRQ_CTRL
   SCUPM.BDRV_IRQ_CTRL.reg = (uint32) SCUPM_BDRV_IRQ_CTRL;
#endif
   CPU.NVIC_IPR0.reg = (uint32) CPU_NVIC_IPR0;
   CPU.NVIC_IPR1.reg = (uint32) CPU_NVIC_IPR1;
   CPU.NVIC_IPR2.reg = (uint32) CPU_NVIC_IPR2;
   CPU.NVIC_IPR3.reg = (uint32) CPU_NVIC_IPR3;
   CPU.NVIC_ISER0.reg = (uint32) CPU_NVIC_ISER0;
   SCU.IEN0.reg = (uint8) SCU_IEN0;
#if(INT_XML_VERSION >= 10109)
   SCU.DMAIRC1CLR.reg = (uint8)0xFF;
   SCU.DMAIRC2CLR.reg = (uint8)0xFF;
#ifdef SCU_DMAIEN1
   SCU.DMAIEN1.reg = (uint8) SCU_DMAIEN1;
#endif
#ifdef SCU_DMAIEN2
   SCU.DMAIEN2.reg = (uint8) SCU_DMAIEN2;
#endif
#endif
   CPU.SHPR3.reg = (uint32) CPU_SHPR3;
}
/*
void Global_Int_En(void){
  Field_Wrt8(&SCU.IEN0.reg, (uint8)SCU_IEN0_EA_Pos, (uint8)SCU_IEN0_EA_Msk, 1u);
}

void Global_Int_Dis(void){
  Field_Wrt8(&SCU.IEN0.reg, (uint8)SCU_IEN0_EA_Pos, (uint8)SCU_IEN0_EA_Msk, 0u);
}

void ECC_RAM_DoubleBit_Int_En(void){
  Field_Mod8(&SCU.EDCCON.reg, (uint8)SCU_EDCCON_RIE_Pos, (uint8)SCU_EDCCON_RIE_Msk, 1u);
}

void ECC_RAM_DoubleBit_Int_Dis(void){
  Field_Mod8(&SCU.EDCCON.reg, (uint8)SCU_EDCCON_RIE_Pos, (uint8)SCU_EDCCON_RIE_Msk, 0u);
}

void ECC_NVM_DoubleBit_Int_En(void){
  Field_Mod8(&SCU.EDCCON.reg, (uint8)SCU_EDCCON_NVMIE_Pos, (uint8)SCU_EDCCON_NVMIE_Msk, 1u);
}

void ECC_NVM_DoubleBit_Int_Dis(void){
  Field_Mod8(&SCU.EDCCON.reg, (uint8)SCU_EDCCON_NVMIE_Pos, (uint8)SCU_EDCCON_NVMIE_Msk, 0u);
}

void ECC_RAM_SingleBit_Int_Clr(void){
  Field_Wrt8(&SCU.EDCSCLR.reg, (uint8)SCU_EDCSCLR_RSBEC_Pos, (uint8)SCU_EDCSCLR_RSBEC_Msk, 1u);
}

void ECC_RAM_DoubleBit_Int_Clr(void){
  Field_Wrt8(&SCU.EDCSCLR.reg, (uint8)SCU_EDCSCLR_RDBEC_Pos, (uint8)SCU_EDCSCLR_RDBEC_Msk, 1u);
}

void ECC_NVM_DoubleBit_Int_Clr(void){
  Field_Wrt8(&SCU.EDCSCLR.reg, (uint8)SCU_EDCSCLR_NVMDBEC_Pos, (uint8)SCU_EDCSCLR_NVMDBEC_Msk, 1u);
}

void EXINT0_Rising_Edge_Int_En(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT0_RE_Pos, (uint8)SCU_EXICON0_EXINT0_RE_Msk, 1u);
}

void EXINT0_Rising_Edge_Int_Dis(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT0_RE_Pos, (uint8)SCU_EXICON0_EXINT0_RE_Msk, 0u);
}

void EXINT0_Falling_Edge_Int_En(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT0_FE_Pos, (uint8)SCU_EXICON0_EXINT0_FE_Msk, 1u);
}

void EXINT0_Falling_Edge_Int_Dis(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT0_FE_Pos, (uint8)SCU_EXICON0_EXINT0_FE_Msk, 0u);
}

void EXINT1_Rising_Edge_Int_En(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT1_RE_Pos, (uint8)SCU_EXICON0_EXINT1_RE_Msk, 1u);
}

void EXINT1_Rising_Edge_Int_Dis(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT1_RE_Pos, (uint8)SCU_EXICON0_EXINT1_RE_Msk, 0u);
}

void EXINT1_Falling_Edge_Int_En(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT1_FE_Pos, (uint8)SCU_EXICON0_EXINT1_FE_Msk, 1u);
}

void EXINT1_Falling_Edge_Int_Dis(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT1_FE_Pos, (uint8)SCU_EXICON0_EXINT1_FE_Msk, 0u);
}

void EXINT2_Rising_Edge_Int_En(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT2_RE_Pos, (uint8)SCU_EXICON0_EXINT2_RE_Msk, 1u);
}

void EXINT2_Rising_Edge_Int_Dis(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT2_RE_Pos, (uint8)SCU_EXICON0_EXINT2_RE_Msk, 0u);
}

void EXINT2_Falling_Edge_Int_En(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT2_FE_Pos, (uint8)SCU_EXICON0_EXINT2_FE_Msk, 1u);
}

void EXINT2_Falling_Edge_Int_Dis(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)SCU_EXICON0_EXINT2_FE_Pos, (uint8)SCU_EXICON0_EXINT2_FE_Msk, 0u);
}

void EXINT0_Rising_Edge_Int_Clr(void){
  Field_Wrt8(&SCU.IRCON0CLR.reg, (uint8)SCU_IRCON0CLR_EXINT0RC_Pos, (uint8)SCU_IRCON0CLR_EXINT0RC_Msk, 1u);
}

void EXINT0_Falling_Edge_Int_Clr(void){
  Field_Wrt8(&SCU.IRCON0CLR.reg, (uint8)SCU_IRCON0CLR_EXINT0FC_Pos, (uint8)SCU_IRCON0CLR_EXINT0FC_Msk, 1u);
}

void EXINT1_Rising_Edge_Int_Clr(void){
  Field_Wrt8(&SCU.IRCON0CLR.reg, (uint8)SCU_IRCON0CLR_EXINT1RC_Pos, (uint8)SCU_IRCON0CLR_EXINT1RC_Msk, 1u);
}

void EXINT1_Falling_Edge_Int_Clr(void){
  Field_Wrt8(&SCU.IRCON0CLR.reg, (uint8)SCU_IRCON0CLR_EXINT1FC_Pos, (uint8)SCU_IRCON0CLR_EXINT1FC_Msk, 1u);
}

void EXINT2_Rising_Edge_Int_Clr(void){
  Field_Wrt8(&SCU.IRCON0CLR.reg, (uint8)SCU_IRCON0CLR_EXINT2RC_Pos, (uint8)SCU_IRCON0CLR_EXINT2RC_Msk, 1u);
}

void EXINT2_Falling_Edge_Int_Clr(void){
  Field_Wrt8(&SCU.IRCON0CLR.reg, (uint8)SCU_IRCON0CLR_EXINT2FC_Pos, (uint8)SCU_IRCON0CLR_EXINT2FC_Msk, 1u);
}

void NMI_WDT_Int_En(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIWDT_Pos, (uint8)SCU_NMICON_NMIWDT_Msk, 1u);
}

void NMI_WDT_Int_Dis(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIWDT_Pos, (uint8)SCU_NMICON_NMIWDT_Msk, 0u);
}

void NMI_PLL_Int_En(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIPLL_Pos, (uint8)SCU_NMICON_NMIPLL_Msk, 1u);
}

void NMI_PLL_Int_Dis(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIPLL_Pos, (uint8)SCU_NMICON_NMIPLL_Msk, 0u);
}

void NMI_NVM_Int_En(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMINVM_Pos, (uint8)SCU_NMICON_NMINVM_Msk, 1u);
}

void NMI_NVM_Int_Dis(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMINVM_Pos, (uint8)SCU_NMICON_NMINVM_Msk, 0u);
}

void NMI_ECC_Int_En(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIECC_Pos, (uint8)SCU_NMICON_NMIECC_Msk, 1u);
}

void NMI_ECC_Int_Dis(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIECC_Pos, (uint8)SCU_NMICON_NMIECC_Msk, 0u);
}

void NMI_MAP_Int_En(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIMAP_Pos, (uint8)SCU_NMICON_NMIMAP_Msk, 1u);
}

void NMI_MAP_Int_Dis(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIMAP_Pos, (uint8)SCU_NMICON_NMIMAP_Msk, 0u);
}

void NMI_SUP_Int_En(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMISUP_Pos, (uint8)SCU_NMICON_NMISUP_Msk, 1u);
}

void NMI_SUP_Int_Dis(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMISUP_Pos, (uint8)SCU_NMICON_NMISUP_Msk, 0u);
}

void NMI_OWD_Int_En(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIOWD_Pos, (uint8)SCU_NMICON_NMIOWD_Msk, 1u);
}

void NMI_OWD_Int_Dis(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIOWD_Pos, (uint8)SCU_NMICON_NMIOWD_Msk, 0u);
}

void NMI_OT_Int_En(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIOT_Pos, (uint8)SCU_NMICON_NMIOT_Msk, 1u);
}

void NMI_OT_Int_Dis(void){
  Field_Mod8(&SCU.NMICON.reg, (uint8)SCU_NMICON_NMIOT_Pos, (uint8)SCU_NMICON_NMIOT_Msk, 0u);
}

void NMI_WDT_Int_Clr(void){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_NMIWDTC_Pos, (uint8)SCU_NMICLR_NMIWDTC_Msk, 1u);
}

void NMI_PLL_Int_Clr(void){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_NMIPLLC_Pos, (uint8)SCU_NMICLR_NMIPLLC_Msk, 1u);
}

void NMI_NVM_Int_Clr(void){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_NMINVMC_Pos, (uint8)SCU_NMICLR_NMINVMC_Msk, 1u);
}

void NMI_OT_Int_Clr(void){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_NMIOTC_Pos, (uint8)SCU_NMICLR_NMIOTC_Msk, 1u);
}

void NMI_OWD_Int_Clr(void){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_NMIOWDC_Pos, (uint8)SCU_NMICLR_NMIOWDC_Msk, 1u);
}

void NMI_MAP_Int_Clr(void){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_NMIMAPC_Pos, (uint8)SCU_NMICLR_NMIMAPC_Msk, 1u);
}

void NMI_ECC_Int_Clr(void){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_NMIECCC_Pos, (uint8)SCU_NMICLR_NMIECCC_Msk, 1u);
}

void NMI_SUP_Int_Clr(void){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_NMISUPC_Pos, (uint8)SCU_NMICLR_NMISUPC_Msk, 1u);
}

void NVIC_Node0_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_GPT1_Pos, (uint32)CPU_NVIC_ISER0_Int_GPT1_Msk, 1u);
}

void NVIC_Node0_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_GPT1_Pos, (uint32)CPU_NVIC_ICER0_Int_GPT1_Msk, 1u);
}

void NVIC_Node1_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_GPT2_Pos, (uint32)CPU_NVIC_ISER0_Int_GPT2_Msk, 1u);
}

void NVIC_Node1_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_GPT2_Pos, (uint32)CPU_NVIC_ICER0_Int_GPT2_Msk, 1u);
}

void NVIC_Node2_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_ADC2_Pos, (uint32)CPU_NVIC_ISER0_Int_ADC2_Msk, 1u);
}

void NVIC_Node2_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_ADC2_Pos, (uint32)CPU_NVIC_ICER0_Int_ADC2_Msk, 1u);
}

void NVIC_Node3_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_ADC1_Pos, (uint32)CPU_NVIC_ISER0_Int_ADC1_Msk, 1u);
}

void NVIC_Node3_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_ADC1_Pos, (uint32)CPU_NVIC_ICER0_Int_ADC1_Msk, 1u);
}

void NVIC_Node4_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_CCU6SR0_Pos, (uint32)CPU_NVIC_ISER0_Int_CCU6SR0_Msk, 1u);
}

void NVIC_Node4_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_CCU6SR0_Pos, (uint32)CPU_NVIC_ICER0_Int_CCU6SR0_Msk, 1u);
}

void NVIC_Node5_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_CCU6SR1_Pos, (uint32)CPU_NVIC_ISER0_Int_CCU6SR1_Msk, 1u);
}

void NVIC_Node5_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_CCU6SR1_Pos, (uint32)CPU_NVIC_ICER0_Int_CCU6SR1_Msk, 1u);
}

void NVIC_Node6_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_CCU6SR2_Pos, (uint32)CPU_NVIC_ISER0_Int_CCU6SR2_Msk, 1u);
}

void NVIC_Node6_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_CCU6SR2_Pos, (uint32)CPU_NVIC_ICER0_Int_CCU6SR2_Msk, 1u);
}

void NVIC_Node7_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_CCU6SR3_Pos, (uint32)CPU_NVIC_ISER0_Int_CCU6SR3_Msk, 1u);
}

void NVIC_Node7_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_CCU6SR3_Pos, (uint32)CPU_NVIC_ICER0_Int_CCU6SR3_Msk, 1u);
}

void NVIC_Node8_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_SSC1_Pos, (uint32)CPU_NVIC_ISER0_Int_SSC1_Msk, 1u);
}

void NVIC_Node8_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_SSC1_Pos, (uint32)CPU_NVIC_ICER0_Int_SSC1_Msk, 1u);
}

void NVIC_Node9_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_SSC2_Pos, (uint32)CPU_NVIC_ISER0_Int_SSC2_Msk, 1u);
}

void NVIC_Node9_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_SSC2_Pos, (uint32)CPU_NVIC_ICER0_Int_SSC2_Msk, 1u);
}

void NVIC_Node10_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_UART1_Pos, (uint32)CPU_NVIC_ISER0_Int_UART1_Msk, 1u);
}

void NVIC_Node10_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_UART1_Pos, (uint32)CPU_NVIC_ICER0_Int_UART1_Msk, 1u);
}

void NVIC_Node11_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_UART2_Pos, (uint32)CPU_NVIC_ISER0_Int_UART2_Msk, 1u);
}

void NVIC_Node11_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_UART2_Pos, (uint32)CPU_NVIC_ICER0_Int_UART2_Msk, 1u);
}

void NVIC_Node12_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_EXINT0_Pos, (uint32)CPU_NVIC_ISER0_Int_EXINT0_Msk, 1u);
}

void NVIC_Node12_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_EXINT0_Pos, (uint32)CPU_NVIC_ICER0_Int_EXINT0_Msk, 1u);
}

void NVIC_Node13_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_EXINT1_Pos, (uint32)CPU_NVIC_ISER0_Int_EXINT1_Msk, 1u);
}

void NVIC_Node13_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_EXINT1_Pos, (uint32)CPU_NVIC_ICER0_Int_EXINT1_Msk, 1u);
}

void NVIC_Node14_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_BDRV_Pos, (uint32)CPU_NVIC_ISER0_Int_BDRV_Msk, 1u);
}

void NVIC_Node14_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_BDRV_Pos, (uint32)CPU_NVIC_ICER0_Int_BDRV_Msk, 1u);
}

void NVIC_Node15_En(void){
  Field_Wrt32(&CPU.NVIC_ISER0.reg, (uint32)CPU_NVIC_ISER0_Int_DMA_Pos, (uint32)CPU_NVIC_ISER0_Int_DMA_Msk, 1u);
}

void NVIC_Node15_Dis(void){
  Field_Wrt32(&CPU.NVIC_ICER0.reg, (uint32)CPU_NVIC_ICER0_Int_DMA_Pos, (uint32)CPU_NVIC_ICER0_Int_DMA_Msk, 1u);
}

void BEMF_Phase_U_Hi_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHU_ZCHI_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHU_ZCHI_IE_Msk, 1u);
}

void BEMF_Phase_U_Hi_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHU_ZCHI_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHU_ZCHI_IE_Msk, 0u);
}

void BEMF_Phase_U_Lo_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHU_ZCLOW_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHU_ZCLOW_IE_Msk, 1u);
}

void BEMF_Phase_U_Lo_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHU_ZCLOW_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHU_ZCLOW_IE_Msk, 0u);
}

void BEMF_Phase_V_Hi_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHV_ZCHI_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHV_ZCHI_IE_Msk, 1u);
}

void BEMF_Phase_V_Hi_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHV_ZCHI_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHV_ZCHI_IE_Msk, 0u);
}

void BEMF_Phase_V_Lo_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHV_ZCLOW_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHV_ZCLOW_IE_Msk, 1u);
}

void BEMF_Phase_V_Lo_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHV_ZCLOW_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHV_ZCLOW_IE_Msk, 0u);
}

void BEMF_Phase_W_Hi_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHW_ZCHI_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHW_ZCHI_IE_Msk, 1u);
}

void BEMF_Phase_W_Hi_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHW_ZCHI_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHW_ZCHI_IE_Msk, 0u);
}

void BEMF_Phase_W_Lo_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHW_ZCLOW_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHW_ZCLOW_IE_Msk, 1u);
}

void BEMF_Phase_W_Lo_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint32)SCUPM_SYS_IRQ_CTRL_PHW_ZCLOW_IE_Pos, (uint32)SCUPM_SYS_IRQ_CTRL_PHW_ZCLOW_IE_Msk, 0u);
}

void BEMF_Phase_U_Hi_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint32)SCUPM_SYS_ISCLR_PHU_ZCHI_SCLR_Pos, (uint32)SCUPM_SYS_ISCLR_PHU_ZCHI_SCLR_Msk, 1u);
}

void BEMF_Phase_U_Lo_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint32)SCUPM_SYS_ISCLR_PHU_ZCLOW_SCLR_Pos, (uint32)SCUPM_SYS_ISCLR_PHU_ZCLOW_SCLR_Msk, 1u);
}

void BEMF_Phase_V_Hi_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint32)SCUPM_SYS_ISCLR_PHV_ZCHI_SCLR_Pos, (uint32)SCUPM_SYS_ISCLR_PHV_ZCHI_SCLR_Msk, 1u);
}

void BEMF_Phase_V_Lo_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint32)SCUPM_SYS_ISCLR_PHV_ZCLOW_SCLR_Pos, (uint32)SCUPM_SYS_ISCLR_PHV_ZCLOW_SCLR_Msk, 1u);
}

void BEMF_Phase_W_Hi_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint32)SCUPM_SYS_ISCLR_PHW_ZCHI_SCLR_Pos, (uint32)SCUPM_SYS_ISCLR_PHW_ZCHI_SCLR_Msk, 1u);
}

void BEMF_Phase_W_Lo_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint32)SCUPM_SYS_ISCLR_PHW_ZCLOW_SCLR_Pos, (uint32)SCUPM_SYS_ISCLR_PHW_ZCLOW_SCLR_Msk, 1u);
}

uint8 INT_Get_NMI_Status(void){
   return u8_Field_Rd8(&SCU.NMISR.reg, (uint8)SCU_NMISR_Pos, (uint8)SCU_NMISR_Msk);
}

void INT_Clr_NMI_Status(uint8 Flags){
  Field_Wrt8(&SCU.NMICLR.reg, (uint8)SCU_NMICLR_Pos, (uint8)SCU_NMICLR_Msk, Flags);
}

void INT_Enable_Global_Int(void){
  Global_Int_En();
}

void INT_Disable_Global_Int(void){
  Global_Int_Dis();
}
*/
/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

