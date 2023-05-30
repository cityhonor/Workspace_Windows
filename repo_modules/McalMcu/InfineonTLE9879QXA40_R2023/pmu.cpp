/******************************************************************************/
/* File   : pmu.cpp                                                           */
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

#include "pmu.hpp"

#include "uC_Pmu.hpp"
#include "sfr_access.hpp"
#include "wdt1.hpp"
#include "cmsis_misra.hpp"

#include "pmu_defines.hpp"

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
PMU_Type PMU = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0
};

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void PMU_Init(void){
   PMU.VDDEXT_CTRL.reg          = (uint8) PMU_VDDEXT_CTRL;
   PMU.CNF_CYC_SENSE.reg        = (uint8) PMU_CNF_CYC_SENSE;
   PMU.CNF_CYC_SAMPLE_DEL.reg   = (uint8) PMU_CNF_CYC_SAMPLE_DEL;
   PMU.CNF_CYC_WAKE.reg         = (uint8) PMU_CNF_CYC_WAKE;
   PMU.CNF_PMU_SETTINGS.reg     = (uint8) PMU_CNF_PMU_SETTINGS;
   PMU.PMU_SUPPLY_STS.reg       = (uint8) PMU_PMU_SUPPLY_STS;
   PMU.LIN_WAKE_EN.reg          = (uint8) PMU_LIN_WAKE_EN;
   PMU.WAKE_CONF_GPIO0_CYC.reg  = (uint8) PMU_WAKE_CONF_GPIO0_CYC;
   PMU.WAKE_CONF_GPIO0_FALL.reg = (uint8) PMU_WAKE_CONF_GPIO0_FALL;
   PMU.WAKE_CONF_GPIO0_RISE.reg = (uint8) PMU_WAKE_CONF_GPIO0_RISE;
   PMU.WAKE_CONF_GPIO1_CYC.reg  = (uint8) PMU_WAKE_CONF_GPIO1_CYC;
   PMU.WAKE_CONF_GPIO1_FALL.reg = (uint8) PMU_WAKE_CONF_GPIO1_FALL;
   PMU.WAKE_CONF_GPIO1_RISE.reg = (uint8) PMU_WAKE_CONF_GPIO1_RISE;
   PMU.CNF_RST_TFB.reg          = (uint8) PMU_CNF_RST_TFB;
   PMU.CNF_WAKE_FILTER.reg      = (uint8) PMU_CNF_WAKE_FILTER;
}

/*
void PMU_VDDEXT_Int_En(void){
  Field_Mod8(&PMU.VDDEXT_CTRL.reg, (uint8)PMU_VDDEXT_CTRL_FAIL_EN_Pos, (uint8)PMU_VDDEXT_CTRL_FAIL_EN_Msk, 1u);
}

void PMU_VDDEXT_Int_Dis(void){
  Field_Mod8(&PMU.VDDEXT_CTRL.reg, (uint8)PMU_VDDEXT_CTRL_FAIL_EN_Pos, (uint8)PMU_VDDEXT_CTRL_FAIL_EN_Msk, 0u);
}

void PMU_VDDC_Int_En(void){
  Field_Mod8(&PMU.PMU_SUPPLY_STS.reg, (uint8)PMU_PMU_SUPPLY_STS_PMU_1V5_FAIL_EN_Pos, (uint8)PMU_PMU_SUPPLY_STS_PMU_1V5_FAIL_EN_Msk, 1u);
}

void PMU_VDDC_Int_Dis(void){
  Field_Mod8(&PMU.PMU_SUPPLY_STS.reg, (uint8)PMU_PMU_SUPPLY_STS_PMU_1V5_FAIL_EN_Pos, (uint8)PMU_PMU_SUPPLY_STS_PMU_1V5_FAIL_EN_Msk, 0u);
}

void PMU_VDDP_Int_En(void){
  Field_Mod8(&PMU.PMU_SUPPLY_STS.reg, (uint8)PMU_PMU_SUPPLY_STS_PMU_5V_FAIL_EN_Pos, (uint8)PMU_PMU_SUPPLY_STS_PMU_5V_FAIL_EN_Msk, 1u);
}

void PMU_VDDP_Int_Dis(void){
  Field_Mod8(&PMU.PMU_SUPPLY_STS.reg, (uint8)PMU_PMU_SUPPLY_STS_PMU_5V_FAIL_EN_Pos, (uint8)PMU_PMU_SUPPLY_STS_PMU_5V_FAIL_EN_Msk, 0u);
}

uint8 PMU_Get_Reset_Status(void){
   return u8_Field_Rd8(&PMU.PMU_RESET_STS1.reg, 0u, 0xFFu);
}

void PMU_Clear_Reset_Status(void){
  Field_Wrt8all(&PMU.PMU_RESET_STS1.reg, 0u);
}

uint8 PMU_VDDEXT_Off(void){
  Field_Mod8(&PMU.VDDEXT_CTRL.reg, (uint8)PMU_VDDEXT_CTRL_ENABLE_Pos, (uint8)PMU_VDDEXT_CTRL_ENABLE_Msk, 0u);
   return u1_Field_Rd8(&PMU.VDDEXT_CTRL.reg, (uint8)PMU_VDDEXT_CTRL_STABLE_Pos, (uint8)PMU_VDDEXT_CTRL_STABLE_Msk);
}

void PMU_VDDEXT_Short_Clr(void){
  Field_Clr8(&PMU.VDDEXT_CTRL.reg, 0x08);
}

void PMU_VDDEXT_Set(uint8 FlagMask){
  Field_Mod8(&PMU.VDDEXT_CTRL.reg, 0u, (uint8)FlagMask, 0xFFu);
}
*/
/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

