/* Include files */

#include "MBDD_sfun.h"
#include "c3_MBDD.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c3_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static void initialize_params_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static void enable_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static void disable_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static void c3_update_jit_animation_state_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance);
static void c3_do_animation_call_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static void ext_mode_exec_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance);
static void set_sim_state_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance, const
  mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance);
static void sf_gateway_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static void mdl_start_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static void mdl_terminate_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance);
static void mdl_cleanup_runtime_resources_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance);
static void initSimStructsc3_MBDD(SFc3_MBDDInstanceStruct *chartInstance);
static uint8_T c3_emlrt_marshallIn(SFc3_MBDDInstanceStruct *chartInstance, const
  mxArray *c3_b_is_active_c3_MBDD, const char_T *c3_identifier);
static uint8_T c3_b_emlrt_marshallIn(SFc3_MBDDInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static const mxArray *c3_c_emlrt_marshallIn(SFc3_MBDDInstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_identifier);
static const mxArray *c3_d_emlrt_marshallIn(SFc3_MBDDInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_slStringInitializeDynamicBuffers(SFc3_MBDDInstanceStruct
  *chartInstance);
static void c3_init_sf_message_store_memory(SFc3_MBDDInstanceStruct
  *chartInstance);
static void c3_chart_data_browse_helper(SFc3_MBDDInstanceStruct *chartInstance,
  int32_T c3_ssIdNumber, const mxArray **c3_mxData, uint8_T *c3_isValueTooBig);
static void init_dsm_address_info(SFc3_MBDDInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc3_MBDDInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  chartInstance->c3_is_active_c3_MBDD = 0U;
}

static void initialize_params_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_jit_animation_state_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c3_do_animation_call_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance)
{
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_st = NULL;
  const mxArray *c3_y = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(1, 1), false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &chartInstance->c3_is_active_c3_MBDD,
    3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance, const
  mxArray *c3_st)
{
  const mxArray *c3_u;
  chartInstance->c3_doneDoubleBufferReInit = true;
  c3_u = sf_mex_dup(c3_st);
  chartInstance->c3_is_active_c3_MBDD = c3_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 0)), "is_active_c3_MBDD");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 1)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void sf_gateway_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  c3_set_sim_state_side_effects_c3_MBDD(chartInstance);
  chartInstance->c3_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_sfEvent = CALL_EVENT;
  chartInstance->c3_JITTransitionAnimation[0U] = 1U;
  LED_SET(FIRST_LED, LED_ON);
  c3_do_animation_call_c3_MBDD(chartInstance);
}

static void mdl_start_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance)
{
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c3_chart_data_browse_helper);
  chartInstance->c3_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c3_RuntimeVar,
    &chartInstance->c3_IsDebuggerActive,
    &chartInstance->c3_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c3_mlFcnLineNumber, &chartInstance->c3_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c3_covrtInstance, 0U, 0U, 1U,
    0U);
  covrtChartInitFcn(chartInstance->c3_covrtInstance, 0U, false, false, false);
  covrtTransInitFcn(chartInstance->c3_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
}

static void mdl_cleanup_runtime_resources_c3_MBDD(SFc3_MBDDInstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c3_RuntimeVar);
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
  covrtDeleteStateflowInstanceData(chartInstance->c3_covrtInstance);
}

static void initSimStructsc3_MBDD(SFc3_MBDDInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c3_MBDD_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static uint8_T c3_emlrt_marshallIn(SFc3_MBDDInstanceStruct *chartInstance, const
  mxArray *c3_b_is_active_c3_MBDD, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_is_active_c3_MBDD),
    &c3_thisId);
  sf_mex_destroy(&c3_b_is_active_c3_MBDD);
  return c3_y;
}

