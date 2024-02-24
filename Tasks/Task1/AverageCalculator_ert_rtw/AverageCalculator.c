/*
 * File: AverageCalculator.c
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

#include "AverageCalculator.h"
#include "AverageCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_AverageCalculator_T AverageCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AverageCalculator_T AverageCalculator_Y;

/* Real-time model */
static RT_MODEL_AverageCalculator_T AverageCalculator_M_;
RT_MODEL_AverageCalculator_T *const AverageCalculator_M = &AverageCalculator_M_;

/* Model step function */
void AverageCalculator_step(void)
{
  real_T rtb_SumofElements;
  int32_T i;

  /* Sum: '<S1>/Sum of Elements' incorporates:
   *  Inport: '<Root>/InputArray'
   */
  rtb_SumofElements = -0.0;
  for (i = 0; i < 5; i++) {
    rtb_SumofElements += AverageCalculator_U.InputArray[i];
  }

  /* End of Sum: '<S1>/Sum of Elements' */

  /* Outport: '<Root>/Avg' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   *  Product: '<S1>/Divide'
   */
  /* MATLAB Function 'AverageCalc/MATLAB Function': '<S2>:1' */
  /* '<S2>:1:2' y = numel(u); */
  AverageCalculator_Y.Avg = rtb_SumofElements / 5.0;
}

/* Model initialize function */
void AverageCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(AverageCalculator_M, (NULL));

  /* external inputs */
  (void)memset(&AverageCalculator_U, 0, sizeof(ExtU_AverageCalculator_T));

  /* external outputs */
  AverageCalculator_Y.Avg = 0.0;
}

/* Model terminate function */
void AverageCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
