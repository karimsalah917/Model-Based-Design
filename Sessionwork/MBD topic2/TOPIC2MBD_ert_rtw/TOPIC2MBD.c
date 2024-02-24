/*
 * File: TOPIC2MBD.c
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

#include "TOPIC2MBD.h"
#include "TOPIC2MBD_private.h"

/* Block signals (default storage) */
B_TOPIC2MBD_T TOPIC2MBD_B;

/* External inputs (root inport signals with default storage) */
ExtU_TOPIC2MBD_T TOPIC2MBD_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TOPIC2MBD_T TOPIC2MBD_Y;

/* Real-time model */
static RT_MODEL_TOPIC2MBD_T TOPIC2MBD_M_;
RT_MODEL_TOPIC2MBD_T *const TOPIC2MBD_M = &TOPIC2MBD_M_;

/* Model step function */
void TOPIC2MBD_step(void)
{
  real_T tmp;

  /* SwitchCase: '<Root>/Switch Case' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<S3>/In1'
   */
  if (TOPIC2MBD_U.In1 < 0.0) {
    tmp = ceil(TOPIC2MBD_U.In1);
  } else {
    tmp = floor(TOPIC2MBD_U.In1);
  }

  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  switch (tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp) {
   case 0:
   case 1:
    break;

   default:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    TOPIC2MBD_B.In1 = TOPIC2MBD_U.In1;

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem2' */
    break;
  }

  /* End of SwitchCase: '<Root>/Switch Case' */

  /* Outport: '<Root>/Out1' incorporates:
   *  SignalConversion: '<Root>/Signal Conversion2'
   */
  TOPIC2MBD_Y.Out1 = TOPIC2MBD_B.In1;
}

/* Model initialize function */
void TOPIC2MBD_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(TOPIC2MBD_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &TOPIC2MBD_B), 0,
                sizeof(B_TOPIC2MBD_T));

  /* external inputs */
  TOPIC2MBD_U.In1 = 0.0;

  /* external outputs */
  TOPIC2MBD_Y.Out1 = 0.0;
}

/* Model terminate function */
void TOPIC2MBD_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
