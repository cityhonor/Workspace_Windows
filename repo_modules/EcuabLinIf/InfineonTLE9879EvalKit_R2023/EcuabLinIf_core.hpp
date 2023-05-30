#pragma once
/******************************************************************************/
/* File   : EcuabLinIf_core.hpp                                                    */
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
#include "CompilerCfg_EcuabLinIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABLINIF_CORE_FUNCTIONALITIES                                             \
              FUNC(void, ECUABLINIF_CODE) Transmit             (void);              \
              FUNC(void, ECUABLINIF_CODE) ScheduleRequest      (void);              \
              FUNC(void, ECUABLINIF_CODE) GoToSleep            (void);              \
              FUNC(void, ECUABLINIF_CODE) Wakeup               (void);              \
              FUNC(void, ECUABLINIF_CODE) GetTrcvMode          (void);              \
              FUNC(void, ECUABLINIF_CODE) SetTrcvMode          (void);              \
              FUNC(void, ECUABLINIF_CODE) GetTrcvWakeupReason  (void);              \
              FUNC(void, ECUABLINIF_CODE) SetTrcvWakeupMode    (void);              \
              FUNC(void, ECUABLINIF_CODE) McalCancelTransmit       (void);              \
              FUNC(void, ECUABLINIF_CODE) CheckWakeup          (void);              \
              FUNC(void, ECUABLINIF_CODE) CbWakeupConfirmation (void);              \

#define ECUABLINIF_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, ECUABLINIF_CODE) Transmit             (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) ScheduleRequest      (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) GoToSleep            (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) Wakeup               (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) GetTrcvMode          (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) SetTrcvMode          (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) GetTrcvWakeupReason  (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) SetTrcvWakeupMode    (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) McalCancelTransmit       (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) CheckWakeup          (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) CbWakeupConfirmation (void) = 0;          \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabLinIf_Functionality{
   public:
      ECUABLINIF_CORE_FUNCTIONALITIES_VIRTUAL
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

