/*
 * File: topic4.h
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

#ifndef RTW_HEADER_topic4_h_
#define RTW_HEADER_topic4_h_
#include <string.h>
#include <stddef.h>
#ifndef topic4_COMMON_INCLUDES_
#define topic4_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* topic4_COMMON_INCLUDES_ */

#include "topic4_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T In2;                         /* '<Root>/In2' */
  char_T In1[256];                     /* '<Root>/In1' */
  uint8_T In3;                         /* '<Root>/In3' */
  char_T In4[256];                     /* '<Root>/In4' */
} ExtU_topic4_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  strContainer Out1;                   /* '<Root>/Out1' */
} ExtY_topic4_T;

/* Real-time Model Data Structure */
struct tag_RTM_topic4_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_topic4_T topic4_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_topic4_T topic4_Y;

/* External data declarations for dependent source files */
extern const strContainer topic4_rtZstrContainer;/* strContainer ground */

/* Model entry point functions */
extern void topic4_initialize(void);
extern void topic4_step(void);
extern void topic4_terminate(void);

/* Real-time Model object */
extern RT_MODEL_topic4_T *const topic4_M;

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
 * '<Root>' : 'topic4'
 */
#endif                                 /* RTW_HEADER_topic4_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
