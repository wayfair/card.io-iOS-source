

//
// DO NOT EDIT HERE.
// Autogenerated from models/conv/ms_n19_10e2_nk8-0_fs0-3-3_ps0-3-3_h32_bm-valid_ib-True_b50_lr0.25_conv.model.pkl
//


#ifndef MODELC_5c241121
#define MODELC_5c241121

#include "eigen.h"
#include "dmz_macros.h"

typedef Eigen::Matrix<float, 27, 19, Eigen::RowMajor> ModelCInput_5c241121;
typedef Eigen::Matrix<float, 10, 1, Eigen::ColMajor> ModelCOutput_5c241121;

DMZ_INTERNAL ModelCOutput_5c241121 applyc_5c241121(const ModelCInput_5c241121& input);


#if TEST_GENERATED_MODELS

bool passc_5c241121();

#endif  // TEST_GENERATED_MODELS


#endif
