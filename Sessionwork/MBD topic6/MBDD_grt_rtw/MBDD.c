/*
 * MBDD.c
 *
 * Code generation for model "MBDD".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Feb  6 20:00:56 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
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
  LED_SET(FIRST_LED, LED_ON);

  /* Matfile logging */
  rt_UpdateTXYLogVars(MBDD_M->rtwLogInfo, (&MBDD_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(MBDD_M)!=-1) &&
        !((rtmGetTFinal(MBDD_M)-MBDD_M->Timing.taskTime0) >
          MBDD_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(MBDD_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++MBDD_M->Timing.clockTick0)) {
    ++MBDD_M->Timing.clockTickH0;
  }

  MBDD_M->Timing.taskTime0 = MBDD_M->Timing.clockTick0 *
    MBDD_M->Timing.stepSize0 + MBDD_M->Timing.clockTickH0 *
    MBDD_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void MBDD_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)MBDD_M, 0,
                sizeof(RT_MODEL_MBDD_T));
  rtmSetTFinal(MBDD_M, 10.0);
  MBDD_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    MBDD_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(MBDD_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(MBDD_M->rtwLogInfo, (NULL));
    rtliSetLogT(MBDD_M->rtwLogInfo, "tout");
    rtliSetLogX(MBDD_M->rtwLogInfo, "");
    rtliSetLogXFinal(MBDD_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(MBDD_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(MBDD_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(MBDD_M->rtwLogInfo, 0);
    rtliSetLogDecimation(MBDD_M->rtwLogInfo, 1);
    rtliSetLogY(MBDD_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(MBDD_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(MBDD_M->rtwLogInfo, (NULL));
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(MBDD_M->rtwLogInfo, 0.0, rtmGetTFinal(MBDD_M),
    MBDD_M->Timing.stepSize0, (&rtmGetErrorStatus(MBDD_M)));
}

/* Model terminate function */
void MBDD_terminate(void)
{
  /* (no terminate code required) */
}
