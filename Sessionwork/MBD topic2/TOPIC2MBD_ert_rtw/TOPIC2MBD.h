/*
 * File: TOPIC2MBD.h
 *
 * Code generated for Simulink model 'TOPIC2MBD'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 21 20:26:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TOPIC2MBD_h_
#define RTW_HEADER_TOPIC2MBD_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef TOPIC2MBD_COMMON_INCLUDES_
#define TOPIC2MBD_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TOPIC2MBD_COMMON_INCLUDES_ */

#include "TOPIC2MBD_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T In1;                          /* '<S3>/In1' */
} B_TOPIC2MBD_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_TOPIC2MBD_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_TOPIC2MBD_T;

/* Real-time Model Data Structure */
struct tag_RTM_TOPIC2MBD_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_TOPIC2MBD_T TOPIC2MBD_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_TOPIC2MBD_T TOPIC2MBD_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TOPIC2MBD_T TOPIC2MBD_Y;

/* Model entry point functions */
extern void TOPIC2MBD_initialize(void);
extern void TOPIC2MBD_step(void);
extern void TOPIC2MBD_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TOPIC2MBD_T *const TOPIC2MBD_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S5>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S5>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S4>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S5>/FixPt Gateway In' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'TOPIC2MBD'
 * '<S1>'   : 'TOPIC2MBD/Switch Case Action Subsystem'
 * '<S2>'   : 'TOPIC2MBD/Switch Case Action Subsystem1'
 * '<S3>'   : 'TOPIC2MBD/Switch Case Action Subsystem2'
 * '<S4>'   : 'TOPIC2MBD/Switch Case Action Subsystem/Increment Stored Integer'
 * '<S5>'   : 'TOPIC2MBD/Switch Case Action Subsystem1/Decrement Stored Integer'
 */
#endif                                 /* RTW_HEADER_TOPIC2MBD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
