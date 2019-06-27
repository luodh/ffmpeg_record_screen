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
//              Image Processing (ippIP_TL)
//
//
*/


#if !defined( __IPPI_TL_H__ )
#define __IPPI_TL_H__

#ifndef __IPPDEFS_L_H__
  #include "ippdefs_l.h"
#endif

#include "ippi_l.h"

#ifdef __cplusplus
extern "C" {
#endif

/* /////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//                   Functions declarations
////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////// */

/* ////////////////////////////////////////////////////////////////////////////
//  Name:  ippiAdd_8u_C1RSfs_LT,  ippiAdd_8u_C3RSfs_LT,  ippiAdd_8u_C4RSfs_LT,  ippiAdd_8u_AC4RSfs_LT,
//         ippiAdd_16s_C1RSfs_LT, ippiAdd_16s_C3RSfs_LT, ippiAdd_16s_C4RSfs_LT, ippiAdd_16s_AC4RSfs_LT,
//         ippiAdd_16u_C1RSfs_LT, ippiAdd_16u_C3RSfs_LT, ippiAdd_16u_C4RSfs_LT, ippiAdd_16u_AC4RSfs_LT,
//         ippiSub_8u_C1RSfs_LT,  ippiSub_8u_C3RSfs_LT,  ippiSub_8u_C4RSfs_LT,  ippiSub_8u_AC4RSfs_LT,
//         ippiSub_16s_C1RSfs_LT, ippiSub_16s_C3RSfs_LT, ippiSub_16s_C4RSfs_LT, ippiSub_16s_AC4RSfs_LT,
//         ippiSub_16u_C1RSfs_LT, ippiSub_16u_C3RSfs_LT, ippiSub_16u_C4RSfs_LT, ippiSub_16u_AC4RSfs_LT,
//         ippiMul_8u_C1RSfs_LT,  ippiMul_8u_C3RSfs_LT,  ippiMul_8u_C4RSfs_LT,  ippiMul_8u_AC4RSfs_LT,
//         ippiMul_16s_C1RSfs_LT, ippiMul_16s_C3RSfs_LT, ippiMul_16s_C4RSfs_LT, ippiMul_16s_AC4RSfs_LT,
//         ippiMul_16u_C1RSfs_LT, ippiMul_16u_C3RSfs_LT, ippiMul_16u_C4RSfs_LT, ippiMul_16u_AC4RSfs_LT,
//
//  Purpose:    Adds, subtracts, or multiplies pixel values of two
//              source images and places the results in a destination image.
//
//  Returns:
//    ippStsNoErr            OK
//    ippStsNullPtrErr       One of the pointers is NULL
//    ippStsSizeErr          Width or height of images is less than or equal to zero
//
//  Parameters:
//    pSrc1, pSrc2           Pointers to the source images
//    src1Step, src2Step     Steps through the source images
//    pDst                   Pointer to the destination image
//    dstStep                Step through the destination image

//    roiSize                Size of the ROI
*/
IPPAPI(IppStatus, ippiAdd_8u_C1RSfs_LT,   (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_8u_C3RSfs_LT,   (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_8u_C4RSfs_LT,   (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_8u_AC4RSfs_LT,  (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiAdd_16u_C1RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16u_C3RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16u_C4RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16u_AC4RSfs_LT, (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiAdd_16s_C1RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16s_C3RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16s_C4RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16s_AC4RSfs_LT, (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiSub_8u_C1RSfs_LT,   (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_8u_C3RSfs_LT,   (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_8u_C4RSfs_LT,   (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_8u_AC4RSfs_LT,  (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiSub_16u_C1RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16u_C3RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16u_C4RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16u_AC4RSfs_LT, (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiSub_16s_C1RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16s_C3RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16s_C4RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16s_AC4RSfs_LT, (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMul_8u_C1RSfs_LT,  (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_8u_C3RSfs_LT,  (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_8u_C4RSfs_LT,  (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_8u_AC4RSfs_LT, (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMul_16s_C1RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16s_C3RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16s_C4RSfs_LT,  (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16s_AC4RSfs_LT, (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMul_16u_C1RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16u_C3RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16u_C4RSfs_LT,  (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16u_AC4RSfs_LT, (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMulC_8u_C1RSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u value, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_8u_C3RSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[3], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_8u_C4RSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[4], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_8u_AC4RSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[3], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMulC_16s_C1RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s value, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16s_C3RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[3], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16s_C4RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[4], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16s_AC4RSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[3], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMulC_16u_C1RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u value, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16u_C3RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[3], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16u_C4RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[4], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16u_AC4RSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[3], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMul_8u_C1IRSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_8u_C3IRSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_8u_C4IRSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_8u_AC4IRSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMul_16s_C1IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16s_C3IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16s_C4IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16s_AC4IRSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMul_16u_C1IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16u_C3IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16u_C4IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMul_16u_AC4IRSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiSub_32f_C1R_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSub_32f_C3R_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSub_32f_C4R_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSub_32f_AC4R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))

IPPAPI(IppStatus, ippiSub_32f_C1IR_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSub_32f_C3IR_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSub_32f_C4IR_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSub_32f_AC4IR_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))

IPPAPI(IppStatus, ippiAdd_32f_C1R_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAdd_32f_C3R_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAdd_32f_C4R_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAdd_32f_AC4R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))

IPPAPI(IppStatus, ippiAdd_32f_C1IR_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAdd_32f_C3IR_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAdd_32f_C4IR_LT,  (const Ipp32f* pSrc1, IppSizeL src1Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAdd_32f_AC4IR_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))

IPPAPI(IppStatus, ippiMulC_8u_C1IRSfs_LT, (Ipp8u value, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSizeLT, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_8u_C3IRSfs_LT, (const Ipp8u value[3], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_8u_C4IRSfs_LT, (const Ipp8u value[4], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_8u_AC4IRSfs_LT, (const Ipp8u value[3], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMulC_16u_C1IRSfs_LT, (Ipp16u value, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSizeLT, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16u_C3IRSfs_LT, (const Ipp16u value[3], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16u_C4IRSfs_LT, (const Ipp16u value[4], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16u_AC4IRSfs_LT, (const Ipp16u value[3], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMulC_16s_C1IRSfs_LT, (Ipp16s value, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSizeLT, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16s_C3IRSfs_LT, (const Ipp16s value[3], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16s_C4IRSfs_LT, (const Ipp16s value[4], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiMulC_16s_AC4IRSfs_LT, (const Ipp16s value[3], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiMul_32f_C1R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMul_32f_C3R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMul_32f_C4R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMul_32f_AC4R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))

IPPAPI(IppStatus, ippiMul_32f_C1IR_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMul_32f_C3IR_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMul_32f_C4IR_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMul_32f_AC4IR_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))

/* //////////////////////////////////////////////////////////////////////////////
//  Name:       ippiDiv_32f_C1R_LT, ippiDiv_32f_C3R_LT,
//              ippiDiv_32f_C4R_LT, ippiDiv_32f_AC4R_LT
//
//  Purpose:    Divides pixel values of an image by pixel values of another image
//              and places the results in a destination image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         One of the pointers is NULL
//    ippStsSizeErr            roiSize has a field with zero or negative value
//    ippStsStepErr            At least one step value is less than or equal to zero
//    ippStsDivByZero          A warning that a divisor value is zero, the function
//                             execution is continued.
//                             If a dividend is equal to zero, then the result is NAN_32F;
//                             if it is greater than zero, then the result is INF_32F,
//                             if it is less than zero, then the result is INF_NEG_32F
//
//  Parameters:
//    pSrc1                    Pointer to the divisor source image
//    src1Step                 Step through the divisor source image
//    pSrc2                    Pointer to the dividend source image
//    src2Step                 Step through the dividend source image
//    pDst                     Pointer to the destination image
//    dstStep                  Step through the destination image
//    roiSize                  Size of the ROI
*/

IPPAPI(IppStatus, ippiDiv_32f_C1R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step,Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDiv_32f_C3R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step,Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDiv_32f_C4R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step,Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDiv_32f_AC4R_LT, (const Ipp32f* pSrc1, IppSizeL src1Step, const Ipp32f* pSrc2, IppSizeL src2Step,Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))

/* ////////////////////////////////////////////////////////////////////////////
//  Name:       ippiDiv_32f_C1IR_LT, ippiDiv_32f_C3IR_LT,
//              ippiDiv_32f_C4IR_LT, ippiDiv_32f_AC4IR_LT
//
//  Purpose:    Divides pixel values of an image by pixel values of
//              another image and places the results in the dividend source
//              image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         One of the pointers is NULL
//    ippStsSizeErr            roiSize has a field with zero or negative value
//    ippStsStepErr            At least one step value is less than or equal to zero
//    ippStsDivByZero          A warning that a divisor value is zero, the function
//                             execution is continued.
//                             If a dividend is equal to zero, then the result is NAN_32F;
//                             if it is greater than zero, then the result is INF_32F,
//                             if it is less than zero, then the result is INF_NEG_32F
//
//  Parameters:
//    pSrc                     Pointer to the divisor source image
//    srcStep                  Step through the divisor source image
//    pSrcDst                  Pointer to the dividend source/destination image
//    srcDstStep               Step through the dividend source/destination image
//    roiSize                  Size of the ROI
*/

IPPAPI(IppStatus, ippiDiv_32f_C1IR_LT, (const Ipp32f* pSrc, IppSizeL srcStep,Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDiv_32f_C3IR_LT, (const Ipp32f* pSrc, IppSizeL srcStep,Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDiv_32f_C4IR_LT, (const Ipp32f* pSrc, IppSizeL srcStep,Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDiv_32f_AC4IR_LT, (const Ipp32f* pSrc, IppSizeL srcStep,Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))

/* ////////////////////////////////////////////////////////////////////////////
//  Name:       ippiDiv_16s_C1RSfs_LT, ippiDiv_8u_C1RSfs_LT, ippiDiv_16u_C1RSfs_LT,
//              ippiDiv_16s_C3RSfs_LT, ippiDiv_8u_C3RSfs_LT, ippiDiv_16u_C3RSfs_LT,
//              ippiDiv_16s_C4RSfs_LT, ippiDiv_8u_C4RSfs_LT, ippiDiv_16u_C4RSfs_LT,
//              ippiDiv_16s_AC4RSfs_LT,ippiDiv_8u_AC4RSfs_LT,ippiDiv_16u_AC4RSfs_LT
//
//  Purpose:    Divides pixel values of an image by pixel values of
//              another image and places the scaled results in a destination
//              image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         One of the pointers is NULL
//    ippStsSizeErr            roiSize has a field with zero or negative value
//    ippStsStepErr            At least one step value is less than or equal to zero
//    ippStsDivByZero          A warning that a divisor value is zero, the function
//                             execution is continued.
//                    If a dividend is equal to zero, then the result is zero;
//                    if it is greater than zero, then the result is IPP_MAX_16S, or IPP_MAX_8U, or IPP_MAX_16U
//                    if it is less than zero (for 16s), then the result is IPP_MIN_16S
//
//  Parameters:
//    pSrc1                    Pointer to the divisor source image
//    src1Step                 Step through the divisor source image
//    pSrc2                    Pointer to the dividend source image
//    src2Step                 Step through the dividend source image
//    pDst                     Pointer to the destination image
//    dstStep                  Step through the destination image
//    roiSize                  Size of the ROI
//    scaleFactor              Scale factor
*/

IPPAPI(IppStatus, ippiDiv_16s_C1RSfs_LT, (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_16s_C3RSfs_LT, (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_16s_C4RSfs_LT, (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_16s_AC4RSfs_LT, (const Ipp16s* pSrc1, IppSizeL src1Step, const Ipp16s* pSrc2, IppSizeL src2Step, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_8u_C1RSfs_LT, (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_8u_C3RSfs_LT, (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_8u_C4RSfs_LT, (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_8u_AC4RSfs_LT, (const Ipp8u* pSrc1, IppSizeL src1Step, const Ipp8u* pSrc2, IppSizeL src2Step, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_16u_C1RSfs_LT, (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_16u_C3RSfs_LT, (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_16u_C4RSfs_LT, (const Ipp16u* pSrc1, IppSizeL src1Step, const Ipp16u* pSrc2, IppSizeL src2Step, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_16u_AC4RSfs_LT, (const Ipp16u* pSrc1, IppSizeL src1Step,const Ipp16u* pSrc2, IppSizeL src2Step,Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int ScaleFactor))

IPPAPI(IppStatus, ippiDivC_16s_C1RSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s value,Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16s_C3RSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[3],Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16s_C4RSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[4],Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16s_AC4RSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[3],Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_8u_C1RSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u value,Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_8u_C3RSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[3],Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_8u_C4RSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[4],Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_8u_AC4RSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[3],Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16u_C1RSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u value,Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16u_C3RSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[3],Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16u_C4RSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[4],Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16u_AC4RSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[3],Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

IPPAPI(IppStatus, ippiDivC_16s_C1IRSfs_LT, (Ipp16s value, Ipp16s* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16s_C3IRSfs_LT, (const Ipp16s value[3], Ipp16s* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16s_C4IRSfs_LT, (const Ipp16s val[4], Ipp16s* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDivC_16s_AC4IRSfs_LT, (const Ipp16s val[3], Ipp16s* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDivC_8u_C1IRSfs_LT, (Ipp8u value, Ipp8u* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_8u_C3IRSfs_LT, (const Ipp8u value[3], Ipp8u* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_8u_C4IRSfs_LT, (const Ipp8u val[4], Ipp8u* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDivC_8u_AC4IRSfs_LT, (const Ipp8u val[3], Ipp8u* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDivC_16u_C1IRSfs_LT, (Ipp16u value, Ipp16u* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16u_C3IRSfs_LT, (const Ipp16u value[3], Ipp16u* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDivC_16u_C4IRSfs_LT, (const Ipp16u val[4], Ipp16u* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDivC_16u_AC4IRSfs_LT, (const Ipp16u val[3], Ipp16u* pSrcDst,IppSizeL srcDstStep, IppiSizeL roiSize, int ScaleFactor))

/* ////////////////////////////////////////////////////////////////////////////
//  Name:       ippiDivC_32f_C1R_LT, ippiDivC_32f_C3R_LT
//              ippiDivC_32f_C4R_LT, ippiDivC_32f_AC4R_LT
//
//  Purpose:    Divides pixel values of a source image by a constant
//              and places the results in a destination image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         One of the pointers is NULL
//    ippStsSizeErr            roiSize has a field with zero or negative value
//    ippStsStepErr            step value is less than or equal to zero
//    ippStsDivByZeroErr       The constant is equal to zero
//
//  Parameters:
//    value                    The constant divisor
//    pSrc                     Pointer to the source image
//    pDst                     Pointer to the destination image
//    roiSize                  Size of the ROI
*/

IPPAPI(IppStatus, ippiDivC_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f value,Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDivC_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[3],Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDivC_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f val[4],Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDivC_32f_AC4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f val[3],Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))

IPPAPI(IppStatus, ippiDivC_32f_C1IR_LT, (Ipp32f value, Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDivC_32f_C3IR_LT, (const Ipp32f value[3], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDivC_32f_C4IR_LT, (const Ipp32f val[4], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiDivC_32f_AC4IR_LT, (const Ipp32f val[3], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))

/* ////////////////////////////////////////////////////////////////////////////
//  Name:       ippiDiv_16s_C1IRSfs_LT, ippiDiv_8u_C1IRSfs_LT, ippiDiv_16u_C1IRSfs_LT,
//              ippiDiv_16s_C3IRSfs_LT, ippiDiv_8u_C3IRSfs_LT, ippiDiv_16u_C3IRSfs_LT,
//              ippiDiv_16s_C4IRSfs_LT, ippiDiv_8u_C4IRSfs_LT, ippiDiv_16u_C4IRSfs_LT,
//              ippiDiv_16s_AC4IRSfs_LT,ippiDiv_8u_AC4IRSfs_LT,ippiDiv_16u_AC4IRSfs_LT
//
//  Purpose:    Divides pixel values of an image by pixel values of
//              another image and places the scaled results in the dividend
//              source image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         One of the pointers is NULL
//    ippStsSizeErr            roiSize has a field with zero or negative value
//    ippStsStepErr            At least one step value is less than or equal to zero
//    ippStsDivByZero          A warning that a divisor value is zero, the function
//                             execution is continued.
//                    If a dividend is equal to zero, then the result is zero;
//                    if it is greater than zero, then the result is IPP_MAX_16S, or IPP_MAX_8U, or IPP_MAX_16U
//                    if it is less than zero (for 16s), then the result is IPP_MIN_16S
//
//  Parameters:
//    pSrc                     Pointer to the divisor source image
//    srcStep                  Step through the divisor source image
//    pSrcDst                  Pointer to the dividend source/destination image
//    srcDstStep               Step through the dividend source/destination image
//    roiSize                  Size of the ROI
//    scaleFactor              Scale factor
*/

IPPAPI(IppStatus, ippiDiv_16s_C1IRSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep,Ipp16s* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_16s_C3IRSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep,Ipp16s* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_16s_C4IRSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep,Ipp16s* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_16s_AC4IRSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep,Ipp16s* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_8u_C1IRSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep,Ipp8u* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_8u_C3IRSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep,Ipp8u* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_8u_C4IRSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep,Ipp8u* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_8u_AC4IRSfs_LT, (const Ipp8u* pSrc, IppSizeL srcStep,Ipp8u* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_16u_C1IRSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep,Ipp16u* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_16u_C3IRSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep,Ipp16u* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiDiv_16u_C4IRSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep,Ipp16u* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int ScaleFactor))
IPPAPI(IppStatus, ippiDiv_16u_AC4IRSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep,Ipp16u* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize, int ScaleFactor))


/* /////////////////////////////////////////////////////////////////////////////////
//  Name: ippiAddC_32f_C1R_LT, ippiAddC_32f_C3R_LT, ippiAddC_32f_C4R_LT,  ippiAddC_32f_AC4R_LT,
//        ippiSubC_32f_C1R_LT, ippiSubC_32f_C3R_LT, ippiSubC_32f_C4R_LT,  ippiSubC_32f_AC4R_LT,
//        ippiMulC_32f_C1R_LT, ippiMulC_32f_C3R_LT, ippiMulC_32f_C4R_LT,  ippiMulC_32f_AC4R_LT
//
//  Purpose:    Adds, subtracts, or multiplies pixel values of a source image
//              and a constant, and places the results in a destination image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         One of the pointers is NULL
//    ippStsSizeErr            Width or height of images is less than or equal to zero
//
//  Parameters:
//    value                    The constant value for the specified operation
//    pSrc                     Pointer to the source image
//    srcStep                  Step through the source image
//    pDst                     Pointer to the destination image
//    dstStep                  Step through the destination image
//    roiSize                  Size of the ROI
*/

IPPAPI(IppStatus, ippiAddC_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f value, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAddC_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[3], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAddC_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[4], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAddC_32f_AC4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[3], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSubC_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f value, Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSubC_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[3], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSubC_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[4], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSubC_32f_AC4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[3], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMulC_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f value, Ipp32f* Dst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMulC_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[3], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMulC_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[4], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMulC_32f_AC4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, const Ipp32f value[3], Ipp32f* pDst, IppSizeL dstStep, IppiSizeL roiSize))

/* ///////////////////////////////////////////////////////////////////////////////////////
//  Name: ippiAddC_32f_C1IR_LT, ippiAddC_32f_C3IR_LT, ippiAddC_32f_C4IR_LT, ippiAddC_32f_AC4IR_LT,
//        ippiSubC_32f_C1IR_LT, ippiSubC_32f_C3IR_LT, ippiSubC_32f_C4IR_LT, ippiSubC_32f_AC4IR_LT,
//        ippiMulC_32f_C1IR_LT, ippiMulC_32f_C3IR_LT, ippiMulC_32f_C4IR_LT, ippiMulC_32f_AC4IR_LT
//
//  Purpose:    Adds, subtracts, or multiplies pixel values of an image
//              and a constant, and places the results in the same image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         Pointer is NULL
//    ippStsSizeErr            Width or height of an image is less than or equal to zero
//
//  Parameters:
//    value                    The constant value for the specified operation
//    pSrcDst                  Pointer to the image
//    srcDstStep               Step through the image
//    roiSize                  Size of the ROI
*/

IPPAPI(IppStatus, ippiAddC_32f_C1IR_LT, (Ipp32f value, Ipp32f* pSrcDst, IppSizeL srcDstStep,IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAddC_32f_C3IR_LT, (const Ipp32f value[3], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAddC_32f_C4IR_LT, (const Ipp32f value[4], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiAddC_32f_AC4IR_LT, (const Ipp32f value[3], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSubC_32f_C1IR_LT, (Ipp32f value, Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSubC_32f_C3IR_LT, (const Ipp32f value[3], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSubC_32f_C4IR_LT, (const Ipp32f value[4], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiSubC_32f_AC4IR_LT, (const Ipp32f value[3], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMulC_32f_C1IR_LT, (Ipp32f value, Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMulC_32f_C3IR_LT, (const Ipp32f value[3], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMulC_32f_C4IR_LT, (const Ipp32f value[4], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))
IPPAPI(IppStatus, ippiMulC_32f_AC4IR_LT, (const Ipp32f value[3], Ipp32f* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize))

/* ////////////////////////////////////////////////////////////////////////////////////////////
//  Name: ippiAdd_8u_C1IRSfs_LT,  ippiAdd_8u_C3IRSfs_LT,  ippiAdd_8u_C4IRSfs_LT,  ippiAdd_8u_AC4IRSfs_LT,
//        ippiAdd_16s_C1IRSfs_LT, ippiAdd_16s_C3IRSfs_LT, ippiAdd_16s_C4IRSfs_LT, ippiAdd_16s_AC4IRSfs_LT,
//        ippiAdd_16u_C1IRSfs_LT, ippiAdd_16u_C3IRSfs_LT, ippiAdd_16u_C4IRSfs_LT, ippiAdd_16u_AC4IRSfs_LT,
//        ippiSub_8u_C1IRSfs_LT,  ippiSub_8u_C3IRSfs_LT,  ippiSub_8u_C4IRSfs_LT,  ippiSub_8u_AC4IRSfs_LT,
//        ippiSub_16s_C1IRSfs_LT, ippiSub_16s_C3IRSfs_LT, ippiSub_16s_C4IRSfs_LT, ippiSub_16s_AC4IRSfs_LT,
//        ippiSub_16u_C1IRSfs_LT, ippiSub_16u_C3IRSfs_LT, ippiSub_16u_C4IRSfs_LT, ippiSub_16u_AC4IRSfs_LT,
//
//  Purpose:    Adds, subtracts, or multiplies pixel values of two source images
//              and places the scaled results in the first source image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         One of the pointers is NULL
//    ippStsSizeErr            Width or height of images is less than or equal to zero
//
//  Parameters:
//    pSrc                     Pointer to the source image
//    srcStep                  Step through the second source image
//    pSrcDst                  Pointer to the source/destination image
//    srcDstStep               Step through the source/destination image
//    roiSize                  Size of the ROI
//    scaleFactor              Scale factor
*/

IPPAPI(IppStatus, ippiAdd_8u_C1IRSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_8u_C3IRSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_8u_C4IRSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_8u_AC4IRSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16s_C1IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16s_C3IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16s_C4IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16s_AC4IRSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16u_C1IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16u_C3IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16u_C4IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAdd_16u_AC4IRSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_8u_C1IRSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_8u_C3IRSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_8u_C4IRSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_8u_AC4IRSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16s_C1IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16s_C3IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16s_C4IRSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16s_AC4IRSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16u_C1IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16u_C3IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16u_C4IRSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSub_16u_AC4IRSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))

/* /////////////////////////////////////////////////////////////////////////////////////////////
//  Name: ippiAddC_8u_C1RSfs_LT,  ippiAddC_8u_C3RSfs_LT,  ippiAddC_8u_C4RSfs_L   ippiAddC_8u_AC4RSfs_LT,
//        ippiAddC_16s_C1RSfs_LT, ippiAddC_16s_C3RSfs_LT, ippiAddC_16s_C4RSfs_LT, ippiAddC_16s_AC4RSfs_LT,
//        ippiAddC_16u_C1RSfs_LT, ippiAddC_16u_C3RSfs_LT, ippiAddC_16u_C4RSfs_LT, ippiAddC_16u_AC4RSfs_LT,
//        ippiSubC_8u_C1RSfs_LT,  ippiSubC_8u_C3RSfs_LT,  ippiSubC_8u_C4RSfs_LT,  ippiSubC_8u_AC4RSfs_LT,
//        ippiSubC_16s_C1RSfs_LT, ippiSubC_16s_C3RSfs_LT, ippiSubC_16s_C4RSfs_LT, ippiSubC_16s_AC4RSfs_LT,
//        ippiSubC_16u_C1RSfs_LT, ippiSubC_16u_C3RSfs_LT, ippiSubC_16u_C4RSfs_LT, ippiSubC_16u_AC4RSfs_LT,
//        ippiMulC_8u_C1RSfs_LT,  ippiMulC_8u_C3RSfs_LT,  ippiMulC_8u_C4RSfs_LT,  ippiMulC_8u_AC4RSfs_LT,
//        ippiMulC_16s_C1RSfs_LT, ippiMulC_16s_C3RSfs_LT, ippiMulC_16s_C4RSfs_LT, ippiMulC_16s_AC4RSfs_LT
//        ippiMulC_16u_C1RSfs_LT, ippiMulC_16u_C3RSfs_LT, ippiMulC_16u_C4RSfs_LT, ippiMulC_16u_AC4RSfs_LT
//
//  Purpose:    Adds, subtracts, or multiplies pixel values of a source image
//              and a constant, and places the scaled results in the destination image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         One of the pointers is NULL
//    ippStsSizeErr            Width or height of images is less than or equal to zero
//
//  Parameters:
//    value                    Constant value (constant vector for multi-channel images)
//    pSrc                     Pointer to the source image
//    srcStep                  Step through the source image
//    pDst                     Pointer to the destination image
//    dstStep                  Step through the destination image
//    roiSize                  Size of the ROI
//    scaleFactor              Scale factor
*/

IPPAPI(IppStatus, ippiAddC_8u_C1RSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u value, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_8u_C3RSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[3], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_8u_C4RSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[4], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_8u_AC4RSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[3], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16s_C1RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s value, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16s_C3RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[3], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16s_C4RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[4], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16s_AC4RSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[3], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16u_C1RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u value, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16u_C3RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[3], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16u_C4RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[4], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16u_AC4RSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[3], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_8u_C1RSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u value, Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_8u_C3RSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep ,const Ipp8u value[3], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_8u_C4RSfs_LT,   (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[4], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_8u_AC4RSfs_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, const Ipp8u value[3], Ipp8u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16s_C1RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s value, Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16s_C3RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[3], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16s_C4RSfs_LT,  (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[4], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16s_AC4RSfs_LT, (const Ipp16s* pSrc, IppSizeL srcStep, const Ipp16s value[3], Ipp16s* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16u_C1RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u value, Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16u_C3RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[3], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16u_C4RSfs_LT,  (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[4], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16u_AC4RSfs_LT, (const Ipp16u* pSrc, IppSizeL srcStep, const Ipp16u value[3], Ipp16u* pDst, IppSizeL dstStep, IppiSizeL roiSize, int scaleFactor))

/* //////////////////////////////////////////////////////////////////////////////////////////////
//  Name: ippiAddC_8u_C1IRSfs_LT,  ippiAddC_8u_C3IRSfs_LT,  ippiAddC_8u_C4IRSfs_LT,   ippiAddC_8u_AC4IRSfs_LT,
//        ippiAddC_16s_C1IRSfs_LT, ippiAddC_16s_C3IRSfs_LT, ippiAddC_16s_C4IRSfs_LT,  ippiAddC_16s_AC4IRSfs_LT,
//        ippiAddC_16u_C1IRSfs_LT, ippiAddC_16u_C3IRSfs_LT, ippiAddC_16u_C4IRSfs_LT,  ippiAddC_16u_AC4IRSfs_LT,
//        ippiSubC_8u_C1IRSfs_LT,  ippiSubC_8u_C3IRSfs_LT,  ippiSubC_8u_C4IRSfs_LT,   ippiSubC_8u_AC4IRSfs_LT,
//        ippiSubC_16s_C1IRSfs_LT, ippiSubC_16s_C3IRSfs_LT, ippiSubC_16s_C4IRSfs_LT,  ippiSubC_16s_AC4IRSfs_LT,
//        ippiSubC_16u_C1IRSfs_LT, ippiSubC_16u_C3IRSfs_LT, ippiSubC_16u_C4IRSfs_LT,  ippiSubC_16u_AC4IRSfs_LT,
//        ippiMulC_8u_C1IRSfs_LT,  ippiMulC_8u_C3IRSfs_LT,  ippiMulC_8u_C4IRSfs_LT,   ippiMulC_8u_AC4IRSfs_LT,
//        ippiMulC_16s_C1IRSfs_LT, ippiMulC_16s_C3IRSfs_LT, ippiMulC_16s_C4IRSfs_LT,  ippiMulC_16s_AC4IRSfs_LT
//        ippiMulC_16u_C1IRSfs_LT, ippiMulC_16u_C3IRSfs_LT, ippiMulC_16u_C4IRSfs_LT,  ippiMulC_16u_AC4IRSfs_LT
//
//  Purpose:    Adds, subtracts, or multiplies pixel values of an image and a constant
//              and places the scaled results in the same image.
//
//  Returns:
//    ippStsNoErr              OK
//    ippStsNullPtrErr         Pointer is NULL
//    ippStsSizeErr            Width or height of an image is less than or equal to zero
//
//  Parameters:
//    value                    Constant value (constant vector for multi-channel images)
//    pSrcDst                  Pointer to the image
//    srcDstStep               Step through the image
//    roiSize                  Size of the ROI
//    scaleFactor              Scale factor
*/

IPPAPI(IppStatus, ippiAddC_8u_C1IRSfs_LT,   (Ipp8u value, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_8u_C3IRSfs_LT,   (const Ipp8u value[3], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_8u_C4IRSfs_LT,   (const Ipp8u value[4], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_8u_AC4IRSfs_LT,  (const Ipp8u value[3], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16s_C1IRSfs_LT,  (Ipp16s value, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16s_C3IRSfs_LT,  (const Ipp16s value[3], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16s_C4IRSfs_LT,  (const Ipp16s value[4], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16s_AC4IRSfs_LT, (const Ipp16s value[3], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16u_C1IRSfs_LT,  (Ipp16u value, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16u_C3IRSfs_LT,  (const Ipp16u value[3], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16u_C4IRSfs_LT,  (const Ipp16u value[4], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiAddC_16u_AC4IRSfs_LT, (const Ipp16u value[3], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_8u_C1IRSfs_LT,   (Ipp8u value, Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_8u_C3IRSfs_LT,   (const Ipp8u value[3], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_8u_C4IRSfs_LT,   (const Ipp8u value[4], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_8u_AC4IRSfs_LT,  (const Ipp8u value[3], Ipp8u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16s_C1IRSfs_LT,  (Ipp16s value, Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16s_C3IRSfs_LT,  (const Ipp16s value[3], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16s_C4IRSfs_LT,  (const Ipp16s value[4], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16s_AC4IRSfs_LT, (const Ipp16s value[3], Ipp16s* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16u_C1IRSfs_LT,  (Ipp16u value, Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16u_C3IRSfs_LT,  (const Ipp16u value[3], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16u_C4IRSfs_LT,  (const Ipp16u value[4], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))
IPPAPI(IppStatus, ippiSubC_16u_AC4IRSfs_LT, (const Ipp16u value[3], Ipp16u* pSrcDst, IppSizeL srcDstStep, IppiSizeL roiSize, int scaleFactor))

/* /////////////////////////////////////////////////////////////////////////////
//                     Bilateral filter functions with Border
// /////////////////////////////////////////////////////////////////////////////
//  Name:       ippiFilterBilateralBorderGetBufferSize_LT
//  Purpose:    to define buffer size for bilateral filter
//  Parameters:
//   filter        Type of bilateral filter. Possible value is ippiFilterBilateralGauss.
//   dstRoiSize    Roi size (in pixels) of destination image what will be applied
//                 for processing.
//   radius        Radius of circular neighborhood what defines pixels for calculation.
//   dataType      Data type of the source and desination images. Possible values
//                 are Ipp8u and Ipp32f.
//   numChannels   Number of channels in the images. Possible values are 1 and 3.
//   distMethod    The type of method for definition of distance beetween pixel untensity.
//                 Possible value is ippDistNormL1.
//   pSpecSize     Pointer to the size (in bytes) of the spec.
//   pBufferSize   Pointer to the size (in bytes) of the external work buffer.
//  Return:
//    ippStsNoErr               OK
//    ippStsNullPtrErr          any pointer is NULL
//    ippStsSizeErr             size of dstRoiSize is less or equal 0
//    ippStsMaskSizeErr         radius is less or equal 0
//    ippStsNotSupportedModeErr filter or distMethod is not supported
//    ippStsDataTypeErr         Indicates an error when dataType has an illegal value.
//    ippStsNumChannelsErr      Indicates an error when numChannels has an illegal value.
*/
IPPAPI(IppStatus, ippiFilterBilateralBorderGetBufferSize_LT, (IppiFilterBilateralType filter, IppiSizeL dstRoiSize, int radius, IppDataType dataType, int numChannels, IppiDistanceMethodType distMethodType, IppSizeL *pSpecSize, IppSizeL *pBufferSize))

/* /////////////////////////////////////////////////////////////////////////////
//  Name:       ippiFilterBilateralBorderInit_LT
//  Purpose:    initialization of Spec for bilateral filter with border
//  Parameters:
//   filter           Type of bilateral filter. Possible value is ippiFilterBilateralGauss.
//   dstRoiSize       Roi size (in pixels) of destination image what will be applied
//                    for processing.
//   radius           Radius of circular neighborhood what defines pixels for calculation.
//   dataType         Data type of the source and desination images. Possible values
//                    are Ipp8u and Ipp32f.
//   numChannels      Number of channels in the images. Possible values are 1 and 3.
//   distMethodType   The type of method for definition of distance beetween pixel intensity.
//                    Possible value is ippDistNormL1.
//   valSquareSigma   square of Sigma for factor function for pixel intensity
//   posSquareSigma   square of Sigma for factor function for pixel position
//    pSpec           pointer to Spec
//  Return:
//    ippStsNoErr               OK
//    ippStsNullPtrErr          pointer ro Spec is NULL
//    ippStsSizeErr             size of dstRoiSize is less or equal 0
//    ippStsMaskSizeErr         radius is less or equal 0
//    ippStsNotSupportedModeErr filter or distMethod is not supported
//    ippStsDataTypeErr         Indicates an error when dataType has an illegal value.
//    ippStsNumChannelsErr      Indicates an error when numChannels has an illegal value.
//    ippStsBadArgErr           valSquareSigma or posSquareSigma is less or equal 0
*/
IPPAPI(IppStatus, ippiFilterBilateralBorderInit_LT,(IppiFilterBilateralType filter, IppiSizeL dstRoiSize, int radius, IppDataType dataType, int numChannels, IppiDistanceMethodType distMethod, Ipp32f valSquareSigma, Ipp32f posSquareSigma, IppiFilterBilateralSpec_LT *pSpecL))

/* /////////////////////////////////////////////////////////////////////////////
//  Name:       ippiFilterBilateralBorder_8u_C1R
//              ippiFilterBilateralBorder_8u_C3R
//  Purpose:    bilateral filter
//  Parameters:
//    pSrc         Pointer to the source image
//    srcStep      Step through the source image
//    pDst         Pointer to the destination image
//    dstStep      Step through the destination image
//    dstRoiSize   Size of the destination ROI
//    borderType   Type of border.
//    borderValue  Pointer to constant value to assign to pixels of the constant border. This parameter is applicable
//                 only to the ippBorderConst border type. If this pointer is NULL than the constant value is equal 0.
//    pSpec        Pointer to filter spec
//    pBuffer      Pointer ro work buffer
//  Return:
//    ippStsNoErr           OK
//    ippStsNullPtrErr      pointer to Src, Dst, Spec or Buffer is NULL
//    ippStsSizeErr         size of dstRoiSize is less or equal 0
//    ippStsContextMatchErr filter Spec is not match
//    ippStsNotEvenStepErr  Indicated an error when one of the step values is not divisible by 4
//                          for floating-point images.
//    ippStsBorderErr       Indicates an error when borderType has illegal value.
*/
IPPAPI(IppStatus, ippiFilterBilateralBorder_8u_C1R_LT,(const Ipp8u *pSrc, IppSizeL srcStep, Ipp8u *pDst, IppSizeL dstStep, IppiSizeL dstRoiSize, IppiBorderType borderType, Ipp8u *pBorderValue, const IppiFilterBilateralSpec_LT *pSpec, Ipp8u* pBuffer))
IPPAPI(IppStatus, ippiFilterBilateralBorder_8u_C3R_LT,(const Ipp8u *pSrc, IppSizeL srcStep, Ipp8u *pDst, IppSizeL dstStep, IppiSizeL dstRoiSize, IppiBorderType borderType, Ipp8u *pBorderValue, const IppiFilterBilateralSpec_LT *pSpec, Ipp8u* pBuffer))

/* /////////////////////////////////////////////////////////////////////////////
//  Name:               ippiResizeGetSize_LT
//  Purpose:            Computes the size of Spec structure and temporal buffer for Resize transform
//
//  Parameters:
//    srcSize           Size of the input image (in pixels)
//    dstSize           Size of the output image (in pixels)
//    dataType          Data type {ipp8u|ipp16u|ipp16s|ipp32f} and ipp64f only for Linear interpolation
//    numChannels       Number of channels, possible values are 1 or 3 or 4
//    interpolation     Interpolation method
//    antialiasing      Supported values:
//                        0 - resizing without antialiasing
//                        1 - resizing with antialiasing
//    pSpecSize         Pointer to the size (in bytes) of the Spec structure
//    pInitBufSize      Pointer to the size (in bytes) of the temporal buffer
//
//  Return Values:
//    ippStsNoErr               Indicates no error
//    ippStsNullPtrErr          Indicates an error if one of the specified pointers is NULL
//    ippStsNoOperation         Indicates a warning if width or height of any image is zero
//    ippStsSizeErr             Indicates an error in the following cases:
//                              -  if width or height of the source or destination image is negative,
//                              -  if the source image size is less than a filter size of the chosen
//                                 interpolation method (except ippSuper),
//                              -  if one of the specified dimensions of the source image is less than
//                                 the corresponding dimension of the destination image (for ippSuper method only),
//    ippStsExceededSizeErr     Indicates an error in the following cases:
//                              -  if one of the calculated sizes exceeds maximum of IppSizeL type positive value
//                                 (the size of the one of the processed images is too large)
//                              -  if one of width or height of the destination image or the source image with borders
//                                 exceeds 536870911 (0x1FFFFFFF)
//    ippStsInterpolationErr    Indicates an error if interpolation has an illegal value
//    ippStsDataTypeErr         Indicates an error when dataType has an illegal value.
//    ippStsNoAntialiasing      Indicates a warning if specified interpolation does not support antialiasing
//    ippStsNotSupportedModeErr Indicates an error if requested mode is currently not supported
//
//  Notes:
//    1. Supported interpolation methods are ippNearest, ippLinear, ippCubic, ippLanczos and ippSuper.
//    2. If antialiasing value is equal to 1, use the ippResizeAntialiasing<Filter>Init functions, otherwise, use ippResize<Filter>Init
//    3. The implemented interpolation algorithms have the following filter sizes: Nearest Neighbor 1x1,
//       Linear 2x2, Cubic 4x4, 2-lobed Lanczos 4x4.
*/
IPPAPI (IppStatus, ippiResizeGetSize_LT, (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, IppiInterpolationType interpolation, Ipp32u antialiasing, IppSizeL* pSpecSize, IppSizeL* pInitBufSize))

/* /////////////////////////////////////////////////////////////////////////////
//  Name:               ippiResizeGetBufferSize_LT
//  Purpose:            Computes the size of external buffer for Resize transform
//
//  Parameters:
//    pSpec             Pointer to the Spec structure for resize filter
//    pBufSize          Pointer to the size (in bytes) of the external buffer
//
//  Return Values:
//    ippStsNoErr           Indicates no error
//    ippStsNullPtrErr      Indicates an error if one of the specified pointers is NULL
//    ippStsContextMatchErr Indicates an error if pointer to an invalid pSpec structure is passed
//    ippStsExceededSizeErr   Indicates an error if one of the calculated sizes exceeds maximum of IppSizeL type
//                            positive value (the size of the one of the processed images is too large)
*/
IPPAPI (IppStatus, ippiResizeGetBufferSize_LT, (const IppiResizeSpec_LT* pSpec, IppSizeL* pBufSize))

/* /////////////////////////////////////////////////////////////////////////////
//  Name:               ippiResizeGetBorderSize_LT
//  Purpose:            Computes the size of possible borders for Resize transform
//
//  Parameters:
//    pSpec             Pointer to the Spec structure for resize filter
//    borderSize        Size of necessary borders (for memory allocation)
//
//  Return Values:
//    ippStsNoErr             Indicates no error
//    ippStsNullPtrErr        Indicates an error if one of the specified pointers is NULL
//    ippStsContextMatchErr   Indicates an error if pointer to an invalid pSpec structure is passed
*/
IPPAPI (IppStatus, ippiResizeGetBorderSize_LT, (const IppiResizeSpec_LT* pSpec, IppiBorderSize* pBorderSize))

/* /////////////////////////////////////////////////////////////////////////////
//  Name:               ippiResizeNearestInit_LT
//                      ippiResizeLinearInit_LT
//                      ippiResizeCubicInit_LT
//                      ippiResizeLanczosInit_LT
//                      ippiResizeSuperInit_LT
//
//  Purpose:            Initializes the Spec structure for the Resize transform
//                      by different interpolation methods
//
//  Parameters:
//    srcSize           Size of the input image (in pixels)
//    dstSize           Size of the output image (in pixels)
//    dataType          Data type {ipp8u|ipp16u|ipp16s|ipp32f} and ipp64f only for Linear interpolation
//    numChannels       Number of channels, possible values are 1 or 3 or 4
//    valueB            The first parameter (B) for specifying Cubic filters
//    valueC            The second parameter (C) for specifying Cubic filters
//    numLobes          The parameter for specifying Lanczos (2 or 3) or Hahn (3 or 4) filters
//    pInitBuf          Pointer to the temporal buffer for several filter initialization
//    pSpec             Pointer to the Spec structure for resize filter
//
//  Return Values:
//    ippStsNoErr               Indicates no error
//    ippStsNullPtrErr          Indicates an error if one of the specified pointers is NULL
//    ippStsNoOperation         Indicates a warning if width or height of any image is zero
//    ippStsSizeErr             Indicates an error in the following cases:
//                              -  if width or height of the source or destination image is negative,
//                              -  if the source image size is less than a filter size of the chosen
//                                 interpolation method (except ippiResizeSuperInit).
//                              -  if one of the specified dimensions of the source image is less than
//                                 the corresponding dimension of the destination image
//                                 (for ippiResizeSuperInit only).
//    ippStsExceededSizeErr     Indicates an error if one of width or height of the destination image or
//                              the source image with borders exceeds 536870911 (0x1FFFFFFF)
//    ippStsDataTypeErr         Indicates an error when dataType has an illegal value.
//    ippStsNumChannelsErr      Indicates an error if numChannels has illegal value
//    ippStsNotSupportedModeErr Indicates an error if the requested mode is not supported.
//
//  Notes/References:
//    1. The equation shows the family of cubic filters:
//           ((12-9B-6C)*|x|^3 + (-18+12B+6C)*|x|^2                  + (6-2B)  ) / 6   for |x| < 1
//    K(x) = ((   -B-6C)*|x|^3 + (    6B+30C)*|x|^2 + (-12B-48C)*|x| + (8B+24C)) / 6   for 1 <= |x| < 2
//           0   elsewhere
//    Some values of (B,C) correspond to known cubic splines: Catmull-Rom (B=0,C=0.5), B-Spline (B=1,C=0) and other.
//      Mitchell, Don P.; Netravali, Arun N. (Aug. 1988). "Reconstruction filters in computer graphics"
//      http://www.mentallandscape.com/Papers_siggraph88.pdf
//
//    2. Hahn filter does not supported now.
//    3. The implemented interpolation algorithms have the following filter sizes: Nearest Neighbor 1x1,
//       Linear 2x2, Cubic 4x4, 2-lobed Lanczos 4x4, 3-lobed Lanczos 6x6.
*/
IPPAPI (IppStatus, ippiResizeNearestInit_LT, (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, Ipp32u numChannels, IppiResizeSpec_LT* pSpec))
IPPAPI (IppStatus, ippiResizeLinearInit_LT,  (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, Ipp32u numChannels, IppiResizeSpec_LT* pSpec))
IPPAPI (IppStatus, ippiResizeCubicInit_LT,   (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, Ipp32u numChannels, Ipp32f valueB, Ipp32f valueC, IppiResizeSpec_LT* pSpec, Ipp8u* pInitBuf))
IPPAPI (IppStatus, ippiResizeLanczosInit_LT, (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, Ipp32u numChannels, Ipp32u numLobes, IppiResizeSpec_LT* pSpec, Ipp8u* pInitBuf))
IPPAPI (IppStatus, ippiResizeSuperInit_LT,   (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, Ipp32u numChannels, IppiResizeSpec_LT* pSpec))

/* /////////////////////////////////////////////////////////////////////////////
//  Name:               ippiResizeNearest
//                      ippiResizeLinear
//                      ippiResizeCubic
//                      ippiResizeLanczos
//                      ippiResizeSuper
//
//  Purpose:            Changes an image size by different interpolation methods
//
//  Parameters:
//    pSrc              Pointer to the source image
//    srcStep           Distance (in bytes) between of consecutive lines in the source image
//    pDst              Pointer to the destination image
//    dstStep           Distance (in bytes) between of consecutive lines in the destination image
//    border            Type of the border
//    borderValue       Pointer to the constant value(s) if border type equals ippBorderConstant
//    pSpec             Pointer to the Spec structure for resize filter
//    pBuffer           Pointer to the work buffer
//
//  Return Values:
//    ippStsNoErr               Indicates no error
//    ippStsNullPtrErr          Indicates an error if one of the specified pointers is NULL
//    ippStsBorderErr           Indicates an error if border type has an illegal value
//    ippStsContextMatchErr     Indicates an error if pointer to an invalid pSpec structure is passed
//    ippStsNotSupportedModeErr Indicates an error if requested mode is currently not supported
//    ippStsStepErr             Indicates an error if the step value is not data type multiple
//
//  Notes:
//    1. Supported border types are ippBorderInMemory and ippBorderReplicate
//       (except Nearest Neighbor and Super Sampling methods).
//    2. Hahn filter does not supported now.
*/
IPPAPI (IppStatus, ippiResizeNearest_8u_C1R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_8u_C3R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_8u_C4R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_16u_C1R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_16u_C3R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_16u_C4R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_16s_C1R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_16s_C3R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_16s_C4R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeNearest_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))

IPPAPI (IppStatus, ippiResizeLinear_8u_C1R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_8u_C3R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_8u_C4R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_16u_C1R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_16u_C3R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_16u_C4R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_16s_C1R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_16s_C3R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_16s_C4R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_64f_C1R_LT, (const Ipp64f* pSrc, IppSizeL srcStep, Ipp64f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp64f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_64f_C3R_LT, (const Ipp64f* pSrc, IppSizeL srcStep, Ipp64f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp64f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLinear_64f_C4R_LT, (const Ipp64f* pSrc, IppSizeL srcStep, Ipp64f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp64f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))

IPPAPI (IppStatus, ippiResizeCubic_8u_C1R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_8u_C3R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_8u_C4R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_16u_C1R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_16u_C3R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_16u_C4R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_16s_C1R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_16s_C3R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_16s_C4R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeCubic_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))

IPPAPI (IppStatus, ippiResizeLanczos_8u_C1R_LT, (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_8u_C3R_LT, (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_8u_C4R_LT, (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_16u_C1R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep,IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_16u_C3R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_16u_C4R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_16s_C1R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_16s_C3R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_16s_C4R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeLanczos_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, const Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))

IPPAPI (IppStatus, ippiResizeSuper_8u_C1R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_8u_C3R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_8u_C4R_LT,  (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_16u_C1R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_16u_C3R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_16u_C4R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_16s_C1R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_16s_C3R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_16s_C4R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeSuper_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))


/* /////////////////////////////////////////////////////////////////////////////
//  Name:               ippiResizeNearestAntialiasingInit_LT
//                      ippiResizeLinearAntialiasingInit_LT
//                      ippiResizeCubicAntialiasingInit_LT
//
//  Purpose:            Initializes the Spec structure for the Resize transform
//                      with antialiasing by different interpolation methods
//
//  Parameters:
//    srcSize           Size of the input image (in pixels)
//    dstSize           Size of the output image (in pixels)
//    valueB            The first parameter (B) for specifying Cubic filters
//    valueC            The second parameter (C) for specifying Cubic filters
//    numLobes          The parameter for specifying Lanczos (2 or 3) or Hahn (3 or 4) filters
//    pInitBuf          Pointer to the temporal buffer for several filter initialization
//    pSpec             Pointer to the Spec structure for resize filter
//
//  Return Values:
//    ippStsNoErr               Indicates no error
//    ippStsNullPtrErr          Indicates an error if one of the specified pointers is NULL
//    ippStsNoOperation         Indicates a warning if width or height of any image is zero
//    ippStsSizeErr             Indicates an error if width or height of the source image is negative
//    ippStsExceededSizeErr     Indicates an error if one of width or height of the destination image or
//                              the source image with borders exceeds 536870911 (0x1FFFFFFF)
//    ippStsDataTypeErr         Indicates an error when dataType has an illegal value.
//    ippStsNumChannelsErr      Indicates an error if numChannels has illegal value
//    ippStsNotSupportedModeErr Indicates an error if the requested mode is not supported.
//
//  Notes/References:
//    1. The equation shows the family of cubic filters:
//           ((12-9B-6C)*|x|^3 + (-18+12B+6C)*|x|^2                  + (6-2B)  ) / 6   for |x| < 1
//    K(x) = ((   -B-6C)*|x|^3 + (    6B+30C)*|x|^2 + (-12B-48C)*|x| + (8B+24C)) / 6   for 1 <= |x| < 2
//           0   elsewhere
//    Some values of (B,C) correspond to known cubic splines: Catmull-Rom (B=0,C=0.5), B-Spline (B=1,C=0) and other.
//      Mitchell, Don P.; Netravali, Arun N. (Aug. 1988). "Reconstruction filters in computer graphics"
//      http://www.mentallandscape.com/Papers_siggraph88.pdf
//
//    2. Hahn filter does not supported now.
*/

IPPAPI (IppStatus, ippiResizeAntialiasingLinearInit_LT, (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, Ipp32u numChannels, IppiResizeSpec_LT* pSpec, Ipp8u* pInitBuf))
IPPAPI (IppStatus, ippiResizeAntialiasingCubicInit_LT, (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, Ipp32u numChannels, Ipp32f valueB, Ipp32f valueC, IppiResizeSpec_LT* pSpec, Ipp8u* pInitBuf))
IPPAPI (IppStatus, ippiResizeAntialiasingLanczosInit_LT, (IppiSizeL srcSize, IppiSizeL dstSize, IppDataType dataType, Ipp32u numChannels, Ipp32u numLobes, IppiResizeSpec_LT* pSpec, Ipp8u* pInitBuf))


/* /////////////////////////////////////////////////////////////////////////////
//  Name:               ippiResizeAntialiasing
//
//  Purpose:            Changes an image size by different interpolation methods with antialiasing technique
//
//  Parameters:
//    pSrc              Pointer to the source image
//    srcStep           Distance (in bytes) between of consecutive lines in the source image
//    pDst              Pointer to the destination image
//    dstStep           Distance (in bytes) between of consecutive lines in the destination image
//    border            Type of the border
//    borderValue       Pointer to the constant value(s) if border type equals ippBorderConstant
//    pSpec             Pointer to the Spec structure for resize filter
//    pBuffer           Pointer to the work buffer
//
//  Return Values:
//    ippStsNoErr               Indicates no error
//    ippStsNullPtrErr          Indicates an error if one of the specified pointers is NULL
//    ippStsBorderErr           Indicates an error if border type has an illegal value
//    ippStsContextMatchErr     Indicates an error if pointer to an invalid pSpec structure is passed
//    ippStsNotSupportedModeErr Indicates an error if requested mode is currently not supported
//    ippStsStepErr             Indicates an error if the step value is not data type multiple
//
//  Notes:
//    1. Supported border types are ippBorderInMem and ippBorderRepl.
//    2. Hahn filter does not supported now.
*/
IPPAPI (IppStatus, ippiResizeAntialiasing_8u_C1R_LT, (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_8u_C3R_LT, (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_8u_C4R_LT, (const Ipp8u* pSrc, IppSizeL srcStep, Ipp8u* pDst, IppSizeL dstStep, IppiBorderType border, Ipp8u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_16u_C1R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_16u_C3R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_16u_C4R_LT, (const Ipp16u* pSrc, IppSizeL srcStep, Ipp16u* pDst, IppSizeL dstStep, IppiBorderType border, Ipp16u* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_16s_C1R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_16s_C3R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_16s_C4R_LT, (const Ipp16s* pSrc, IppSizeL srcStep, Ipp16s* pDst, IppSizeL dstStep, IppiBorderType border, Ipp16s* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_32f_C1R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_32f_C3R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))
IPPAPI (IppStatus, ippiResizeAntialiasing_32f_C4R_LT, (const Ipp32f* pSrc, IppSizeL srcStep, Ipp32f* pDst, IppSizeL dstStep, IppiBorderType border, Ipp32f* pBorderValue, const IppiResizeSpec_LT* pSpec, Ipp8u* pBuffer))

/*********************************************************************************************************************************************************************************/

#ifdef __cplusplus
}
#endif

#if defined (_IPP_STDCALL_CDECL)
  #undef  _IPP_STDCALL_CDECL
  #define __stdcall __cdecl
#endif

#endif /* __IPPI_TL_H__ */
