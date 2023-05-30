#pragma once
/******************************************************************************/
/* File   : uC_Ssc.hpp                                                        */
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
#include "tle987x.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SSC1_BR_BR_VALUE_Pos                                          (0UL)
#define SSC1_BR_BR_VALUE_Msk                                          (0xffffUL)
#define SSC1_CON_BC_Pos                                               (0UL)
#define SSC1_CON_BC_Msk                                               (0xfUL)
#define SSC1_CON_TE_Pos                                               (8UL)
#define SSC1_CON_TE_Msk                                               (0x100UL)
#define SSC1_CON_RE_Pos                                               (9UL)
#define SSC1_CON_RE_Msk                                               (0x200UL)
#define SSC1_CON_PE_Pos                                               (10UL)
#define SSC1_CON_PE_Msk                                               (0x400UL)
#define SSC1_CON_BE_Pos                                               (11UL)
#define SSC1_CON_BE_Msk                                               (0x800UL)
#define SSC1_CON_BSY_Pos                                              (12UL)
#define SSC1_CON_BSY_Msk                                              (0x1000UL)
#define SSC1_CON_MS_Pos                                               (14UL)
#define SSC1_CON_MS_Msk                                               (0x4000UL)
#define SSC1_CON_EN_Pos                                               (15UL)
#define SSC1_CON_EN_Msk                                               (0x8000UL)
#define SSC1_ISRCLR_TECLR_Pos                                         (8UL)
#define SSC1_ISRCLR_TECLR_Msk                                         (0x100UL)
#define SSC1_ISRCLR_RECLR_Pos                                         (9UL)
#define SSC1_ISRCLR_RECLR_Msk                                         (0x200UL)
#define SSC1_ISRCLR_PECLR_Pos                                         (10UL)
#define SSC1_ISRCLR_PECLR_Msk                                         (0x400UL)
#define SSC1_ISRCLR_BECLR_Pos                                         (11UL)
#define SSC1_ISRCLR_BECLR_Msk                                         (0x800UL)
#define SSC1_PISEL_MIS_0_Pos                                          (0UL)
#define SSC1_PISEL_MIS_0_Msk                                          (0x1UL)
#define SSC1_PISEL_SIS_Pos                                            (1UL)
#define SSC1_PISEL_SIS_Msk                                            (0x2UL)
#define SSC1_PISEL_CIS_Pos                                            (2UL)
#define SSC1_PISEL_CIS_Msk                                            (0x4UL)
#define SSC1_PISEL_MIS_1_Pos                                          (3UL)
#define SSC1_PISEL_MIS_1_Msk                                          (0x8UL)
#define SSC1_RB_RB_VALUE_Pos                                          (0UL)
#define SSC1_RB_RB_VALUE_Msk                                          (0xffffUL)
#define SSC1_TB_TB_VALUE_Pos                                          (0UL)
#define SSC1_TB_TB_VALUE_Msk                                          (0xffffUL)
#define SSC2_BR_BR_VALUE_Pos                                          (0UL)
#define SSC2_BR_BR_VALUE_Msk                                          (0xffffUL)
#define SSC2_CON_BC_Pos                                               (0UL)
#define SSC2_CON_BC_Msk                                               (0xfUL)
#define SSC2_CON_TE_Pos                                               (8UL)
#define SSC2_CON_TE_Msk                                               (0x100UL)
#define SSC2_CON_RE_Pos                                               (9UL)
#define SSC2_CON_RE_Msk                                               (0x200UL)
#define SSC2_CON_PE_Pos                                               (10UL)
#define SSC2_CON_PE_Msk                                               (0x400UL)
#define SSC2_CON_BE_Pos                                               (11UL)
#define SSC2_CON_BE_Msk                                               (0x800UL)
#define SSC2_CON_BSY_Pos                                              (12UL)
#define SSC2_CON_BSY_Msk                                              (0x1000UL)
#define SSC2_CON_MS_Pos                                               (14UL)
#define SSC2_CON_MS_Msk                                               (0x4000UL)
#define SSC2_CON_EN_Pos                                               (15UL)
#define SSC2_CON_EN_Msk                                               (0x8000UL)
#define SSC2_ISRCLR_TECLR_Pos                                         (8UL)
#define SSC2_ISRCLR_TECLR_Msk                                         (0x100UL)
#define SSC2_ISRCLR_RECLR_Pos                                         (9UL)
#define SSC2_ISRCLR_RECLR_Msk                                         (0x200UL)
#define SSC2_ISRCLR_PECLR_Pos                                         (10UL)
#define SSC2_ISRCLR_PECLR_Msk                                         (0x400UL)
#define SSC2_ISRCLR_BECLR_Pos                                         (11UL)
#define SSC2_ISRCLR_BECLR_Msk                                         (0x800UL)
#define SSC2_PISEL_MIS_0_Pos                                          (0UL)
#define SSC2_PISEL_MIS_0_Msk                                          (0x1UL)
#define SSC2_PISEL_SIS_Pos                                            (1UL)
#define SSC2_PISEL_SIS_Msk                                            (0x2UL)
#define SSC2_PISEL_CIS_Pos                                            (2UL)
#define SSC2_PISEL_CIS_Msk                                            (0x4UL)
#define SSC2_PISEL_MIS_1_Pos                                          (3UL)
#define SSC2_PISEL_MIS_1_Msk                                          (0x8UL)
#define SSC2_RB_RB_VALUE_Pos                                          (0UL)
#define SSC2_RB_RB_VALUE_Msk                                          (0xffffUL)
#define SSC2_TB_TB_VALUE_Pos                                          (0UL)
#define SSC2_TB_TB_VALUE_Msk                                          (0xffffUL)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t MIS_0      : 1;
      __IOM uint16_t SIS        : 1;
      __IOM uint16_t CIS        : 1;
      __IOM uint16_t MIS_1      : 1;
    }bit;
  }PISEL;
  __IM  uint16_t  RESERVED;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t BC         : 4;
      __IM  uint16_t            : 4;
      __IM  uint16_t TE         : 1;
      __IM  uint16_t RE         : 1;
      __IM  uint16_t PE         : 1;
      __IM  uint16_t BE         : 1;
      __IM  uint16_t BSY        : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t MS         : 1;
      __IOM uint16_t EN         : 1;
    }bit;
  }CON;
  __IM  uint16_t  RESERVED1;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t TB_VALUE   : 16;
    }bit;
  }TB;
  __IM  uint16_t  RESERVED2;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t RB_VALUE   : 16;
    }bit;
  }RB;
  __IM  uint16_t  RESERVED3;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t BR_VALUE   : 16;
    }bit;
  }BR;
  __IM  uint16_t  RESERVED4;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t            : 8;
      __OM  uint16_t TECLR      : 1;
      __OM  uint16_t RECLR      : 1;
      __OM  uint16_t PECLR      : 1;
      __OM  uint16_t BECLR      : 1;
    }bit;
  }ISRCLR;
}SSC1_Type;

