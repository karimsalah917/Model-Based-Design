/*
 * File: task2.c
 *
 * Code generated for Simulink model 'task2'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Jan 27 08:28:04 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "task2.h"
#include "task2_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_task2_T task2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_task2_T task2_Y;

/* Real-time model */
static RT_MODEL_task2_T task2_M_;
RT_MODEL_task2_T *const task2_M = &task2_M_;
real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T u1_0;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (!(fabs(u1_0 - floor(u1_0 + 0.5)) > DBL_EPSILON * u1_0)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void task2_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/In1'
   *  Math: '<S1>/Math Function'
   *  Outport: '<Root>/Out1'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   */
  if (rt_remd_snf(task2_U.In1, 2.0) == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&task2_Y.Out1[0], &task2_ConstP.StringConstant_String[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    task2_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&task2_Y.Out1[0], &task2_ConstP.StringConstant_String_k[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    task2_Y.Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void task2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(task2_M, (NULL));

  /* external inputs */
  task2_U.In1 = 0.0;

  /* external outputs */
  (void) memset(&task2_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void task2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
