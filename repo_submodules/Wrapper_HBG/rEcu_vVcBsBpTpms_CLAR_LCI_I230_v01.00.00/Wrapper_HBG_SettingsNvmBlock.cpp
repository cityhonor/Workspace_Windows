/******************************************************************************/
/* File   : Wrapper_HBG_SettingsNvmBlock.cpp                                  */
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
#include "Wrapper_HBG_SettingsNvmBlock.h"
#include <stdio.h>

#ifdef _EcuVirtual
#include "EcuVirtual_stdio.h"
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
static const tRteStubSettingsDataDecl tRteStubSettingsDataROM = {
                                                                  10,     // numericUpDownRDCiCyclicTask
                                                                  true,   // checkBoxSendCyclicAliveTelegrams						
                                                                  10,     // OutputTimerInterval													
                                                                  100,    // FrTimerInterval															
                                                                  10,     // ABSRecEvSimInterval													
                                                                  7,      // RDCRecEvSimInterval													
                                                                  10,     // CanMsgTimerInterval													
                                                                  true,   // checkBoxUseHufTelegrams											
                                                                  false,  // checkBoxUseSchraderTelegrams								
                                                                  false,  // checkBoxUseContiTelegrams										
                                                                  false,  // checkATempInvalid
                                                                  false,  // checkATempMissing
                                                                  false,  // checkAipInvalid
                                                                  false,  // checkBoxAipInit
                                                                  false,  // checkAipMissing
                                                                  false,  // checkVVehInvalid
                                                                  false,  // checkVVehQualifier
                                                                  false,  // checkVVehMissing
                                                                  false,  // checkVVehAlive
                                                                  false,  // checkMileKmInvalid
                                                                  false,  // checkWmomInvalid
                                                                  false,  // checkWmomMissing
                                                                  false,  // checkRelativzeitInvalid
                                                                  false,  // checkRelativzeitMissing
                                                                  false,  // checkUhrzeitDatumInvalid
                                                                  false,  // checkUhrzeitDatumMissing
                                                                  false,  // checkUnitsInvalid
                                                                  false,  // checkUnitsMissing
                                                                  false,  // checkConVehInvalid
                                                                  false,  // checkConVehAlive
                                                                  false,  // checkConVehMissing
                                                                  false,  // checkConVehQualifier
                                                                  true,   // radioButtonFZZSTDFree
                                                                  false,  // radioButtonFZZSTDLocked
                                                                  false,  // radioButtonFZZSTDInvalid
                                                                  true,   // checkBoxFRBusOff
                                                                  true,   // checkFRBusState
                                                                  false,  // checkBoxGNSSPositionAltitudeInvalid
                                                                  false,  // checkBoxGNSSErrorAltitudeMetersInvalid
                                                                  false   // checkBoxNMEARawData2Missing
                                                                };

tRteStubSettingsDataDecl tRteStubSettingsDataRAM;

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
#endif /* __cplusplus */

#ifdef __cplusplus
}
#endif

void NVM_ReadRteStubSettings( void )
{
#ifdef _EcuVirtual
  FILE* fStream;
  const char filename[] = "RteStubSettings.txt";
  const char mode[] = "rb";

  if ( fopen_s(&fStream, filename, mode) == 0 )
  {
    fread( &tRteStubSettingsDataRAM, sizeof(uint8), sizeof(tRteStubSettingsDataRAM), fStream );

    fclose( fStream );
  }else{
    tRteStubSettingsDataRAM = tRteStubSettingsDataROM;
  }
#else
#endif
}

void NVM_WriteRteStubSettings( void )
{
#ifdef _EcuVirtual
  FILE* fStream;
  const char filename[] = "RteStubSettings.txt";
  const char mode[] = "wb";

  if ( fopen_s(&fStream, filename, mode) == 0 )
  {
    fwrite( (uint8 *) &tRteStubSettingsDataRAM, sizeof(uint8), sizeof(tRteStubSettingsDataRAM), fStream );
    fclose( fStream );
  }
#else
#endif
}

void NVM_SetDefaultRteStubSettings( void )
{
  tRteStubSettingsDataRAM = tRteStubSettingsDataROM;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

