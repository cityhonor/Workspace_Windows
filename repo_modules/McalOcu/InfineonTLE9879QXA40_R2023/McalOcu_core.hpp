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
#define MCALOCU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALOCU_CODE) StartChannel         (void);                \
              FUNC(void, MCALOCU_CODE) StopChannel          (void);                \
              FUNC(void, MCALOCU_CODE) SetPinState          (void);                \
              FUNC(void, MCALOCU_CODE) SetPinAction         (void);                \
              FUNC(void, MCALOCU_CODE) GetCounter           (void);                \
              FUNC(void, MCALOCU_CODE) SetAbsoluteThreshold (void);                \
              FUNC(void, MCALOCU_CODE) SetRelativeThreshold (void);                \
              FUNC(void, MCALOCU_CODE) DisableNotification  (void);                \
              FUNC(void, MCALOCU_CODE) EnableNotification   (void);                \

#define MCALOCU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALOCU_CODE) StartChannel         (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) StopChannel          (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) SetPinState          (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) SetPinAction         (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) GetCounter           (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) SetAbsoluteThreshold (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) SetRelativeThreshold (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) DisableNotification  (void) = 0;            \
      virtual FUNC(void, MCALOCU_CODE) EnableNotification   (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalOcu_Functionality{
   public:
      MCALOCU_CORE_FUNCTIONALITIES_VIRTUAL
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

