/* Include files */

#include "real_time_test_sfun.h"
#include "c2_real_time_test.h"
#include <string.h>
#include "mwmathutil.h"
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

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 14, /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 83,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 88,/* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c2_e_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c2_f_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_g_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_h_emlrtMCI = { 38,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtMCInfo c2_i_emlrtMCI = { 271,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c2_j_emlrtMCI = { 126,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c2_k_emlrtMCI = { 417,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtMCInfo c2_l_emlrtMCI = { 28,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c2_m_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c2_n_emlrtMCI = { 49,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_o_emlrtMCI = { 23,/* lineNo */
  1,                                   /* colNo */
  "imreconstruct",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pName */
};

static emlrtMCInfo c2_p_emlrtMCI = { 46,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtMCInfo c2_q_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c2_r_emlrtMCI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtMCInfo c2_s_emlrtMCI = { 7,/* lineNo */
  23,                                  /* colNo */
  "checkSingletonValueList",           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\checkSingletonValueList.m"/* pName */
};

static emlrtMCInfo c2_t_emlrtMCI = { 6,/* lineNo */
  23,                                  /* colNo */
  "checkNonEmptyMemberValueList",      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\checkNonEmptyMemberValueList.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 4,  /* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 6,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 8,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 16,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 17,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 18,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 19,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 20,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 36,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 42,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#real_time_test:3"                  /* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 48,/* lineNo */
  "rgb2gray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\images\\rgb2gray.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 14,/* lineNo */
  "imgaussfilt",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imgaussfilt.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 24,/* lineNo */
  "imgaussfilt",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imgaussfilt.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 923,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 997,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 1025,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 1037,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 104,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 207,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 77,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 76,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 197,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 147,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 107,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 99,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 87,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 78,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 75,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 73,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 32,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 79,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 71,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 70,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 69,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 57,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 44,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 23,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 51,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 114,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 149,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 150,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 153,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 99,/* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 74,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 107,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 22,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 42,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 53,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 57,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 178,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 182,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 183,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 184,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 189,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 210,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 14,/* lineNo */
  "cumsum",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 16,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 32,/* lineNo */
  "useConstantDim",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 99,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c2_tc_emlrtRSI = { 125,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c2_uc_emlrtRSI = { 290,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c2_vc_emlrtRSI = { 1293,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_wc_emlrtRSI = { 1468,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_xc_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c2_yc_emlrtRSI = { 1840,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ad_emlrtRSI = { 295,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_bd_emlrtRSI = { 351,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_cd_emlrtRSI = { 362,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_dd_emlrtRSI = { 698,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ed_emlrtRSI = { 712,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_fd_emlrtRSI = { 713,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_gd_emlrtRSI = { 715,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_hd_emlrtRSI = { 716,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_id_emlrtRSI = { 723,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_jd_emlrtRSI = { 565,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_kd_emlrtRSI = { 581,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ld_emlrtRSI = { 536,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_md_emlrtRSI = { 546,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_nd_emlrtRSI = { 547,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_od_emlrtRSI = { 770,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_pd_emlrtRSI = { 772,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_qd_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c2_rd_emlrtRSI = { 22,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c2_sd_emlrtRSI = { 96,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c2_td_emlrtRSI = { 15,/* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo c2_ud_emlrtRSI = { 46,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c2_vd_emlrtRSI = { 92,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c2_wd_emlrtRSI = { 215,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_xd_emlrtRSI = { 308,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_yd_emlrtRSI = { 376,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_ae_emlrtRSI = { 458,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_be_emlrtRSI = { 15,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c2_ce_emlrtRSI = { 44,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c2_de_emlrtRSI = { 79,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c2_ee_emlrtRSI = { 28,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c2_fe_emlrtRSI = { 117,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c2_ge_emlrtRSI = { 311,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c2_he_emlrtRSI = { 320,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c2_ie_emlrtRSI = { 180,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_je_emlrtRSI = { 891,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_ke_emlrtRSI = { 62,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_le_emlrtRSI = { 54,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_me_emlrtRSI = { 103,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_ne_emlrtRSI = { 120,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_oe_emlrtRSI = { 198,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_pe_emlrtRSI = { 887,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_qe_emlrtRSI = { 194,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c2_re_emlrtRSI = { 193,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c2_se_emlrtRSI = { 190,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c2_te_emlrtRSI = { 177,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c2_ue_emlrtRSI = { 176,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c2_ve_emlrtRSI = { 66,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_we_emlrtRSI = { 72,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_xe_emlrtRSI = { 405,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_ye_emlrtRSI = { 420,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_af_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c2_bf_emlrtRSI = { 15,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c2_cf_emlrtRSI = { 138,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c2_df_emlrtRSI = { 198,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c2_ef_emlrtRSI = { 375,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ff_emlrtRSI = { 379,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_gf_emlrtRSI = { 420,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_hf_emlrtRSI = { 424,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_if_emlrtRSI = { 49,/* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRSInfo c2_jf_emlrtRSI = { 437,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_kf_emlrtRSI = { 441,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_lf_emlrtRSI = { 56,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c2_mf_emlrtRSI = { 58,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c2_nf_emlrtRSI = { 60,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c2_of_emlrtRSI = { 145,/* lineNo */
  "bwlookup",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlookup.m"/* pathName */
};

static emlrtRSInfo c2_pf_emlrtRSI = { 334,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_qf_emlrtRSI = { 339,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_rf_emlrtRSI = { 458,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_sf_emlrtRSI = { 469,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_tf_emlrtRSI = { 470,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_uf_emlrtRSI = { 471,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_vf_emlrtRSI = { 472,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_wf_emlrtRSI = { 485,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_xf_emlrtRSI = { 486,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_yf_emlrtRSI = { 492,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ag_emlrtRSI = { 493,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_bg_emlrtRSI = { 503,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_cg_emlrtRSI = { 504,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_dg_emlrtRSI = { 510,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_eg_emlrtRSI = { 511,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_fg_emlrtRSI = { 606,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_gg_emlrtRSI = { 608,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_hg_emlrtRSI = { 635,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ig_emlrtRSI = { 636,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_jg_emlrtRSI = { 637,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_kg_emlrtRSI = { 640,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_lg_emlrtRSI = { 641,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_mg_emlrtRSI = { 642,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ng_emlrtRSI = { 643,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_og_emlrtRSI = { 644,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_pg_emlrtRSI = { 649,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_qg_emlrtRSI = { 653,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_rg_emlrtRSI = { 80,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c2_sg_emlrtRSI = { 52,/* lineNo */
  "ixfun",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo c2_tg_emlrtRSI = { 66,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c2_ug_emlrtRSI = { 200,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c2_vg_emlrtRSI = { 673,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_wg_emlrtRSI = { 675,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_xg_emlrtRSI = { 798,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_yg_emlrtRSI = { 803,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ah_emlrtRSI = { 814,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_bh_emlrtRSI = { 842,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ch_emlrtRSI = { 855,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_dh_emlrtRSI = { 859,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_eh_emlrtRSI = { 1049,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_fh_emlrtRSI = { 1054,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_gh_emlrtRSI = { 955,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_hh_emlrtRSI = { 974,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ih_emlrtRSI = { 976,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_jh_emlrtRSI = { 980,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_kh_emlrtRSI = { 1860,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_lh_emlrtRSI = { 1861,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_mh_emlrtRSI = { 1874,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_nh_emlrtRSI = { 1875,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_oh_emlrtRSI = { 1880,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ph_emlrtRSI = { 1881,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_qh_emlrtRSI = { 1121,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_rh_emlrtRSI = { 1135,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_sh_emlrtRSI = { 1138,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_th_emlrtRSI = { 1143,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_uh_emlrtRSI = { 1152,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_vh_emlrtRSI = { 1167,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_wh_emlrtRSI = { 1171,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_xh_emlrtRSI = { 1182,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_yh_emlrtRSI = { 1187,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ai_emlrtRSI = { 1199,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_bi_emlrtRSI = { 1204,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ci_emlrtRSI = { 392,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_di_emlrtRSI = { 402,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ei_emlrtRSI = { 408,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_fi_emlrtRSI = { 87,/* lineNo */
  "imerode",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\imerode.m"/* pathName */
};

static emlrtRSInfo c2_gi_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_hi_emlrtRSI = { 22,/* lineNo */
  "morphop",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_ii_emlrtRSI = { 486,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_ji_emlrtRSI = { 707,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_ki_emlrtRSI = { 150,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_li_emlrtRSI = { 153,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_mi_emlrtRSI = { 160,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_ni_emlrtRSI = { 236,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_oi_emlrtRSI = { 241,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_pi_emlrtRSI = { 242,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_qi_emlrtRSI = { 63,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_ri_emlrtRSI = { 196,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_si_emlrtRSI = { 197,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_ti_emlrtRSI = { 198,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_ui_emlrtRSI = { 200,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_vi_emlrtRSI = { 201,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_wi_emlrtRSI = { 203,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_xi_emlrtRSI = { 204,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_yi_emlrtRSI = { 215,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_aj_emlrtRSI = { 216,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_bj_emlrtRSI = { 341,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_cj_emlrtRSI = { 343,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_dj_emlrtRSI = { 347,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_ej_emlrtRSI = { 349,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_fj_emlrtRSI = { 26,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_gj_emlrtRSI = { 40,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_hj_emlrtRSI = { 53,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_ij_emlrtRSI = { 62,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_jj_emlrtRSI = { 63,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_kj_emlrtRSI = { 65,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_lj_emlrtRSI = { 66,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_mj_emlrtRSI = { 76,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_nj_emlrtRSI = { 96,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_oj_emlrtRSI = { 131,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_pj_emlrtRSI = { 151,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_qj_emlrtRSI = { 183,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_rj_emlrtRSI = { 381,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_sj_emlrtRSI = { 192,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_tj_emlrtRSI = { 260,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_uj_emlrtRSI = { 263,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_vj_emlrtRSI = { 268,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_wj_emlrtRSI = { 269,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_xj_emlrtRSI = { 21,/* lineNo */
  "imclearborder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imclearborder.m"/* pathName */
};

static emlrtRSInfo c2_yj_emlrtRSI = { 31,/* lineNo */
  "imclearborder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imclearborder.m"/* pathName */
};

static emlrtRSInfo c2_ak_emlrtRSI = { 49,/* lineNo */
  "imclearborder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imclearborder.m"/* pathName */
};

static emlrtRSInfo c2_bk_emlrtRSI = { 23,/* lineNo */
  "getBinaryConnectivityMatrix",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\getBinaryConnectivityMatrix.m"/* pathName */
};

static emlrtRSInfo c2_ck_emlrtRSI = { 305,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_dk_emlrtRSI = { 306,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_ek_emlrtRSI = { 316,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c2_fk_emlrtRSI = { 317,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 8,/* lineNo */
  1,                                   /* colNo */
  "checkSingletonValueList",           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\checkSingletonValueList.m"/* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 7,/* lineNo */
  1,                                   /* colNo */
  "checkNonEmptyMemberValueList",      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\checkNonEmptyMemberValueList.m"/* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 64,/* lineNo */
  22,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3"                  /* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 65,/* lineNo */
  15,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3"                  /* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 65,/* lineNo */
  28,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3"                  /* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3"                  /* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 42,/* lineNo */
  6,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3"                  /* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 17,/* lineNo */
  14,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3"                  /* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c2_j_emlrtRTEI = { 1468,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_k_emlrtRTEI = { 291,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_l_emlrtRTEI = { 292,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_m_emlrtRTEI = { 17,/* lineNo */
  25,                                  /* colNo */
  "cumop",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pName */
};

static emlrtRTEInfo c2_n_emlrtRTEI = { 424,/* lineNo */
  34,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_o_emlrtRTEI = { 295,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_p_emlrtRTEI = { 1896,/* lineNo */
  50,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_q_emlrtRTEI = { 1898,/* lineNo */
  33,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_r_emlrtRTEI = { 298,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_s_emlrtRTEI = { 42,/* lineNo */
  42,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c2_t_emlrtRTEI = { 51,/* lineNo */
  36,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c2_u_emlrtRTEI = { 1899,/* lineNo */
  49,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_v_emlrtRTEI = { 54,/* lineNo */
  44,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c2_w_emlrtRTEI = { 57,/* lineNo */
  43,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c2_x_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_y_emlrtRTEI = { 75,/* lineNo */
  2,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_ab_emlrtRTEI = { 1380,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_bb_emlrtRTEI = { 220,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_cb_emlrtRTEI = { 233,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_db_emlrtRTEI = { 234,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_eb_emlrtRTEI = { 48,/* lineNo */
  27,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c2_fb_emlrtRTEI = { 49,/* lineNo */
  25,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c2_gb_emlrtRTEI = { 50,/* lineNo */
  28,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c2_hb_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c2_ib_emlrtRTEI = { 39,/* lineNo */
  35,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_jb_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_kb_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_lb_emlrtRTEI = { 69,/* lineNo */
  31,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_mb_emlrtRTEI = { 70,/* lineNo */
  46,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_nb_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_ob_emlrtRTEI = { 89,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_pb_emlrtRTEI = { 90,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_qb_emlrtRTEI = { 11,/* lineNo */
  6,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_rb_emlrtRTEI = { 11,/* lineNo */
  19,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_sb_emlrtRTEI = { 39,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c2_tb_emlrtRTEI = { 51,/* lineNo */
  48,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c2_ub_emlrtRTEI = { 51,/* lineNo */
  57,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c2_vb_emlrtRTEI = { 51,/* lineNo */
  64,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c2_wb_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "useConstantDim",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pName */
};

static emlrtRTEInfo c2_xb_emlrtRTEI = { 1840,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_yb_emlrtRTEI = { 1719,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_ac_emlrtRTEI = { 310,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_bc_emlrtRTEI = { 756,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_cc_emlrtRTEI = { 1,/* lineNo */
  22,                                  /* colNo */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pName */
};

static emlrtRTEInfo c2_dc_emlrtRTEI = { 46,/* lineNo */
  22,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_ec_emlrtRTEI = { 57,/* lineNo */
  48,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_fc_emlrtRTEI = { 59,/* lineNo */
  13,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_gc_emlrtRTEI = { 112,/* lineNo */
  38,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_hc_emlrtRTEI = { 191,/* lineNo */
  39,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_ic_emlrtRTEI = { 77,/* lineNo */
  29,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_jc_emlrtRTEI = { 380,/* lineNo */
  30,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_kc_emlrtRTEI = { 151,/* lineNo */
  30,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_lc_emlrtRTEI = { 76,/* lineNo */
  29,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_mc_emlrtRTEI = { 112,/* lineNo */
  13,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtRTEInfo c2_nc_emlrtRTEI = { 273,/* lineNo */
  14,                                  /* colNo */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pName */
};

static emlrtRTEInfo c2_oc_emlrtRTEI = { 283,/* lineNo */
  33,                                  /* colNo */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pName */
};

static emlrtRTEInfo c2_pc_emlrtRTEI = { 285,/* lineNo */
  9,                                   /* colNo */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pName */
};

static emlrtRTEInfo c2_qc_emlrtRTEI = { 288,/* lineNo */
  9,                                   /* colNo */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pName */
};

static emlrtRTEInfo c2_rc_emlrtRTEI = { 318,/* lineNo */
  30,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_sc_emlrtRTEI = { 769,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_tc_emlrtRTEI = { 770,/* lineNo */
  41,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_uc_emlrtRTEI = { 774,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_vc_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c2_wc_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c2_xc_emlrtRTEI = { 42,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c2_yc_emlrtRTEI = { 43,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c2_ad_emlrtRTEI = { 44,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c2_bd_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c2_cd_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c2_dd_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c2_ed_emlrtRTEI = { 104,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_fd_emlrtRTEI = { 111,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_gd_emlrtRTEI = { 772,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_hd_emlrtRTEI = { 770,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c2_id_emlrtRTEI = { 99,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_jd_emlrtRTEI = { 64,/* lineNo */
  13,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3"                  /* pName */
};

static emlrtBCInfo c2_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  24,                                  /* colNo */
  "B",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  17,                                  /* colNo */
  "B",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  30,                                  /* colNo */
  "B",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  65,                                  /* lineNo */
  9,                                   /* colNo */
  "image",                             /* aName */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 65, /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  9,                                   /* colNo */
  "B{1,1}",                            /* aName */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  22,                                  /* colNo */
  "B",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  15,                                  /* colNo */
  "B",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  28,                                  /* colNo */
  "B",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#real_time_test:3",                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { 1,/* iFirst */
  65536,                               /* iLast */
  1049,                                /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_j_emlrtBCI = { 1,/* iFirst */
  65536,                               /* iLast */
  1050,                                /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_k_emlrtBCI = { 1,/* iFirst */
  65536,                               /* iLast */
  1051,                                /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_l_emlrtBCI = { 1,/* iFirst */
  65536,                               /* iLast */
  1052,                                /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_b_emlrtDCI = { 84,/* lineNo */
  12,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  65,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1896,                                /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1898,                                /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1896,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  339,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  339,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1896,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1898,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 48,/* lineNo */
  33,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_eb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ib_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_jb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_kb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_lb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_mb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_nb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ob_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_qb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_sb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_tb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ub_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_vb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_wb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_xb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_yb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_cc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_dc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ec_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_fc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  67,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_gc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_hc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_jc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_kc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  170,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_lc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_mc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_nc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_oc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_pc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_qc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_rc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_sc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_tc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_uc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_vc_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  171,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_wc_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  364,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_xc_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  367,                                 /* lineNo */
  7,                                   /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_yc_emlrtBCI = { 1,/* iFirst */
  264,                                 /* iLast */
  208,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ad_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  196,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  333,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_cd_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  197,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_dd_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  200,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ed_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  203,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_fd_emlrtBCI = { 1,/* iFirst */
  264,                                 /* iLast */
  216,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_gd_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  198,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_hd_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  201,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_id_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  204,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_jd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  355,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_kd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  356,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ld_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  96,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_md_emlrtBCI = { 1,/* iFirst */
  264,                                 /* iLast */
  224,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_nd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  217,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_od_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  218,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_pd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  362,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_qd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  363,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_rd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  105,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_sd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  106,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_td_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  134,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ud_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  135,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_vd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  123,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_wd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  110,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_xd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  128,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_yd_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  124,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ae_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  111,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_be_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  152,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ce_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  139,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_de_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  125,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_ee_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  157,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_fe_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  153,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ge_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  140,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_he_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  154,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_ie_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  116,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_je_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  121,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_ke_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  117,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_le_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  145,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_me_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  118,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_ne_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  150,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_oe_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  146,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_pe_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  147,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRTEInfo c2_kd_emlrtRTEI = { 127,/* lineNo */
  25,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pName */
};

static emlrtBCInfo c2_qe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_re_emlrtBCI = { 1,/* iFirst */
  66564,                               /* iLast */
  97,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_g_emlrtDCI = { 57,/* lineNo */
  37,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_h_emlrtDCI = { 59,/* lineNo */
  13,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_se_emlrtBCI = { 1,/* iFirst */
  66564,                               /* iLast */
  68,                                  /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_te_emlrtBCI = { 1,/* iFirst */
  66564,                               /* iLast */
  69,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ue_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_i_emlrtDCI = { 191,/* lineNo */
  45,                                  /* colNo */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_ve_emlrtBCI = { 1,/* iFirst */
  8,                                   /* iLast */
  129,                                 /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_we_emlrtBCI = { 1,/* iFirst */
  66564,                               /* iLast */
  131,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_xe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  193,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ye_emlrtBCI = { 1,/* iFirst */
  8,                                   /* iLast */
  170,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_af_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  194,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  195,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_cf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  196,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_df_emlrtBCI = { 1,/* iFirst */
  8,                                   /* iLast */
  147,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ef_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  155,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ff_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_gf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  382,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_hf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  382,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_if_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "BoundaryFinder",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_jf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  282,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_kf_emlrtBCI = { 1,/* iFirst */
  264,                                 /* iLast */
  309,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_lf_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  305,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_mf_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  305,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_nf_emlrtBCI = { 1,/* iFirst */
  264,                                 /* iLast */
  317,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_of_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  306,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_pf_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  243,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_qf_emlrtBCI = { 1,/* iFirst */
  264,                                 /* iLast */
  325,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_rf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  318,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_sf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  319,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_tf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  249,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_uf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  250,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_vf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  267,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_wf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  254,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_xf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  272,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_yf_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  268,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ag_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  255,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bg_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  269,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_cg_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  260,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_dg_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  265,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_eg_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  261,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_fg_emlrtBCI = { 1,/* iFirst */
  32769,                               /* iLast */
  262,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_gg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_hg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ig_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_jg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_j_emlrtDCI = { 288,/* lineNo */
  11,                                  /* colNo */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_k_emlrtDCI = { 283,/* lineNo */
  29,                                  /* colNo */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_kg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_lg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_mg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_l_emlrtDCI = { 288,/* lineNo */
  9,                                   /* colNo */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ng_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "bwboundaries",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_og_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  318,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_pg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  318,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_qg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  774,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_rg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  772,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_sg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  769,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_tg_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  770,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c2_gk_emlrtRSI = { 774,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_hk_emlrtRSI = { 770,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_ik_emlrtRSI = { 769,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_jk_emlrtRSI = { 318,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c2_kk_emlrtRSI = { 69,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_lk_emlrtRSI = { 59,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static emlrtRSInfo c2_mk_emlrtRSI = { 70,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_nk_emlrtRSI = { 55,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_ok_emlrtRSI = { 39,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c2_pk_emlrtRSI = { 283,/* lineNo */
  "bwboundaries",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bwboundaries.m"/* pathName */
};

static emlrtRSInfo c2_qk_emlrtRSI = { 57,/* lineNo */
  "BoundaryFinder",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\BoundaryFinder.m"/* pathName */
};

static const char_T c2_cv[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
  'a', 'x', 's', 'i', 'z', 'e' };

static const char_T c2_cv1[33] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'b', 'w',
  'b', 'o', 'u', 'n', 'd', 'a', 'r', 'i', 'e', 's', ':', 'b', 'a', 'd', 'S', 'c',
  'a', 'l', 'a', 'r', 'C', 'o', 'n', 'n' };

static const char_T c2_cv2[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
  'l', 'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

/* Function Declarations */
static void initialize_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance);
static void initialize_params_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance);
static void enable_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance);
static void disable_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance);
static void c2_update_jit_animation_state_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance);
static void c2_do_animation_call_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance);
static void ext_mode_exec_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance);
static void set_sim_state_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_st);
static void sf_gateway_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance);
static void mdl_start_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance);
static void mdl_terminate_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance);
static void initSimStructsc2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance);
static void c2_imgaussfilt(SFc2_real_time_testInstanceStruct *chartInstance,
  uint8_T c2_A[65536], uint8_T c2_B[65536]);
static void c2_padImage(SFc2_real_time_testInstanceStruct *chartInstance,
  uint8_T c2_a_tmp[65536], uint8_T c2_a[66564]);
static real_T c2_computeGlobalThreshold(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, uint8_T c2_I[65536]);
static real_T c2_otsuthresh(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_counts[256]);
static void c2_regionprops(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536],
  c2_emxArray_s_VeYncwf9ecih6GBw6CjR *c2_outstats);
static void c2_bwconncomp(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536],
  c2_s_vX9LV7M75v5ZNol5H5URkE *c2_CC);
static void c2_check_forloop_overflow_error(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static real_T c2_sumColumnB(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_vlen);
static real_T c2_sumColumnB4(SFc2_real_time_testInstanceStruct *chartInstance,
  c2_emxArray_int32_T *c2_x, int32_T c2_vstart);
static real_T c2_b_sumColumnB(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_vlen, int32_T
  c2_vstart);
static void c2_useConstantDim(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_varargin_2, int32_T
  c2_varargin_3, c2_emxArray_int32_T *c2_varargout_1);
static void c2_assertValidSizeArg(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_c_varargin_1);
static void c2_initializeStatsStruct(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_numObjs,
  c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats, c2_sHtk0WM4OMtyqkehwQYcq2
  *c2_statsAlreadyComputed);
static void c2_ComputeArea(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats,
  c2_sHtk0WM4OMtyqkehwQYcq2 c2_statsAlreadyComputed,
  c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_b_stats, c2_sHtk0WM4OMtyqkehwQYcq2
  *c2_b_statsAlreadyComputed);
static void c2_ComputePixelList(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats,
  c2_sHtk0WM4OMtyqkehwQYcq2 c2_statsAlreadyComputed,
  c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_b_stats, c2_sHtk0WM4OMtyqkehwQYcq2
  *c2_b_statsAlreadyComputed);
static real_T c2_c_sumColumnB(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T *c2_x, int32_T c2_col, int32_T
  c2_vlen);
static real_T c2_b_sumColumnB4(SFc2_real_time_testInstanceStruct *chartInstance,
  c2_emxArray_real_T *c2_x, int32_T c2_col, int32_T c2_vstart);
static real_T c2_d_sumColumnB(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T *c2_x, int32_T c2_col, int32_T
  c2_vlen, int32_T c2_vstart);
static void c2_imerode(SFc2_real_time_testInstanceStruct *chartInstance,
  boolean_T c2_A[65536], boolean_T c2_B[65536]);
static void c2_bwboundaries(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536],
  c2_emxArray_cell_wrap_1 *c2_B, real_T c2_c_L[65536]);
static void c2_findObjectBoundaries(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, boolean_T c2_BW[65536],
  c2_emxArray_cell_wrap_1 *c2_B, real_T c2_c_L[65536]);
static void c2_bwlabel(SFc2_real_time_testInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536], real_T c2_c_L[65536]);
static void c2_padarray(SFc2_real_time_testInstanceStruct *chartInstance, real_T
  c2_c_varargin_1[65536], real_T c2_b[66564]);
static void c2_BoundaryFinder_findBoundaries(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_images_internal_coder_BoundaryFinder *c2_obj, c2_emxArray_cell_wrap_1 *c2_B);
static void c2_findHoleBoundaries(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, boolean_T c2_BW[65536],
  c2_emxArray_cell_wrap_1 *c2_B, real_T c2_c_L[65536]);
static void c2_imclearborder(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536], boolean_T
  c2_outputImage[65536]);
static void c2_b_imerode(SFc2_real_time_testInstanceStruct *chartInstance,
  boolean_T c2_A[66564], boolean_T c2_B[66564]);
static void c2_imreconstruct(SFc2_real_time_testInstanceStruct *chartInstance,
  boolean_T c2_marker[65536], boolean_T c2_mask[65536], boolean_T c2_im[65536]);
static void c2_b_bwlabel(SFc2_real_time_testInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536], real_T c2_c_L[65536]);
static void c2_vertConcatenateCells(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_1 *c2_A,
  c2_emxArray_cell_wrap_1 *c2_B, c2_emxArray_cell_wrap_1 *c2_C);
static void c2_emlrt_marshallIn(SFc2_real_time_testInstanceStruct *chartInstance,
  const mxArray *c2_b_centroid, const char_T *c2_identifier, real_T c2_b_y[2]);
static void c2_b_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_b_y[2]);
static void c2_c_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_d_image, const char_T *c2_identifier,
  uint8_T c2_b_y[196608]);
static void c2_d_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  uint8_T c2_b_y[196608]);
static real_T c2_e_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_b_max_area, const char_T *c2_identifier);
static real_T c2_f_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static uint8_T c2_g_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_real_time_test, const char_T *
  c2_identifier);
static uint8_T c2_h_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_chart_data_browse_helper(SFc2_real_time_testInstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig);
static const mxArray *c2_assert(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_b_assert(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1);
static void c2_b_ComputeArea(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats,
  c2_sHtk0WM4OMtyqkehwQYcq2 *c2_statsAlreadyComputed);
static void c2_b_ComputePixelList(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c2_stats, c2_sHtk0WM4OMtyqkehwQYcq2 *c2_statsAlreadyComputed);
static void c2_emxCopyStruct_s_VeYncwf9ecih6GB(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_VeYncwf9ecih6GBw6CjRRG *c2_dst,
  const c2_s_VeYncwf9ecih6GBw6CjRRG *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopyMatrix_real_T(SFc2_real_time_testInstanceStruct
  *chartInstance, real_T c2_dst[2], const real_T c2_src[2]);
static void c2_emxCopy_real_T(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T **c2_dst, c2_emxArray_real_T *
  const *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_real_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_real_T1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_s_VeYncwf9ecih6GBw6CjRR(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_VeYncwf9ecih6GBw6CjR
  **c2_pEmxArray, int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_1
  **c2_pEmxArray, int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_real_T(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_real_T1(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_s_VeYncwf9ecih6GB(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_VeYncwf9ecih6GBw6CjRRG
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_s_VeYncwf9ecih6GBw6CjRR(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_s_VeYncwf9ecih6GBw6CjR **c2_pEmxArray);
static void c2_emxFree_real_T(SFc2_real_time_testInstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray);
static void c2_emxFreeStruct_s_VeYncwf9ecih6GB(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_s_VeYncwf9ecih6GBw6CjRRG *c2_pStruct);
static void c2_emxFree_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_cell_wrap_1 **c2_pEmxArray);
static void c2_emxFreeStruct_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_cell_wrap_1 *c2_pStruct);
static void c2_emxEnsureCapacity_boolean_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxTrim_s_VeYncwf9ecih6GBw6CjRR(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_s_VeYncwf9ecih6GBw6CjR *c2_emxArray, int32_T
  c2_fromIndex, int32_T c2_toIndex);
static void c2_emxExpand_s_VeYncwf9ecih6GBw6Cj(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_VeYncwf9ecih6GBw6CjR
  *c2_emxArray, int32_T c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxEnsureCapacity_s_VeYncwf9eci(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_VeYncwf9ecih6GBw6CjR
  *c2_emxArray, int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_int32_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_s_vX9LV7M75v5ZNol(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_vX9LV7M75v5ZNol5H5URkE
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_int32_T(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  **c2_pEmxArray, int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_boolean_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T **c2_pEmxArray,
  int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFreeStruct_s_vX9LV7M75v5ZNol(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_s_vX9LV7M75v5ZNol5H5URkE *c2_pStruct);
static void c2_emxFree_int32_T(SFc2_real_time_testInstanceStruct *chartInstance,
  c2_emxArray_int32_T **c2_pEmxArray);
static void c2_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa **c2_pEmxArray);
static void c2_emxFree_boolean_T(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_boolean_T **c2_pEmxArray);
static void c2_emxFreeStruct_s_bxcgeNxEuVlgmMh(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_s_bxcgeNxEuVlgmMh5HwQaXB *c2_pStruct);
static void c2_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_emxArray, int32_T
  c2_fromIndex, int32_T c2_toIndex);
static void c2_emxInitStruct_s_bxcgeNxEuVlgmMh(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_bxcgeNxEuVlgmMh5HwQaXB
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_boolean_T1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T **c2_pEmxArray,
  int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c2_emxArray, int32_T c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxEnsureCapacity_s_bxcgeNxEuVl(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c2_emxArray, int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopyStruct_s_bxcgeNxEuVlgmMh(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_bxcgeNxEuVlgmMh5HwQaXB *c2_dst,
  const c2_s_bxcgeNxEuVlgmMh5HwQaXB *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopyMatrix_real_T1(SFc2_real_time_testInstanceStruct
  *chartInstance, real_T c2_dst[4], const real_T c2_src[4]);
static void c2_emxCopy_boolean_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T **c2_dst,
  c2_emxArray_boolean_T * const *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_boolean_T1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopyMatrix_real_T2(SFc2_real_time_testInstanceStruct
  *chartInstance, real_T c2_dst[16], const real_T c2_src[16]);
static void c2_emxCopy_real_T1(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T **c2_dst, c2_emxArray_real_T *
  const *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxTrim_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_cell_wrap_1 *c2_emxArray, int32_T c2_fromIndex,
  int32_T c2_toIndex);
static void c2_emxInitStruct_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation);
static void c2_emxExpand_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_1 *c2_emxArray,
  int32_T c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_1 *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitMatrix_cell_wrap_30(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_30 c2_pMatrix[2], const
  emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_cell_wrap_30(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_30 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation);
static void c2_emxFreeMatrix_cell_wrap_30(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_cell_wrap_30 c2_pMatrix[2]);
static void c2_emxFreeStruct_cell_wrap_30(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_cell_wrap_30 *c2_pStruct);
static int32_T c2_div_nzp_s32(SFc2_real_time_testInstanceStruct *chartInstance,
  int32_T c2_numerator, int32_T c2_denominator, int32_T c2_EMLOvCount_src_loc,
  uint32_T c2_ssid_src_loc, int32_T c2_offset_src_loc, int32_T c2_length_src_loc);
static int32_T c2_div_s32(SFc2_real_time_testInstanceStruct *chartInstance,
  int32_T c2_numerator, int32_T c2_denominator, int32_T c2_EMLOvCount_src_loc,
  uint32_T c2_ssid_src_loc, int32_T c2_offset_src_loc, int32_T c2_length_src_loc);
static void init_dsm_address_info(SFc2_real_time_testInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc2_real_time_testInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c2_st, (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_real_time_test = 0U;
}

static void initialize_params_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_st;
  c2_st = NULL;
  c2_st = NULL;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_createcellmatrix(5, 1), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", *chartInstance->c2_centroid, 0, 0U,
    1U, 0U, 2, 1, 2), false);
  sf_mex_setcell(c2_b_y, 0, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", *chartInstance->c2_c_image, 3, 0U,
    1U, 0U, 3, 256, 256, 3), false);
  sf_mex_setcell(c2_b_y, 1, c2_d_y);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", chartInstance->c2_max_area, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 2, c2_e_y);
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", chartInstance->c2_radius, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_b_y, 3, c2_f_y);
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_real_time_test, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 4, c2_g_y);
  sf_mex_assign(&c2_st, c2_b_y, false);
  return c2_st;
}

static void set_sim_state_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T c2_c_dv[2];
  int32_T c2_i;
  int32_T c2_i1;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)),
                      "centroid", c2_c_dv);
  for (c2_i = 0; c2_i < 2; c2_i++) {
    (*chartInstance->c2_centroid)[c2_i] = c2_c_dv[c2_i];
  }

  c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 1)),
                        "image", chartInstance->c2_uv);
  for (c2_i1 = 0; c2_i1 < 196608; c2_i1++) {
    (*chartInstance->c2_c_image)[c2_i1] = chartInstance->c2_uv[c2_i1];
  }

  *chartInstance->c2_max_area = c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "max_area");
  *chartInstance->c2_radius = c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "radius");
  chartInstance->c2_is_active_c2_real_time_test = c2_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 4)),
     "is_active_c2_real_time_test");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void sf_gateway_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  static char_T c2_b_cv[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'd',
    'e', 'x', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', '_', 'o', 'n', 'e',
    '_', 'o', 'u', 't', 'p', 'u', 't', '_', 'f', 'r', 'o', 'm', '_', 'e', 'x',
    'p', 'r', 'e', 's', 's', 'i', 'o', 'n' };

  static char_T c2_b_cv2[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n',
    'd', 'e', 'x', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', '_', 'o', 'n',
    'e', '_', 'o', 'u', 't', 'p', 'u', 't', '_', 'f', 'r', 'o', 'm', '_', 'e',
    'x', 'p', 'r', 'e', 's', 's', 'i', 'o', 'n' };

  static char_T c2_cv3[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'd',
    'e', 'x', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', '_', 'o', 'n', 'e',
    '_', 'o', 'u', 't', 'p', 'u', 't', '_', 'f', 'r', 'o', 'm', '_', 'e', 'x',
    'p', 'r', 'e', 's', 's', 'i', 'o', 'n' };

  static char_T c2_b_cv1[41] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'l', 'e',
    'g', 'a', 'c', 'y', '_', 't', 'w', 'o', '_', 'p', 'a', 'r', 't', ':', 'n',
    'e', 'e', 'd', 'M', 'o', 'r', 'e', 'R', 'h', 's', 'O', 'u', 't', 'p', 'u',
    't', 's' };

  static char_T c2_cv4[41] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'l', 'e', 'g',
    'a', 'c', 'y', '_', 't', 'w', 'o', '_', 'p', 'a', 'r', 't', ':', 'n', 'e',
    'e', 'd', 'M', 'o', 'r', 'e', 'R', 'h', 's', 'O', 'u', 't', 'p', 'u', 't',
    's' };

  c2_emxArray_cell_wrap_1 *c2_B;
  c2_emxArray_real_T *c2_b_r;
  c2_emxArray_real_T *c2_r1;
  c2_emxArray_real_T *c2_r2;
  c2_emxArray_s_VeYncwf9ecih6GBw6CjR *c2_stats;
  c2_s_VeYncwf9ecih6GBw6CjRRG c2_result;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  real_T c2_b_centroid[2];
  real_T c2_T;
  real_T c2_b_k;
  real_T c2_b_max_area;
  real_T c2_b_radius;
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d_x;
  real_T c2_t;
  real_T c2_x;
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_k;
  int32_T c2_loop_ub;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c2_i = 0; c2_i < 196608; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (real_T)
                      (*chartInstance->c2_b_image)[c2_i]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  for (c2_i1 = 0; c2_i1 < 196608; c2_i1++) {
    chartInstance->c2_image[c2_i1] = (*chartInstance->c2_b_image)[c2_i1];
  }

  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_b_st.site = &c2_emlrtRSI;
  c2_c_st.site = &c2_k_emlrtRSI;
  rgb2gray_tbb_uint8(&chartInstance->c2_image[0], 65536.0,
                     &chartInstance->c2_copy[0], true);
  c2_b_st.site = &c2_b_emlrtRSI;
  for (c2_i2 = 0; c2_i2 < 65536; c2_i2++) {
    chartInstance->c2_b_copy[c2_i2] = chartInstance->c2_copy[c2_i2];
  }

  c2_imgaussfilt(chartInstance, chartInstance->c2_b_copy, chartInstance->c2_copy);
  c2_b_st.site = &c2_c_emlrtRSI;
  c2_c_st.site = &c2_s_emlrtRSI;
  for (c2_i3 = 0; c2_i3 < 65536; c2_i3++) {
    chartInstance->c2_c_copy[c2_i3] = chartInstance->c2_copy[c2_i3];
  }

  c2_t = c2_computeGlobalThreshold(chartInstance, &c2_c_st,
    chartInstance->c2_c_copy);
  c2_T = c2_t;
  c2_d = 255.0 * c2_T;
  for (c2_i4 = 0; c2_i4 < 65536; c2_i4++) {
    chartInstance->c2_d_copy[c2_i4] = ((real_T)chartInstance->c2_copy[c2_i4] >
      c2_d);
  }

  c2_emxInit_s_VeYncwf9ecih6GBw6CjRR(chartInstance, &c2_b_st, &c2_stats, 1,
    &c2_f_emlrtRTEI);
  c2_b_st.site = &c2_d_emlrtRSI;
  for (c2_i5 = 0; c2_i5 < 65536; c2_i5++) {
    chartInstance->c2_e_copy[c2_i5] = chartInstance->c2_d_copy[c2_i5];
  }

  c2_regionprops(chartInstance, &c2_b_st, chartInstance->c2_e_copy, c2_stats);
  c2_b_st.site = &c2_e_emlrtRSI;
  if (c2_stats->size[0] != 1) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    sf_mex_call(&c2_b_st, &c2_s_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_emxInitStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_b_st, &c2_result,
    &c2_h_emlrtRTEI);
  c2_emxCopyStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_b_st, &c2_result,
    &c2_stats->data[0], &c2_emlrtRTEI);
  c2_b_radius = c2_result.EquivDiameter / 2.0;
  c2_b_st.site = &c2_f_emlrtRSI;
  if (c2_stats->size[0] == 0) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    sf_mex_call(&c2_b_st, &c2_t_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_emxCopyStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_b_st, &c2_result,
    &c2_stats->data[0], &c2_b_emlrtRTEI);
  c2_b_max_area = c2_result.Area;
  c2_b_st.site = &c2_g_emlrtRSI;
  if (c2_stats->size[0] != 1) {
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    sf_mex_call(&c2_b_st, &c2_s_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_g_y)));
  }

  c2_emxCopyStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_b_st, &c2_result,
    &c2_stats->data[0], &c2_emlrtRTEI);
  c2_x = c2_result.Centroid[0];
  c2_b_x = c2_x;
  c2_b_x = muDoubleScalarCeil(c2_b_x);
  c2_b_st.site = &c2_g_emlrtRSI;
  if (c2_stats->size[0] != 1) {
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    sf_mex_call(&c2_b_st, &c2_s_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_i_y)));
  }

  c2_emxCopyStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_b_st, &c2_result,
    &c2_stats->data[0], &c2_emlrtRTEI);
  c2_c_x = c2_result.Centroid[1];
  c2_d_x = c2_c_x;
  c2_d_x = muDoubleScalarCeil(c2_d_x);
  c2_b_centroid[0] = c2_b_x;
  c2_b_centroid[1] = c2_d_x;
  c2_b_st.site = &c2_h_emlrtRSI;
  c2_emxFreeStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_result);
  if (c2_stats->size[0] == 0) {
    c2_j_y = NULL;
    sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    c2_k_y = NULL;
    sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    sf_mex_call(&c2_b_st, &c2_t_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_k_y)));
  }

  c2_emxFree_s_VeYncwf9ecih6GBw6CjRR(chartInstance, &c2_stats);
  c2_emxInit_cell_wrap_1(chartInstance, &c2_b_st, &c2_B, 1, &c2_g_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, &c2_b_st, &c2_b_r, 2, (emlrtRTEInfo *)NULL);
  c2_b_st.site = &c2_i_emlrtRSI;
  for (c2_i6 = 0; c2_i6 < 65536; c2_i6++) {
    chartInstance->c2_f_copy[c2_i6] = chartInstance->c2_d_copy[c2_i6];
  }

  c2_imerode(chartInstance, chartInstance->c2_f_copy, chartInstance->c2_d_copy);
  c2_b_st.site = &c2_j_emlrtRSI;
  c2_bwboundaries(chartInstance, &c2_b_st, chartInstance->c2_d_copy, c2_B,
                  chartInstance->c2_a__1);
  c2_i7 = c2_B->size[0] - 1;
  if (0 > c2_i7) {
    emlrtDynamicBoundsCheckR2012b(0, 0, c2_i7, &c2_emlrtBCI, &c2_st);
  }

  c2_i8 = 0;
  c2_i9 = c2_b_r->size[0] * c2_b_r->size[1];
  c2_b_r->size[0] = c2_B->data[c2_i8].f1->size[0];
  c2_b_r->size[1] = 2;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_b_r, c2_i9,
    &c2_c_emlrtRTEI);
  c2_i10 = c2_B->size[0] - 1;
  if (0 > c2_i10) {
    emlrtDynamicBoundsCheckR2012b(0, 0, c2_i10, &c2_emlrtBCI, &c2_st);
  }

  c2_i11 = 0;
  c2_i12 = c2_B->size[0] - 1;
  if (0 > c2_i12) {
    emlrtDynamicBoundsCheckR2012b(0, 0, c2_i12, &c2_emlrtBCI, &c2_st);
  }

  c2_i13 = 0;
  c2_loop_ub = c2_B->data[c2_i11].f1->size[0] * c2_B->data[c2_i13].f1->size[1] -
    1;
  for (c2_i14 = 0; c2_i14 <= c2_loop_ub; c2_i14++) {
    c2_i15 = c2_B->size[0] - 1;
    if (0 > c2_i15) {
      emlrtDynamicBoundsCheckR2012b(0, 0, c2_i15, &c2_f_emlrtBCI, &c2_st);
    }

    c2_b_r->data[c2_i14] = c2_B->data[0].f1->data[c2_i14];
  }

  c2_emxInit_real_T1(chartInstance, &c2_st, &c2_r1, 1, (emlrtRTEInfo *)NULL);
  c2_i16 = c2_b_r->size[0];
  c2_i17 = c2_r1->size[0];
  c2_r1->size[0] = c2_i16;
  c2_emxEnsureCapacity_real_T1(chartInstance, &c2_st, c2_r1, c2_i17,
    &c2_c_emlrtRTEI);
  c2_b_loop_ub = c2_i16 - 1;
  for (c2_i18 = 0; c2_i18 <= c2_b_loop_ub; c2_i18++) {
    c2_r1->data[c2_i18] = c2_b_r->data[c2_i18 + c2_b_r->size[0]];
  }

  c2_d1 = (real_T)c2_r1->size[0];
  c2_i19 = (int32_T)c2_d1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d1, mxDOUBLE_CLASS, c2_i19,
    &c2_jd_emlrtRTEI, &c2_st);
  c2_k = 0;
  c2_emxFree_real_T(chartInstance, &c2_r1);
  c2_emxInit_real_T(chartInstance, &c2_st, &c2_r2, 2, (emlrtRTEInfo *)NULL);
  while (c2_k <= c2_i19 - 1) {
    c2_b_k = 1.0 + (real_T)c2_k;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 1);
    c2_i20 = c2_B->size[0] - 1;
    if (0 > c2_i20) {
      emlrtDynamicBoundsCheckR2012b(0, 0, c2_i20, &c2_b_emlrtBCI, &c2_st);
    }

    c2_i21 = 0;
    c2_i23 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = c2_B->data[c2_i21].f1->size[0];
    c2_b_r->size[1] = 2;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_b_r, c2_i23,
      &c2_d_emlrtRTEI);
    c2_i25 = c2_B->size[0] - 1;
    if (0 > c2_i25) {
      emlrtDynamicBoundsCheckR2012b(0, 0, c2_i25, &c2_b_emlrtBCI, &c2_st);
    }

    c2_i27 = 0;
    c2_i28 = c2_B->size[0] - 1;
    if (0 > c2_i28) {
      emlrtDynamicBoundsCheckR2012b(0, 0, c2_i28, &c2_b_emlrtBCI, &c2_st);
    }

    c2_i30 = 0;
    c2_c_loop_ub = c2_B->data[c2_i27].f1->size[0] * c2_B->data[c2_i30].f1->size
      [1] - 1;
    for (c2_i31 = 0; c2_i31 <= c2_c_loop_ub; c2_i31++) {
      c2_i33 = c2_B->size[0] - 1;
      if (0 > c2_i33) {
        emlrtDynamicBoundsCheckR2012b(0, 0, c2_i33, &c2_g_emlrtBCI, &c2_st);
      }

      c2_b_r->data[c2_i31] = c2_B->data[0].f1->data[c2_i31];
    }

    c2_i32 = c2_B->size[0] - 1;
    if (0 > c2_i32) {
      emlrtDynamicBoundsCheckR2012b(0, 0, c2_i32, &c2_c_emlrtBCI, &c2_st);
    }

    c2_i34 = 0;
    c2_i35 = c2_r2->size[0] * c2_r2->size[1];
    c2_r2->size[0] = c2_B->data[c2_i34].f1->size[0];
    c2_r2->size[1] = 2;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_r2, c2_i35,
      &c2_e_emlrtRTEI);
    c2_i36 = c2_B->size[0] - 1;
    if (0 > c2_i36) {
      emlrtDynamicBoundsCheckR2012b(0, 0, c2_i36, &c2_c_emlrtBCI, &c2_st);
    }

    c2_i37 = 0;
    c2_i38 = c2_B->size[0] - 1;
    if (0 > c2_i38) {
      emlrtDynamicBoundsCheckR2012b(0, 0, c2_i38, &c2_c_emlrtBCI, &c2_st);
    }

    c2_i39 = 0;
    c2_d_loop_ub = c2_B->data[c2_i37].f1->size[0] * c2_B->data[c2_i39].f1->size
      [1] - 1;
    for (c2_i40 = 0; c2_i40 <= c2_d_loop_ub; c2_i40++) {
      c2_i42 = c2_B->size[0] - 1;
      if (0 > c2_i42) {
        emlrtDynamicBoundsCheckR2012b(0, 0, c2_i42, &c2_h_emlrtBCI, &c2_st);
      }

      c2_r2->data[c2_i40] = c2_B->data[0].f1->data[c2_i40];
    }

    c2_i41 = c2_b_r->size[0];
    if (c2_b_k != (real_T)(int32_T)muDoubleScalarFloor(c2_b_k)) {
      emlrtIntegerCheckR2012b(c2_b_k, &c2_emlrtDCI, &c2_st);
    }

    c2_i43 = (int32_T)c2_b_k;
    if ((c2_i43 < 1) || (c2_i43 > c2_i41)) {
      emlrtDynamicBoundsCheckR2012b(c2_i43, 1, c2_i41, &c2_e_emlrtBCI, &c2_st);
    }

    c2_d2 = c2_b_r->data[c2_i43 - 1];
    if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
      emlrtIntegerCheckR2012b(c2_d2, &c2_emlrtDCI, &c2_st);
    }

    c2_i44 = (int32_T)c2_d2;
    if ((c2_i44 < 1) || (c2_i44 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c2_i44, 1, 256, &c2_d_emlrtBCI, &c2_st);
    }

    c2_i45 = c2_r2->size[0];
    if (c2_b_k != (real_T)(int32_T)muDoubleScalarFloor(c2_b_k)) {
      emlrtIntegerCheckR2012b(c2_b_k, &c2_emlrtDCI, &c2_st);
    }

    c2_i46 = (int32_T)c2_b_k;
    if ((c2_i46 < 1) || (c2_i46 > c2_i45)) {
      emlrtDynamicBoundsCheckR2012b(c2_i46, 1, c2_i45, &c2_e_emlrtBCI, &c2_st);
    }

    c2_d3 = c2_r2->data[(c2_i46 + c2_r2->size[0]) - 1];
    if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
      emlrtIntegerCheckR2012b(c2_d3, &c2_emlrtDCI, &c2_st);
    }

    c2_i47 = (int32_T)c2_d3;
    if ((c2_i47 < 1) || (c2_i47 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c2_i47, 1, 256, &c2_d_emlrtBCI, &c2_st);
    }

    chartInstance->c2_image[(c2_i44 + ((c2_i47 - 1) << 8)) - 1] = MAX_uint8_T;
    c2_k++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_emxFree_real_T(chartInstance, &c2_r2);
  c2_emxFree_real_T(chartInstance, &c2_b_r);
  c2_emxFree_cell_wrap_1(chartInstance, &c2_B);
  covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 0);
  *chartInstance->c2_max_area = c2_b_max_area;
  *chartInstance->c2_radius = c2_b_radius;
  for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
    (*chartInstance->c2_centroid)[c2_i22] = c2_b_centroid[c2_i22];
  }

  for (c2_i24 = 0; c2_i24 < 196608; c2_i24++) {
    (*chartInstance->c2_c_image)[c2_i24] = chartInstance->c2_image[c2_i24];
  }

  c2_do_animation_call_c2_real_time_test(chartInstance);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U,
                    *chartInstance->c2_max_area);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U,
                    *chartInstance->c2_radius);
  for (c2_i26 = 0; c2_i26 < 2; c2_i26++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U,
                      (*chartInstance->c2_centroid)[c2_i26]);
  }

  for (c2_i29 = 0; c2_i29 < 196608; c2_i29++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 4U, (real_T)
                      (*chartInstance->c2_c_image)[c2_i29]);
  }
}

static void mdl_start_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    10U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 1U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 1, -1, 1950);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1860, 1889,
                     1946);
}

static void mdl_cleanup_runtime_resources_c2_real_time_test
  (SFc2_real_time_testInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void initSimStructsc2_real_time_test(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c2_real_time_test_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static void c2_imgaussfilt(SFc2_real_time_testInstanceStruct *chartInstance,
  uint8_T c2_A[65536], uint8_T c2_B[65536])
{
  static real_T c2_kernel[9] = { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 };

  static boolean_T c2_conn[9] = { false, false, false, false, true, false, false,
    false, false };

  real_T c2_connDimsT[2];
  real_T c2_outSizeT[2];
  real_T c2_padSizeT[2];
  real_T c2_startT[2];
  real_T c2_nonZeroKernel;
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  uint8_T c2_a[66564];
  uint8_T c2_b_A[65536];
  boolean_T c2_b_modeFlag;
  boolean_T c2_c_modeFlag;
  boolean_T c2_modeFlag;
  boolean_T c2_tooBig;
  for (c2_i = 0; c2_i < 65536; c2_i++) {
    c2_b_A[c2_i] = c2_A[c2_i];
  }

  c2_padImage(chartInstance, c2_b_A, c2_a);
  c2_tooBig = true;
  for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
    c2_tooBig = false;
  }

  if (!c2_tooBig) {
    c2_modeFlag = true;
  } else {
    c2_modeFlag = false;
  }

  if (c2_modeFlag) {
    c2_b_modeFlag = true;
  } else {
    c2_b_modeFlag = false;
  }

  c2_c_modeFlag = c2_b_modeFlag;
  if (c2_c_modeFlag) {
    for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
      c2_padSizeT[c2_i1] = 258.0;
    }

    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_outSizeT[c2_i3] = 256.0;
    }

    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_connDimsT[c2_i5] = 3.0;
    }

    ippfilter_uint8(&c2_a[0], &c2_B[0], &c2_outSizeT[0], 2.0, &c2_padSizeT[0],
                    &c2_kernel[0], &c2_connDimsT[0], false);
  } else {
    c2_nonZeroKernel = 1.0;
    for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
      c2_padSizeT[c2_i2] = 258.0;
    }

    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_outSizeT[c2_i4] = 256.0;
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_connDimsT[c2_i6] = 3.0;
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_startT[c2_i7] = 1.0;
    }

    imfilter_uint8(&c2_a[0], &c2_B[0], 2.0, &c2_outSizeT[0], 2.0, &c2_padSizeT[0],
                   &c2_nonZeroKernel, 1.0, &c2_conn[0], 2.0, &c2_connDimsT[0],
                   &c2_startT[0], 2.0, true, false);
  }
}

static void c2_padImage(SFc2_real_time_testInstanceStruct *chartInstance,
  uint8_T c2_a_tmp[65536], uint8_T c2_a[66564])
{
  static int32_T c2_idxA[516] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136,
    137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151,
    152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166,
    167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181,
    182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
    197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211,
    212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226,
    227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241,
    242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256,
    256, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
    39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
    58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76,
    77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126,
    127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
    142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156,
    157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171,
    172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186,
    187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201,
    202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216,
    217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231,
    232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246,
    247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 256 };

  real_T c2_b_i;
  real_T c2_b_j;
  int32_T c2_i;
  int32_T c2_j;
  (void)chartInstance;
  for (c2_j = 0; c2_j < 258; c2_j++) {
    c2_b_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 258; c2_i++) {
      c2_b_i = (real_T)c2_i + 1.0;
      c2_a[((int32_T)c2_b_i + 258 * ((int32_T)c2_b_j - 1)) - 1] = c2_a_tmp
        [(c2_idxA[(int32_T)c2_b_i - 1] + ((c2_idxA[(int32_T)c2_b_j + 257] - 1) <<
           8)) - 1];
    }
  }
}

static real_T c2_computeGlobalThreshold(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, uint8_T c2_I[65536])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_b_y[256];
  real_T c2_localBins1[256];
  real_T c2_localBins2[256];
  real_T c2_localBins3[256];
  real_T c2_d_i;
  real_T c2_out;
  int32_T c2_a;
  int32_T c2_b_a;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_c;
  int32_T c2_c_a;
  int32_T c2_c_c;
  int32_T c2_c_i;
  int32_T c2_d_a;
  int32_T c2_d_c;
  int32_T c2_e_a;
  int32_T c2_e_c;
  int32_T c2_f_a;
  int32_T c2_f_c;
  int32_T c2_g_a;
  int32_T c2_g_c;
  int32_T c2_h_a;
  int32_T c2_h_c;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i_a;
  int32_T c2_i_c;
  int32_T c2_idx;
  int32_T c2_idx1;
  int32_T c2_idx2;
  int32_T c2_idx3;
  int32_T c2_idx4;
  int32_T c2_j_a;
  int32_T c2_j_c;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_t_emlrtRSI;
  c2_b_st.site = &c2_u_emlrtRSI;
  c2_c_st.site = &c2_w_emlrtRSI;
  c2_out = 1.0;
  getnumcores(&c2_out);
  c2_c_st.site = &c2_v_emlrtRSI;
  for (c2_i = 0; c2_i < 256; c2_i++) {
    c2_b_y[c2_i] = 0.0;
  }

  for (c2_i1 = 0; c2_i1 < 256; c2_i1++) {
    c2_localBins1[c2_i1] = 0.0;
  }

  for (c2_i2 = 0; c2_i2 < 256; c2_i2++) {
    c2_localBins2[c2_i2] = 0.0;
  }

  for (c2_i3 = 0; c2_i3 < 256; c2_i3++) {
    c2_localBins3[c2_i3] = 0.0;
  }

  for (c2_b_i = 4; c2_b_i <= 65536; c2_b_i += 4) {
    c2_i4 = c2_b_i - 3;
    if ((c2_i4 < 1) || (c2_i4 > 65536)) {
      emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 65536, &c2_i_emlrtBCI, &c2_c_st);
    }

    c2_idx1 = c2_I[c2_i4 - 1];
    c2_i5 = c2_b_i - 2;
    if ((c2_i5 < 1) || (c2_i5 > 65536)) {
      emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 65536, &c2_j_emlrtBCI, &c2_c_st);
    }

    c2_idx2 = c2_I[c2_i5 - 1];
    c2_i6 = c2_b_i - 1;
    if ((c2_i6 < 1) || (c2_i6 > 65536)) {
      emlrtDynamicBoundsCheckR2012b(c2_i6, 1, 65536, &c2_k_emlrtBCI, &c2_c_st);
    }

    c2_idx3 = c2_I[c2_i6 - 1];
    if ((c2_b_i < 1) || (c2_b_i > 65536)) {
      emlrtDynamicBoundsCheckR2012b(c2_b_i, 1, 65536, &c2_l_emlrtBCI, &c2_c_st);
    }

    c2_idx4 = c2_I[c2_b_i - 1];
    c2_c_a = c2_idx1 + 1;
    c2_c_c = c2_c_a - 1;
    c2_d_a = c2_idx1 + 1;
    c2_d_c = c2_d_a - 1;
    c2_localBins1[c2_c_c] = c2_localBins1[c2_d_c] + 1.0;
    c2_e_a = c2_idx2 + 1;
    c2_e_c = c2_e_a - 1;
    c2_f_a = c2_idx2 + 1;
    c2_f_c = c2_f_a - 1;
    c2_localBins2[c2_e_c] = c2_localBins2[c2_f_c] + 1.0;
    c2_g_a = c2_idx3 + 1;
    c2_g_c = c2_g_a - 1;
    c2_h_a = c2_idx3 + 1;
    c2_h_c = c2_h_a - 1;
    c2_localBins3[c2_g_c] = c2_localBins3[c2_h_c] + 1.0;
    c2_i_a = c2_idx4 + 1;
    c2_i_c = c2_i_a - 1;
    c2_j_a = c2_idx4 + 1;
    c2_j_c = c2_j_a - 1;
    c2_b_y[c2_i_c] = c2_b_y[c2_j_c] + 1.0;
  }

  while (c2_b_i - 3 <= 65536) {
    c2_idx = c2_I[c2_b_i - 4];
    c2_a = c2_idx + 1;
    c2_c = c2_a - 1;
    c2_b_a = c2_idx + 1;
    c2_b_c = c2_b_a - 1;
    c2_b_y[c2_c] = c2_b_y[c2_b_c] + 1.0;
    c2_b_i++;
  }

  for (c2_c_i = 0; c2_c_i < 256; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_b_y[(int32_T)c2_d_i - 1] = ((c2_b_y[(int32_T)c2_d_i - 1] + c2_localBins1
      [(int32_T)c2_d_i - 1]) + c2_localBins2[(int32_T)c2_d_i - 1]) +
      c2_localBins3[(int32_T)c2_d_i - 1];
  }

  c2_st.site = &c2_t_emlrtRSI;
  return c2_otsuthresh(chartInstance, &c2_st, c2_b_y);
}

static real_T c2_otsuthresh(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_counts[256])
{
  static char_T c2_b_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c2_b_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c2_b_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  real_T c2_mu[256];
  real_T c2_omega[256];
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_b_k;
  real_T c2_b_p;
  real_T c2_b_x;
  real_T c2_c;
  real_T c2_c_a;
  real_T c2_c_x;
  real_T c2_d_a;
  real_T c2_d_k;
  real_T c2_d_x;
  real_T c2_e_a;
  real_T c2_idx;
  real_T c2_maxval;
  real_T c2_mu_t;
  real_T c2_num_elems;
  real_T c2_num_maxval;
  real_T c2_sigma_b_squared;
  real_T c2_t;
  real_T c2_x;
  int32_T c2_c_k;
  int32_T c2_e_k;
  int32_T c2_f_k;
  int32_T c2_k;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b_b;
  boolean_T c2_c_b;
  boolean_T c2_d_b;
  boolean_T c2_exitg1;
  boolean_T c2_isfinite_maxval;
  boolean_T c2_p;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_y_emlrtRSI;
  c2_b_st.site = &c2_bb_emlrtRSI;
  c2_p = true;
  c2_k = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_k < 256)) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_x = c2_counts[(int32_T)c2_b_k - 1];
    c2_b_x = c2_x;
    c2_b_b = muDoubleScalarIsInf(c2_b_x);
    c2_b1 = !c2_b_b;
    c2_c_b = c2_b1;
    if (c2_c_b) {
      c2_k++;
    } else {
      c2_p = false;
      c2_exitg1 = true;
    }
  }

  if (c2_p) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c2_b_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
  }

  c2_b_st.site = &c2_bb_emlrtRSI;
  c2_num_elems = 0.0;
  for (c2_c_k = 0; c2_c_k < 256; c2_c_k++) {
    c2_d_k = (real_T)c2_c_k + 1.0;
    c2_num_elems += c2_counts[(int32_T)c2_d_k - 1];
  }

  c2_omega[0] = c2_counts[0] / c2_num_elems;
  c2_mu[0] = c2_omega[0];
  for (c2_e_k = 0; c2_e_k < 255; c2_e_k++) {
    c2_d_k = (real_T)c2_e_k + 2.0;
    c2_b_p = c2_counts[(int32_T)c2_d_k - 1] / c2_num_elems;
    c2_omega[(int32_T)c2_d_k - 1] = c2_omega[(int32_T)(c2_d_k - 1.0) - 1] +
      c2_b_p;
    c2_mu[(int32_T)c2_d_k - 1] = c2_mu[(int32_T)(c2_d_k - 1.0) - 1] + c2_b_p *
      c2_d_k;
  }

  c2_mu_t = c2_mu[255];
  c2_maxval = rtMinusInf;
  c2_idx = 0.0;
  c2_num_maxval = 0.0;
  for (c2_f_k = 0; c2_f_k < 255; c2_f_k++) {
    c2_d_k = (real_T)c2_f_k + 1.0;
    c2_st.site = &c2_ab_emlrtRSI;
    c2_a = c2_mu_t * c2_omega[(int32_T)c2_d_k - 1] - c2_mu[(int32_T)c2_d_k - 1];
    c2_b_st.site = &c2_cb_emlrtRSI;
    c2_b_a = c2_a;
    c2_c_a = c2_b_a;
    c2_d_a = c2_c_a;
    c2_e_a = c2_d_a;
    c2_c = c2_e_a * c2_e_a;
    c2_sigma_b_squared = c2_c / (c2_omega[(int32_T)c2_d_k - 1] * (1.0 -
      c2_omega[(int32_T)c2_d_k - 1]));
    if (c2_sigma_b_squared > c2_maxval) {
      c2_maxval = c2_sigma_b_squared;
      c2_idx = c2_d_k;
      c2_num_maxval = 1.0;
    } else if (c2_sigma_b_squared == c2_maxval) {
      c2_idx += c2_d_k;
      c2_num_maxval++;
    }
  }

  c2_c_x = c2_maxval;
  c2_d_x = c2_c_x;
  c2_d_b = muDoubleScalarIsInf(c2_d_x);
  c2_b2 = !c2_d_b;
  c2_isfinite_maxval = c2_b2;
  if (c2_isfinite_maxval) {
    c2_idx /= c2_num_maxval;
    c2_t = (c2_idx - 1.0) / 255.0;
  } else {
    c2_t = 0.0;
  }

  return c2_t;
}

static void c2_regionprops(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536],
  c2_emxArray_s_VeYncwf9ecih6GBw6CjR *c2_outstats)
{
  static char_T c2_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c2_b_cv1[4] = { 's', 'q', 'r', 't' };

  c2_emxArray_boolean_T *c2_tile;
  c2_emxArray_int32_T *c2_b_regionLengths;
  c2_emxArray_int32_T *c2_idxCount;
  c2_emxArray_int32_T *c2_regionLengths;
  c2_emxArray_real_T *c2_b_x;
  c2_emxArray_real_T *c2_c_x;
  c2_emxArray_real_T *c2_d_x;
  c2_emxArray_real_T *c2_e_x;
  c2_emxArray_real_T *c2_regionIndices;
  c2_emxArray_real_T *c2_x;
  c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats;
  c2_sHtk0WM4OMtyqkehwQYcq2 c2_statsAlreadyComputed;
  c2_s_VeYncwf9ecih6GBw6CjRRG c2_statsOneObj;
  c2_s_vX9LV7M75v5ZNol5H5URkE c2_CC;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  real_T c2_reqStats[4];
  real_T c2_f_y[2];
  real_T c2_b_numObjs;
  real_T c2_b_vIdx;
  real_T c2_c_k;
  real_T c2_c_numObjs;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d_numObjs;
  real_T c2_e_k;
  real_T c2_e_varargin_1;
  real_T c2_f_k;
  real_T c2_f_x;
  real_T c2_g_x;
  real_T c2_h_k;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_numObjs;
  real_T c2_s;
  int32_T c2_outsize[2];
  int32_T c2_a;
  int32_T c2_b_b;
  int32_T c2_b_col;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_stats;
  int32_T c2_b_vlen;
  int32_T c2_c_b;
  int32_T c2_c_col;
  int32_T c2_c_loop_ub;
  int32_T c2_c_stats;
  int32_T c2_c_vIdx;
  int32_T c2_c_vlen;
  int32_T c2_col;
  int32_T c2_d_k;
  int32_T c2_d_loop_ub;
  int32_T c2_d_vlen;
  int32_T c2_dim;
  int32_T c2_e_loop_ub;
  int32_T c2_f_loop_ub;
  int32_T c2_g_k;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i100;
  int32_T c2_i101;
  int32_T c2_i102;
  int32_T c2_i103;
  int32_T c2_i104;
  int32_T c2_i105;
  int32_T c2_i106;
  int32_T c2_i107;
  int32_T c2_i108;
  int32_T c2_i109;
  int32_T c2_i11;
  int32_T c2_i110;
  int32_T c2_i111;
  int32_T c2_i112;
  int32_T c2_i113;
  int32_T c2_i114;
  int32_T c2_i115;
  int32_T c2_i116;
  int32_T c2_i117;
  int32_T c2_i118;
  int32_T c2_i119;
  int32_T c2_i12;
  int32_T c2_i120;
  int32_T c2_i121;
  int32_T c2_i122;
  int32_T c2_i123;
  int32_T c2_i124;
  int32_T c2_i125;
  int32_T c2_i126;
  int32_T c2_i127;
  int32_T c2_i128;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i6;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i64;
  int32_T c2_i65;
  int32_T c2_i66;
  int32_T c2_i67;
  int32_T c2_i68;
  int32_T c2_i69;
  int32_T c2_i7;
  int32_T c2_i70;
  int32_T c2_i71;
  int32_T c2_i72;
  int32_T c2_i73;
  int32_T c2_i74;
  int32_T c2_i75;
  int32_T c2_i76;
  int32_T c2_i77;
  int32_T c2_i78;
  int32_T c2_i79;
  int32_T c2_i8;
  int32_T c2_i80;
  int32_T c2_i81;
  int32_T c2_i82;
  int32_T c2_i83;
  int32_T c2_i84;
  int32_T c2_i85;
  int32_T c2_i86;
  int32_T c2_i87;
  int32_T c2_i88;
  int32_T c2_i89;
  int32_T c2_i9;
  int32_T c2_i90;
  int32_T c2_i91;
  int32_T c2_i92;
  int32_T c2_i93;
  int32_T c2_i94;
  int32_T c2_i95;
  int32_T c2_i96;
  int32_T c2_i97;
  int32_T c2_i98;
  int32_T c2_i99;
  int32_T c2_i_loop_ub;
  int32_T c2_ib;
  int32_T c2_inb;
  int32_T c2_j_loop_ub;
  int32_T c2_k;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_lidx;
  int32_T c2_loop_ub;
  int32_T c2_m_loop_ub;
  int32_T c2_n_loop_ub;
  int32_T c2_nfb;
  int32_T c2_nleft;
  int32_T c2_vIdx;
  int32_T c2_vlen;
  boolean_T c2_d_varargin_1[65536];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b_p;
  boolean_T c2_overflow;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  c2_emxInitStruct_s_vX9LV7M75v5ZNol(chartInstance, c2_sp, &c2_CC,
    &c2_x_emlrtRTEI);
  c2_st.site = &c2_mb_emlrtRSI;
  for (c2_i = 0; c2_i < 65536; c2_i++) {
    c2_d_varargin_1[c2_i] = c2_c_varargin_1[c2_i];
  }

  c2_bwconncomp(chartInstance, &c2_st, c2_d_varargin_1, &c2_CC);
  c2_emxInitStruct_s_VeYncwf9ecih6GB(chartInstance, c2_sp, &c2_statsOneObj,
    &c2_ab_emlrtRTEI);
  c2_numObjs = c2_CC.NumObjects;
  c2_st.site = &c2_lb_emlrtRSI;
  c2_b_numObjs = c2_numObjs;
  c2_b_st.site = &c2_vc_emlrtRSI;
  c2_c_numObjs = c2_b_numObjs;
  c2_statsOneObj.Area = 0.0;
  c2_reqStats[0] = 1.0;
  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_statsOneObj.Centroid[c2_i1] = 0.0;
  }

  c2_reqStats[1] = 2.0;
  c2_statsOneObj.EquivDiameter = 0.0;
  c2_reqStats[2] = 17.0;
  c2_statsOneObj.PixelList->size[0] = 0;
  c2_statsOneObj.PixelList->size[1] = 2;
  c2_emxInit_boolean_T(chartInstance, &c2_b_st, &c2_tile, 1, &c2_i_emlrtRTEI);
  c2_reqStats[3] = 21.0;
  c2_c_st.site = &c2_wc_emlrtRSI;
  c2_e_varargin_1 = c2_c_numObjs;
  c2_d_st.site = &c2_xc_emlrtRSI;
  c2_assertValidSizeArg(chartInstance, &c2_d_st, c2_e_varargin_1);
  c2_i2 = c2_tile->size[0];
  c2_tile->size[0] = (int32_T)c2_e_varargin_1;
  c2_emxEnsureCapacity_boolean_T(chartInstance, &c2_c_st, c2_tile, c2_i2,
    &c2_i_emlrtRTEI);
  c2_loop_ub = (int32_T)c2_e_varargin_1 - 1;
  for (c2_i3 = 0; c2_i3 <= c2_loop_ub; c2_i3++) {
    c2_tile->data[c2_i3] = false;
  }

  c2_outsize[0] = c2_tile->size[0];
  if (!((real_T)c2_outsize[0] == (real_T)c2_tile->size[0])) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c2_c_st, &c2_e_emlrtMCI, "error", 0U, 1U, 14, c2_b_y);
  }

  c2_emxFree_boolean_T(chartInstance, &c2_tile);
  c2_i4 = c2_outstats->size[0];
  c2_outstats->size[0] = c2_outsize[0];
  c2_emxEnsureCapacity_s_VeYncwf9eci(chartInstance, &c2_c_st, c2_outstats, c2_i4,
    &c2_j_emlrtRTEI);
  c2_b_loop_ub = c2_outsize[0] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_b_loop_ub; c2_i5++) {
    c2_emxCopyStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_c_st,
      &c2_outstats->data[c2_i5], &c2_statsOneObj, &c2_j_emlrtRTEI);
  }

  c2_emxFreeStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_statsOneObj);
  c2_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, &c2_c_st, &c2_stats, 1,
    &c2_y_emlrtRTEI);
  c2_st.site = &c2_kb_emlrtRSI;
  c2_initializeStatsStruct(chartInstance, &c2_st, c2_numObjs, c2_stats,
    &c2_statsAlreadyComputed);
  c2_st.site = &c2_jb_emlrtRSI;
  c2_d_numObjs = c2_numObjs;
  c2_statsAlreadyComputed.PixelIdxList = true;
  if (c2_d_numObjs != 0.0) {
    c2_emxInit_real_T1(chartInstance, &c2_st, &c2_regionIndices, 1,
                       &c2_cb_emlrtRTEI);
    c2_i6 = c2_regionIndices->size[0];
    c2_regionIndices->size[0] = c2_CC.RegionIndices->size[0];
    c2_emxEnsureCapacity_real_T1(chartInstance, &c2_st, c2_regionIndices, c2_i6,
      &c2_k_emlrtRTEI);
    c2_c_loop_ub = c2_CC.RegionIndices->size[0] - 1;
    for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
      c2_regionIndices->data[c2_i7] = c2_CC.RegionIndices->data[c2_i7];
    }

    c2_emxInit_int32_T(chartInstance, &c2_st, &c2_regionLengths, 1,
                       &c2_bb_emlrtRTEI);
    c2_i8 = c2_regionLengths->size[0];
    c2_regionLengths->size[0] = c2_CC.RegionLengths->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_regionLengths, c2_i8,
      &c2_l_emlrtRTEI);
    c2_d_loop_ub = c2_CC.RegionLengths->size[0] - 1;
    for (c2_i9 = 0; c2_i9 <= c2_d_loop_ub; c2_i9++) {
      c2_regionLengths->data[c2_i9] = c2_CC.RegionLengths->data[c2_i9];
    }

    c2_b_st.site = &c2_ad_emlrtRSI;
    c2_c_st.site = &c2_pc_emlrtRSI;
    c2_dim = 2;
    if ((real_T)c2_regionLengths->size[0] != 1.0) {
      c2_dim = 1;
    }

    c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_b_regionLengths, 1,
                       &c2_m_emlrtRTEI);
    c2_i12 = c2_b_regionLengths->size[0];
    c2_b_regionLengths->size[0] = c2_regionLengths->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_c_st, c2_b_regionLengths,
      c2_i12, &c2_m_emlrtRTEI);
    c2_e_loop_ub = c2_regionLengths->size[0] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_e_loop_ub; c2_i14++) {
      c2_b_regionLengths->data[c2_i14] = c2_regionLengths->data[c2_i14];
    }

    c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_idxCount, 1,
                       &c2_db_emlrtRTEI);
    c2_d_st.site = &c2_qc_emlrtRSI;
    c2_useConstantDim(chartInstance, &c2_d_st, c2_b_regionLengths, c2_dim,
                      c2_regionLengths);
    c2_i22 = c2_idxCount->size[0];
    c2_idxCount->size[0] = 1 + c2_regionLengths->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_idxCount, c2_i22,
      &c2_o_emlrtRTEI);
    c2_idxCount->data[0] = 0;
    c2_f_loop_ub = c2_regionLengths->size[0] - 1;
    c2_emxFree_int32_T(chartInstance, &c2_b_regionLengths);
    for (c2_i28 = 0; c2_i28 <= c2_f_loop_ub; c2_i28++) {
      c2_idxCount->data[c2_i28 + 1] = c2_regionLengths->data[c2_i28];
    }

    c2_emxFree_int32_T(chartInstance, &c2_regionLengths);
    c2_d3 = (real_T)c2_stats->size[0];
    c2_i33 = (int32_T)c2_d3 - 1;
    for (c2_g_k = 0; c2_g_k <= c2_i33; c2_g_k++) {
      c2_h_k = (real_T)c2_g_k + 1.0;
      c2_i40 = c2_idxCount->size[0];
      c2_i43 = (int32_T)c2_h_k;
      if ((c2_i43 < 1) || (c2_i43 > c2_i40)) {
        emlrtDynamicBoundsCheckR2012b(c2_i43, 1, c2_i40, &c2_m_emlrtBCI, &c2_st);
      }

      c2_i47 = c2_idxCount->data[c2_i43 - 1] + 1;
      c2_i49 = c2_idxCount->size[0];
      c2_i51 = (int32_T)(c2_h_k + 1.0);
      if ((c2_i51 < 1) || (c2_i51 > c2_i49)) {
        emlrtDynamicBoundsCheckR2012b(c2_i51, 1, c2_i49, &c2_n_emlrtBCI, &c2_st);
      }

      c2_i53 = c2_idxCount->data[c2_i51 - 1];
      c2_b1 = (c2_i47 > c2_i53);
      if (c2_b1) {
        c2_i58 = 0;
        c2_i60 = -1;
      } else {
        c2_i57 = c2_regionIndices->size[0];
        if ((c2_i47 < 1) || (c2_i47 > c2_i57)) {
          emlrtDynamicBoundsCheckR2012b(c2_i47, 1, c2_i57, &c2_m_emlrtBCI,
            &c2_st);
        }

        c2_i58 = c2_i47 - 1;
        c2_i66 = c2_regionIndices->size[0];
        if ((c2_i53 < 1) || (c2_i53 > c2_i66)) {
          emlrtDynamicBoundsCheckR2012b(c2_i53, 1, c2_i66, &c2_n_emlrtBCI,
            &c2_st);
        }

        c2_i60 = c2_i53 - 1;
      }

      c2_c_stats = c2_stats->size[0];
      c2_i67 = (int32_T)c2_h_k;
      if ((c2_i67 < 1) || (c2_i67 > c2_c_stats)) {
        emlrtDynamicBoundsCheckR2012b(c2_i67, 1, c2_c_stats, &c2_x_emlrtBCI,
          &c2_st);
      }

      c2_i72 = c2_i67 - 1;
      c2_i74 = c2_stats->data[c2_i72].PixelIdxList->size[0];
      c2_stats->data[c2_i72].PixelIdxList->size[0] = (c2_i60 - c2_i58) + 1;
      c2_emxEnsureCapacity_real_T1(chartInstance, &c2_st, c2_stats->data[c2_i72]
        .PixelIdxList, c2_i74, &c2_r_emlrtRTEI);
      c2_i_loop_ub = c2_i60 - c2_i58;
      for (c2_i80 = 0; c2_i80 <= c2_i_loop_ub; c2_i80++) {
        c2_i81 = (int32_T)c2_h_k;
        if ((c2_i81 < 1) || (c2_i81 > c2_c_stats)) {
          emlrtDynamicBoundsCheckR2012b(c2_i81, 1, c2_c_stats, &c2_x_emlrtBCI,
            &c2_st);
        }

        c2_stats->data[c2_i81 - 1].PixelIdxList->data[c2_i80] =
          c2_regionIndices->data[c2_i58 + c2_i80];
      }
    }

    c2_emxFree_int32_T(chartInstance, &c2_idxCount);
    c2_emxFree_real_T(chartInstance, &c2_regionIndices);
  }

  c2_emxFreeStruct_s_vX9LV7M75v5ZNol(chartInstance, &c2_CC);
  if (c2_reqStats[0] != (real_T)(int32_T)muDoubleScalarFloor(c2_reqStats[0])) {
    emlrtIntegerCheckR2012b(c2_reqStats[0], &c2_b_emlrtDCI, (void *)c2_sp);
  }

  c2_st.site = &c2_ib_emlrtRSI;
  c2_b_ComputeArea(chartInstance, &c2_st, c2_stats, &c2_statsAlreadyComputed);
  if (c2_reqStats[1] != (real_T)(int32_T)muDoubleScalarFloor(c2_reqStats[1])) {
    emlrtIntegerCheckR2012b(c2_reqStats[1], &c2_b_emlrtDCI, (void *)c2_sp);
  }

  c2_st.site = &c2_hb_emlrtRSI;
  c2_emxInit_real_T(chartInstance, &c2_st, &c2_x, 2, &c2_n_emlrtRTEI);
  if (!c2_statsAlreadyComputed.Centroid) {
    c2_statsAlreadyComputed.Centroid = true;
    c2_b_st.site = &c2_gf_emlrtRSI;
    c2_b_ComputePixelList(chartInstance, &c2_b_st, c2_stats,
                          &c2_statsAlreadyComputed);
    c2_d = (real_T)c2_stats->size[0];
    c2_i10 = (int32_T)c2_d - 1;
    c2_k = 0;
    c2_emxInit_real_T(chartInstance, &c2_st, &c2_b_x, 2, &c2_w_emlrtRTEI);
    c2_emxInit_real_T(chartInstance, &c2_st, &c2_c_x, 2, &c2_t_emlrtRTEI);
    c2_emxInit_real_T(chartInstance, &c2_st, &c2_d_x, 2, &c2_v_emlrtRTEI);
    c2_emxInit_real_T(chartInstance, &c2_st, &c2_e_x, 2, &c2_s_emlrtRTEI);
    while (c2_k <= c2_i10) {
      c2_c_k = (real_T)c2_k + 1.0;
      c2_b_st.site = &c2_hf_emlrtRSI;
      c2_i15 = c2_stats->size[0];
      c2_i17 = (int32_T)c2_c_k;
      if ((c2_i17 < 1) || (c2_i17 > c2_i15)) {
        emlrtDynamicBoundsCheckR2012b(c2_i17, 1, c2_i15, &c2_s_emlrtBCI,
          &c2_b_st);
      }

      c2_i21 = c2_i17 - 1;
      c2_i23 = c2_x->size[0] * c2_x->size[1];
      c2_x->size[0] = c2_stats->data[c2_i21].PixelList->size[0];
      c2_x->size[1] = 2;
      c2_emxEnsureCapacity_real_T(chartInstance, &c2_b_st, c2_x, c2_i23,
        &c2_n_emlrtRTEI);
      c2_i26 = c2_stats->size[0];
      c2_i27 = (int32_T)c2_c_k;
      if ((c2_i27 < 1) || (c2_i27 > c2_i26)) {
        emlrtDynamicBoundsCheckR2012b(c2_i27, 1, c2_i26, &c2_s_emlrtBCI,
          &c2_b_st);
      }

      c2_i31 = c2_i27 - 1;
      c2_i32 = c2_stats->size[0];
      c2_i36 = (int32_T)c2_c_k;
      if ((c2_i36 < 1) || (c2_i36 > c2_i32)) {
        emlrtDynamicBoundsCheckR2012b(c2_i36, 1, c2_i32, &c2_s_emlrtBCI,
          &c2_b_st);
      }

      c2_i39 = c2_i36 - 1;
      c2_g_loop_ub = c2_stats->data[c2_i31].PixelList->size[0] * c2_stats->
        data[c2_i39].PixelList->size[1] - 1;
      for (c2_i42 = 0; c2_i42 <= c2_g_loop_ub; c2_i42++) {
        c2_i45 = c2_stats->size[0];
        c2_i46 = (int32_T)c2_c_k;
        if ((c2_i46 < 1) || (c2_i46 > c2_i45)) {
          emlrtDynamicBoundsCheckR2012b(c2_i46, 1, c2_i45, &c2_bb_emlrtBCI,
            &c2_b_st);
        }

        c2_x->data[c2_i42] = c2_stats->data[c2_i46 - 1].PixelList->data[c2_i42];
      }

      c2_c_st.site = &c2_if_emlrtRSI;
      c2_vlen = c2_x->size[0];
      c2_d_st.site = &c2_dc_emlrtRSI;
      c2_b_vlen = c2_vlen;
      c2_b = (c2_x->size[0] == 0);
      if (c2_b || (c2_b_vlen == 0)) {
        for (c2_i52 = 0; c2_i52 < 2; c2_i52++) {
          c2_f_y[c2_i52] = 0.0;
        }
      } else {
        c2_e_st.site = &c2_ec_emlrtRSI;
        c2_c_vlen = c2_b_vlen;
        c2_f_st.site = &c2_fc_emlrtRSI;
        c2_d_vlen = c2_c_vlen;
        if (c2_d_vlen < 4096) {
          for (c2_col = 0; c2_col < 2; c2_col++) {
            c2_b_col = c2_col;
            c2_i69 = c2_e_x->size[0] * c2_e_x->size[1];
            c2_e_x->size[0] = c2_x->size[0];
            c2_e_x->size[1] = 2;
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_e_x, c2_i69,
              &c2_s_emlrtRTEI);
            c2_h_loop_ub = c2_x->size[0] * c2_x->size[1] - 1;
            for (c2_i77 = 0; c2_i77 <= c2_h_loop_ub; c2_i77++) {
              c2_e_x->data[c2_i77] = c2_x->data[c2_i77];
            }

            c2_g_st.site = &c2_gc_emlrtRSI;
            c2_f_y[c2_b_col] = c2_c_sumColumnB(chartInstance, &c2_g_st, c2_e_x,
              c2_b_col + 1, c2_d_vlen);
          }
        } else {
          c2_a = c2_d_vlen;
          c2_nfb = c2_div_nzp_s32(chartInstance, c2_a, 4096, 0, 1U, 0, 0);
          c2_inb = c2_nfb << 12;
          c2_lidx = c2_inb;
          c2_nleft = c2_d_vlen - c2_inb;
          for (c2_c_col = 0; c2_c_col < 2; c2_c_col++) {
            c2_b_col = c2_c_col + 1;
            c2_i76 = c2_c_x->size[0] * c2_c_x->size[1];
            c2_c_x->size[0] = c2_x->size[0];
            c2_c_x->size[1] = 2;
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_c_x, c2_i76,
              &c2_t_emlrtRTEI);
            c2_j_loop_ub = c2_x->size[0] * c2_x->size[1] - 1;
            for (c2_i82 = 0; c2_i82 <= c2_j_loop_ub; c2_i82++) {
              c2_c_x->data[c2_i82] = c2_x->data[c2_i82];
            }

            c2_s = c2_b_sumColumnB4(chartInstance, c2_c_x, c2_b_col, 1);
            c2_g_st.site = &c2_hc_emlrtRSI;
            c2_b_b = c2_nfb;
            c2_c_b = c2_b_b;
            if (2 > c2_c_b) {
              c2_overflow = false;
            } else {
              c2_overflow = (c2_c_b > 2147483646);
            }

            if (c2_overflow) {
              c2_h_st.site = &c2_ac_emlrtRSI;
              c2_check_forloop_overflow_error(chartInstance, &c2_h_st);
            }

            for (c2_ib = 1; c2_ib < c2_nfb; c2_ib++) {
              c2_i91 = c2_d_x->size[0] * c2_d_x->size[1];
              c2_d_x->size[0] = c2_x->size[0];
              c2_d_x->size[1] = 2;
              c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_d_x,
                c2_i91, &c2_v_emlrtRTEI);
              c2_k_loop_ub = c2_x->size[0] * c2_x->size[1] - 1;
              for (c2_i95 = 0; c2_i95 <= c2_k_loop_ub; c2_i95++) {
                c2_d_x->data[c2_i95] = c2_x->data[c2_i95];
              }

              c2_s += c2_b_sumColumnB4(chartInstance, c2_d_x, c2_b_col, 1 +
                (c2_ib << 12));
            }

            if (c2_nleft > 0) {
              c2_i92 = c2_b_x->size[0] * c2_b_x->size[1];
              c2_b_x->size[0] = c2_x->size[0];
              c2_b_x->size[1] = 2;
              c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_x,
                c2_i92, &c2_w_emlrtRTEI);
              c2_l_loop_ub = c2_x->size[0] * c2_x->size[1] - 1;
              for (c2_i96 = 0; c2_i96 <= c2_l_loop_ub; c2_i96++) {
                c2_b_x->data[c2_i96] = c2_x->data[c2_i96];
              }

              c2_g_st.site = &c2_ic_emlrtRSI;
              c2_s += c2_d_sumColumnB(chartInstance, &c2_g_st, c2_b_x, c2_b_col,
                c2_nleft, c2_lidx + 1);
            }

            c2_f_y[c2_b_col - 1] = c2_s;
          }
        }
      }

      c2_i_x = (real_T)c2_x->size[0];
      c2_b_stats = c2_stats->size[0];
      for (c2_i61 = 0; c2_i61 < 2; c2_i61++) {
        c2_i65 = (int32_T)c2_c_k;
        if ((c2_i65 < 1) || (c2_i65 > c2_b_stats)) {
          emlrtDynamicBoundsCheckR2012b(c2_i65, 1, c2_b_stats, &c2_ab_emlrtBCI,
            &c2_b_st);
        }

        c2_stats->data[c2_i65 - 1].Centroid[c2_i61] = c2_f_y[c2_i61] / c2_i_x;
      }

      c2_k++;
    }

    c2_emxFree_real_T(chartInstance, &c2_e_x);
    c2_emxFree_real_T(chartInstance, &c2_d_x);
    c2_emxFree_real_T(chartInstance, &c2_c_x);
    c2_emxFree_real_T(chartInstance, &c2_b_x);
  }

  if (c2_reqStats[2] != (real_T)(int32_T)muDoubleScalarFloor(c2_reqStats[2])) {
    emlrtIntegerCheckR2012b(c2_reqStats[2], &c2_b_emlrtDCI, (void *)c2_sp);
  }

  c2_st.site = &c2_gb_emlrtRSI;
  if (!c2_statsAlreadyComputed.EquivDiameter) {
    c2_statsAlreadyComputed.EquivDiameter = true;
    c2_b_st.site = &c2_pf_emlrtRSI;
    c2_b_ComputeArea(chartInstance, &c2_b_st, c2_stats, &c2_statsAlreadyComputed);
    c2_d1 = (real_T)c2_stats->size[0];
    c2_i11 = (int32_T)c2_d1 - 1;
    for (c2_b_k = 0; c2_b_k <= c2_i11; c2_b_k++) {
      c2_e_k = (real_T)c2_b_k + 1.0;
      c2_b_st.site = &c2_qf_emlrtRSI;
      c2_i16 = c2_stats->size[0];
      c2_i18 = (int32_T)c2_e_k;
      if ((c2_i18 < 1) || (c2_i18 > c2_i16)) {
        emlrtDynamicBoundsCheckR2012b(c2_i18, 1, c2_i16, &c2_u_emlrtBCI,
          &c2_b_st);
      }

      c2_f_x = c2_stats->data[c2_i18 - 1].Area;
      c2_g_x = c2_f_x;
      c2_h_x = c2_g_x;
      if (c2_h_x < 0.0) {
        c2_p = true;
      } else {
        c2_p = false;
      }

      c2_b_p = c2_p;
      if (c2_b_p) {
        c2_c_y = NULL;
        sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c2_d_y = NULL;
        sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          4), false);
        sf_mex_call(&c2_b_st, &c2_q_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 2U, 14, c2_d_y, 14, c2_e_y)));
      }

      c2_g_x = muDoubleScalarSqrt(c2_g_x);
      c2_i35 = c2_stats->size[0];
      c2_i38 = (int32_T)c2_e_k;
      if ((c2_i38 < 1) || (c2_i38 > c2_i35)) {
        emlrtDynamicBoundsCheckR2012b(c2_i38, 1, c2_i35, &c2_y_emlrtBCI, &c2_st);
      }

      c2_stats->data[c2_i38 - 1].EquivDiameter = 1.1283791670955126 * c2_g_x;
    }
  }

  if (c2_reqStats[3] != (real_T)(int32_T)muDoubleScalarFloor(c2_reqStats[3])) {
    emlrtIntegerCheckR2012b(c2_reqStats[3], &c2_b_emlrtDCI, (void *)c2_sp);
  }

  c2_st.site = &c2_fb_emlrtRSI;
  c2_b_ComputePixelList(chartInstance, &c2_st, c2_stats,
                        &c2_statsAlreadyComputed);
  c2_st.site = &c2_eb_emlrtRSI;
  c2_d2 = (real_T)c2_stats->size[0];
  c2_i13 = (int32_T)c2_d2 - 1;
  for (c2_d_k = 0; c2_d_k <= c2_i13; c2_d_k++) {
    c2_f_k = (real_T)c2_d_k + 1.0;
    c2_i19 = c2_stats->size[0];
    c2_i20 = (int32_T)c2_f_k;
    if ((c2_i20 < 1) || (c2_i20 > c2_i19)) {
      emlrtDynamicBoundsCheckR2012b(c2_i20, 1, c2_i19, &c2_o_emlrtBCI, &c2_st);
    }

    c2_i24 = c2_outstats->size[0];
    c2_i25 = (int32_T)c2_f_k;
    if ((c2_i25 < 1) || (c2_i25 > c2_i24)) {
      emlrtDynamicBoundsCheckR2012b(c2_i25, 1, c2_i24, &c2_p_emlrtBCI, &c2_st);
    }

    c2_i29 = c2_stats->size[0];
    c2_i30 = (int32_T)c2_f_k;
    if ((c2_i30 < 1) || (c2_i30 > c2_i29)) {
      emlrtDynamicBoundsCheckR2012b(c2_i30, 1, c2_i29, &c2_v_emlrtBCI, &c2_st);
    }

    c2_i34 = c2_outstats->size[0];
    c2_i37 = (int32_T)c2_f_k;
    if ((c2_i37 < 1) || (c2_i37 > c2_i34)) {
      emlrtDynamicBoundsCheckR2012b(c2_i37, 1, c2_i34, &c2_w_emlrtBCI, &c2_st);
    }

    c2_outstats->data[c2_i37 - 1].Area = c2_stats->data[c2_i30 - 1].Area;
    c2_i41 = c2_stats->size[0];
    c2_i44 = (int32_T)c2_f_k;
    if ((c2_i44 < 1) || (c2_i44 > c2_i41)) {
      emlrtDynamicBoundsCheckR2012b(c2_i44, 1, c2_i41, &c2_o_emlrtBCI, &c2_st);
    }

    c2_i48 = c2_outstats->size[0];
    c2_i50 = (int32_T)c2_f_k;
    if ((c2_i50 < 1) || (c2_i50 > c2_i48)) {
      emlrtDynamicBoundsCheckR2012b(c2_i50, 1, c2_i48, &c2_p_emlrtBCI, &c2_st);
    }

    for (c2_vIdx = 0; c2_vIdx < 2; c2_vIdx++) {
      c2_b_vIdx = (real_T)c2_vIdx + 1.0;
      c2_i56 = c2_stats->size[0];
      c2_i59 = (int32_T)c2_f_k;
      if ((c2_i59 < 1) || (c2_i59 > c2_i56)) {
        emlrtDynamicBoundsCheckR2012b(c2_i59, 1, c2_i56, &c2_t_emlrtBCI, &c2_st);
      }

      c2_i64 = c2_i59 - 1;
      c2_i68 = c2_outstats->size[0];
      c2_i70 = (int32_T)c2_f_k;
      if ((c2_i70 < 1) || (c2_i70 > c2_i68)) {
        emlrtDynamicBoundsCheckR2012b(c2_i70, 1, c2_i68, &c2_r_emlrtBCI, &c2_st);
      }

      c2_i75 = c2_i70 - 1;
      c2_outstats->data[c2_i75].Centroid[(int32_T)c2_b_vIdx - 1] =
        c2_stats->data[c2_i64].Centroid[(int32_T)c2_b_vIdx - 1];
    }

    c2_i54 = c2_stats->size[0];
    c2_i55 = (int32_T)c2_f_k;
    if ((c2_i55 < 1) || (c2_i55 > c2_i54)) {
      emlrtDynamicBoundsCheckR2012b(c2_i55, 1, c2_i54, &c2_o_emlrtBCI, &c2_st);
    }

    c2_i62 = c2_outstats->size[0];
    c2_i63 = (int32_T)c2_f_k;
    if ((c2_i63 < 1) || (c2_i63 > c2_i62)) {
      emlrtDynamicBoundsCheckR2012b(c2_i63, 1, c2_i62, &c2_p_emlrtBCI, &c2_st);
    }

    c2_i71 = c2_stats->size[0];
    c2_i73 = (int32_T)c2_f_k;
    if ((c2_i73 < 1) || (c2_i73 > c2_i71)) {
      emlrtDynamicBoundsCheckR2012b(c2_i73, 1, c2_i71, &c2_v_emlrtBCI, &c2_st);
    }

    c2_i78 = c2_outstats->size[0];
    c2_i79 = (int32_T)c2_f_k;
    if ((c2_i79 < 1) || (c2_i79 > c2_i78)) {
      emlrtDynamicBoundsCheckR2012b(c2_i79, 1, c2_i78, &c2_w_emlrtBCI, &c2_st);
    }

    c2_outstats->data[c2_i79 - 1].EquivDiameter = c2_stats->data[c2_i73 - 1].
      EquivDiameter;
    c2_i83 = c2_outstats->size[0];
    c2_i84 = (int32_T)c2_f_k;
    if ((c2_i84 < 1) || (c2_i84 > c2_i83)) {
      emlrtDynamicBoundsCheckR2012b(c2_i84, 1, c2_i83, &c2_q_emlrtBCI, &c2_st);
    }

    c2_i85 = c2_i84;
    c2_i86 = c2_outstats->data[c2_i85 - 1].PixelList->size[0] *
      c2_outstats->data[c2_i85 - 1].PixelList->size[1];
    c2_i87 = c2_stats->size[0];
    c2_i88 = (int32_T)c2_f_k;
    if ((c2_i88 < 1) || (c2_i88 > c2_i87)) {
      emlrtDynamicBoundsCheckR2012b(c2_i88, 1, c2_i87, &c2_cb_emlrtBCI, &c2_st);
    }

    c2_outstats->data[c2_i85 - 1].PixelList->size[0] = c2_stats->data[c2_i88 - 1]
      .PixelList->size[0];
    c2_i89 = c2_stats->size[0];
    c2_i90 = (int32_T)c2_f_k;
    if ((c2_i90 < 1) || (c2_i90 > c2_i89)) {
      emlrtDynamicBoundsCheckR2012b(c2_i90, 1, c2_i89, &c2_cb_emlrtBCI, &c2_st);
    }

    c2_outstats->data[c2_i85 - 1].PixelList->size[1] = c2_stats->data[c2_i90 - 1]
      .PixelList->size[1];
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_outstats->data[c2_i85
      - 1].PixelList, c2_i86, &c2_p_emlrtRTEI);
    c2_i93 = c2_outstats->size[0];
    c2_i94 = (int32_T)c2_f_k;
    if ((c2_i94 < 1) || (c2_i94 > c2_i93)) {
      emlrtDynamicBoundsCheckR2012b(c2_i94, 1, c2_i93, &c2_p_emlrtBCI, &c2_st);
    }

    c2_i97 = c2_i94 - 1;
    c2_i98 = c2_x->size[0] * c2_x->size[1];
    c2_x->size[0] = c2_outstats->data[c2_i97].PixelList->size[0];
    c2_x->size[1] = 2;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i98,
      &c2_q_emlrtRTEI);
    c2_i99 = c2_outstats->size[0];
    c2_i100 = (int32_T)c2_f_k;
    if ((c2_i100 < 1) || (c2_i100 > c2_i99)) {
      emlrtDynamicBoundsCheckR2012b(c2_i100, 1, c2_i99, &c2_p_emlrtBCI, &c2_st);
    }

    c2_i101 = c2_i100 - 1;
    c2_i102 = c2_outstats->size[0];
    c2_i103 = (int32_T)c2_f_k;
    if ((c2_i103 < 1) || (c2_i103 > c2_i102)) {
      emlrtDynamicBoundsCheckR2012b(c2_i103, 1, c2_i102, &c2_p_emlrtBCI, &c2_st);
    }

    c2_i104 = c2_i103 - 1;
    c2_m_loop_ub = c2_outstats->data[c2_i101].PixelList->size[0] *
      c2_outstats->data[c2_i104].PixelList->size[1] - 1;
    for (c2_i105 = 0; c2_i105 <= c2_m_loop_ub; c2_i105++) {
      c2_i106 = c2_outstats->size[0];
      c2_i108 = (int32_T)c2_f_k;
      if ((c2_i108 < 1) || (c2_i108 > c2_i106)) {
        emlrtDynamicBoundsCheckR2012b(c2_i108, 1, c2_i106, &c2_db_emlrtBCI,
          &c2_st);
      }

      c2_x->data[c2_i105] = c2_outstats->data[c2_i108 - 1].PixelList->
        data[c2_i105];
    }

    c2_d4 = (real_T)(c2_x->size[0] << 1);
    c2_i107 = (int32_T)c2_d4 - 1;
    for (c2_c_vIdx = 0; c2_c_vIdx <= c2_i107; c2_c_vIdx++) {
      c2_b_vIdx = (real_T)c2_c_vIdx + 1.0;
      c2_i109 = c2_stats->size[0];
      c2_i110 = (int32_T)c2_f_k;
      if ((c2_i110 < 1) || (c2_i110 > c2_i109)) {
        emlrtDynamicBoundsCheckR2012b(c2_i110, 1, c2_i109, &c2_t_emlrtBCI,
          &c2_st);
      }

      c2_i111 = c2_i110 - 1;
      c2_i112 = c2_x->size[0] * c2_x->size[1];
      c2_x->size[0] = c2_stats->data[c2_i111].PixelList->size[0];
      c2_x->size[1] = 2;
      c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i112,
        &c2_u_emlrtRTEI);
      c2_i113 = c2_stats->size[0];
      c2_i114 = (int32_T)c2_f_k;
      if ((c2_i114 < 1) || (c2_i114 > c2_i113)) {
        emlrtDynamicBoundsCheckR2012b(c2_i114, 1, c2_i113, &c2_t_emlrtBCI,
          &c2_st);
      }

      c2_i115 = c2_i114 - 1;
      c2_i116 = c2_stats->size[0];
      c2_i117 = (int32_T)c2_f_k;
      if ((c2_i117 < 1) || (c2_i117 > c2_i116)) {
        emlrtDynamicBoundsCheckR2012b(c2_i117, 1, c2_i116, &c2_t_emlrtBCI,
          &c2_st);
      }

      c2_i118 = c2_i117 - 1;
      c2_n_loop_ub = c2_stats->data[c2_i115].PixelList->size[0] * c2_stats->
        data[c2_i118].PixelList->size[1] - 1;
      for (c2_i119 = 0; c2_i119 <= c2_n_loop_ub; c2_i119++) {
        c2_i121 = c2_stats->size[0];
        c2_i123 = (int32_T)c2_f_k;
        if ((c2_i123 < 1) || (c2_i123 > c2_i121)) {
          emlrtDynamicBoundsCheckR2012b(c2_i123, 1, c2_i121, &c2_v_emlrtBCI,
            &c2_st);
        }

        c2_x->data[c2_i119] = c2_stats->data[c2_i123 - 1].PixelList->
          data[c2_i119];
      }

      c2_i120 = c2_outstats->size[0];
      c2_i122 = (int32_T)c2_f_k;
      if ((c2_i122 < 1) || (c2_i122 > c2_i120)) {
        emlrtDynamicBoundsCheckR2012b(c2_i122, 1, c2_i120, &c2_r_emlrtBCI,
          &c2_st);
      }

      c2_i124 = c2_i122 - 1;
      c2_i125 = c2_x->size[0] << 1;
      c2_i126 = (int32_T)c2_b_vIdx;
      if ((c2_i126 < 1) || (c2_i126 > c2_i125)) {
        emlrtDynamicBoundsCheckR2012b(c2_i126, 1, c2_i125, &c2_v_emlrtBCI,
          &c2_st);
      }

      c2_i127 = c2_outstats->data[c2_i124].PixelList->size[0] << 1;
      c2_i128 = (int32_T)c2_b_vIdx;
      if ((c2_i128 < 1) || (c2_i128 > c2_i127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i128, 1, c2_i127, &c2_w_emlrtBCI,
          &c2_st);
      }

      c2_outstats->data[c2_i124].PixelList->data[c2_i128 - 1] = c2_x->
        data[c2_i126 - 1];
    }
  }

  c2_emxFree_real_T(chartInstance, &c2_x);
  c2_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, &c2_stats);
}

static void c2_bwconncomp(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536],
  c2_s_vX9LV7M75v5ZNol5H5URkE *c2_CC)
{
  c2_emxArray_int32_T *c2_b_regionLengths;
  c2_emxArray_int32_T *c2_b_x;
  c2_emxArray_int32_T *c2_c_regionLengths;
  c2_emxArray_int32_T *c2_d_regionLengths;
  c2_emxArray_int32_T *c2_e_regionLengths;
  c2_emxArray_int32_T *c2_endRow;
  c2_emxArray_int32_T *c2_idxCount;
  c2_emxArray_int32_T *c2_labelsRenumbered;
  c2_emxArray_int32_T *c2_regionLengths;
  c2_emxArray_int32_T *c2_startCol;
  c2_emxArray_int32_T *c2_startRow;
  c2_emxArray_int32_T *c2_x;
  c2_emxArray_real_T *c2_pixelIdxList;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_st;
  real_T c2_b_col;
  real_T c2_b_k;
  real_T c2_b_y;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d_col;
  real_T c2_numComponents;
  real_T c2_s;
  int32_T c2_iv[1];
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_a;
  int32_T c2_b_b;
  int32_T c2_b_c;
  int32_T c2_b_loop_ub;
  int32_T c2_b_node;
  int32_T c2_b_p;
  int32_T c2_b_root_k;
  int32_T c2_b_root_p;
  int32_T c2_b_vlen;
  int32_T c2_c;
  int32_T c2_c_a;
  int32_T c2_c_b;
  int32_T c2_c_col;
  int32_T c2_c_k;
  int32_T c2_c_loop_ub;
  int32_T c2_c_p;
  int32_T c2_c_vlen;
  int32_T c2_col;
  int32_T c2_column_offset;
  int32_T c2_currentColumn;
  int32_T c2_d_a;
  int32_T c2_d_b;
  int32_T c2_d_k;
  int32_T c2_d_loop_ub;
  int32_T c2_d_vlen;
  int32_T c2_dim;
  int32_T c2_e_a;
  int32_T c2_e_b;
  int32_T c2_e_k;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_a;
  int32_T c2_f_b;
  int32_T c2_f_k;
  int32_T c2_f_loop_ub;
  int32_T c2_firstRunOnPreviousColumn;
  int32_T c2_firstRunOnThisColumn;
  int32_T c2_g_b;
  int32_T c2_g_k;
  int32_T c2_g_loop_ub;
  int32_T c2_h_b;
  int32_T c2_h_k;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i6;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i64;
  int32_T c2_i65;
  int32_T c2_i66;
  int32_T c2_i67;
  int32_T c2_i68;
  int32_T c2_i69;
  int32_T c2_i7;
  int32_T c2_i70;
  int32_T c2_i71;
  int32_T c2_i72;
  int32_T c2_i73;
  int32_T c2_i74;
  int32_T c2_i75;
  int32_T c2_i76;
  int32_T c2_i77;
  int32_T c2_i78;
  int32_T c2_i79;
  int32_T c2_i8;
  int32_T c2_i80;
  int32_T c2_i81;
  int32_T c2_i82;
  int32_T c2_i83;
  int32_T c2_i84;
  int32_T c2_i85;
  int32_T c2_i9;
  int32_T c2_i_b;
  int32_T c2_i_k;
  int32_T c2_i_loop_ub;
  int32_T c2_ib;
  int32_T c2_idx;
  int32_T c2_inb;
  int32_T c2_j_b;
  int32_T c2_j_loop_ub;
  int32_T c2_k;
  int32_T c2_k_loop_ub;
  int32_T c2_lastRunOnPreviousColumn;
  int32_T c2_lidx;
  int32_T c2_loop_ub;
  int32_T c2_nextLabel;
  int32_T c2_nfb;
  int32_T c2_nleft;
  int32_T c2_node;
  int32_T c2_numRuns;
  int32_T c2_p;
  int32_T c2_root_k;
  int32_T c2_root_p;
  int32_T c2_row;
  int32_T c2_rowidx;
  int32_T c2_runCounter;
  int32_T c2_vlen;
  boolean_T c2_b_overflow;
  boolean_T c2_c_overflow;
  boolean_T c2_d_overflow;
  boolean_T c2_e_overflow;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_tb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  c2_numRuns = 0;
  for (c2_col = 0; c2_col < 256; c2_col++) {
    c2_b_col = (real_T)c2_col + 1.0;
    if (c2_c_varargin_1[((int32_T)c2_b_col - 1) << 8]) {
      c2_numRuns++;
    }

    for (c2_k = 0; c2_k < 255; c2_k++) {
      c2_b_k = (real_T)c2_k + 2.0;
      if (c2_c_varargin_1[((int32_T)c2_b_k + (((int32_T)c2_b_col - 1) << 8)) - 1]
          && (!c2_c_varargin_1[((int32_T)(c2_b_k - 1.0) + (((int32_T)c2_b_col -
              1) << 8)) - 1])) {
        c2_numRuns++;
      }
    }
  }

  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_regionLengths, 1,
                     &c2_rb_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_startRow, 1, &c2_tb_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_endRow, 1, &c2_ub_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_startCol, 1, &c2_vb_emlrtRTEI);
  if (c2_numRuns == 0) {
    c2_startRow->size[0] = 0;
    c2_endRow->size[0] = 0;
    c2_startCol->size[0] = 0;
    c2_regionLengths->size[0] = 0;
    c2_numRuns = 0;
  } else {
    c2_i = c2_startRow->size[0];
    c2_d = (real_T)c2_numRuns;
    if (!(c2_d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c2_d, &c2_c_emlrtDCI, &c2_st);
    }

    c2_startRow->size[0] = (int32_T)muDoubleScalarFloor(c2_d);
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_startRow, c2_i,
      &c2_eb_emlrtRTEI);
    c2_i1 = c2_endRow->size[0];
    c2_endRow->size[0] = c2_numRuns;
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_endRow, c2_i1,
      &c2_fb_emlrtRTEI);
    c2_i4 = c2_startCol->size[0];
    c2_startCol->size[0] = c2_numRuns;
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_startCol, c2_i4,
      &c2_gb_emlrtRTEI);
    c2_b_st.site = &c2_ub_emlrtRSI;
    c2_runCounter = 1;
    for (c2_c_col = 0; c2_c_col < 256; c2_c_col++) {
      c2_d_col = (real_T)c2_c_col + 1.0;
      c2_row = 1;
      while (c2_row <= 256) {
        while ((c2_row <= 256) && (!c2_c_varargin_1[(c2_row + (((int32_T)
                   c2_d_col - 1) << 8)) - 1])) {
          c2_row++;
        }

        if ((c2_row <= 256) && c2_c_varargin_1[(c2_row + (((int32_T)c2_d_col - 1)
              << 8)) - 1]) {
          c2_i8 = c2_startCol->size[0];
          if ((c2_runCounter < 1) || (c2_runCounter > c2_i8)) {
            emlrtDynamicBoundsCheckR2012b(c2_runCounter, 1, c2_i8,
              &c2_eb_emlrtBCI, &c2_b_st);
          }

          c2_startCol->data[c2_runCounter - 1] = (int32_T)c2_d_col;
          c2_i11 = c2_startRow->size[0];
          if ((c2_runCounter < 1) || (c2_runCounter > c2_i11)) {
            emlrtDynamicBoundsCheckR2012b(c2_runCounter, 1, c2_i11,
              &c2_gb_emlrtBCI, &c2_b_st);
          }

          c2_startRow->data[c2_runCounter - 1] = c2_row;
          while ((c2_row <= 256) && c2_c_varargin_1[(c2_row + (((int32_T)
                    c2_d_col - 1) << 8)) - 1]) {
            c2_row++;
          }

          c2_i16 = c2_endRow->size[0];
          if ((c2_runCounter < 1) || (c2_runCounter > c2_i16)) {
            emlrtDynamicBoundsCheckR2012b(c2_runCounter, 1, c2_i16,
              &c2_jb_emlrtBCI, &c2_b_st);
          }

          c2_endRow->data[c2_runCounter - 1] = c2_row - 1;
          c2_runCounter++;
        }
      }
    }

    c2_i6 = c2_regionLengths->size[0];
    c2_regionLengths->size[0] = c2_numRuns;
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_regionLengths, c2_i6,
      &c2_hb_emlrtRTEI);
    c2_loop_ub = c2_numRuns - 1;
    for (c2_i7 = 0; c2_i7 <= c2_loop_ub; c2_i7++) {
      c2_regionLengths->data[c2_i7] = 0;
    }

    c2_d_k = 1;
    c2_currentColumn = 2;
    c2_nextLabel = 1;
    c2_firstRunOnPreviousColumn = -1;
    c2_lastRunOnPreviousColumn = 0;
    c2_firstRunOnThisColumn = 1;
    while (c2_d_k <= c2_numRuns) {
      c2_i12 = c2_startCol->size[0];
      if ((c2_d_k < 1) || (c2_d_k > c2_i12)) {
        emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i12, &c2_fb_emlrtBCI, &c2_st);
      }

      if (c2_startCol->data[c2_d_k - 1] == c2_currentColumn) {
        c2_firstRunOnPreviousColumn = c2_firstRunOnThisColumn;
        c2_firstRunOnThisColumn = c2_d_k;
        c2_lastRunOnPreviousColumn = c2_d_k;
        c2_i20 = c2_startCol->size[0];
        if ((c2_d_k < 1) || (c2_d_k > c2_i20)) {
          emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i20, &c2_ib_emlrtBCI,
            &c2_st);
        }

        c2_currentColumn = c2_startCol->data[c2_d_k - 1] + 1;
      } else {
        c2_i18 = c2_startCol->size[0];
        if ((c2_d_k < 1) || (c2_d_k > c2_i18)) {
          emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i18, &c2_hb_emlrtBCI,
            &c2_st);
        }

        if (c2_startCol->data[c2_d_k - 1] > c2_currentColumn) {
          c2_firstRunOnPreviousColumn = -1;
          c2_lastRunOnPreviousColumn = 0;
          c2_firstRunOnThisColumn = c2_d_k;
          c2_i22 = c2_startCol->size[0];
          if ((c2_d_k < 1) || (c2_d_k > c2_i22)) {
            emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i22, &c2_lb_emlrtBCI,
              &c2_st);
          }

          c2_currentColumn = c2_startCol->data[c2_d_k - 1] + 1;
        }
      }

      if (c2_firstRunOnPreviousColumn >= 0) {
        for (c2_p = c2_firstRunOnPreviousColumn; c2_p <
             c2_lastRunOnPreviousColumn; c2_p++) {
          c2_i24 = c2_endRow->size[0];
          if ((c2_d_k < 1) || (c2_d_k > c2_i24)) {
            emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i24, &c2_rb_emlrtBCI,
              &c2_st);
          }

          c2_i26 = c2_startRow->size[0];
          if ((c2_p < 1) || (c2_p > c2_i26)) {
            emlrtDynamicBoundsCheckR2012b(c2_p, 1, c2_i26, &c2_sb_emlrtBCI,
              &c2_st);
          }

          if (c2_endRow->data[c2_d_k - 1] >= c2_startRow->data[c2_p - 1] - 1) {
            c2_i28 = c2_startRow->size[0];
            if ((c2_d_k < 1) || (c2_d_k > c2_i28)) {
              emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i28, &c2_tb_emlrtBCI,
                &c2_st);
            }

            c2_i30 = c2_endRow->size[0];
            if ((c2_p < 1) || (c2_p > c2_i30)) {
              emlrtDynamicBoundsCheckR2012b(c2_p, 1, c2_i30, &c2_ub_emlrtBCI,
                &c2_st);
            }

            if (c2_startRow->data[c2_d_k - 1] <= c2_endRow->data[c2_p - 1] + 1)
            {
              c2_i33 = c2_regionLengths->size[0];
              if ((c2_d_k < 1) || (c2_d_k > c2_i33)) {
                emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i33, &c2_vb_emlrtBCI,
                  &c2_st);
              }

              if (c2_regionLengths->data[c2_d_k - 1] == 0) {
                c2_i36 = c2_regionLengths->size[0];
                if ((c2_p < 1) || (c2_p > c2_i36)) {
                  emlrtDynamicBoundsCheckR2012b(c2_p, 1, c2_i36, &c2_yb_emlrtBCI,
                    &c2_st);
                }

                c2_i39 = c2_regionLengths->size[0];
                if ((c2_d_k < 1) || (c2_d_k > c2_i39)) {
                  emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i39,
                    &c2_ac_emlrtBCI, &c2_st);
                }

                c2_regionLengths->data[c2_d_k - 1] = c2_regionLengths->data[c2_p
                  - 1];
                c2_nextLabel++;
              } else {
                c2_i35 = c2_regionLengths->size[0];
                if ((c2_d_k < 1) || (c2_d_k > c2_i35)) {
                  emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i35,
                    &c2_wb_emlrtBCI, &c2_st);
                }

                c2_i38 = c2_regionLengths->size[0];
                if ((c2_p < 1) || (c2_p > c2_i38)) {
                  emlrtDynamicBoundsCheckR2012b(c2_p, 1, c2_i38, &c2_xb_emlrtBCI,
                    &c2_st);
                }

                if (c2_regionLengths->data[c2_d_k - 1] != c2_regionLengths->
                    data[c2_p - 1]) {
                  c2_b_st.site = &c2_vb_emlrtRSI;
                  c2_g_k = c2_d_k;
                  c2_b_p = c2_p;
                  c2_c_st.site = &c2_wb_emlrtRSI;
                  c2_node = c2_g_k;
                  c2_root_k = c2_node;
                  do {
                    c2_exitg1 = 0;
                    c2_i45 = c2_regionLengths->size[0];
                    if ((c2_root_k < 1) || (c2_root_k > c2_i45)) {
                      emlrtDynamicBoundsCheckR2012b(c2_root_k, 1, c2_i45,
                        &c2_cc_emlrtBCI, &c2_c_st);
                    }

                    if (c2_root_k != c2_regionLengths->data[c2_root_k - 1]) {
                      c2_i46 = c2_regionLengths->size[0];
                      c2_i48 = c2_regionLengths->size[0];
                      if ((c2_root_k < 1) || (c2_root_k > c2_i48)) {
                        emlrtDynamicBoundsCheckR2012b(c2_root_k, 1, c2_i48,
                          &c2_hc_emlrtBCI, &c2_c_st);
                      }

                      c2_i49 = c2_regionLengths->data[c2_root_k - 1];
                      if ((c2_i49 < 1) || (c2_i49 > c2_i46)) {
                        emlrtDynamicBoundsCheckR2012b(c2_i49, 1, c2_i46,
                          &c2_hc_emlrtBCI, &c2_c_st);
                      }

                      c2_i52 = c2_regionLengths->size[0];
                      if ((c2_root_k < 1) || (c2_root_k > c2_i52)) {
                        emlrtDynamicBoundsCheckR2012b(c2_root_k, 1, c2_i52,
                          &c2_ic_emlrtBCI, &c2_c_st);
                      }

                      c2_regionLengths->data[c2_root_k - 1] =
                        c2_regionLengths->data[c2_i49 - 1];
                      c2_i57 = c2_regionLengths->size[0];
                      if ((c2_root_k < 1) || (c2_root_k > c2_i57)) {
                        emlrtDynamicBoundsCheckR2012b(c2_root_k, 1, c2_i57,
                          &c2_jc_emlrtBCI, &c2_c_st);
                      }

                      c2_root_k = c2_regionLengths->data[c2_root_k - 1];
                    } else {
                      c2_exitg1 = 1;
                    }
                  } while (c2_exitg1 == 0);

                  c2_c_st.site = &c2_xb_emlrtRSI;
                  c2_b_node = c2_b_p;
                  c2_root_p = c2_b_node;
                  do {
                    c2_exitg1 = 0;
                    c2_i54 = c2_regionLengths->size[0];
                    if ((c2_root_p < 1) || (c2_root_p > c2_i54)) {
                      emlrtDynamicBoundsCheckR2012b(c2_root_p, 1, c2_i54,
                        &c2_cc_emlrtBCI, &c2_c_st);
                    }

                    if (c2_root_p != c2_regionLengths->data[c2_root_p - 1]) {
                      c2_i59 = c2_regionLengths->size[0];
                      c2_i60 = c2_regionLengths->size[0];
                      if ((c2_root_p < 1) || (c2_root_p > c2_i60)) {
                        emlrtDynamicBoundsCheckR2012b(c2_root_p, 1, c2_i60,
                          &c2_hc_emlrtBCI, &c2_c_st);
                      }

                      c2_i61 = c2_regionLengths->data[c2_root_p - 1];
                      if ((c2_i61 < 1) || (c2_i61 > c2_i59)) {
                        emlrtDynamicBoundsCheckR2012b(c2_i61, 1, c2_i59,
                          &c2_hc_emlrtBCI, &c2_c_st);
                      }

                      c2_i63 = c2_regionLengths->size[0];
                      if ((c2_root_p < 1) || (c2_root_p > c2_i63)) {
                        emlrtDynamicBoundsCheckR2012b(c2_root_p, 1, c2_i63,
                          &c2_ic_emlrtBCI, &c2_c_st);
                      }

                      c2_regionLengths->data[c2_root_p - 1] =
                        c2_regionLengths->data[c2_i61 - 1];
                      c2_i66 = c2_regionLengths->size[0];
                      if ((c2_root_p < 1) || (c2_root_p > c2_i66)) {
                        emlrtDynamicBoundsCheckR2012b(c2_root_p, 1, c2_i66,
                          &c2_jc_emlrtBCI, &c2_c_st);
                      }

                      c2_root_p = c2_regionLengths->data[c2_root_p - 1];
                    } else {
                      c2_exitg1 = 1;
                    }
                  } while (c2_exitg1 == 0);

                  if (c2_root_k != c2_root_p) {
                    c2_c_st.site = &c2_yb_emlrtRSI;
                    c2_b_root_k = c2_root_k;
                    c2_b_root_p = c2_root_p;
                    c2_h_k = c2_g_k;
                    c2_c_p = c2_b_p;
                    if (c2_b_root_p < c2_b_root_k) {
                      c2_i65 = c2_regionLengths->size[0];
                      if ((c2_b_root_k < 1) || (c2_b_root_k > c2_i65)) {
                        emlrtDynamicBoundsCheckR2012b(c2_b_root_k, 1, c2_i65,
                          &c2_lc_emlrtBCI, &c2_c_st);
                      }

                      c2_regionLengths->data[c2_b_root_k - 1] = c2_b_root_p;
                      c2_i69 = c2_regionLengths->size[0];
                      if ((c2_h_k < 1) || (c2_h_k > c2_i69)) {
                        emlrtDynamicBoundsCheckR2012b(c2_h_k, 1, c2_i69,
                          &c2_nc_emlrtBCI, &c2_c_st);
                      }

                      c2_regionLengths->data[c2_h_k - 1] = c2_b_root_p;
                    } else {
                      c2_i64 = c2_regionLengths->size[0];
                      if ((c2_b_root_p < 1) || (c2_b_root_p > c2_i64)) {
                        emlrtDynamicBoundsCheckR2012b(c2_b_root_p, 1, c2_i64,
                          &c2_kc_emlrtBCI, &c2_c_st);
                      }

                      c2_regionLengths->data[c2_b_root_p - 1] = c2_b_root_k;
                      c2_i68 = c2_regionLengths->size[0];
                      if ((c2_c_p < 1) || (c2_c_p > c2_i68)) {
                        emlrtDynamicBoundsCheckR2012b(c2_c_p, 1, c2_i68,
                          &c2_mc_emlrtBCI, &c2_c_st);
                      }

                      c2_regionLengths->data[c2_c_p - 1] = c2_b_root_k;
                    }
                  }
                }
              }
            }
          }
        }
      }

      c2_i23 = c2_regionLengths->size[0];
      if ((c2_d_k < 1) || (c2_d_k > c2_i23)) {
        emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i23, &c2_mb_emlrtBCI, &c2_st);
      }

      if (c2_regionLengths->data[c2_d_k - 1] == 0) {
        c2_i25 = c2_regionLengths->size[0];
        if ((c2_d_k < 1) || (c2_d_k > c2_i25)) {
          emlrtDynamicBoundsCheckR2012b(c2_d_k, 1, c2_i25, &c2_qb_emlrtBCI,
            &c2_st);
        }

        c2_regionLengths->data[c2_d_k - 1] = c2_nextLabel;
        c2_nextLabel++;
      }

      c2_d_k++;
    }
  }

  if (c2_numRuns == 0) {
    c2_CC->Connectivity = 8.0;
    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_CC->ImageSize[c2_i3] = 256.0;
    }

    c2_CC->NumObjects = 0.0;
    c2_CC->RegionIndices->size[0] = 0;
    c2_i5 = c2_CC->RegionLengths->size[0];
    c2_CC->RegionLengths->size[0] = 1;
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_CC->RegionLengths,
      c2_i5, &c2_jb_emlrtRTEI);
    c2_CC->RegionLengths->data[0] = 0;
  } else {
    c2_emxInit_int32_T(chartInstance, c2_sp, &c2_labelsRenumbered, 1,
                       &c2_sb_emlrtRTEI);
    c2_i2 = c2_labelsRenumbered->size[0];
    c2_labelsRenumbered->size[0] = c2_regionLengths->size[0];
    c2_st.site = &c2_ok_emlrtRSI;
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_labelsRenumbered,
      c2_i2, &c2_ib_emlrtRTEI);
    c2_numComponents = 0.0;
    c2_st.site = &c2_sb_emlrtRSI;
    c2_b = c2_numRuns;
    c2_b_b = c2_b;
    if (1 > c2_b_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_b_b > 2147483646);
    }

    if (c2_overflow) {
      c2_b_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
    }

    for (c2_c_k = 1; c2_c_k - 1 < c2_numRuns; c2_c_k++) {
      c2_e_k = c2_c_k;
      c2_i10 = c2_regionLengths->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i10)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i10, &c2_kb_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_regionLengths->data[c2_e_k - 1] == c2_e_k) {
        c2_numComponents++;
        c2_i14 = c2_labelsRenumbered->size[0];
        if ((c2_e_k < 1) || (c2_e_k > c2_i14)) {
          emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i14, &c2_pb_emlrtBCI,
            (void *)c2_sp);
        }

        c2_labelsRenumbered->data[c2_e_k - 1] = (int32_T)c2_numComponents;
      }

      c2_i13 = c2_labelsRenumbered->size[0];
      c2_i15 = c2_regionLengths->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i15)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i15, &c2_nb_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i19 = c2_regionLengths->data[c2_e_k - 1];
      if ((c2_i19 < 1) || (c2_i19 > c2_i13)) {
        emlrtDynamicBoundsCheckR2012b(c2_i19, 1, c2_i13, &c2_nb_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i21 = c2_labelsRenumbered->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i21)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i21, &c2_ob_emlrtBCI, (void *)
          c2_sp);
      }

      c2_labelsRenumbered->data[c2_e_k - 1] = c2_labelsRenumbered->data[c2_i19 -
        1];
    }

    c2_i9 = c2_regionLengths->size[0];
    if (c2_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c2_numComponents)) {
      emlrtIntegerCheckR2012b(c2_numComponents, &c2_d_emlrtDCI, (void *)c2_sp);
    }

    c2_regionLengths->size[0] = (int32_T)c2_numComponents;
    c2_st.site = &c2_nk_emlrtRSI;
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_regionLengths, c2_i9,
      &c2_kb_emlrtRTEI);
    if (c2_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c2_numComponents)) {
      emlrtIntegerCheckR2012b(c2_numComponents, &c2_d_emlrtDCI, (void *)c2_sp);
    }

    c2_b_loop_ub = (int32_T)c2_numComponents - 1;
    for (c2_i17 = 0; c2_i17 <= c2_b_loop_ub; c2_i17++) {
      c2_regionLengths->data[c2_i17] = 0;
    }

    c2_st.site = &c2_rb_emlrtRSI;
    c2_c_b = c2_numRuns;
    c2_d_b = c2_c_b;
    if (1 > c2_d_b) {
      c2_b_overflow = false;
    } else {
      c2_b_overflow = (c2_d_b > 2147483646);
    }

    if (c2_b_overflow) {
      c2_b_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
    }

    for (c2_f_k = 1; c2_f_k - 1 < c2_numRuns; c2_f_k++) {
      c2_e_k = c2_f_k;
      c2_i27 = c2_labelsRenumbered->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i27)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i27, &c2_bc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_idx = c2_labelsRenumbered->data[c2_e_k - 1];
      c2_i29 = c2_regionLengths->size[0];
      if ((c2_idx < 1) || (c2_idx > c2_i29)) {
        emlrtDynamicBoundsCheckR2012b(c2_idx, 1, c2_i29, &c2_dc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i31 = c2_endRow->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i31)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i31, &c2_ec_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i32 = c2_startRow->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i32)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i32, &c2_fc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i34 = c2_regionLengths->size[0];
      if ((c2_idx < 1) || (c2_idx > c2_i34)) {
        emlrtDynamicBoundsCheckR2012b(c2_idx, 1, c2_i34, &c2_gc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_regionLengths->data[c2_idx - 1] = ((c2_regionLengths->data[c2_idx - 1]
        + c2_endRow->data[c2_e_k - 1]) - c2_startRow->data[c2_e_k - 1]) + 1;
    }

    c2_st.site = &c2_qb_emlrtRSI;
    c2_b_st.site = &c2_bc_emlrtRSI;
    c2_c_st.site = &c2_cc_emlrtRSI;
    c2_vlen = c2_regionLengths->size[0];
    c2_d_st.site = &c2_dc_emlrtRSI;
    c2_b_vlen = c2_vlen;
    c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_b_regionLengths, 1,
                       &c2_w_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_c_regionLengths, 1,
                       &c2_t_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_d_regionLengths, 1,
                       &c2_v_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_e_regionLengths, 1,
                       &c2_s_emlrtRTEI);
    if ((c2_regionLengths->size[0] == 0) || (c2_b_vlen == 0)) {
      c2_b_y = 0.0;
    } else {
      c2_e_st.site = &c2_ec_emlrtRSI;
      c2_c_vlen = c2_b_vlen;
      c2_f_st.site = &c2_fc_emlrtRSI;
      c2_d_vlen = c2_c_vlen;
      if (c2_d_vlen < 4096) {
        c2_i37 = c2_e_regionLengths->size[0];
        c2_e_regionLengths->size[0] = c2_regionLengths->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_e_regionLengths,
          c2_i37, &c2_s_emlrtRTEI);
        c2_c_loop_ub = c2_regionLengths->size[0] - 1;
        for (c2_i40 = 0; c2_i40 <= c2_c_loop_ub; c2_i40++) {
          c2_e_regionLengths->data[c2_i40] = c2_regionLengths->data[c2_i40];
        }

        c2_g_st.site = &c2_gc_emlrtRSI;
        c2_b_y = c2_sumColumnB(chartInstance, &c2_g_st, c2_e_regionLengths,
          c2_d_vlen);
      } else {
        c2_a = c2_d_vlen;
        c2_nfb = c2_div_nzp_s32(chartInstance, c2_a, 4096, 0, 1U, 0, 0);
        c2_inb = c2_nfb << 12;
        c2_lidx = c2_inb;
        c2_nleft = c2_d_vlen - c2_inb;
        c2_i41 = c2_c_regionLengths->size[0];
        c2_c_regionLengths->size[0] = c2_regionLengths->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_c_regionLengths,
          c2_i41, &c2_t_emlrtRTEI);
        c2_d_loop_ub = c2_regionLengths->size[0] - 1;
        for (c2_i42 = 0; c2_i42 <= c2_d_loop_ub; c2_i42++) {
          c2_c_regionLengths->data[c2_i42] = c2_regionLengths->data[c2_i42];
        }

        c2_s = c2_sumColumnB4(chartInstance, c2_c_regionLengths, 1);
        c2_g_st.site = &c2_hc_emlrtRSI;
        c2_e_b = c2_nfb;
        c2_f_b = c2_e_b;
        if (2 > c2_f_b) {
          c2_c_overflow = false;
        } else {
          c2_c_overflow = (c2_f_b > 2147483646);
        }

        if (c2_c_overflow) {
          c2_h_st.site = &c2_ac_emlrtRSI;
          c2_check_forloop_overflow_error(chartInstance, &c2_h_st);
        }

        for (c2_ib = 1; c2_ib < c2_nfb; c2_ib++) {
          c2_i50 = c2_d_regionLengths->size[0];
          c2_d_regionLengths->size[0] = c2_regionLengths->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st,
            c2_d_regionLengths, c2_i50, &c2_v_emlrtRTEI);
          c2_f_loop_ub = c2_regionLengths->size[0] - 1;
          for (c2_i55 = 0; c2_i55 <= c2_f_loop_ub; c2_i55++) {
            c2_d_regionLengths->data[c2_i55] = c2_regionLengths->data[c2_i55];
          }

          c2_s += c2_sumColumnB4(chartInstance, c2_d_regionLengths, 1 + (c2_ib <<
            12));
        }

        if (c2_nleft > 0) {
          c2_i51 = c2_b_regionLengths->size[0];
          c2_b_regionLengths->size[0] = c2_regionLengths->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st,
            c2_b_regionLengths, c2_i51, &c2_w_emlrtRTEI);
          c2_g_loop_ub = c2_regionLengths->size[0] - 1;
          for (c2_i56 = 0; c2_i56 <= c2_g_loop_ub; c2_i56++) {
            c2_b_regionLengths->data[c2_i56] = c2_regionLengths->data[c2_i56];
          }

          c2_g_st.site = &c2_ic_emlrtRSI;
          c2_s += c2_b_sumColumnB(chartInstance, &c2_g_st, c2_b_regionLengths,
            c2_nleft, c2_lidx + 1);
        }

        c2_b_y = c2_s;
      }
    }

    c2_emxFree_int32_T(chartInstance, &c2_e_regionLengths);
    c2_emxFree_int32_T(chartInstance, &c2_d_regionLengths);
    c2_emxFree_int32_T(chartInstance, &c2_c_regionLengths);
    c2_emxFree_int32_T(chartInstance, &c2_b_regionLengths);
    c2_emxInit_real_T1(chartInstance, &c2_d_st, &c2_pixelIdxList, 1,
                       &c2_qb_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_x, 1, &c2_mb_emlrtRTEI);
    if (!(c2_b_y >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c2_b_y, &c2_f_emlrtDCI, (void *)c2_sp);
    }

    c2_d1 = c2_b_y;
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_e_emlrtDCI, (void *)c2_sp);
    }

    c2_iv[0] = (int32_T)c2_d1;
    c2_i43 = c2_pixelIdxList->size[0];
    c2_pixelIdxList->size[0] = c2_iv[0];
    c2_st.site = &c2_kk_emlrtRSI;
    c2_emxEnsureCapacity_real_T1(chartInstance, &c2_st, c2_pixelIdxList, c2_i43,
      &c2_lb_emlrtRTEI);
    c2_st.site = &c2_pb_emlrtRSI;
    c2_i44 = c2_x->size[0];
    c2_x->size[0] = c2_regionLengths->size[0];
    c2_b_st.site = &c2_mk_emlrtRSI;
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_x, c2_i44,
      &c2_mb_emlrtRTEI);
    c2_e_loop_ub = c2_regionLengths->size[0] - 1;
    for (c2_i47 = 0; c2_i47 <= c2_e_loop_ub; c2_i47++) {
      c2_x->data[c2_i47] = c2_regionLengths->data[c2_i47];
    }

    c2_b_st.site = &c2_pc_emlrtRSI;
    c2_dim = 2;
    if ((real_T)c2_x->size[0] != 1.0) {
      c2_dim = 1;
    }

    c2_emxInit_int32_T(chartInstance, &c2_b_st, &c2_b_x, 1, &c2_m_emlrtRTEI);
    c2_i53 = c2_b_x->size[0];
    c2_b_x->size[0] = c2_x->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_b_x, c2_i53,
      &c2_m_emlrtRTEI);
    c2_h_loop_ub = c2_x->size[0] - 1;
    for (c2_i58 = 0; c2_i58 <= c2_h_loop_ub; c2_i58++) {
      c2_b_x->data[c2_i58] = c2_x->data[c2_i58];
    }

    c2_emxInit_int32_T(chartInstance, &c2_b_st, &c2_idxCount, 1,
                       &c2_nb_emlrtRTEI);
    c2_c_st.site = &c2_qc_emlrtRSI;
    c2_useConstantDim(chartInstance, &c2_c_st, c2_b_x, c2_dim, c2_x);
    c2_i62 = c2_idxCount->size[0];
    c2_idxCount->size[0] = 1 + c2_x->size[0];
    c2_st.site = &c2_mk_emlrtRSI;
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_idxCount, c2_i62,
      &c2_nb_emlrtRTEI);
    c2_idxCount->data[0] = 0;
    c2_i_loop_ub = c2_x->size[0] - 1;
    c2_emxFree_int32_T(chartInstance, &c2_b_x);
    for (c2_i67 = 0; c2_i67 <= c2_i_loop_ub; c2_i67++) {
      c2_idxCount->data[c2_i67 + 1] = c2_x->data[c2_i67];
    }

    c2_emxFree_int32_T(chartInstance, &c2_x);
    c2_st.site = &c2_ob_emlrtRSI;
    c2_g_b = c2_numRuns;
    c2_h_b = c2_g_b;
    if (1 > c2_h_b) {
      c2_d_overflow = false;
    } else {
      c2_d_overflow = (c2_h_b > 2147483646);
    }

    if (c2_d_overflow) {
      c2_b_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
    }

    for (c2_i_k = 1; c2_i_k - 1 < c2_numRuns; c2_i_k++) {
      c2_e_k = c2_i_k;
      c2_i70 = c2_startCol->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i70)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i70, &c2_oc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_b_a = c2_startCol->data[c2_e_k - 1] - 1;
      c2_c = c2_b_a;
      c2_c_a = c2_c;
      c2_column_offset = c2_c_a << 8;
      c2_i73 = c2_labelsRenumbered->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i73)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i73, &c2_pc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_idx = c2_labelsRenumbered->data[c2_e_k - 1];
      c2_i75 = c2_startRow->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i75)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i75, &c2_qc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i77 = c2_startRow->data[c2_e_k - 1];
      c2_i78 = c2_endRow->size[0];
      if ((c2_e_k < 1) || (c2_e_k > c2_i78)) {
        emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i78, &c2_rc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i80 = c2_endRow->data[c2_e_k - 1];
      c2_st.site = &c2_nb_emlrtRSI;
      c2_d_a = c2_i77;
      c2_i_b = c2_i80;
      c2_e_a = c2_d_a;
      c2_j_b = c2_i_b;
      if (c2_e_a > c2_j_b) {
        c2_e_overflow = false;
      } else {
        c2_e_overflow = (c2_j_b > 2147483646);
      }

      if (c2_e_overflow) {
        c2_b_st.site = &c2_ac_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
      }

      for (c2_rowidx = c2_i77; c2_rowidx <= c2_i80; c2_rowidx++) {
        c2_i81 = c2_idxCount->size[0];
        if ((c2_idx < 1) || (c2_idx > c2_i81)) {
          emlrtDynamicBoundsCheckR2012b(c2_idx, 1, c2_i81, &c2_sc_emlrtBCI,
            (void *)c2_sp);
        }

        c2_f_a = c2_idxCount->data[c2_idx - 1] + 1;
        c2_b_c = c2_f_a;
        c2_i82 = c2_idxCount->size[0];
        if ((c2_idx < 1) || (c2_idx > c2_i82)) {
          emlrtDynamicBoundsCheckR2012b(c2_idx, 1, c2_i82, &c2_tc_emlrtBCI,
            (void *)c2_sp);
        }

        c2_idxCount->data[c2_idx - 1] = c2_b_c;
        c2_i83 = c2_pixelIdxList->size[0];
        c2_i84 = c2_idxCount->size[0];
        if ((c2_idx < 1) || (c2_idx > c2_i84)) {
          emlrtDynamicBoundsCheckR2012b(c2_idx, 1, c2_i84, &c2_uc_emlrtBCI,
            (void *)c2_sp);
        }

        c2_i85 = c2_idxCount->data[c2_idx - 1];
        if ((c2_i85 < 1) || (c2_i85 > c2_i83)) {
          emlrtDynamicBoundsCheckR2012b(c2_i85, 1, c2_i83, &c2_uc_emlrtBCI,
            (void *)c2_sp);
        }

        c2_pixelIdxList->data[c2_i85 - 1] = (real_T)(c2_rowidx +
          c2_column_offset);
      }
    }

    c2_emxFree_int32_T(chartInstance, &c2_idxCount);
    c2_emxFree_int32_T(chartInstance, &c2_labelsRenumbered);
    c2_CC->Connectivity = 8.0;
    for (c2_i71 = 0; c2_i71 < 2; c2_i71++) {
      c2_CC->ImageSize[c2_i71] = 256.0;
    }

    c2_CC->NumObjects = c2_numComponents;
    c2_i72 = c2_CC->RegionIndices->size[0];
    c2_CC->RegionIndices->size[0] = c2_pixelIdxList->size[0];
    c2_emxEnsureCapacity_real_T1(chartInstance, c2_sp, c2_CC->RegionIndices,
      c2_i72, &c2_ob_emlrtRTEI);
    c2_j_loop_ub = c2_pixelIdxList->size[0] - 1;
    for (c2_i74 = 0; c2_i74 <= c2_j_loop_ub; c2_i74++) {
      c2_CC->RegionIndices->data[c2_i74] = c2_pixelIdxList->data[c2_i74];
    }

    c2_emxFree_real_T(chartInstance, &c2_pixelIdxList);
    c2_i76 = c2_CC->RegionLengths->size[0];
    c2_CC->RegionLengths->size[0] = c2_regionLengths->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_CC->RegionLengths,
      c2_i76, &c2_pb_emlrtRTEI);
    c2_k_loop_ub = c2_regionLengths->size[0] - 1;
    for (c2_i79 = 0; c2_i79 <= c2_k_loop_ub; c2_i79++) {
      c2_CC->RegionLengths->data[c2_i79] = c2_regionLengths->data[c2_i79];
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_startCol);
  c2_emxFree_int32_T(chartInstance, &c2_endRow);
  c2_emxFree_int32_T(chartInstance, &c2_startRow);
  c2_emxFree_int32_T(chartInstance, &c2_regionLengths);
}

static void c2_check_forloop_overflow_error(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  static char_T c2_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c2_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  (void)chartInstance;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c2_sp, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
              sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
    (c2_sp, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
}

static real_T c2_sumColumnB(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_vlen)
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_b_y;
  real_T c2_c_y;
  real_T c2_d_y;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_b;
  int32_T c2_b_k;
  int32_T c2_b_vlen;
  int32_T c2_b_vstart;
  int32_T c2_c_b;
  int32_T c2_c_k;
  int32_T c2_c_vlen;
  int32_T c2_d_b;
  int32_T c2_d_k;
  int32_T c2_e_b;
  int32_T c2_e_k;
  int32_T c2_f_b;
  int32_T c2_f_k;
  int32_T c2_g_k;
  int32_T c2_h_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i_k;
  int32_T c2_inb;
  int32_T c2_k;
  int32_T c2_lidx;
  int32_T c2_nfb;
  int32_T c2_nleft;
  int32_T c2_vstart;
  boolean_T c2_b_overflow;
  boolean_T c2_c_overflow;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  if (c2_vlen <= 1024) {
    c2_st.site = &c2_jc_emlrtRSI;
    c2_b_vlen = c2_vlen - 1;
    c2_b_y = (real_T)c2_x->data[0];
    c2_i = c2_b_vlen;
    c2_b_st.site = &c2_oc_emlrtRSI;
    c2_b = c2_i;
    c2_b_b = c2_b;
    if (1 > c2_b_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_b_b > 2147483646);
    }

    if (c2_overflow) {
      c2_c_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
    }

    for (c2_c_k = 1; c2_c_k - 1 < c2_i; c2_c_k++) {
      c2_d_k = c2_c_k;
      c2_b_y += (real_T)c2_x->data[c2_d_k];
    }
  } else {
    c2_a = c2_vlen;
    c2_nfb = c2_div_nzp_s32(chartInstance, c2_a, 1024, 0, 1U, 0, 0);
    c2_inb = c2_nfb << 10;
    c2_st.site = &c2_kc_emlrtRSI;
    c2_b_y = (real_T)c2_x->data[0];
    c2_b_st.site = &c2_oc_emlrtRSI;
    for (c2_k = 1; c2_k - 1 < 1023; c2_k++) {
      c2_b_k = c2_k;
      c2_b_y += (real_T)c2_x->data[c2_b_k];
    }

    c2_st.site = &c2_lc_emlrtRSI;
    c2_c_b = c2_nfb;
    c2_d_b = c2_c_b;
    if (2 > c2_d_b) {
      c2_b_overflow = false;
    } else {
      c2_b_overflow = (c2_d_b > 2147483646);
    }

    if (c2_b_overflow) {
      c2_b_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
    }

    for (c2_e_k = 1; c2_e_k < c2_nfb; c2_e_k++) {
      c2_st.site = &c2_mc_emlrtRSI;
      c2_vstart = c2_e_k << 10;
      c2_c_y = (real_T)c2_x->data[c2_vstart];
      c2_b_st.site = &c2_oc_emlrtRSI;
      for (c2_f_k = 1; c2_f_k - 1 < 1023; c2_f_k++) {
        c2_g_k = c2_f_k;
        c2_c_y += (real_T)c2_x->data[c2_vstart + c2_g_k];
      }

      c2_b_y += c2_c_y;
    }

    if (c2_vlen > c2_inb) {
      c2_nleft = c2_vlen - c2_inb;
      c2_lidx = c2_inb;
      c2_st.site = &c2_nc_emlrtRSI;
      c2_c_vlen = c2_nleft - 1;
      c2_b_vstart = c2_lidx;
      c2_d_y = (real_T)c2_x->data[c2_b_vstart];
      c2_i1 = c2_c_vlen;
      c2_b_st.site = &c2_oc_emlrtRSI;
      c2_e_b = c2_i1;
      c2_f_b = c2_e_b;
      if (1 > c2_f_b) {
        c2_c_overflow = false;
      } else {
        c2_c_overflow = (c2_f_b > 2147483646);
      }

      if (c2_c_overflow) {
        c2_c_st.site = &c2_ac_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
      }

      for (c2_h_k = 1; c2_h_k - 1 < c2_i1; c2_h_k++) {
        c2_i_k = c2_h_k;
        c2_d_y += (real_T)c2_x->data[c2_b_vstart + c2_i_k];
      }

      c2_b_y += c2_d_y;
    }
  }

  return c2_b_y;
}

static real_T c2_sumColumnB4(SFc2_real_time_testInstanceStruct *chartInstance,
  c2_emxArray_int32_T *c2_x, int32_T c2_vstart)
{
  real_T c2_psum1;
  real_T c2_psum2;
  real_T c2_psum3;
  real_T c2_psum4;
  int32_T c2_b_k;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_k;
  (void)chartInstance;
  c2_i2 = c2_vstart + 1023;
  c2_i3 = c2_vstart + 2047;
  c2_i4 = c2_vstart + 3071;
  c2_psum1 = (real_T)c2_x->data[c2_vstart - 1];
  c2_psum2 = (real_T)c2_x->data[c2_i2];
  c2_psum3 = (real_T)c2_x->data[c2_i3];
  c2_psum4 = (real_T)c2_x->data[c2_i4];
  for (c2_k = 0; c2_k < 1023; c2_k++) {
    c2_b_k = c2_k + 1;
    c2_psum1 += (real_T)c2_x->data[(c2_vstart + c2_b_k) - 1];
    c2_psum2 += (real_T)c2_x->data[c2_i2 + c2_b_k];
    c2_psum3 += (real_T)c2_x->data[c2_i3 + c2_b_k];
    c2_psum4 += (real_T)c2_x->data[c2_i4 + c2_b_k];
  }

  return (c2_psum1 + c2_psum2) + (c2_psum3 + c2_psum4);
}

static real_T c2_b_sumColumnB(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_vlen, int32_T
  c2_vstart)
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_b_y;
  real_T c2_c_y;
  real_T c2_d_y;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_b;
  int32_T c2_b_k;
  int32_T c2_b_vlen;
  int32_T c2_b_vstart;
  int32_T c2_c_b;
  int32_T c2_c_k;
  int32_T c2_c_vlen;
  int32_T c2_c_vstart;
  int32_T c2_d_b;
  int32_T c2_d_k;
  int32_T c2_d_vstart;
  int32_T c2_e_b;
  int32_T c2_e_k;
  int32_T c2_e_vstart;
  int32_T c2_f_b;
  int32_T c2_f_k;
  int32_T c2_g_k;
  int32_T c2_h_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i_k;
  int32_T c2_inb;
  int32_T c2_k;
  int32_T c2_lidx;
  int32_T c2_nfb;
  int32_T c2_nleft;
  boolean_T c2_b_overflow;
  boolean_T c2_c_overflow;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  if (c2_vlen <= 1024) {
    c2_st.site = &c2_jc_emlrtRSI;
    c2_b_vlen = c2_vlen - 1;
    c2_b_vstart = c2_vstart - 1;
    c2_b_y = (real_T)c2_x->data[c2_b_vstart];
    c2_i = c2_b_vlen;
    c2_b_st.site = &c2_oc_emlrtRSI;
    c2_b = c2_i;
    c2_b_b = c2_b;
    if (1 > c2_b_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_b_b > 2147483646);
    }

    if (c2_overflow) {
      c2_c_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
    }

    for (c2_c_k = 1; c2_c_k - 1 < c2_i; c2_c_k++) {
      c2_d_k = c2_c_k;
      c2_b_y += (real_T)c2_x->data[c2_b_vstart + c2_d_k];
    }
  } else {
    c2_a = c2_vlen;
    c2_nfb = c2_div_nzp_s32(chartInstance, c2_a, 1024, 0, 1U, 0, 0);
    c2_inb = c2_nfb << 10;
    c2_st.site = &c2_kc_emlrtRSI;
    c2_c_vstart = c2_vstart - 1;
    c2_b_y = (real_T)c2_x->data[c2_c_vstart];
    c2_b_st.site = &c2_oc_emlrtRSI;
    for (c2_k = 1; c2_k - 1 < 1023; c2_k++) {
      c2_b_k = c2_k;
      c2_b_y += (real_T)c2_x->data[c2_c_vstart + c2_b_k];
    }

    c2_st.site = &c2_lc_emlrtRSI;
    c2_c_b = c2_nfb;
    c2_d_b = c2_c_b;
    if (2 > c2_d_b) {
      c2_b_overflow = false;
    } else {
      c2_b_overflow = (c2_d_b > 2147483646);
    }

    if (c2_b_overflow) {
      c2_b_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
    }

    for (c2_e_k = 1; c2_e_k < c2_nfb; c2_e_k++) {
      c2_st.site = &c2_mc_emlrtRSI;
      c2_d_vstart = (c2_vstart + (c2_e_k << 10)) - 1;
      c2_c_y = (real_T)c2_x->data[c2_d_vstart];
      c2_b_st.site = &c2_oc_emlrtRSI;
      for (c2_f_k = 1; c2_f_k - 1 < 1023; c2_f_k++) {
        c2_g_k = c2_f_k;
        c2_c_y += (real_T)c2_x->data[c2_d_vstart + c2_g_k];
      }

      c2_b_y += c2_c_y;
    }

    if (c2_vlen > c2_inb) {
      c2_nleft = c2_vlen - c2_inb;
      c2_lidx = c2_vstart + c2_inb;
      c2_st.site = &c2_nc_emlrtRSI;
      c2_c_vlen = c2_nleft - 1;
      c2_e_vstart = c2_lidx - 1;
      c2_d_y = (real_T)c2_x->data[c2_e_vstart];
      c2_i1 = c2_c_vlen;
      c2_b_st.site = &c2_oc_emlrtRSI;
      c2_e_b = c2_i1;
      c2_f_b = c2_e_b;
      if (1 > c2_f_b) {
        c2_c_overflow = false;
      } else {
        c2_c_overflow = (c2_f_b > 2147483646);
      }

      if (c2_c_overflow) {
        c2_c_st.site = &c2_ac_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
      }

      for (c2_h_k = 1; c2_h_k - 1 < c2_i1; c2_h_k++) {
        c2_i_k = c2_h_k;
        c2_d_y += (real_T)c2_x->data[c2_e_vstart + c2_i_k];
      }

      c2_b_y += c2_d_y;
    }
  }

  return c2_b_y;
}

static void c2_useConstantDim(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_varargin_2, int32_T
  c2_varargin_3, c2_emxArray_int32_T *c2_varargout_1)
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  int32_T c2_b;
  int32_T c2_b_b;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_k;
  int32_T c2_loop_ub;
  int32_T c2_nx;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  if (1 == c2_varargin_3) {
    c2_st.site = &c2_rc_emlrtRSI;
    c2_i1 = c2_varargout_1->size[0];
    c2_varargout_1->size[0] = c2_varargin_2->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_varargout_1, c2_i1,
      &c2_wb_emlrtRTEI);
    c2_b_loop_ub = c2_varargin_2->size[0] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
      c2_varargout_1->data[c2_i3] = c2_varargin_2->data[c2_i3];
    }

    c2_b_st.site = &c2_sc_emlrtRSI;
    if (c2_varargout_1->size[0] != 0) {
      c2_c_st.site = &c2_tc_emlrtRSI;
      c2_nx = c2_varargout_1->size[0] - 1;
      if (!((real_T)c2_varargout_1->size[0] == 1.0)) {
        c2_i4 = c2_nx;
        c2_d_st.site = &c2_uc_emlrtRSI;
        c2_b = c2_i4;
        c2_b_b = c2_b;
        if (1 > c2_b_b) {
          c2_overflow = false;
        } else {
          c2_overflow = (c2_b_b > 2147483646);
        }

        if (c2_overflow) {
          c2_e_st.site = &c2_ac_emlrtRSI;
          c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
        }

        for (c2_k = 1; c2_k - 1 < c2_i4; c2_k++) {
          c2_b_k = c2_k;
          c2_varargout_1->data[c2_b_k] += c2_varargout_1->data[c2_b_k - 1];
        }
      }
    }
  } else {
    c2_i = c2_varargout_1->size[0];
    c2_varargout_1->size[0] = c2_varargin_2->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_varargout_1, c2_i,
      &c2_wb_emlrtRTEI);
    c2_loop_ub = c2_varargin_2->size[0] - 1;
    for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
      c2_varargout_1->data[c2_i2] = c2_varargin_2->data[c2_i2];
    }
  }
}

static void c2_assertValidSizeArg(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_c_varargin_1)
{
  static char_T c2_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T c2_b_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  real_T c2_arg;
  real_T c2_b_arg;
  real_T c2_d_varargin_1;
  real_T c2_n;
  real_T c2_x;
  int32_T c2_b_u;
  int32_T c2_u;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_arg = c2_c_varargin_1;
  if (c2_arg != c2_arg) {
    c2_p = false;
  } else {
    c2_x = c2_arg;
    c2_b = muDoubleScalarIsInf(c2_x);
    if (c2_b) {
      c2_p = false;
    } else {
      c2_p = true;
    }
  }

  if (c2_p) {
    c2_b_arg = c2_c_varargin_1;
    if (c2_b_arg > 2.147483647E+9) {
      c2_b_p = false;
    } else {
      c2_b_p = true;
    }

    if (c2_b_p) {
      c2_b_b = true;
    } else {
      c2_b_b = false;
    }
  } else {
    c2_b_b = false;
  }

  if (!c2_b_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c2_u = MIN_int32_T;
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), false);
    c2_b_u = MAX_int32_T;
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(c2_sp, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 3U, 14, c2_c_y, 14, c2_d_y, 14, c2_g_y)));
  }

  c2_d_varargin_1 = c2_c_varargin_1;
  if (c2_d_varargin_1 <= 0.0) {
    c2_n = 0.0;
  } else {
    c2_n = c2_d_varargin_1;
  }

  if (!(c2_n <= 2.147483647E+9)) {
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    sf_mex_call(c2_sp, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_f_y)));
  }
}

static void c2_initializeStatsStruct(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_numObjs,
  c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats, c2_sHtk0WM4OMtyqkehwQYcq2
  *c2_statsAlreadyComputed)
{
  c2_emxArray_boolean_T *c2_tile;
  c2_s_bxcgeNxEuVlgmMh5HwQaXB c2_statsOneObj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  real_T c2_c_varargin_1;
  int32_T c2_outsize[2];
  int32_T c2_b_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_loop_ub;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_emxInitStruct_s_bxcgeNxEuVlgmMh(chartInstance, c2_sp, &c2_statsOneObj,
    &c2_yb_emlrtRTEI);
  c2_statsAlreadyComputed->Area = false;
  c2_statsOneObj.Area = 0.0;
  c2_statsAlreadyComputed->Centroid = false;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_statsOneObj.Centroid[c2_i] = 0.0;
  }

  c2_statsAlreadyComputed->BoundingBox = false;
  for (c2_i1 = 0; c2_i1 < 4; c2_i1++) {
    c2_statsOneObj.BoundingBox[c2_i1] = 0.0;
  }

  c2_statsAlreadyComputed->MajorAxisLength = false;
  c2_statsOneObj.MajorAxisLength = 0.0;
  c2_statsAlreadyComputed->MinorAxisLength = false;
  c2_statsOneObj.MinorAxisLength = 0.0;
  c2_statsAlreadyComputed->Eccentricity = false;
  c2_statsOneObj.Eccentricity = 0.0;
  c2_statsAlreadyComputed->Orientation = false;
  c2_statsOneObj.Orientation = 0.0;
  c2_statsAlreadyComputed->Image = false;
  c2_statsOneObj.Image->size[0] = 0;
  c2_statsOneObj.Image->size[1] = 0;
  c2_statsAlreadyComputed->FilledImage = false;
  c2_statsOneObj.FilledImage->size[0] = 0;
  c2_statsOneObj.FilledImage->size[1] = 0;
  c2_statsAlreadyComputed->FilledArea = false;
  c2_statsOneObj.FilledArea = 0.0;
  c2_statsAlreadyComputed->EulerNumber = false;
  c2_statsOneObj.EulerNumber = 0.0;
  c2_statsAlreadyComputed->Extrema = false;
  for (c2_i2 = 0; c2_i2 < 16; c2_i2++) {
    c2_statsOneObj.Extrema[c2_i2] = 0.0;
  }

  c2_statsAlreadyComputed->EquivDiameter = false;
  c2_statsOneObj.EquivDiameter = 0.0;
  c2_statsAlreadyComputed->Extent = false;
  c2_statsOneObj.Extent = 0.0;
  c2_statsAlreadyComputed->PixelIdxList = false;
  c2_statsOneObj.PixelIdxList->size[0] = 0;
  c2_statsAlreadyComputed->PixelList = false;
  c2_statsOneObj.PixelList->size[0] = 0;
  c2_statsOneObj.PixelList->size[1] = 2;
  c2_statsAlreadyComputed->Perimeter = false;
  c2_statsOneObj.Perimeter = 0.0;
  c2_statsAlreadyComputed->Circularity = false;
  c2_statsOneObj.Circularity = 0.0;
  c2_statsAlreadyComputed->PixelValues = false;
  c2_statsOneObj.PixelValues->size[0] = 0;
  c2_statsAlreadyComputed->WeightedCentroid = false;
  for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
    c2_statsOneObj.WeightedCentroid[c2_i3] = 0.0;
  }

  c2_statsAlreadyComputed->MeanIntensity = false;
  c2_statsOneObj.MeanIntensity = 0.0;
  c2_statsAlreadyComputed->MinIntensity = false;
  c2_statsOneObj.MinIntensity = 0.0;
  c2_statsAlreadyComputed->MaxIntensity = false;
  c2_statsOneObj.MaxIntensity = 0.0;
  c2_statsAlreadyComputed->SubarrayIdx = false;
  c2_statsOneObj.SubarrayIdx->size[0] = 1;
  c2_statsOneObj.SubarrayIdx->size[1] = 0;
  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_statsOneObj.SubarrayIdxLengths[c2_i4] = 0.0;
  }

  c2_emxInit_boolean_T(chartInstance, c2_sp, &c2_tile, 1, &c2_i_emlrtRTEI);
  c2_st.site = &c2_yc_emlrtRSI;
  c2_c_varargin_1 = c2_numObjs;
  c2_b_st.site = &c2_xc_emlrtRSI;
  c2_assertValidSizeArg(chartInstance, &c2_b_st, c2_c_varargin_1);
  c2_i5 = c2_tile->size[0];
  c2_tile->size[0] = (int32_T)c2_c_varargin_1;
  c2_emxEnsureCapacity_boolean_T(chartInstance, &c2_st, c2_tile, c2_i5,
    &c2_i_emlrtRTEI);
  c2_loop_ub = (int32_T)c2_c_varargin_1 - 1;
  for (c2_i6 = 0; c2_i6 <= c2_loop_ub; c2_i6++) {
    c2_tile->data[c2_i6] = false;
  }

  c2_outsize[0] = c2_tile->size[0];
  if (!((real_T)c2_outsize[0] == (real_T)c2_tile->size[0])) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c2_st, &c2_e_emlrtMCI, "error", 0U, 1U, 14, c2_b_y);
  }

  c2_emxFree_boolean_T(chartInstance, &c2_tile);
  c2_i7 = c2_stats->size[0];
  c2_stats->size[0] = c2_outsize[0];
  c2_emxEnsureCapacity_s_bxcgeNxEuVl(chartInstance, &c2_st, c2_stats, c2_i7,
    &c2_xb_emlrtRTEI);
  c2_b_loop_ub = c2_outsize[0] - 1;
  for (c2_i8 = 0; c2_i8 <= c2_b_loop_ub; c2_i8++) {
    c2_emxCopyStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c2_st, &c2_stats->
      data[c2_i8], &c2_statsOneObj, &c2_xb_emlrtRTEI);
  }

  c2_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c2_statsOneObj);
}

static void c2_ComputeArea(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats,
  c2_sHtk0WM4OMtyqkehwQYcq2 c2_statsAlreadyComputed,
  c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_b_stats, c2_sHtk0WM4OMtyqkehwQYcq2
  *c2_b_statsAlreadyComputed)
{
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_loop_ub;
  c2_i = c2_b_stats->size[0];
  c2_b_stats->size[0] = c2_stats->size[0];
  c2_emxEnsureCapacity_s_bxcgeNxEuVl(chartInstance, c2_sp, c2_b_stats, c2_i,
    &c2_ac_emlrtRTEI);
  c2_loop_ub = c2_stats->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_emxCopyStruct_s_bxcgeNxEuVlgmMh(chartInstance, c2_sp, &c2_b_stats->
      data[c2_i1], &c2_stats->data[c2_i1], &c2_ac_emlrtRTEI);
  }

  *c2_b_statsAlreadyComputed = c2_statsAlreadyComputed;
  c2_b_ComputeArea(chartInstance, c2_sp, c2_b_stats, c2_b_statsAlreadyComputed);
}

static void c2_ComputePixelList(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats,
  c2_sHtk0WM4OMtyqkehwQYcq2 c2_statsAlreadyComputed,
  c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_b_stats, c2_sHtk0WM4OMtyqkehwQYcq2
  *c2_b_statsAlreadyComputed)
{
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_loop_ub;
  c2_i = c2_b_stats->size[0];
  c2_b_stats->size[0] = c2_stats->size[0];
  c2_emxEnsureCapacity_s_bxcgeNxEuVl(chartInstance, c2_sp, c2_b_stats, c2_i,
    &c2_bc_emlrtRTEI);
  c2_loop_ub = c2_stats->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_emxCopyStruct_s_bxcgeNxEuVlgmMh(chartInstance, c2_sp, &c2_b_stats->
      data[c2_i1], &c2_stats->data[c2_i1], &c2_bc_emlrtRTEI);
  }

  *c2_b_statsAlreadyComputed = c2_statsAlreadyComputed;
  c2_b_ComputePixelList(chartInstance, c2_sp, c2_b_stats,
                        c2_b_statsAlreadyComputed);
}

static real_T c2_c_sumColumnB(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T *c2_x, int32_T c2_col, int32_T
  c2_vlen)
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_b_y;
  real_T c2_c_y;
  real_T c2_d_y;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_b;
  int32_T c2_b_col;
  int32_T c2_b_i0;
  int32_T c2_b_k;
  int32_T c2_b_vlen;
  int32_T c2_b_vstart;
  int32_T c2_c_b;
  int32_T c2_c_col;
  int32_T c2_c_i0;
  int32_T c2_c_k;
  int32_T c2_c_vlen;
  int32_T c2_d_b;
  int32_T c2_d_col;
  int32_T c2_d_i0;
  int32_T c2_d_k;
  int32_T c2_e_b;
  int32_T c2_e_col;
  int32_T c2_e_k;
  int32_T c2_f_b;
  int32_T c2_f_k;
  int32_T c2_g_k;
  int32_T c2_h_k;
  int32_T c2_i;
  int32_T c2_i0;
  int32_T c2_i1;
  int32_T c2_i_k;
  int32_T c2_inb;
  int32_T c2_k;
  int32_T c2_lidx;
  int32_T c2_nfb;
  int32_T c2_nleft;
  int32_T c2_vstart;
  boolean_T c2_b_overflow;
  boolean_T c2_c_overflow;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  if (c2_vlen <= 1024) {
    c2_st.site = &c2_jc_emlrtRSI;
    c2_b_col = c2_col - 1;
    c2_b_vlen = c2_vlen - 1;
    c2_i0 = c2_b_col * c2_x->size[0];
    c2_b_y = c2_x->data[c2_i0];
    c2_i = c2_b_vlen;
    c2_b_st.site = &c2_oc_emlrtRSI;
    c2_b = c2_i;
    c2_b_b = c2_b;
    if (1 > c2_b_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_b_b > 2147483646);
    }

    if (c2_overflow) {
      c2_c_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
    }

    for (c2_c_k = 1; c2_c_k - 1 < c2_i; c2_c_k++) {
      c2_d_k = c2_c_k;
      c2_b_y += c2_x->data[c2_i0 + c2_d_k];
    }
  } else {
    c2_a = c2_vlen;
    c2_nfb = c2_div_nzp_s32(chartInstance, c2_a, 1024, 0, 1U, 0, 0);
    c2_inb = c2_nfb << 10;
    c2_st.site = &c2_kc_emlrtRSI;
    c2_c_col = c2_col - 1;
    c2_b_i0 = c2_c_col * c2_x->size[0];
    c2_b_y = c2_x->data[c2_b_i0];
    c2_b_st.site = &c2_oc_emlrtRSI;
    for (c2_k = 1; c2_k - 1 < 1023; c2_k++) {
      c2_b_k = c2_k;
      c2_b_y += c2_x->data[c2_b_i0 + c2_b_k];
    }

    c2_st.site = &c2_lc_emlrtRSI;
    c2_c_b = c2_nfb;
    c2_d_b = c2_c_b;
    if (2 > c2_d_b) {
      c2_b_overflow = false;
    } else {
      c2_b_overflow = (c2_d_b > 2147483646);
    }

    if (c2_b_overflow) {
      c2_b_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
    }

    for (c2_e_k = 1; c2_e_k < c2_nfb; c2_e_k++) {
      c2_st.site = &c2_mc_emlrtRSI;
      c2_d_col = c2_col - 1;
      c2_vstart = c2_e_k << 10;
      c2_c_i0 = c2_vstart + c2_d_col * c2_x->size[0];
      c2_c_y = c2_x->data[c2_c_i0];
      c2_b_st.site = &c2_oc_emlrtRSI;
      for (c2_f_k = 1; c2_f_k - 1 < 1023; c2_f_k++) {
        c2_g_k = c2_f_k;
        c2_c_y += c2_x->data[c2_c_i0 + c2_g_k];
      }

      c2_b_y += c2_c_y;
    }

    if (c2_vlen > c2_inb) {
      c2_nleft = c2_vlen - c2_inb;
      c2_lidx = c2_inb;
      c2_st.site = &c2_nc_emlrtRSI;
      c2_e_col = c2_col - 1;
      c2_c_vlen = c2_nleft - 1;
      c2_b_vstart = c2_lidx + 1;
      c2_d_i0 = (c2_b_vstart + c2_e_col * c2_x->size[0]) - 1;
      c2_d_y = c2_x->data[c2_d_i0];
      c2_i1 = c2_c_vlen;
      c2_b_st.site = &c2_oc_emlrtRSI;
      c2_e_b = c2_i1;
      c2_f_b = c2_e_b;
      if (1 > c2_f_b) {
        c2_c_overflow = false;
      } else {
        c2_c_overflow = (c2_f_b > 2147483646);
      }

      if (c2_c_overflow) {
        c2_c_st.site = &c2_ac_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
      }

      for (c2_h_k = 1; c2_h_k - 1 < c2_i1; c2_h_k++) {
        c2_i_k = c2_h_k;
        c2_d_y += c2_x->data[c2_d_i0 + c2_i_k];
      }

      c2_b_y += c2_d_y;
    }
  }

  return c2_b_y;
}

static real_T c2_b_sumColumnB4(SFc2_real_time_testInstanceStruct *chartInstance,
  c2_emxArray_real_T *c2_x, int32_T c2_col, int32_T c2_vstart)
{
  real_T c2_psum1;
  real_T c2_psum2;
  real_T c2_psum3;
  real_T c2_psum4;
  int32_T c2_b_k;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_k;
  (void)chartInstance;
  c2_i1 = (c2_vstart + (c2_col - 1) * c2_x->size[0]) - 1;
  c2_i2 = c2_i1 + 1024;
  c2_i3 = c2_i1 + 2048;
  c2_i4 = c2_i1 + 3072;
  c2_psum1 = c2_x->data[c2_i1];
  c2_psum2 = c2_x->data[c2_i2];
  c2_psum3 = c2_x->data[c2_i3];
  c2_psum4 = c2_x->data[c2_i4];
  for (c2_k = 0; c2_k < 1023; c2_k++) {
    c2_b_k = c2_k + 1;
    c2_psum1 += c2_x->data[c2_i1 + c2_b_k];
    c2_psum2 += c2_x->data[c2_i2 + c2_b_k];
    c2_psum3 += c2_x->data[c2_i3 + c2_b_k];
    c2_psum4 += c2_x->data[c2_i4 + c2_b_k];
  }

  return (c2_psum1 + c2_psum2) + (c2_psum3 + c2_psum4);
}

static real_T c2_d_sumColumnB(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T *c2_x, int32_T c2_col, int32_T
  c2_vlen, int32_T c2_vstart)
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_b_y;
  real_T c2_c_y;
  real_T c2_d_y;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_b;
  int32_T c2_b_col;
  int32_T c2_b_i0;
  int32_T c2_b_k;
  int32_T c2_b_vlen;
  int32_T c2_b_vstart;
  int32_T c2_c_b;
  int32_T c2_c_col;
  int32_T c2_c_i0;
  int32_T c2_c_k;
  int32_T c2_c_vlen;
  int32_T c2_c_vstart;
  int32_T c2_d_b;
  int32_T c2_d_col;
  int32_T c2_d_i0;
  int32_T c2_d_k;
  int32_T c2_d_vstart;
  int32_T c2_e_b;
  int32_T c2_e_col;
  int32_T c2_e_k;
  int32_T c2_e_vstart;
  int32_T c2_f_b;
  int32_T c2_f_k;
  int32_T c2_g_k;
  int32_T c2_h_k;
  int32_T c2_i;
  int32_T c2_i0;
  int32_T c2_i1;
  int32_T c2_i_k;
  int32_T c2_inb;
  int32_T c2_k;
  int32_T c2_lidx;
  int32_T c2_nfb;
  int32_T c2_nleft;
  boolean_T c2_b_overflow;
  boolean_T c2_c_overflow;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  if (c2_vlen <= 1024) {
    c2_st.site = &c2_jc_emlrtRSI;
    c2_b_col = c2_col - 1;
    c2_b_vlen = c2_vlen - 1;
    c2_b_vstart = c2_vstart;
    c2_i0 = (c2_b_vstart + c2_b_col * c2_x->size[0]) - 1;
    c2_b_y = c2_x->data[c2_i0];
    c2_i = c2_b_vlen;
    c2_b_st.site = &c2_oc_emlrtRSI;
    c2_b = c2_i;
    c2_b_b = c2_b;
    if (1 > c2_b_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_b_b > 2147483646);
    }

    if (c2_overflow) {
      c2_c_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
    }

    for (c2_c_k = 1; c2_c_k - 1 < c2_i; c2_c_k++) {
      c2_d_k = c2_c_k;
      c2_b_y += c2_x->data[c2_i0 + c2_d_k];
    }
  } else {
    c2_a = c2_vlen;
    c2_nfb = c2_div_nzp_s32(chartInstance, c2_a, 1024, 0, 1U, 0, 0);
    c2_inb = c2_nfb << 10;
    c2_st.site = &c2_kc_emlrtRSI;
    c2_c_col = c2_col - 1;
    c2_c_vstart = c2_vstart;
    c2_b_i0 = (c2_c_vstart + c2_c_col * c2_x->size[0]) - 1;
    c2_b_y = c2_x->data[c2_b_i0];
    c2_b_st.site = &c2_oc_emlrtRSI;
    for (c2_k = 1; c2_k - 1 < 1023; c2_k++) {
      c2_b_k = c2_k;
      c2_b_y += c2_x->data[c2_b_i0 + c2_b_k];
    }

    c2_st.site = &c2_lc_emlrtRSI;
    c2_c_b = c2_nfb;
    c2_d_b = c2_c_b;
    if (2 > c2_d_b) {
      c2_b_overflow = false;
    } else {
      c2_b_overflow = (c2_d_b > 2147483646);
    }

    if (c2_b_overflow) {
      c2_b_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
    }

    for (c2_e_k = 1; c2_e_k < c2_nfb; c2_e_k++) {
      c2_st.site = &c2_mc_emlrtRSI;
      c2_d_col = c2_col - 1;
      c2_d_vstart = c2_vstart + (c2_e_k << 10);
      c2_c_i0 = (c2_d_vstart + c2_d_col * c2_x->size[0]) - 1;
      c2_c_y = c2_x->data[c2_c_i0];
      c2_b_st.site = &c2_oc_emlrtRSI;
      for (c2_f_k = 1; c2_f_k - 1 < 1023; c2_f_k++) {
        c2_g_k = c2_f_k;
        c2_c_y += c2_x->data[c2_c_i0 + c2_g_k];
      }

      c2_b_y += c2_c_y;
    }

    if (c2_vlen > c2_inb) {
      c2_nleft = c2_vlen - c2_inb;
      c2_lidx = c2_vstart + c2_inb;
      c2_st.site = &c2_nc_emlrtRSI;
      c2_e_col = c2_col - 1;
      c2_c_vlen = c2_nleft - 1;
      c2_e_vstart = c2_lidx;
      c2_d_i0 = (c2_e_vstart + c2_e_col * c2_x->size[0]) - 1;
      c2_d_y = c2_x->data[c2_d_i0];
      c2_i1 = c2_c_vlen;
      c2_b_st.site = &c2_oc_emlrtRSI;
      c2_e_b = c2_i1;
      c2_f_b = c2_e_b;
      if (1 > c2_f_b) {
        c2_c_overflow = false;
      } else {
        c2_c_overflow = (c2_f_b > 2147483646);
      }

      if (c2_c_overflow) {
        c2_c_st.site = &c2_ac_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
      }

      for (c2_h_k = 1; c2_h_k - 1 < c2_i1; c2_h_k++) {
        c2_i_k = c2_h_k;
        c2_d_y += c2_x->data[c2_d_i0 + c2_i_k];
      }

      c2_b_y += c2_d_y;
    }
  }

  return c2_b_y;
}

static void c2_imerode(SFc2_real_time_testInstanceStruct *chartInstance,
  boolean_T c2_A[65536], boolean_T c2_B[65536])
{
  real_T c2_asizeT[2];
  real_T c2_nsizeT[2];
  int32_T c2_i;
  int32_T c2_i1;
  boolean_T c2_nhood;
  (void)chartInstance;
  c2_nhood = true;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_asizeT[c2_i] = 256.0;
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_nsizeT[c2_i1] = 1.0;
  }

  erode_binary_twod_tbb(&c2_A[0], &c2_asizeT[0], 2.0, &c2_nhood, &c2_nsizeT[0],
                        2.0, &c2_B[0]);
}

static void c2_bwboundaries(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536],
  c2_emxArray_cell_wrap_1 *c2_B, real_T c2_c_L[65536])
{
  c2_emxArray_cell_wrap_1 *c2_holes;
  c2_emxArray_cell_wrap_1 *c2_objs;
  emlrtStack c2_st;
  real_T c2_b;
  real_T c2_n;
  int32_T c2_d_varargin_1;
  int32_T c2_e_varargin_1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  for (c2_i = 0; c2_i < 65536; c2_i++) {
    chartInstance->c2_r.f1[c2_i] = c2_c_varargin_1[c2_i];
  }

  chartInstance->c2_args[0] = chartInstance->c2_r;
  for (c2_i1 = 0; c2_i1 < 65536; c2_i1++) {
    chartInstance->c2_varargin_1[c2_i1] = chartInstance->c2_args[0].f1[c2_i1];
  }

  c2_emxInit_cell_wrap_1(chartInstance, c2_sp, &c2_objs, 1, &c2_cc_emlrtRTEI);
  c2_emxInit_cell_wrap_1(chartInstance, c2_sp, &c2_holes, 1, &c2_cc_emlrtRTEI);
  c2_st.site = &c2_ki_emlrtRSI;
  for (c2_i2 = 0; c2_i2 < 65536; c2_i2++) {
    chartInstance->c2_b_varargin_1[c2_i2] = chartInstance->c2_varargin_1[c2_i2];
  }

  c2_findObjectBoundaries(chartInstance, &c2_st, chartInstance->c2_b_varargin_1,
    c2_objs, c2_c_L);
  c2_st.site = &c2_li_emlrtRSI;
  c2_findHoleBoundaries(chartInstance, &c2_st, chartInstance->c2_varargin_1,
                        c2_holes, chartInstance->c2_labeledHoles);
  c2_d_varargin_1 = c2_objs->size[0];
  c2_e_varargin_1 = c2_d_varargin_1;
  c2_n = (real_T)c2_e_varargin_1;
  for (c2_i3 = 0; c2_i3 < 65536; c2_i3++) {
    chartInstance->c2_varargin_1[c2_i3] = (chartInstance->c2_labeledHoles[c2_i3]
      != 0.0);
  }

  c2_b = c2_n;
  for (c2_i4 = 0; c2_i4 < 65536; c2_i4++) {
    chartInstance->c2_y[c2_i4] = (real_T)chartInstance->c2_varargin_1[c2_i4] *
      c2_b;
  }

  for (c2_i5 = 0; c2_i5 < 65536; c2_i5++) {
    c2_c_L[c2_i5] = (c2_c_L[c2_i5] + chartInstance->c2_y[c2_i5]) +
      chartInstance->c2_labeledHoles[c2_i5];
  }

  c2_st.site = &c2_mi_emlrtRSI;
  c2_vertConcatenateCells(chartInstance, &c2_st, c2_objs, c2_holes, c2_B);
  c2_emxFree_cell_wrap_1(chartInstance, &c2_holes);
  c2_emxFree_cell_wrap_1(chartInstance, &c2_objs);
}

static void c2_findObjectBoundaries(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, boolean_T c2_BW[65536],
  c2_emxArray_cell_wrap_1 *c2_B, real_T c2_c_L[65536])
{
  c2_images_internal_coder_BoundaryFinder *c2_b_obj;
  c2_images_internal_coder_BoundaryFinder *c2_obj;
  c2_images_internal_coder_BoundaryFinder *c2_this;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  boolean_T c2_b_BW[65536];
  boolean_T c2_u;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_ni_emlrtRSI;
  for (c2_i = 0; c2_i < 65536; c2_i++) {
    c2_b_BW[c2_i] = c2_BW[c2_i];
  }

  c2_bwlabel(chartInstance, &c2_st, c2_b_BW, chartInstance->c2_b_dv);
  for (c2_i1 = 0; c2_i1 < 65536; c2_i1++) {
    c2_c_L[c2_i1] = chartInstance->c2_b_dv[c2_i1];
  }

  c2_st.site = &c2_oi_emlrtRSI;
  c2_obj = &chartInstance->c2_b_finder;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_fj_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  for (c2_i2 = 0; c2_i2 < 65536; c2_i2++) {
    chartInstance->c2_b_L[c2_i2] = c2_c_L[c2_i2];
  }

  c2_padarray(chartInstance, chartInstance->c2_b_L, c2_b_obj->paddedLabelMatrix);
  c2_b_obj->numRows = 258;
  c2_b_obj->numCols = 258;
  c2_u = true;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 11, 0U, 0U, 0U, 0), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 33),
                false);
  c2_b_st.site = &c2_gj_emlrtRSI;
  c2_assert(chartInstance, &c2_b_st, c2_b_y, sf_mex_call(&c2_st, NULL, "message",
             1U, 1U, 14, c2_c_y));
  c2_b_obj->conn = 8.0;
  c2_st.site = &c2_pi_emlrtRSI;
  c2_BoundaryFinder_findBoundaries(chartInstance, &c2_st,
    &chartInstance->c2_b_finder, c2_B);
}

static void c2_bwlabel(SFc2_real_time_testInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536], real_T c2_c_L[65536])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  int64_T c2_i6;
  real_T c2_a;
  real_T c2_ab_x;
  real_T c2_b_c;
  real_T c2_b_i;
  real_T c2_b_j;
  real_T c2_b_root;
  real_T c2_b_rootj;
  real_T c2_b_thread;
  real_T c2_b_x;
  real_T c2_c_a;
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_c_r;
  real_T c2_c_root;
  real_T c2_c_rootj;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d10;
  real_T c2_d11;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_d8;
  real_T c2_d9;
  real_T c2_d_c;
  real_T c2_d_i;
  real_T c2_d_j;
  real_T c2_d_root;
  real_T c2_d_rootj;
  real_T c2_d_varargin_1;
  real_T c2_d_x;
  real_T c2_e_i;
  real_T c2_e_j;
  real_T c2_e_root;
  real_T c2_e_varargin_1;
  real_T c2_e_x;
  real_T c2_f_i;
  real_T c2_f_j;
  real_T c2_f_root;
  real_T c2_f_x;
  real_T c2_firstLabel;
  real_T c2_g_i;
  real_T c2_g_j;
  real_T c2_g_x;
  real_T c2_h_i;
  real_T c2_h_j;
  real_T c2_i_i;
  real_T c2_i_j;
  real_T c2_j;
  real_T c2_j_i;
  real_T c2_j_j;
  real_T c2_k_i;
  real_T c2_l_i;
  real_T c2_l_x;
  real_T c2_label;
  real_T c2_m_i;
  real_T c2_minval;
  real_T c2_n_i;
  real_T c2_n_x;
  real_T c2_numComponents;
  real_T c2_o_x;
  real_T c2_p_i;
  real_T c2_p_x;
  real_T c2_q_i;
  real_T c2_q_x;
  real_T c2_root;
  real_T c2_rootj;
  real_T c2_s_x;
  real_T c2_startC;
  real_T c2_t_x;
  real_T c2_u_x;
  real_T c2_v_x;
  real_T c2_w_x;
  real_T c2_x;
  real_T c2_x_x;
  real_T c2_y_x;
  real_T c2_z;
  int32_T c2_chunksSizeAndLabels[264];
  int32_T c2_b_a;
  int32_T c2_b_q0;
  int32_T c2_b_q1;
  int32_T c2_b_qY;
  int32_T c2_b_r;
  int32_T c2_b_z;
  int32_T c2_c;
  int32_T c2_c_c;
  int32_T c2_c_q0;
  int32_T c2_c_q1;
  int32_T c2_c_qY;
  int32_T c2_d_a;
  int32_T c2_d_q0;
  int32_T c2_d_q1;
  int32_T c2_d_qY;
  int32_T c2_d_r;
  int32_T c2_e_a;
  int32_T c2_e_b;
  int32_T c2_e_c;
  int32_T c2_e_q0;
  int32_T c2_e_q1;
  int32_T c2_e_qY;
  int32_T c2_e_r;
  int32_T c2_exitg1;
  int32_T c2_f_a;
  int32_T c2_f_b;
  int32_T c2_f_q0;
  int32_T c2_f_q1;
  int32_T c2_f_qY;
  int32_T c2_g_q0;
  int32_T c2_g_q1;
  int32_T c2_g_qY;
  int32_T c2_g_y;
  int32_T c2_h_q0;
  int32_T c2_h_q1;
  int32_T c2_h_qY;
  int32_T c2_h_x;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i64;
  int32_T c2_i65;
  int32_T c2_i66;
  int32_T c2_i67;
  int32_T c2_i68;
  int32_T c2_i69;
  int32_T c2_i7;
  int32_T c2_i70;
  int32_T c2_i71;
  int32_T c2_i72;
  int32_T c2_i73;
  int32_T c2_i74;
  int32_T c2_i75;
  int32_T c2_i76;
  int32_T c2_i77;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_q0;
  int32_T c2_i_q1;
  int32_T c2_i_qY;
  int32_T c2_i_x;
  int32_T c2_j_q0;
  int32_T c2_j_q1;
  int32_T c2_j_qY;
  int32_T c2_j_x;
  int32_T c2_k_q0;
  int32_T c2_k_q1;
  int32_T c2_k_qY;
  int32_T c2_k_x;
  int32_T c2_l_q0;
  int32_T c2_l_q1;
  int32_T c2_l_qY;
  int32_T c2_m_x;
  int32_T c2_o_i;
  int32_T c2_q0;
  int32_T c2_q1;
  int32_T c2_qY;
  int32_T c2_r_x;
  int32_T c2_stripeFirstLabel;
  int32_T c2_thread;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_c_b;
  boolean_T c2_d_b;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_qi_emlrtRSI;
  chartInstance->c2_P[0] = 0.0;
  for (c2_thread = 0; c2_thread < 8; c2_thread++) {
    c2_b_thread = (real_T)c2_thread;
    c2_b_c = c2_b_thread * 32.0 + 1.0;
    c2_d_varargin_1 = (c2_b_thread + 1.0) * 32.0 + 1.0;
    c2_x = c2_d_varargin_1;
    c2_b_x = c2_x;
    c2_c_x = c2_b_x;
    c2_a = c2_c_x;
    c2_d_x = c2_a;
    c2_e_x = c2_d_x;
    c2_minval = muDoubleScalarMin(c2_e_x, 257.0);
    c2_d1 = muDoubleScalarRound(c2_minval);
    if (c2_d1 < 2.147483648E+9) {
      if (c2_d1 >= -2.147483648E+9) {
        c2_i1 = (int32_T)c2_d1;
      } else {
        c2_i1 = MIN_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c2_d1 >= 2.147483648E+9) {
      c2_i1 = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_i1 = 0;
    }

    c2_chunksSizeAndLabels[(int32_T)c2_b_c - 1] = c2_i1;
    c2_l_x = c2_b_c / 2.0;
    c2_n_x = c2_l_x;
    c2_n_x = muDoubleScalarFloor(c2_n_x);
    c2_label = c2_n_x * 128.0 + 1.0;
    c2_firstLabel = c2_label;
    c2_startC = c2_b_c;
    c2_d3 = c2_b_thread * 32.0 + 1.0;
    c2_e_varargin_1 = (c2_b_thread + 1.0) * 32.0;
    c2_o_x = c2_e_varargin_1;
    c2_p_x = c2_o_x;
    c2_q_x = c2_p_x;
    c2_c_a = c2_q_x;
    c2_u_x = c2_c_a;
    c2_w_x = c2_u_x;
    c2_d7 = muDoubleScalarMin(c2_w_x, 256.0);
    c2_i7 = (int32_T)(c2_d7 + (1.0 - c2_d3)) - 1;
    for (c2_e_c = 0; c2_e_c <= c2_i7; c2_e_c++) {
      c2_b_c = c2_d3 + (real_T)c2_e_c;
      for (c2_e_r = 0; c2_e_r < 256; c2_e_r++) {
        c2_c_r = (real_T)c2_e_r + 1.0;
        c2_i9 = (int32_T)c2_b_c;
        if ((c2_i9 < 1) || (c2_i9 > 256)) {
          emlrtDynamicBoundsCheckR2012b(c2_i9, 1, 256, &c2_ld_emlrtBCI, &c2_st);
        }

        if (c2_c_varargin_1[((int32_T)c2_c_r + ((c2_i9 - 1) << 8)) - 1]) {
          if ((c2_b_c > c2_startC) && c2_c_varargin_1[((int32_T)c2_c_r +
               (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1]) {
            c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
              c2_c_L[((int32_T)c2_c_r + (((int32_T)(c2_b_c - 1.0) - 1) << 8)) -
              1];
          } else if ((c2_c_r < 256.0) && (c2_b_c > c2_startC) &&
                     c2_c_varargin_1[((int32_T)(c2_c_r + 1.0) + (((int32_T)
                        (c2_b_c - 1.0) - 1) << 8)) - 1]) {
            if ((c2_b_c > c2_startC) && (c2_c_r > 1.0) && c2_c_varargin_1
                [((int32_T)(c2_c_r - 1.0) + (((int32_T)(c2_b_c - 1.0) - 1) << 8))
                - 1]) {
              c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)(c2_b_c - 1.0) - 1)
                         << 8)) - 1];
              do {
                c2_exitg1 = 0;
                c2_i15 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c -
                  1) << 8)) - 1] + 1.0);
                if ((c2_i15 < 1) || (c2_i15 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 32769,
                    &c2_rd_emlrtBCI, &c2_st);
                }

                if (chartInstance->c2_P[c2_i15 - 1] < c2_c_L[((int32_T)c2_c_r +
                     (((int32_T)c2_b_c - 1) << 8)) - 1]) {
                  c2_i20 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c
                    - 1) << 8)) - 1] + 1.0);
                  if ((c2_i20 < 1) || (c2_i20 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i20, 1, 32769,
                      &c2_sd_emlrtBCI, &c2_st);
                  }

                  c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                    chartInstance->c2_P[c2_i20 - 1];
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              if (c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)(c2_b_c - 1.0) -
                     1) << 8)) - 1] != c2_c_L[((int32_T)(c2_c_r + 1.0) +
                   (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1]) {
                c2_rootj = c2_c_L[((int32_T)(c2_c_r + 1.0) + (((int32_T)(c2_b_c
                  - 1.0) - 1) << 8)) - 1];
                do {
                  c2_exitg1 = 0;
                  c2_i27 = (int32_T)(c2_rootj + 1.0);
                  if ((c2_i27 < 1) || (c2_i27 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 32769,
                      &c2_wd_emlrtBCI, &c2_st);
                  }

                  if (chartInstance->c2_P[c2_i27 - 1] < c2_rootj) {
                    c2_i34 = (int32_T)(c2_rootj + 1.0);
                    if ((c2_i34 < 1) || (c2_i34 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i34, 1, 32769,
                        &c2_ae_emlrtBCI, &c2_st);
                    }

                    c2_rootj = chartInstance->c2_P[c2_i34 - 1];
                  } else {
                    c2_exitg1 = 1;
                  }
                } while (c2_exitg1 == 0);

                if (c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1]
                    > c2_rootj) {
                  c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                    c2_rootj;
                }

                do {
                  c2_exitg1 = 0;
                  c2_i52 = (int32_T)(c2_c_L[((int32_T)(c2_c_r + 1.0) +
                    (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                  if ((c2_i52 < 1) || (c2_i52 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i52, 1, 32769,
                      &c2_ie_emlrtBCI, &c2_st);
                  }

                  if (chartInstance->c2_P[c2_i52 - 1] < c2_c_L[((int32_T)(c2_c_r
                        + 1.0) + (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1]) {
                    c2_i59 = (int32_T)(c2_c_L[((int32_T)(c2_c_r + 1.0) +
                      (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                    if ((c2_i59 < 1) || (c2_i59 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i59, 1, 32769,
                        &c2_ke_emlrtBCI, &c2_st);
                    }

                    c2_d_j = chartInstance->c2_P[c2_i59 - 1];
                    c2_i65 = (int32_T)(c2_c_L[((int32_T)(c2_c_r + 1.0) +
                      (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                    if ((c2_i65 < 1) || (c2_i65 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i65, 1, 32769,
                        &c2_me_emlrtBCI, &c2_st);
                    }

                    chartInstance->c2_P[c2_i65 - 1] = c2_c_L[((int32_T)c2_c_r +
                      (((int32_T)c2_b_c - 1) << 8)) - 1];
                    c2_c_L[((int32_T)(c2_c_r + 1.0) + (((int32_T)(c2_b_c - 1.0)
                              - 1) << 8)) - 1] = c2_d_j;
                  } else {
                    c2_exitg1 = 1;
                  }
                } while (c2_exitg1 == 0);

                c2_i62 = (int32_T)(c2_c_L[((int32_T)(c2_c_r + 1.0) + (((int32_T)
                  (c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                if ((c2_i62 < 1) || (c2_i62 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i62, 1, 32769,
                    &c2_je_emlrtBCI, &c2_st);
                }

                chartInstance->c2_P[c2_i62 - 1] = c2_c_L[((int32_T)c2_c_r +
                  (((int32_T)c2_b_c - 1) << 8)) - 1];
              }

              do {
                c2_exitg1 = 0;
                c2_i26 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)
                  (c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                if ((c2_i26 < 1) || (c2_i26 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i26, 1, 32769,
                    &c2_vd_emlrtBCI, &c2_st);
                }

                if (chartInstance->c2_P[c2_i26 - 1] < c2_c_L[((int32_T)(c2_c_r -
                      1.0) + (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1]) {
                  c2_i33 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) +
                    (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                  if ((c2_i33 < 1) || (c2_i33 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i33, 1, 32769,
                      &c2_yd_emlrtBCI, &c2_st);
                  }

                  c2_d_j = chartInstance->c2_P[c2_i33 - 1];
                  c2_i45 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) +
                    (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                  if ((c2_i45 < 1) || (c2_i45 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i45, 1, 32769,
                      &c2_de_emlrtBCI, &c2_st);
                  }

                  chartInstance->c2_P[c2_i45 - 1] = c2_c_L[((int32_T)c2_c_r +
                    (((int32_T)c2_b_c - 1) << 8)) - 1];
                  c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)(c2_b_c - 1.0) -
                            1) << 8)) - 1] = c2_d_j;
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              c2_i42 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)
                (c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
              if ((c2_i42 < 1) || (c2_i42 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i42, 1, 32769, &c2_xd_emlrtBCI,
                  &c2_st);
              }

              chartInstance->c2_P[c2_i42 - 1] = c2_c_L[((int32_T)c2_c_r +
                (((int32_T)c2_b_c - 1) << 8)) - 1];
            } else if ((c2_c_r > 1.0) && c2_c_varargin_1[((int32_T)(c2_c_r - 1.0)
                        + (((int32_T)c2_b_c - 1) << 8)) - 1]) {
              c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)c2_b_c - 1) << 8))
                - 1];
              do {
                c2_exitg1 = 0;
                c2_i17 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c -
                  1) << 8)) - 1] + 1.0);
                if ((c2_i17 < 1) || (c2_i17 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i17, 1, 32769,
                    &c2_td_emlrtBCI, &c2_st);
                }

                if (chartInstance->c2_P[c2_i17 - 1] < c2_c_L[((int32_T)c2_c_r +
                     (((int32_T)c2_b_c - 1) << 8)) - 1]) {
                  c2_i22 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c
                    - 1) << 8)) - 1] + 1.0);
                  if ((c2_i22 < 1) || (c2_i22 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i22, 1, 32769,
                      &c2_ud_emlrtBCI, &c2_st);
                  }

                  c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                    chartInstance->c2_P[c2_i22 - 1];
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              if (c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)c2_b_c - 1) << 8))
                  - 1] != c2_c_L[((int32_T)(c2_c_r + 1.0) + (((int32_T)(c2_b_c -
                      1.0) - 1) << 8)) - 1]) {
                c2_rootj = c2_c_L[((int32_T)(c2_c_r + 1.0) + (((int32_T)(c2_b_c
                  - 1.0) - 1) << 8)) - 1];
                do {
                  c2_exitg1 = 0;
                  c2_i29 = (int32_T)(c2_rootj + 1.0);
                  if ((c2_i29 < 1) || (c2_i29 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i29, 1, 32769,
                      &c2_ce_emlrtBCI, &c2_st);
                  }

                  if (chartInstance->c2_P[c2_i29 - 1] < c2_rootj) {
                    c2_i37 = (int32_T)(c2_rootj + 1.0);
                    if ((c2_i37 < 1) || (c2_i37 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i37, 1, 32769,
                        &c2_ge_emlrtBCI, &c2_st);
                    }

                    c2_rootj = chartInstance->c2_P[c2_i37 - 1];
                  } else {
                    c2_exitg1 = 1;
                  }
                } while (c2_exitg1 == 0);

                if (c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1]
                    > c2_rootj) {
                  c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                    c2_rootj;
                }

                do {
                  c2_exitg1 = 0;
                  c2_i54 = (int32_T)(c2_c_L[((int32_T)(c2_c_r + 1.0) +
                    (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                  if ((c2_i54 < 1) || (c2_i54 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i54, 1, 32769,
                      &c2_le_emlrtBCI, &c2_st);
                  }

                  if (chartInstance->c2_P[c2_i54 - 1] < c2_c_L[((int32_T)(c2_c_r
                        + 1.0) + (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1]) {
                    c2_i60 = (int32_T)(c2_c_L[((int32_T)(c2_c_r + 1.0) +
                      (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                    if ((c2_i60 < 1) || (c2_i60 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i60, 1, 32769,
                        &c2_oe_emlrtBCI, &c2_st);
                    }

                    c2_d_j = chartInstance->c2_P[c2_i60 - 1];
                    c2_i67 = (int32_T)(c2_c_L[((int32_T)(c2_c_r + 1.0) +
                      (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                    if ((c2_i67 < 1) || (c2_i67 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i67, 1, 32769,
                        &c2_pe_emlrtBCI, &c2_st);
                    }

                    chartInstance->c2_P[c2_i67 - 1] = c2_c_L[((int32_T)c2_c_r +
                      (((int32_T)c2_b_c - 1) << 8)) - 1];
                    c2_c_L[((int32_T)(c2_c_r + 1.0) + (((int32_T)(c2_b_c - 1.0)
                              - 1) << 8)) - 1] = c2_d_j;
                  } else {
                    c2_exitg1 = 1;
                  }
                } while (c2_exitg1 == 0);

                c2_i64 = (int32_T)(c2_c_L[((int32_T)(c2_c_r + 1.0) + (((int32_T)
                  (c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                if ((c2_i64 < 1) || (c2_i64 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i64, 1, 32769,
                    &c2_ne_emlrtBCI, &c2_st);
                }

                chartInstance->c2_P[c2_i64 - 1] = c2_c_L[((int32_T)c2_c_r +
                  (((int32_T)c2_b_c - 1) << 8)) - 1];
              }

              do {
                c2_exitg1 = 0;
                c2_i28 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)
                  c2_b_c - 1) << 8)) - 1] + 1.0);
                if ((c2_i28 < 1) || (c2_i28 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i28, 1, 32769,
                    &c2_be_emlrtBCI, &c2_st);
                }

                if (chartInstance->c2_P[c2_i28 - 1] < c2_c_L[((int32_T)(c2_c_r -
                      1.0) + (((int32_T)c2_b_c - 1) << 8)) - 1]) {
                  c2_i36 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) +
                    (((int32_T)c2_b_c - 1) << 8)) - 1] + 1.0);
                  if ((c2_i36 < 1) || (c2_i36 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i36, 1, 32769,
                      &c2_fe_emlrtBCI, &c2_st);
                  }

                  c2_d_j = chartInstance->c2_P[c2_i36 - 1];
                  c2_i47 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) +
                    (((int32_T)c2_b_c - 1) << 8)) - 1] + 1.0);
                  if ((c2_i47 < 1) || (c2_i47 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i47, 1, 32769,
                      &c2_he_emlrtBCI, &c2_st);
                  }

                  chartInstance->c2_P[c2_i47 - 1] = c2_c_L[((int32_T)c2_c_r +
                    (((int32_T)c2_b_c - 1) << 8)) - 1];
                  c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)c2_b_c - 1) << 8))
                    - 1] = c2_d_j;
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              c2_i44 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)
                c2_b_c - 1) << 8)) - 1] + 1.0);
              if ((c2_i44 < 1) || (c2_i44 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i44, 1, 32769, &c2_ee_emlrtBCI,
                  &c2_st);
              }

              chartInstance->c2_P[c2_i44 - 1] = c2_c_L[((int32_T)c2_c_r +
                (((int32_T)c2_b_c - 1) << 8)) - 1];
            } else {
              c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                c2_c_L[((int32_T)(c2_c_r + 1.0) + (((int32_T)(c2_b_c - 1.0) - 1)
                         << 8)) - 1];
            }
          } else if ((c2_b_c > c2_startC) && (c2_c_r > 1.0) && c2_c_varargin_1
                     [((int32_T)(c2_c_r - 1.0) + (((int32_T)(c2_b_c - 1.0) - 1) <<
            8)) - 1]) {
            c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
              c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)(c2_b_c - 1.0) - 1) <<
                       8)) - 1];
          } else if ((c2_c_r > 1.0) && c2_c_varargin_1[((int32_T)(c2_c_r - 1.0)
                      + (((int32_T)c2_b_c - 1) << 8)) - 1]) {
            c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
              c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)c2_b_c - 1) << 8)) -
              1];
          } else {
            c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
              c2_label;
            c2_i14 = (int32_T)(c2_label + 1.0);
            if ((c2_i14 < 1) || (c2_i14 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i14, 1, 32769, &c2_vc_emlrtBCI,
                &c2_st);
            }

            chartInstance->c2_P[c2_i14 - 1] = c2_label;
            c2_label++;
          }
        } else {
          c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] = 0.0;
        }
      }
    }

    c2_d8 = muDoubleScalarRound(c2_label - c2_firstLabel);
    if (c2_d8 < 2.147483648E+9) {
      if (c2_d8 >= -2.147483648E+9) {
        c2_i8 = (int32_T)c2_d8;
      } else {
        c2_i8 = MIN_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c2_d8 >= 2.147483648E+9) {
      c2_i8 = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_i8 = 0;
    }

    c2_chunksSizeAndLabels[(int32_T)(c2_startC + 1.0) - 1] = c2_i8;
  }

  c2_c = c2_chunksSizeAndLabels[0];
  while ((real_T)c2_c <= 256.0) {
    for (c2_b_r = 0; c2_b_r < 256; c2_b_r++) {
      c2_c_r = (real_T)c2_b_r + 1.0;
      if ((c2_c < 1) || (c2_c > 256)) {
        emlrtDynamicBoundsCheckR2012b(c2_c, 1, 256, &c2_ad_emlrtBCI, &c2_st);
      }

      c2_d = c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1];
      c2_b_st.site = &c2_ri_emlrtRSI;
      c2_f_x = c2_d;
      c2_g_x = c2_f_x;
      c2_b = muDoubleScalarIsNaN(c2_g_x);
      if (c2_b) {
        c2_b_y = NULL;
        sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c2_c_y = NULL;
        sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
      }

      if (c2_d != 0.0) {
        if (c2_c_r > 1.0) {
          c2_b_q0 = c2_c;
          c2_b_q1 = 1;
          if ((c2_b_q1 < 0) && (c2_b_q0 > c2_b_q1 + MAX_int32_T)) {
            c2_b_qY = MAX_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
          } else if ((c2_b_q1 > 0) && (c2_b_q0 < c2_b_q1 + MIN_int32_T)) {
            c2_b_qY = MIN_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
          } else {
            c2_b_qY = c2_b_q0 - c2_b_q1;
          }

          c2_i3 = c2_b_qY;
          if ((c2_i3 < 1) || (c2_i3 > 256)) {
            emlrtDynamicBoundsCheckR2012b(c2_i3, 1, 256, &c2_cd_emlrtBCI, &c2_st);
          }

          c2_d4 = c2_c_L[((int32_T)(c2_c_r - 1.0) + ((c2_i3 - 1) << 8)) - 1];
          c2_b_st.site = &c2_si_emlrtRSI;
          c2_s_x = c2_d4;
          c2_t_x = c2_s_x;
          c2_b_b = muDoubleScalarIsNaN(c2_t_x);
          if (c2_b_b) {
            c2_d_y = NULL;
            sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2,
              1, 19), false);
            c2_f_y = NULL;
            sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2,
              1, 19), false);
            sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_d_y,
                        14, sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_f_y)));
          }

          if (c2_d4 != 0.0) {
            c2_b_st.site = &c2_ti_emlrtRSI;
            c2_e_q0 = c2_c;
            c2_e_q1 = 1;
            if ((c2_e_q1 < 0) && (c2_e_q0 > c2_e_q1 + MAX_int32_T)) {
              c2_e_qY = MAX_int32_T;
              sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
            } else if ((c2_e_q1 > 0) && (c2_e_q0 < c2_e_q1 + MIN_int32_T)) {
              c2_e_qY = MIN_int32_T;
              sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
            } else {
              c2_e_qY = c2_e_q0 - c2_e_q1;
            }

            c2_i10 = c2_e_qY;
            if ((c2_i10 < 1) || (c2_i10 > 256)) {
              emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 256, &c2_gd_emlrtBCI,
                &c2_b_st);
            }

            c2_b_i = c2_c_L[((int32_T)(c2_c_r - 1.0) + ((c2_i10 - 1) << 8)) - 1];
            c2_j = c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1];
            c2_c_st.site = &c2_bj_emlrtRSI;
            c2_e_i = c2_b_i;
            c2_d9 = c2_e_i;
            do {
              c2_exitg1 = 0;
              c2_i16 = (int32_T)(c2_d9 + 1.0);
              if ((c2_i16 < 1) || (c2_i16 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i16, 1, 32769, &c2_jd_emlrtBCI,
                  &c2_c_st);
              }

              if (chartInstance->c2_P[c2_i16 - 1] < c2_d9) {
                c2_i21 = (int32_T)(c2_d9 + 1.0);
                if ((c2_i21 < 1) || (c2_i21 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i21, 1, 32769,
                    &c2_kd_emlrtBCI, &c2_c_st);
                }

                c2_d9 = chartInstance->c2_P[c2_i21 - 1];
              } else {
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);

            if (c2_b_i != c2_j) {
              c2_c_st.site = &c2_cj_emlrtRSI;
              c2_h_i = c2_j;
              c2_b_rootj = c2_h_i;
              do {
                c2_exitg1 = 0;
                c2_i30 = (int32_T)(c2_b_rootj + 1.0);
                if ((c2_i30 < 1) || (c2_i30 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i30, 1, 32769,
                    &c2_jd_emlrtBCI, &c2_c_st);
                }

                if (chartInstance->c2_P[c2_i30 - 1] < c2_b_rootj) {
                  c2_i41 = (int32_T)(c2_b_rootj + 1.0);
                  if ((c2_i41 < 1) || (c2_i41 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i41, 1, 32769,
                      &c2_kd_emlrtBCI, &c2_c_st);
                  }

                  c2_b_rootj = chartInstance->c2_P[c2_i41 - 1];
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              if (c2_d9 > c2_b_rootj) {
                c2_d9 = c2_b_rootj;
              }

              c2_c_st.site = &c2_dj_emlrtRSI;
              c2_n_i = c2_j;
              c2_d_root = c2_d9;
              do {
                c2_exitg1 = 0;
                c2_i61 = (int32_T)(c2_n_i + 1.0);
                if ((c2_i61 < 1) || (c2_i61 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i61, 1, 32769,
                    &c2_pd_emlrtBCI, &c2_c_st);
                }

                if (chartInstance->c2_P[c2_i61 - 1] < c2_n_i) {
                  c2_i68 = (int32_T)(c2_n_i + 1.0);
                  if ((c2_i68 < 1) || (c2_i68 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i68, 1, 32769,
                      &c2_qd_emlrtBCI, &c2_c_st);
                  }

                  c2_h_j = chartInstance->c2_P[c2_i68 - 1];
                  c2_i72 = (int32_T)(c2_n_i + 1.0);
                  if ((c2_i72 < 1) || (c2_i72 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i72, 1, 32769,
                      &c2_wc_emlrtBCI, &c2_c_st);
                  }

                  chartInstance->c2_P[c2_i72 - 1] = c2_d_root;
                  c2_n_i = c2_h_j;
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              c2_i71 = (int32_T)(c2_n_i + 1.0);
              if ((c2_i71 < 1) || (c2_i71 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i71, 1, 32769, &c2_xc_emlrtBCI,
                  &c2_c_st);
              }

              chartInstance->c2_P[c2_i71 - 1] = c2_d_root;
            }

            c2_c_st.site = &c2_ej_emlrtRSI;
            c2_i_i = c2_b_i;
            c2_root = c2_d9;
            do {
              c2_exitg1 = 0;
              c2_i32 = (int32_T)(c2_i_i + 1.0);
              if ((c2_i32 < 1) || (c2_i32 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i32, 1, 32769, &c2_pd_emlrtBCI,
                  &c2_c_st);
              }

              if (chartInstance->c2_P[c2_i32 - 1] < c2_i_i) {
                c2_i43 = (int32_T)(c2_i_i + 1.0);
                if ((c2_i43 < 1) || (c2_i43 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i43, 1, 32769,
                    &c2_qd_emlrtBCI, &c2_c_st);
                }

                c2_e_j = chartInstance->c2_P[c2_i43 - 1];
                c2_i53 = (int32_T)(c2_i_i + 1.0);
                if ((c2_i53 < 1) || (c2_i53 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i53, 1, 32769,
                    &c2_wc_emlrtBCI, &c2_c_st);
                }

                chartInstance->c2_P[c2_i53 - 1] = c2_root;
                c2_i_i = c2_e_j;
              } else {
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);

            c2_i51 = (int32_T)(c2_i_i + 1.0);
            if ((c2_i51 < 1) || (c2_i51 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i51, 1, 32769, &c2_xc_emlrtBCI,
                &c2_c_st);
            }

            chartInstance->c2_P[c2_i51 - 1] = c2_root;
            c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1] = c2_d9;
          }
        }

        if (c2_c_r < 256.0) {
          c2_c_q0 = c2_c;
          c2_c_q1 = 1;
          if ((c2_c_q1 < 0) && (c2_c_q0 > c2_c_q1 + MAX_int32_T)) {
            c2_c_qY = MAX_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
          } else if ((c2_c_q1 > 0) && (c2_c_q0 < c2_c_q1 + MIN_int32_T)) {
            c2_c_qY = MIN_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
          } else {
            c2_c_qY = c2_c_q0 - c2_c_q1;
          }

          c2_i4 = c2_c_qY;
          if ((c2_i4 < 1) || (c2_i4 > 256)) {
            emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 256, &c2_dd_emlrtBCI, &c2_st);
          }

          c2_d5 = c2_c_L[((int32_T)(c2_c_r + 1.0) + ((c2_i4 - 1) << 8)) - 1];
          c2_b_st.site = &c2_ui_emlrtRSI;
          c2_v_x = c2_d5;
          c2_y_x = c2_v_x;
          c2_c_b = muDoubleScalarIsNaN(c2_y_x);
          if (c2_c_b) {
            c2_e_y = NULL;
            sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2,
              1, 19), false);
            c2_i_y = NULL;
            sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2,
              1, 19), false);
            sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_e_y,
                        14, sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_i_y)));
          }

          if (c2_d5 != 0.0) {
            c2_b_st.site = &c2_vi_emlrtRSI;
            c2_g_q0 = c2_c;
            c2_g_q1 = 1;
            if ((c2_g_q1 < 0) && (c2_g_q0 > c2_g_q1 + MAX_int32_T)) {
              c2_g_qY = MAX_int32_T;
              sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
            } else if ((c2_g_q1 > 0) && (c2_g_q0 < c2_g_q1 + MIN_int32_T)) {
              c2_g_qY = MIN_int32_T;
              sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
            } else {
              c2_g_qY = c2_g_q0 - c2_g_q1;
            }

            c2_i11 = c2_g_qY;
            if ((c2_i11 < 1) || (c2_i11 > 256)) {
              emlrtDynamicBoundsCheckR2012b(c2_i11, 1, 256, &c2_hd_emlrtBCI,
                &c2_b_st);
            }

            c2_c_i = c2_c_L[((int32_T)(c2_c_r + 1.0) + ((c2_i11 - 1) << 8)) - 1];
            c2_b_j = c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1];
            c2_c_st.site = &c2_bj_emlrtRSI;
            c2_f_i = c2_c_i;
            c2_d10 = c2_f_i;
            do {
              c2_exitg1 = 0;
              c2_i18 = (int32_T)(c2_d10 + 1.0);
              if ((c2_i18 < 1) || (c2_i18 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i18, 1, 32769, &c2_jd_emlrtBCI,
                  &c2_c_st);
              }

              if (chartInstance->c2_P[c2_i18 - 1] < c2_d10) {
                c2_i24 = (int32_T)(c2_d10 + 1.0);
                if ((c2_i24 < 1) || (c2_i24 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i24, 1, 32769,
                    &c2_kd_emlrtBCI, &c2_c_st);
                }

                c2_d10 = chartInstance->c2_P[c2_i24 - 1];
              } else {
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);

            if (c2_c_i != c2_b_j) {
              c2_c_st.site = &c2_cj_emlrtRSI;
              c2_j_i = c2_b_j;
              c2_c_rootj = c2_j_i;
              do {
                c2_exitg1 = 0;
                c2_i35 = (int32_T)(c2_c_rootj + 1.0);
                if ((c2_i35 < 1) || (c2_i35 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i35, 1, 32769,
                    &c2_jd_emlrtBCI, &c2_c_st);
                }

                if (chartInstance->c2_P[c2_i35 - 1] < c2_c_rootj) {
                  c2_i46 = (int32_T)(c2_c_rootj + 1.0);
                  if ((c2_i46 < 1) || (c2_i46 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i46, 1, 32769,
                      &c2_kd_emlrtBCI, &c2_c_st);
                  }

                  c2_c_rootj = chartInstance->c2_P[c2_i46 - 1];
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              if (c2_d10 > c2_c_rootj) {
                c2_d10 = c2_c_rootj;
              }

              c2_c_st.site = &c2_dj_emlrtRSI;
              c2_p_i = c2_b_j;
              c2_e_root = c2_d10;
              do {
                c2_exitg1 = 0;
                c2_i63 = (int32_T)(c2_p_i + 1.0);
                if ((c2_i63 < 1) || (c2_i63 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i63, 1, 32769,
                    &c2_pd_emlrtBCI, &c2_c_st);
                }

                if (chartInstance->c2_P[c2_i63 - 1] < c2_p_i) {
                  c2_i69 = (int32_T)(c2_p_i + 1.0);
                  if ((c2_i69 < 1) || (c2_i69 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i69, 1, 32769,
                      &c2_qd_emlrtBCI, &c2_c_st);
                  }

                  c2_i_j = chartInstance->c2_P[c2_i69 - 1];
                  c2_i76 = (int32_T)(c2_p_i + 1.0);
                  if ((c2_i76 < 1) || (c2_i76 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i76, 1, 32769,
                      &c2_wc_emlrtBCI, &c2_c_st);
                  }

                  chartInstance->c2_P[c2_i76 - 1] = c2_e_root;
                  c2_p_i = c2_i_j;
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              c2_i73 = (int32_T)(c2_p_i + 1.0);
              if ((c2_i73 < 1) || (c2_i73 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i73, 1, 32769, &c2_xc_emlrtBCI,
                  &c2_c_st);
              }

              chartInstance->c2_P[c2_i73 - 1] = c2_e_root;
            }

            c2_c_st.site = &c2_ej_emlrtRSI;
            c2_l_i = c2_c_i;
            c2_b_root = c2_d10;
            do {
              c2_exitg1 = 0;
              c2_i39 = (int32_T)(c2_l_i + 1.0);
              if ((c2_i39 < 1) || (c2_i39 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i39, 1, 32769, &c2_pd_emlrtBCI,
                  &c2_c_st);
              }

              if (chartInstance->c2_P[c2_i39 - 1] < c2_l_i) {
                c2_i49 = (int32_T)(c2_l_i + 1.0);
                if ((c2_i49 < 1) || (c2_i49 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i49, 1, 32769,
                    &c2_qd_emlrtBCI, &c2_c_st);
                }

                c2_f_j = chartInstance->c2_P[c2_i49 - 1];
                c2_i57 = (int32_T)(c2_l_i + 1.0);
                if ((c2_i57 < 1) || (c2_i57 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i57, 1, 32769,
                    &c2_wc_emlrtBCI, &c2_c_st);
                }

                chartInstance->c2_P[c2_i57 - 1] = c2_b_root;
                c2_l_i = c2_f_j;
              } else {
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);

            c2_i55 = (int32_T)(c2_l_i + 1.0);
            if ((c2_i55 < 1) || (c2_i55 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i55, 1, 32769, &c2_xc_emlrtBCI,
                &c2_c_st);
            }

            chartInstance->c2_P[c2_i55 - 1] = c2_b_root;
            c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1] = c2_d10;
          }
        }

        c2_d_q0 = c2_c;
        c2_d_q1 = 1;
        if ((c2_d_q1 < 0) && (c2_d_q0 > c2_d_q1 + MAX_int32_T)) {
          c2_d_qY = MAX_int32_T;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        } else if ((c2_d_q1 > 0) && (c2_d_q0 < c2_d_q1 + MIN_int32_T)) {
          c2_d_qY = MIN_int32_T;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        } else {
          c2_d_qY = c2_d_q0 - c2_d_q1;
        }

        c2_i5 = c2_d_qY;
        if ((c2_i5 < 1) || (c2_i5 > 256)) {
          emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 256, &c2_ed_emlrtBCI, &c2_st);
        }

        c2_d6 = c2_c_L[((int32_T)c2_c_r + ((c2_i5 - 1) << 8)) - 1];
        c2_b_st.site = &c2_wi_emlrtRSI;
        c2_x_x = c2_d6;
        c2_ab_x = c2_x_x;
        c2_d_b = muDoubleScalarIsNaN(c2_ab_x);
        if (c2_d_b) {
          c2_h_y = NULL;
          sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1,
            19), false);
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1,
            19), false);
          sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                      sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_j_y)));
        }

        if (c2_d6 != 0.0) {
          c2_b_st.site = &c2_xi_emlrtRSI;
          c2_h_q0 = c2_c;
          c2_h_q1 = 1;
          if ((c2_h_q1 < 0) && (c2_h_q0 > c2_h_q1 + MAX_int32_T)) {
            c2_h_qY = MAX_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
          } else if ((c2_h_q1 > 0) && (c2_h_q0 < c2_h_q1 + MIN_int32_T)) {
            c2_h_qY = MIN_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
          } else {
            c2_h_qY = c2_h_q0 - c2_h_q1;
          }

          c2_i12 = c2_h_qY;
          if ((c2_i12 < 1) || (c2_i12 > 256)) {
            emlrtDynamicBoundsCheckR2012b(c2_i12, 1, 256, &c2_id_emlrtBCI,
              &c2_b_st);
          }

          c2_d_i = c2_c_L[((int32_T)c2_c_r + ((c2_i12 - 1) << 8)) - 1];
          c2_c_j = c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1];
          c2_c_st.site = &c2_bj_emlrtRSI;
          c2_g_i = c2_d_i;
          c2_d11 = c2_g_i;
          do {
            c2_exitg1 = 0;
            c2_i19 = (int32_T)(c2_d11 + 1.0);
            if ((c2_i19 < 1) || (c2_i19 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i19, 1, 32769, &c2_jd_emlrtBCI,
                &c2_c_st);
            }

            if (chartInstance->c2_P[c2_i19 - 1] < c2_d11) {
              c2_i25 = (int32_T)(c2_d11 + 1.0);
              if ((c2_i25 < 1) || (c2_i25 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i25, 1, 32769, &c2_kd_emlrtBCI,
                  &c2_c_st);
              }

              c2_d11 = chartInstance->c2_P[c2_i25 - 1];
            } else {
              c2_exitg1 = 1;
            }
          } while (c2_exitg1 == 0);

          if (c2_d_i != c2_c_j) {
            c2_c_st.site = &c2_cj_emlrtRSI;
            c2_k_i = c2_c_j;
            c2_d_rootj = c2_k_i;
            do {
              c2_exitg1 = 0;
              c2_i38 = (int32_T)(c2_d_rootj + 1.0);
              if ((c2_i38 < 1) || (c2_i38 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i38, 1, 32769, &c2_jd_emlrtBCI,
                  &c2_c_st);
              }

              if (chartInstance->c2_P[c2_i38 - 1] < c2_d_rootj) {
                c2_i48 = (int32_T)(c2_d_rootj + 1.0);
                if ((c2_i48 < 1) || (c2_i48 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i48, 1, 32769,
                    &c2_kd_emlrtBCI, &c2_c_st);
                }

                c2_d_rootj = chartInstance->c2_P[c2_i48 - 1];
              } else {
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);

            if (c2_d11 > c2_d_rootj) {
              c2_d11 = c2_d_rootj;
            }

            c2_c_st.site = &c2_dj_emlrtRSI;
            c2_q_i = c2_c_j;
            c2_f_root = c2_d11;
            do {
              c2_exitg1 = 0;
              c2_i66 = (int32_T)(c2_q_i + 1.0);
              if ((c2_i66 < 1) || (c2_i66 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i66, 1, 32769, &c2_pd_emlrtBCI,
                  &c2_c_st);
              }

              if (chartInstance->c2_P[c2_i66 - 1] < c2_q_i) {
                c2_i70 = (int32_T)(c2_q_i + 1.0);
                if ((c2_i70 < 1) || (c2_i70 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i70, 1, 32769,
                    &c2_qd_emlrtBCI, &c2_c_st);
                }

                c2_j_j = chartInstance->c2_P[c2_i70 - 1];
                c2_i77 = (int32_T)(c2_q_i + 1.0);
                if ((c2_i77 < 1) || (c2_i77 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i77, 1, 32769,
                    &c2_wc_emlrtBCI, &c2_c_st);
                }

                chartInstance->c2_P[c2_i77 - 1] = c2_f_root;
                c2_q_i = c2_j_j;
              } else {
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);

            c2_i75 = (int32_T)(c2_q_i + 1.0);
            if ((c2_i75 < 1) || (c2_i75 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i75, 1, 32769, &c2_xc_emlrtBCI,
                &c2_c_st);
            }

            chartInstance->c2_P[c2_i75 - 1] = c2_f_root;
          }

          c2_c_st.site = &c2_ej_emlrtRSI;
          c2_m_i = c2_d_i;
          c2_c_root = c2_d11;
          do {
            c2_exitg1 = 0;
            c2_i40 = (int32_T)(c2_m_i + 1.0);
            if ((c2_i40 < 1) || (c2_i40 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i40, 1, 32769, &c2_pd_emlrtBCI,
                &c2_c_st);
            }

            if (chartInstance->c2_P[c2_i40 - 1] < c2_m_i) {
              c2_i50 = (int32_T)(c2_m_i + 1.0);
              if ((c2_i50 < 1) || (c2_i50 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i50, 1, 32769, &c2_qd_emlrtBCI,
                  &c2_c_st);
              }

              c2_g_j = chartInstance->c2_P[c2_i50 - 1];
              c2_i58 = (int32_T)(c2_m_i + 1.0);
              if ((c2_i58 < 1) || (c2_i58 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i58, 1, 32769, &c2_wc_emlrtBCI,
                  &c2_c_st);
              }

              chartInstance->c2_P[c2_i58 - 1] = c2_c_root;
              c2_m_i = c2_g_j;
            } else {
              c2_exitg1 = 1;
            }
          } while (c2_exitg1 == 0);

          c2_i56 = (int32_T)(c2_m_i + 1.0);
          if ((c2_i56 < 1) || (c2_i56 > 32769)) {
            emlrtDynamicBoundsCheckR2012b(c2_i56, 1, 32769, &c2_xc_emlrtBCI,
              &c2_c_st);
          }

          chartInstance->c2_P[c2_i56 - 1] = c2_c_root;
          c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1] = c2_d11;
        }
      }
    }

    if ((c2_c < 1) || (c2_c > 264)) {
      emlrtDynamicBoundsCheckR2012b(c2_c, 1, 264, &c2_yc_emlrtBCI, &c2_st);
    }

    c2_c = c2_chunksSizeAndLabels[c2_c - 1];
  }

  c2_numComponents = 1.0;
  c2_c = 1;
  while ((real_T)c2_c <= 256.0) {
    c2_q0 = c2_c;
    c2_q1 = 1;
    if ((c2_q1 < 0) && (c2_q0 > c2_q1 + MAX_int32_T)) {
      c2_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_q1 > 0) && (c2_q0 < c2_q1 + MIN_int32_T)) {
      c2_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_qY = c2_q0 - c2_q1;
    }

    c2_h_x = c2_qY;
    c2_i_x = c2_h_x;
    c2_j_x = c2_i_x;
    c2_k_x = c2_j_x;
    c2_b_a = c2_k_x;
    c2_m_x = c2_b_a;
    c2_z = (real_T)c2_m_x / 2.0;
    c2_d2 = muDoubleScalarRound(c2_z);
    if (c2_d2 < 2.147483648E+9) {
      if (c2_d2 >= -2.147483648E+9) {
        c2_i2 = (int32_T)c2_d2;
      } else {
        c2_i2 = MIN_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c2_d2 >= 2.147483648E+9) {
      c2_i2 = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_i2 = 0;
    }

    c2_b_z = c2_i2;
    c2_b_st.site = &c2_yi_emlrtRSI;
    c2_r_x = c2_b_z;
    c2_d_a = c2_r_x;
    c2_i6 = (int64_T)c2_d_a * 128LL;
    if (c2_i6 > 2147483647LL) {
      c2_i6 = 2147483647LL;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if (c2_i6 < -2147483648LL) {
      c2_i6 = -2147483648LL;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    }

    c2_g_y = (int32_T)c2_i6;
    c2_f_q0 = c2_g_y;
    c2_f_q1 = 1;
    if ((c2_f_q1 < 0) && (c2_f_q0 < MIN_int32_T - c2_f_q1)) {
      c2_f_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_f_q1 > 0) && (c2_f_q0 > MAX_int32_T - c2_f_q1)) {
      c2_f_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_f_qY = c2_f_q0 + c2_f_q1;
    }

    c2_stripeFirstLabel = c2_f_qY;
    c2_i_q0 = c2_stripeFirstLabel;
    c2_i_q1 = 1;
    if ((c2_i_q1 < 0) && (c2_i_q0 < MIN_int32_T - c2_i_q1)) {
      c2_i_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_i_q1 > 0) && (c2_i_q0 > MAX_int32_T - c2_i_q1)) {
      c2_i_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_i_qY = c2_i_q0 + c2_i_q1;
    }

    c2_i13 = c2_i_qY;
    c2_j_q0 = c2_c;
    c2_j_q1 = 1;
    if ((c2_j_q1 < 0) && (c2_j_q0 < MIN_int32_T - c2_j_q1)) {
      c2_j_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_j_q1 > 0) && (c2_j_q0 > MAX_int32_T - c2_j_q1)) {
      c2_j_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_j_qY = c2_j_q0 + c2_j_q1;
    }

    c2_i23 = c2_j_qY;
    if ((c2_i23 < 1) || (c2_i23 > 264)) {
      emlrtDynamicBoundsCheckR2012b(c2_i23, 1, 264, &c2_fd_emlrtBCI, &c2_st);
    }

    c2_k_q0 = c2_stripeFirstLabel;
    c2_k_q1 = c2_chunksSizeAndLabels[c2_i23 - 1];
    if ((c2_k_q0 < 0) && (c2_k_q1 < MIN_int32_T - c2_k_q0)) {
      c2_k_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_k_q0 > 0) && (c2_k_q1 > MAX_int32_T - c2_k_q0)) {
      c2_k_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_k_qY = c2_k_q0 + c2_k_q1;
    }

    c2_i31 = c2_k_qY;
    c2_b_st.site = &c2_aj_emlrtRSI;
    c2_e_a = c2_i13;
    c2_e_b = c2_i31;
    c2_f_a = c2_e_a;
    c2_f_b = c2_e_b;
    if (c2_f_a > c2_f_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_f_b > 2147483646);
    }

    if (c2_overflow) {
      c2_c_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
    }

    for (c2_o_i = c2_i13; c2_o_i <= c2_i31; c2_o_i++) {
      if ((c2_o_i < 1) || (c2_o_i > 32769)) {
        emlrtDynamicBoundsCheckR2012b(c2_o_i, 1, 32769, &c2_nd_emlrtBCI, &c2_st);
      }

      c2_l_q0 = c2_o_i;
      c2_l_q1 = 1;
      if ((c2_l_q1 < 0) && (c2_l_q0 > c2_l_q1 + MAX_int32_T)) {
        c2_l_qY = MAX_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else if ((c2_l_q1 > 0) && (c2_l_q0 < c2_l_q1 + MIN_int32_T)) {
        c2_l_qY = MIN_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c2_l_qY = c2_l_q0 - c2_l_q1;
      }

      if (chartInstance->c2_P[c2_o_i - 1] < (real_T)c2_l_qY) {
        c2_i74 = (int32_T)(chartInstance->c2_P[c2_o_i - 1] + 1.0);
        if ((c2_i74 < 1) || (c2_i74 > 32769)) {
          emlrtDynamicBoundsCheckR2012b(c2_i74, 1, 32769, &c2_od_emlrtBCI,
            &c2_st);
        }

        chartInstance->c2_P[c2_o_i - 1] = chartInstance->c2_P[c2_i74 - 1];
      } else {
        chartInstance->c2_P[c2_o_i - 1] = c2_numComponents;
        c2_numComponents++;
      }
    }

    if ((c2_c < 1) || (c2_c > 264)) {
      emlrtDynamicBoundsCheckR2012b(c2_c, 1, 264, &c2_md_emlrtBCI, &c2_st);
    }

    c2_c = c2_chunksSizeAndLabels[c2_c - 1];
  }

  for (c2_c_c = 0; c2_c_c < 256; c2_c_c++) {
    c2_d_c = (real_T)c2_c_c + 1.0;
    for (c2_d_r = 0; c2_d_r < 256; c2_d_r++) {
      c2_c_r = (real_T)c2_d_r + 1.0;
      c2_i = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_d_c - 1) << 8)) -
                       1] + 1.0);
      if ((c2_i < 1) || (c2_i > 32769)) {
        emlrtDynamicBoundsCheckR2012b(c2_i, 1, 32769, &c2_bd_emlrtBCI, &c2_st);
      }

      c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_d_c - 1) << 8)) - 1] =
        chartInstance->c2_P[c2_i - 1];
    }
  }
}

static void c2_padarray(SFc2_real_time_testInstanceStruct *chartInstance, real_T
  c2_c_varargin_1[65536], real_T c2_b[66564])
{
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_c_a;
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_d_a;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c;
  int32_T c2_c_c;
  int32_T c2_d_c;
  int32_T c2_d_i;
  int32_T c2_d_j;
  int32_T c2_i;
  int32_T c2_j;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 258; c2_i++) {
    c2_c_i = (real_T)c2_i + 1.0;
    c2_b[(int32_T)c2_c_i - 1] = 0.0;
  }

  for (c2_b_i = 0; c2_b_i < 258; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_b[(int32_T)c2_c_i + 66305] = 0.0;
  }

  for (c2_j = 0; c2_j < 256; c2_j++) {
    c2_c_j = (real_T)c2_j + 1.0;
    c2_a = c2_c_j;
    c2_c = (int32_T)c2_a;
    c2_b[258 * c2_c] = 0.0;
  }

  for (c2_b_j = 0; c2_b_j < 256; c2_b_j++) {
    c2_c_j = (real_T)c2_b_j + 1.0;
    c2_b_a = c2_c_j;
    c2_b_c = (int32_T)c2_b_a;
    c2_b[257 + 258 * c2_b_c] = 0.0;
  }

  for (c2_d_j = 0; c2_d_j < 256; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 256; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_c_a = c2_c_i;
      c2_c_c = (int32_T)c2_c_a;
      c2_d_a = c2_c_j;
      c2_d_c = (int32_T)c2_d_a;
      c2_b[c2_c_c + 258 * c2_d_c] = c2_c_varargin_1[((int32_T)c2_c_i +
        (((int32_T)c2_c_j - 1) << 8)) - 1];
    }
  }
}

static void c2_BoundaryFinder_findBoundaries(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_images_internal_coder_BoundaryFinder *c2_obj, c2_emxArray_cell_wrap_1 *c2_B)
{
  static int32_T c2_ndl4c[8] = { 1, 2, 3, 0, 0, 0, 0, 0 };

  static int32_T c2_ndl8c[8] = { 1, 2, 3, 4, 5, 6, 7, 0 };

  static int32_T c2_nsdl4c[8] = { 3, 0, 1, 2, 0, 0, 0, 0 };

  static int32_T c2_nsdl8c[8] = { 7, 7, 1, 1, 3, 3, 5, 5 };

  c2_emxArray_boolean_T *c2_regionHasBeenTraced;
  c2_emxArray_cell_wrap_1 *c2_b_r;
  c2_emxArray_int32_T *c2_b_scratch;
  c2_emxArray_int32_T *c2_scratch;
  c2_emxArray_real_T *c2_boundary;
  c2_images_internal_coder_BoundaryFinder *c2_b_obj;
  c2_images_internal_coder_BoundaryFinder *c2_c_obj;
  c2_images_internal_coder_BoundaryFinder *c2_d_obj;
  c2_images_internal_coder_BoundaryFinder *c2_e_obj;
  c2_images_internal_coder_BoundaryFinder *c2_f_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_b_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_label;
  real_T c2_numRegions;
  real_T c2_previousLabel;
  real_T c2_x;
  int32_T c2_iv[2];
  int32_T c2_M;
  int32_T c2_N;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_B;
  int32_T c2_b_M;
  int32_T c2_b_N;
  int32_T c2_b_a;
  int32_T c2_b_b;
  int32_T c2_b_k;
  int32_T c2_b_label;
  int32_T c2_b_loop_ub;
  int32_T c2_b_numPixels;
  int32_T c2_b_scratchLength;
  int32_T c2_c;
  int32_T c2_c_B;
  int32_T c2_c_M;
  int32_T c2_c_b;
  int32_T c2_c_k;
  int32_T c2_c_loop_ub;
  int32_T c2_c_r;
  int32_T c2_col;
  int32_T c2_currentPixel;
  int32_T c2_d_B;
  int32_T c2_d_b;
  int32_T c2_d_k;
  int32_T c2_direction;
  int32_T c2_e_b;
  int32_T c2_e_k;
  int32_T c2_f_b;
  int32_T c2_f_k;
  int32_T c2_g_b;
  int32_T c2_g_k;
  int32_T c2_h_b;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_b;
  int32_T c2_idx;
  int32_T c2_initDepartureDir;
  int32_T c2_j_b;
  int32_T c2_k;
  int32_T c2_l_b;
  int32_T c2_linearIdx;
  int32_T c2_loop_ub;
  int32_T c2_m_b;
  int32_T c2_n_b;
  int32_T c2_neighbor;
  int32_T c2_nextSearchDir;
  int32_T c2_numElements;
  int32_T c2_numPixels;
  int32_T c2_row;
  int32_T c2_scratchLength;
  int32_T c2_scratchLengthIn;
  boolean_T c2_b_overflow;
  boolean_T c2_c_overflow;
  boolean_T c2_d_overflow;
  boolean_T c2_e_overflow;
  boolean_T c2_exitg1;
  boolean_T c2_foundNextPixel;
  boolean_T c2_guard1 = false;
  boolean_T c2_isDone;
  boolean_T c2_k_b;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_M = c2_obj->numRows;
  c2_N = c2_obj->numCols - 1;
  c2_st.site = &c2_hj_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_b_M = c2_b_obj->numRows;
  c2_b_N = c2_b_obj->numCols;
  c2_numRegions = 0.0;
  c2_numElements = c2_b_M * c2_b_N;
  c2_b_st.site = &c2_nj_emlrtRSI;
  c2_b = c2_numElements;
  c2_b_b = c2_b;
  if (1 > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_c_st.site = &c2_ac_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
  }

  for (c2_k = 1; c2_k - 1 < c2_numElements; c2_k++) {
    c2_b_k = c2_k;
    if ((c2_b_k < 1) || (c2_b_k > 66564)) {
      emlrtDynamicBoundsCheckR2012b(c2_b_k, 1, 66564, &c2_re_emlrtBCI, &c2_st);
    }

    c2_label = c2_b_obj->paddedLabelMatrix[c2_b_k - 1];
    if (c2_label > c2_numRegions) {
      c2_numRegions = c2_label;
    }
  }

  c2_emxInit_boolean_T(chartInstance, &c2_st, &c2_regionHasBeenTraced, 1,
                       &c2_fc_emlrtRTEI);
  c2_emxInit_cell_wrap_1(chartInstance, &c2_st, &c2_b_r, 1, &c2_dc_emlrtRTEI);
  if (c2_numRegions != (real_T)(int32_T)muDoubleScalarFloor(c2_numRegions)) {
    emlrtIntegerCheckR2012b(c2_numRegions, &c2_g_emlrtDCI, (void *)c2_sp);
  }

  c2_iv[0] = (int32_T)c2_numRegions;
  c2_i = c2_b_r->size[0];
  c2_b_r->size[0] = c2_iv[0];
  c2_emxEnsureCapacity_cell_wrap_1(chartInstance, c2_sp, c2_b_r, c2_i,
    &c2_dc_emlrtRTEI);
  c2_i1 = c2_B->size[0];
  c2_B->size[0] = c2_b_r->size[0];
  c2_st.site = &c2_qk_emlrtRSI;
  c2_emxEnsureCapacity_cell_wrap_1(chartInstance, &c2_st, c2_B, c2_i1,
    &c2_ec_emlrtRTEI);
  c2_i2 = c2_regionHasBeenTraced->size[0];
  if (c2_numRegions != (real_T)(int32_T)muDoubleScalarFloor(c2_numRegions)) {
    emlrtIntegerCheckR2012b(c2_numRegions, &c2_h_emlrtDCI, (void *)c2_sp);
  }

  c2_regionHasBeenTraced->size[0] = (int32_T)c2_numRegions;
  c2_st.site = &c2_lk_emlrtRSI;
  c2_emxEnsureCapacity_boolean_T(chartInstance, &c2_st, c2_regionHasBeenTraced,
    c2_i2, &c2_fc_emlrtRTEI);
  if (c2_numRegions != (real_T)(int32_T)muDoubleScalarFloor(c2_numRegions)) {
    emlrtIntegerCheckR2012b(c2_numRegions, &c2_h_emlrtDCI, (void *)c2_sp);
  }

  c2_loop_ub = (int32_T)c2_numRegions - 1;
  c2_emxFree_cell_wrap_1(chartInstance, &c2_b_r);
  for (c2_i3 = 0; c2_i3 <= c2_loop_ub; c2_i3++) {
    c2_regionHasBeenTraced->data[c2_i3] = false;
  }

  if (c2_numRegions > 0.0) {
    c2_st.site = &c2_ij_emlrtRSI;
    c2_c_obj = c2_obj;
    c2_c_obj->startMarker = -2.0;
    c2_c_obj->boundaryMarker = -3.0;
    c2_c_M = c2_c_obj->numRows;
    if (c2_c_obj->conn == 8.0) {
      c2_c_obj->neighborOffsets[0] = -1;
      c2_c_obj->neighborOffsets[1] = c2_c_M - 1;
      c2_c_obj->neighborOffsets[2] = c2_c_M;
      c2_c_obj->neighborOffsets[3] = c2_c_M + 1;
      c2_c_obj->neighborOffsets[4] = 1;
      c2_c_obj->neighborOffsets[5] = 1 - c2_c_M;
      c2_c_obj->neighborOffsets[6] = -c2_c_M;
      c2_c_obj->neighborOffsets[7] = -c2_c_M - 1;
      c2_c_obj->validationOffsets[0] = -1;
      c2_c_obj->validationOffsets[1] = c2_c_M;
      c2_c_obj->validationOffsets[2] = 1;
      c2_c_obj->validationOffsets[3] = -c2_c_M;
      c2_c_obj->validationOffsets[4] = 0;
      c2_c_obj->validationOffsets[5] = 0;
      c2_c_obj->validationOffsets[6] = 0;
      c2_c_obj->validationOffsets[7] = 0;
    } else {
      c2_c_obj->neighborOffsets[0] = -1;
      c2_c_obj->neighborOffsets[1] = c2_c_M;
      c2_c_obj->neighborOffsets[2] = 1;
      c2_c_obj->neighborOffsets[3] = -c2_c_M;
      c2_c_obj->neighborOffsets[4] = 0;
      c2_c_obj->neighborOffsets[5] = 0;
      c2_c_obj->neighborOffsets[6] = 0;
      c2_c_obj->neighborOffsets[7] = 0;
      c2_c_obj->validationOffsets[0] = -1;
      c2_c_obj->validationOffsets[1] = c2_c_M - 1;
      c2_c_obj->validationOffsets[2] = c2_c_M;
      c2_c_obj->validationOffsets[3] = c2_c_M + 1;
      c2_c_obj->validationOffsets[4] = 1;
      c2_c_obj->validationOffsets[5] = 1 - c2_c_M;
      c2_c_obj->validationOffsets[6] = -c2_c_M;
      c2_c_obj->validationOffsets[7] = -c2_c_M - 1;
    }

    if (c2_c_obj->conn == 8.0) {
      for (c2_i5 = 0; c2_i5 < 8; c2_i5++) {
        c2_c_obj->nextDirectionLut[c2_i5] = c2_ndl8c[c2_i5];
      }

      for (c2_i7 = 0; c2_i7 < 8; c2_i7++) {
        c2_c_obj->nextSearchDirectionLut[c2_i7] = c2_nsdl8c[c2_i7];
      }
    } else {
      for (c2_i4 = 0; c2_i4 < 8; c2_i4++) {
        c2_c_obj->nextDirectionLut[c2_i4] = c2_ndl4c[c2_i4];
      }

      for (c2_i6 = 0; c2_i6 < 8; c2_i6++) {
        c2_c_obj->nextSearchDirectionLut[c2_i6] = c2_nsdl4c[c2_i6];
      }
    }

    c2_st.site = &c2_jj_emlrtRSI;
    c2_d_obj = c2_obj;
    c2_d_obj->nextSearchDir = 1;
    c2_i8 = c2_N;
    c2_st.site = &c2_kj_emlrtRSI;
    c2_c_b = c2_i8;
    c2_d_b = c2_c_b;
    if (2 > c2_d_b) {
      c2_b_overflow = false;
    } else {
      c2_b_overflow = (c2_d_b > 2147483646);
    }

    if (c2_b_overflow) {
      c2_b_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
    }

    c2_c = 1;
    c2_emxInit_real_T(chartInstance, c2_sp, &c2_boundary, 2, &c2_lc_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, c2_sp, &c2_scratch, 1, &c2_mc_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, c2_sp, &c2_b_scratch, 1, &c2_dc_emlrtRTEI);
    while (c2_c + 1 <= c2_i8) {
      c2_i9 = c2_M - 1;
      c2_st.site = &c2_lj_emlrtRSI;
      c2_e_b = c2_i9;
      c2_f_b = c2_e_b;
      if (2 > c2_f_b) {
        c2_c_overflow = false;
      } else {
        c2_c_overflow = (c2_f_b > 2147483646);
      }

      if (c2_c_overflow) {
        c2_b_st.site = &c2_ac_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
      }

      for (c2_c_r = 2; c2_c_r <= c2_i9; c2_c_r++) {
        c2_linearIdx = c2_M * c2_c + c2_c_r;
        if ((c2_linearIdx < 1) || (c2_linearIdx > 66564)) {
          emlrtDynamicBoundsCheckR2012b(c2_linearIdx, 1, 66564, &c2_se_emlrtBCI,
            (void *)c2_sp);
        }

        c2_b_label = (int32_T)c2_obj->paddedLabelMatrix[c2_linearIdx - 1];
        c2_i10 = c2_linearIdx - 1;
        if ((c2_i10 < 1) || (c2_i10 > 66564)) {
          emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 66564, &c2_te_emlrtBCI, (void
            *)c2_sp);
        }

        c2_previousLabel = c2_obj->paddedLabelMatrix[c2_i10 - 1];
        if ((c2_b_label > 0) && (c2_previousLabel == 0.0)) {
          c2_i11 = c2_regionHasBeenTraced->size[0];
          if ((c2_b_label < 1) || (c2_b_label > c2_i11)) {
            emlrtDynamicBoundsCheckR2012b(c2_b_label, 1, c2_i11, &c2_ue_emlrtBCI,
              (void *)c2_sp);
          }

          if (!c2_regionHasBeenTraced->data[c2_b_label - 1]) {
            c2_st.site = &c2_mj_emlrtRSI;
            c2_e_obj = c2_obj;
            c2_idx = c2_linearIdx;
            c2_i12 = c2_scratch->size[0];
            c2_scratch->size[0] = 200;
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_scratch,
              c2_i12, &c2_gc_emlrtRTEI);
            c2_scratchLength = 200;
            c2_scratch->data[0] = c2_idx;
            c2_e_obj->paddedLabelMatrix[c2_idx - 1] = c2_e_obj->startMarker;
            c2_isDone = false;
            c2_numPixels = 2;
            c2_currentPixel = c2_idx;
            c2_nextSearchDir = c2_e_obj->nextSearchDir;
            c2_initDepartureDir = -1;
            while (!c2_isDone) {
              c2_direction = c2_nextSearchDir;
              c2_foundNextPixel = false;
              c2_d = c2_e_obj->conn;
              c2_i14 = (int32_T)c2_d;
              emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_d, mxDOUBLE_CLASS,
                c2_i14, &c2_kd_emlrtRTEI, &c2_st);
              c2_c_k = 0;
              c2_guard1 = false;
              c2_exitg1 = false;
              while ((!c2_exitg1) && (c2_c_k <= c2_i14 - 1)) {
                c2_a = c2_currentPixel;
                c2_i16 = c2_direction + 1;
                if ((c2_i16 < 1) || (c2_i16 > 8)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i16, 1, 8, &c2_ve_emlrtBCI,
                    &c2_st);
                }

                c2_i_b = c2_e_obj->neighborOffsets[c2_i16 - 1];
                c2_neighbor = c2_a + c2_i_b;
                if ((c2_neighbor < 1) || (c2_neighbor > 66564)) {
                  emlrtDynamicBoundsCheckR2012b(c2_neighbor, 1, 66564,
                    &c2_we_emlrtBCI, &c2_st);
                }

                c2_d2 = c2_e_obj->paddedLabelMatrix[c2_neighbor - 1];
                c2_b_st.site = &c2_oj_emlrtRSI;
                c2_x = c2_d2;
                c2_b_x = c2_x;
                c2_k_b = muDoubleScalarIsNaN(c2_b_x);
                if (c2_k_b) {
                  c2_b_y = NULL;
                  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U,
                    0U, 2, 1, 19), false);
                  c2_c_y = NULL;
                  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U,
                    0U, 2, 1, 19), false);
                  sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14,
                              c2_b_y, 14, sf_mex_call(&c2_b_st, NULL,
                    "getString", 1U, 1U, 14, sf_mex_call(&c2_b_st, NULL,
                    "message", 1U, 1U, 14, c2_c_y)));
                }

                if (c2_d2 != 0.0) {
                  if ((c2_e_obj->paddedLabelMatrix[c2_currentPixel - 1] ==
                       c2_e_obj->startMarker) && (c2_initDepartureDir == -1)) {
                    c2_initDepartureDir = c2_direction;
                    c2_guard1 = true;
                  } else if ((c2_e_obj->paddedLabelMatrix[c2_currentPixel - 1] ==
                              c2_e_obj->startMarker) && (c2_initDepartureDir ==
                              c2_direction)) {
                    c2_isDone = true;
                    c2_foundNextPixel = true;
                  } else {
                    c2_guard1 = true;
                  }

                  c2_exitg1 = true;
                } else {
                  c2_i24 = c2_direction + 1;
                  if ((c2_i24 < 1) || (c2_i24 > 8)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i24, 1, 8, &c2_ye_emlrtBCI,
                      &c2_st);
                  }

                  c2_direction = c2_e_obj->nextDirectionLut[c2_i24 - 1];
                  c2_c_k++;
                  c2_guard1 = false;
                }
              }

              if (c2_guard1) {
                c2_i15 = c2_direction + 1;
                if ((c2_i15 < 1) || (c2_i15 > 8)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 8, &c2_df_emlrtBCI,
                    &c2_st);
                }

                c2_nextSearchDir = c2_e_obj->nextSearchDirectionLut[c2_i15 - 1];
                c2_foundNextPixel = true;
                if (c2_scratchLength <= c2_numPixels) {
                  c2_b_st.site = &c2_pj_emlrtRSI;
                  c2_scratchLengthIn = c2_scratchLength;
                  c2_j_b = c2_scratchLengthIn;
                  c2_b_scratchLength = c2_j_b << 1;
                  c2_i19 = c2_b_scratch->size[0];
                  c2_b_scratch->size[0] = c2_b_scratchLength;
                  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st,
                    c2_b_scratch, c2_i19, &c2_jc_emlrtRTEI);
                  c2_c_st.site = &c2_rj_emlrtRSI;
                  c2_l_b = c2_scratchLengthIn;
                  c2_n_b = c2_l_b;
                  if (1 > c2_n_b) {
                    c2_e_overflow = false;
                  } else {
                    c2_e_overflow = (c2_n_b > 2147483646);
                  }

                  if (c2_e_overflow) {
                    c2_d_st.site = &c2_ac_emlrtRSI;
                    c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
                  }

                  for (c2_f_k = 1; c2_f_k - 1 < c2_scratchLengthIn; c2_f_k++) {
                    c2_g_k = c2_f_k;
                    c2_i34 = c2_scratch->size[0];
                    if ((c2_g_k < 1) || (c2_g_k > c2_i34)) {
                      emlrtDynamicBoundsCheckR2012b(c2_g_k, 1, c2_i34,
                        &c2_gf_emlrtBCI, &c2_b_st);
                    }

                    c2_i36 = c2_b_scratch->size[0];
                    if ((c2_g_k < 1) || (c2_g_k > c2_i36)) {
                      emlrtDynamicBoundsCheckR2012b(c2_g_k, 1, c2_i36,
                        &c2_hf_emlrtBCI, &c2_b_st);
                    }

                    c2_b_scratch->data[c2_g_k - 1] = c2_scratch->data[c2_g_k - 1];
                  }

                  c2_i32 = c2_scratch->size[0];
                  c2_scratch->size[0] = c2_b_scratch->size[0];
                  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_scratch,
                    c2_i32, &c2_kc_emlrtRTEI);
                  c2_b_loop_ub = c2_b_scratch->size[0] - 1;
                  for (c2_i35 = 0; c2_i35 <= c2_b_loop_ub; c2_i35++) {
                    c2_scratch->data[c2_i35] = c2_b_scratch->data[c2_i35];
                  }

                  c2_scratchLength = c2_b_scratchLength;
                }

                c2_i17 = c2_scratch->size[0];
                if ((c2_numPixels < 1) || (c2_numPixels > c2_i17)) {
                  emlrtDynamicBoundsCheckR2012b(c2_numPixels, 1, c2_i17,
                    &c2_ef_emlrtBCI, &c2_st);
                }

                c2_scratch->data[c2_numPixels - 1] = c2_neighbor;
                c2_numPixels++;
                if (c2_numPixels - 1 == MAX_int32_T) {
                  c2_isDone = true;
                } else {
                  if (c2_e_obj->paddedLabelMatrix[c2_neighbor - 1] !=
                      c2_e_obj->startMarker) {
                    c2_e_obj->paddedLabelMatrix[c2_neighbor - 1] =
                      c2_e_obj->boundaryMarker;
                  }

                  c2_currentPixel = c2_neighbor;
                }
              }

              if (!c2_foundNextPixel) {
                c2_numPixels = 3;
                c2_scratch->data[1] = c2_scratch->data[0];
                c2_isDone = true;
              }
            }

            c2_b_st.site = &c2_qj_emlrtRSI;
            c2_f_obj = c2_e_obj;
            c2_b_numPixels = c2_numPixels - 1;
            c2_i13 = c2_boundary->size[0] * c2_boundary->size[1];
            c2_d1 = (real_T)c2_b_numPixels;
            if (!(c2_d1 >= 0.0)) {
              emlrtNonNegativeCheckR2012b(c2_d1, &c2_i_emlrtDCI, &c2_b_st);
            }

            c2_boundary->size[0] = (int32_T)muDoubleScalarFloor(c2_d1);
            c2_boundary->size[1] = 2;
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_b_st, c2_boundary,
              c2_i13, &c2_hc_emlrtRTEI);
            c2_c_st.site = &c2_sj_emlrtRSI;
            c2_g_b = c2_b_numPixels;
            c2_h_b = c2_g_b;
            if (1 > c2_h_b) {
              c2_d_overflow = false;
            } else {
              c2_d_overflow = (c2_h_b > 2147483646);
            }

            if (c2_d_overflow) {
              c2_d_st.site = &c2_ac_emlrtRSI;
              c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
            }

            for (c2_d_k = 1; c2_d_k - 1 < c2_b_numPixels; c2_d_k++) {
              c2_e_k = c2_d_k;
              c2_i21 = c2_scratch->size[0];
              if ((c2_e_k < 1) || (c2_e_k > c2_i21)) {
                emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i21, &c2_xe_emlrtBCI,
                  &c2_b_st);
              }

              c2_b_a = c2_scratch->data[c2_e_k - 1];
              c2_m_b = c2_f_obj->numRows;
              c2_col = c2_div_s32(chartInstance, c2_b_a, c2_m_b, 0, 1U, 0, 0);
              c2_i26 = c2_scratch->size[0];
              if ((c2_e_k < 1) || (c2_e_k > c2_i26)) {
                emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i26, &c2_af_emlrtBCI,
                  &c2_b_st);
              }

              c2_row = c2_scratch->data[c2_e_k - 1] - c2_col * c2_f_obj->numRows;
              c2_i29 = c2_boundary->size[0];
              if ((c2_e_k < 1) || (c2_e_k > c2_i29)) {
                emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i29, &c2_bf_emlrtBCI,
                  &c2_b_st);
              }

              c2_boundary->data[c2_e_k - 1] = (real_T)(c2_row - 1);
              c2_i33 = c2_boundary->size[0];
              if ((c2_e_k < 1) || (c2_e_k > c2_i33)) {
                emlrtDynamicBoundsCheckR2012b(c2_e_k, 1, c2_i33, &c2_cf_emlrtBCI,
                  &c2_b_st);
              }

              c2_boundary->data[(c2_e_k + c2_boundary->size[0]) - 1] = (real_T)
                c2_col;
            }

            c2_i18 = c2_boundary->size[0] * c2_boundary->size[1];
            c2_i20 = c2_B->size[0] - 1;
            c2_i22 = c2_b_label - 1;
            if ((c2_i22 < 0) || (c2_i22 > c2_i20)) {
              emlrtDynamicBoundsCheckR2012b(c2_i22, 0, c2_i20, &c2_qe_emlrtBCI,
                (void *)c2_sp);
            }

            c2_i23 = c2_i22;
            c2_i25 = c2_B->data[c2_i23].f1->size[0] * c2_B->data[c2_i23]
              .f1->size[1];
            c2_B->data[c2_i23].f1->size[0] = c2_boundary->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_B->data[c2_i23]
              .f1, c2_i25, &c2_ic_emlrtRTEI);
            c2_i27 = c2_B->size[0] - 1;
            c2_i28 = c2_b_label - 1;
            if ((c2_i28 < 0) || (c2_i28 > c2_i27)) {
              emlrtDynamicBoundsCheckR2012b(c2_i28, 0, c2_i27, &c2_qe_emlrtBCI,
                (void *)c2_sp);
            }

            c2_i30 = c2_i28;
            c2_i31 = c2_B->data[c2_i30].f1->size[0] * c2_B->data[c2_i30]
              .f1->size[1];
            c2_B->data[c2_i30].f1->size[1] = 2;
            c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_B->data[c2_i30]
              .f1, c2_i31, &c2_ic_emlrtRTEI);
            c2_b_B = c2_B->size[0];
            c2_c_B = c2_B->size[0];
            c2_i37 = c2_c_B - 1;
            c2_i38 = c2_b_label - 1;
            if ((c2_i38 < 0) || (c2_i38 > c2_i37)) {
              emlrtDynamicBoundsCheckR2012b(c2_i38, 0, c2_i37, &c2_qe_emlrtBCI,
                (void *)c2_sp);
            }

            c2_d_B = c2_B->size[0];
            c2_i39 = c2_d_B - 1;
            c2_i40 = c2_b_label - 1;
            if ((c2_i40 < 0) || (c2_i40 > c2_i39)) {
              emlrtDynamicBoundsCheckR2012b(c2_i40, 0, c2_i39, &c2_qe_emlrtBCI,
                (void *)c2_sp);
            }

            c2_c_loop_ub = c2_i18 - 1;
            for (c2_i41 = 0; c2_i41 <= c2_c_loop_ub; c2_i41++) {
              c2_i43 = c2_b_B - 1;
              c2_i44 = c2_b_label - 1;
              if ((c2_i44 < 0) || (c2_i44 > c2_i43)) {
                emlrtDynamicBoundsCheckR2012b(c2_i44, 0, c2_i43, &c2_if_emlrtBCI,
                  (void *)c2_sp);
              }

              c2_B->data[c2_i44].f1->data[c2_i41] = c2_boundary->data[c2_i41];
            }

            c2_i42 = c2_regionHasBeenTraced->size[0];
            if ((c2_b_label < 1) || (c2_b_label > c2_i42)) {
              emlrtDynamicBoundsCheckR2012b(c2_b_label, 1, c2_i42,
                &c2_ff_emlrtBCI, (void *)c2_sp);
            }

            c2_regionHasBeenTraced->data[c2_b_label - 1] = true;
          }
        }
      }

      c2_c++;
    }

    c2_emxFree_int32_T(chartInstance, &c2_b_scratch);
    c2_emxFree_int32_T(chartInstance, &c2_scratch);
    c2_emxFree_real_T(chartInstance, &c2_boundary);
  }

  c2_emxFree_boolean_T(chartInstance, &c2_regionHasBeenTraced);
}

static void c2_findHoleBoundaries(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, boolean_T c2_BW[65536],
  c2_emxArray_cell_wrap_1 *c2_B, real_T c2_c_L[65536])
{
  c2_images_internal_coder_BoundaryFinder *c2_b_obj;
  c2_images_internal_coder_BoundaryFinder *c2_obj;
  c2_images_internal_coder_BoundaryFinder *c2_this;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  boolean_T c2_u;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  for (c2_i = 0; c2_i < 65536; c2_i++) {
    chartInstance->c2_BWcomplement[c2_i] = c2_BW[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 65536; c2_i1++) {
    chartInstance->c2_BWcomplement[c2_i1] = !chartInstance->
      c2_BWcomplement[c2_i1];
  }

  c2_st.site = &c2_tj_emlrtRSI;
  c2_imclearborder(chartInstance, &c2_st, chartInstance->c2_BWcomplement,
                   chartInstance->c2_BWholes);
  c2_st.site = &c2_uj_emlrtRSI;
  c2_b_bwlabel(chartInstance, &c2_st, chartInstance->c2_BWholes,
               chartInstance->c2_dv);
  for (c2_i2 = 0; c2_i2 < 65536; c2_i2++) {
    c2_c_L[c2_i2] = chartInstance->c2_dv[c2_i2];
  }

  c2_st.site = &c2_vj_emlrtRSI;
  c2_obj = &chartInstance->c2_finder;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_fj_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  for (c2_i3 = 0; c2_i3 < 65536; c2_i3++) {
    chartInstance->c2_L[c2_i3] = c2_c_L[c2_i3];
  }

  c2_padarray(chartInstance, chartInstance->c2_L, c2_b_obj->paddedLabelMatrix);
  c2_b_obj->numRows = 258;
  c2_b_obj->numCols = 258;
  c2_u = true;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 11, 0U, 0U, 0U, 0), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 33),
                false);
  c2_b_st.site = &c2_gj_emlrtRSI;
  c2_b_assert(chartInstance, &c2_b_st, c2_b_y, sf_mex_call(&c2_st, NULL,
    "message", 1U, 1U, 14, c2_c_y));
  c2_b_obj->conn = 4.0;
  c2_st.site = &c2_wj_emlrtRSI;
  c2_BoundaryFinder_findBoundaries(chartInstance, &c2_st,
    &chartInstance->c2_finder, c2_B);
}

static void c2_imclearborder(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536], boolean_T
  c2_outputImage[65536])
{
  static real_T c2_c_dv[9] = { 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0 };

  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_b_k;
  real_T c2_c_a;
  real_T c2_c_j;
  real_T c2_d_a;
  real_T c2_d_i;
  real_T c2_x;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c;
  int32_T c2_c_c;
  int32_T c2_c_i;
  int32_T c2_d_c;
  int32_T c2_d_j;
  int32_T c2_e_i;
  int32_T c2_f_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_j;
  int32_T c2_k;
  boolean_T c2_borderlessIm[65536];
  boolean_T c2_d_varargin_1[65536];
  boolean_T c2_marker[65536];
  boolean_T c2_b;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_xj_emlrtRSI;
  c2_b_st.site = &c2_bk_emlrtRSI;
  for (c2_k = 0; c2_k < 9; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_x = c2_c_dv[(int32_T)c2_b_k - 1];
    c2_b = muDoubleScalarIsNaN(c2_x);
    if (c2_b) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
    }
  }

  for (c2_i = 0; c2_i < 65536; c2_i++) {
    c2_marker[c2_i] = c2_c_varargin_1[c2_i];
  }

  for (c2_b_i = 0; c2_b_i < 258; c2_b_i++) {
    c2_d_i = (real_T)c2_b_i + 1.0;
    chartInstance->c2_paddedIm[(int32_T)c2_d_i - 1] = false;
  }

  for (c2_c_i = 0; c2_c_i < 258; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    chartInstance->c2_paddedIm[(int32_T)c2_d_i + 66305] = false;
  }

  for (c2_j = 0; c2_j < 256; c2_j++) {
    c2_c_j = (real_T)c2_j + 1.0;
    c2_a = c2_c_j;
    c2_c = (int32_T)c2_a;
    chartInstance->c2_paddedIm[258 * c2_c] = false;
  }

  for (c2_b_j = 0; c2_b_j < 256; c2_b_j++) {
    c2_c_j = (real_T)c2_b_j + 1.0;
    c2_b_a = c2_c_j;
    c2_b_c = (int32_T)c2_b_a;
    chartInstance->c2_paddedIm[257 + 258 * c2_b_c] = false;
  }

  for (c2_d_j = 0; c2_d_j < 256; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_e_i = 0; c2_e_i < 256; c2_e_i++) {
      c2_d_i = (real_T)c2_e_i + 1.0;
      c2_c_a = c2_d_i;
      c2_c_c = (int32_T)c2_c_a;
      c2_d_a = c2_c_j;
      c2_d_c = (int32_T)c2_d_a;
      chartInstance->c2_paddedIm[c2_c_c + 258 * c2_d_c] = true;
    }
  }

  c2_st.site = &c2_yj_emlrtRSI;
  c2_b_imerode(chartInstance, chartInstance->c2_paddedIm,
               chartInstance->c2_erodedIm);
  c2_i1 = 0;
  c2_i2 = 0;
  for (c2_i3 = 0; c2_i3 < 256; c2_i3++) {
    for (c2_i4 = 0; c2_i4 < 256; c2_i4++) {
      c2_borderlessIm[c2_i4 + c2_i1] = chartInstance->c2_erodedIm[(c2_i4 + c2_i2)
        + 259];
    }

    c2_i1 += 256;
    c2_i2 += 258;
  }

  for (c2_f_i = 0; c2_f_i < 65536; c2_f_i++) {
    if (c2_borderlessIm[c2_f_i]) {
      c2_marker[c2_f_i] = false;
    }
  }

  c2_st.site = &c2_ak_emlrtRSI;
  for (c2_i5 = 0; c2_i5 < 65536; c2_i5++) {
    c2_d_varargin_1[c2_i5] = c2_c_varargin_1[c2_i5];
  }

  c2_imreconstruct(chartInstance, c2_marker, c2_d_varargin_1, c2_outputImage);
  for (c2_i6 = 0; c2_i6 < 65536; c2_i6++) {
    c2_outputImage[c2_i6] = !c2_outputImage[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 65536; c2_i7++) {
    c2_outputImage[c2_i7] = (c2_c_varargin_1[c2_i7] && c2_outputImage[c2_i7]);
  }
}

static void c2_b_imerode(SFc2_real_time_testInstanceStruct *chartInstance,
  boolean_T c2_A[66564], boolean_T c2_B[66564])
{
  static boolean_T c2_nhood[9] = { false, true, false, true, true, true, false,
    true, false };

  real_T c2_asizeT[2];
  real_T c2_nsizeT[2];
  int32_T c2_i;
  int32_T c2_i1;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_asizeT[c2_i] = 258.0;
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_nsizeT[c2_i1] = 3.0;
  }

  erode_binary_twod_tbb(&c2_A[0], &c2_asizeT[0], 2.0, &c2_nhood[0], &c2_nsizeT[0],
                        2.0, &c2_B[0]);
}

static void c2_imreconstruct(SFc2_real_time_testInstanceStruct *chartInstance,
  boolean_T c2_marker[65536], boolean_T c2_mask[65536], boolean_T c2_im[65536])
{
  real_T c2_imSizeT[2];
  int32_T c2_i;
  int32_T c2_i1;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 65536; c2_i++) {
    c2_im[c2_i] = c2_marker[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_imSizeT[c2_i1] = 256.0;
  }

  ippreconstruct_uint8((uint8_T *)&c2_im[0], (uint8_T *)&c2_mask[0],
                       &c2_imSizeT[0], 1.0);
}

static void c2_b_bwlabel(SFc2_real_time_testInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, boolean_T c2_c_varargin_1[65536], real_T c2_c_L[65536])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  int64_T c2_i2;
  real_T c2_a;
  real_T c2_b_c;
  real_T c2_b_i;
  real_T c2_b_j;
  real_T c2_b_root;
  real_T c2_b_rootj;
  real_T c2_b_thread;
  real_T c2_b_x;
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_c_r;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_d_a;
  real_T c2_d_c;
  real_T c2_d_i;
  real_T c2_d_j;
  real_T c2_d_varargin_1;
  real_T c2_d_x;
  real_T c2_e_i;
  real_T c2_e_varargin_1;
  real_T c2_e_x;
  real_T c2_f_i;
  real_T c2_f_x;
  real_T c2_firstLabel;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j;
  real_T c2_label;
  real_T c2_minval;
  real_T c2_n_x;
  real_T c2_numComponents;
  real_T c2_p_x;
  real_T c2_q_x;
  real_T c2_r_x;
  real_T c2_root;
  real_T c2_rootj;
  real_T c2_s_x;
  real_T c2_startC;
  real_T c2_t_x;
  real_T c2_u_x;
  real_T c2_x;
  real_T c2_z;
  int32_T c2_chunksSizeAndLabels[264];
  int32_T c2_b_a;
  int32_T c2_b_q0;
  int32_T c2_b_q1;
  int32_T c2_b_qY;
  int32_T c2_b_r;
  int32_T c2_b_z;
  int32_T c2_c;
  int32_T c2_c_a;
  int32_T c2_c_b;
  int32_T c2_c_c;
  int32_T c2_c_q0;
  int32_T c2_c_q1;
  int32_T c2_c_qY;
  int32_T c2_d_b;
  int32_T c2_d_q0;
  int32_T c2_d_q1;
  int32_T c2_d_qY;
  int32_T c2_d_r;
  int32_T c2_d_y;
  int32_T c2_e_a;
  int32_T c2_e_c;
  int32_T c2_e_q0;
  int32_T c2_e_q1;
  int32_T c2_e_qY;
  int32_T c2_e_r;
  int32_T c2_exitg1;
  int32_T c2_f_a;
  int32_T c2_f_q0;
  int32_T c2_f_q1;
  int32_T c2_f_qY;
  int32_T c2_g_i;
  int32_T c2_g_q0;
  int32_T c2_g_q1;
  int32_T c2_g_qY;
  int32_T c2_h_q0;
  int32_T c2_h_q1;
  int32_T c2_h_qY;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_j_x;
  int32_T c2_k_x;
  int32_T c2_l_x;
  int32_T c2_m_x;
  int32_T c2_o_x;
  int32_T c2_q0;
  int32_T c2_q1;
  int32_T c2_qY;
  int32_T c2_stripeFirstLabel;
  int32_T c2_thread;
  int32_T c2_v_x;
  int32_T c2_w_x;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_overflow;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_qi_emlrtRSI;
  chartInstance->c2_b_P[0] = 0.0;
  for (c2_thread = 0; c2_thread < 8; c2_thread++) {
    c2_b_thread = (real_T)c2_thread;
    c2_b_c = c2_b_thread * 32.0 + 1.0;
    c2_d_varargin_1 = (c2_b_thread + 1.0) * 32.0 + 1.0;
    c2_x = c2_d_varargin_1;
    c2_b_x = c2_x;
    c2_c_x = c2_b_x;
    c2_a = c2_c_x;
    c2_d_x = c2_a;
    c2_e_x = c2_d_x;
    c2_minval = muDoubleScalarMin(c2_e_x, 257.0);
    c2_d1 = muDoubleScalarRound(c2_minval);
    if (c2_d1 < 2.147483648E+9) {
      if (c2_d1 >= -2.147483648E+9) {
        c2_i1 = (int32_T)c2_d1;
      } else {
        c2_i1 = MIN_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c2_d1 >= 2.147483648E+9) {
      c2_i1 = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_i1 = 0;
    }

    c2_chunksSizeAndLabels[(int32_T)c2_b_c - 1] = c2_i1;
    c2_h_x = (c2_b_c - 1.0) * 256.0 / 2.0;
    c2_i_x = c2_h_x;
    c2_i_x = muDoubleScalarCeil(c2_i_x);
    c2_label = c2_i_x + 1.0;
    c2_firstLabel = c2_label;
    c2_startC = c2_b_c;
    c2_d2 = c2_b_thread * 32.0 + 1.0;
    c2_e_varargin_1 = (c2_b_thread + 1.0) * 32.0;
    c2_n_x = c2_e_varargin_1;
    c2_p_x = c2_n_x;
    c2_r_x = c2_p_x;
    c2_d_a = c2_r_x;
    c2_t_x = c2_d_a;
    c2_u_x = c2_t_x;
    c2_d5 = muDoubleScalarMin(c2_u_x, 256.0);
    c2_i5 = (int32_T)(c2_d5 + (1.0 - c2_d2)) - 1;
    for (c2_e_c = 0; c2_e_c <= c2_i5; c2_e_c++) {
      c2_b_c = c2_d2 + (real_T)c2_e_c;
      for (c2_e_r = 0; c2_e_r < 256; c2_e_r++) {
        c2_c_r = (real_T)c2_e_r + 1.0;
        c2_i8 = (int32_T)c2_b_c;
        if ((c2_i8 < 1) || (c2_i8 > 256)) {
          emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 256, &c2_pf_emlrtBCI, &c2_st);
        }

        if (c2_c_varargin_1[((int32_T)c2_c_r + ((c2_i8 - 1) << 8)) - 1]) {
          if ((c2_c_r > 1.0) && c2_c_varargin_1[((int32_T)(c2_c_r - 1.0) +
               (((int32_T)c2_b_c - 1) << 8)) - 1]) {
            if ((c2_b_c > c2_startC) && c2_c_varargin_1[((int32_T)c2_c_r +
                 (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1]) {
              c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                c2_c_L[((int32_T)c2_c_r + (((int32_T)(c2_b_c - 1.0) - 1) << 8))
                - 1];
              do {
                c2_exitg1 = 0;
                c2_i10 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c -
                  1) << 8)) - 1] + 1.0);
                if ((c2_i10 < 1) || (c2_i10 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 32769,
                    &c2_tf_emlrtBCI, &c2_st);
                }

                if (chartInstance->c2_b_P[c2_i10 - 1] < c2_c_L[((int32_T)c2_c_r
                     + (((int32_T)c2_b_c - 1) << 8)) - 1]) {
                  c2_i13 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c
                    - 1) << 8)) - 1] + 1.0);
                  if ((c2_i13 < 1) || (c2_i13 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i13, 1, 32769,
                      &c2_uf_emlrtBCI, &c2_st);
                  }

                  c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                    chartInstance->c2_b_P[c2_i13 - 1];
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              if (c2_c_L[((int32_T)c2_c_r + (((int32_T)(c2_b_c - 1.0) - 1) << 8))
                  - 1] != c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)c2_b_c -
                     1) << 8)) - 1]) {
                c2_rootj = c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)c2_b_c -
                  1) << 8)) - 1];
                do {
                  c2_exitg1 = 0;
                  c2_i17 = (int32_T)(c2_rootj + 1.0);
                  if ((c2_i17 < 1) || (c2_i17 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i17, 1, 32769,
                      &c2_wf_emlrtBCI, &c2_st);
                  }

                  if (chartInstance->c2_b_P[c2_i17 - 1] < c2_rootj) {
                    c2_i21 = (int32_T)(c2_rootj + 1.0);
                    if ((c2_i21 < 1) || (c2_i21 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i21, 1, 32769,
                        &c2_ag_emlrtBCI, &c2_st);
                    }

                    c2_rootj = chartInstance->c2_b_P[c2_i21 - 1];
                  } else {
                    c2_exitg1 = 1;
                  }
                } while (c2_exitg1 == 0);

                if (c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1]
                    > c2_rootj) {
                  c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                    c2_rootj;
                }

                do {
                  c2_exitg1 = 0;
                  c2_i28 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) +
                    (((int32_T)c2_b_c - 1) << 8)) - 1] + 1.0);
                  if ((c2_i28 < 1) || (c2_i28 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i28, 1, 32769,
                      &c2_cg_emlrtBCI, &c2_st);
                  }

                  if (chartInstance->c2_b_P[c2_i28 - 1] < c2_c_L[((int32_T)
                       (c2_c_r - 1.0) + (((int32_T)c2_b_c - 1) << 8)) - 1]) {
                    c2_i30 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) +
                      (((int32_T)c2_b_c - 1) << 8)) - 1] + 1.0);
                    if ((c2_i30 < 1) || (c2_i30 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i30, 1, 32769,
                        &c2_eg_emlrtBCI, &c2_st);
                    }

                    c2_b_j = chartInstance->c2_b_P[c2_i30 - 1];
                    c2_i33 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) +
                      (((int32_T)c2_b_c - 1) << 8)) - 1] + 1.0);
                    if ((c2_i33 < 1) || (c2_i33 > 32769)) {
                      emlrtDynamicBoundsCheckR2012b(c2_i33, 1, 32769,
                        &c2_fg_emlrtBCI, &c2_st);
                    }

                    chartInstance->c2_b_P[c2_i33 - 1] = c2_c_L[((int32_T)c2_c_r
                      + (((int32_T)c2_b_c - 1) << 8)) - 1];
                    c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)c2_b_c - 1) <<
                             8)) - 1] = c2_b_j;
                  } else {
                    c2_exitg1 = 1;
                  }
                } while (c2_exitg1 == 0);

                c2_i32 = (int32_T)(c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)
                  c2_b_c - 1) << 8)) - 1] + 1.0);
                if ((c2_i32 < 1) || (c2_i32 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i32, 1, 32769,
                    &c2_dg_emlrtBCI, &c2_st);
                }

                chartInstance->c2_b_P[c2_i32 - 1] = c2_c_L[((int32_T)c2_c_r +
                  (((int32_T)c2_b_c - 1) << 8)) - 1];
              }

              do {
                c2_exitg1 = 0;
                c2_i16 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)(c2_b_c
                  - 1.0) - 1) << 8)) - 1] + 1.0);
                if ((c2_i16 < 1) || (c2_i16 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i16, 1, 32769,
                    &c2_vf_emlrtBCI, &c2_st);
                }

                if (chartInstance->c2_b_P[c2_i16 - 1] < c2_c_L[((int32_T)c2_c_r
                     + (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1]) {
                  c2_i20 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)
                    (c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                  if ((c2_i20 < 1) || (c2_i20 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i20, 1, 32769,
                      &c2_yf_emlrtBCI, &c2_st);
                  }

                  c2_b_j = chartInstance->c2_b_P[c2_i20 - 1];
                  c2_i26 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)
                    (c2_b_c - 1.0) - 1) << 8)) - 1] + 1.0);
                  if ((c2_i26 < 1) || (c2_i26 > 32769)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i26, 1, 32769,
                      &c2_bg_emlrtBCI, &c2_st);
                  }

                  chartInstance->c2_b_P[c2_i26 - 1] = c2_c_L[((int32_T)c2_c_r +
                    (((int32_T)c2_b_c - 1) << 8)) - 1];
                  c2_c_L[((int32_T)c2_c_r + (((int32_T)(c2_b_c - 1.0) - 1) << 8))
                    - 1] = c2_b_j;
                } else {
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);

              c2_i24 = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)(c2_b_c -
                1.0) - 1) << 8)) - 1] + 1.0);
              if ((c2_i24 < 1) || (c2_i24 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i24, 1, 32769, &c2_xf_emlrtBCI,
                  &c2_st);
              }

              chartInstance->c2_b_P[c2_i24 - 1] = c2_c_L[((int32_T)c2_c_r +
                (((int32_T)c2_b_c - 1) << 8)) - 1];
            } else {
              c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
                c2_c_L[((int32_T)(c2_c_r - 1.0) + (((int32_T)c2_b_c - 1) << 8))
                - 1];
            }
          } else if ((c2_b_c > c2_startC) && c2_c_varargin_1[((int32_T)c2_c_r +
                      (((int32_T)(c2_b_c - 1.0) - 1) << 8)) - 1]) {
            c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
              c2_c_L[((int32_T)c2_c_r + (((int32_T)(c2_b_c - 1.0) - 1) << 8)) -
              1];
          } else {
            c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] =
              c2_label;
            c2_i9 = (int32_T)(c2_label + 1.0);
            if ((c2_i9 < 1) || (c2_i9 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i9, 1, 32769, &c2_jf_emlrtBCI,
                &c2_st);
            }

            chartInstance->c2_b_P[c2_i9 - 1] = c2_label;
            c2_label++;
          }
        } else {
          c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_b_c - 1) << 8)) - 1] = 0.0;
        }
      }
    }

    c2_d6 = muDoubleScalarRound(c2_label - c2_firstLabel);
    if (c2_d6 < 2.147483648E+9) {
      if (c2_d6 >= -2.147483648E+9) {
        c2_i6 = (int32_T)c2_d6;
      } else {
        c2_i6 = MIN_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c2_d6 >= 2.147483648E+9) {
      c2_i6 = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_i6 = 0;
    }

    c2_chunksSizeAndLabels[(int32_T)(c2_startC + 1.0) - 1] = c2_i6;
  }

  c2_c = c2_chunksSizeAndLabels[0];
  while ((real_T)c2_c <= 256.0) {
    for (c2_b_r = 0; c2_b_r < 256; c2_b_r++) {
      c2_c_r = (real_T)c2_b_r + 1.0;
      if ((c2_c < 1) || (c2_c > 256)) {
        emlrtDynamicBoundsCheckR2012b(c2_c, 1, 256, &c2_lf_emlrtBCI, &c2_st);
      }

      c2_d = c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1];
      c2_b_st.site = &c2_ck_emlrtRSI;
      c2_f_x = c2_d;
      c2_g_x = c2_f_x;
      c2_b = muDoubleScalarIsNaN(c2_g_x);
      if (c2_b) {
        c2_b_y = NULL;
        sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c2_c_y = NULL;
        sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
      }

      if (c2_d != 0.0) {
        c2_b_q0 = c2_c;
        c2_b_q1 = 1;
        if ((c2_b_q1 < 0) && (c2_b_q0 > c2_b_q1 + MAX_int32_T)) {
          c2_b_qY = MAX_int32_T;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        } else if ((c2_b_q1 > 0) && (c2_b_q0 < c2_b_q1 + MIN_int32_T)) {
          c2_b_qY = MIN_int32_T;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        } else {
          c2_b_qY = c2_b_q0 - c2_b_q1;
        }

        c2_i3 = c2_b_qY;
        if ((c2_i3 < 1) || (c2_i3 > 256)) {
          emlrtDynamicBoundsCheckR2012b(c2_i3, 1, 256, &c2_mf_emlrtBCI, &c2_st);
        }

        c2_d3 = c2_c_L[((int32_T)c2_c_r + ((c2_i3 - 1) << 8)) - 1];
        c2_b_st.site = &c2_ck_emlrtRSI;
        c2_q_x = c2_d3;
        c2_s_x = c2_q_x;
        c2_b_b = muDoubleScalarIsNaN(c2_s_x);
        if (c2_b_b) {
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1,
            19), false);
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1,
            19), false);
          sf_mex_call(&c2_b_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                      sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_f_y)));
        }

        if (c2_d3 != 0.0) {
          c2_b_st.site = &c2_dk_emlrtRSI;
          c2_c_q0 = c2_c;
          c2_c_q1 = 1;
          if ((c2_c_q1 < 0) && (c2_c_q0 > c2_c_q1 + MAX_int32_T)) {
            c2_c_qY = MAX_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
          } else if ((c2_c_q1 > 0) && (c2_c_q0 < c2_c_q1 + MIN_int32_T)) {
            c2_c_qY = MIN_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
          } else {
            c2_c_qY = c2_c_q0 - c2_c_q1;
          }

          c2_i7 = c2_c_qY;
          if ((c2_i7 < 1) || (c2_i7 > 256)) {
            emlrtDynamicBoundsCheckR2012b(c2_i7, 1, 256, &c2_of_emlrtBCI,
              &c2_b_st);
          }

          c2_b_i = c2_c_L[((int32_T)c2_c_r + ((c2_i7 - 1) << 8)) - 1];
          c2_j = c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1];
          c2_c_st.site = &c2_bj_emlrtRSI;
          c2_c_i = c2_b_i;
          c2_d7 = c2_c_i;
          do {
            c2_exitg1 = 0;
            c2_i12 = (int32_T)(c2_d7 + 1.0);
            if ((c2_i12 < 1) || (c2_i12 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i12, 1, 32769, &c2_jd_emlrtBCI,
                &c2_c_st);
            }

            if (chartInstance->c2_b_P[c2_i12 - 1] < c2_d7) {
              c2_i14 = (int32_T)(c2_d7 + 1.0);
              if ((c2_i14 < 1) || (c2_i14 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i14, 1, 32769, &c2_kd_emlrtBCI,
                  &c2_c_st);
              }

              c2_d7 = chartInstance->c2_b_P[c2_i14 - 1];
            } else {
              c2_exitg1 = 1;
            }
          } while (c2_exitg1 == 0);

          if (c2_b_i != c2_j) {
            c2_c_st.site = &c2_cj_emlrtRSI;
            c2_d_i = c2_j;
            c2_b_rootj = c2_d_i;
            do {
              c2_exitg1 = 0;
              c2_i18 = (int32_T)(c2_b_rootj + 1.0);
              if ((c2_i18 < 1) || (c2_i18 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i18, 1, 32769, &c2_jd_emlrtBCI,
                  &c2_c_st);
              }

              if (chartInstance->c2_b_P[c2_i18 - 1] < c2_b_rootj) {
                c2_i23 = (int32_T)(c2_b_rootj + 1.0);
                if ((c2_i23 < 1) || (c2_i23 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i23, 1, 32769,
                    &c2_kd_emlrtBCI, &c2_c_st);
                }

                c2_b_rootj = chartInstance->c2_b_P[c2_i23 - 1];
              } else {
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);

            if (c2_d7 > c2_b_rootj) {
              c2_d7 = c2_b_rootj;
            }

            c2_c_st.site = &c2_dj_emlrtRSI;
            c2_f_i = c2_j;
            c2_b_root = c2_d7;
            do {
              c2_exitg1 = 0;
              c2_i31 = (int32_T)(c2_f_i + 1.0);
              if ((c2_i31 < 1) || (c2_i31 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i31, 1, 32769, &c2_pd_emlrtBCI,
                  &c2_c_st);
              }

              if (chartInstance->c2_b_P[c2_i31 - 1] < c2_f_i) {
                c2_i34 = (int32_T)(c2_f_i + 1.0);
                if ((c2_i34 < 1) || (c2_i34 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i34, 1, 32769,
                    &c2_qd_emlrtBCI, &c2_c_st);
                }

                c2_d_j = chartInstance->c2_b_P[c2_i34 - 1];
                c2_i36 = (int32_T)(c2_f_i + 1.0);
                if ((c2_i36 < 1) || (c2_i36 > 32769)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i36, 1, 32769,
                    &c2_wc_emlrtBCI, &c2_c_st);
                }

                chartInstance->c2_b_P[c2_i36 - 1] = c2_b_root;
                c2_f_i = c2_d_j;
              } else {
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);

            c2_i35 = (int32_T)(c2_f_i + 1.0);
            if ((c2_i35 < 1) || (c2_i35 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i35, 1, 32769, &c2_xc_emlrtBCI,
                &c2_c_st);
            }

            chartInstance->c2_b_P[c2_i35 - 1] = c2_b_root;
          }

          c2_c_st.site = &c2_ej_emlrtRSI;
          c2_e_i = c2_b_i;
          c2_root = c2_d7;
          do {
            c2_exitg1 = 0;
            c2_i19 = (int32_T)(c2_e_i + 1.0);
            if ((c2_i19 < 1) || (c2_i19 > 32769)) {
              emlrtDynamicBoundsCheckR2012b(c2_i19, 1, 32769, &c2_pd_emlrtBCI,
                &c2_c_st);
            }

            if (chartInstance->c2_b_P[c2_i19 - 1] < c2_e_i) {
              c2_i25 = (int32_T)(c2_e_i + 1.0);
              if ((c2_i25 < 1) || (c2_i25 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i25, 1, 32769, &c2_qd_emlrtBCI,
                  &c2_c_st);
              }

              c2_c_j = chartInstance->c2_b_P[c2_i25 - 1];
              c2_i29 = (int32_T)(c2_e_i + 1.0);
              if ((c2_i29 < 1) || (c2_i29 > 32769)) {
                emlrtDynamicBoundsCheckR2012b(c2_i29, 1, 32769, &c2_wc_emlrtBCI,
                  &c2_c_st);
              }

              chartInstance->c2_b_P[c2_i29 - 1] = c2_root;
              c2_e_i = c2_c_j;
            } else {
              c2_exitg1 = 1;
            }
          } while (c2_exitg1 == 0);

          c2_i27 = (int32_T)(c2_e_i + 1.0);
          if ((c2_i27 < 1) || (c2_i27 > 32769)) {
            emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 32769, &c2_xc_emlrtBCI,
              &c2_c_st);
          }

          chartInstance->c2_b_P[c2_i27 - 1] = c2_root;
          c2_c_L[((int32_T)c2_c_r + ((c2_c - 1) << 8)) - 1] = c2_d7;
        }
      }
    }

    if ((c2_c < 1) || (c2_c > 264)) {
      emlrtDynamicBoundsCheckR2012b(c2_c, 1, 264, &c2_kf_emlrtBCI, &c2_st);
    }

    c2_c = c2_chunksSizeAndLabels[c2_c - 1];
  }

  c2_numComponents = 1.0;
  c2_c = 1;
  while ((real_T)c2_c <= 256.0) {
    c2_b_st.site = &c2_ek_emlrtRSI;
    c2_q0 = c2_c;
    c2_q1 = 1;
    if ((c2_q1 < 0) && (c2_q0 > c2_q1 + MAX_int32_T)) {
      c2_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_q1 > 0) && (c2_q0 < c2_q1 + MIN_int32_T)) {
      c2_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_qY = c2_q0 - c2_q1;
    }

    c2_b_a = c2_qY;
    c2_i2 = (int64_T)c2_b_a * 256LL;
    if (c2_i2 > 2147483647LL) {
      c2_i2 = 2147483647LL;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if (c2_i2 < -2147483648LL) {
      c2_i2 = -2147483648LL;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    }

    c2_d_y = (int32_T)c2_i2;
    c2_j_x = c2_d_y;
    c2_k_x = c2_j_x;
    c2_l_x = c2_k_x;
    c2_m_x = c2_l_x;
    c2_c_a = c2_m_x;
    c2_o_x = c2_c_a;
    c2_z = (real_T)c2_o_x / 2.0;
    c2_d4 = muDoubleScalarRound(c2_z);
    if (c2_d4 < 2.147483648E+9) {
      if (c2_d4 >= -2.147483648E+9) {
        c2_i4 = (int32_T)c2_d4;
      } else {
        c2_i4 = MIN_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c2_d4 >= 2.147483648E+9) {
      c2_i4 = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_i4 = 0;
    }

    c2_b_z = c2_i4;
    c2_v_x = c2_b_z;
    c2_w_x = c2_v_x;
    c2_d_q0 = c2_w_x;
    c2_d_q1 = 1;
    if ((c2_d_q1 < 0) && (c2_d_q0 < MIN_int32_T - c2_d_q1)) {
      c2_d_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_d_q1 > 0) && (c2_d_q0 > MAX_int32_T - c2_d_q1)) {
      c2_d_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_d_qY = c2_d_q0 + c2_d_q1;
    }

    c2_stripeFirstLabel = c2_d_qY;
    c2_e_q0 = c2_stripeFirstLabel;
    c2_e_q1 = 1;
    if ((c2_e_q1 < 0) && (c2_e_q0 < MIN_int32_T - c2_e_q1)) {
      c2_e_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_e_q1 > 0) && (c2_e_q0 > MAX_int32_T - c2_e_q1)) {
      c2_e_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_e_qY = c2_e_q0 + c2_e_q1;
    }

    c2_i11 = c2_e_qY;
    c2_f_q0 = c2_c;
    c2_f_q1 = 1;
    if ((c2_f_q1 < 0) && (c2_f_q0 < MIN_int32_T - c2_f_q1)) {
      c2_f_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_f_q1 > 0) && (c2_f_q0 > MAX_int32_T - c2_f_q1)) {
      c2_f_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_f_qY = c2_f_q0 + c2_f_q1;
    }

    c2_i15 = c2_f_qY;
    if ((c2_i15 < 1) || (c2_i15 > 264)) {
      emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 264, &c2_nf_emlrtBCI, &c2_st);
    }

    c2_g_q0 = c2_stripeFirstLabel;
    c2_g_q1 = c2_chunksSizeAndLabels[c2_i15 - 1];
    if ((c2_g_q0 < 0) && (c2_g_q1 < MIN_int32_T - c2_g_q0)) {
      c2_g_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if ((c2_g_q0 > 0) && (c2_g_q1 > MAX_int32_T - c2_g_q0)) {
      c2_g_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c2_g_qY = c2_g_q0 + c2_g_q1;
    }

    c2_i22 = c2_g_qY;
    c2_b_st.site = &c2_fk_emlrtRSI;
    c2_e_a = c2_i11;
    c2_c_b = c2_i22;
    c2_f_a = c2_e_a;
    c2_d_b = c2_c_b;
    if (c2_f_a > c2_d_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_d_b > 2147483646);
    }

    if (c2_overflow) {
      c2_c_st.site = &c2_ac_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
    }

    for (c2_g_i = c2_i11; c2_g_i <= c2_i22; c2_g_i++) {
      if ((c2_g_i < 1) || (c2_g_i > 32769)) {
        emlrtDynamicBoundsCheckR2012b(c2_g_i, 1, 32769, &c2_rf_emlrtBCI, &c2_st);
      }

      c2_h_q0 = c2_g_i;
      c2_h_q1 = 1;
      if ((c2_h_q1 < 0) && (c2_h_q0 > c2_h_q1 + MAX_int32_T)) {
        c2_h_qY = MAX_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else if ((c2_h_q1 > 0) && (c2_h_q0 < c2_h_q1 + MIN_int32_T)) {
        c2_h_qY = MIN_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c2_h_qY = c2_h_q0 - c2_h_q1;
      }

      if (chartInstance->c2_b_P[c2_g_i - 1] < (real_T)c2_h_qY) {
        c2_i37 = (int32_T)(chartInstance->c2_b_P[c2_g_i - 1] + 1.0);
        if ((c2_i37 < 1) || (c2_i37 > 32769)) {
          emlrtDynamicBoundsCheckR2012b(c2_i37, 1, 32769, &c2_sf_emlrtBCI,
            &c2_st);
        }

        chartInstance->c2_b_P[c2_g_i - 1] = chartInstance->c2_b_P[c2_i37 - 1];
      } else {
        chartInstance->c2_b_P[c2_g_i - 1] = c2_numComponents;
        c2_numComponents++;
      }
    }

    if ((c2_c < 1) || (c2_c > 264)) {
      emlrtDynamicBoundsCheckR2012b(c2_c, 1, 264, &c2_qf_emlrtBCI, &c2_st);
    }

    c2_c = c2_chunksSizeAndLabels[c2_c - 1];
  }

  for (c2_c_c = 0; c2_c_c < 256; c2_c_c++) {
    c2_d_c = (real_T)c2_c_c + 1.0;
    for (c2_d_r = 0; c2_d_r < 256; c2_d_r++) {
      c2_c_r = (real_T)c2_d_r + 1.0;
      c2_i = (int32_T)(c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_d_c - 1) << 8)) -
                       1] + 1.0);
      if ((c2_i < 1) || (c2_i > 32769)) {
        emlrtDynamicBoundsCheckR2012b(c2_i, 1, 32769, &c2_bd_emlrtBCI, &c2_st);
      }

      c2_c_L[((int32_T)c2_c_r + (((int32_T)c2_d_c - 1) << 8)) - 1] =
        chartInstance->c2_b_P[c2_i - 1];
    }
  }
}

static void c2_vertConcatenateCells(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_1 *c2_A,
  c2_emxArray_cell_wrap_1 *c2_B, c2_emxArray_cell_wrap_1 *c2_C)
{
  c2_emxArray_cell_wrap_1 *c2_b_r;
  emlrtStack c2_st;
  real_T c2_M;
  real_T c2_N;
  real_T c2_b_k;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  int32_T c2_iv[2];
  int32_T c2_b_C;
  int32_T c2_b_loop_ub;
  int32_T c2_c_C;
  int32_T c2_c_k;
  int32_T c2_d_C;
  int32_T c2_e_C;
  int32_T c2_f_C;
  int32_T c2_g_C;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_k;
  int32_T c2_loop_ub;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_emxInit_cell_wrap_1(chartInstance, c2_sp, &c2_b_r, 1, &c2_nc_emlrtRTEI);
  c2_N = (real_T)c2_A->size[0];
  c2_M = (real_T)c2_B->size[0];
  c2_d = c2_N + c2_M;
  if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
    emlrtIntegerCheckR2012b(c2_d, &c2_k_emlrtDCI, (void *)c2_sp);
  }

  c2_iv[0] = (int32_T)c2_d;
  c2_i = c2_b_r->size[0];
  c2_b_r->size[0] = c2_iv[0];
  c2_emxEnsureCapacity_cell_wrap_1(chartInstance, c2_sp, c2_b_r, c2_i,
    &c2_nc_emlrtRTEI);
  c2_i1 = c2_C->size[0];
  c2_C->size[0] = c2_b_r->size[0];
  c2_st.site = &c2_pk_emlrtRSI;
  c2_emxEnsureCapacity_cell_wrap_1(chartInstance, &c2_st, c2_C, c2_i1,
    &c2_oc_emlrtRTEI);
  c2_i2 = (int32_T)c2_N - 1;
  c2_k = 0;
  c2_emxFree_cell_wrap_1(chartInstance, &c2_b_r);
  while (c2_k <= c2_i2) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_i4 = c2_A->size[0] - 1;
    c2_i5 = (int32_T)c2_b_k - 1;
    if ((c2_i5 < 0) || (c2_i5 > c2_i4)) {
      emlrtDynamicBoundsCheckR2012b(c2_i5, 0, c2_i4, &c2_gg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i7 = c2_i5;
    c2_i9 = c2_A->size[0] - 1;
    c2_i10 = (int32_T)c2_b_k - 1;
    if ((c2_i10 < 0) || (c2_i10 > c2_i9)) {
      emlrtDynamicBoundsCheckR2012b(c2_i10, 0, c2_i9, &c2_gg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i13 = c2_i10;
    c2_i15 = c2_A->data[c2_i7].f1->size[0] * c2_A->data[c2_i13].f1->size[1];
    c2_i16 = c2_A->size[0] - 1;
    c2_i17 = (int32_T)c2_b_k - 1;
    if ((c2_i17 < 0) || (c2_i17 > c2_i16)) {
      emlrtDynamicBoundsCheckR2012b(c2_i17, 0, c2_i16, &c2_gg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i21 = c2_i17;
    c2_i23 = c2_C->size[0] - 1;
    c2_i24 = (int32_T)c2_b_k - 1;
    if ((c2_i24 < 0) || (c2_i24 > c2_i23)) {
      emlrtDynamicBoundsCheckR2012b(c2_i24, 0, c2_i23, &c2_hg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i27 = c2_i24;
    c2_i28 = c2_C->data[c2_i27].f1->size[0] * c2_C->data[c2_i27].f1->size[1];
    c2_C->data[c2_i27].f1->size[0] = c2_A->data[c2_i21].f1->size[0];
    c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_C->data[c2_i27].f1,
      c2_i28, &c2_pc_emlrtRTEI);
    c2_i30 = c2_C->size[0] - 1;
    c2_i31 = (int32_T)c2_b_k - 1;
    if ((c2_i31 < 0) || (c2_i31 > c2_i30)) {
      emlrtDynamicBoundsCheckR2012b(c2_i31, 0, c2_i30, &c2_hg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i34 = c2_i31;
    c2_i35 = c2_C->data[c2_i34].f1->size[0] * c2_C->data[c2_i34].f1->size[1];
    c2_C->data[c2_i34].f1->size[1] = 2;
    c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_C->data[c2_i34].f1,
      c2_i35, &c2_pc_emlrtRTEI);
    c2_b_C = c2_C->size[0];
    c2_c_C = c2_C->size[0];
    c2_i37 = c2_c_C - 1;
    c2_i39 = (int32_T)c2_b_k - 1;
    if ((c2_i39 < 0) || (c2_i39 > c2_i37)) {
      emlrtDynamicBoundsCheckR2012b(c2_i39, 0, c2_i37, &c2_hg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_d_C = c2_C->size[0];
    c2_i42 = c2_d_C - 1;
    c2_i43 = (int32_T)c2_b_k - 1;
    if ((c2_i43 < 0) || (c2_i43 > c2_i42)) {
      emlrtDynamicBoundsCheckR2012b(c2_i43, 0, c2_i42, &c2_hg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_loop_ub = c2_i15 - 1;
    for (c2_i45 = 0; c2_i45 <= c2_loop_ub; c2_i45++) {
      c2_i46 = c2_b_C - 1;
      c2_i47 = (int32_T)c2_b_k - 1;
      if ((c2_i47 < 0) || (c2_i47 > c2_i46)) {
        emlrtDynamicBoundsCheckR2012b(c2_i47, 0, c2_i46, &c2_kg_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i49 = c2_A->size[0] - 1;
      c2_i50 = (int32_T)c2_b_k - 1;
      if ((c2_i50 < 0) || (c2_i50 > c2_i49)) {
        emlrtDynamicBoundsCheckR2012b(c2_i50, 0, c2_i49, &c2_lg_emlrtBCI, (void *)
          c2_sp);
      }

      c2_C->data[c2_i47].f1->data[c2_i45] = c2_A->data[c2_i50].f1->data[c2_i45];
    }

    c2_k++;
  }

  c2_i3 = (int32_T)c2_M - 1;
  for (c2_c_k = 0; c2_c_k <= c2_i3; c2_c_k++) {
    c2_b_k = (real_T)c2_c_k + 1.0;
    c2_i6 = c2_B->size[0] - 1;
    c2_i8 = (int32_T)c2_b_k - 1;
    if ((c2_i8 < 0) || (c2_i8 > c2_i6)) {
      emlrtDynamicBoundsCheckR2012b(c2_i8, 0, c2_i6, &c2_ig_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i11 = c2_i8;
    c2_i12 = c2_B->size[0] - 1;
    c2_i14 = (int32_T)c2_b_k - 1;
    if ((c2_i14 < 0) || (c2_i14 > c2_i12)) {
      emlrtDynamicBoundsCheckR2012b(c2_i14, 0, c2_i12, &c2_ig_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i18 = c2_i14;
    c2_i19 = c2_B->data[c2_i11].f1->size[0] * c2_B->data[c2_i18].f1->size[1];
    c2_i20 = c2_B->size[0] - 1;
    c2_i22 = (int32_T)c2_b_k - 1;
    if ((c2_i22 < 0) || (c2_i22 > c2_i20)) {
      emlrtDynamicBoundsCheckR2012b(c2_i22, 0, c2_i20, &c2_ig_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i25 = c2_i22;
    c2_i26 = c2_C->size[0] - 1;
    c2_d1 = c2_b_k + c2_N;
    if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
      emlrtIntegerCheckR2012b(c2_d1, &c2_j_emlrtDCI, (void *)c2_sp);
    }

    c2_i29 = (int32_T)c2_d1 - 1;
    if ((c2_i29 < 0) || (c2_i29 > c2_i26)) {
      emlrtDynamicBoundsCheckR2012b(c2_i29, 0, c2_i26, &c2_jg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i32 = c2_i29;
    c2_i33 = c2_C->data[c2_i32].f1->size[0] * c2_C->data[c2_i32].f1->size[1];
    c2_C->data[c2_i32].f1->size[0] = c2_B->data[c2_i25].f1->size[0];
    c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_C->data[c2_i32].f1,
      c2_i33, &c2_qc_emlrtRTEI);
    c2_i36 = c2_C->size[0] - 1;
    c2_d2 = c2_b_k + c2_N;
    if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
      emlrtIntegerCheckR2012b(c2_d2, &c2_j_emlrtDCI, (void *)c2_sp);
    }

    c2_i38 = (int32_T)c2_d2 - 1;
    if ((c2_i38 < 0) || (c2_i38 > c2_i36)) {
      emlrtDynamicBoundsCheckR2012b(c2_i38, 0, c2_i36, &c2_jg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_i40 = c2_i38;
    c2_i41 = c2_C->data[c2_i40].f1->size[0] * c2_C->data[c2_i40].f1->size[1];
    c2_C->data[c2_i40].f1->size[1] = 2;
    c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_C->data[c2_i40].f1,
      c2_i41, &c2_qc_emlrtRTEI);
    c2_e_C = c2_C->size[0];
    c2_f_C = c2_C->size[0];
    c2_i44 = c2_f_C - 1;
    c2_d3 = c2_b_k + c2_N;
    if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
      emlrtIntegerCheckR2012b(c2_d3, &c2_j_emlrtDCI, (void *)c2_sp);
    }

    c2_i48 = (int32_T)c2_d3 - 1;
    if ((c2_i48 < 0) || (c2_i48 > c2_i44)) {
      emlrtDynamicBoundsCheckR2012b(c2_i48, 0, c2_i44, &c2_jg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_g_C = c2_C->size[0];
    c2_i51 = c2_g_C - 1;
    c2_d4 = c2_b_k + c2_N;
    if (c2_d4 != (real_T)(int32_T)muDoubleScalarFloor(c2_d4)) {
      emlrtIntegerCheckR2012b(c2_d4, &c2_j_emlrtDCI, (void *)c2_sp);
    }

    c2_i52 = (int32_T)c2_d4 - 1;
    if ((c2_i52 < 0) || (c2_i52 > c2_i51)) {
      emlrtDynamicBoundsCheckR2012b(c2_i52, 0, c2_i51, &c2_jg_emlrtBCI, (void *)
        c2_sp);
    }

    c2_b_loop_ub = c2_i19 - 1;
    for (c2_i53 = 0; c2_i53 <= c2_b_loop_ub; c2_i53++) {
      c2_i54 = c2_e_C - 1;
      c2_d5 = c2_b_k + c2_N;
      if (c2_d5 != (real_T)(int32_T)muDoubleScalarFloor(c2_d5)) {
        emlrtIntegerCheckR2012b(c2_d5, &c2_l_emlrtDCI, (void *)c2_sp);
      }

      c2_i55 = (int32_T)c2_d5 - 1;
      if ((c2_i55 < 0) || (c2_i55 > c2_i54)) {
        emlrtDynamicBoundsCheckR2012b(c2_i55, 0, c2_i54, &c2_mg_emlrtBCI, (void *)
          c2_sp);
      }

      c2_i56 = c2_B->size[0] - 1;
      c2_i57 = (int32_T)c2_b_k - 1;
      if ((c2_i57 < 0) || (c2_i57 > c2_i56)) {
        emlrtDynamicBoundsCheckR2012b(c2_i57, 0, c2_i56, &c2_ng_emlrtBCI, (void *)
          c2_sp);
      }

      c2_C->data[c2_i55].f1->data[c2_i53] = c2_B->data[c2_i57].f1->data[c2_i53];
    }
  }
}

static void c2_emlrt_marshallIn(SFc2_real_time_testInstanceStruct *chartInstance,
  const mxArray *c2_b_centroid, const char_T *c2_identifier, real_T c2_b_y[2])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_centroid), &c2_thisId,
                        c2_b_y);
  sf_mex_destroy(&c2_b_centroid);
}

static void c2_b_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_b_y[2])
{
  real_T c2_c_dv[2];
  int32_T c2_i;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_c_dv, 1, 0, 0U, 1, 0U, 2, 1, 2);
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_b_y[c2_i] = c2_c_dv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_c_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_d_image, const char_T *c2_identifier,
  uint8_T c2_b_y[196608])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_d_image), &c2_thisId,
                        c2_b_y);
  sf_mex_destroy(&c2_d_image);
}

static void c2_d_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  uint8_T c2_b_y[196608])
{
  int32_T c2_i;
  uint8_T c2_b_uv[196608];
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_b_uv, 1, 3, 0U, 1, 0U, 3, 256,
                256, 3);
  for (c2_i = 0; c2_i < 196608; c2_i++) {
    c2_b_y[c2_i] = c2_b_uv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static real_T c2_e_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_b_max_area, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  real_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_max_area),
    &c2_thisId);
  sf_mex_destroy(&c2_b_max_area);
  return c2_b_y;
}

static real_T c2_f_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_b_y;
  real_T c2_d;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d, 1, 0, 0U, 0, 0U, 0);
  c2_b_y = c2_d;
  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static uint8_T c2_g_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_real_time_test, const char_T *
  c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_real_time_test), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_real_time_test);
  return c2_b_y;
}

static uint8_T c2_h_emlrt_marshallIn(SFc2_real_time_testInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_u;
  uint8_T c2_b_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_b_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static void c2_chart_data_browse_helper(SFc2_real_time_testInstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig)
{
  real_T c2_d;
  real_T c2_d1;
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 9U:
    c2_d = *chartInstance->c2_max_area;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    *c2_isValueTooBig = 1U;
    break;

   case 6U:
    c2_d1 = *chartInstance->c2_radius;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_centroid,
      0, 0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 8U:
    *c2_isValueTooBig = 1U;
    break;
  }
}

static const mxArray *c2_assert(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_ = NULL;
  (void)chartInstance;
  c2_ = NULL;
  sf_mex_assign(&c2_, sf_mex_call(c2_sp, NULL, "assert", 0U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_;
}

static const mxArray *c2_b_assert(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1)
{
  const mxArray *c2_ = NULL;
  (void)chartInstance;
  c2_ = NULL;
  sf_mex_assign(&c2_, sf_mex_call(c2_sp, NULL, "assert", 0U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_;
}

static void c2_b_ComputeArea(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_stats,
  c2_sHtk0WM4OMtyqkehwQYcq2 *c2_statsAlreadyComputed)
{
  c2_emxArray_real_T *c2_b_r;
  emlrtStack c2_st;
  real_T c2_b_k;
  real_T c2_d;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_k;
  int32_T c2_loop_ub;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  if (!c2_statsAlreadyComputed->Area) {
    c2_statsAlreadyComputed->Area = true;
    c2_d = (real_T)c2_stats->size[0];
    c2_i = (int32_T)c2_d - 1;
    c2_k = 0;
    c2_emxInit_real_T1(chartInstance, c2_sp, &c2_b_r, 1, &c2_ac_emlrtRTEI);
    while (c2_k <= c2_i) {
      c2_b_k = (real_T)c2_k + 1.0;
      c2_i1 = c2_b_r->size[0];
      c2_i2 = c2_stats->size[0];
      c2_i3 = (int32_T)c2_b_k;
      if ((c2_i3 < 1) || (c2_i3 > c2_i2)) {
        emlrtDynamicBoundsCheckR2012b(c2_i3, 1, c2_i2, &c2_pg_emlrtBCI, (void *)
          c2_sp);
      }

      c2_b_r->size[0] = c2_stats->data[c2_i3 - 1].PixelIdxList->size[0];
      c2_st.site = &c2_jk_emlrtRSI;
      c2_emxEnsureCapacity_real_T1(chartInstance, &c2_st, c2_b_r, c2_i1,
        &c2_rc_emlrtRTEI);
      c2_i4 = c2_stats->size[0];
      c2_i5 = (int32_T)c2_b_k;
      if ((c2_i5 < 1) || (c2_i5 > c2_i4)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, c2_i4, &c2_pg_emlrtBCI, (void *)
          c2_sp);
      }

      c2_loop_ub = c2_stats->data[c2_i5 - 1].PixelIdxList->size[0] - 1;
      for (c2_i6 = 0; c2_i6 <= c2_loop_ub; c2_i6++) {
        c2_i8 = c2_stats->size[0];
        c2_i10 = (int32_T)c2_b_k;
        if ((c2_i10 < 1) || (c2_i10 > c2_i8)) {
          emlrtDynamicBoundsCheckR2012b(c2_i10, 1, c2_i8, &c2_pg_emlrtBCI, (void
            *)c2_sp);
        }

        c2_b_r->data[c2_i6] = c2_stats->data[c2_i10 - 1].PixelIdxList->
          data[c2_i6];
      }

      c2_i7 = c2_stats->size[0];
      c2_i9 = (int32_T)c2_b_k;
      if ((c2_i9 < 1) || (c2_i9 > c2_i7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i9, 1, c2_i7, &c2_og_emlrtBCI, (void *)
          c2_sp);
      }

      c2_stats->data[c2_i9 - 1].Area = (real_T)c2_b_r->size[0];
      c2_k++;
    }

    c2_emxFree_real_T(chartInstance, &c2_b_r);
  }
}

static void c2_b_ComputePixelList(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c2_stats, c2_sHtk0WM4OMtyqkehwQYcq2 *c2_statsAlreadyComputed)
{
  static char_T c2_b_cv1[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a',
    't', 'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i',
    'm', 'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T c2_b_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'd', '2', 's', 'u', 'b', '_', 'I', 'n', 'd', 'e',
    'x', 'O', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  c2_cell_wrap_30 c2_reshapes[2];
  c2_emxArray_int32_T *c2_idx;
  c2_emxArray_int32_T *c2_varargout_4;
  c2_emxArray_int32_T *c2_vk;
  c2_emxArray_real_T *c2_j;
  c2_emxArray_real_T *c2_ndx;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  real_T c2_b_k;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d_k;
  int32_T c2_sizes[2];
  int32_T c2_b_loop_ub;
  int32_T c2_b_stats;
  int32_T c2_c_k;
  int32_T c2_c_loop_ub;
  int32_T c2_c_stats;
  int32_T c2_d_loop_ub;
  int32_T c2_d_stats;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_expected;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i6;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_j_loop_ub;
  int32_T c2_k;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_m_loop_ub;
  int32_T c2_n_loop_ub;
  int32_T c2_o_loop_ub;
  int32_T c2_p_loop_ub;
  int32_T c2_q_loop_ub;
  int32_T c2_result;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  if (!c2_statsAlreadyComputed->PixelList) {
    c2_statsAlreadyComputed->PixelList = true;
    c2_d = (real_T)c2_stats->size[0];
    c2_i = (int32_T)c2_d - 1;
    c2_k = 0;
    c2_emxInit_real_T1(chartInstance, c2_sp, &c2_j, 1, &c2_hd_emlrtRTEI);
    c2_emxInit_real_T1(chartInstance, c2_sp, &c2_ndx, 1, &c2_tc_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, c2_sp, &c2_varargout_4, 1,
                       &c2_bc_emlrtRTEI);
    c2_emxInitMatrix_cell_wrap_30(chartInstance, c2_sp, c2_reshapes,
      &c2_id_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, c2_sp, &c2_idx, 1, &c2_vc_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, c2_sp, &c2_vk, 1, &c2_xc_emlrtRTEI);
    while (c2_k <= c2_i) {
      c2_b_k = (real_T)c2_k + 1.0;
      c2_i1 = c2_ndx->size[0];
      c2_i2 = c2_stats->size[0];
      c2_i3 = (int32_T)c2_b_k;
      if ((c2_i3 < 1) || (c2_i3 > c2_i2)) {
        emlrtDynamicBoundsCheckR2012b(c2_i3, 1, c2_i2, &c2_sg_emlrtBCI, (void *)
          c2_sp);
      }

      c2_ndx->size[0] = c2_stats->data[c2_i3 - 1].PixelIdxList->size[0];
      c2_st.site = &c2_ik_emlrtRSI;
      c2_emxEnsureCapacity_real_T1(chartInstance, &c2_st, c2_ndx, c2_i1,
        &c2_sc_emlrtRTEI);
      c2_i4 = c2_stats->size[0];
      c2_i5 = (int32_T)c2_b_k;
      if ((c2_i5 < 1) || (c2_i5 > c2_i4)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, c2_i4, &c2_sg_emlrtBCI, (void *)
          c2_sp);
      }

      c2_loop_ub = c2_stats->data[c2_i5 - 1].PixelIdxList->size[0] - 1;
      for (c2_i6 = 0; c2_i6 <= c2_loop_ub; c2_i6++) {
        c2_i7 = c2_stats->size[0];
        c2_i9 = (int32_T)c2_b_k;
        if ((c2_i9 < 1) || (c2_i9 > c2_i7)) {
          emlrtDynamicBoundsCheckR2012b(c2_i9, 1, c2_i7, &c2_sg_emlrtBCI, (void *)
            c2_sp);
        }

        c2_ndx->data[c2_i6] = c2_stats->data[c2_i9 - 1].PixelIdxList->data[c2_i6];
      }

      if (c2_ndx->size[0] != 0) {
        c2_st.site = &c2_od_emlrtRSI;
        c2_i11 = c2_ndx->size[0];
        c2_i12 = c2_stats->size[0];
        c2_i13 = (int32_T)c2_b_k;
        if ((c2_i13 < 1) || (c2_i13 > c2_i12)) {
          emlrtDynamicBoundsCheckR2012b(c2_i13, 1, c2_i12, &c2_tg_emlrtBCI,
            &c2_st);
        }

        c2_ndx->size[0] = c2_stats->data[c2_i13 - 1].PixelIdxList->size[0];
        c2_b_st.site = &c2_hk_emlrtRSI;
        c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_ndx, c2_i11,
          &c2_tc_emlrtRTEI);
        c2_i17 = c2_stats->size[0];
        c2_i19 = (int32_T)c2_b_k;
        if ((c2_i19 < 1) || (c2_i19 > c2_i17)) {
          emlrtDynamicBoundsCheckR2012b(c2_i19, 1, c2_i17, &c2_tg_emlrtBCI,
            &c2_st);
        }

        c2_b_loop_ub = c2_stats->data[c2_i19 - 1].PixelIdxList->size[0] - 1;
        for (c2_i21 = 0; c2_i21 <= c2_b_loop_ub; c2_i21++) {
          c2_i23 = c2_stats->size[0];
          c2_i25 = (int32_T)c2_b_k;
          if ((c2_i25 < 1) || (c2_i25 > c2_i23)) {
            emlrtDynamicBoundsCheckR2012b(c2_i25, 1, c2_i23, &c2_tg_emlrtBCI,
              &c2_st);
          }

          c2_ndx->data[c2_i21] = c2_stats->data[c2_i25 - 1].PixelIdxList->
            data[c2_i21];
        }

        c2_b_st.site = &c2_qd_emlrtRSI;
        c2_i24 = c2_idx->size[0];
        c2_idx->size[0] = c2_ndx->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_idx, c2_i24,
          &c2_vc_emlrtRTEI);
        c2_c_loop_ub = c2_ndx->size[0] - 1;
        for (c2_i27 = 0; c2_i27 <= c2_c_loop_ub; c2_i27++) {
          c2_idx->data[c2_i27] = (int32_T)c2_ndx->data[c2_i27];
        }

        c2_d1 = (real_T)c2_idx->size[0];
        c2_i28 = (int32_T)c2_d1 - 1;
        c2_c_k = 0;
        do {
          c2_exitg1 = 0;
          if (c2_c_k <= c2_i28) {
            c2_d_k = (real_T)c2_c_k + 1.0;
            if (c2_idx->data[(int32_T)c2_d_k - 1] <= 65536) {
              c2_b = true;
            } else {
              c2_b = false;
            }

            if (!c2_b) {
              c2_p = false;
              c2_exitg1 = 1;
            } else {
              c2_c_k++;
            }
          } else {
            c2_p = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);

        if (!c2_p) {
          c2_b_y = NULL;
          sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2,
            1, 36), false);
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2,
            1, 36), false);
          sf_mex_call(&c2_b_st, &c2_h_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                      sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
        }

        c2_i29 = c2_idx->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_idx, c2_i29,
          &c2_wc_emlrtRTEI);
        c2_d_loop_ub = c2_idx->size[0] - 1;
        for (c2_i30 = 0; c2_i30 <= c2_d_loop_ub; c2_i30++) {
          c2_idx->data[c2_i30]--;
        }

        c2_i31 = c2_vk->size[0];
        c2_vk->size[0] = c2_idx->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_vk, c2_i31,
          &c2_xc_emlrtRTEI);
        c2_e_loop_ub = c2_idx->size[0] - 1;
        for (c2_i32 = 0; c2_i32 <= c2_e_loop_ub; c2_i32++) {
          c2_vk->data[c2_i32] = c2_div_nzp_s32(chartInstance, c2_idx->
            data[c2_i32], 256, 0, 1U, 0, 0);
        }

        c2_i33 = c2_varargout_4->size[0];
        c2_varargout_4->size[0] = c2_vk->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_varargout_4,
          c2_i33, &c2_yc_emlrtRTEI);
        c2_f_loop_ub = c2_vk->size[0] - 1;
        for (c2_i34 = 0; c2_i34 <= c2_f_loop_ub; c2_i34++) {
          c2_varargout_4->data[c2_i34] = c2_vk->data[c2_i34] + 1;
        }

        c2_i35 = c2_vk->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_vk, c2_i35,
          &c2_ad_emlrtRTEI);
        c2_g_loop_ub = c2_vk->size[0] - 1;
        for (c2_i36 = 0; c2_i36 <= c2_g_loop_ub; c2_i36++) {
          c2_vk->data[c2_i36] <<= 8;
        }

        c2_i37 = c2_idx->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_idx, c2_i37,
          &c2_bd_emlrtRTEI);
        c2_h_loop_ub = c2_idx->size[0] - 1;
        for (c2_i38 = 0; c2_i38 <= c2_h_loop_ub; c2_i38++) {
          c2_idx->data[c2_i38] -= c2_vk->data[c2_i38];
        }

        c2_i39 = c2_idx->size[0];
        c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_idx, c2_i39,
          &c2_cd_emlrtRTEI);
        c2_i_loop_ub = c2_idx->size[0] - 1;
        for (c2_i40 = 0; c2_i40 <= c2_i_loop_ub; c2_i40++) {
          c2_idx->data[c2_i40]++;
        }

        c2_i41 = c2_ndx->size[0];
        c2_ndx->size[0] = c2_idx->size[0];
        c2_emxEnsureCapacity_real_T1(chartInstance, &c2_st, c2_ndx, c2_i41,
          &c2_dd_emlrtRTEI);
        c2_j_loop_ub = c2_idx->size[0] - 1;
        for (c2_i42 = 0; c2_i42 <= c2_j_loop_ub; c2_i42++) {
          c2_ndx->data[c2_i42] = (real_T)c2_idx->data[c2_i42];
        }

        c2_i43 = c2_j->size[0];
        c2_j->size[0] = c2_varargout_4->size[0];
        c2_emxEnsureCapacity_real_T1(chartInstance, &c2_st, c2_j, c2_i43,
          &c2_dd_emlrtRTEI);
        c2_k_loop_ub = c2_varargout_4->size[0] - 1;
        for (c2_i44 = 0; c2_i44 <= c2_k_loop_ub; c2_i44++) {
          c2_j->data[c2_i44] = (real_T)c2_varargout_4->data[c2_i44];
        }

        c2_st.site = &c2_pd_emlrtRSI;
        c2_b_st.site = &c2_rd_emlrtRSI;
        c2_result = c2_j->size[0];
        c2_sizes[0] = c2_result;
        c2_c_st.site = &c2_sd_emlrtRSI;
        c2_expected = c2_sizes[0];
        if (c2_j->size[0] == c2_expected) {
          c2_b1 = true;
        } else {
          c2_b1 = false;
        }

        if (!c2_b1) {
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c2_c_st, &c2_i_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_e_y)));
        }

        if (c2_ndx->size[0] == c2_expected) {
          c2_b1 = true;
        } else {
          c2_b1 = false;
        }

        if (!c2_b1) {
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c2_c_st, &c2_i_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_g_y)));
        }

        c2_i45 = c2_reshapes[0].f1->size[0];
        c2_reshapes[0].f1->size[0] = c2_j->size[0];
        c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_reshapes[0].f1,
          c2_i45, &c2_ed_emlrtRTEI);
        c2_l_loop_ub = c2_j->size[0] - 1;
        for (c2_i46 = 0; c2_i46 <= c2_l_loop_ub; c2_i46++) {
          c2_reshapes[0].f1->data[c2_i46] = c2_j->data[c2_i46];
        }

        c2_i47 = c2_reshapes[1].f1->size[0];
        c2_reshapes[1].f1->size[0] = c2_ndx->size[0];
        c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_reshapes[1].f1,
          c2_i47, &c2_ed_emlrtRTEI);
        c2_m_loop_ub = c2_ndx->size[0] - 1;
        for (c2_i48 = 0; c2_i48 <= c2_m_loop_ub; c2_i48++) {
          c2_reshapes[1].f1->data[c2_i48] = c2_ndx->data[c2_i48];
        }

        c2_i49 = c2_ndx->size[0];
        c2_ndx->size[0] = c2_reshapes[0].f1->size[0];
        c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_ndx, c2_i49,
          &c2_fd_emlrtRTEI);
        c2_n_loop_ub = c2_reshapes[0].f1->size[0] - 1;
        for (c2_i50 = 0; c2_i50 <= c2_n_loop_ub; c2_i50++) {
          c2_ndx->data[c2_i50] = c2_reshapes[0].f1->data[c2_i50];
        }

        c2_i51 = c2_j->size[0];
        c2_j->size[0] = c2_reshapes[1].f1->size[0];
        c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_j, c2_i51,
          &c2_fd_emlrtRTEI);
        c2_o_loop_ub = c2_reshapes[1].f1->size[0] - 1;
        for (c2_i52 = 0; c2_i52 <= c2_o_loop_ub; c2_i52++) {
          c2_j->data[c2_i52] = c2_reshapes[1].f1->data[c2_i52];
        }

        c2_d_stats = c2_stats->size[0];
        c2_i53 = (int32_T)c2_b_k;
        if ((c2_i53 < 1) || (c2_i53 > c2_d_stats)) {
          emlrtDynamicBoundsCheckR2012b(c2_i53, 1, c2_d_stats, &c2_rg_emlrtBCI,
            &c2_b_st);
        }

        c2_i54 = c2_i53 - 1;
        c2_i55 = c2_stats->data[c2_i54].PixelList->size[0] * c2_stats->
          data[c2_i54].PixelList->size[1];
        c2_stats->data[c2_i54].PixelList->size[0] = c2_ndx->size[0];
        c2_i56 = (int32_T)c2_b_k;
        if ((c2_i56 < 1) || (c2_i56 > c2_d_stats)) {
          emlrtDynamicBoundsCheckR2012b(c2_i56, 1, c2_d_stats, &c2_rg_emlrtBCI,
            &c2_b_st);
        }

        c2_i57 = c2_i56 - 1;
        c2_stats->data[c2_i57].PixelList->size[1] = 2;
        c2_emxEnsureCapacity_real_T(chartInstance, &c2_b_st, c2_stats->
          data[c2_i57].PixelList, c2_i55, &c2_gd_emlrtRTEI);
        c2_p_loop_ub = c2_ndx->size[0] - 1;
        for (c2_i58 = 0; c2_i58 <= c2_p_loop_ub; c2_i58++) {
          c2_i59 = (int32_T)c2_b_k;
          if ((c2_i59 < 1) || (c2_i59 > c2_d_stats)) {
            emlrtDynamicBoundsCheckR2012b(c2_i59, 1, c2_d_stats, &c2_rg_emlrtBCI,
              &c2_b_st);
          }

          c2_i62 = (int32_T)c2_b_k;
          if ((c2_i62 < 1) || (c2_i62 > c2_d_stats)) {
            emlrtDynamicBoundsCheckR2012b(c2_i62, 1, c2_d_stats, &c2_rg_emlrtBCI,
              &c2_b_st);
          }

          c2_stats->data[c2_i59 - 1].PixelList->data[c2_i58] = c2_ndx->
            data[c2_i58];
        }

        c2_q_loop_ub = c2_j->size[0] - 1;
        for (c2_i60 = 0; c2_i60 <= c2_q_loop_ub; c2_i60++) {
          c2_i61 = (int32_T)c2_b_k;
          if ((c2_i61 < 1) || (c2_i61 > c2_d_stats)) {
            emlrtDynamicBoundsCheckR2012b(c2_i61, 1, c2_d_stats, &c2_rg_emlrtBCI,
              &c2_b_st);
          }

          c2_i63 = (int32_T)c2_b_k;
          if ((c2_i63 < 1) || (c2_i63 > c2_d_stats)) {
            emlrtDynamicBoundsCheckR2012b(c2_i63, 1, c2_d_stats, &c2_rg_emlrtBCI,
              &c2_b_st);
          }

          c2_stats->data[c2_i61 - 1].PixelList->data[c2_i60 + c2_stats->
            data[c2_i63 - 1].PixelList->size[0]] = c2_j->data[c2_i60];
        }
      } else {
        c2_i8 = c2_stats->size[0];
        c2_i10 = (int32_T)c2_b_k;
        if ((c2_i10 < 1) || (c2_i10 > c2_i8)) {
          emlrtDynamicBoundsCheckR2012b(c2_i10, 1, c2_i8, &c2_qg_emlrtBCI, (void
            *)c2_sp);
        }

        c2_i14 = c2_i10 - 1;
        c2_stats->data[c2_i14].PixelList->size[0] = 0;
        c2_i15 = c2_stats->size[0];
        c2_i16 = (int32_T)c2_b_k;
        if ((c2_i16 < 1) || (c2_i16 > c2_i15)) {
          emlrtDynamicBoundsCheckR2012b(c2_i16, 1, c2_i15, &c2_qg_emlrtBCI,
            (void *)c2_sp);
        }

        c2_i18 = c2_i16 - 1;
        c2_i20 = c2_stats->data[c2_i18].PixelList->size[0] * c2_stats->
          data[c2_i18].PixelList->size[1];
        c2_stats->data[c2_i18].PixelList->size[1] = 2;
        c2_st.site = &c2_gk_emlrtRSI;
        c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_stats->data[c2_i18]
          .PixelList, c2_i20, &c2_uc_emlrtRTEI);
        c2_b_stats = c2_stats->size[0];
        c2_i22 = (int32_T)c2_b_k;
        if ((c2_i22 < 1) || (c2_i22 > c2_b_stats)) {
          emlrtDynamicBoundsCheckR2012b(c2_i22, 1, c2_b_stats, &c2_qg_emlrtBCI,
            (void *)c2_sp);
        }

        c2_c_stats = c2_stats->size[0];
        c2_i26 = (int32_T)c2_b_k;
        if ((c2_i26 < 1) || (c2_i26 > c2_c_stats)) {
          emlrtDynamicBoundsCheckR2012b(c2_i26, 1, c2_c_stats, &c2_qg_emlrtBCI,
            (void *)c2_sp);
        }
      }

      c2_k++;
    }

    c2_emxFree_int32_T(chartInstance, &c2_vk);
    c2_emxFree_int32_T(chartInstance, &c2_idx);
    c2_emxFreeMatrix_cell_wrap_30(chartInstance, c2_reshapes);
    c2_emxFree_int32_T(chartInstance, &c2_varargout_4);
    c2_emxFree_real_T(chartInstance, &c2_ndx);
    c2_emxFree_real_T(chartInstance, &c2_j);
  }
}

static void c2_emxCopyStruct_s_VeYncwf9ecih6GB(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_VeYncwf9ecih6GBw6CjRRG *c2_dst,
  const c2_s_VeYncwf9ecih6GBw6CjRRG *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  c2_dst->Area = c2_src->Area;
  c2_emxCopyMatrix_real_T(chartInstance, c2_dst->Centroid, c2_src->Centroid);
  c2_dst->EquivDiameter = c2_src->EquivDiameter;
  c2_emxCopy_real_T(chartInstance, c2_sp, &c2_dst->PixelList, &c2_src->PixelList,
                    c2_srcLocation);
}

static void c2_emxCopyMatrix_real_T(SFc2_real_time_testInstanceStruct
  *chartInstance, real_T c2_dst[2], const real_T c2_src[2])
{
  int32_T c2_i;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_dst[c2_i] = c2_src[c2_i];
  }
}

static void c2_emxCopy_real_T(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T **c2_dst, c2_emxArray_real_T *
  const *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_numElDst;
  int32_T c2_numElSrc;
  c2_numElDst = 1;
  c2_numElSrc = 1;
  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    c2_numElDst *= (*c2_dst)->size[c2_i];
    c2_numElSrc *= (*c2_src)->size[c2_i];
  }

  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    (*c2_dst)->size[c2_i] = (*c2_src)->size[c2_i];
  }

  c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, *c2_dst, c2_numElDst,
    c2_srcLocation);
  for (c2_i = 0; c2_i < c2_numElSrc; c2_i++) {
    (*c2_dst)->data[c2_i] = (*c2_src)->data[c2_i];
  }
}

static void c2_emxEnsureCapacity_real_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(real_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(real_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (real_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxEnsureCapacity_real_T1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(real_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(real_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (real_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxInit_s_VeYncwf9ecih6GBw6CjRR(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_VeYncwf9ecih6GBw6CjR
  **c2_pEmxArray, int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_s_VeYncwf9ecih6GBw6CjR *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_s_VeYncwf9ecih6GBw6CjR *)emlrtMallocMex(sizeof
    (c2_emxArray_s_VeYncwf9ecih6GBw6CjR));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (c2_s_VeYncwf9ecih6GBw6CjRRG *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInit_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_1
  **c2_pEmxArray, int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_cell_wrap_1 *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_cell_wrap_1 *)emlrtMallocMex(sizeof
    (c2_emxArray_cell_wrap_1));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (c2_cell_wrap_1 *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInit_real_T(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_real_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_real_T *)emlrtMallocMex(sizeof(c2_emxArray_real_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (real_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInit_real_T1(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_real_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_real_T *)emlrtMallocMex(sizeof(c2_emxArray_real_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (real_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInitStruct_s_VeYncwf9ecih6GB(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_VeYncwf9ecih6GBw6CjRRG
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_pStruct->PixelList, 2,
                    c2_srcLocation);
}

static void c2_emxFree_s_VeYncwf9ecih6GBw6CjRR(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_s_VeYncwf9ecih6GBw6CjR **c2_pEmxArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  if (*c2_pEmxArray != (c2_emxArray_s_VeYncwf9ecih6GBw6CjR *)NULL) {
    if ((*c2_pEmxArray)->data != (c2_s_VeYncwf9ecih6GBw6CjRRG *)NULL) {
      c2_numEl = 1;
      for (c2_i = 0; c2_i < (*c2_pEmxArray)->numDimensions; c2_i++) {
        c2_numEl *= (*c2_pEmxArray)->size[c2_i];
      }

      for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
        c2_emxFreeStruct_s_VeYncwf9ecih6GB(chartInstance, &(*c2_pEmxArray)->
          data[c2_b_i]);
      }

      if ((*c2_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c2_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_s_VeYncwf9ecih6GBw6CjR *)NULL;
  }
}

static void c2_emxFree_real_T(SFc2_real_time_testInstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_real_T *)NULL) {
    if (((*c2_pEmxArray)->data != (real_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_real_T *)NULL;
  }
}

static void c2_emxFreeStruct_s_VeYncwf9ecih6GB(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_s_VeYncwf9ecih6GBw6CjRRG *c2_pStruct)
{
  c2_emxFree_real_T(chartInstance, &c2_pStruct->PixelList);
}

static void c2_emxFree_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_cell_wrap_1 **c2_pEmxArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  if (*c2_pEmxArray != (c2_emxArray_cell_wrap_1 *)NULL) {
    if ((*c2_pEmxArray)->data != (c2_cell_wrap_1 *)NULL) {
      c2_numEl = 1;
      for (c2_i = 0; c2_i < (*c2_pEmxArray)->numDimensions; c2_i++) {
        c2_numEl *= (*c2_pEmxArray)->size[c2_i];
      }

      for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
        c2_emxFreeStruct_cell_wrap_1(chartInstance, &(*c2_pEmxArray)->
          data[c2_b_i]);
      }

      if ((*c2_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c2_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_cell_wrap_1 *)NULL;
  }
}

static void c2_emxFreeStruct_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_cell_wrap_1 *c2_pStruct)
{
  c2_emxFree_real_T(chartInstance, &c2_pStruct->f1);
}

static void c2_emxEnsureCapacity_boolean_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(boolean_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (boolean_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxTrim_s_VeYncwf9ecih6GBw6CjRR(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_s_VeYncwf9ecih6GBw6CjR *c2_emxArray, int32_T
  c2_fromIndex, int32_T c2_toIndex)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxFreeStruct_s_VeYncwf9ecih6GB(chartInstance, &c2_emxArray->data[c2_i]);
  }
}

static void c2_emxExpand_s_VeYncwf9ecih6GBw6Cj(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_VeYncwf9ecih6GBw6CjR
  *c2_emxArray, int32_T c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo
  *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxInitStruct_s_VeYncwf9ecih6GB(chartInstance, c2_sp, &c2_emxArray->
      data[c2_i], c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_s_VeYncwf9eci(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_VeYncwf9ecih6GBw6CjR
  *c2_emxArray, int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof
      (c2_s_VeYncwf9ecih6GBw6CjRRG));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(c2_s_VeYncwf9ecih6GBw6CjRRG) *
             (uint32_T)c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (c2_s_VeYncwf9ecih6GBw6CjRRG *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }

  if (c2_oldNumel > c2_newNumel) {
    c2_emxTrim_s_VeYncwf9ecih6GBw6CjRR(chartInstance, c2_emxArray, c2_newNumel,
      c2_oldNumel);
  } else if (c2_oldNumel < c2_newNumel) {
    c2_emxExpand_s_VeYncwf9ecih6GBw6Cj(chartInstance, c2_sp, c2_emxArray,
      c2_oldNumel, c2_newNumel, c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_int32_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(int32_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(int32_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (int32_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxInitStruct_s_vX9LV7M75v5ZNol(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_vX9LV7M75v5ZNol5H5URkE
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_real_T1(chartInstance, c2_sp, &c2_pStruct->RegionIndices, 1,
                     c2_srcLocation);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_pStruct->RegionLengths, 1,
                     c2_srcLocation);
}

static void c2_emxInit_int32_T(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_int32_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c2_emxArray_int32_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (int32_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  **c2_pEmxArray, int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)emlrtMallocMex(sizeof
    (c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (c2_s_bxcgeNxEuVlgmMh5HwQaXB *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInit_boolean_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T **c2_pEmxArray,
  int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_boolean_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c2_emxArray_boolean_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (boolean_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxFreeStruct_s_vX9LV7M75v5ZNol(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_s_vX9LV7M75v5ZNol5H5URkE *c2_pStruct)
{
  c2_emxFree_real_T(chartInstance, &c2_pStruct->RegionIndices);
  c2_emxFree_int32_T(chartInstance, &c2_pStruct->RegionLengths);
}

static void c2_emxFree_int32_T(SFc2_real_time_testInstanceStruct *chartInstance,
  c2_emxArray_int32_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_int32_T *)NULL) {
    if (((*c2_pEmxArray)->data != (int32_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_int32_T *)NULL;
  }
}

static void c2_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa **c2_pEmxArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  if (*c2_pEmxArray != (c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)NULL) {
    if ((*c2_pEmxArray)->data != (c2_s_bxcgeNxEuVlgmMh5HwQaXB *)NULL) {
      c2_numEl = 1;
      for (c2_i = 0; c2_i < (*c2_pEmxArray)->numDimensions; c2_i++) {
        c2_numEl *= (*c2_pEmxArray)->size[c2_i];
      }

      for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
        c2_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &(*c2_pEmxArray)->
          data[c2_b_i]);
      }

      if ((*c2_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c2_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)NULL;
  }
}

static void c2_emxFree_boolean_T(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_boolean_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_boolean_T *)NULL) {
    if (((*c2_pEmxArray)->data != (boolean_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_boolean_T *)NULL;
  }
}

static void c2_emxFreeStruct_s_bxcgeNxEuVlgmMh(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_s_bxcgeNxEuVlgmMh5HwQaXB *c2_pStruct)
{
  c2_emxFree_boolean_T(chartInstance, &c2_pStruct->Image);
  c2_emxFree_boolean_T(chartInstance, &c2_pStruct->FilledImage);
  c2_emxFree_real_T(chartInstance, &c2_pStruct->PixelIdxList);
  c2_emxFree_real_T(chartInstance, &c2_pStruct->PixelList);
  c2_emxFree_real_T(chartInstance, &c2_pStruct->PixelValues);
  c2_emxFree_real_T(chartInstance, &c2_pStruct->SubarrayIdx);
}

static void c2_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c2_emxArray, int32_T
  c2_fromIndex, int32_T c2_toIndex)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c2_emxArray->data[c2_i]);
  }
}

static void c2_emxInitStruct_s_bxcgeNxEuVlgmMh(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_bxcgeNxEuVlgmMh5HwQaXB
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_boolean_T1(chartInstance, c2_sp, &c2_pStruct->Image, 2,
                        c2_srcLocation);
  c2_emxInit_boolean_T1(chartInstance, c2_sp, &c2_pStruct->FilledImage, 2,
                        c2_srcLocation);
  c2_emxInit_real_T1(chartInstance, c2_sp, &c2_pStruct->PixelIdxList, 1,
                     c2_srcLocation);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_pStruct->PixelList, 2,
                    c2_srcLocation);
  c2_emxInit_real_T1(chartInstance, c2_sp, &c2_pStruct->PixelValues, 1,
                     c2_srcLocation);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_pStruct->SubarrayIdx, 2,
                    c2_srcLocation);
}

static void c2_emxInit_boolean_T1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T **c2_pEmxArray,
  int32_T c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_boolean_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c2_emxArray_boolean_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (boolean_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c2_emxArray, int32_T c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo
  *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxInitStruct_s_bxcgeNxEuVlgmMh(chartInstance, c2_sp, &c2_emxArray->
      data[c2_i], c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_s_bxcgeNxEuVl(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c2_emxArray, int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof
      (c2_s_bxcgeNxEuVlgmMh5HwQaXB));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(c2_s_bxcgeNxEuVlgmMh5HwQaXB) *
             (uint32_T)c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (c2_s_bxcgeNxEuVlgmMh5HwQaXB *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }

  if (c2_oldNumel > c2_newNumel) {
    c2_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, c2_emxArray, c2_newNumel,
      c2_oldNumel);
  } else if (c2_oldNumel < c2_newNumel) {
    c2_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(chartInstance, c2_sp, c2_emxArray,
      c2_oldNumel, c2_newNumel, c2_srcLocation);
  }
}

static void c2_emxCopyStruct_s_bxcgeNxEuVlgmMh(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_bxcgeNxEuVlgmMh5HwQaXB *c2_dst,
  const c2_s_bxcgeNxEuVlgmMh5HwQaXB *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  c2_dst->Area = c2_src->Area;
  c2_emxCopyMatrix_real_T(chartInstance, c2_dst->Centroid, c2_src->Centroid);
  c2_emxCopyMatrix_real_T1(chartInstance, c2_dst->BoundingBox,
    c2_src->BoundingBox);
  c2_dst->MajorAxisLength = c2_src->MajorAxisLength;
  c2_dst->MinorAxisLength = c2_src->MinorAxisLength;
  c2_dst->Eccentricity = c2_src->Eccentricity;
  c2_dst->Orientation = c2_src->Orientation;
  c2_emxCopy_boolean_T(chartInstance, c2_sp, &c2_dst->Image, &c2_src->Image,
                       c2_srcLocation);
  c2_emxCopy_boolean_T(chartInstance, c2_sp, &c2_dst->FilledImage,
                       &c2_src->FilledImage, c2_srcLocation);
  c2_dst->FilledArea = c2_src->FilledArea;
  c2_dst->EulerNumber = c2_src->EulerNumber;
  c2_emxCopyMatrix_real_T2(chartInstance, c2_dst->Extrema, c2_src->Extrema);
  c2_dst->EquivDiameter = c2_src->EquivDiameter;
  c2_dst->Extent = c2_src->Extent;
  c2_emxCopy_real_T1(chartInstance, c2_sp, &c2_dst->PixelIdxList,
                     &c2_src->PixelIdxList, c2_srcLocation);
  c2_emxCopy_real_T(chartInstance, c2_sp, &c2_dst->PixelList, &c2_src->PixelList,
                    c2_srcLocation);
  c2_dst->Perimeter = c2_src->Perimeter;
  c2_dst->Circularity = c2_src->Circularity;
  c2_emxCopy_real_T1(chartInstance, c2_sp, &c2_dst->PixelValues,
                     &c2_src->PixelValues, c2_srcLocation);
  c2_emxCopyMatrix_real_T(chartInstance, c2_dst->WeightedCentroid,
    c2_src->WeightedCentroid);
  c2_dst->MeanIntensity = c2_src->MeanIntensity;
  c2_dst->MinIntensity = c2_src->MinIntensity;
  c2_dst->MaxIntensity = c2_src->MaxIntensity;
  c2_emxCopy_real_T(chartInstance, c2_sp, &c2_dst->SubarrayIdx,
                    &c2_src->SubarrayIdx, c2_srcLocation);
  c2_emxCopyMatrix_real_T(chartInstance, c2_dst->SubarrayIdxLengths,
    c2_src->SubarrayIdxLengths);
}

static void c2_emxCopyMatrix_real_T1(SFc2_real_time_testInstanceStruct
  *chartInstance, real_T c2_dst[4], const real_T c2_src[4])
{
  int32_T c2_i;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 4; c2_i++) {
    c2_dst[c2_i] = c2_src[c2_i];
  }
}

static void c2_emxCopy_boolean_T(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T **c2_dst,
  c2_emxArray_boolean_T * const *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_numElDst;
  int32_T c2_numElSrc;
  c2_numElDst = 1;
  c2_numElSrc = 1;
  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    c2_numElDst *= (*c2_dst)->size[c2_i];
    c2_numElSrc *= (*c2_src)->size[c2_i];
  }

  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    (*c2_dst)->size[c2_i] = (*c2_src)->size[c2_i];
  }

  c2_emxEnsureCapacity_boolean_T1(chartInstance, c2_sp, *c2_dst, c2_numElDst,
    c2_srcLocation);
  for (c2_i = 0; c2_i < c2_numElSrc; c2_i++) {
    (*c2_dst)->data[c2_i] = (*c2_src)->data[c2_i];
  }
}

static void c2_emxEnsureCapacity_boolean_T1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(boolean_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (boolean_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxCopyMatrix_real_T2(SFc2_real_time_testInstanceStruct
  *chartInstance, real_T c2_dst[16], const real_T c2_src[16])
{
  int32_T c2_i;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 16; c2_i++) {
    c2_dst[c2_i] = c2_src[c2_i];
  }
}

static void c2_emxCopy_real_T1(SFc2_real_time_testInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T **c2_dst, c2_emxArray_real_T *
  const *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_numElDst;
  int32_T c2_numElSrc;
  c2_numElDst = 1;
  c2_numElSrc = 1;
  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    c2_numElDst *= (*c2_dst)->size[c2_i];
    c2_numElSrc *= (*c2_src)->size[c2_i];
  }

  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    (*c2_dst)->size[c2_i] = (*c2_src)->size[c2_i];
  }

  c2_emxEnsureCapacity_real_T1(chartInstance, c2_sp, *c2_dst, c2_numElDst,
    c2_srcLocation);
  for (c2_i = 0; c2_i < c2_numElSrc; c2_i++) {
    (*c2_dst)->data[c2_i] = (*c2_src)->data[c2_i];
  }
}

static void c2_emxTrim_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_emxArray_cell_wrap_1 *c2_emxArray, int32_T c2_fromIndex,
  int32_T c2_toIndex)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxFreeStruct_cell_wrap_1(chartInstance, &c2_emxArray->data[c2_i]);
  }
}

static void c2_emxInitStruct_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_pStruct->f1, 2, c2_srcLocation);
}

static void c2_emxExpand_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_1 *c2_emxArray,
  int32_T c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxInitStruct_cell_wrap_1(chartInstance, c2_sp, &c2_emxArray->data[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_cell_wrap_1(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_1 *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(c2_cell_wrap_1));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(c2_cell_wrap_1) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (c2_cell_wrap_1 *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }

  if (c2_oldNumel > c2_newNumel) {
    c2_emxTrim_cell_wrap_1(chartInstance, c2_emxArray, c2_newNumel, c2_oldNumel);
  } else if (c2_oldNumel < c2_newNumel) {
    c2_emxExpand_cell_wrap_1(chartInstance, c2_sp, c2_emxArray, c2_oldNumel,
      c2_newNumel, c2_srcLocation);
  }
}

static void c2_emxInitMatrix_cell_wrap_30(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_30 c2_pMatrix[2], const
  emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_emxInitStruct_cell_wrap_30(chartInstance, c2_sp, &c2_pMatrix[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxInitStruct_cell_wrap_30(SFc2_real_time_testInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_30 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_real_T1(chartInstance, c2_sp, &c2_pStruct->f1, 1, c2_srcLocation);
}

static void c2_emxFreeMatrix_cell_wrap_30(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_cell_wrap_30 c2_pMatrix[2])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_emxFreeStruct_cell_wrap_30(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_emxFreeStruct_cell_wrap_30(SFc2_real_time_testInstanceStruct
  *chartInstance, c2_cell_wrap_30 *c2_pStruct)
{
  c2_emxFree_real_T(chartInstance, &c2_pStruct->f1);
}

static int32_T c2_div_nzp_s32(SFc2_real_time_testInstanceStruct *chartInstance,
  int32_T c2_numerator, int32_T c2_denominator, int32_T c2_EMLOvCount_src_loc,
  uint32_T c2_ssid_src_loc, int32_T c2_offset_src_loc, int32_T c2_length_src_loc)
{
  int32_T c2_quotient;
  uint32_T c2_absDenominator;
  uint32_T c2_absNumerator;
  uint32_T c2_tempAbsQuotient;
  boolean_T c2_quotientNeedsNegation;
  (void)chartInstance;
  (void)c2_EMLOvCount_src_loc;
  (void)c2_ssid_src_loc;
  (void)c2_offset_src_loc;
  (void)c2_length_src_loc;
  if (c2_numerator < 0) {
    c2_absNumerator = ~(uint32_T)c2_numerator + 1U;
  } else {
    c2_absNumerator = (uint32_T)c2_numerator;
  }

  if (c2_denominator < 0) {
    c2_absDenominator = ~(uint32_T)c2_denominator + 1U;
  } else {
    c2_absDenominator = (uint32_T)c2_denominator;
  }

  c2_quotientNeedsNegation = ((c2_numerator < 0) != (c2_denominator < 0));
  c2_tempAbsQuotient = c2_absNumerator / c2_absDenominator;
  if (c2_quotientNeedsNegation) {
    c2_quotient = -(int32_T)c2_tempAbsQuotient;
  } else {
    c2_quotient = (int32_T)c2_tempAbsQuotient;
  }

  return c2_quotient;
}

static int32_T c2_div_s32(SFc2_real_time_testInstanceStruct *chartInstance,
  int32_T c2_numerator, int32_T c2_denominator, int32_T c2_EMLOvCount_src_loc,
  uint32_T c2_ssid_src_loc, int32_T c2_offset_src_loc, int32_T c2_length_src_loc)
{
  int32_T c2_quotient;
  uint32_T c2_absDenominator;
  uint32_T c2_absNumerator;
  uint32_T c2_tempAbsQuotient;
  boolean_T c2_quotientNeedsNegation;
  (void)c2_EMLOvCount_src_loc;
  if (c2_denominator == 0) {
    if (c2_numerator >= 0) {
      c2_quotient = MAX_int32_T;
    } else {
      c2_quotient = MIN_int32_T;
    }

    sf_data_divide_by_zero_error(chartInstance->S, c2_ssid_src_loc,
      c2_offset_src_loc, c2_length_src_loc);
  } else {
    if (c2_numerator < 0) {
      c2_absNumerator = ~(uint32_T)c2_numerator + 1U;
    } else {
      c2_absNumerator = (uint32_T)c2_numerator;
    }

    if (c2_denominator < 0) {
      c2_absDenominator = ~(uint32_T)c2_denominator + 1U;
    } else {
      c2_absDenominator = (uint32_T)c2_denominator;
    }

    c2_quotientNeedsNegation = ((c2_numerator < 0) != (c2_denominator < 0));
    c2_tempAbsQuotient = c2_absNumerator / c2_absDenominator;
    if (c2_quotientNeedsNegation) {
      c2_quotient = -(int32_T)c2_tempAbsQuotient;
    } else {
      c2_quotient = (int32_T)c2_tempAbsQuotient;
    }
  }

  return c2_quotient;
}

static void init_dsm_address_info(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_real_time_testInstanceStruct
  *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_max_area = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_b_image = (uint8_T (*)[196608])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_radius = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_centroid = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_c_image = (uint8_T (*)[196608])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_real_time_test_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3152401697U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3869604826U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(684369466U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(74176725U);
}

mxArray *sf_c2_real_time_test_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,7);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2grayBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  mxSetCell(mxcell3p, 5, mxCreateString(
             "images.internal.coder.buildable.Bwlookup_tbb_Buildable"));
  mxSetCell(mxcell3p, 6, mxCreateString(
             "images.internal.coder.buildable.Morphop_binary_tbb_Buildable"));
  return(mxcell3p);
}

mxArray *sf_c2_real_time_test_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rgb2gray_tbb_uint8");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_real_time_test_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_real_time_test(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCOYGFgYAPSHEDMxAABrFA+I5TNCBdngYsrAHFJZUEqSLy4KNkzBUjnJeaC+Ym"
    "lFZ55aflg8y0YEOazYTGfEcl8Tqg4BHywp0y/jAO6fhYs+jmQ9AtA+cmpeSVF+ZkpfFDxgfWHAl"
    "H+YEXzB4ifmZuYngp1/8D7Q4ns+MhNrIhPLEpNHBz+kCDKH2xo/gDxixJTMkuLqRUfmOmCNP0Q+"
    "wMI+EMazR8gfmZxfGJySWZZanyyUTwwXnLiSzJzU+NLUotL4OaCAAA77S4D"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_real_time_test_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sfM3coiT73KU8sA1mToQAXG";
}

static void sf_opaque_initialize_c2_real_time_test(void *chartInstanceVar)
{
  initialize_params_c2_real_time_test((SFc2_real_time_testInstanceStruct*)
    chartInstanceVar);
  initialize_c2_real_time_test((SFc2_real_time_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_real_time_test(void *chartInstanceVar)
{
  enable_c2_real_time_test((SFc2_real_time_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_real_time_test(void *chartInstanceVar)
{
  disable_c2_real_time_test((SFc2_real_time_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c2_real_time_test(void *chartInstanceVar)
{
  sf_gateway_c2_real_time_test((SFc2_real_time_testInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_real_time_test(SimStruct* S)
{
  return get_sim_state_c2_real_time_test((SFc2_real_time_testInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_real_time_test(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c2_real_time_test((SFc2_real_time_testInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_real_time_test(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_real_time_testInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_real_time_test_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_real_time_test
      ((SFc2_real_time_testInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_real_time_test(void *chartInstanceVar)
{
  mdl_start_c2_real_time_test((SFc2_real_time_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_real_time_test(void *chartInstanceVar)
{
  mdl_terminate_c2_real_time_test((SFc2_real_time_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_real_time_test((SFc2_real_time_testInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_real_time_test(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_real_time_test((SFc2_real_time_testInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc2_real_time_test((SFc2_real_time_testInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_real_time_test_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [19] = {
    "eNrtV0tv1EgQdqJJFCQW5YAACSRYLrs3XhJwYknmsTsiswl4AtxGnXbNuDXtbm8/JonEifteV/w",
    "YhMRf2NP+CsRP2GrbmQwe25PJ8MiusOQ4Pf7q6/qqqqvb3lK74+F1Ae83Fz1vFZ9reC976bWSjZ",
    "cm7vT3mvdTNv4TjYSNdogikfYqL0EieAZacmuYFG3Rl4UwJvqgQFDExlKZMjbNIsuZGLasoI5Pv",
    "wgZDf1QWh5soi0JtgU/RLbYmh3kaTAF1LQAAhMqaQdhi5PB2GNl9ush0KG2UZUEDca3sXNLdyw3",
    "LObQPADaFtoQ9Fgf++YbYqBuDkplOqXaPwLKKOaMiEK1IdE+xBhgA7txgH+3rUFReRgNiTKbEJI",
    "R6C02TDilgDwn0/hijwlipGKENyNed4bTvu1w9KcjA+AVAUHfNhWQYSyZMOX591uotCnIHocG7N",
    "lBOZsPf1iX/OcM9kGVxq1flyNQZADbonTSJCDNgyRb4yqZhhkWwXOiNijmT0NQWr1YOdonmCfoo",
    "kUZDBKRbd1VbIThLWWzUdtV5qwlY6M02XoWLGFrjqAqC2O2FhV1wrkuhXVlvAUj4AlrgxhSDUtZ",
    "i3Fas6ArMcCuvMtXgxUME5/B6lIErDBdoxwg6Tu/Y2P5FEmtNjKqY/E2tramX0/D2sKA6hMKRV1",
    "AEaYBY5aEt5wtYNrlHoHolUncKwKnFTIL5em+FY19qYYYk4omcizBZbQUGOkB5hJXwq7GRVMFc7",
    "mchaOEhhC4BsM4dHDZILYgJtq1tg1cdyNmDhugqWJxQVYtrjpsQ01XUIcx7IqhkPuipWTkZz0+D",
    "S8AVhtRgonBJvYvddjC2YtS4faz297xfnb+BPvZkV3++fMEz1IBjzfxzM97brl63mX8bymzezxh",
    "90NunlrOzuHW8X5rQ/Hh1ut3tfuX/nr1/se/F5l/bWW+/f9CNr521GjHC2c0Va8O+9uEX7UC/ss",
    "T/OvZWPc796hk3Qf3nuw+1Bt3sN883Xj5a8L3slbt70rO36Pfb7iOj1WW1Kei7SA7mLgxsel27f",
    "gfTvi7OiMe57Lf0+vjL4vZX3ucty+K11ouXm5MsT0pyYLJ+v12Om6cSMdKTocbswj7SW4dfjsdN",
    "0+dj4gc9Aiejs6Gjisn0rGa07Ga7H8Bs/pz5WO6LuazT+ffmaHjak7H1eTc2CNuN4IevdvDvPCe",
    "O/v1DGgz1fdP20fntfO+st1/xc/vcfny+k5yLjqtXW3Bc9jXsltU37znw7OGv13RR70cfv0M61j",
    "03P6l8f94852vr2fjR+NP6HrIeFDwNZW9xk+jftHb/0Gd/gvBJ8O9",
    ""
  };

  static char newstr [1329] = "";
  newstr[0] = '\0';
  for (i = 0; i < 19; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_real_time_test(SimStruct *S)
{
  const char* newstr = sf_c2_real_time_test_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1852339644U));
  ssSetChecksum1(S,(3196202990U));
  ssSetChecksum2(S,(2518038020U));
  ssSetChecksum3(S,(3525427580U));
}

static void mdlRTW_c2_real_time_test(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_real_time_test(SimStruct *S)
{
  SFc2_real_time_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_real_time_testInstanceStruct *)utMalloc(sizeof
    (SFc2_real_time_testInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_real_time_testInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_real_time_test;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_real_time_test;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_real_time_test;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_real_time_test;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_real_time_test;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_real_time_test;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_real_time_test;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_real_time_test;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_real_time_test;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_real_time_test;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_real_time_test;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_real_time_test;
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
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_real_time_test(chartInstance);
}

void c2_real_time_test_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_real_time_test(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_real_time_test(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_real_time_test(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_real_time_test_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
