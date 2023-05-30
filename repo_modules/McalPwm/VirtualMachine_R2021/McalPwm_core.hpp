#pragma once
/******************************************************************************/
/* File   : McalPwm_core.hpp                                                      */
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
#include "CompilerCfg_McalPwm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PWM_CORE_FUNCTIONALITIES                                               \
              FUNC(void, PWM_CODE) SetDutyCycle         (void);                \
              FUNC(void, PWM_CODE) SetPeriodAndDuty     (void);                \
              FUNC(void, PWM_CODE) SetOutputToIdle      (void);                \
              FUNC(void, PWM_CODE) SetOutputState       (void);                \
              FUNC(void, PWM_CODE) DisableNotification  (void);                \
              FUNC(void, PWM_CODE) EnableNotification   (void);                \
              FUNC(void, PWM_CODE) SetPowerState        (void);                \
              FUNC(void, PWM_CODE) GetCurrentPowerState (void);                \
              FUNC(void, PWM_CODE) GetTargetPowerState  (void);                \
              FUNC(void, PWM_CODE) PreparePowerState    (void);                \

#define PWM_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, PWM_CODE) SetDutyCycle         (void) = 0;            \
      virtual FUNC(void, PWM_CODE) SetPeriodAndDuty     (void) = 0;            \
      virtual FUNC(void, PWM_CODE) SetOutputToIdle      (void) = 0;            \
      virtual FUNC(void, PWM_CODE) SetOutputState       (void) = 0;            \
      virtual FUNC(void, PWM_CODE) DisableNotification  (void) = 0;            \
      virtual FUNC(void, PWM_CODE) EnableNotification   (void) = 0;            \
      virtual FUNC(void, PWM_CODE) SetPowerState        (void) = 0;            \
      virtual FUNC(void, PWM_CODE) GetCurrentPowerState (void) = 0;            \
      virtual FUNC(void, PWM_CODE) GetTargetPowerState  (void) = 0;            \
      virtual FUNC(void, PWM_CODE) PreparePowerState    (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalPwm_Functionality{
   public:
      PWM_CORE_FUNCTIONALITIES_VIRTUAL
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

