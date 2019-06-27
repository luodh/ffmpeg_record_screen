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

#if !defined( __IPP_IWPP_SIGNAL__ )
#define __IPP_IWPP_SIGNAL__

#include "iw++/iw_core.hpp"
#include "iw/iw_signal.h"

/* /////////////////////////////////////////////////////////////////////////////
//                   Forward declarations
///////////////////////////////////////////////////////////////////////////// */

namespace ipp
{

/* /////////////////////////////////////////////////////////////////////////////
//                   Vector IW++ definitions
///////////////////////////////////////////////////////////////////////////// */

// Stores the geometric position and size of a vector. Extends C IwsRoi structure
class IwsRoi: public ::IwsRoi
{
public:
    // Default constructor. Sets values to zero
    IwsRoi()
    {
        Set(0, 0);
    }

    // One value template constructor. Sets position to zero and size to same value. Useful for simple initialization, e.g.: roi = 0
    template<typename T>
    IwsRoi(
        T len // Length of a vector
    )
    {
        Set(0, (IwSize)len);
    }

    // Constructor. Sets vector to specified values
    IwsRoi(
        IwSize _x,     // X coordinate of a vector
        IwSize _len    // Length of a vector
    )
    {
        Set(_x, _len);
    }

    // Sets rectangle to specified values
    void Set(
        IwSize _x,     // X coordinate of a vector
        IwSize _len    // Length of a vector
    )
    {
        x   = _x;
        len = _len;
    }

    // IwsRoi to IwSize cast operator
    inline operator IwSize()  const { return len; }
};

// Stores border size data
class IwsBorderSize: public ::IwsBorderSize
{
public:
    // Default constructor. Sets values to zero
    IwsBorderSize()
    {
        Set(0, 0);
    }

    // One value template constructor. Sets border to same value. Useful for simple initialization, e.g.: border = 0
    template<typename T>
    IwsBorderSize(
        T border // Position of point
    )
    {
        Set((IwSize)border, (IwSize)border);
    }

    // Constructor. Sets border to the specified values
    IwsBorderSize(
        IwSize _left,   // Size of border to the left
        IwSize _right   // Size of border to the right
    )
    {
        Set(_left, _right);
    }

    // Constructor from C IwsBorderSize structure
    IwsBorderSize(
        ::IwsBorderSize border // IwsBorderSize structure
    )
    {
        Set(border.left, border.right);
    }

    // Constructor from the vector ROI
    IwsBorderSize(
        IwSize vectorSize,   // Size of the vector
        IwsRoi vectorRoi     // Vector ROI
    )
    {
        Set(vectorSize, vectorRoi);
    }

    // Sets border to the specified values
    void Set(
        IwSize _left,   // Size of border to the left
        IwSize _right   // Size of border to the right
    )
    {
        left      = _left;
        right     = _right;
    }

    // Sets border from the vector ROI
    void Set(
        IwSize vectorSize,   // Size of the vector
        IwsRoi vectorRoi     // Vector ROI
    )
    {
        left    = vectorRoi.x;
        right   = (vectorSize  - vectorRoi.x - vectorRoi);
    }

    // Returns border size which contains maximum values of two border
    static IwsBorderSize Max(IwsBorderSize lhs, const IwsBorderSize &rhs)
    {
        lhs.left    = IPP_MAX(lhs.left, rhs.left);
        lhs.right   = IPP_MAX(lhs.right, rhs.right);
        return lhs;
    }

    // Returns border size which contains minimum values of two border
    static IwsBorderSize Min(IwsBorderSize lhs, const IwsBorderSize &rhs)
    {
        lhs.left    = IPP_MIN(lhs.left, rhs.left);
        lhs.right   = IPP_MIN(lhs.right, rhs.right);
        return lhs;
    }

    // Adds constant to the border
    inline IwsBorderSize& operator+=(const int &rhs)
    {
        this->left   += rhs;
        this->right  += rhs;
        return *this;
    }
    inline IwsBorderSize operator+(const int &rhs) const
    {
        IwsBorderSize result = *this;
        result += rhs;
        return result;
    }

    // Subtracts constant from the border
    inline IwsBorderSize& operator-=(const int &rhs)
    {
        this->left   -= rhs;
        this->right  -= rhs;
        return *this;
    }
    inline IwsBorderSize operator-(const int &rhs) const
    {
        IwsBorderSize result = *this;
        result -= rhs;
        return result;
    }

    // Multiplies the border by the constant
    inline IwsBorderSize& operator*=(const double &rhs)
    {
        this->left   = (IwSize)(this->left*rhs);
        this->right  = (IwSize)(this->right*rhs);
        return *this;
    }
    inline IwsBorderSize operator*(const double &rhs) const
    {
        IwsBorderSize result = *this;
        result *= rhs;
        return result;
    }

