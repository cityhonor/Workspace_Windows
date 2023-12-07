/******************************************************************************/
/* File   : Wrapper_HBG_CalPrm.cpp                                            */
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
#include "Wrapper_HBG_CalPrm.h"
#ifdef _EcuVirtual
#include "RTE_Stub_CalPrm.h"
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
FUNC(ImpTypeVal_C_Funktion_ReifenPannenerkennung_aktiv_e, RTE_CODE) Wrap_HBG_Prm_C_Funktion_ReifenPannenerkennung_aktiv_e(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_C_Funktion_ReifenPannenerkennung_aktiv_e()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciTPrewarnNc, RTE_CODE) Wrap_HBG_Prm_CRdciTPrewarnNc(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciTPrewarnNc()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciMaxThreshold, RTE_CODE) Wrap_HBG_Prm_CRdciMaxThreshold(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciMaxThreshold()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciPrewarnEnable, RTE_CODE) Wrap_HBG_Prm_CRdciPrewarnEnable(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciPrewarnEnable()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciStatInit, RTE_CODE) Wrap_HBG_Prm_CRdciStatInit(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciStatInit()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciNumPrewarnDetect, RTE_CODE) Wrap_HBG_Prm_CRdciNumPrewarnDetect(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciNumPrewarnDetect()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciPrewarnIgnition, RTE_CODE) Wrap_HBG_Prm_CRdciPrewarnIgnition(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciPrewarnIgnition()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciPanneBefPos, RTE_CODE) Wrap_HBG_Prm_CRdciPanneBefPos(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciPanneBefPos()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciFastDeflateEnable, RTE_CODE) Wrap_HBG_Prm_CRdciFastDeflateEnable(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciFastDeflateEnable()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciTyrIdFiltGw, RTE_CODE) Wrap_HBG_Prm_CRdciTyrIdFiltGw(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciTyrIdFiltGw()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciResetPlausi, RTE_CODE) Wrap_HBG_Prm_CRdciResetPlausi(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciResetPlausi()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciTpmsMarket, RTE_CODE) Wrap_HBG_Prm_CRdciTpmsMarket(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciTpmsMarket()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciSensorForeignAkRdk, RTE_CODE) Wrap_HBG_Prm_CRdciSensorForeignAkRdk(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciSensorForeignAkRdk()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciSensorLocSync, RTE_CODE) Wrap_HBG_Prm_CRdciSensorLocSync(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciSensorLocSync()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciErfsEnable, RTE_CODE) Wrap_HBG_Prm_CRdciErfsEnable(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciErfsEnable()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciTrefSeasonalAdjustment, RTE_CODE) Wrap_HBG_Prm_CRdciTrefSeasonalAdjustment(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciTrefSeasonalAdjustment()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciDispReset, RTE_CODE) Wrap_HBG_Prm_CRdciDispReset(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciDispReset()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciCorHoldOffTime, RTE_CODE) Wrap_HBG_Prm_CRdciCorHoldOffTime(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciCorHoldOffTime()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciTRefShift, RTE_CODE) Wrap_HBG_Prm_CRdciTRefShift(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciTRefShift()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciUiaThC, RTE_CODE) Wrap_HBG_Prm_CRdciUiaThC(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciUiaThC()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciUiwThC, RTE_CODE) Wrap_HBG_Prm_CRdciUiwThC(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciUiwThC()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciUiaThNc, RTE_CODE) Wrap_HBG_Prm_CRdciUiaThNc(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciUiaThNc()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciUiwThNc, RTE_CODE) Wrap_HBG_Prm_CRdciUiwThNc(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciUiwThNc()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciPanneTh, RTE_CODE) Wrap_HBG_Prm_CRdciPanneTh(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciPanneTh()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciMinRcpFa, RTE_CODE) Wrap_HBG_Prm_CRdciMinRcpFa(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciMinRcpFa()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciMinRcpRa, RTE_CODE) Wrap_HBG_Prm_CRdciMinRcpRa(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciMinRcpRa()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciDeltaPLR, RTE_CODE) Wrap_HBG_Prm_CRdciDeltaPLR(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciDeltaPLR()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciPInitRangeMax, RTE_CODE) Wrap_HBG_Prm_CRdciPInitRangeMax(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciPInitRangeMax()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciTimeoutPrewarn, RTE_CODE) Wrap_HBG_Prm_CRdciTimeoutPrewarn(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciTimeoutPrewarn()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciDtAmbPrewarn, RTE_CODE) Wrap_HBG_Prm_CRdciDtAmbPrewarn(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciDtAmbPrewarn()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciDpToIPmin, RTE_CODE) Wrap_HBG_Prm_CRdciDpToIPmin(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciDpToIPmin()
#else
      0
#endif
   );
}

Rte_CtApHufTpmsSWC_PiCalPrmRDCi_R_Calprm_CRdciLearnLocateConfig_FncRetPtrType Wrap_HBG_Prm_CRdciLearnLocateConfig(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciLearnLocateConfig()
#else
      NULL_PTR
#endif
   );
}

FUNC(ImpTypeValCRdciXminCoolTire, RTE_CODE) Wrap_HBG_Prm_CRdciXminCoolTire(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciXminCoolTire()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciMaxCorTime, RTE_CODE) Wrap_HBG_Prm_CRdciMaxCorTime(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciMaxCorTime()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciMaxCorRcp, RTE_CODE) Wrap_HBG_Prm_CRdciMaxCorRcp(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciMaxCorRcp()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciThCTol, RTE_CODE) Wrap_HBG_Prm_CRdciThCTol(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciThCTol()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciThNCTol, RTE_CODE) Wrap_HBG_Prm_CRdciThNCTol(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciThNCTol()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciLongHoldTime, RTE_CODE) Wrap_HBG_Prm_CRdciLongHoldTime(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciLongHoldTime()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciShortHoldTime, RTE_CODE) Wrap_HBG_Prm_CRdciShortHoldTime(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciShortHoldTime()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciEcoRcpEnable, RTE_CODE) Wrap_HBG_Prm_CRdciEcoRcpEnable(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciEcoRcpEnable()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciDefaultLoadCond, RTE_CODE) Wrap_HBG_Prm_CRdciDefaultLoadCond(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciDefaultLoadCond()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciErfsPlacardSource, RTE_CODE) Wrap_HBG_Prm_CRdciErfsPlacardSource(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciErfsPlacardSource()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciDefaultMenuSel, RTE_CODE) Wrap_HBG_Prm_CRdciDefaultMenuSel(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciDefaultMenuSel()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciDispConfTimeout, RTE_CODE) Wrap_HBG_Prm_CRdciDispConfTimeout(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciDispConfTimeout()
#else
      0
#endif
   );
}

FUNC(ImpTypeValCRdciRidEnable, RTE_CODE) Wrap_HBG_Prm_CRdciRidEnable(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciRidEnable()
#else
      0
#endif
   );
}

Rte_CtApHufTpmsSWC_PiCalPrmRDCi_R_Calprm_CRdciTrefSeasAdjConfig_FncRetPtrType Wrap_HBG_Prm_CRdciTrefSeasAdjConfig(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciTrefSeasAdjConfig()
#else
      NULL_PTR
#endif
   );
}

FUNC(ImpTypeValCRdciSpeedCcmEnable, RTE_CODE) Wrap_HBG_Prm_CRdciSpeedCcmEnable(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciSpeedCcmEnable()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciSpeedCcmHyst, RTE_CODE) Wrap_HBG_Prm_CRdciSpeedCcmHyst(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciSpeedCcmHyst()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciSpeedCcmPressOffsetFa, RTE_CODE) Wrap_HBG_Prm_CRdciSpeedCcmPressOffsetFa(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciSpeedCcmPressOffsetFa()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciSpeedCcmPressOffsetRa, RTE_CODE) Wrap_HBG_Prm_CRdciSpeedCcmPressOffsetRa(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciSpeedCcmPressOffsetRa()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciSpeedCcmTh, RTE_CODE) Wrap_HBG_Prm_CRdciSpeedCcmTh(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciSpeedCcmTh()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciSpeedCcmTime, RTE_CODE) Wrap_HBG_Prm_CRdciSpeedCcmTime(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciSpeedCcmTime()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciParkSupExtParkSupConfig, RTE_CODE) Wrap_HBG_Prm_CRdciParkSupExtParkSupConfig(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciParkSupExtParkSupConfig()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciParkSupMobilityLossThresholdValue, RTE_CODE) Wrap_HBG_Prm_CRdciParkSupMobilityLossThresholdValue(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciParkSupMobilityLossThresholdValue()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciParkSupNotificationThresholdValueC, RTE_CODE) Wrap_HBG_Prm_CRdciParkSupNotificationThresholdValueC(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciParkSupNotificationThresholdValueC()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciParkSupNotificationThresholdValueNc, RTE_CODE) Wrap_HBG_Prm_CRdciParkSupNotificationThresholdValueNc(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciParkSupNotificationThresholdValueNc()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciParkSupTolNoTempComp, RTE_CODE) Wrap_HBG_Prm_CRdciParkSupTolNoTempComp(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciParkSupTolNoTempComp()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciParkSupTolTempComp, RTE_CODE) Wrap_HBG_Prm_CRdciParkSupTolTempComp(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciParkSupTolTempComp()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciParkSupWarningThresholdValueC, RTE_CODE) Wrap_HBG_Prm_CRdciParkSupWarningThresholdValueC(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciParkSupWarningThresholdValueC()
#else
      0
#endif
   );
}
FUNC(ImpTypeValCRdciParkSupWarningThresholdValueNc, RTE_CODE) Wrap_HBG_Prm_CRdciParkSupWarningThresholdValueNc(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciParkSupWarningThresholdValueNc()
#else
      0
#endif
   );
}

Rte_CtApHufTpmsSWC_PiCalPrmRDCi_R_Calprm_CRdciErfsReifenEco_FncRetPtrType Wrap_HBG_Prm_CRdciErfsReifenEco(void){
   return(
#ifdef _EcuVirtual
      Stub_Rte_Prm_CRdciErfsReifenEco()
#else
      0
#endif
   );
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

