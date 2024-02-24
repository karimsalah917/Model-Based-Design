/*
 * File: topic4.c
 *
 * Code generated for Simulink model 'topic4'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 18:39:29 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "topic4.h"
#include "topic4_private.h"

const strContainer topic4_rtZstrContainer = {
  {
    "",                                /* Name */
    0U                                 /* Age */
  },                                   /* Emp1 */

  {
    "",                                /* Name */
    0U                                 /* Age */
  }                                    /* Emp2 */
} ;                                    /* strContainer ground */

/* External inputs (root inport signals with default storage) */
ExtU_topic4_T topic4_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_topic4_T topic4_Y;

/* Real-time model */
static RT_MODEL_topic4_T topic4_M_;
RT_MODEL_topic4_T *const topic4_M = &topic4_M_;

/* Model step function */
void topic4_step(void)
{
  int32_T i;

  /* Outport: '<Root>/Out1' incorporates:
   *  BusCreator: '<Root>/Bus Creator'
   *  BusCreator: '<Root>/Bus Creator1'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  Inport: '<Root>/In4'
   */
  topic4_Y.Out1.Emp1.Age = topic4_U.In2;
  for (i = 0; i < 256; i++) {
    topic4_Y.Out1.Emp1.Name[i] = topic4_U.In1[i];
    topic4_Y.Out1.Emp2.Name[i] = topic4_U.In4[i];
  }

  topic4_Y.Out1.Emp2.Age = topic4_U.In3;

  /* End of Outport: '<Root>/Out1' */
}

/* Model initialize function */
void topic4_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(topic4_M, (NULL));

  /* external inputs */
  (void)memset(&topic4_U, 0, sizeof(ExtU_topic4_T));

  /* external outputs */
  topic4_Y.Out1 = topic4_rtZstrContainer;
}

/* Model terminate function */
void topic4_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
