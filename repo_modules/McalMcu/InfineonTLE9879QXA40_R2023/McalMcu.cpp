/******************************************************************************/
/* File   : McalMcu.cpp                                                       */
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
#include "Module.hpp"
#include "McalMcu.hpp"
#include "infMcalMcu_Imp.hpp"

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
VAR(module_McalMcu, MCALMCU_VAR) McalMcu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void PMU_Init(void); //TBD: use interface headers as per architecture

FUNC(void, MCALMCU_CODE) module_McalMcu::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALMCU_CONST,       MCALMCU_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALMCU_CONFIG_DATA, MCALMCU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalMcu_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalMcu_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
      PMU_Init();
#if(STD_ON == McalMcu_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalMcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALMCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALMCU_CODE) module_McalMcu::DeInitFunction(
   void
){
#if(STD_ON == McalMcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalMcu_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalMcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALMCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALMCU_CODE) module_McalMcu::MainFunction(
   void
){
#if(STD_ON == McalMcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalMcu_InitCheck)
   }
   else{
#if(STD_ON == McalMcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALMCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALMCU_CODE) module_McalMcu::GetResetReason(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::InitRamSection(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::InitClock(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::DistributePllClock(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::GetPllStatus(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::GetResetRawValue(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::PerformReset(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::SetMode(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::GetRamState(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

