/*
 * File: ScalarCalculator.h
 *
 * Code generated for Simulink model 'ScalarCalculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Feb  7 01:39:59 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ScalarCalculator_h_
#define RTW_HEADER_ScalarCalculator_h_
#include <string.h>
#include <stddef.h>
#ifndef ScalarCalculator_COMMON_INCLUDES_
#define ScalarCalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ScalarCalculator_COMMON_INCLUDES_ */

#include "ScalarCalculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Operand1;                     /* '<Root>/Operand1' */
  real_T Operand2;                     /* '<Root>/Operand2' */
  real_T Operand3;                     /* '<Root>/Operand3' */
} ExtU_ScalarCalculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T Out5;                         /* '<Root>/Out5' */
  real_T Out6;                         /* '<Root>/Out6' */
  real_T Out7;                         /* '<Root>/Out7' */
  real_T Out8;                         /* '<Root>/Out8' */
} ExtY_ScalarCalculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_ScalarCalculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_ScalarCalculator_T ScalarCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ScalarCalculator_T ScalarCalculator_Y;

/* Model entry point functions */
extern void ScalarCalculator_initialize(void);
extern void ScalarCalculator_step(void);
extern void ScalarCalculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ScalarCalculator_T *const ScalarCalculator_M;

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
 * '<Root>' : 'ScalarCalculator'
 * '<S1>'   : 'ScalarCalculator/Subsystem'
 * '<S2>'   : 'ScalarCalculator/Subsystem/Addition'
 * '<S3>'   : 'ScalarCalculator/Subsystem/Decrement'
 * '<S4>'   : 'ScalarCalculator/Subsystem/Division'
 * '<S5>'   : 'ScalarCalculator/Subsystem/Increment'
 * '<S6>'   : 'ScalarCalculator/Subsystem/Multiblication'
 * '<S7>'   : 'ScalarCalculator/Subsystem/Subtraction'
 * '<S8>'   : 'ScalarCalculator/Subsystem/Division/If Action Subsystem'
 * '<S9>'   : 'ScalarCalculator/Subsystem/Division/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_ScalarCalculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
