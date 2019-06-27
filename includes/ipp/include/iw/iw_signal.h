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

#if !defined( __IPP_IW_SIGNAL__ )
#define __IPP_IW_SIGNAL__

#include "iw/iw_core.h"

#ifdef __cplusplus
extern "C" {
#endif

/* /////////////////////////////////////////////////////////////////////////////
//                   Signal IW definitions
///////////////////////////////////////////////////////////////////////////// */

typedef struct {
    IwSize left;
    IwSize right;
} IwsBorderSize;

typedef struct {
    IwSize x;
    IwSize len;
} IwsRoi;

// Shift pointer to specific vector coordinates
// Returns:
//      Shifted pointer
static IW_INLINE void* iwsShiftPtr(
    const void *pPtr,       // Original pointer
    int         typeSize,   // Size of vector type as from iwTypeToLen()
    IwSize      pos         // vector position
)
{
    return (((Ipp8u*)pPtr) + typeSize*pos);
}

/* /////////////////////////////////////////////////////////////////////////////
//                   IwsVector - Vector structure
///////////////////////////////////////////////////////////////////////////// */

// IwsVector is a base structure for IW signal processing functions to store input and output data.
typedef struct _IwsVector
{
    void           *m_pBuffer;      // Pointer to the vector buffer. This variable must be NULL for any external buffer
    void           *m_ptr;          // Pointer to the start of actual vector data. This pointer must be NULL for read-only vector.
    const void     *m_ptrConst;     // Pointer to the start of actual read-only vector data. This pointer is valid for any vector.
    IwSize          m_size;         // Vector size, in elements
    IppDataType     m_dataType;     // Vector element type
    int             m_typeSize;     // Size of vector element in bytes
    IwsBorderSize   m_inMemSize;    // Memory border size around vector data

} IwsVector;

// Initializes vector structure with external buffer
// Returns:
//      ippStsNullPtrErr                    unexpected NULL pointer
//      ippStsNoErr                         no errors
IW_DECL(IppStatus) iwsVector_InitExternal(
    IwsVector              *pVector,        // Pointer to IwsVector structure
    IwSize                  size,           // Vector size, in elements, without border
    IppDataType             dataType,       // Vector element type
    IwsBorderSize const    *pInMemBorder,   // Size of border around vector or NULL if there is no border
    void                   *pBuffer         // Pointer to the external vector buffer
);

// Initializes vector structure with external read-only buffer
// Returns:
//      ippStsNullPtrErr                    unexpected NULL pointer
//      ippStsNoErr                         no errors
IW_DECL(IppStatus) iwsVector_InitExternalConst(
    IwsVector              *pVector,        // Pointer to IwsVector structure
    IwSize                  size,           // Vector size, in elements, without border
    IppDataType             dataType,       // Vector element type
    const IwsBorderSize    *pInMemBorder,   // Size of border around vector or NULL if there is no border
    const void             *pBuffer         // Pointer to the external vector buffer
);

// Resets vector structure values
IW_DECL(void) iwsVector_Init(
    IwsVector *pVector
);

// Allocates vector data for initialized structure. iwsVector_Init must be called once before.
// Returns:
//      ippStsDataTypeErr                   data type is illegal
//      ippStsNumChannelsErr                channels value is illegal
//      ippStsNullPtrErr                    unexpected NULL pointer
//      ippStsNoErr                         no errors
IW_DECL(IppStatus) iwsVector_Alloc(
    IwsVector              *pVector,        // Pointer to IwsVector structure
    IwSize                  size,           // Vector size, in elements, without border
    IppDataType             dataType,       // Vector element type
    const IwsBorderSize    *pInMemBorder    // Size of border around vector or NULL if there is no border
);

// Releases vector data if it was allocated by iwsVector_Alloc
IW_DECL(void) iwsVector_Release(
    IwsVector   *pVector      // Pointer to IwsVector structure
);

// Returns pointer to specified element position in vector buffer
// Returns:
//      Pointer to the vector data
IW_DECL(void*)     iwsVector_GetPtr(
    const IwsVector *pVector, // Pointer to IwsVector structure
    IwSize           x        // x shift, as columns
);

// Returns pointer to specified element position in read-only vector buffer
// Returns:
//      Pointer to the vector data
IW_DECL(const void*) iwsVector_GetPtrConst(
    const IwsVector *pVector, // Pointer to IwsVector structure
    IwSize           x        // x shift, as columns
);

// Add border size to current inMem vector border, making vector size smaller. Resulted vector cannot be smaller than 1 element
// Returns:
//      ippStsSizeErr                       ROI size is illegal
//      ippStsNullPtrErr                    unexpected NULL pointer
//      ippStsNoErr                         no errors
IW_DECL(IppStatus) iwsVector_BorderAdd(
    IwsVector      *pVector,    // Pointer to IwsVector structure
    IwsBorderSize   borderSize  // Size of border
);

// Subtracts border size from current inMem vector border, making vector size bigger. Resulted border cannot be lesser than 0
// Returns:
//      ippStsOutOfRangeErr                 ROI is out of vector
//      ippStsNullPtrErr                    unexpected NULL pointer
//      ippStsNoErr                         no errors
IW_DECL(IppStatus) iwsVector_BorderSub(
    IwsVector      *pVector,    // Pointer to IwsVector structure
    IwsBorderSize   borderSize  // Size of border
);

// Set border size to current inMem vector border, adjusting vector size. Resulted vector cannot be smaller than 1 element
// Returns:
//      ippStsSizeErr                       ROI size is illegal
//      ippStsNullPtrErr                    unexpected NULL pointer
//      ippStsNoErr                         no errors
IW_DECL(IppStatus) iwsVector_BorderSet(
    IwsVector      *pVector,    // Pointer to IwsVector structure
    IwsBorderSize   borderSize  // Size of border
);

// Applies ROI to the current vector by adjusting size and starting point of the vector. Can be applied recursively.
// This function saturates ROIs which step outside of the vector border.
// If ROI has no intersection with the vector then resulted vector size will be 0
// Returns:
//      ippStsNullPtrErr                    unexpected NULL pointer
//      ippStsNoErr                         no errors
IW_DECL(IppStatus) iwsVector_RoiSet(
    IwsVector       *pVector, // Pointer to IwsVector structure
    IwsRoi           roi      // ROI line of the required sub-vector
);

// Returns sub-vector with size and starting point of the specified ROI. Can be applied recursively.
// See iwsVector_RoiSet
// Returns:
//      IwsVector structure of sub-vector
IW_DECL(IwsVector) iwsVector_GetRoiVector(
    const IwsVector *pVector, // Pointer to IwsVector structure
    IwsRoi           roi      // ROI line of the required sub-vector
);

/* /////////////////////////////////////////////////////////////////////////////
//                   IW Tiling
///////////////////////////////////////////////////////////////////////////// */

/* /////////////////////////////////////////////////////////////////////////////
//                   IwsTile - tiling structure
///////////////////////////////////////////////////////////////////////////// */

// Main structure for semi-automatic ROI operations
// This structure provides main context for tiling across IW API
// Mainly it contains values for complex pipelines tiling
typedef struct _IwsTile
{
    IwsRoi  m_srcRoi;       // Absolute ROI for source vector
    IwsRoi  m_dstRoi;       // Absolute ROI for destination vector

    int     m_initialized;  // Internal initialization states

} IwsTile;

/* /////////////////////////////////////////////////////////////////////////////
//                   IwsTile-based basic tiling
///////////////////////////////////////////////////////////////////////////// */

// Basic tiling initializer for IwsTile structure.
// Returns:
//      Valid IwiTile structure for simple tiling
IW_DECL(IwsTile) iwsTile_SetRoi(
    IwsRoi   tileRoi     // [in] Tile offset and size
);

#ifdef __cplusplus
}
#endif

#endif
