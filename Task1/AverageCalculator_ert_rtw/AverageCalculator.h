/*
 * File: AverageCalculator.h
 *
 * Code generated for Simulink model 'AverageCalculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Feb  7 02:08:38 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AverageCalculator_h_
#define RTW_HEADER_AverageCalculator_h_
#include <string.h>
#include <stddef.h>
#ifndef AverageCalculator_COMMON_INCLUDES_
#define AverageCalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* AverageCalculator_COMMON_INCLUDES_ */

#include "AverageCalculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T InputArray[5];                /* '<Root>/InputArray' */
} ExtU_AverageCalculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Avg;                          /* '<Root>/Avg' */
} ExtY_AverageCalculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_AverageCalculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_AverageCalculator_T AverageCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_AverageCalculator_T AverageCalculator_Y;

/* Model entry point functions */
extern void AverageCalculator_initialize(void);
extern void AverageCalculator_step(void);
extern void AverageCalculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_AverageCalculator_T *const AverageCalculator_M;

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
 * '<Root>' : 'AverageCalculator'
 * '<S1>'   : 'AverageCalculator/AverageCalc'
 * '<S2>'   : 'AverageCalculator/AverageCalc/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_AverageCalculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
