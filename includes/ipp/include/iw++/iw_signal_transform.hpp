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

#if !defined( __IPP_IWPP_SIGNAL_TRANSFORM__ )
#define __IPP_IWPP_SIGNAL_TRANSFORM__

#include "iw/iw_signal_transform.h"
#include "iw++/iw_signal.hpp"

namespace ipp
{

/**/////////////////////////////////////////////////////////////////////////////
//                   iwsDCT
///////////////////////////////////////////////////////////////////////////// */

// Auxiliary parameters class
// C API descriptions has more details
class IwsDCTParams: public ::IwsDCTParams
{
public:
    IW_BASE_PARAMS_CONSTRUCTORS(IwsDCTParams, iwsDCT_SetDefaultParams)
    IwsDCTParams(IppHintAlgorithm _algoMode = ippAlgHintNone)
    {
        this->algoMode = _algoMode;
    }
};

// Applies DCT to the source vector
// C API descriptions has more details
// Throws:
//      ippStsDataTypeErr                   data type is illegal
//      ippStsNoMemErr                      failed to allocate memory
//      ippStsNullPtrErr                    unexpected NULL pointer
// Returns:
//      ippStsNoErr                         no errors
IW_DECL_CPP(IppStatus) iwsDCT(
    const IwsVector    &srcVector, // [in]     Reference to the source vector
    IwsVector          &dstVector, // [in,out] Reference to the destination vector
    IwTransDirection    direction, // [in]     Transform direction
    const IwsDCTParams &auxParams  // [in]     Reference to the auxiliary parameters structure
)
{
    IppStatus ippStatus = ::iwsDCT(&srcVector, &dstVector, direction, &auxParams);
    OWN_ERROR_CHECK(ippStatus)
    return ippStatus;
}

}

#endif
