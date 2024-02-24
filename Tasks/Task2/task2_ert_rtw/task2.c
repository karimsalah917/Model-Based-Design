/*
 * File: task2.c
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

#include "task2.h"
#include "task2_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_task2_T task2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_task2_T task2_Y;

/* Real-time model */
static RT_MODEL_task2_T task2_M_;
RT_MODEL_task2_T *const task2_M = &task2_M_;

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem1'
 *    '<S2>/If Action Subsystem1'
 */
void task2_IfActionSubsystem1(char_T rty_Out1[256])
{
  /* StringConstant: '<S4>/String Constant' */
  strncpy(&rty_Out1[0], &task2_ConstP.pooled1[0], 255U);
  rty_Out1[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem'
 *    '<S2>/If Action Subsystem'
 */
void task2_IfActionSubsystem(char_T rty_Out1[256])
{
  /* StringConstant: '<S3>/String Constant' */
  strncpy(&rty_Out1[0], &task2_ConstP.pooled2[0], 255U);
  rty_Out1[255] = '\x00';
}

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
  char_T rtb_Merge[256];

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/In1'
   *  Math: '<S1>/Math Function'
   */
  if (rt_remd_snf(task2_U.In1, 2.0) == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    task2_IfActionSubsystem1(&rtb_Merge[0]);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    task2_IfActionSubsystem(&rtb_Merge[0]);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  }

  /* End of If: '<S1>/If' */

  /* Outport: '<Root>/Out1' */
  strncpy(&task2_Y.Out1[0], &rtb_Merge[0], 255U);
  task2_Y.Out1[255] = '\x00';

  /* If: '<S2>/If' incorporates:
   *  Inport: '<Root>/In2'
   */
  /* MATLAB Function 'IsEven2/MATLAB Function': '<S7>:1' */
  /* '<S7>:1:3' y = u%2; */
  /* 2; */
  if (task2_U.In2 == 0.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    task2_IfActionSubsystem1(&rtb_Merge[0]);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    task2_IfActionSubsystem(&rtb_Merge[0]);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
  }

  /* End of If: '<S2>/If' */

  /* Outport: '<Root>/Out2' */
  strncpy(&task2_Y.Out2[0], &rtb_Merge[0], 255U);
  task2_Y.Out2[255] = '\x00';
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
  (void)memset(&task2_U, 0, sizeof(ExtU_task2_T));

  /* external outputs */
  (void) memset((void *)&task2_Y, 0,
                sizeof(ExtY_task2_T));
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
