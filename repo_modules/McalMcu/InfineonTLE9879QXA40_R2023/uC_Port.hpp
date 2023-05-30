#pragma once
/******************************************************************************/
/* File   : uC_Port.hpp                                                       */
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
#define PORT_P0_ALTSEL0_P0_Pos                                          (0UL)
#define PORT_P0_ALTSEL0_P0_Msk                                          (0x1UL)
#define PORT_P0_ALTSEL0_P1_Pos                                          (1UL)
#define PORT_P0_ALTSEL0_P1_Msk                                          (0x2UL)
#define PORT_P0_ALTSEL0_P2_Pos                                          (2UL)
#define PORT_P0_ALTSEL0_P2_Msk                                          (0x4UL)
#define PORT_P0_ALTSEL0_P3_Pos                                          (3UL)
#define PORT_P0_ALTSEL0_P3_Msk                                          (0x8UL)
#define PORT_P0_ALTSEL0_P4_Pos                                          (4UL)
#define PORT_P0_ALTSEL0_P4_Msk                                          (0x10UL)
#define PORT_P0_ALTSEL1_P0_Pos                                          (0UL)
#define PORT_P0_ALTSEL1_P0_Msk                                          (0x1UL)
#define PORT_P0_ALTSEL1_P1_Pos                                          (1UL)
#define PORT_P0_ALTSEL1_P1_Msk                                          (0x2UL)
#define PORT_P0_ALTSEL1_P2_Pos                                          (2UL)
#define PORT_P0_ALTSEL1_P2_Msk                                          (0x4UL)
#define PORT_P0_ALTSEL1_P3_Pos                                          (3UL)
#define PORT_P0_ALTSEL1_P3_Msk                                          (0x8UL)
#define PORT_P0_ALTSEL1_P4_Pos                                          (4UL)
#define PORT_P0_ALTSEL1_P4_Msk                                          (0x10UL)
#define PORT_P0_DATA_P0_Pos                                             (0UL)
#define PORT_P0_DATA_P0_Msk                                             (0x1UL)
#define PORT_P0_DATA_P1_Pos                                             (1UL)
#define PORT_P0_DATA_P1_Msk                                             (0x2UL)
#define PORT_P0_DATA_P2_Pos                                             (2UL)
#define PORT_P0_DATA_P2_Msk                                             (0x4UL)
#define PORT_P0_DATA_P3_Pos                                             (3UL)
#define PORT_P0_DATA_P3_Msk                                             (0x8UL)
#define PORT_P0_DATA_P4_Pos                                             (4UL)
#define PORT_P0_DATA_P4_Msk                                             (0x10UL)
#define PORT_P0_DIR_P0_Pos                                              (0UL)
#define PORT_P0_DIR_P0_Msk                                              (0x1UL)
#define PORT_P0_DIR_P1_Pos                                              (1UL)
#define PORT_P0_DIR_P1_Msk                                              (0x2UL)
#define PORT_P0_DIR_P2_Pos                                              (2UL)
#define PORT_P0_DIR_P2_Msk                                              (0x4UL)
#define PORT_P0_DIR_P3_Pos                                              (3UL)
#define PORT_P0_DIR_P3_Msk                                              (0x8UL)
#define PORT_P0_DIR_P4_Pos                                              (4UL)
#define PORT_P0_DIR_P4_Msk                                              (0x10UL)
#define PORT_P0_OD_P0_Pos                                               (0UL)
#define PORT_P0_OD_P0_Msk                                               (0x1UL)
#define PORT_P0_OD_P1_Pos                                               (1UL)
#define PORT_P0_OD_P1_Msk                                               (0x2UL)
#define PORT_P0_OD_P2_Pos                                               (2UL)
#define PORT_P0_OD_P2_Msk                                               (0x4UL)
#define PORT_P0_OD_P3_Pos                                               (3UL)
#define PORT_P0_OD_P3_Msk                                               (0x8UL)
#define PORT_P0_OD_P4_Pos                                               (4UL)
#define PORT_P0_OD_P4_Msk                                               (0x10UL)
#define PORT_P0_PUDEN_P0_Pos                                            (0UL)
#define PORT_P0_PUDEN_P0_Msk                                            (0x1UL)
#define PORT_P0_PUDEN_P1_Pos                                            (1UL)
#define PORT_P0_PUDEN_P1_Msk                                            (0x2UL)
#define PORT_P0_PUDEN_P2_Pos                                            (2UL)
#define PORT_P0_PUDEN_P2_Msk                                            (0x4UL)
#define PORT_P0_PUDEN_P3_Pos                                            (3UL)
#define PORT_P0_PUDEN_P3_Msk                                            (0x8UL)
#define PORT_P0_PUDEN_P4_Pos                                            (4UL)
#define PORT_P0_PUDEN_P4_Msk                                            (0x10UL)
#define PORT_P0_PUDSEL_P0_Pos                                           (0UL)
#define PORT_P0_PUDSEL_P0_Msk                                           (0x1UL)
#define PORT_P0_PUDSEL_P1_Pos                                           (1UL)
#define PORT_P0_PUDSEL_P1_Msk                                           (0x2UL)
#define PORT_P0_PUDSEL_P2_Pos                                           (2UL)
#define PORT_P0_PUDSEL_P2_Msk                                           (0x4UL)
#define PORT_P0_PUDSEL_P3_Pos                                           (3UL)
#define PORT_P0_PUDSEL_P3_Msk                                           (0x8UL)
#define PORT_P0_PUDSEL_P4_Pos                                           (4UL)
#define PORT_P0_PUDSEL_P4_Msk                                           (0x10UL)
#define PORT_P1_ALTSEL0_P0_Pos                                          (0UL)
#define PORT_P1_ALTSEL0_P0_Msk                                          (0x1UL)
#define PORT_P1_ALTSEL0_P1_Pos                                          (1UL)
#define PORT_P1_ALTSEL0_P1_Msk                                          (0x2UL)
#define PORT_P1_ALTSEL0_P2_Pos                                          (2UL)
#define PORT_P1_ALTSEL0_P2_Msk                                          (0x4UL)
#define PORT_P1_ALTSEL0_P3_Pos                                          (3UL)
#define PORT_P1_ALTSEL0_P3_Msk                                          (0x8UL)
#define PORT_P1_ALTSEL0_P4_Pos                                          (4UL)
#define PORT_P1_ALTSEL0_P4_Msk                                          (0x10UL)
#define PORT_P1_ALTSEL1_P0_Pos                                          (0UL)
#define PORT_P1_ALTSEL1_P0_Msk                                          (0x1UL)
#define PORT_P1_ALTSEL1_P1_Pos                                          (1UL)
#define PORT_P1_ALTSEL1_P1_Msk                                          (0x2UL)
#define PORT_P1_ALTSEL1_P2_Pos                                          (2UL)
#define PORT_P1_ALTSEL1_P2_Msk                                          (0x4UL)
#define PORT_P1_ALTSEL1_P3_Pos                                          (3UL)
#define PORT_P1_ALTSEL1_P3_Msk                                          (0x8UL)
#define PORT_P1_ALTSEL1_P4_Pos                                          (4UL)
#define PORT_P1_ALTSEL1_P4_Msk                                          (0x10UL)
#define PORT_P1_DATA_P0_Pos                                             (0UL)
#define PORT_P1_DATA_P0_Msk                                             (0x1UL)
#define PORT_P1_DATA_P1_Pos                                             (1UL)
#define PORT_P1_DATA_P1_Msk                                             (0x2UL)
#define PORT_P1_DATA_P2_Pos                                             (2UL)
#define PORT_P1_DATA_P2_Msk                                             (0x4UL)
#define PORT_P1_DATA_P3_Pos                                             (3UL)
#define PORT_P1_DATA_P3_Msk                                             (0x8UL)
#define PORT_P1_DATA_P4_Pos                                             (4UL)
#define PORT_P1_DATA_P4_Msk                                             (0x10UL)
#define PORT_P1_DIR_P0_Pos                                              (0UL)
#define PORT_P1_DIR_P0_Msk                                              (0x1UL)
#define PORT_P1_DIR_P1_Pos                                              (1UL)
#define PORT_P1_DIR_P1_Msk                                              (0x2UL)
#define PORT_P1_DIR_P2_Pos                                              (2UL)
#define PORT_P1_DIR_P2_Msk                                              (0x4UL)
#define PORT_P1_DIR_P3_Pos                                              (3UL)
#define PORT_P1_DIR_P3_Msk                                              (0x8UL)
#define PORT_P1_DIR_P4_Pos                                              (4UL)
#define PORT_P1_DIR_P4_Msk                                              (0x10UL)
#define PORT_P1_OD_P0_Pos                                               (1UL)
#define PORT_P1_OD_P0_Msk                                               (0x2UL)
#define PORT_P1_OD_P1_Pos                                               (2UL)
#define PORT_P1_OD_P1_Msk                                               (0x4UL)
#define PORT_P1_OD_P3_P2_Pos                                            (3UL)
#define PORT_P1_OD_P3_P2_Msk                                            (0x8UL)
#define PORT_P1_OD_P4_Pos                                               (4UL)
#define PORT_P1_OD_P4_Msk                                               (0x10UL)
#define PORT_P1_PUDEN_P0_Pos                                            (0UL)
#define PORT_P1_PUDEN_P0_Msk                                            (0x1UL)
#define PORT_P1_PUDEN_P1_Pos                                            (1UL)
#define PORT_P1_PUDEN_P1_Msk                                            (0x2UL)
#define PORT_P1_PUDEN_P2_Pos                                            (2UL)
#define PORT_P1_PUDEN_P2_Msk                                            (0x4UL)
#define PORT_P1_PUDEN_P3_Pos                                            (3UL)
#define PORT_P1_PUDEN_P3_Msk                                            (0x8UL)
#define PORT_P1_PUDEN_P4_Pos                                            (4UL)
#define PORT_P1_PUDEN_P4_Msk                                            (0x10UL)
#define PORT_P1_PUDSEL_P0_Pos                                           (0UL)
#define PORT_P1_PUDSEL_P0_Msk                                           (0x1UL)
#define PORT_P1_PUDSEL_P1_Pos                                           (1UL)
#define PORT_P1_PUDSEL_P1_Msk                                           (0x2UL)
#define PORT_P1_PUDSEL_P2_Pos                                           (2UL)
#define PORT_P1_PUDSEL_P2_Msk                                           (0x4UL)
#define PORT_P1_PUDSEL_P3_Pos                                           (3UL)
#define PORT_P1_PUDSEL_P3_Msk                                           (0x8UL)
#define PORT_P1_PUDSEL_P4_Pos                                           (4UL)
#define PORT_P1_PUDSEL_P4_Msk                                           (0x10UL)
#define PORT_P2_DATA_P0_Pos                                             (0UL)
#define PORT_P2_DATA_P0_Msk                                             (0x1UL)
#define PORT_P2_DATA_P2_Pos                                             (2UL)
#define PORT_P2_DATA_P2_Msk                                             (0x4UL)
#define PORT_P2_DATA_P3_Pos                                             (3UL)
#define PORT_P2_DATA_P3_Msk                                             (0x8UL)
#define PORT_P2_DATA_P4_Pos                                             (4UL)
#define PORT_P2_DATA_P4_Msk                                             (0x10UL)
#define PORT_P2_DATA_P5_Pos                                             (5UL)
#define PORT_P2_DATA_P5_Msk                                             (0x20UL)
#define PORT_P2_DIR_P0_Pos                                              (0UL)
#define PORT_P2_DIR_P0_Msk                                              (0x1UL)
#define PORT_P2_DIR_P2_Pos                                              (2UL)
#define PORT_P2_DIR_P2_Msk                                              (0x4UL)
#define PORT_P2_DIR_P3_Pos                                              (3UL)
#define PORT_P2_DIR_P3_Msk                                              (0x8UL)
#define PORT_P2_DIR_P4_Pos                                              (4UL)
#define PORT_P2_DIR_P4_Msk                                              (0x10UL)
#define PORT_P2_DIR_P5_Pos                                              (5UL)
#define PORT_P2_DIR_P5_Msk                                              (0x20UL)
#define PORT_P2_PUDEN_P0_Pos                                            (0UL)
#define PORT_P2_PUDEN_P0_Msk                                            (0x1UL)
#define PORT_P2_PUDEN_P2_Pos                                            (2UL)
#define PORT_P2_PUDEN_P2_Msk                                            (0x4UL)
#define PORT_P2_PUDEN_P3_Pos                                            (3UL)
#define PORT_P2_PUDEN_P3_Msk                                            (0x8UL)
#define PORT_P2_PUDEN_P4_Pos                                            (4UL)
#define PORT_P2_PUDEN_P4_Msk                                            (0x10UL)
#define PORT_P2_PUDEN_P5_Pos                                            (5UL)
#define PORT_P2_PUDEN_P5_Msk                                            (0x20UL)
#define PORT_P2_PUDSEL_P0_Pos                                           (0UL)
#define PORT_P2_PUDSEL_P0_Msk                                           (0x1UL)
#define PORT_P2_PUDSEL_P2_Pos                                           (2UL)
#define PORT_P2_PUDSEL_P2_Msk                                           (0x4UL)
#define PORT_P2_PUDSEL_P3_Pos                                           (3UL)
#define PORT_P2_PUDSEL_P3_Msk                                           (0x8UL)
#define PORT_P2_PUDSEL_P4_Pos                                           (4UL)
#define PORT_P2_PUDSEL_P4_Msk                                           (0x10UL)
#define PORT_P2_PUDSEL_P5_Pos                                           (5UL)
#define PORT_P2_PUDSEL_P5_Msk                                           (0x20UL)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_DATA;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_DIR;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_DATA;
  __IM  uint8_t   RESERVED2[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_DIR;
  __IM  uint8_t   RESERVED3[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t P0          : 1;
      __IM  uint8_t             : 1;
      __IM  uint8_t P2          : 1;
      __IM  uint8_t P3          : 1;
      __IM  uint8_t P4          : 1;
      __IM  uint8_t P5          : 1;
    }bit;
  }P2_DATA;
  __IM  uint8_t   RESERVED4[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
      __IOM uint8_t P5          : 1;
    }bit;
  }P2_DIR;
  __IM  uint8_t   RESERVED5[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_PUDSEL;
  __IM  uint8_t   RESERVED6[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_PUDEN;
  __IM  uint8_t   RESERVED7[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_PUDSEL;
  __IM  uint8_t   RESERVED8[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_PUDEN;
  __IM  uint8_t   RESERVED9[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
      __IOM uint8_t P5          : 1;
    }bit;
  }P2_PUDSEL;
  __IM  uint8_t   RESERVED10[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IM  uint8_t             : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
      __IOM uint8_t P5          : 1;
    }bit;
  }P2_PUDEN;
  __IM  uint8_t   RESERVED11[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_ALTSEL0;
  __IM  uint8_t   RESERVED12[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_ALTSEL1;
  __IM  uint8_t   RESERVED13[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_ALTSEL0;
  __IM  uint8_t   RESERVED14[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_ALTSEL1;
  __IM  uint8_t   RESERVED15[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P2          : 1;
      __IOM uint8_t P3          : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P0_OD;
  __IM  uint8_t   RESERVED16[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IM  uint8_t             : 1;
      __IOM uint8_t P0          : 1;
      __IOM uint8_t P1          : 1;
      __IOM uint8_t P3_P2       : 1;
      __IOM uint8_t P4          : 1;
    }bit;
  }P1_OD;
}PORT_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern PORT_Type                                                           PORT;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/



