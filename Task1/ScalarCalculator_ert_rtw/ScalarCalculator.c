/*
 * File: ScalarCalculator.c
 *
 * Code generated for Simulink model 'ScalarCalculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Feb  7 01:39:59 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ScalarCalculator.h"
#include "ScalarCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_ScalarCalculator_T ScalarCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ScalarCalculator_T ScalarCalculator_Y;

/* Real-time model */
static RT_MODEL_ScalarCalculator_T ScalarCalculator_M_;
RT_MODEL_ScalarCalculator_T *const ScalarCalculator_M = &ScalarCalculator_M_;

/* Model step function */
void ScalarCalculator_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Operand1'
   */
  ScalarCalculator_Y.Out1 = ScalarCalculator_U.Operand1;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Sum: '<S7>/Add'
   */
  ScalarCalculator_Y.Out2 = ScalarCalculator_U.Operand1 -
    ScalarCalculator_U.Operand2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  Product: '<S6>/mulyiply'
   */
  ScalarCalculator_Y.Out3 = ScalarCalculator_U.Operand1 *
    ScalarCalculator_U.Operand2;

  /* If: '<S4>/If' incorporates:
   *  Inport: '<Root>/Operand2'
   */
  if (ScalarCalculator_U.Operand2 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Outport: '<Root>/Out4' incorporates:
     *  Inport: '<Root>/Operand1'
     *  Inport: '<S9>/Input'
     *  Product: '<S4>/Division'
     */
    ScalarCalculator_Y.Out4 = ScalarCalculator_U.Operand1 /
      ScalarCalculator_U.Operand2;

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Outport: '<Root>/Out5' incorporates:
     *  Constant: '<S8>/Constant'
     */
    ScalarCalculator_Y.Out5 = 1.0;

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
  }

  /* End of If: '<S4>/If' */

  /* Outport: '<Root>/Out6' incorporates:
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Operand3'
   *  Sum: '<S5>/Add'
   */
  ScalarCalculator_Y.Out6 = ScalarCalculator_U.Operand3 + 1.0;

  /* Outport: '<Root>/Out7' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Operand3'
   *  Sum: '<S3>/Add'
   */
  ScalarCalculator_Y.Out7 = ScalarCalculator_U.Operand3 - 1.0;

  /* Outport: '<Root>/Out8' incorporates:
   *  Inport: '<Root>/Operand3'
   *  UnaryMinus: '<S1>/Unary Minus'
   */
  ScalarCalculator_Y.Out8 = -ScalarCalculator_U.Operand3;
}

/* Model initialize function */
void ScalarCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ScalarCalculator_M, (NULL));

  /* external inputs */
  (void)memset(&ScalarCalculator_U, 0, sizeof(ExtU_ScalarCalculator_T));

  /* external outputs */
  (void) memset((void *)&ScalarCalculator_Y, 0,
                sizeof(ExtY_ScalarCalculator_T));
}

/* Model terminate function */
void ScalarCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
