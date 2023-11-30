#ifndef Wrapper_HBG_CddData_h
#define Wrapper_HBG_CddData_h
/******************************************************************************/
/* File   : Wrapper_HBG_CddData.h                                             */
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
#include "Rte_CtApHufTpmsSWC.h"
#include "Wrapper_HBG_CddDataX.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ABS_DATA_QUEUE_LENGTH 10
#define RDC_DATA_QUEUE_LENGTH 20

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef ImpTypeRecCddAbsData tCddAbsData;
typedef ImpTypeRecCddRdcData tCddRdcData;

typedef struct
        {
          Rdci_OP_TYR_SEA_TPCT_Type     OpTyrSeaTpct;     // 0 (CSEASON_SUMMER), 1 (CSEASON_WINTER), 2 (CSEASON_NOCHANGE), 3 (C2BIT_SIG_INVALID)
          Rdci_OP_TPCT_Type             OpTpct;           // 0 (ungültig), 1 (Übernahme), 2 (Abbruch), 3 (keine Aktion)
          Rdci_OP_IDR_SLCTN_Type        OpIdrSlctn;       // 0 (?), 1 (?), 2 (?), 3 (keine Aktion)
          Rdci_OP_TAR_P_LOCO_TPCT_Type  OpTarPLocoTpct;   // 0 (REQ_PART_LOAD), 1 (REQ_FULL_LOAD), 2 (REQ_ECO_LOAD), 3 (C2BIT_SIG_INVALID)
          Rdci_RQ_OL_TPCT_Type          RqOlTpct;
          Rdci_OP_SLCTN_TYR_AVLB_Type   OpSlctnTyrAvlb;   // gewählter Radsatz 0, 1, ... n (60 = 'Anderer Reifen')
          Rdci_OP_IDR_MSGC_Type         OpIdrMsg;         // 0 (?), 1 (?), 2 (?), 3 (keine Aktion)
        } BedienungFahrwerkRecType;

typedef struct
        {
          Rdci_UN_TEMP_Type             UnTemp;           // 0 (Default) 1 (°C) 2 (°F) 3 (Signal ungültig)
          Rdci_UN_MILE_Type             UnMile;           // 0 (Default), 1 (Kilometer), 2 (Meilen), 3 (Signal ungültig)
          Rdci_UN_AIP_Type              UnAip;            // 0 (Default), 1 (bar), 2 (kPa), 3 (psi), 4 (Signal ungültig)
        } EinheitenBn2020RecType;

typedef struct
        {
          Rdci_GNSSPositionAltitude_Type    PositionAltitude;     /* GPS Höhensignal: -1000m - 5553m */
          Rdci_GNSSErrorAltitudeMeters_Type ErrorAltitudeMeters;  /* GPS Fehlersgnal:     0m -  650m */
        } GpsAltitudeType;

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
#ifdef __cplusplus
extern "C"
{
#endif

uint16 PutCddAbsData( tCddAbsData * data );

uint16 PutCddRdcData( tCddRdcData * data );

#ifdef __cplusplus
}
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif
