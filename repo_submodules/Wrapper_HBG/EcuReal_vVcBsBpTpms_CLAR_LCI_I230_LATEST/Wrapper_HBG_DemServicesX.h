/******************************************************************************/
/* File   : Wrapper_HBG_DemServicesX.h                                        */
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
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define cDemErrorRdciRfExternalInterference                   ( (uint8)  0 )
#define cDemErrorRdciAutoLearningFailed                       ( (uint8)  1 )
#define cDemErrorRdci4WrongWuMounted                          ( (uint8)  2 )
#define cDemErrorRdci1To3WrongWuMounted                       ( (uint8)  3 )
#define cDemErrorRdciWuMuteFl                                 ( (uint8)  4 )
#define cDemErrorRdciWuMuteFr                                 ( (uint8)  5 )
#define cDemErrorRdciWuMuteRl                                 ( (uint8)  6 )
#define cDemErrorRdciWuMuteRr                                 ( (uint8)  7 )
#define cDemErrorRdciWuDefectFl                               ( (uint8)  8 )
#define cDemErrorRdciWuDefectFr                               ( (uint8)  9 )
#define cDemErrorRdciWuDefectRl                               ( (uint8) 10 )
#define cDemErrorRdciWuLocalisationFailed                     ( (uint8) 11 )
#define cDemErrorRdciWuDefectRr                               ( (uint8) 12 )
#define cDemErrorRdciWuLowBatteryFl                           ( (uint8) 13 )
#define cDemErrorRdciWuLowBatteryFr                           ( (uint8) 14 )
#define cDemErrorRdciWuLowBatteryRl                           ( (uint8) 15 )
#define cDemErrorRdciWuLowBatteryRr                           ( (uint8) 16 )
#define cDemErrorRdciTpmsManufactoryMode                      ( (uint8) 17 )
#define cDemErrorRdciUnspecifiedWfcDefect                     ( (uint8) 18 )
#define cDemErrorRdciUnspecifiedWuMute                        ( (uint8) 19 )
#define cDemErrorRdciGatewayOrAntennaError                    ( (uint8) 20 )
#define cDemErrorRdciOtherWuSensorType                        ( (uint8) 21 )
#define cDemErrorRdciErfsCodingDataInconsistent               ( (uint8) 22 )
#define cDemErrorRdciAusfall                                  ( (uint8) 23 )
#define cDemErrorRdciBefuellhinweis                           ( (uint8) 24 )
#define cDemErrorRdciDruckwarnung                             ( (uint8) 25 )
#define cDemErrorRdciPannenwarnung                            ( (uint8) 26 )
#define cDemErrorRdciWarnruecknahme                           ( (uint8) 27 )
#define cDemErrorRdciKalibrierung                             ( (uint8) 28 )
#define cDemErrorRdciPartialSystemAvailability                ( (uint8) 29 )
#define cDemErrorRdciSystemNotAvailable                       ( (uint8) 30 )
#define cDemErrorRdciATempTimeout                             ( (uint8) 31 )
#define cDemErrorRdciATempInvalid                             ( (uint8) 32 )
#define cDemErrorRdciVVehCogInvalid                           ( (uint8) 33 )
#define cDemErrorRdciVVehCogQualifier                         ( (uint8) 33 )
#define cDemErrorRdciConVehCrc                                ( (uint8) 34 )
#define cDemErrorRdciConVehAlive                              ( (uint8) 35 )
#define cDemErrorRdciConVehTimeout                            ( (uint8) 36 )
#define cDemErrorRdciConVehInvalid                            ( (uint8) 37 )
#define cDemErrorRdciEinheitenBn2020Timeout                   ( (uint8) 38 )
#define cDemErrorRdciRdcDtPckg1Timeout                        ( (uint8) 39 )
#define cDemErrorRdciEinheitenBn2020Invalid                   ( (uint8) 40 )
#define cDemErrorRdciRdcDtPckg1Alive                          ( (uint8) 41 )
#define cDemErrorRdciRdcDtPckg1Invalid                        ( (uint8) 42 )
#define cDemErrorRdciRelativzeitTimeout                       ( (uint8) 43 )
#define cDemErrorRdciRelativzeitInvalid                       ( (uint8) 44 )
#define cDemErrorRdciVVehTimeout                              ( (uint8) 45 )
#define cDemErrorRdciVVehAliveFailure                         ( (uint8) 46 )
#define cDemErrorRdciVVehCrcFailure                           ( (uint8) 47 )

#define cMaxErrorCount                                        ( (uint8) 48 ) // 48 Fehler werden z.Zt. unterstützt

#define cDemPrimaryType                                       ( (uint8)  0 )
#define cDemSecondaryType                                     ( (uint8)  1 )

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct
{
   uint8                                                     /*  0 */ auc0x1702_SAE_CODE[3];
   uint32                                                    /*  1 */ ul0x1768_KM_STAND_SUPREME;
   uint8                                                     /*  2 */ auc0x1769_SYSTEMZEIT_SUPREME[6];
  ImpTypeValDcm_FunktionenReifendruckkontrolleReadDataType  /*  3 */ uc0x190D_FUNKTIONEN_REIFENDRUCKKONTROLLE;
  ImpTypeValDcm_RdcAktuelleAussentemperaturReadDataType     /*  5 */ uc0x2805_AUSSENTEMPERATUR;
   uint8                                                     /*  6 */ uc0x2866_BETRIEBSSPANNUNG;
   uint8                                                     /*  7 */ uc0x2867_FAHRZEUGGESCHWINDIGKEIT;
  ImpTypeValDcm_RdcSensorHerstellerReadDataType             /*  8 */ uc0x4100_RDC_SENSOR_HERSTELLER;
  ImpTypeValDcm_RdcReferenzAussentemperaturReadDataType     /*  9 */ uc0x4101_RDC_REFERENZ_AUSSENTEMPERATUR;
  ImpTypeArrayDcm_RdcAussendruckReadDataType                /* 10 */ auc0x4102_RDC_AUSSENDRUCK;
  ImpTypeArrayDcm_RdcReifendruckVlReadDataType              /* 11 */ auc0x4103_RDC_REIFENDRUCK_VL;
  ImpTypeArrayDcm_RdcReifendruckVrReadDataType              /* 12 */ auc0x4104_RDC_REIFENDRUCK_VR;
  ImpTypeArrayDcm_RdcReifendruckHlReadDataType              /* 13 */ auc0x4105_RDC_REIFENDRUCK_HL;
  ImpTypeArrayDcm_RdcReifendruckHrReadDataType              /* 14 */ auc0x4106_RDC_REIFENDRUCK_HR;
  ImpTypeValDcm_RdcReifentemperaturVlReadDataType           /* 15 */ uc0x4107_RDC_REIFENTEMPERATUR_VL;
  ImpTypeValDcm_RdcReifentemperaturVrReadDataType           /* 16 */ uc0x4108_RDC_REIFENTEMPERATUR_VR;
  ImpTypeValDcm_RdcReifentemperaturHlReadDataType           /* 17 */ uc0x4109_RDC_REIFENTEMPERATUR_HL;
  ImpTypeValDcm_RdcReifentemperaturHrReadDataType           /* 18 */ uc0x410A_RDC_REIFENTEMPERATUR_HR;
   sint8                                                     /* 19 */ sc0x410B_RDC_AKTUELLE_AUSSENTEMPERATUR;
  ImpTypeValDcm_RdcInaktivStatusReadDataType                /* 20 */ uc0x410C_RDC_INAKTIV_STATUS;
  ImpTypeValDcm_RdcKalibrierungStatusReadDataType           /* 21 */ uc0x410D_RDC_KALIBRIERUNG_STATUS;
  ImpTypeValDcm_RdcStatusReadDataType                       /* 22 */ uc0x410E_RDC_STATUS;
  ImpTypeValDcm_RdcKonfigurationReadDataType                /* 23 */ uc0x410F_RDC_KONFIGURATION;
  ImpTypeArrayDcm_RdcSolldruckVornReadDataType              /* 24 */ auc0x4110_RDC_SOLLDRUCK_VORN;
  ImpTypeArrayDcm_RdcSolldruckHintenReadDataType            /* 25 */ auc0x4111_RDC_SOLLDRUCK_HINTEN;
  ImpTypeValDcm_RdcPositionReadDataType                     /* 26 */ uc0x4112_RDC_POSITION;
   uint8                                                     /* 27 */ uc0x5008_SPANNUNGSMASTER_VERFUEGBAR;
   uint8                                                     /* 28 */ uc0x500A_GESCHWINDIGKEIT;
   uint16                                                    /* 29 */ ush0x500B_FUNKTIONSZUSTAND;
   uint8                                                     /* 30 */ uc0x500C_INTERNER_FUNKTIONSZUSTAND;
   uint16                                                    /* 31 */ ush0x500E_INTERNE_FEHLERNUMMER;
} tRDCiDtcUwbListDef; // 50 Byte

typedef struct 
{
   uint32                          ulDtc;                                      // HA DTC
  ImpTypeRefDem_EventStatusType   ucStatus;                                   // failed, passed

   uint8                           ucType;                                     // primary, secondary

   uint8                           ucUwbUpdateState;                           // TRUE => alle UWBs werden aktualisiert, FALSE => keine Aktion
   uint32                          ulUwbMask;                                  // Bitkodierte Zuordnung von UWB zu DTC (1 => UWB für DTC relevant, 0 => UWB für DTC nicht relevant) 
   tRDCiDtcUwbListDef              tUwb;                                       // Environment data
} tRDCiDtcListDef;  // 61 Byte 

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern tRDCiDtcListDef tRDCiDtclist[cMaxErrorCount];

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_1To3WrongWuMountedInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_1To3WrongWuMounted_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_1To3WrongWuMounted_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_4WrongWuMountedInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_4WrongWuMounted_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_4WrongWuMounted_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempInvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempInvalid_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempInvalid_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempTimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempTimeout_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ATempTimeout_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_AusfallInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Ausfall_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Ausfall_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_AutoLearningFailedInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_AutoLearningFailed_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_AutoLearningFailed_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_BefuellhinweisInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Befuellhinweis_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Befuellhinweis_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehAliveInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehAlive_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehAlive_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehCrcInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehCrc_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehCrc_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehInvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehInvalid_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehInvalid_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehTimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehTimeout_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ConVehTimeout_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_DruckwarnungInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Druckwarnung_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Druckwarnung_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020InvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020Invalid_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020Invalid_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020TimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020Timeout_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_EinheitenBn2020Timeout_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ErfsCodingDataInconsistentInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ErfsCodingDataInconsistent_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_ErfsCodingDataInconsistent_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_GatewayOrAntennaErrorInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_GatewayOrAntennaError_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_GatewayOrAntennaError_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_KalibrierungInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Kalibrierung_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Kalibrierung_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_OtherWuSensorTypeInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_OtherWuSensorType_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_OtherWuSensorType_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_PannenwarnungInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Pannenwarnung_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Pannenwarnung_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_PartialSystemAvailabilityInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_PartialSystemAvailability_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_PartialSystemAvailability_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_SystemNotAvailableInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_SystemNotAvailable_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_SystemNotAvailable_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1AliveInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Alive_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Alive_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1InvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Invalid_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Invalid_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1TimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Timeout_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RdcDtPckg1Timeout_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitInvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitInvalid_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitInvalid_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitTimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitTimeout_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RelativzeitTimeout_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RfExternalInterferenceInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RfExternalInterference_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_RfExternalInterference_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_TpmsManufactoryModeInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_TpmsManufactoryMode_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_TpmsManufactoryMode_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWfcDefectInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWfcDefect_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWfcDefect_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWuMuteInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWuMute_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_UnspecifiedWuMute_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehAliveFailureInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehAliveFailure_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehAliveFailure_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogInvalidInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogInvalid_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogInvalid_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogQualifierInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogQualifier_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCogQualifier_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCrcFailureInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCrcFailure_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehCrcFailure_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehTimeoutInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehTimeout_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_VVehTimeout_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WarnruecknahmeInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Warnruecknahme_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_Warnruecknahme_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFl_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFl_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFr_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectFr_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRl_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRl_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRr_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuDefectRr_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLocalisationFailedInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLocalisationFailed_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLocalisationFailed_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFl_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFl_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFr_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryFr_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRl_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRl_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRr_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuLowBatteryRr_SetEventStatus( ImpTypeRefDem_EventStatusType );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFl_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFl_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFr_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteFr_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRlInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRl_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRl_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus );

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRrInfo_GetEventStatus( P2VAR(ImpTypeRefDem_UdsStatusByteType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) EventStatusByte );
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRr_ResetEventStatus(void);
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_Dem_WuMuteRr_SetEventStatus( ImpTypeRefDem_EventStatusType EventStatus );

extern void WriteDtcListToNvmBlock(void);
extern void ReadDtcListFromNvmBlock(void);
extern void InitDtcUwbData(uint8 ucDtcNo );
extern void ReadDtcUwbData(uint8 ucDtcNo );

#ifdef __cplusplus
}
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