static uint8_T c3_b_emlrt_marshallIn(SFc3_MBDDInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_b_u;
  uint8_T c3_y;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_u, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_b_u;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static const mxArray *c3_c_emlrt_marshallIn(SFc3_MBDDInstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  sf_mex_assign(&c3_y, c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId), true);
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_d_emlrt_marshallIn(SFc3_MBDDInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  (void)chartInstance;
  (void)c3_parentId;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u), true);
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_slStringInitializeDynamicBuffers(SFc3_MBDDInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c3_init_sf_message_store_memory(SFc3_MBDDInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c3_chart_data_browse_helper(SFc3_MBDDInstanceStruct *chartInstance,
  int32_T c3_ssIdNumber, const mxArray **c3_mxData, uint8_T *c3_isValueTooBig)
{
  (void)chartInstance;
  (void)c3_ssIdNumber;
  (void)c3_isValueTooBig;
  *c3_mxData = NULL;
}

static void init_dsm_address_info(SFc3_MBDDInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_MBDDInstanceStruct *chartInstance)
{
  chartInstance->c3_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c3_MBDD_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2414732096U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2163537176U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1762889170U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(499058636U);
}

mxArray *sf_c3_MBDD_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_MBDD_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("custom_code");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c3_MBDD_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c3_MBDD(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiA2YGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYcABQfK9EP854GknwWLfkEk/QJQfmZxfGJySWZZanyycbyvk4sLkn"
    "kgAABy/xGK"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_MBDD_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sAFOModa1y8muQTeW6695bH";
}

static void sf_opaque_initialize_c3_MBDD(void *chartInstanceVar)
{
  initialize_params_c3_MBDD((SFc3_MBDDInstanceStruct*) chartInstanceVar);
  initialize_c3_MBDD((SFc3_MBDDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_MBDD(void *chartInstanceVar)
{
  enable_c3_MBDD((SFc3_MBDDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_MBDD(void *chartInstanceVar)
{
  disable_c3_MBDD((SFc3_MBDDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_MBDD(void *chartInstanceVar)
{
  sf_gateway_c3_MBDD((SFc3_MBDDInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_MBDD(SimStruct* S)
{
  return get_sim_state_c3_MBDD((SFc3_MBDDInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_MBDD(SimStruct* S, const mxArray *st)
{
  set_sim_state_c3_MBDD((SFc3_MBDDInstanceStruct*)sf_get_chart_instance_ptr(S),
                        st);
}

static void sf_opaque_cleanup_runtime_resources_c3_MBDD(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_MBDDInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_MBDD_optimization_info();
    }

    mdl_cleanup_runtime_resources_c3_MBDD((SFc3_MBDDInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c3_MBDD(void *chartInstanceVar)
{
  mdl_start_c3_MBDD((SFc3_MBDDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c3_MBDD(void *chartInstanceVar)
{
  mdl_terminate_c3_MBDD((SFc3_MBDDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_MBDD((SFc3_MBDDInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_MBDD(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_MBDD((SFc3_MBDDInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc3_MBDD((SFc3_MBDDInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c3_MBDD_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [17] = {
    "eNrtV01u00AUdqpSUQmqdsUGCcQGVqgIUZUNovkTkRpacNruqKbjl3jIeMbMT9qIGyBxCg7AFTg",
    "GS06CeGO7aXBsh1AhVYAl1x3P9755/8/xap2uh9ca3vGG563g8zreS156XcvWtak7fb/s3c/WH1",
    "FI2GifKBJpr/ISJILXoCW3hknREX1ZCGOiDwoERWwslSlj0yyynIlh2wrq+PRRyGjoh9LyoI6yJ",
    "NgTfIxssTX7yNNkCqhpAwQmVNIOwjYng4nGypw2QqBDbaMqEzQY38ZOLd213LCYQ+sMaEdoQ1Bj",
    "faGbb4iBhjkrNdNZqv1zoIxizogotDYk2ocYHWzgIA7w7541aFQeRkOiTB1CMgK9y4YJpxSQ52Q",
    "aN06YIEYqRngr4g0nOKvbPkd9ujIAXuEQ1K2ugAxjyYQpj7/fRktbgpxwaMKJHZSz+fDOuuAfMj",
    "gFVeq3fkOOQJEB7InSQxOHtM6SaE2yZBZmWASHRO1QjJ+GoDR7MXO0TzBO0EOJMhgkRnZ0T7ERu",
    "reUzUYdl5nzSsZGabD1PFjC1hpBVRQmbG0qGoRzXQrryXgXRsAT1iYxpBqWshbjtGZBT6KDXXqX",
    "V4MVDAOfwRpSBKwwXKMcIOk7L7Gx/IykVhsZNTB5m7u7s9uzsI4woPqEQlEXUIRpQJ8l7i1nC5h",
    "2sUcgamUS9YrAaYbMQ3m6b0XzVKoh+qSiiVyY4CJaCoz0AGOJlXCgsWiqYC6W83CU0BAC12AYhy",
    "6WDWILfKJda9vBuhsxM26CporFBVG1WHXYhlouocYxHIihkKeirWTkZz0+dS8AZhtRgolBHfuXG",
    "rfx9KJQuHm26V3Msxu/MM/O5fLPB1M8tQIeb+qZP3d1qfrcJfyvlsk9n5K7mTtnOSfncOt4v39z",
    "+/Mb+uHL6ttP974/XOld5vxvtcXm/1q2vn3eaCeFM5rJV4d9MaXXcgH/rSn+9Wytd9p7OIDIo/F",
    "2ZF/14Ghr6+mTkxepnxfU9/z9XdfxMcuS/FS0E2QfJm5NbDquHf/2lL4rc/hXs/fpdff55eR/zV",
    "8bOX9tJHPxmLhqg2P6+LhbbzYL8vl382NROe+/3JWQq/2D9i3S7//LFcstOveuGn6zon96Ofz6F",
    "bbjst8jfxr/1VtsDt/J1s8mPw0aIeNBwVdito2ffP2i3b8gT38AQcCm2A==",
    ""
  };

  static char newstr [1185] = "";
  newstr[0] = '\0';
  for (i = 0; i < 17; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c3_MBDD(SimStruct *S)
{
  const char* newstr = sf_c3_MBDD_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2937871995U));
  ssSetChecksum1(S,(3230294878U));
  ssSetChecksum2(S,(581134857U));
  ssSetChecksum3(S,(1409691390U));
}

static void mdlRTW_c3_MBDD(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlSetupRuntimeResources_c3_MBDD(SimStruct *S)
{
  SFc3_MBDDInstanceStruct *chartInstance;
  chartInstance = (SFc3_MBDDInstanceStruct *)utMalloc(sizeof
    (SFc3_MBDDInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_MBDDInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_MBDD;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c3_MBDD;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c3_MBDD;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c3_MBDD;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c3_MBDD;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_MBDD;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_MBDD;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_MBDD;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_MBDD;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c3_MBDD;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_MBDD;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_MBDD;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c3_JITStateAnimation,
    chartInstance->c3_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c3_MBDD(chartInstance);
}

void c3_MBDD_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c3_MBDD(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_MBDD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_MBDD(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_MBDD_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
