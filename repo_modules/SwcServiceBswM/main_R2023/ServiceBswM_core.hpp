#pragma once
/******************************************************************************/
/* File   : ServiceBswM_core.hpp                                                     */
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
#include "CompilerCfg_ServiceBswM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEBSWM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, SERVICEBSWM_CODE) CurrentWakeupSources           (void);     \
              FUNC(void, SERVICEBSWM_CODE) PartitionRestarted             (void);     \
              FUNC(void, SERVICEBSWM_CODE) CurrentIcomConfiguration       (void);     \
              FUNC(void, SERVICEBSWM_CODE) CurrentState                   (void);     \
              FUNC(void, SERVICEBSWM_CODE) CurrentMode                    (void);     \
              FUNC(void, SERVICEBSWM_CODE) CurrentPNCMode                 (void);     \
              FUNC(void, SERVICEBSWM_CODE) InitiateReset                  (void);     \
              FUNC(void, SERVICEBSWM_CODE) ApplicationUpdated             (void);     \
              FUNC(void, SERVICEBSWM_CODE) CurrentWakeup                  (void);     \
              FUNC(void, SERVICEBSWM_CODE) McalPortGroupMcalLinkStateChg          (void);     \
              FUNC(void, SERVICEBSWM_CODE) BroadcastStatus                (void);     \
              FUNC(void, SERVICEBSWM_CODE) StateChangeNotification        (void);     \
              FUNC(void, SERVICEBSWM_CODE) CurrentSchedule                (void);     \
              FUNC(void, SERVICEBSWM_CODE) RequestMode                    (void);     \
              FUNC(void, SERVICEBSWM_CODE) CarWakeUpIndication            (void);     \
              FUNC(void, SERVICEBSWM_CODE) CurrentBlockMode               (void);     \
              FUNC(void, SERVICEBSWM_CODE) CurrentJobMode                 (void);     \
              FUNC(void, SERVICEBSWM_CODE) ClientServiceCurrentState      (void);     \
              FUNC(void, SERVICEBSWM_CODE) ConsumedEventGroupCurrentState (void);     \
              FUNC(void, SERVICEBSWM_CODE) EventHandlerCurrentState       (void);     \
              FUNC(void, SERVICEBSWM_CODE) RequestPartitionReset          (void);     \

#define SERVICEBSWM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentWakeupSources           (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) PartitionRestarted             (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentIcomConfiguration       (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentState                   (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentMode                    (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentPNCMode                 (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) InitiateReset                  (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) ApplicationUpdated             (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentWakeup                  (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) McalPortGroupMcalLinkStateChg          (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) BroadcastStatus                (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) StateChangeNotification        (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentSchedule                (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) RequestMode                    (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CarWakeUpIndication            (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentBlockMode               (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) CurrentJobMode                 (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) ClientServiceCurrentState      (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) ConsumedEventGroupCurrentState (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) EventHandlerCurrentState       (void) = 0; \
      virtual FUNC(void, SERVICEBSWM_CODE) RequestPartitionReset          (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceBswM_Functionality{
   public:
      SERVICEBSWM_CORE_FUNCTIONALITIES_VIRTUAL
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

