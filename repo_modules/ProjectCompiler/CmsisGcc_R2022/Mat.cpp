/******************************************************************************/
/* File   : Mat.cpp                                                           */
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
#include "types.hpp"

#include "Mat.hpp"

#include "Table.hpp"

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
sint32 __SSAT(
      sint32 x
   ,  sint32 y
){
   UNUSED(x);
   UNUSED(y);
   return 0u;
}

sint16 Mat_ExePi(
      TMat_Pi* pPi
   ,  sint16   Error
){
   sint32 IOut = pPi->IOut + ((sint32) Error * (sint32)pPi->Ki);
   sint32 Min  = ((sint32)(pPi->IMin)) << 15u;
   sint32 Max;

   if(
         IOut
      <  Min
   ){
      IOut = Min;
   }
   else{
      Max = ((sint32)(pPi->IMax)) << 15u;
      if(
            IOut
         >  Max
      ){
         IOut = Max;
      }
   }

   pPi->IOut = IOut;
   sint32 Temp = __SSAT(
         Error * ((sint32)pPi->Kp)
      ,  31u - 6u
   );
   sint32 PiOut = (IOut + (Temp << 6u)) >> 15u;
          Min   = (sint32)(pPi->PiMin);

   if(
         PiOut
      <  Min
   ){
      PiOut = Min;
   }
   else{
      Max = (sint32)(pPi->PiMax);
      if(
            PiOut
         >  Max
      ){
         PiOut = Max;
      }
   }
   return(sint16)PiOut;
}

sint16 Mat_ExePi_Windup(
      TMat_Pi_Windup* pPi
   ,  sint16          Error
){
   sint32 IOut = pPi->IOut
      + ((sint32)Error     * (sint32)pPi->Ki)
      - ((sint32)pPi->Dout * (sint32)pPi->Ks);
   sint32 Min = ((sint32)(pPi->IMin)) << 15u;
   sint32 Max;

   if(
         IOut
      <  Min
   ){
      IOut = Min;
   }
   else{
      Max = ((sint32)(pPi->IMax)) << 15u;
      if(
            IOut
         >  Max
      ){
         IOut = Max;
      }
   }

   pPi->IOut = IOut;
   sint32 Temp = __SSAT(
         Error * ((sint32)pPi->Kp)
      ,  31u - 6u
   );
   sint32 PiOut     = (IOut + (Temp << 6u)) >> 15u;
          pPi->Dout = PiOut;
          Min       = (sint32)(pPi->PiMin);

   if(
         PiOut
      <  Min
   ){
      PiOut = Min;
   }
   else{
      Max = (sint32)(pPi->PiMax);
      if(
            PiOut
         >  Max
      ){
         PiOut = Max;
      }
   }
   pPi->Dout = pPi->Dout - PiOut;
   return(sint16)PiOut;
}

sint16 Mat_ExeLp(
      TMat_Lp* pLp
   ,  sint16   Input
){
   sint32 Out = pLp->Out;
          Out = __SSAT(
                  (Out + ((sint32)pLp->CoefA * (sint32)Input))
                - ((sint32)pLp->CoefB * (Out >> 15u))
             ,  31u
          );
   sint32 Min = ((sint32)(pLp->Min)) << 15u;
   sint32 Max;

   if(
         Out
      <  Min
   ){
      Out = Min;
   }
   else{
      Max = ((sint32)(pLp->Max)) << 15u;
      if(
            Out
         >  Max
      ){
         Out = Max;
      }
   }
   pLp->Out = Out;
   return(sint16)(Out >> 15u);
}

sint16 Mat_ExeLp_without_min_max(
      TMat_Lp_Simple* pLp
   ,  sint16          Input
){
   sint32 Out = pLp->Out;
          Out = __SSAT(
                   (Out + ((sint32)pLp->CoefA * (sint32)Input))
                -  ((sint32)pLp->CoefB * (Out >> 15u))
             ,  31u
          );
          pLp->Out = Out;
   return(sint16)(Out >> 15u);
}

TComplex Mat_Park(
      TComplex StatCurr
   ,  uint16   Angle
){
   uint32   UAngle     = Angle >> 6u;
   sint32   Cos        = pTable_Cos[UAngle];
   sint32   Sin        = Table_Sin [UAngle];
   TComplex RotCurrent = {0, 0};
   RotCurrent.Real = (sint16)__SSAT(
            Mat_FixMul(StatCurr.Real, Cos)
         +  Mat_FixMul(StatCurr.Imag, Sin)
      ,  MAT_FIX_SAT
   );
   RotCurrent.Imag = (sint16)__SSAT(
            Mat_FixMul(StatCurr.Imag, Cos)
         -  Mat_FixMul(StatCurr.Real, Sin)
      ,  MAT_FIX_SAT
   );
   return RotCurrent;
}

TComplex Mat_InvPark(
      TComplex RotVolt
   ,  uint16   Angle
){
   TComplex StatVolt = {0, 0};
   uint32 UAngle = Angle >> 6u;
   sint32 Cos    = pTable_Cos[UAngle];
   sint32 Sin    = Table_Sin [UAngle];
   StatVolt.Real = (sint16)(__SSAT(
            Mat_FixMulScale(RotVolt.Real, Cos, -2)
         -  Mat_FixMulScale(RotVolt.Imag, Sin, -2)
      ,  MAT_FIX_SAT
   ));
   StatVolt.Imag = (sint16)(__SSAT(
            Mat_FixMulScale(RotVolt.Real, Sin, -2)
         +  Mat_FixMulScale(RotVolt.Imag, Cos, -2)
      ,  MAT_FIX_SAT
   ));
   return StatVolt;
}

