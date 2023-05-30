#pragma once
/******************************************************************************/
/* File   : CfgServiceDcm.hpp                                                        */
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
#include "CfgModule.hpp"
#include "CompilerCfg_ServiceDcm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGDCM_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGDCM_AR_RELEASE_VERSION_MINOR                                        3
#define ServiceDcm_DevErrorDetect                                        DevErrorDetect
#define ServiceDcm_InitCheck                                                     STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGDCM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGDCM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGDCM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGDCM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eStatus_OK                    = 0
   ,  eStatus_RoeNotAccepted        = 6
   ,  eStatus_PeriodicIdNotAccepted = 7
}CfgServiceDcm_TypeStatus;

typedef enum{
      eModeServiceCommunication_NormEnaRxEnaTx = 0
   ,  eModeServiceCommunication_NormEnaRxDisTx
   ,  eModeServiceCommunication_NormDisRxEnaTx
   ,  eModeServiceCommunication_NormDisRxDisTx
   ,  eModeServiceCommunication_ServiceNmEnaRxEnaTx
   ,  eModeServiceCommunication_ServiceNmEnaRxDisTx
   ,  eModeServiceCommunication_ServiceNmDisRxEnaTx
   ,  eModeServiceCommunication_ServiceNmDisRxDisTx
   ,  eModeServiceCommunication_NormServiceNmEnaRxEnaTx
   ,  eModeServiceCommunication_NormServiceNmEnaRxDisTx
   ,  eModeServiceCommunication_NormServiceNmDisRxEnaTx
   ,  eModeServiceCommunication_NormServiceNmDisRxDisTx
}CfgServiceDcm_TypeModeServiceCommunication;

typedef enum{
      eReturnMemoryRead_OK = 0
   ,  eReturnMemoryRead_Pending
   ,  eReturnMemoryRead_Failed
   ,  eReturnMemoryRead_ForceRcrrp
}CfgServiceDcm_TypeReturnMemoryRead;

typedef enum{
      eReturnMemoryWrite_OK = 0
   ,  eReturnMemoryWrite_Pending
   ,  eReturnMemoryWrite_Failed
   ,  eReturnMemoryWrite_ForceRcrrp
}CfgServiceDcm_TypeReturnMemoryWrite;

typedef enum{
      eModeEcuStart_Cold = 0
   ,  eModeEcuStart_Warm
}CfgServiceDcm_TypeModeEcuStart;

typedef struct{
   uint16 IdConnection;
   uint16 AddressTester;
   uint8  IdService;
   uint8  IdSubFunc;
   bool   RequestReprograming;
   bool   ApplUpdated;
   bool   ResponseRequired;
}CfgServiceDcm_TypeConditionsProg;

typedef uint8               CfgServiceDcm_TypeItemMsg;
typedef CfgServiceDcm_TypeItemMsg* CfgServiceDcm_TypeMsg;
typedef uint32              CfgServiceDcm_TypeLenMsg;
typedef uint8               CfgServiceDcm_TypeIdContext;

typedef struct{
   uint8 TypeReq             : 1;
   uint8 suppressPosResponse : 1;
}CfgServiceDcm_TypeInfoMsgAdd;

#include "ComStackTypes.hpp" //TBD: move as per architecture

typedef struct{
   CfgServiceDcm_TypeMsg        reqData;
   CfgServiceDcm_TypeLenMsg     reqDataLen;
   CfgServiceDcm_TypeMsg        resData;
   CfgServiceDcm_TypeLenMsg     resDataLen;
   CfgServiceDcm_TypeInfoMsgAdd msgAddInfo;
   CfgServiceDcm_TypeLenMsg     resDataLenMax;
   CfgServiceDcm_TypeIdContext  idContext;
   TypeIdPdu             IdPduServiceDcmRx;
}TypeMsgContext;

typedef enum{
      eStatusExtendedOp_Initial = 0
   ,  eStatusExtendedOp_Pending
   ,  eStatusExtendedOp_McalCancel
   ,  eStatusExtendedOp_ForceRcrrpOk
   ,  eStatusExtendedOp_PosResponseSent
   ,  eStatusExtendedOp_PosResponseFailed
   ,  eStatusExtendedOp_NegResponseSent
   ,  eStatusExtendedOp_NegResponseFailed
}CfgServiceDcm_TypeStatusExtendedOp;

class CfgServiceDcm_Type:
      public CfgModule_TypeAbstract
{
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

