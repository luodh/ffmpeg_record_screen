/* 
// Copyright 2016-2018 Intel Corporation All Rights Reserved.
// 
// The source code, information and material ("Material") contained herein is
// owned by Intel Corporation or its suppliers or licensors, and title
// to such Material remains with Intel Corporation or its suppliers or
// licensors. The Material contains proprietary information of Intel
// or its suppliers and licensors. The Material is protected by worldwide
// copyright laws and treaty provisions. No part of the Material may be used,
// copied, reproduced, modified, published, uploaded, posted, transmitted,
// distributed or disclosed in any way without Intel's prior express written
// permission. No license under any patent, copyright or other intellectual
// property rights in the Material is granted to or conferred upon you,
// either expressly, by implication, inducement, estoppel or otherwise.
// Any license under such intellectual property rights must be express and
// approved by Intel in writing.
// 
// Unless otherwise agreed by Intel in writing,
// you may not remove or alter this notice or any other notice embedded in
// Materials by Intel or Intel's suppliers or licensors in any way.
// 
*/

#if !defined( __IPP_IW_SIGNAL_TRANSFORM__ )
#define __IPP_IW_SIGNAL_TRANSFORM__

#include "iw/iw_signal.h"

#ifdef __cplusplus
extern "C" {
#endif

/* /////////////////////////////////////////////////////////////////////////////
//                   iwsDCT
///////////////////////////////////////////////////////////////////////////// */

// Auxiliary parameters structure
typedef struct _IwsDCTParams
{
    IppHintAlgorithm algoMode;   // Accuracy mode
} IwsDCTParams;

// Sets auxiliary parameters to default values
static IW_INLINE void iwsDCT_SetDefaultParams(
    IwsDCTParams *pParams      // [in,out] Pointer to the auxiliary parameters structure
)
{
    if(pParams)
    {
        pParams->algoMode = ippAlgHintNone;
    }
}

// Applies Discrete Cosine Transform (DCT) to the source vector
// Features support:
//      Inplace mode:            yes
//      64-bit sizes:            no
//      Internal threading:      no
//      Manual tiling:           yes
//      IwsTile simple tiling:   no
// Returns:
//      ippStsDataTypeErr                   data type is illegal
//      ippStsNoMemErr                      failed to allocate memory
//      ippStsNullPtrErr                    unexpected NULL pointer
//      ippStsNoErr                         no errors
IW_DECL(IppStatus) iwsDCT(
    const IwsVector    *pSrcVector, // [in]     Pointer to the source vector
    IwsVector          *pDstVector, // [in,out] Pointer to the destination vector
    IwTransDirection    direction,  // [in]     Transform direction
    const IwsDCTParams *pAuxParams  // [in]     Pointer to the auxiliary parameters structure. If NULL - default parameters will be used
);

#ifdef __cplusplus
}
#endif

#endif
