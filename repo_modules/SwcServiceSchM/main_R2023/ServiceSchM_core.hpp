#pragma once
/******************************************************************************/
/* File   : ServiceSchM_core.hpp                                                     */
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
#include "CompilerCfg_ServiceSchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICESCHM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, SERVICESCHM_CODE) Enter              (void);                 \
              FUNC(void, SERVICESCHM_CODE) Exit               (void);                 \
              FUNC(void, SERVICESCHM_CODE) ActMainFunction    (void);                 \
              FUNC(void, SERVICESCHM_CODE) McalCancelMainFunction (void);                 \

#define SERVICESCHM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, SERVICESCHM_CODE) Enter              (void) = 0;             \
      virtual FUNC(void, SERVICESCHM_CODE) Exit               (void) = 0;             \
      virtual FUNC(void, SERVICESCHM_CODE) ActMainFunction    (void) = 0;             \
      virtual FUNC(void, SERVICESCHM_CODE) McalCancelMainFunction (void) = 0;             \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceSchM_Functionality{
   public:
      SERVICESCHM_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

