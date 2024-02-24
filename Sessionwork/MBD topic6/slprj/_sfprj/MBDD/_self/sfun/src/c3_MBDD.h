#ifndef __c3_MBDD_h__
#define __c3_MBDD_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc3_MBDDInstanceStruct
#define typedef_SFc3_MBDDInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c3_sfEvent;
  boolean_T c3_doneDoubleBufferReInit;
  uint8_T c3_is_active_c3_MBDD;
  uint8_T c3_JITStateAnimation[1];
  uint8_T c3_JITTransitionAnimation[1];
  int32_T c3_IsDebuggerActive;
  int32_T c3_IsSequenceViewerPresent;
  int32_T c3_SequenceViewerOptimization;
  int32_T c3_IsHeatMapPresent;
  void *c3_RuntimeVar;
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  uint32_T c3_mlFcnLineNumber;
  CovrtStateflowInstance *c3_covrtInstance;
  void *c3_fEmlrtCtx;
} SFc3_MBDDInstanceStruct;

#endif                                 /* typedef_SFc3_MBDDInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_MBDD_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_MBDD_get_check_sum(mxArray *plhs[]);
extern void c3_MBDD_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
