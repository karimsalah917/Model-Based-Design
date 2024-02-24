/*
 * File: GradingSystem.c
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 02:49:19 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GradingSystem.h"
#include "GradingSystem_private.h"

/* Block signals (default storage) */
B_GradingSystem_T GradingSystem_B;

/* External inputs (root inport signals with default storage) */
ExtU_GradingSystem_T GradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_GradingSystem_T GradingSystem_Y;

/* Real-time model */
static RT_MODEL_GradingSystem_T GradingSystem_M_;
RT_MODEL_GradingSystem_T *const GradingSystem_M = &GradingSystem_M_;

/* Model step function */
void GradingSystem_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<S2>/In1'
   *  Merge: '<S1>/Merge'
   *  StringConstant: '<S5>/String Constant'
   */
  if (GradingSystem_U.Input >= 90) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    GradingSystem_B.Merge[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    GradingSystem_B.In1_c = GradingSystem_U.Input;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  }

  /* End of If: '<S1>/If' */

  /* If: '<S1>/If1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<S3>/In1'
   *  Merge: '<S1>/Merge'
   *  StringConstant: '<S6>/String Constant'
   */
  if ((GradingSystem_B.In1_c >= 80) && (GradingSystem_B.In1_c < 90)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String_k[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
    GradingSystem_B.Merge[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    GradingSystem_B.In1_fx = GradingSystem_U.Input;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  }

  /* End of If: '<S1>/If1' */

  /* If: '<S1>/If2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<S4>/In1'
   *  Merge: '<S1>/Merge'
   *  StringConstant: '<S7>/String Constant'
   */
  if ((GradingSystem_B.In1_fx >= 70) && (GradingSystem_B.In1_fx < 80)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String_f[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem5' */
    GradingSystem_B.Merge[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    GradingSystem_B.In1_f = GradingSystem_U.Input;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
  }

  /* End of If: '<S1>/If2' */

  /* If: '<S1>/If3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<S10>/In1'
   *  Merge: '<S1>/Merge'
   *  StringConstant: '<S8>/String Constant'
   */
  if ((GradingSystem_B.In1_f < 70) && (GradingSystem_B.In1_f >= 60)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String_e[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem6' */
    GradingSystem_B.Merge[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem8' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    GradingSystem_B.In1 = GradingSystem_U.Input;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem8' */
  }

  /* End of If: '<S1>/If3' */

  /* If: '<S1>/If4' incorporates:
   *  Merge: '<S1>/Merge'
   *  StringConstant: '<S9>/String Constant'
   */
  if (GradingSystem_B.In1 < 60) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0],
            &GradingSystem_ConstP.StringConstant_String_n[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem7' */
    GradingSystem_B.Merge[255] = '\x00';
  }

  /* End of If: '<S1>/If4' */

  /* Outport: '<Root>/Out1' */
  strncpy(&GradingSystem_Y.Out1[0], &GradingSystem_B.Merge[0], 255U);
  GradingSystem_Y.Out1[255] = '\x00';
}

/* Model initialize function */
void GradingSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(GradingSystem_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &GradingSystem_B), 0,
                sizeof(B_GradingSystem_T));

  /* external inputs */
  GradingSystem_U.Input = 0;

  /* external outputs */
  (void) memset(&GradingSystem_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void GradingSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