TComplex Mat_PolarKartesisch(
      uint16 Amp
   ,  uint16 Angle
){
   TComplex StatOut = {0, 0};
   uint32 UAngle = Angle >> 6u;
   sint32 Cos    = pTable_Cos[UAngle];
   sint32 Sin    = Table_Sin [UAngle];
   StatOut.Real = (sint16)(__SSAT(
         Mat_FixMulScale(Amp, Cos, 0)
      ,  MAT_FIX_SAT
   ));
   StatOut.Imag = (sint16)(__SSAT(
         Mat_FixMulScale(Amp, Sin, 0)
      ,  MAT_FIX_SAT
   ));
   return StatOut;
}

uint16 Mat_CalcAngleAmp(
      TComplex Stat
   ,  uint16*  pAmp
){
   sint32 AbsReal = Stat.Real;
   if(
         AbsReal
      <  0
   ){
      AbsReal = -AbsReal;
   }

   sint32 AbsImag = Stat.Imag;
   if(
         AbsImag
      <  0
   ){
      AbsImag = -AbsImag;
   }

   uint32 Index;
   uint32 TableValue;
   uint32 Angle;
   if(
         AbsImag
      <= AbsReal
   ){
      Index      = (((uint32)AbsImag) * 1024u) / ((uint32)AbsReal);
      TableValue = Table_ArcTan[Index];
      *pAmp      = (((uint32)AbsReal) * Table_Amp[Index]) >> 15u;

      if(
            Stat.Real
         >  0
      ){
         if(
               Stat.Imag
            >= 0
         ){
            Angle = TableValue;
         }
         else{
            Angle = 0x10000u - TableValue;
         }
      }
      else{
         if(
               Stat.Imag
            >= 0
         ){
            Angle = 0x8000u - TableValue;
         }
         else{
            Angle = 0x8000u + TableValue;
         }
      }
   }
   else{
      Index      = (((uint32)AbsReal) * 1024u) / ((uint32)AbsImag);
      TableValue = Table_ArcTan[Index];
      *pAmp      = (((uint32)AbsImag) * Table_Amp[Index]) >> 15u;

      if(
            Stat.Real
         >= 0
      ){
         if(
               Stat.Imag
            >  0
         ){
            Angle = 0x4000u - TableValue;
         }
         else{
            Angle = 0xC000u + TableValue;
         }
      }
      else{
         if(
               Stat.Imag
            >  0
         ){
            Angle = 0x4000u + TableValue;
         }
         else{
            Angle = 0xC000u - TableValue;
         }
      }
   }
   return(uint16)Angle;
}

uint16 Mat_CalcAngle(
   TComplex Stat
){
   sint32 AbsReal = Stat.Real;
   if(
         AbsReal
      <  0
   ){
      AbsReal = -AbsReal;
   }

   sint32 AbsImag = Stat.Imag;
   if(
         AbsImag
      <  0
   ){
      AbsImag = -AbsImag;
   }

   uint32 Index;
   uint32 TableValue;
   uint32 Angle;
   if(
         AbsImag
      <= AbsReal
   ){
      Index      = (((uint32)AbsImag) * 1024u) / ((uint32)AbsReal);
      TableValue = Table_ArcTan[Index];

      if(
            Stat.Real
         >  0
      ){
         if(
               Stat.Imag
            >= 0
         ){
            Angle = TableValue;
         }
         else{
            Angle = 0x10000u - TableValue;
         }
      }
      else{
         if(
               Stat.Imag
            >= 0
         ){
            Angle = 0x8000u - TableValue;
         }
         else{
            Angle = 0x8000u + TableValue;
         }
      }
   }
   else{
      Index      = (((uint32)AbsReal) * 1024u) / ((uint32)AbsImag);
      TableValue = Table_ArcTan[Index];

      if(
            Stat.Real
         >= 0
      ){
         if(
               Stat.Imag
            >  0
         ){
            Angle = 0x4000u - TableValue;
         }
         else{
            Angle = 0xC000u + TableValue;
         }
      }
      else{
         if(
               Stat.Imag
            >  0
         ){
            Angle = 0x4000u + TableValue;
         }
         else{
            Angle = 0xC000u - TableValue;
         }
      }
   }
   return(uint16)Angle;
}

uint16 Mat_CalcAmp(
   TComplex Stat
){
   sint32 AbsReal = Stat.Real;
   if(
         AbsReal
      <  0
   ){
      AbsReal = -AbsReal;
   }

   sint32 AbsImag = Stat.Imag;
   if(
         AbsImag
      <  0
   ){
      AbsImag = -AbsImag;
   }

   uint32 Index;
   uint32 Amp;
   if(
         AbsImag
      <= AbsReal
   ){
      Index = (((uint32)AbsImag) * 1024u) / ((uint32)AbsReal);
      Amp   = (((uint32)AbsReal) * Table_Amp[Index]) >> 15u;
   }
   else{
      Index = (((uint32)AbsReal) * 1024u) / ((uint32)AbsImag);
      Amp   = (((uint32)AbsImag) * Table_Amp[Index]) >> 15u;
   }
   return(uint16)Amp;
}

sint16 Mat_Ramp(
      sint16  Input
   ,  sint32  Slewrate
   ,  sint32* Output
){
   sint32 inp  = Input << 16;
   sint32 outp = *Output;

   if(
         inp
      >  outp
   ){
      outp += Slewrate;
      if(
            outp
         >  inp
      ){
         outp = inp;
      }
   }
   else{
      outp -= Slewrate;
      if(
            outp
         <  inp
      ){
         outp = inp;
      }
   }
   *Output = outp;
   return(outp >> 16);
}

sint16 abs(sint16 inp){
   if(0 <= inp) return  inp;
   else         return -inp;
}
