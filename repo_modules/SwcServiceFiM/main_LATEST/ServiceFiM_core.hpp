#pragma once
/******************************************************************************/
/* File   : ServiceFiM_core.hpp                                                      */
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
#include "CompilerCfg_ServiceFiM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEFIM_CORE_FUNCTIONALITIES                                               \
              FUNC(void, SERVICEFIM_CODE) GetFunctionPermission       (void);         \
              FUNC(void, SERVICEFIM_CODE) SetFunctionAvailable        (void);         \
              FUNC(void, SERVICEFIM_CODE) ServiceDemTriggerOnMonitorStatus   (void);         \
              FUNC(void, SERVICEFIM_CODE) ServiceDemTriggerOnServiceComponentStatus (void);         \
              FUNC(void, SERVICEFIM_CODE) ServiceDemInitFunction             (void);         \
              FUNC(void, SERVICEFIM_CODE) FunctionInhibition          (void);         \
              FUNC(void, SERVICEFIM_CODE) ControlFunctionAvailable    (void);         \
              FUNC(void, SERVICEFIM_CODE) FunctionIdType              (void);         \

#define SERVICEFIM_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, SERVICEFIM_CODE) GetFunctionPermission       (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) SetFunctionAvailable        (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) ServiceDemTriggerOnMonitorStatus   (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) ServiceDemTriggerOnServiceComponentStatus (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) ServiceDemInitFunction             (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) FunctionInhibition          (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) ControlFunctionAvailable    (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) FunctionIdType              (void) = 0;     \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceFiM_Functionality{
   public:
      SERVICEFIM_CORE_FUNCTIONALITIES_VIRTUAL
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

