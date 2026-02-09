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
/// @brief Method Format, addr 0x630b7c8, size 0x5ac, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0) ;

/// @brief Method Format, addr 0x630b4e4, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x630aa8c, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x6309e90, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x6309298, size 0x148, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x630b164, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x630a69c, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x6309a84, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x6308e78, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x630adf8, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x630a298, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x6309684, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x6308a8c, size 0x148, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x630b6dc, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0) ;

/// @brief Method Format, addr 0x630b3b8, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x630a938, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x6309d40, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x630912c, size 0x16c, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x630b04c, size 0x118, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x630a54c, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x6309940, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x6308d28, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x630accc, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x630a12c, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x6309534, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x6308938, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x630b5f4, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0) ;

/// @brief Method Format, addr 0x630b290, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x630a7f0, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x6309bd4, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x6308fe4, size 0x148, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x630af20, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x630a3e0, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x63097f0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x6308bd4, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x630abbc, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x6309fe4, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x63093e0, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x6308808, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x63086b0, size 0x158, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6305e50, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x63035a4, size 0x170, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x6307974, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63050a8, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6302808, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6306bd4, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x630432c, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6301a80, size 0x170, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x6308258, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63059d4, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x630311c, size 0x18c, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x63074f8, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6304c20, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x630235c, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x630674c, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6303e80, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x63015f8, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6307de4, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x630553c, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6302c90, size 0x170, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x6307060, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63047ac, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6301edc, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x63062c0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6303a00, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x630119c, size 0x170, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x630853c, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6305cd8, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6303418, size 0x18c, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x63077fc, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6304f2c, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6302678, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6306a48, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x630419c, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x63018f4, size 0x18c, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x63080e0, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6305858, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6302f8c, size 0x190, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x630737c, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6304ab8, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x63021e0, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x63065bc, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6303d04, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6301480, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6307c58, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63053ac, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6302b04, size 0x18c, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x6306ed0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6304630, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6301d64, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6306134, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6303888, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6301028, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x63083cc, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6305b4c, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x63032a8, size 0x170, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x6307670, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6304d9c, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x63024ec, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x63068d8, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6304010, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6301784, size 0x170, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x6307f54, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63056c8, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6302e00, size 0x18c, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x63071ec, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x630493c, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6302068, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6306430, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6303b8c, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x630130c, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6307ae8, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6305220, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6302994, size 0x170, virtual false, abstract: false, final false
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

/// @brief Method Format, addr 0x6306d44, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x63044b8, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6301bf0, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x6305fc4, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x6303714, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x6300ed0, size 0x158, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedString, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections
NEED_NO_BOX(::Unity::Collections::FixedString);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedString*, "Unity.Collections", "FixedString");
