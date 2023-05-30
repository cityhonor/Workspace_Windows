#pragma once
/******************************************************************************/
/* File   : McalMcu.hpp                                                           */
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
#include "ConstMcalMcu.hpp"
#include "CfgMcalMcu.hpp"
#include "McalMcu_core.hpp"
#include "infMcalMcu_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalMcu:
      INTERFACES_EXPORTED_MCU
      public abstract_module
   ,  public infMcalMcu_ServiceEcuM
   ,  public class_McalMcu_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalMcu_Type* lptrConst = (ConstMcalMcu_Type*)NULL_PTR;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
   public:
      FUNC(void, MCU_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCU_CONST,       MCU_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCU_CONFIG_DATA, MCU_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCU_CODE) DeInitFunction (void);
      FUNC(void, MCU_CODE) MainFunction   (void);
      MCU_CORE_FUNCTIONALITIES
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
extern VAR(module_McalMcu, MCU_VAR) McalMcu;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

