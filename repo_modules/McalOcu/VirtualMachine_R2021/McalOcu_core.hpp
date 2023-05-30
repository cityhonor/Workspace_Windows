#pragma once
/******************************************************************************/
/* File   : McalOcu_core.hpp                                                      */
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
#include "CompilerCfg_McalOcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define OCU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, OCU_CODE) StartChannel         (void);                \
              FUNC(void, OCU_CODE) StopChannel          (void);                \
              FUNC(void, OCU_CODE) SetPinState          (void);                \
              FUNC(void, OCU_CODE) SetPinAction         (void);                \
              FUNC(void, OCU_CODE) GetCounter           (void);                \
              FUNC(void, OCU_CODE) SetAbsoluteThreshold (void);                \
              FUNC(void, OCU_CODE) SetRelativeThreshold (void);                \
              FUNC(void, OCU_CODE) DisableNotification  (void);                \
              FUNC(void, OCU_CODE) EnableNotification   (void);                \

#define OCU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, OCU_CODE) StartChannel         (void) = 0;            \
      virtual FUNC(void, OCU_CODE) StopChannel          (void) = 0;            \
      virtual FUNC(void, OCU_CODE) SetPinState          (void) = 0;            \
      virtual FUNC(void, OCU_CODE) SetPinAction         (void) = 0;            \
      virtual FUNC(void, OCU_CODE) GetCounter           (void) = 0;            \
      virtual FUNC(void, OCU_CODE) SetAbsoluteThreshold (void) = 0;            \
      virtual FUNC(void, OCU_CODE) SetRelativeThreshold (void) = 0;            \
      virtual FUNC(void, OCU_CODE) DisableNotification  (void) = 0;            \
      virtual FUNC(void, OCU_CODE) EnableNotification   (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalOcu_Functionality{
   public:
      OCU_CORE_FUNCTIONALITIES_VIRTUAL
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

