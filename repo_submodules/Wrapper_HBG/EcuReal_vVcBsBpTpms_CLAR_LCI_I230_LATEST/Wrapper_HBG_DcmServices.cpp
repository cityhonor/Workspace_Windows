/******************************************************************************/
/* File   : Wrapper_HBG_DcmServices.cpp                                       */
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
#include "Wrapper_HBG_DcmServices.h"
#ifdef _EcuVirtual
#include "RTE_Stub_DcmServices.h"
#else
#endif

#include "Rte_CtApHufTpmsSWC.h"

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
ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcLesen(ImpTypeArrayDcm_StatusRdcLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcMessdatenblock1(ImpTypeArrayDcm_RdcMessdatenblock1ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcMessdatenblock1(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcMessdatenblock2(ImpTypeArrayDcm_RdcMessdatenblock2ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcMessdatenblock2(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcMessdatenblock3(ImpTypeArrayDcm_RdcMessdatenblock3ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcMessdatenblock3(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcMessdatenblock4(ImpTypeArrayDcm_RdcMessdatenblock4ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcMessdatenblock4(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcVersion(ImpTypeArrayDcm_StatusRdcVersionReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcVersion(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcAnlernenLokalisierungLesen(ImpTypeArrayDcm_RdcAnlernenLokalisierungLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcAnlernenLokalisierungLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsInaktivereignis(ImpTypeArrayDcm_RdcHsInaktivereignisReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsInaktivereignis(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsKalibrierereignis(ImpTypeArrayDcm_RdcHsKalibrierereignisReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsKalibrierereignis(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignisRuecknahme(ImpTypeArrayDcm_RdcHsWarnereignisRuecknahmeReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsWarnereignisRuecknahme(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignis1(ImpTypeArrayDcm_RdcHsWarnereignis1ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsWarnereignis1(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignis2(ImpTypeArrayDcm_RdcHsWarnereignis2ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsWarnereignis2(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignis3(ImpTypeArrayDcm_RdcHsWarnereignis3ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsWarnereignis3(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignisWeich1(ImpTypeArrayDcm_RdcHsWarnereignisWeich1ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsWarnereignisWeich1(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignisWeich2(ImpTypeArrayDcm_RdcHsWarnereignisWeich2ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsWarnereignisWeich2(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignisWeich3(ImpTypeArrayDcm_RdcHsWarnereignisWeich3ReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcHsWarnereignisWeich3(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusReLesenDruckcodierung(ImpTypeArrayDcm_StatusReLesenDruckcodierungReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusReLesenDruckcodierung(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcDeveloperDataLesen(ImpTypeArrayDcm_StatusRdcDeveloperDataLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcDeveloperDataLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcErfsAktReifenLesen(ImpTypeArrayDcm_StatusRdcErfsAktReifenLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcErfsAktReifenLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcErfsEcoTabelleLesen(ImpTypeArrayDcm_RdcErfsEcoTabelleLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcErfsEcoTabelleLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcErfsAktReifenEcoLesen(ImpTypeArrayDcm_StatusRdcErfsAktReifenEcoLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcErfsAktReifenEcoLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_RdcRidAktReifenQrCodeLesen(ImpTypeArrayDcm_RdcRidAktReifenQrCodeLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_RdcRidAktReifenQrCodeLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_RdcRidAlteReifenQrCodeLesen(ImpTypeArrayDcm_RdcRidAlteReifenQrCodeLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_RdcRidAlteReifenQrCodeLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_RdcRidAktReifenLaufstreckeLesen(ImpTypeArrayDcm_RdcRidAktReifenLaufstreckeLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_RdcRidAktReifenLaufstreckeLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_RdcRidAlteReifenLaufstreckeLesen(ImpTypeArrayDcm_RdcRidAlteReifenLaufstreckeLesenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_RdcRidAlteReifenLaufstreckeLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcExtParkSupervisionLesen(ImpTypeArrayDcm_StatusRdcExtParkSupervisionLesenType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_StatusRdcExtParkSupervisionLesen(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernDigitalRdc(uint8  ucFunction, uint8 ucAction){
   return(
#ifdef _EcuVirtual
      RTE_Stub_SteuernDigitalRdc(ucFunction, ucAction)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRadelektronikVorgeben(uint32 ulReID, uint8 ucRadPos){
   return(
#ifdef _EcuVirtual
      RTE_Stub_SteuernRadelektronikVorgeben(ulReID, ucRadPos)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcErfsEcoReifentabelleVorgeben(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_SteuernRdcErfsEcoReifentabelleVorgeben()
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcErfsEcoNeueReifenVorgeben(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_SteuernRdcErfsEcoNeueReifenVorgeben()
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcErfsEcoAktReifenPosVorgeben(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_SteuernRdcErfsEcoAktReifenPosVorgeben()
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcErfsDeveloperConfig(void){
   return(
#ifdef _EcuVirtual
      RTE_Stub_SteuernRdcErfsDeveloperConfig()
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcDeveloperConfig(ImpTypeArrayDcm_SteuernRdcDeveloperConfigWriteDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_SteuernRdcDeveloperConfig(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_FunktionenReifendruckkontrolle_ReadData(ImpTypeValDcm_FunktionenReifendruckkontrolleReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_FunktionenReifendruckkontrolle_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcAktuelleAussentemperatur_ReadData(ImpTypeValDcm_RdcAktuelleAussentemperaturReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcAktuelleAussentemperatur_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcAussendruck_ReadData(ImpTypeArrayDcm_RdcAussendruckReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcAussendruck_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcInaktivStatus_ReadData(ImpTypeValDcm_RdcInaktivStatusReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcInaktivStatus_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcKalibrierungStatus_ReadData(ImpTypeValDcm_RdcKalibrierungStatusReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcKalibrierungStatus_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcKonfiguration_ReadData(ImpTypeValDcm_RdcKonfigurationReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcKonfiguration_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcPosition_ReadData(ImpTypeValDcm_RdcPositionReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcPosition_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReferenzAussentemperatur_ReadData(ImpTypeValDcm_RdcReferenzAussentemperaturReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReferenzAussentemperatur_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifendruckHl_ReadData(ImpTypeArrayDcm_RdcReifendruckHlReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReifendruckHl_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifendruckHr_ReadData(ImpTypeArrayDcm_RdcReifendruckHrReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReifendruckHr_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifendruckVl_ReadData(ImpTypeArrayDcm_RdcReifendruckVlReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReifendruckVl_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifendruckVr_ReadData(ImpTypeArrayDcm_RdcReifendruckVrReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReifendruckVr_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifentemperaturHl_ReadData(ImpTypeValDcm_RdcReifentemperaturHlReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReifentemperaturHl_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifentemperaturHr_ReadData(ImpTypeValDcm_RdcReifentemperaturHrReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReifentemperaturHr_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifentemperaturVl_ReadData(ImpTypeValDcm_RdcReifentemperaturVlReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReifentemperaturVl_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifentemperaturVr_ReadData(ImpTypeValDcm_RdcReifentemperaturVrReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcReifentemperaturVr_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcSensorHersteller_ReadData(ImpTypeValDcm_RdcSensorHerstellerReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcSensorHersteller_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcSolldruckHinten_ReadData(ImpTypeArrayDcm_RdcSolldruckHintenReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcSolldruckHinten_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcSolldruckVorn_ReadData(ImpTypeArrayDcm_RdcSolldruckVornReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcSolldruckVorn_ReadData(Data)
#else
      0
#endif
   );
}

ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcStatus_ReadData(ImpTypeValDcm_RdcStatusReadDataType* Data){
   return(
#ifdef _EcuVirtual
      RTE_Stub_UWB_RdcStatus_ReadData(Data)
#else
      0
#endif
   );
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