    // Divides the border by the constant
    inline IwsBorderSize& operator/=(const double &rhs)
    {
        this->left   = (IwSize)(this->left/rhs);
        this->right  = (IwSize)(this->right/rhs);
        return *this;
    }
    inline IwsBorderSize operator/(const double &rhs) const
    {
        IwsBorderSize result = *this;
        result /= rhs;
        return result;
    }

    // Adds border to the border
    inline IwsBorderSize& operator+=(const IwsBorderSize &rhs)
    {
        this->left   += rhs.left;
        this->right  += rhs.right;
        return *this;
    }
    inline IwsBorderSize operator+(const IwsBorderSize &rhs) const
    {
        IwsBorderSize result = *this;
        result += rhs;
        return result;
    }

    // Subtracts border from the border
    inline IwsBorderSize& operator-=(const IwsBorderSize &rhs)
    {
        this->left   -= rhs.left;
        this->right  -= rhs.right;
        return *this;
    }
    inline IwsBorderSize operator-(const IwsBorderSize &rhs) const
    {
        IwsBorderSize result = *this;
        result -= rhs;
        return result;
    }

};

/* /////////////////////////////////////////////////////////////////////////////
//                   IwsVector - Vector class
///////////////////////////////////////////////////////////////////////////// */

// IwsVector is a base class for IW signal processing functions to store input and output data.
class IwsVector: public ::IwsVector
{
public:
    // Default constructor. Sets values to zero
    IwsVector()
    {
        iwsVector_Init(this);

        m_pRefCounter = new int;
        if(!m_pRefCounter)
            OWN_ERROR_THROW_ONLY(ippStsMemAllocErr)
        (*m_pRefCounter) = 1;
    }

    // Copy constructor for C++ object. Performs lazy copy of an internal vector
    IwsVector(
        const IwsVector &vector           // Source vector
    )
    {
        iwsVector_Init(this);

        m_pRefCounter = new int;
        if(!m_pRefCounter)
            OWN_ERROR_THROW_ONLY(ippStsMemAllocErr)
        (*m_pRefCounter) = 1;

        *this = vector;
    }

    // Copy constructor for C object. Initializes vector structure with external buffer
    IwsVector(
        const ::IwsVector &vector         // Source vector
    )
    {
        iwsVector_Init(this);

        m_pRefCounter = new int;
        if(!m_pRefCounter)
            OWN_ERROR_THROW_ONLY(ippStsMemAllocErr)
        (*m_pRefCounter) = 1;

        *this = vector;
    }

    // Constructor with initialization. Initializes vector structure with external buffer
    IwsVector(
        IwSize          size,                           // Vector size, in elements
        IppDataType     dataType,                       // Vector element type
        IwsBorderSize   inMemBorder = IwsBorderSize(),  // Size of border around vector or NULL if there is no border
        void           *pBuffer     = NULL              // Pointer to the external buffer vector buffer
    )
    {
        IppStatus status;
        iwsVector_Init(this);

        m_pRefCounter = new int;
        if(!m_pRefCounter)
            OWN_ERROR_THROW_ONLY(ippStsMemAllocErr)
        (*m_pRefCounter) = 1;

        status = Init(size, dataType, inMemBorder, pBuffer);
        OWN_ERROR_CHECK_THROW_ONLY(status);
    }

    // Default destructor
    ~IwsVector()
    {
        Release();

        if(m_pRefCounter)
        {
            if(iwAtomic_AddInt(m_pRefCounter, -1) == 1)
                delete m_pRefCounter;
        }
    }

    // Copy operator for C++ object. Performs lazy copy of an internal vector
    IwsVector& operator=(const IwsVector &vector)
    {
        if(!m_pRefCounter)
            OWN_ERROR_THROW_ONLY(ippStsNullPtrErr)

        if(&vector == this)
            return *this;

        if(vector.m_ptr)
        {
            IppStatus status = Init(vector.m_size, vector.m_dataType, vector.m_inMemSize, vector.m_ptr);
            OWN_ERROR_CHECK_THROW_ONLY(status);
        }
        else
        {
            IppStatus status = Init(vector.m_size, vector.m_dataType, vector.m_inMemSize, vector.m_ptrConst);
            OWN_ERROR_CHECK_THROW_ONLY(status);
        }

        if(vector.m_pBuffer)
        {
            iwAtomic_AddInt(vector.m_pRefCounter, 1);

            if(iwAtomic_AddInt(m_pRefCounter, -1) == 1)
                delete this->m_pRefCounter;
            this->m_pRefCounter = vector.m_pRefCounter;
            this->m_pBuffer     = vector.m_pBuffer;
        }

        return *this;
    }

