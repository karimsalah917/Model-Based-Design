/*
 * File: Factorial_using_for_loop.c
 *
 * Code generated for Simulink model 'Factorial_using_for_loop'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 01:55:33 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_using_for_loop.h"
#include "Factorial_using_for_loop_private.h"

/* Block states (default storage) */
DW_Factorial_using_for_loop_T Factorial_using_for_loop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_using_for_loop_T Factorial_using_for_loop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_using_for_loop_T Factorial_using_for_loop_Y;

/* Real-time model */
static RT_MODEL_Factorial_using_for__T Factorial_using_for_loop_M_;
RT_MODEL_Factorial_using_for__T *const Factorial_using_for_loop_M =
  &Factorial_using_for_loop_M_;

/* Model step function */
void Factorial_using_for_loop_step(void)
{
  real_T fact;
  real_T u;
  int32_T s1_iter;
  int32_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/Input' */
  tmp = Factorial_using_for_loop_U.Input;
  if (Factorial_using_for_loop_U.Input > 2147483646) {
    tmp = 2147483646;
  } else if (Factorial_using_for_loop_U.Input < 0) {
    tmp = 0;
  }

  /* End of Inport: '<Root>/Input' */
  for (s1_iter = 1; s1_iter <= tmp; s1_iter++) {
    /* Delay: '<S1>/Delay' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    if (Factorial_using_for_loop_DW.icLoad) {
      Factorial_using_for_loop_DW.Delay_DSTATE = 1.0;
    }

    /* Outport: '<Root>/Output' incorporates:
     *  Delay: '<S1>/Delay'
     *  Product: '<S1>/Divide'
     */
    Factorial_using_for_loop_Y.Output = (real_T)s1_iter *
      Factorial_using_for_loop_DW.Delay_DSTATE;

    /* Update for Delay: '<S1>/Delay' incorporates:
     *  Outport: '<Root>/Output'
     */
    Factorial_using_for_loop_DW.icLoad = false;
    Factorial_using_for_loop_DW.Delay_DSTATE = Factorial_using_for_loop_Y.Output;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/Input1'
   */
  u = Factorial_using_for_loop_U.Input1;

  /* MATLAB Function 'MATLAB Function': '<S2>:1' */
  /* '<S2>:1:2' fact = 1; */
  fact = 1.0;

  /* '<S2>:1:3' while u > 0 */
  while (u > 0.0) {
    /* '<S2>:1:4' fact = fact * u; */
    fact *= u;

    /* '<S2>:1:5' u = u - 1; */
    u--;
  }

  /* Outport: '<Root>/Output1' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  /* '<S2>:1:7' y = fact; */
  Factorial_using_for_loop_Y.Output1 = fact;
}

/* Model initialize function */
void Factorial_using_for_loop_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_using_for_loop_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Factorial_using_for_loop_DW, 0,
                sizeof(DW_Factorial_using_for_loop_T));

  /* external inputs */
  (void)memset(&Factorial_using_for_loop_U, 0, sizeof
               (ExtU_Factorial_using_for_loop_T));

  /* external outputs */
  (void) memset((void *)&Factorial_using_for_loop_Y, 0,
                sizeof(ExtY_Factorial_using_for_loop_T));

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for Delay: '<S1>/Delay' */
  Factorial_using_for_loop_DW.icLoad = true;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void Factorial_using_for_loop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
