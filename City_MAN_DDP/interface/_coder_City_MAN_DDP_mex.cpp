/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_City_MAN_DDP_mex.cpp
 *
 * MATLAB Coder version            : 4.2
 * C/C++ source code generated on  : 16-May-2021 10:37:33
 */

/* Include Files */
#include "_coder_City_MAN_DDP_api.h"
#include "_coder_City_MAN_DDP_mex.h"

/* Function Declarations */
static void City_MAN_DDP_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T
  nrhs);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[4]
 *                int32_T nrhs
 * Return Type  : void
 */
static void City_MAN_DDP_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T
  nrhs)
{
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        12, "City_MAN_DDP");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "City_MAN_DDP");
  }

  /* Call the function. */
  City_MAN_DDP_api(nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)prhs;
  mexAtExit(City_MAN_DDP_atexit);

  /* Module initialization. */
  City_MAN_DDP_initialize();

  /* Dispatch the entry-point. */
  City_MAN_DDP_mexFunction(nlhs, plhs, nrhs);

  /* Module termination. */
  City_MAN_DDP_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_City_MAN_DDP_mex.cpp
 *
 * [EOF]
 */