    // Copy operator for C object. Initializes vector structure with external buffer
    IwsVector& operator=(const ::IwsVector &vector)
    {
        if(!m_pRefCounter)
            OWN_ERROR_THROW_ONLY(ippStsNullPtrErr)

        if(vector.m_ptr)
        {
            IppStatus status = Init(vector.m_size, vector.m_dataType, vector.m_inMemSize, vector.m_ptr);
            OWN_ERROR_CHECK_THROW_ONLY(status);
        }
        else
        {
            IppStatus status = Init(vector.m_size, vector.m_dataType, vector.m_inMemSize, vector.m_ptrConst);
            OWN_ERROR_CHECK_THROW_ONLY(status);
        }
        return *this;
    }

    // Initializes vector structure with external buffer
    // Returns:
    //      ippStsNoErr                         no errors
    IppStatus Init(
        IwSize          size,                           // Vector size, in elements
        IppDataType     dataType,                       // Vector element type
        IwsBorderSize   inMemBorder = IwsBorderSize(),  // Size of border around vector or NULL if there is no border
        void           *pBuffer     = NULL              // Pointer to the external buffer vector buffer
    )
    {
        if(this->m_pBuffer && this->m_pBuffer == pBuffer)
            return ippStsNoErr;

        IppStatus status = Release();
        OWN_ERROR_CHECK(status);

        status = iwsVector_InitExternal(this, size, dataType, &inMemBorder, pBuffer);
        OWN_ERROR_CHECK(status);
        return status;
    }

    // Initializes vector structure with external read-only buffer
    // Returns:
    //      ippStsNoErr                         no errors
    IppStatus Init(
        IwSize          size,                           // Vector size, in elements
        IppDataType     dataType,                       // Vector element type
        IwsBorderSize   inMemBorder,                    // Size of border around vector or NULL if there is no border
        const void     *pBuffer                         // Pointer to the external buffer vector buffer
    )
    {
        if(this->m_pBuffer && this->m_pBuffer == pBuffer)
            return ippStsNoErr;

        IppStatus status = Release();
        OWN_ERROR_CHECK(status);

        status = iwsVector_InitExternalConst(this, size, dataType, &inMemBorder, pBuffer);
        OWN_ERROR_CHECK(status);
        return status;
    }

    // Initializes vector structure and allocates vector data
    // Throws:
    //      ippStsDataTypeErr                   data type is illegal
    //      ippStsNumChannelsErr                channels value is illegal
    // Returns:
    //      ippStsNoErr                         no errors
    IppStatus Alloc(
        IwSize          size,                           // Vector size, in elements
        IppDataType     dataType,                       // Vector element type
        IwsBorderSize   inMemBorder = IwsBorderSize()   // Size of border around vector or NULL if there is no border
    )
    {
        IppStatus status = Release();
        OWN_ERROR_CHECK(status);

        status = iwsVector_Alloc(this, size, dataType, &inMemBorder);
        OWN_ERROR_CHECK(status);
        return status;
    }

    // Releases vector data if it was allocated by IwsVector::Alloc
    // Returns:
    //      ippStsNoErr                         no errors
    IppStatus Release()
    {
        if(!m_pRefCounter)
            OWN_ERROR_THROW_ONLY(ippStsNullPtrErr)

        if(iwAtomic_AddInt(m_pRefCounter, -1) > 1)
        {
            m_pRefCounter    = new int;
            (*m_pRefCounter) = 1;

            m_pBuffer = NULL;
            m_ptr     = NULL;
        }
        else
        {
            (*m_pRefCounter) = 1;
            iwsVector_Release(this);
        }
        return ippStsNoErr;
    }

    // Returns pointer to specified element position in vector buffer
    // Returns:
    //      Pointer to the vector data
    inline void* ptr(
        IwSize x  = 0  // elements shift
    ) const
    {
        return iwsVector_GetPtr(this, x);
    }

    // Returns pointer to specified element position in read-only vector buffer
    // Returns:
    //      Pointer to the vector data
    inline const void* ptrConst(
        IwSize x  = 0  // elements shift
    ) const
    {
        return iwsVector_GetPtrConst(this, x);
    }