typedef struct{
  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t MIS_0      : 1;
      __IOM uint16_t SIS        : 1;
      __IOM uint16_t CIS        : 1;
      __IOM uint16_t MIS_1      : 1;
    }bit;
  }PISEL;
  __IM  uint16_t  RESERVED;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t BC         : 4;
      __IM  uint16_t            : 4;
      __IM  uint16_t TE         : 1;
      __IM  uint16_t RE         : 1;
      __IM  uint16_t PE         : 1;
      __IM  uint16_t BE         : 1;
      __IM  uint16_t BSY        : 1;
      __IM  uint16_t            : 1;
      __IOM uint16_t MS         : 1;
      __IOM uint16_t EN         : 1;
    }bit;
  }CON;
  __IM  uint16_t  RESERVED1;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t TB_VALUE   : 16;
    }bit;
  }TB;
  __IM  uint16_t  RESERVED2;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t RB_VALUE   : 16;
    }bit;
  }RB;
  __IM  uint16_t  RESERVED3;

  union{
    __IOM uint16_t reg;

    struct{
      __IOM uint16_t BR_VALUE   : 16;
    }bit;
  }BR;
  __IM  uint16_t  RESERVED4;

  union{
    __IOM uint16_t reg;

    struct{
      __IM  uint16_t            : 8;
      __OM  uint16_t TECLR      : 1;
      __OM  uint16_t RECLR      : 1;
      __OM  uint16_t PECLR      : 1;
      __OM  uint16_t BECLR      : 1;
    }bit;
  }ISRCLR;
}SSC2_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern SSC1_Type                                                           SSC1;
extern SSC2_Type                                                           SSC2;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

