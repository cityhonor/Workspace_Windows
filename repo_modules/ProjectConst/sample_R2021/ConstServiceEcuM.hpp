#pragma once
/******************************************************************************/
/* File   : ConstServiceEcuM.hpp                                                     */
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
#include "ConstModule.hpp"

#include "infMcalMcu_ServiceEcuM.hpp"
#include "infServiceOs_ServiceEcuM.hpp"
#include "infServiceSwcEcuM_ServiceEcuM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTECUM_AR_RELEASE_VERSION_MAJOR                                     4
#define CONSTECUM_AR_RELEASE_VERSION_MINOR                                     3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTECUM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGECUM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTECUM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGECUM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstServiceEcuM_Type:
      public ConstModule_TypeAbstract
{
   public:
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
      infMcalMcu_ServiceEcuM*            ptrinfMcalMcu_ServiceEcuM;
      infServiceOs_ServiceEcuM*             ptrinfServiceOs_ServiceEcuM;
      infServiceSwcEcuM_ServiceEcuM* ptrinfServiceSwcEcuM_ServiceEcuM;
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