    // Applies ROI to the current vector by adjusting size and starting point of the vector. Can be applied recursively.
    // This function saturates ROIs which step outside of the vector border.
    // If ROI has no intersection with the vector then resulted vector size will be 0x0
    // Throws:
    //      ippStsNullPtrErr                    unexpected NULL pointer
    // Returns:
    //      ippStsNoErr                         no errors
    IppStatus RoiSet(
        ipp::IwsRoi roi // Roi rectangle of the required sub-vector
    )
    {
        IppStatus status = iwsVector_RoiSet(this, roi);
        OWN_ERROR_CHECK(status);
        return ippStsNoErr;
    }

    // Returns sub-vector with size and starting point of the specified ROI
    // Returns:
    //      IwsVector object of sub-vector
    IwsVector GetRoiVector(
        ipp::IwsRoi roi             // Roi rectangle of the required sub-vector
    ) const
    {
        return iwsVector_GetRoiVector(this, roi);
    }

    // Add border size to current inMem vector border, making vector size smaller. Resulted vector cannot be smaller than 1x1 elements
    // Throws:
    //      ippStsSizeErr                       ROI size is illegal
    //      ippStsNullPtrErr                    unexpected NULL pointer
    // Returns:
    //      ippStsNoErr                         no errors
    inline IwsVector& operator+=(const IwsBorderSize &rhs)
    {
        IppStatus status = iwsVector_BorderAdd(this, rhs);
        OWN_ERROR_CHECK_THROW_ONLY(status);
        return *this;
    }
    inline IwsVector operator+(const IwsBorderSize &rhs) const
    {
        IwsVector  result = *this;
        IppStatus status = iwsVector_BorderAdd(&result, rhs);
        OWN_ERROR_CHECK_THROW_ONLY(status);
        return result;
    }

    // Subtracts border size from current inMem vector border, making vector size bigger. Resulted border cannot be lesser than 0
    // Throws:
    //      ippStsOutOfRangeErr                 ROI is out of vector
    //      ippStsNullPtrErr                    unexpected NULL pointer
    inline IwsVector& operator-=(const IwsBorderSize &rhs)
    {
        IppStatus status = iwsVector_BorderSub(this, rhs);
        OWN_ERROR_CHECK_THROW_ONLY(status);
        return *this;
    }
    inline IwsVector operator-(const IwsBorderSize &rhs) const
    {
        IwsVector  result = *this;
        IppStatus status = iwsVector_BorderSub(&result, rhs);
        OWN_ERROR_CHECK_THROW_ONLY(status);
        return result;
    }

    // Set border size to current inMem vector border, adjusting vector size. Resulted vector cannot be smaller than 1x1 elements.
    // Throws:
    //      ippStsSizeErr                       ROI size is illegal
    //      ippStsNullPtrErr                    unexpected NULL pointer
    inline IwsVector& operator=(const IwsBorderSize &rhs)
    {
        IppStatus status = iwsVector_BorderSet(this, rhs);
        OWN_ERROR_CHECK_THROW_ONLY(status);
        return *this;
    }

    // Returns true if vector has an assigned buffer
    inline bool Exists() const
    {
        return (this->m_ptrConst)?true:false;
    }

    // Returns true if vector doesn't have an assigned buffer or its dimensions have zero size
    inline bool Empty() const
    {
        return (Exists() && this->m_size)?false:true;
    }

    // Compares vector structures and returns true if structure parameters are compatible, e.g. copy operation can be performed without reallocation
    bool Similar(const ipp::IwsVector& rhs) const
    {
        if(this->m_dataType == rhs.m_dataType)
            return true;
        else
            return false;
    }

private:
    int *m_pRefCounter;  // Shared reference counter for allocated memory
};

/* /////////////////////////////////////////////////////////////////////////////
//                   IW Tiling
///////////////////////////////////////////////////////////////////////////// */

/* /////////////////////////////////////////////////////////////////////////////
//                   IwsTile-based basic tiling
///////////////////////////////////////////////////////////////////////////// */

// This is a wrapper class for the basic IwsTile tiling API
class IwsTile: public ::IwsTile
{
public:
    // Default constructor.
    IwsTile()
    {
        this->m_initialized = 0;
    }

    // Constructor with initialization.
    IwsTile(
        const ::IwsRoi &tileRoi    // [in] Tile offset and size
    )
    {
        this->m_initialized = 0;
        SetTile(tileRoi);
    }

    // Basic tiling initializer for IwsTile structure.
    void SetTile(
        const ::IwsRoi &tileRoi    // [in] Tile offset and size
    )
    {
        *(::IwsTile*)this = ::iwsTile_SetRoi(tileRoi);
    }

    // Assignment operator from C IwsRoi structure.
    IwsTile& operator=(
        const ::IwsRoi &tileRoi    // [in] Tile offset and size
    )
    {
        SetTile(tileRoi);
        return *this;
    }
};

}

#endif
