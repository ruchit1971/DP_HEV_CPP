/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_City_MAN_DDP_api.c
 *
 * MATLAB Coder version            : 4.2
 * C/C++ source code generated on  : 16-May-2021 10:37:33
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_City_MAN_DDP_api.h"
#include "_coder_City_MAN_DDP_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131482U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "City_MAN_DDP",                      /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static const mxArray *emlrt_marshallOut(const real_T u[195]);

/* Function Definitions */

/*
 * Arguments    : const real_T u[195]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real_T u[195])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[1] = { 0 };

  static const int32_T iv1[1] = { 195 };

  y = NULL;
  m0 = emlrtCreateNumericArray(1, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, *(int32_T (*)[1])&iv1[0], 1);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[4]
 * Return Type  : void
 */
void City_MAN_DDP_api(int32_T nlhs, const mxArray *plhs[4])
{
  real_T (*D_z)[195];
  real_T (*G_z)[195];
  real_T (*T_z)[195];
  real_T (*V_z)[195];
  D_z = (real_T (*)[195])mxMalloc(sizeof(real_T [195]));
  G_z = (real_T (*)[195])mxMalloc(sizeof(real_T [195]));
  T_z = (real_T (*)[195])mxMalloc(sizeof(real_T [195]));
  V_z = (real_T (*)[195])mxMalloc(sizeof(real_T [195]));

  /* Invoke the target function */
  City_MAN_DDP(*D_z, *G_z, *T_z, *V_z);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*D_z);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*G_z);
  }

  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*T_z);
  }

  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*V_z);
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void City_MAN_DDP_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  City_MAN_DDP_xil_terminate();
  City_MAN_DDP_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void City_MAN_DDP_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void City_MAN_DDP_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_City_MAN_DDP_api.c
 *
 * [EOF]
 */
