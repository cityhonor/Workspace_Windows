#pragma once
/******************************************************************************/
/* File   : ServiceBswM.hpp                                                          */
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
#include "ConstServiceBswM.hpp"
#include "CfgServiceBswM.hpp"
#include "ServiceBswM_core.hpp"
#include "infServiceBswM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceBswM:
      INTERFACES_EXPORTED_SERVICEBSWM
      public abstract_module
   ,  public class_ServiceBswM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceBswM_Type* lptrConst = (ConstServiceBswM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEBSWM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEBSWM_CONST,       SERVICEBSWM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEBSWM_CONFIG_DATA, SERVICEBSWM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEBSWM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEBSWM_CODE) MainFunction   (void);
      SERVICEBSWM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceBswM, SERVICEBSWM_VAR) ServiceBswM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

