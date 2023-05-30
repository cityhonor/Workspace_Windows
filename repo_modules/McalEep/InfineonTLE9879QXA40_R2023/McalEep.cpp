/******************************************************************************/
/* File   : McalEep.cpp                                                       */
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
#include "McalEep.hpp"
#include "infMcalEep_Imp.hpp"

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
VAR(module_McalEep, MCALEEP_VAR) McalEep;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALEEP_CODE) module_McalEep::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALEEP_CONST,       MCALEEP_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALEEP_CONFIG_DATA, MCALEEP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalEep_InitCheck)
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
#if(STD_ON == McalEep_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalEep_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalEep_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALEEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALEEP_CODE) module_McalEep::DeInitFunction(
   void
){
#if(STD_ON == McalEep_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalEep_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalEep_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALEEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALEEP_CODE) module_McalEep::MainFunction(
   void
){
#if(STD_ON == McalEep_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalEep_InitCheck)
   }
   else{
#if(STD_ON == McalEep_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALEEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALEEP_CODE) module_McalEep::SetMode(
   void
){
}

FUNC(void, MCALEEP_CODE) module_McalEep::Read(
   void
){
}

FUNC(void, MCALEEP_CODE) module_McalEep::Write(
   void
){
}

FUNC(void, MCALEEP_CODE) module_McalEep::Erase(
   void
){
}

FUNC(void, MCALEEP_CODE) module_McalEep::ServiceCompare(
   void
){
}

FUNC(void, MCALEEP_CODE) module_McalEep::McalCancel(
   void
){
}

FUNC(void, MCALEEP_CODE) module_McalEep::GetStatus(
   void
){
}

FUNC(void, MCALEEP_CODE) module_McalEep::GetJobResult(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

