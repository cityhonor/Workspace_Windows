/******************************************************************************/
/* File   : Wrapper_HBG_NvmServices.cpp                                       */
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
#include "Wrapper_HBG_NvmServices.h"
#ifdef _EcuVirtual
#include "RTE_Stub_NvmServices.h"
#else
#endif

#include <stdio.h>
#include <string.h>

#include "crc16X.h"

#include "JumpTable.h"

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
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciCommonBlock_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciCommonBlock_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciCommonBlock_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciCommonBlock_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciCommonBlock_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciCommonBlock_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsEcoBlock_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsEcoBlock_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsEcoBlock_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsEcoBlock_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsEcoBlock_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsEcoBlock_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock1_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock1_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock1_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock1_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock1_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock1_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock2_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock2_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock2_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock2_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock2_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciDiagBlock2_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsBlock_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsBlock_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsBlock_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsBlock_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsBlock_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsBlock_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsTsaBlock_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsTsaBlock_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsTsaBlock_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsTsaBlock_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsTsaBlock_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciErfsTsaBlock_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciWarnStatusBlock_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciWarnStatusBlock_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciWarnStatusBlock_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciWarnStatusBlock_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciWarnStatusBlock_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciWarnStatusBlock_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZoHistoryBlock_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZoHistoryBlock_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZoHistoryBlock_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZoHistoryBlock_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZoHistoryBlock_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZoHistoryBlock_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock1_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock1_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock1_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock1_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock1_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock1_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock2_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock2_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock2_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock2_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock2_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciRidQrBlock2_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock1_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock1_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock1_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock1_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock1_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock1_WriteBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_GetDataIndex(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock2_GetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock2_GetErrorStatus(ErrorStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock2_ReadBlock(Data)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_SetDataIndex(VAR(uint8, AUTOMATIC) DataIndex){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock2_SetDataIndex(DataIndex)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_SetRamBlockStatus(VAR(boolean, AUTOMATIC) BlockStatus){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock2_SetRamBlockStatus(BlockStatus)
#else
      E_OK
#endif
   );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_Call_NvmRdciZomBlock2_WriteBlock(Data)
#else
      E_OK
#endif
   );
}


/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

