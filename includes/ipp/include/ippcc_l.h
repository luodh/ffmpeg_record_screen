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

/*
//              Intel(R) Integrated Performance Primitives (Intel(R) IPP)
//              Color Conversion Library (ippCC_L)
//
//
*/


#if !defined( __IPPCC_L_H__ ) || defined( _OWN_BLDPCS )
#define __IPPCC_L_H__

#ifndef __IPPDEFS_L_H__
  #include "ippdefs_l.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define khdtv0f  0.2126f
#define khdtv1f  0.7152f
#define khdtv2f  0.0722f
#define khdtv3f  0.1146f
#define khdtv4f  0.3854f
#define khdtv5f  0.5000f
#define khdtv6f  0.4542f
#define khdtv7f  0.0458f
#if !defined( _OWN_BLDPCS )
typedef enum {
  ippiBayerBGGR,
  ippiBayerRGGB,
  ippiBayerGBRG,
  ippiBayerGRBG
} IppiBayerGrid;
#endif /* _OWN_BLDPCS */


IPPAPI(IppStatus, ippiCFAToBGRA_VNG_8u_C1C4R_L, (const Ipp8u*  pSrc, IppiRectL srcRoiL, IppiSizeL srcSizeL, IppSizeL srcStepL, Ipp32f scale[4], Ipp8u* pDst, IppSizeL dstStepL, IppiBayerGrid grid))
IPPAPI(IppStatus, ippiCFAToBGRA_VNG_16u_C1C4R_L, (const Ipp16u*  pSrc, IppiRectL srcRoiL, IppiSizeL srcSizeL, IppSizeL srcStepL, Ipp32f scale[4], Ipp16u* pDst, IppSizeL dstStepL, IppiBayerGrid grid))
#ifdef __cplusplus
}
#endif

#if defined (_IPP_STDCALL_CDECL)
  #undef  _IPP_STDCALL_CDECL
  #define __stdcall __cdecl
#endif

#endif /* __IPPCC_L_H__ */
