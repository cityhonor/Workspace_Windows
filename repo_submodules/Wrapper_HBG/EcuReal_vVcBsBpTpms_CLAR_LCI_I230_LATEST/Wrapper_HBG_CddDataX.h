#ifndef Wrapper_HBG_CddDataX_h
#define Wrapper_HBG_CddDataX_h
/******************************************************************************/
/* File   : Wrapper_HBG_CddDataX.h                                            */
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
#ifdef __cplusplus
extern "C"
{
#endif

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Receive_CddAbsData(P2VAR(ImpTypeRecCddAbsData, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR));
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Receive_CddRdcData(P2VAR(ImpTypeRecCddRdcData, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR));

#ifdef __cplusplus
}
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif
