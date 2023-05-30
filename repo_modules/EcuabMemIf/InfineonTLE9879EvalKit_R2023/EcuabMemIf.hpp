#pragma once
/******************************************************************************/
/* File   : EcuabMemIf.hpp                                                    */
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
#include "infEcuabMemIf_ServiceNvM_Types.hpp"
#include "CfgEcuabMemIf.hpp"
#include "EcuabMemIf_core.hpp"
#include "infEcuabMemIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabMemIf:
      INTERFACES_EXPORTED_ECUABMEMIF
   ,  public abstract_module
   ,  public class_EcuabMemIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABMEMIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABMEMIF_CONST,       ECUABMEMIF_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABMEMIF_CONFIG_DATA, ECUABMEMIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABMEMIF_CODE) DeInitFunction (void);
      FUNC(void, ECUABMEMIF_CODE) MainFunction   (void);
      ECUABMEMIF_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabMemIf, ECUABMEMIF_VAR) EcuabMemIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

