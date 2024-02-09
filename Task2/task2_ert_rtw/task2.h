/*
 * File: task2.h
 *
 * Code generated for Simulink model 'task2'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 13:39:01 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_task2_h_
#define RTW_HEADER_task2_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef task2_COMMON_INCLUDES_
#define task2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* task2_COMMON_INCLUDES_ */

#include "task2_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: "Even")
   * Referenced by:
   *   '<S4>/String Constant'
   *   '<S6>/String Constant'
   */
  char_T pooled1[256];

  /* Pooled Parameter (Expression: "odd")
   * Referenced by:
   *   '<S3>/String Constant'
   *   '<S5>/String Constant'
   */
  char_T pooled2[256];
} ConstP_task2_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
} ExtU_task2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
  char_T Out2[256];                    /* '<Root>/Out2' */
} ExtY_task2_T;

/* Real-time Model Data Structure */
struct tag_RTM_task2_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_task2_T task2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_task2_T task2_Y;

/* Constant parameters (default storage) */
extern const ConstP_task2_T task2_ConstP;

/* Model entry point functions */
extern void task2_initialize(void);
extern void task2_step(void);
extern void task2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_task2_T *const task2_M;

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
 * '<Root>' : 'task2'
 * '<S1>'   : 'task2/Is Even'
 * '<S2>'   : 'task2/IsEven2'
 * '<S3>'   : 'task2/Is Even/If Action Subsystem'
 * '<S4>'   : 'task2/Is Even/If Action Subsystem1'
 * '<S5>'   : 'task2/IsEven2/If Action Subsystem'
 * '<S6>'   : 'task2/IsEven2/If Action Subsystem1'
 * '<S7>'   : 'task2/IsEven2/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_task2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
