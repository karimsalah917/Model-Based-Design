/*
 * File: topic4_types.h
 *
 * Code generated for Simulink model 'topic4'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 18:39:29 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_topic4_types_h_
#define RTW_HEADER_topic4_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_strData_
#define DEFINED_TYPEDEF_FOR_strData_

typedef struct {
  char_T Name[256];
  uint8_T Age;
} strData;

#endif

#ifndef DEFINED_TYPEDEF_FOR_strContainer_
#define DEFINED_TYPEDEF_FOR_strContainer_

typedef struct {
  strData Emp1;
  strData Emp2;
} strContainer;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_topic4_T RT_MODEL_topic4_T;

#endif                                 /* RTW_HEADER_topic4_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
