/******************************************************************************/
/* File   : Template.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
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
typedef struct{
   float  Rshunt;
   float  NominalCurrent;
   float  PWM_Frequency;
   float  PhaseRes;
   float  PhaseInd;
   uint16 SpeedPi_Kp;
   uint16 SpeedPi_Ki;
   float  MaxRefCurr;
   float  MinRefCurr;
   float  MaxRefStartCurr;
   float  MinRefStartCurr;
   float  SpeedLevelPos;
   float  SpeedLevelNeg;
   float  TimeConstantSpeedFilter;
   float  TimeConstantEstFluxFilter;
   uint16 CsaOffset;
   uint16 PolePair;
   float  StartCurrent;
   float  TimeSpeedzero;
   float  StartSpeedEnd;
   float  StartSpeedSlewRate;
   uint16 EnableFrZero;
   float  SpeedLevelSwitchOn;
   float  AdjustmCurrentControl;
   float  MaxSpeed;
}TEmo_Focpar_Cfg;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const TEmo_Focpar_Cfg                                     Emo_Focpar_Cfg;

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

