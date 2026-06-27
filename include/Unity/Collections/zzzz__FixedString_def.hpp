#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString)
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
// Forward declare root types
namespace Unity::Collections {
class FixedString;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::FixedString);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedString
class CORDL_TYPE FixedString : public ::System::Object {
public:
// Declarations
/// @brief Method Format, addr 0x637f34c, size 0x5ac, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0) ;

/// @brief Method Format, addr 0x637f068, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x637e610, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637da14, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637ce1c, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637ece8, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x637e220, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637d608, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637c9fc, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637e97c, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x637de1c, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637d208, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637c610, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1, T3  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637f260, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0) ;

/// @brief Method Format, addr 0x637ef3c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x637e4bc, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637d8c4, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637ccb0, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637ebd0, size 0x118, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x637e0d0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637d4c4, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637c8ac, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637e850, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x637dcb0, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637d0b8, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637c4bc, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637f178, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0) ;

/// @brief Method Format, addr 0x637ee14, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x637e374, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637d758, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637cb68, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637eaa4, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x637df64, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637d374, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637c758, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637e740, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x637db68, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x637cf64, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x637c38c, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x637c234, size 0x158, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63799d4, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6377128, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637b4f8, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6378c2c, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x637638c, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637a758, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6377eb0, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375604, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637bddc, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6379558, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376ca0, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637b07c, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63787a4, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375ee0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637a2d0, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6377a04, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x637517c, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637b968, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63790c0, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376814, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637abe4, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6378330, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375a60, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6379e44, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6377584, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6374d20, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, T3  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, T3  arg2, T4  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, T3  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, T3  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637c0c0, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x637985c, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376f9c, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637b380, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6378ab0, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x63761fc, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637a5cc, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6377d20, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375478, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637bc64, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63793dc, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376b10, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637af00, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x637863c, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375d64, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637a140, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6377888, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375004, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637b7dc, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6378f30, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376688, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637aa54, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63781b4, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x63758e8, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6379cb8, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x637740c, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6374bac, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637bf50, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63796d0, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376e2c, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637b1f4, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6378920, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376070, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637a45c, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6377b94, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375308, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637bad8, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x637924c, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376984, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637ad70, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63784c0, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375bec, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6379fb4, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6377710, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6374e90, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637b66c, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6378da4, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6376518, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x637a8c8, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x637803c, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6375774, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6379b48, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6377298, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6374a54, size 0x158, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedString(FixedString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedString(FixedString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15600};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedString, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections
NEED_NO_BOX(::Unity::Collections::FixedString);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedString*, "Unity.Collections", "FixedString");
