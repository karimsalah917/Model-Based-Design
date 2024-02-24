/*
 * File: ProgrammingCalculator.c
 *
 * Code generated for Simulink model 'ProgrammingCalculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Feb  7 02:31:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ProgrammingCalculator.h"
#include "ProgrammingCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_ProgrammingCalculator_T ProgrammingCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ProgrammingCalculator_T ProgrammingCalculator_Y;

/* Real-time model */
static RT_MODEL_ProgrammingCalculato_T ProgrammingCalculator_M_;
RT_MODEL_ProgrammingCalculato_T *const ProgrammingCalculator_M =
  &ProgrammingCalculator_M_;

/* Model step function */
void ProgrammingCalculator_step(void)
{
  uint16_T OR_result1_tmp;

  /* Outport: '<Root>/AND_result' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator'
   */
  ProgrammingCalculator_Y.AND_result = (uint16_T)
    (ProgrammingCalculator_U.Operand1 & ProgrammingCalculator_U.Operand2);

  /* Outport: '<Root>/OR_result1' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator3'
   */
  OR_result1_tmp = (uint16_T)(ProgrammingCalculator_U.Operand1 |
    ProgrammingCalculator_U.Operand2);
  ProgrammingCalculator_Y.OR_result1 = OR_result1_tmp;

  /* Outport: '<Root>/XOR_result1' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator2'
   */
  ProgrammingCalculator_Y.XOR_result1 = (uint16_T)
    (ProgrammingCalculator_U.Operand1 ^ ProgrammingCalculator_U.Operand2);

  /* Outport: '<Root>/XNOR_result1' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator3'
   */
  ProgrammingCalculator_Y.XNOR_result1 = (uint16_T)~OR_result1_tmp;

  /* Outport: '<Root>/NotOp1_result1' incorporates:
   *  Inport: '<Root>/Operand1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator4'
   */
  ProgrammingCalculator_Y.NotOp1_result1 = (uint16_T)
    ~ProgrammingCalculator_U.Operand1;

  /* Outport: '<Root>/NotOp2_result1' incorporates:
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator5'
   */
  ProgrammingCalculator_Y.NotOp2_result1 = (uint16_T)
    ~ProgrammingCalculator_U.Operand2;
}

/* Model initialize function */
void ProgrammingCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ProgrammingCalculator_M, (NULL));

  /* external inputs */
  (void)memset(&ProgrammingCalculator_U, 0, sizeof(ExtU_ProgrammingCalculator_T));

  /* external outputs */
  (void) memset((void *)&ProgrammingCalculator_Y, 0,
                sizeof(ExtY_ProgrammingCalculator_T));
}

/* Model terminate function */
void ProgrammingCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
