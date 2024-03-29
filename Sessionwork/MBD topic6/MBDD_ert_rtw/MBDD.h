/*
 * File: MBDD.h
 *
 * Code generated for Simulink model 'MBDD'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 20:09:56 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MBDD_h_
#define RTW_HEADER_MBDD_h_
#include <stddef.h>
#ifndef MBDD_COMMON_INCLUDES_
#define MBDD_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* MBDD_COMMON_INCLUDES_ */

#include "MBDD_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* user code (top of header file) */
#include "LED.h"

/* Real-time Model Data Structure */
struct tag_RTM_MBDD_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void MBDD_initialize(void);
extern void MBDD_step(void);
extern void MBDD_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MBDD_T *const MBDD_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'MBDD'
 * '<S1>'   : 'MBDD/Chart'
 */
#endif                                 /* RTW_HEADER_MBDD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
