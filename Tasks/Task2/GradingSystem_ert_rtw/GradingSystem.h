/*
 * File: GradingSystem.h
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 02:49:19 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GradingSystem_h_
#define RTW_HEADER_GradingSystem_h_
#include <string.h>
#include <stddef.h>
#ifndef GradingSystem_COMMON_INCLUDES_
#define GradingSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* GradingSystem_COMMON_INCLUDES_ */

#include "GradingSystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  char_T Merge[256];                   /* '<S1>/Merge' */
  int8_T In1;                          /* '<S10>/In1' */
  int8_T In1_f;                        /* '<S4>/In1' */
  int8_T In1_fx;                       /* '<S3>/In1' */
  int8_T In1_c;                        /* '<S2>/In1' */
} B_GradingSystem_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_k
   * Referenced by: '<S6>/String Constant'
   */
  char_T StringConstant_String_k[256];

  /* Computed Parameter: StringConstant_String_f
   * Referenced by: '<S7>/String Constant'
   */
  char_T StringConstant_String_f[256];

  /* Computed Parameter: StringConstant_String_e
   * Referenced by: '<S8>/String Constant'
   */
  char_T StringConstant_String_e[256];

  /* Computed Parameter: StringConstant_String_n
   * Referenced by: '<S9>/String Constant'
   */
  char_T StringConstant_String_n[256];
} ConstP_GradingSystem_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int8_T Input;                        /* '<Root>/Input' */
} ExtU_GradingSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_GradingSystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_GradingSystem_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_GradingSystem_T GradingSystem_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_GradingSystem_T GradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_GradingSystem_T GradingSystem_Y;

/* Constant parameters (default storage) */
extern const ConstP_GradingSystem_T GradingSystem_ConstP;

/* Model entry point functions */
extern void GradingSystem_initialize(void);
extern void GradingSystem_step(void);
extern void GradingSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_GradingSystem_T *const GradingSystem_M;

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
 * '<Root>' : 'GradingSystem'
 * '<S1>'   : 'GradingSystem/Grading Subsystem'
 * '<S2>'   : 'GradingSystem/Grading Subsystem/If Action Subsystem'
 * '<S3>'   : 'GradingSystem/Grading Subsystem/If Action Subsystem1'
 * '<S4>'   : 'GradingSystem/Grading Subsystem/If Action Subsystem2'
 * '<S5>'   : 'GradingSystem/Grading Subsystem/If Action Subsystem3'
 * '<S6>'   : 'GradingSystem/Grading Subsystem/If Action Subsystem4'
 * '<S7>'   : 'GradingSystem/Grading Subsystem/If Action Subsystem5'
 * '<S8>'   : 'GradingSystem/Grading Subsystem/If Action Subsystem6'
 * '<S9>'   : 'GradingSystem/Grading Subsystem/If Action Subsystem7'
 * '<S10>'  : 'GradingSystem/Grading Subsystem/If Action Subsystem8'
 */
#endif                                 /* RTW_HEADER_GradingSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
