/******************************************************************************/
/* File   : McalSpi.cpp                                                       */
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
#include "McalSpi.hpp"
#include "infMcalSpi_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALSPI_AR_RELEASE_VERSION_MAJOR                                       4
#define MCALSPI_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALSPI_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALSPI_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALSPI_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALSPI_AR_RELEASE_VERSION_MINOR!"
#endif

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
VAR(module_McalSpi, MCALSPI_VAR) McalSpi;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALSPI_CODE) module_McalSpi::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALSPI_CONST,       MCALSPI_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALSPI_CONFIG_DATA, MCALSPI_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalSpi_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalSpi_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalSpi_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalSpi_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalSpi_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALSPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALSPI_CODE) module_McalSpi::DeInitFunction(
   void
){
#if(STD_ON == McalSpi_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalSpi_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalSpi_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALSPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALSPI_CODE) module_McalSpi::MainFunction(
   void
){
#if(STD_ON == McalSpi_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalSpi_InitCheck)
   }
   else{
#if(STD_ON == McalSpi_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALSPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALSPI_CODE) module_McalSpi::WriteIB(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::AsyncTransmit(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::ReadIB(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::SetupEB(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::GetStatus(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::GetJobResult(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::GetSequenceResult(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::SyncTransmit(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::GetHWUnitStatus(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::McalCancel(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::SetAsyncMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

