#pragma once
/******************************************************************************/
/* File   : McalIcu_core.hpp                                                      */
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
#include "CompilerCfg_McalIcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALICU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALICU_CODE) SetMode                (void);              \
              FUNC(void, MCALICU_CODE) DisableWakeup          (void);              \
              FUNC(void, MCALICU_CODE) SetActivationCondition (void);              \
              FUNC(void, MCALICU_CODE) DisableNotification    (void);              \
              FUNC(void, MCALICU_CODE) EnableNotification     (void);              \
              FUNC(void, MCALICU_CODE) GetInputState          (void);              \
              FUNC(void, MCALICU_CODE) StartTimeStamp         (void);              \
              FUNC(void, MCALICU_CODE) StopTimeStamp          (void);              \
              FUNC(void, MCALICU_CODE) GetTimeStampIndex      (void);              \
              FUNC(void, MCALICU_CODE) ResetEdgeCount         (void);              \
              FUNC(void, MCALICU_CODE) DisableEdgeCount       (void);              \
              FUNC(void, MCALICU_CODE) EnableEdgeCount        (void);              \
              FUNC(void, MCALICU_CODE) GetEdgeNumbers         (void);              \
              FUNC(void, MCALICU_CODE) StartSignalMeasurement (void);              \
              FUNC(void, MCALICU_CODE) StopSignalMeasurement  (void);              \
              FUNC(void, MCALICU_CODE) GetTimeElapsed         (void);              \
              FUNC(void, MCALICU_CODE) GetDutyCycleValues     (void);              \

#define MCALICU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALICU_CODE) SetMode                (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) DisableWakeup          (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) SetActivationCondition (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) DisableNotification    (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) EnableNotification     (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) GetInputState          (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) StartTimeStamp         (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) StopTimeStamp          (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) GetTimeStampIndex      (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) ResetEdgeCount         (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) DisableEdgeCount       (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) EnableEdgeCount        (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) GetEdgeNumbers         (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) StartSignalMeasurement (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) StopSignalMeasurement  (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) GetTimeElapsed         (void) = 0;          \
      virtual FUNC(void, MCALICU_CODE) GetDutyCycleValues     (void) = 0;          \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalIcu_Functionality{
   public:
      MCALICU_CORE_FUNCTIONALITIES_VIRTUAL
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

