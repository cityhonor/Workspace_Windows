/******************************************************************************/
/* File   : Wrapper_HBG_StbMB.cpp                                             */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright � 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Wrapper_HBG_StbMB.h"
#ifdef _EcuVirtual
#include "RTE_Stub_StbMB.h"
#else
#endif

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

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
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_StbMB_GetAbsoluteTime(P2VAR(StbMB_SystemTimeType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) systemTime){
   return RTE_Stub_Call_StbMB_GetAbsoluteTime(systemTime);
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_StbMB_GetGlobalTime(P2VAR(StbMB_TickType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ticks){
   return RTE_Stub_Call_StbMB_GetGlobalTime(ticks);
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_StbMB_GetSyncState(P2VAR(StbMB_SyncStatusType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) syncState){
   return RTE_Stub_Call_StbMB_GetSyncState(syncState);
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_StbMB_GetTickDuration(P2VAR(uint32, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) tickDuration){
   return RTE_Stub_Call_StbMB_GetTickDuration(tickDuration);
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

