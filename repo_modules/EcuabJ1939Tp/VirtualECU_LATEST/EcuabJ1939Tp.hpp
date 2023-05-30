#pragma once
/******************************************************************************/
/* File   : EcuabJ1939Tp.hpp                                                       */
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
#include "ConstEcuabJ1939Tp.hpp"
#include "CfgEcuabJ1939Tp.hpp"
#include "EcuabJ1939Tp_core.hpp"
#include "infEcuabJ1939Tp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabJ1939Tp:
      INTERFACES_EXPORTED_ECUABJ1939TP
      public abstract_module
   ,  public class_EcuabJ1939Tp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabJ1939Tp_Type* lptrConst = (ConstEcuabJ1939Tp_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabJ1939Tp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABJ1939TP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABJ1939TP_CONST,       ECUABJ1939TP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABJ1939TP_CONFIG_DATA, ECUABJ1939TP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABJ1939TP_CODE) DeInitFunction (void);
      FUNC(void, ECUABJ1939TP_CODE) MainFunction   (void);
      ECUABJ1939TP_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabJ1939Tp, ECUABJ1939TP_VAR) EcuabJ1939Tp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

