/*
 * File: untitled.h
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 02:48:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#include <string.h>
#include <stddef.h>
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

#include "untitled_types.h"

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
} B_untitled_T;

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
} ConstP_untitled_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int8_T Input;                        /* '<Root>/Input' */
} ExtU_untitled_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_untitled_T;

/* Real-time Model Data Structure */
struct tag_RTM_untitled_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_untitled_T untitled_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_untitled_T untitled_Y;

/* Constant parameters (default storage) */
extern const ConstP_untitled_T untitled_ConstP;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);
extern void untitled_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled_T *const untitled_M;

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
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/Grading Subsystem'
 * '<S2>'   : 'untitled/Grading Subsystem/If Action Subsystem'
 * '<S3>'   : 'untitled/Grading Subsystem/If Action Subsystem1'
 * '<S4>'   : 'untitled/Grading Subsystem/If Action Subsystem2'
 * '<S5>'   : 'untitled/Grading Subsystem/If Action Subsystem3'
 * '<S6>'   : 'untitled/Grading Subsystem/If Action Subsystem4'
 * '<S7>'   : 'untitled/Grading Subsystem/If Action Subsystem5'
 * '<S8>'   : 'untitled/Grading Subsystem/If Action Subsystem6'
 * '<S9>'   : 'untitled/Grading Subsystem/If Action Subsystem7'
 * '<S10>'  : 'untitled/Grading Subsystem/If Action Subsystem8'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
