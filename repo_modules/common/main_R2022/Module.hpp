#pragma once
/******************************************************************************/
/* File   : Module.hpp                                                        */
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
#include "Std_Types.hpp"

#include "infServiceEcuMClient.hpp"
#include "infServiceDcmClient.hpp"
#include "infServiceDetClient.hpp"
#include "infServiceSchMClient.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class abstract_module:
      public infServiceDcmClient
   ,  public infServiceEcuMClient
   ,  public infServiceSchMClient
{
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
   public:
      const CfgModule_TypeAbstract* lptrCfg = (CfgModule_TypeAbstract*)NULL_PTR;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
   public:
      Std_TypeReturn IsInitDone = E_NOT_OK;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

