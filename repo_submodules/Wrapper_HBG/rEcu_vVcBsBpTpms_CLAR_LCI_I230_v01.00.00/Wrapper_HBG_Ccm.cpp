/******************************************************************************/
/* File   : Wrapper_HBG_Ccm.cpp                                               */
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
#include "Wrapper_HBG_Ccm.h"

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
uint16 u16CCWritePos;
uint16 u16CCReadPos;

ImpTypeRecCcm_DISP_CC_BYPA_00 tCC_BYPA_00[CC_DATA_QUEUE_LENGTH];

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Send_Ccm( P2CONST(ImpTypeRecCcm_DISP_CC_BYPA_00, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) data ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return RTE_E_OK;
}

uint8 Stub_GetCcmData( ImpTypeRecCcm_DISP_CC_BYPA_00 *ptOutputData )
{
  uint8 ucReturnValue = 0xFF;
  bool bReadQueueData = true;
  if ( u16CCWritePos != 0xFFFF )
  {
    if ( u16CCReadPos == 0xFFFF )
    {
      u16CCReadPos = 0;
    }
    else
    {
      if ( u16CCReadPos == u16CCWritePos )
      {
        bReadQueueData = false;
      }
      else
      {
        u16CCReadPos++;
        u16CCReadPos %= CC_DATA_QUEUE_LENGTH;
      }
    }
    if ( bReadQueueData == true )
    {
      *ptOutputData = tCC_BYPA_00[u16CCReadPos];
      ucReturnValue = 0x00;
    }
  }
  return ucReturnValue;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

