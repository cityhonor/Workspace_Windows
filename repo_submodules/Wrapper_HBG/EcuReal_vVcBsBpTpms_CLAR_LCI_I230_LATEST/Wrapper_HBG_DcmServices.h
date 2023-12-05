#ifndef Wrapper_HBG_DcmServices_h
#define Wrapper_HBG_DcmServices_h
/******************************************************************************/
/* File   : Wrapper_HBG_DcmServices.h                                         */
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
#include "Rte_CtApHufTpmsSWC_Type.h"

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
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcLesen( ImpTypeArrayDcm_StatusRdcLesenReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcMessdatenblock1( ImpTypeArrayDcm_RdcMessdatenblock1ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcMessdatenblock2( ImpTypeArrayDcm_RdcMessdatenblock2ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcMessdatenblock3( ImpTypeArrayDcm_RdcMessdatenblock3ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcMessdatenblock4( ImpTypeArrayDcm_RdcMessdatenblock4ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcVersion( ImpTypeArrayDcm_StatusRdcVersionReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcAnlernenLokalisierungLesen( ImpTypeArrayDcm_RdcAnlernenLokalisierungLesenReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsInaktivereignis( ImpTypeArrayDcm_RdcHsInaktivereignisReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsKalibrierereignis( ImpTypeArrayDcm_RdcHsKalibrierereignisReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignisRuecknahme( ImpTypeArrayDcm_RdcHsWarnereignisRuecknahmeReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignis1( ImpTypeArrayDcm_RdcHsWarnereignis1ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignis2( ImpTypeArrayDcm_RdcHsWarnereignis2ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignis3( ImpTypeArrayDcm_RdcHsWarnereignis3ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignisWeich1( ImpTypeArrayDcm_RdcHsWarnereignisWeich1ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignisWeich2( ImpTypeArrayDcm_RdcHsWarnereignisWeich2ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcHsWarnereignisWeich3( ImpTypeArrayDcm_RdcHsWarnereignisWeich3ReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusReLesenDruckcodierung( ImpTypeArrayDcm_StatusReLesenDruckcodierungReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcDeveloperDataLesen( ImpTypeArrayDcm_StatusRdcDeveloperDataLesenReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcErfsAktReifenLesen( ImpTypeArrayDcm_StatusRdcErfsAktReifenLesenReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcErfsEcoTabelleLesen( ImpTypeArrayDcm_RdcErfsEcoTabelleLesenReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcErfsAktReifenEcoLesen( ImpTypeArrayDcm_StatusRdcErfsAktReifenEcoLesenReadDataType* );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_RdcRidAktReifenQrCodeLesen (ImpTypeArrayDcm_RdcRidAktReifenQrCodeLesenReadDataType* Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_RdcRidAlteReifenQrCodeLesen (ImpTypeArrayDcm_RdcRidAlteReifenQrCodeLesenReadDataType* Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_RdcRidAktReifenLaufstreckeLesen (ImpTypeArrayDcm_RdcRidAktReifenLaufstreckeLesenReadDataType* Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_RdcRidAlteReifenLaufstreckeLesen (ImpTypeArrayDcm_RdcRidAlteReifenLaufstreckeLesenReadDataType* Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_StatusRdcExtParkSupervisionLesen (ImpTypeArrayDcm_StatusRdcExtParkSupervisionLesenType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernDigitalRdc( uint8 , uint8 );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRadelektronikVorgeben( uint32 , uint8 );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcErfsEcoReifentabelleVorgeben(void);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcErfsEcoNeueReifenVorgeben(void);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcErfsEcoAktReifenPosVorgeben(void);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcErfsDeveloperConfig(void);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_SteuernRdcDeveloperConfig( ImpTypeArrayDcm_SteuernRdcDeveloperConfigWriteDataType * );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_FunktionenReifendruckkontrolle_ReadData( ImpTypeValDcm_FunktionenReifendruckkontrolleReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcAktuelleAussentemperatur_ReadData( ImpTypeValDcm_RdcAktuelleAussentemperaturReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcAussendruck_ReadData( ImpTypeArrayDcm_RdcAussendruckReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcInaktivStatus_ReadData( ImpTypeValDcm_RdcInaktivStatusReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcKalibrierungStatus_ReadData( ImpTypeValDcm_RdcKalibrierungStatusReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcKonfiguration_ReadData( ImpTypeValDcm_RdcKonfigurationReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcPosition_ReadData( ImpTypeValDcm_RdcPositionReadDataType * Data );
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReferenzAussentemperatur_ReadData( ImpTypeValDcm_RdcReferenzAussentemperaturReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifendruckHl_ReadData( ImpTypeArrayDcm_RdcReifendruckHlReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifendruckHr_ReadData( ImpTypeArrayDcm_RdcReifendruckHrReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifendruckVl_ReadData( ImpTypeArrayDcm_RdcReifendruckVlReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifendruckVr_ReadData( ImpTypeArrayDcm_RdcReifendruckVrReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifentemperaturHl_ReadData( ImpTypeValDcm_RdcReifentemperaturHlReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifentemperaturHr_ReadData( ImpTypeValDcm_RdcReifentemperaturHrReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifentemperaturVl_ReadData( ImpTypeValDcm_RdcReifentemperaturVlReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcReifentemperaturVr_ReadData( ImpTypeValDcm_RdcReifentemperaturVrReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcSensorHersteller_ReadData( ImpTypeValDcm_RdcSensorHerstellerReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcSolldruckHinten_ReadData( ImpTypeArrayDcm_RdcSolldruckHintenReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcSolldruckVorn_ReadData( ImpTypeArrayDcm_RdcSolldruckVornReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType Wrap_HBG_UWB_RdcStatus_ReadData( ImpTypeValDcm_RdcStatusReadDataType * Data);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif
