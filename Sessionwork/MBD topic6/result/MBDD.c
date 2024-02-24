/*
 * File: MBDD.c
 *
 * Code generated for Simulink model 'MBDD'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 20:09:56 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MBDD.h"
#include "MBDD_private.h"

/* Real-time model */
static RT_MODEL_MBDD_T MBDD_M_;
RT_MODEL_MBDD_T *const MBDD_M = &MBDD_M_;

/* Model step function */
void MBDD_step(void)
{
  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:4' */
  LED_SET(FIRST_LED, LED_ON);
}

/* Model initialize function */
void MBDD_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(MBDD_M, (NULL));
}

/* Model terminate function */
void MBDD_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
