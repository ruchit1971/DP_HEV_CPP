/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_City_MAN_DDP_api.h
 *
 * MATLAB Coder version            : 4.2
 * C/C++ source code generated on  : 16-May-2021 10:37:33
 */

#ifndef _CODER_CITY_MAN_DDP_API_H
#define _CODER_CITY_MAN_DDP_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_City_MAN_DDP_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void City_MAN_DDP(real_T D_z[195], real_T G_z[195], real_T T_z[195],
  real_T V_z[195]);
extern void City_MAN_DDP_api(int32_T nlhs, const mxArray *plhs[4]);
extern void City_MAN_DDP_atexit(void);
extern void City_MAN_DDP_initialize(void);
extern void City_MAN_DDP_terminate(void);
extern void City_MAN_DDP_xil_shutdown(void);
extern void City_MAN_DDP_xil_terminate(void);

#endif

/*
 * File trailer for _coder_City_MAN_DDP_api.h
 *
 * [EOF]
 */
