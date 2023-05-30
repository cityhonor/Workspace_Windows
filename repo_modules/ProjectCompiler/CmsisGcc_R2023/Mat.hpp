#pragma once
/******************************************************************************/
/* File   : Mat.hpp                                                           */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MAT_FIX_SHIFT                                                      (15u)
#define MAT_FIX_SAT                                                        (16u)
#define Mat_FixMul(Factor1, Factor2)             ((((sint32)(Factor1)) * ((sint32)(Factor2))) >> MAT_FIX_SHIFT)
#define MAT_ONE_OVER_SQRT_3                                             (18919u)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   sint32 IOut;
   sint16 Kp;
   sint16 Ki;
   sint16 IMin;
   sint16 IMax;
   sint16 PiMin;
   sint16 PiMax;
}TMat_Pi;

typedef struct{
   sint32 IOut;
   sint16 Dout;
   sint16 Kp;
   sint16 Ki;
   sint16 Ks;
   sint16 IMin;
   sint16 IMax;
   sint16 PiMin;
   sint16 PiMax;
}TMat_Pi_Windup;

typedef struct{
   sint16 CoefA;
   sint16 CoefB;
   sint16 Min;
   sint16 Max;
   sint32 Out;
}TMat_Lp;

typedef struct{
   sint16 CoefA;
   sint16 CoefB;
   sint32 Out;
}TMat_Lp_Simple;

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
extern sint16 abs(sint16 inp);

extern sint32 Mat_FixMulScale(
      sint32 Factor1
   ,  sint32 Factor2
   ,  sint32 Scale
);

extern sint16 Mat_ExePi(
      TMat_Pi* pPi
   ,  sint16   Error
);

extern sint16 Mat_ExePi_Windup(
      TMat_Pi_Windup* pPi
   ,  sint16          Error
);

extern sint16 Mat_ExeLp(
      TMat_Lp* pLp
   ,  sint16   Input
);

extern sint16 Mat_ExeLp_without_min_max(
      TMat_Lp_Simple* pLp
   ,  sint16          Input
);

extern TComplex Mat_Park(
      TComplex StatCurr
   ,  uint16   Angle
);

extern TComplex Mat_InvPark(
      TComplex RotVolt
   ,  uint16   Angle
);

extern TComplex Mat_PolarKartesisch(
      uint16 Amp
   ,  uint16 Angle
);

extern uint16 Mat_CalcAngleAmp(
      TComplex Stat
   ,  uint16*  pAmp
);

extern uint16 Mat_CalcAngle(
   TComplex Stat
);

extern uint16 Mat_CalcAmp(
   TComplex Stat
);

extern sint16 Mat_Ramp(
      sint16  Input
   ,  sint32  Slewrate
   ,  sint32* Output
);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
