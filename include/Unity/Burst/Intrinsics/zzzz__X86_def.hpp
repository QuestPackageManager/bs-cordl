#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/X86.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X86)
namespace System {
class IDisposable;
}
namespace Unity::Burst::Intrinsics {
struct Avx_X86_CMP;
}
namespace Unity::Burst::Intrinsics {
struct Fma_X86_Union;
}
namespace Unity::Burst::Intrinsics {
struct Sse4_2_X86_SIDD;
}
namespace Unity::Burst::Intrinsics {
struct Sse4_2_X86_StrBoolArray;
}
namespace Unity::Burst::Intrinsics {
struct StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer;
}
namespace Unity::Burst::Intrinsics {
class X86_Avx2;
}
namespace Unity::Burst::Intrinsics {
class X86_Avx;
}
namespace Unity::Burst::Intrinsics {
class X86_Bmi1;
}
namespace Unity::Burst::Intrinsics {
class X86_Bmi2;
}
namespace Unity::Burst::Intrinsics {
class X86_F16C;
}
namespace Unity::Burst::Intrinsics {
class X86_Fma;
}
namespace Unity::Burst::Intrinsics {
struct X86_MXCSRBits;
}
namespace Unity::Burst::Intrinsics {
class X86_Popcnt;
}
namespace Unity::Burst::Intrinsics {
struct X86_RoundingMode;
}
namespace Unity::Burst::Intrinsics {
struct X86_RoundingScope;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse2;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse3;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse4_1;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse4_2;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse;
}
namespace Unity::Burst::Intrinsics {
class X86_Ssse3;
}
namespace Unity::Burst::Intrinsics {
struct v128;
}
namespace Unity::Burst::Intrinsics {
struct v256;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
struct Avx_X86_CMP;
}
namespace Unity::Burst::Intrinsics {
struct Sse4_2_X86_SIDD;
}
namespace Unity::Burst::Intrinsics {
struct X86_MXCSRBits;
}
namespace Unity::Burst::Intrinsics {
struct X86_RoundingMode;
}
namespace Unity::Burst::Intrinsics {
class X86;
}
namespace Unity::Burst::Intrinsics {
class X86_Avx;
}
namespace Unity::Burst::Intrinsics {
class X86_Avx2;
}
namespace Unity::Burst::Intrinsics {
class X86_Bmi1;
}
namespace Unity::Burst::Intrinsics {
class X86_Bmi2;
}
namespace Unity::Burst::Intrinsics {
class X86_F16C;
}
namespace Unity::Burst::Intrinsics {
class X86_Fma;
}
namespace Unity::Burst::Intrinsics {
class X86_Popcnt;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse2;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse3;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse4_1;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse4_2;
}
namespace Unity::Burst::Intrinsics {
class X86_Ssse3;
}
namespace Unity::Burst::Intrinsics {
struct Fma_X86_Union;
}
namespace Unity::Burst::Intrinsics {
struct Sse4_2_X86_StrBoolArray;
}
namespace Unity::Burst::Intrinsics {
struct StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer;
}
namespace Unity::Burst::Intrinsics {
struct X86_RoundingScope;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::Intrinsics::Avx_X86_CMP);
MARK_VAL_T(::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD);
MARK_VAL_T(::Unity::Burst::Intrinsics::X86_MXCSRBits);
MARK_VAL_T(::Unity::Burst::Intrinsics::X86_RoundingMode);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Avx);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Avx2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Bmi1);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Bmi2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_F16C);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Fma);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Popcnt);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Sse);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Sse2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Sse3);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Sse4_1);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Sse4_2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86_Ssse3);
MARK_VAL_T(::Unity::Burst::Intrinsics::Fma_X86_Union);
MARK_VAL_T(::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray);
MARK_VAL_T(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer);
MARK_VAL_T(::Unity::Burst::Intrinsics::X86_RoundingScope);
// Dependencies 
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/Avx/CMP
struct CORDL_TYPE Avx_X86_CMP {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Avx_X86_CMP_Unwrapped
enum struct __Avx_X86_CMP_Unwrapped : int32_t {
__E_EQ_OQ = static_cast<int32_t>(0x0),
__E_LT_OS = static_cast<int32_t>(0x1),
__E_LE_OS = static_cast<int32_t>(0x2),
__E_UNORD_Q = static_cast<int32_t>(0x3),
__E_NEQ_UQ = static_cast<int32_t>(0x4),
__E_NLT_US = static_cast<int32_t>(0x5),
__E_NLE_US = static_cast<int32_t>(0x6),
__E_ORD_Q = static_cast<int32_t>(0x7),
__E_EQ_UQ = static_cast<int32_t>(0x8),
__E_NGE_US = static_cast<int32_t>(0x9),
__E_NGT_US = static_cast<int32_t>(0xa),
__E_FALSE_OQ = static_cast<int32_t>(0xb),
__E_NEQ_OQ = static_cast<int32_t>(0xc),
__E_GE_OS = static_cast<int32_t>(0xd),
__E_GT_OS = static_cast<int32_t>(0xe),
__E_TRUE_UQ = static_cast<int32_t>(0xf),
__E_EQ_OS = static_cast<int32_t>(0x10),
__E_LT_OQ = static_cast<int32_t>(0x11),
__E_LE_OQ = static_cast<int32_t>(0x12),
__E_UNORD_S = static_cast<int32_t>(0x13),
__E_NEQ_US = static_cast<int32_t>(0x14),
__E_NLT_UQ = static_cast<int32_t>(0x15),
__E_NLE_UQ = static_cast<int32_t>(0x16),
__E_ORD_S = static_cast<int32_t>(0x17),
__E_EQ_US = static_cast<int32_t>(0x18),
__E_NGE_UQ = static_cast<int32_t>(0x19),
__E_NGT_UQ = static_cast<int32_t>(0x1a),
__E_FALSE_OS = static_cast<int32_t>(0x1b),
__E_NEQ_OS = static_cast<int32_t>(0x1c),
__E_GE_OQ = static_cast<int32_t>(0x1d),
__E_GT_OQ = static_cast<int32_t>(0x1e),
__E_TRUE_US = static_cast<int32_t>(0x1f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Avx_X86_CMP_Unwrapped () const noexcept {
return static_cast<__Avx_X86_CMP_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Avx_X86_CMP() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Avx_X86_CMP(int32_t  value__) noexcept;

/// @brief Field EQ_OQ value: I32(0)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const EQ_OQ;

/// @brief Field EQ_OS value: I32(16)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const EQ_OS;

/// @brief Field EQ_UQ value: I32(8)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const EQ_UQ;

/// @brief Field EQ_US value: I32(24)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const EQ_US;

/// @brief Field FALSE_OQ value: I32(11)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const FALSE_OQ;

/// @brief Field FALSE_OS value: I32(27)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const FALSE_OS;

/// @brief Field GE_OQ value: I32(29)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const GE_OQ;

/// @brief Field GE_OS value: I32(13)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const GE_OS;

/// @brief Field GT_OQ value: I32(30)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const GT_OQ;

/// @brief Field GT_OS value: I32(14)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const GT_OS;

/// @brief Field LE_OQ value: I32(18)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const LE_OQ;

/// @brief Field LE_OS value: I32(2)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const LE_OS;

/// @brief Field LT_OQ value: I32(17)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const LT_OQ;

/// @brief Field LT_OS value: I32(1)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const LT_OS;

/// @brief Field NEQ_OQ value: I32(12)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NEQ_OQ;

/// @brief Field NEQ_OS value: I32(28)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NEQ_OS;

/// @brief Field NEQ_UQ value: I32(4)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NEQ_UQ;

/// @brief Field NEQ_US value: I32(20)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NEQ_US;

/// @brief Field NGE_UQ value: I32(25)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NGE_UQ;

/// @brief Field NGE_US value: I32(9)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NGE_US;

/// @brief Field NGT_UQ value: I32(26)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NGT_UQ;

/// @brief Field NGT_US value: I32(10)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NGT_US;

/// @brief Field NLE_UQ value: I32(22)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NLE_UQ;

/// @brief Field NLE_US value: I32(6)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NLE_US;

/// @brief Field NLT_UQ value: I32(21)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NLT_UQ;

/// @brief Field NLT_US value: I32(5)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const NLT_US;

/// @brief Field ORD_Q value: I32(7)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const ORD_Q;

/// @brief Field ORD_S value: I32(23)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const ORD_S;

/// @brief Field TRUE_UQ value: I32(15)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const TRUE_UQ;

/// @brief Field TRUE_US value: I32(31)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const TRUE_US;

/// @brief Field UNORD_Q value: I32(3)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const UNORD_Q;

/// @brief Field UNORD_S value: I32(19)
static ::Unity::Burst::Intrinsics::Avx_X86_CMP const UNORD_S;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Avx_X86_CMP, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Avx_X86_CMP, 0x4>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Avx
class CORDL_TYPE X86_Avx : public ::System::Object {
public:
// Declarations
using CMP = ::Unity::Burst::Intrinsics::Avx_X86_CMP;

/// @brief Method Select4, addr 0x62e1b18, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 Select4(::Unity::Burst::Intrinsics::v256  src1, ::Unity::Burst::Intrinsics::v256  src2, int32_t  control) ;

/// @brief Method broadcast_ss, addr 0x62e1cf8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcast_ss(void*  ptr) ;

/// @brief Method cmp_pd, addr 0x62e058c, size 0x3c8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmp_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmp_ps, addr 0x62e09b8, size 0x6a4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmp_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmp_sd, addr 0x62e14e8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmp_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmp_ss, addr 0x62e1500, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmp_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method get_IsAvxSupported, addr 0x62df96c, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsAvxSupported() ;

/// @brief Method maskload_pd, addr 0x62e1ed8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maskload_pd(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method maskload_ps, addr 0x62e1fbc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maskload_ps(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method maskstore_pd, addr 0x62e1f54, size 0x1c, virtual false, abstract: false, final false
static inline void maskstore_pd(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  mask, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method maskstore_ps, addr 0x62e205c, size 0x3c, virtual false, abstract: false, final false
static inline void maskstore_ps(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  mask, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_add_pd, addr 0x62df974, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_add_ps, addr 0x62df98c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_addsub_pd, addr 0x62dfa24, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_addsub_ps, addr 0x62dfa4c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_and_pd, addr 0x62dfaa4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_and_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_and_ps, addr 0x62dfabc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_and_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_andnot_pd, addr 0x62dfae0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_andnot_ps, addr 0x62dfaf8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_blend_pd, addr 0x62dfb1c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_blend_ps, addr 0x62dfb88, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_blendv_pd, addr 0x62dfbf4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_blendv_ps, addr 0x62dfc60, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_broadcast_pd, addr 0x62e1d34, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_pd(void*  ptr) ;

/// @brief Method mm256_broadcast_ps, addr 0x62e1d18, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ps(void*  ptr) ;

/// @brief Method mm256_broadcast_sd, addr 0x62e1d08, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_sd(void*  ptr) ;

/// @brief Method mm256_broadcast_ss, addr 0x62e1cec, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ss(void*  ptr) ;

/// @brief Method mm256_castpd128_pd256, addr 0x62e3268, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd128_pd256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_castpd256_pd128, addr 0x62e3238, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_castpd256_pd128(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castpd_ps, addr 0x62e31e4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castpd_si256, addr 0x62e3208, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_si256(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castps128_ps256, addr 0x62e3250, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castps128_ps256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_castps256_ps128, addr 0x62e322c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_castps256_ps128(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castps_pd, addr 0x62e31f0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castps_si256, addr 0x62e31fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_si256(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castsi128_si256, addr 0x62e3274, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi128_si256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_castsi256_pd, addr 0x62e3220, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castsi256_ps, addr 0x62e3214, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castsi256_si128, addr 0x62e3244, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_castsi256_si128(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_ceil_pd, addr 0x62e2494, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_pd(::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_ceil_ps, addr 0x62e25c4, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_ps(::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_cmp_pd, addr 0x62e0954, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_cmp_ps, addr 0x62e1484, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_cvtepi32_pd, addr 0x62e152c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi32_ps, addr 0x62e1550, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtpd_epi32, addr 0x62e16a8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtpd_ps, addr 0x62e1594, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtps_epi32, addr 0x62e15c8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtps_pd, addr 0x62e1614, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtss_f32, addr 0x62e1770, size 0x8, virtual false, abstract: false, final false
static inline float_t mm256_cvtss_f32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvttpd_epi32, addr 0x62e1648, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_cvttpd_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvttps_epi32, addr 0x62e16e4, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvttps_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_div_pd, addr 0x62dfccc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_div_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_div_ps, addr 0x62dfce4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_div_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_dp_ps, addr 0x62dfd7c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_dp_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_extract_epi32, addr 0x62e342c, size 0xc, virtual false, abstract: false, final false
static inline int32_t mm256_extract_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  index) ;

/// @brief Method mm256_extract_epi64, addr 0x62e3438, size 0xc, virtual false, abstract: false, final false
static inline int64_t mm256_extract_epi64(::Unity::Burst::Intrinsics::v256  a, int32_t  index) ;

/// @brief Method mm256_extractf128_pd, addr 0x62e179c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_pd(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_extractf128_ps, addr 0x62e1778, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_ps(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_extractf128_si256, addr 0x62e17c0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_si256(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_floor_pd, addr 0x62e24fc, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_pd(::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_floor_ps, addr 0x62e2620, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_ps(::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_hadd_pd, addr 0x62dfde8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hadd_ps, addr 0x62dfe14, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsub_pd, addr 0x62dfe90, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsub_ps, addr 0x62dfebc, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_insert_epi16, addr 0x62e333c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  i, int32_t  index) ;

/// @brief Method mm256_insert_epi32, addr 0x62e338c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  i, int32_t  index) ;

/// @brief Method mm256_insert_epi64, addr 0x62e33dc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi64(::Unity::Burst::Intrinsics::v256  a, int64_t  i, int32_t  index) ;

/// @brief Method mm256_insert_epi8, addr 0x62e32ec, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi8(::Unity::Burst::Intrinsics::v256  a, int32_t  i, int32_t  index) ;

/// @brief Method mm256_insertf128_pd, addr 0x62e1d70, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mm256_insertf128_ps, addr 0x62e1d44, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mm256_insertf128_si256, addr 0x62e1d9c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mm256_lddqu_si256, addr 0x62e2178, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_lddqu_si256(void*  mem_addr) ;

/// @brief Method mm256_load_pd, addr 0x62e1de0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_load_pd(void*  ptr) ;

/// @brief Method mm256_load_ps, addr 0x62e1dc8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_load_ps(void*  ptr) ;

/// @brief Method mm256_load_si256, addr 0x62e1e28, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_load_si256(void*  ptr) ;

/// @brief Method mm256_loadu2_m128, addr 0x62e1e58, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128(void*  hiaddr, void*  loaddr) ;

/// @brief Method mm256_loadu2_m128d, addr 0x62e1e74, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128d(void*  hiaddr, void*  loaddr) ;

/// @brief Method mm256_loadu2_m128i, addr 0x62e1e84, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128i(void*  hiaddr, void*  loaddr) ;

/// @brief Method mm256_loadu_pd, addr 0x62e1df8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_pd(void*  ptr) ;

/// @brief Method mm256_loadu_ps, addr 0x62e1e10, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_ps(void*  ptr) ;

/// @brief Method mm256_loadu_si256, addr 0x62e1e40, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_si256(void*  ptr) ;

/// @brief Method mm256_maskload_pd, addr 0x62e1f00, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_pd(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_maskload_ps, addr 0x62e2008, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_ps(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_maskstore_pd, addr 0x62e1f70, size 0x4c, virtual false, abstract: false, final false
static inline void mm256_maskstore_pd(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  mask, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_maskstore_ps, addr 0x62e2098, size 0x84, virtual false, abstract: false, final false
static inline void mm256_maskstore_ps(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  mask, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_max_pd, addr 0x62dff38, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_ps, addr 0x62dff98, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_pd, addr 0x62e00c4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_ps, addr 0x62e0124, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_movedup_pd, addr 0x62e2164, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_movedup_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_movehdup_ps, addr 0x62e211c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_movehdup_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_moveldup_ps, addr 0x62e2140, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_moveldup_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_movemask_pd, addr 0x62e2d6c, size 0x38, virtual false, abstract: false, final false
static inline int32_t mm256_movemask_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_movemask_ps, addr 0x62e2da4, size 0x60, virtual false, abstract: false, final false
static inline int32_t mm256_movemask_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_mul_pd, addr 0x62e0250, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mul_ps, addr 0x62e0268, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_or_pd, addr 0x62e0300, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_or_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_or_ps, addr 0x62e0318, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_or_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_permute2f128_pd, addr 0x62e1be4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_permute2f128_ps, addr 0x62e1b60, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_permute2f128_si256, addr 0x62e1c68, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_permute_pd, addr 0x62e1a18, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_pd(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_permute_ps, addr 0x62e18bc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_ps(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_permutevar_pd, addr 0x62e1980, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_permutevar_ps, addr 0x62e185c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_rcp_ps, addr 0x62e21a8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_rcp_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_round_pd, addr 0x62e241c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_round_pd(::Unity::Burst::Intrinsics::v256  a, int32_t  rounding) ;

/// @brief Method mm256_round_ps, addr 0x62e2564, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_round_ps(::Unity::Burst::Intrinsics::v256  a, int32_t  rounding) ;

/// @brief Method mm256_rsqrt_ps, addr 0x62e2224, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_rsqrt_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_set1_epi16, addr 0x62e31c0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi16(int16_t  a) ;

/// @brief Method mm256_set1_epi32, addr 0x62e31cc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi32(int32_t  a) ;

/// @brief Method mm256_set1_epi64x, addr 0x62e31d8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi64x(int64_t  a) ;

/// @brief Method mm256_set1_epi8, addr 0x62e31b4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi8(uint8_t  a) ;

/// @brief Method mm256_set1_pd, addr 0x62e319c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_pd(double_t  a) ;

/// @brief Method mm256_set1_ps, addr 0x62e31a8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_ps(float_t  a) ;

/// @brief Method mm256_set_epi16, addr 0x62e2f54, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi16(int16_t  e15_, int16_t  e14_, int16_t  e13_, int16_t  e12_, int16_t  e11_, int16_t  e10_, int16_t  e9_, int16_t  e8_, int16_t  e7_, int16_t  e6_, int16_t  e5_, int16_t  e4_, int16_t  e3_, int16_t  e2_, int16_t  e1_, int16_t  e0_) ;

/// @brief Method mm256_set_epi32, addr 0x62e2fb8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi32(int32_t  e7, int32_t  e6, int32_t  e5, int32_t  e4, int32_t  e3, int32_t  e2, int32_t  e1, int32_t  e0) ;

/// @brief Method mm256_set_epi64x, addr 0x62e2fcc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi64x(int64_t  e3, int64_t  e2, int64_t  e1, int64_t  e0) ;

/// @brief Method mm256_set_epi8, addr 0x62e2e70, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi8(uint8_t  e31_, uint8_t  e30_, uint8_t  e29_, uint8_t  e28_, uint8_t  e27_, uint8_t  e26_, uint8_t  e25_, uint8_t  e24_, uint8_t  e23_, uint8_t  e22_, uint8_t  e21_, uint8_t  e20_, uint8_t  e19_, uint8_t  e18_, uint8_t  e17_, uint8_t  e16_, uint8_t  e15_, uint8_t  e14_, uint8_t  e13_, uint8_t  e12_, uint8_t  e11_, uint8_t  e10_, uint8_t  e9_, uint8_t  e8_, uint8_t  e7_, uint8_t  e6_, uint8_t  e5_, uint8_t  e4_, uint8_t  e3_, uint8_t  e2_, uint8_t  e1_, uint8_t  e0_) ;

/// @brief Method mm256_set_m128, addr 0x62e1e68, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_set_m128d, addr 0x62e2fd8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128d(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_set_m128i, addr 0x62e2fe4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128i(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_set_pd, addr 0x62e2e50, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_pd(double_t  d, double_t  c, double_t  b, double_t  a) ;

/// @brief Method mm256_set_ps, addr 0x62e2e5c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_ps(float_t  e7, float_t  e6, float_t  e5, float_t  e4, float_t  e3, float_t  e2, float_t  e1, float_t  e0) ;

/// @brief Method mm256_setr_epi16, addr 0x62e30f4, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi16(int16_t  e15_, int16_t  e14_, int16_t  e13_, int16_t  e12_, int16_t  e11_, int16_t  e10_, int16_t  e9_, int16_t  e8_, int16_t  e7_, int16_t  e6_, int16_t  e5_, int16_t  e4_, int16_t  e3_, int16_t  e2_, int16_t  e1_, int16_t  e0_) ;

/// @brief Method mm256_setr_epi32, addr 0x62e3158, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi32(int32_t  e7, int32_t  e6, int32_t  e5, int32_t  e4, int32_t  e3, int32_t  e2, int32_t  e1, int32_t  e0) ;

/// @brief Method mm256_setr_epi64x, addr 0x62e316c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi64x(int64_t  e3, int64_t  e2, int64_t  e1, int64_t  e0) ;

/// @brief Method mm256_setr_epi8, addr 0x62e3010, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi8(uint8_t  e31_, uint8_t  e30_, uint8_t  e29_, uint8_t  e28_, uint8_t  e27_, uint8_t  e26_, uint8_t  e25_, uint8_t  e24_, uint8_t  e23_, uint8_t  e22_, uint8_t  e21_, uint8_t  e20_, uint8_t  e19_, uint8_t  e18_, uint8_t  e17_, uint8_t  e16_, uint8_t  e15_, uint8_t  e14_, uint8_t  e13_, uint8_t  e12_, uint8_t  e11_, uint8_t  e10_, uint8_t  e9_, uint8_t  e8_, uint8_t  e7_, uint8_t  e6_, uint8_t  e5_, uint8_t  e4_, uint8_t  e3_, uint8_t  e2_, uint8_t  e1_, uint8_t  e0_) ;

/// @brief Method mm256_setr_m128, addr 0x62e3178, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_setr_m128d, addr 0x62e3184, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128d(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_setr_m128i, addr 0x62e3190, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128i(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_setr_pd, addr 0x62e2ff0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_pd(double_t  d, double_t  c, double_t  b, double_t  a) ;

/// @brief Method mm256_setr_ps, addr 0x62e2ffc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_ps(float_t  e7, float_t  e6, float_t  e5, float_t  e4, float_t  e3, float_t  e2, float_t  e1, float_t  e0) ;

/// @brief Method mm256_setzero_pd, addr 0x62e2e2c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_pd() ;

/// @brief Method mm256_setzero_ps, addr 0x62e2e38, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_ps() ;

/// @brief Method mm256_setzero_si256, addr 0x62e2e44, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_si256() ;

/// @brief Method mm256_shuffle_pd, addr 0x62e033c, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_shuffle_ps, addr 0x62e03c8, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_sqrt_pd, addr 0x62e2300, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_sqrt_ps, addr 0x62e234c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_store_pd, addr 0x62e1dec, size 0xc, virtual false, abstract: false, final false
static inline void mm256_store_pd(void*  ptr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_store_ps, addr 0x62e1dd4, size 0xc, virtual false, abstract: false, final false
static inline void mm256_store_ps(void*  ptr, ::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_store_si256, addr 0x62e1e34, size 0xc, virtual false, abstract: false, final false
static inline void mm256_store_si256(void*  ptr, ::Unity::Burst::Intrinsics::v256  v) ;

/// @brief Method mm256_storeu2_m128, addr 0x62e1e94, size 0x14, virtual false, abstract: false, final false
static inline void mm256_storeu2_m128(void*  hiaddr, void*  loaddr, ::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_storeu2_m128d, addr 0x62e1eb0, size 0x14, virtual false, abstract: false, final false
static inline void mm256_storeu2_m128d(void*  hiaddr, void*  loaddr, ::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_storeu2_m128i, addr 0x62e1ec4, size 0x14, virtual false, abstract: false, final false
static inline void mm256_storeu2_m128i(void*  hiaddr, void*  loaddr, ::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_storeu_pd, addr 0x62e1e04, size 0xc, virtual false, abstract: false, final false
static inline void mm256_storeu_pd(void*  ptr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_storeu_ps, addr 0x62e1e1c, size 0xc, virtual false, abstract: false, final false
static inline void mm256_storeu_ps(void*  ptr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_storeu_si256, addr 0x62e1e4c, size 0xc, virtual false, abstract: false, final false
static inline void mm256_storeu_si256(void*  ptr, ::Unity::Burst::Intrinsics::v256  v) ;

/// @brief Method mm256_stream_pd, addr 0x62e2190, size 0xc, virtual false, abstract: false, final false
static inline void mm256_stream_pd(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_stream_ps, addr 0x62e219c, size 0xc, virtual false, abstract: false, final false
static inline void mm256_stream_ps(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_stream_si256, addr 0x62e2184, size 0xc, virtual false, abstract: false, final false
static inline void mm256_stream_si256(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_sub_pd, addr 0x62e04a0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sub_ps, addr 0x62e04b8, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testc_pd, addr 0x62e283c, size 0x30, virtual false, abstract: false, final false
static inline int32_t mm256_testc_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testc_ps, addr 0x62e2ae4, size 0x30, virtual false, abstract: false, final false
static inline int32_t mm256_testc_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testc_si256, addr 0x62e2778, size 0x38, virtual false, abstract: false, final false
static inline int32_t mm256_testc_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testnzc_pd, addr 0x62e286c, size 0xc4, virtual false, abstract: false, final false
static inline int32_t mm256_testnzc_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testnzc_ps, addr 0x62e2b14, size 0xc4, virtual false, abstract: false, final false
static inline int32_t mm256_testnzc_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testnzc_si256, addr 0x62e27b0, size 0x5c, virtual false, abstract: false, final false
static inline int32_t mm256_testnzc_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testz_pd, addr 0x62e280c, size 0x30, virtual false, abstract: false, final false
static inline int32_t mm256_testz_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testz_ps, addr 0x62e2ab4, size 0x30, virtual false, abstract: false, final false
static inline int32_t mm256_testz_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testz_si256, addr 0x62e2740, size 0x38, virtual false, abstract: false, final false
static inline int32_t mm256_testz_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_undefined_pd, addr 0x62e32b0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_pd() ;

/// @brief Method mm256_undefined_ps, addr 0x62e32a4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_ps() ;

/// @brief Method mm256_undefined_si256, addr 0x62e32bc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_si256() ;

/// @brief Method mm256_unpackhi_pd, addr 0x62e267c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_ps, addr 0x62e26b4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_pd, addr 0x62e2698, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_ps, addr 0x62e26fc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_xor_pd, addr 0x62e0550, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_xor_ps, addr 0x62e0568, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_zeroall, addr 0x62e17e4, size 0x4, virtual false, abstract: false, final false
static inline void mm256_zeroall() ;

/// @brief Method mm256_zeroupper, addr 0x62e17e8, size 0x4, virtual false, abstract: false, final false
static inline void mm256_zeroupper() ;

/// @brief Method mm256_zextpd128_pd256, addr 0x62e32d4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_zextpd128_pd256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_zextps128_ps256, addr 0x62e32c8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_zextps128_ps256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_zextsi128_si256, addr 0x62e32e0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_zextsi128_si256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method permute_pd, addr 0x62e1abc, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 permute_pd(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method permute_ps, addr 0x62e18b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 permute_ps(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method permutevar_pd, addr 0x62e191c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 permutevar_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method permutevar_ps, addr 0x62e17ec, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 permutevar_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testc_pd, addr 0x62e29a0, size 0x70, virtual false, abstract: false, final false
static inline int32_t testc_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testc_ps, addr 0x62e2c48, size 0x70, virtual false, abstract: false, final false
static inline int32_t testc_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testnzc_pd, addr 0x62e2a10, size 0xa4, virtual false, abstract: false, final false
static inline int32_t testnzc_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testnzc_ps, addr 0x62e2cb8, size 0xb4, virtual false, abstract: false, final false
static inline int32_t testnzc_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testz_pd, addr 0x62e2930, size 0x70, virtual false, abstract: false, final false
static inline int32_t testz_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testz_ps, addr 0x62e2bd8, size 0x70, virtual false, abstract: false, final false
static inline int32_t testz_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method undefined_pd, addr 0x62e328c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 undefined_pd() ;

/// @brief Method undefined_ps, addr 0x62e3280, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 undefined_ps() ;

/// @brief Method undefined_si128, addr 0x62e3298, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 undefined_si128() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Avx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Avx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Avx(X86_Avx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Avx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Avx(X86_Avx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Avx, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Avx2
class CORDL_TYPE X86_Avx2 : public ::System::Object {
public:
// Declarations
/// @brief Method EmulatedGather, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline void EmulatedGather(T*  dptr, void*  base_addr, int32_t*  indexPtr, int32_t  scale, int32_t  n, U*  mask) ;

/// @brief Method EmulatedGather, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline void EmulatedGather(T*  dptr, void*  base_addr, int64_t*  indexPtr, int32_t  scale, int32_t  n, U*  mask) ;

/// @brief Method blend_epi32, addr 0x62e57f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blend_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method broadcastb_epi8, addr 0x62e5f84, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastb_epi8(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastd_epi32, addr 0x62e5fac, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastd_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastq_epi64, addr 0x62e5fb8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastq_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastsd_pd, addr 0x62e5f70, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastsd_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastss_ps, addr 0x62e5f58, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastss_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastw_epi16, addr 0x62e5f98, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastw_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method get_IsAvx2Supported, addr 0x62e3444, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsAvx2Supported() ;

/// @brief Method i32gather_epi32, addr 0x62e72c8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi32(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i32gather_epi64, addr 0x62e7388, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi64(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i32gather_pd, addr 0x62e6dcc, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i32gather_pd(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i32gather_ps, addr 0x62e6e70, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i32gather_ps(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i64gather_epi32, addr 0x62e742c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi32(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i64gather_epi64, addr 0x62e74d0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi64(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i64gather_pd, addr 0x62e6f30, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i64gather_pd(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i64gather_ps, addr 0x62e6ff0, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i64gather_ps(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method mask_i32gather_epi32, addr 0x62e7e9c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi32(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i32gather_epi64, addr 0x62e7f54, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi64(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i32gather_pd, addr 0x62e7bc0, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_pd(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i32gather_ps, addr 0x62e7c78, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_ps(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i64gather_epi32, addr 0x62e800c, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i64gather_epi64, addr 0x62e80c0, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi64(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i64gather_pd, addr 0x62e7d30, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_pd(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i64gather_ps, addr 0x62e7de8, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_ps(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method maskload_epi32, addr 0x62e64dc, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maskload_epi32(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method maskload_epi64, addr 0x62e6544, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maskload_epi64(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method maskstore_epi32, addr 0x62e65b4, size 0x64, virtual false, abstract: false, final false
static inline void maskstore_epi32(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  mask, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method maskstore_epi64, addr 0x62e6618, size 0x6c, virtual false, abstract: false, final false
static inline void maskstore_epi64(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  mask, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_abs_epi16, addr 0x62e3cc4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi16(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_abs_epi32, addr 0x62e3d10, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_abs_epi8, addr 0x62e3c78, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi8(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_add_epi16, addr 0x62e3dbc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_add_epi32, addr 0x62e3e1c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_add_epi64, addr 0x62e3e88, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_add_epi8, addr 0x62e3d5c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_adds_epi16, addr 0x62e3f00, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_adds_epi8, addr 0x62e3ea0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_adds_epu16, addr 0x62e3fc0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_adds_epu8, addr 0x62e3f60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_alignr_epi8, addr 0x62e5868, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_alignr_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_and_si256, addr 0x62e3c18, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_and_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_andnot_si256, addr 0x62e3c30, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_avg_epu16, addr 0x62e43a8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_avg_epu8, addr 0x62e4348, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_blend_epi16, addr 0x62e5940, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_blend_epi32, addr 0x62e57fc, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_blendv_epi8, addr 0x62e58d4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_broadcastb_epi8, addr 0x62e5fc0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastb_epi8(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastd_epi32, addr 0x62e5fd8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastd_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastq_epi64, addr 0x62e5fe4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastq_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastsd_pd, addr 0x62e5f78, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsd_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastsi128_si256, addr 0x62e5ff0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsi128_si256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastss_ps, addr 0x62e5f64, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastss_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastw_epi16, addr 0x62e5fcc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastw_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_bslli_epi128, addr 0x62e4bb4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_bslli_epi128(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_bsrli_epi128, addr 0x62e4c74, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_bsrli_epi128(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_cmpeq_epi16, addr 0x62e3510, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpeq_epi32, addr 0x62e3570, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpeq_epi64, addr 0x62e35d0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpeq_epi8, addr 0x62e34b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpgt_epi16, addr 0x62e3648, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpgt_epi32, addr 0x62e36a8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpgt_epi64, addr 0x62e3708, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpgt_epi8, addr 0x62e35e8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cvtepi16_epi32, addr 0x62e6134, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi16_epi64, addr 0x62e619c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi32_epi64, addr 0x62e6204, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi8_epi16, addr 0x62e5ffc, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi8_epi32, addr 0x62e6064, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi8_epi64, addr 0x62e60cc, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu16_epi32, addr 0x62e63a4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu16_epi64, addr 0x62e640c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu32_epi64, addr 0x62e6474, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu32_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu8_epi16, addr 0x62e626c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu8_epi32, addr 0x62e62d4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu8_epi64, addr 0x62e633c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtsd_f64, addr 0x62e3498, size 0x8, virtual false, abstract: false, final false
static inline double_t mm256_cvtsd_f64(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtsi256_si32, addr 0x62e34a0, size 0x8, virtual false, abstract: false, final false
static inline int32_t mm256_cvtsi256_si32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtsi256_si64, addr 0x62e34a8, size 0x8, virtual false, abstract: false, final false
static inline int64_t mm256_cvtsi256_si64(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_extract_epi16, addr 0x62e348c, size 0xc, virtual false, abstract: false, final false
static inline int32_t mm256_extract_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  index) ;

/// @brief Method mm256_extract_epi8, addr 0x62e3480, size 0xc, virtual false, abstract: false, final false
static inline int32_t mm256_extract_epi8(::Unity::Burst::Intrinsics::v256  a, int32_t  index) ;

/// @brief Method mm256_extracti128_si256, addr 0x62e5ecc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_extracti128_si256(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_hadd_epi16, addr 0x62e4408, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hadd_epi32, addr 0x62e4468, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hadds_epi16, addr 0x62e44d4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadds_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsub_epi16, addr 0x62e4534, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsub_epi32, addr 0x62e4594, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsubs_epi16, addr 0x62e45f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsubs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_i32gather_epi32, addr 0x62e69f8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi32(void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i32gather_epi64, addr 0x62e7094, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi64(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method mm256_i32gather_pd, addr 0x62e6ac8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_pd(void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method mm256_i32gather_ps, addr 0x62e6b80, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_ps(void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i64gather_epi32, addr 0x62e714c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_epi32(void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i64gather_epi64, addr 0x62e71f8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_epi64(void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i64gather_pd, addr 0x62e6c50, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_pd(void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i64gather_ps, addr 0x62e6d20, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_ps(void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_inserti128_si256, addr 0x62e5f2c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_inserti128_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mm256_madd_epi16, addr 0x62e4650, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_madd_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_maddubs_epi16, addr 0x62e46b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maddubs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mask_i32gather_epi32, addr 0x62e78a8, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi32(::Unity::Burst::Intrinsics::v256  src, void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i32gather_epi64, addr 0x62e7970, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi64(::Unity::Burst::Intrinsics::v256  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i32gather_pd, addr 0x62e7590, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_pd(::Unity::Burst::Intrinsics::v256  src, void*  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i32gather_ps, addr 0x62e7658, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_ps(::Unity::Burst::Intrinsics::v256  src, void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i64gather_epi32, addr 0x62e7b00, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i64gather_epi64, addr 0x62e7a38, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_epi64(::Unity::Burst::Intrinsics::v256  src, void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i64gather_pd, addr 0x62e7720, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_pd(::Unity::Burst::Intrinsics::v256  src, void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i64gather_ps, addr 0x62e77e8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_ps(::Unity::Burst::Intrinsics::v128  src, void*  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mm256_maskload_epi32, addr 0x62e6684, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi32(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_maskload_epi64, addr 0x62e66ec, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi64(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_maskstore_epi32, addr 0x62e6754, size 0x24, virtual false, abstract: false, final false
static inline void mm256_maskstore_epi32(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  mask, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_maskstore_epi64, addr 0x62e6778, size 0x24, virtual false, abstract: false, final false
static inline void mm256_maskstore_epi64(void*  mem_addr, ::Unity::Burst::Intrinsics::v256  mask, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_max_epi16, addr 0x62e37f8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epi32, addr 0x62e3858, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epi8, addr 0x62e3798, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epu16, addr 0x62e3918, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epu32, addr 0x62e3978, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epu8, addr 0x62e38b8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epi16, addr 0x62e3a38, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epi32, addr 0x62e3a98, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epi8, addr 0x62e39d8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epu16, addr 0x62e3b58, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epu32, addr 0x62e3bb8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epu8, addr 0x62e3af8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_movemask_epi8, addr 0x62e344c, size 0x34, virtual false, abstract: false, final false
static inline int32_t mm256_movemask_epi8(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_mpsadbw_epu8, addr 0x62e4ae8, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mpsadbw_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_mul_epi32, addr 0x62e48cc, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mul_epu32, addr 0x62e4890, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epu32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mulhi_epi16, addr 0x62e4710, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mulhi_epu16, addr 0x62e4770, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mulhrs_epi16, addr 0x62e4a28, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhrs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mullo_epi16, addr 0x62e47d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mullo_epi32, addr 0x62e4830, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_or_si256, addr 0x62e3c48, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_or_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_packs_epi16, addr 0x62e59ac, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_packs_epi32, addr 0x62e5a0c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_packus_epi16, addr 0x62e5a6c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_packus_epi32, addr 0x62e5acc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_permute2x128_si256, addr 0x62e6968, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2x128_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_permute4x64_epi64, addr 0x62e6888, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_epi64(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_permute4x64_pd, addr 0x62e68f0, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_pd(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_permutevar8x32_epi32, addr 0x62e679c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  idx) ;

/// @brief Method mm256_permutevar8x32_ps, addr 0x62e6804, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  idx) ;

/// @brief Method mm256_sad_epu8, addr 0x62e4a88, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sad_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_shuffle_epi32, addr 0x62e5dac, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_shuffle_epi8, addr 0x62e5d4c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_shufflehi_epi16, addr 0x62e5e0c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflehi_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_shufflelo_epi16, addr 0x62e5e6c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflelo_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_sign_epi16, addr 0x62e4968, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sign_epi32, addr 0x62e49c8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sign_epi8, addr 0x62e4908, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sll_epi16, addr 0x62e4cd4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_sll_epi32, addr 0x62e4d40, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_sll_epi64, addr 0x62e4dac, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_slli_epi16, addr 0x62e4e18, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_slli_epi32, addr 0x62e4e78, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_slli_epi64, addr 0x62e4ed8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi64(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_slli_si256, addr 0x62e4b54, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_si256(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_sllv_epi32, addr 0x62e4f38, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_sllv_epi64, addr 0x62e5010, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_sra_epi16, addr 0x62e50f0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_sra_epi32, addr 0x62e515c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_srai_epi16, addr 0x62e51c8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srai_epi32, addr 0x62e5228, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srav_epi32, addr 0x62e5288, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srav_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_srl_epi16, addr 0x62e53d8, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_srl_epi32, addr 0x62e5444, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_srl_epi64, addr 0x62e54b0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_srli_epi16, addr 0x62e551c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srli_epi32, addr 0x62e557c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srli_epi64, addr 0x62e55dc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi64(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srli_si256, addr 0x62e4c1c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_si256(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srlv_epi32, addr 0x62e563c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_srlv_epi64, addr 0x62e5714, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_stream_load_si256, addr 0x62e69ec, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_stream_load_si256(void*  mem_addr) ;

/// @brief Method mm256_sub_epi16, addr 0x62e4080, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sub_epi32, addr 0x62e40e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sub_epi64, addr 0x62e4140, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sub_epi8, addr 0x62e4020, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_subs_epi16, addr 0x62e4228, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_subs_epi8, addr 0x62e41c8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_subs_epu16, addr 0x62e42e8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_subs_epu8, addr 0x62e4288, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_epi16, addr 0x62e5b8c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_epi32, addr 0x62e5bec, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_epi64, addr 0x62e5c20, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_epi8, addr 0x62e5b2c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_epi16, addr 0x62e5c9c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_epi32, addr 0x62e5cfc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_epi64, addr 0x62e5d30, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_epi8, addr 0x62e5c3c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_xor_si256, addr 0x62e3c60, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method sllv_epi32, addr 0x62e4f90, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sllv_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method sllv_epi64, addr 0x62e5068, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sllv_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srav_epi32, addr 0x62e52e0, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srav_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srlv_epi32, addr 0x62e5694, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srlv_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srlv_epi64, addr 0x62e576c, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srlv_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Avx2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Avx2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Avx2(X86_Avx2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Avx2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Avx2(X86_Avx2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17320};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Avx2, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Bmi1
class CORDL_TYPE X86_Bmi1 : public ::System::Object {
public:
// Declarations
/// @brief Method andn_u32, addr 0x62e8180, size 0x8, virtual false, abstract: false, final false
static inline uint32_t andn_u32(uint32_t  a, uint32_t  b) ;

/// @brief Method andn_u64, addr 0x62e8188, size 0x8, virtual false, abstract: false, final false
static inline uint64_t andn_u64(uint64_t  a, uint64_t  b) ;

/// @brief Method bextr2_u32, addr 0x62e81d8, size 0x30, virtual false, abstract: false, final false
static inline uint32_t bextr2_u32(uint32_t  a, uint32_t  control) ;

/// @brief Method bextr2_u64, addr 0x62e8208, size 0x30, virtual false, abstract: false, final false
static inline uint64_t bextr2_u64(uint64_t  a, uint64_t  control) ;

/// @brief Method bextr_u32, addr 0x62e8190, size 0x24, virtual false, abstract: false, final false
static inline uint32_t bextr_u32(uint32_t  a, uint32_t  start, uint32_t  len) ;

/// @brief Method bextr_u64, addr 0x62e81b4, size 0x24, virtual false, abstract: false, final false
static inline uint64_t bextr_u64(uint64_t  a, uint32_t  start, uint32_t  len) ;

/// @brief Method blsi_u32, addr 0x62e8238, size 0xc, virtual false, abstract: false, final false
static inline uint32_t blsi_u32(uint32_t  a) ;

/// @brief Method blsi_u64, addr 0x62e8244, size 0xc, virtual false, abstract: false, final false
static inline uint64_t blsi_u64(uint64_t  a) ;

/// @brief Method blsmsk_u32, addr 0x62e8250, size 0xc, virtual false, abstract: false, final false
static inline uint32_t blsmsk_u32(uint32_t  a) ;

/// @brief Method blsmsk_u64, addr 0x62e825c, size 0xc, virtual false, abstract: false, final false
static inline uint64_t blsmsk_u64(uint64_t  a) ;

/// @brief Method blsr_u32, addr 0x62e8268, size 0xc, virtual false, abstract: false, final false
static inline uint32_t blsr_u32(uint32_t  a) ;

/// @brief Method blsr_u64, addr 0x62e8274, size 0xc, virtual false, abstract: false, final false
static inline uint64_t blsr_u64(uint64_t  a) ;

/// @brief Method get_IsBmi1Supported, addr 0x62e8178, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsBmi1Supported() ;

/// @brief Method tzcnt_u32, addr 0x62e8280, size 0x58, virtual false, abstract: false, final false
static inline uint32_t tzcnt_u32(uint32_t  a) ;

/// @brief Method tzcnt_u64, addr 0x62e82d8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t tzcnt_u64(uint64_t  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Bmi1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Bmi1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Bmi1(X86_Bmi1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Bmi1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Bmi1(X86_Bmi1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Bmi1, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Bmi2
class CORDL_TYPE X86_Bmi2 : public ::System::Object {
public:
// Declarations
/// @brief Method bzhi_u32, addr 0x62e8344, size 0x18, virtual false, abstract: false, final false
static inline uint32_t bzhi_u32(uint32_t  a, uint32_t  index) ;

/// @brief Method bzhi_u64, addr 0x62e835c, size 0x18, virtual false, abstract: false, final false
static inline uint64_t bzhi_u64(uint64_t  a, uint64_t  index) ;

/// @brief Method get_IsBmi2Supported, addr 0x62e833c, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsBmi2Supported() ;

/// @brief Method mulx_u32, addr 0x62e8374, size 0x10, virtual false, abstract: false, final false
static inline uint32_t mulx_u32(uint32_t  a, uint32_t  b, ::ByRef<uint32_t>  hi) ;

/// @brief Method mulx_u64, addr 0x62e8384, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t mulx_u64(uint64_t  a, uint64_t  b, ::ByRef<uint64_t>  hi) ;

/// @brief Method pdep_u32, addr 0x62e83c0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t pdep_u32(uint32_t  a, uint32_t  mask) ;

/// @brief Method pdep_u64, addr 0x62e8400, size 0x40, virtual false, abstract: false, final false
static inline uint64_t pdep_u64(uint64_t  a, uint64_t  mask) ;

/// @brief Method pext_u32, addr 0x62e8440, size 0x40, virtual false, abstract: false, final false
static inline uint32_t pext_u32(uint32_t  a, uint32_t  mask) ;

/// @brief Method pext_u64, addr 0x62e8480, size 0x40, virtual false, abstract: false, final false
static inline uint64_t pext_u64(uint64_t  a, uint64_t  mask) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Bmi2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Bmi2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Bmi2(X86_Bmi2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Bmi2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Bmi2(X86_Bmi2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Bmi2, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies 
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/MXCSRBits
struct CORDL_TYPE X86_MXCSRBits {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __X86_MXCSRBits_Unwrapped
enum struct __X86_MXCSRBits_Unwrapped : int32_t {
__E_FlushToZero = static_cast<int32_t>(0x8000),
__E_RoundingControlMask = static_cast<int32_t>(0x6000),
__E_RoundToNearest = static_cast<int32_t>(0x0),
__E_RoundDown = static_cast<int32_t>(0x2000),
__E_RoundUp = static_cast<int32_t>(0x4000),
__E_RoundTowardZero = static_cast<int32_t>(0x6000),
__E_PrecisionMask = static_cast<int32_t>(0x1000),
__E_UnderflowMask = static_cast<int32_t>(0x800),
__E_OverflowMask = static_cast<int32_t>(0x400),
__E_DivideByZeroMask = static_cast<int32_t>(0x200),
__E_DenormalOperationMask = static_cast<int32_t>(0x100),
__E_InvalidOperationMask = static_cast<int32_t>(0x80),
__E_ExceptionMask = static_cast<int32_t>(0x1f80),
__E_DenormalsAreZeroes = static_cast<int32_t>(0x40),
__E_PrecisionFlag = static_cast<int32_t>(0x20),
__E_UnderflowFlag = static_cast<int32_t>(0x10),
__E_OverflowFlag = static_cast<int32_t>(0x8),
__E_DivideByZeroFlag = static_cast<int32_t>(0x4),
__E_DenormalFlag = static_cast<int32_t>(0x2),
__E_InvalidOperationFlag = static_cast<int32_t>(0x1),
__E_FlagMask = static_cast<int32_t>(0x3f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X86_MXCSRBits_Unwrapped () const noexcept {
return static_cast<__X86_MXCSRBits_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr X86_MXCSRBits() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X86_MXCSRBits(int32_t  value__) noexcept;

/// @brief Field DenormalFlag value: I32(2)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const DenormalFlag;

/// @brief Field DenormalOperationMask value: I32(256)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const DenormalOperationMask;

/// @brief Field DenormalsAreZeroes value: I32(64)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const DenormalsAreZeroes;

/// @brief Field DivideByZeroFlag value: I32(4)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const DivideByZeroFlag;

/// @brief Field DivideByZeroMask value: I32(512)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const DivideByZeroMask;

/// @brief Field ExceptionMask value: I32(8064)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const ExceptionMask;

/// @brief Field FlagMask value: I32(63)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const FlagMask;

/// @brief Field FlushToZero value: I32(32768)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const FlushToZero;

/// @brief Field InvalidOperationFlag value: I32(1)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const InvalidOperationFlag;

/// @brief Field InvalidOperationMask value: I32(128)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const InvalidOperationMask;

/// @brief Field OverflowFlag value: I32(8)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const OverflowFlag;

/// @brief Field OverflowMask value: I32(1024)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const OverflowMask;

/// @brief Field PrecisionFlag value: I32(32)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const PrecisionFlag;

/// @brief Field PrecisionMask value: I32(4096)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const PrecisionMask;

/// @brief Field RoundDown value: I32(8192)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const RoundDown;

/// @brief Field RoundToNearest value: I32(0)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const RoundToNearest;

/// @brief Field RoundTowardZero value: I32(24576)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const RoundTowardZero;

/// @brief Field RoundUp value: I32(16384)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const RoundUp;

/// @brief Field RoundingControlMask value: I32(24576)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const RoundingControlMask;

/// @brief Field UnderflowFlag value: I32(16)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const UnderflowFlag;

/// @brief Field UnderflowMask value: I32(2048)
static ::Unity::Burst::Intrinsics::X86_MXCSRBits const UnderflowMask;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_MXCSRBits, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_MXCSRBits, 0x4>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies 
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/RoundingMode
struct CORDL_TYPE X86_RoundingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __X86_RoundingMode_Unwrapped
enum struct __X86_RoundingMode_Unwrapped : int32_t {
__E_FROUND_TO_NEAREST_INT = static_cast<int32_t>(0x0),
__E_FROUND_TO_NEG_INF = static_cast<int32_t>(0x1),
__E_FROUND_TO_POS_INF = static_cast<int32_t>(0x2),
__E_FROUND_TO_ZERO = static_cast<int32_t>(0x3),
__E_FROUND_CUR_DIRECTION = static_cast<int32_t>(0x4),
__E_FROUND_RAISE_EXC = static_cast<int32_t>(0x0),
__E_FROUND_NO_EXC = static_cast<int32_t>(0x8),
__E_FROUND_NINT = static_cast<int32_t>(0x0),
__E_FROUND_FLOOR = static_cast<int32_t>(0x1),
__E_FROUND_CEIL = static_cast<int32_t>(0x2),
__E_FROUND_TRUNC = static_cast<int32_t>(0x3),
__E_FROUND_RINT = static_cast<int32_t>(0x4),
__E_FROUND_NEARBYINT = static_cast<int32_t>(0xc),
__E_FROUND_NINT_NOEXC = static_cast<int32_t>(0x8),
__E_FROUND_FLOOR_NOEXC = static_cast<int32_t>(0x9),
__E_FROUND_CEIL_NOEXC = static_cast<int32_t>(0xa),
__E_FROUND_TRUNC_NOEXC = static_cast<int32_t>(0xb),
__E_FROUND_RINT_NOEXC = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X86_RoundingMode_Unwrapped () const noexcept {
return static_cast<__X86_RoundingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr X86_RoundingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X86_RoundingMode(int32_t  value__) noexcept;

/// @brief Field FROUND_CEIL value: I32(2)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_CEIL;

/// @brief Field FROUND_CEIL_NOEXC value: I32(10)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_CEIL_NOEXC;

/// @brief Field FROUND_CUR_DIRECTION value: I32(4)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_CUR_DIRECTION;

/// @brief Field FROUND_FLOOR value: I32(1)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_FLOOR;

/// @brief Field FROUND_FLOOR_NOEXC value: I32(9)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_FLOOR_NOEXC;

/// @brief Field FROUND_NEARBYINT value: I32(12)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_NEARBYINT;

/// @brief Field FROUND_NINT value: I32(0)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_NINT;

/// @brief Field FROUND_NINT_NOEXC value: I32(8)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_NINT_NOEXC;

/// @brief Field FROUND_NO_EXC value: I32(8)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_NO_EXC;

/// @brief Field FROUND_RAISE_EXC value: I32(0)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_RAISE_EXC;

/// @brief Field FROUND_RINT value: I32(4)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_RINT;

/// @brief Field FROUND_RINT_NOEXC value: I32(12)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_RINT_NOEXC;

/// @brief Field FROUND_TO_NEAREST_INT value: I32(0)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_TO_NEAREST_INT;

/// @brief Field FROUND_TO_NEG_INF value: I32(1)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_TO_NEG_INF;

/// @brief Field FROUND_TO_POS_INF value: I32(2)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_TO_POS_INF;

/// @brief Field FROUND_TO_ZERO value: I32(3)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_TO_ZERO;

/// @brief Field FROUND_TRUNC value: I32(3)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_TRUNC;

/// @brief Field FROUND_TRUNC_NOEXC value: I32(11)
static ::Unity::Burst::Intrinsics::X86_RoundingMode const FROUND_TRUNC_NOEXC;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_RoundingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_RoundingMode, 0x4>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies Unity.Burst.Intrinsics.X86::MXCSRBits
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/RoundingScope
struct CORDL_TYPE X86_RoundingScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x62e84c8, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x62e84c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Burst::Intrinsics::X86_MXCSRBits  roundingMode) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr X86_RoundingScope() ;

// Ctor Parameters [CppParam { name: "OldBits", ty: "::Unity::Burst::Intrinsics::X86_MXCSRBits", modifiers: "", def_value: None }]
constexpr X86_RoundingScope(::Unity::Burst::Intrinsics::X86_MXCSRBits  OldBits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OldBits, offset: 0x0, size: 0x4, def value: None
 ::Unity::Burst::Intrinsics::X86_MXCSRBits  OldBits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_RoundingScope, OldBits) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_RoundingScope, 0x4>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/F16C
class CORDL_TYPE X86_F16C : public ::System::Object {
public:
// Declarations
/// @brief Field BaseTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BaseTable, put=setStaticF_BaseTable)) ::ArrayW<uint16_t,::Array<uint16_t>*>  BaseTable;

/// @brief Field ShiftTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ShiftTable, put=setStaticF_ShiftTable)) ::ArrayW<int8_t,::Array<int8_t>*>  ShiftTable;

/// @brief Method FloatToHalf, addr 0x62e86dc, size 0x1d8, virtual false, abstract: false, final false
static inline uint16_t FloatToHalf(uint32_t  f, int32_t  rounding) ;

/// @brief Method HalfToFloat, addr 0x62e84d4, size 0x6c, virtual false, abstract: false, final false
static inline uint32_t HalfToFloat(uint16_t  h) ;

/// @brief Method cvtph_ps, addr 0x62e8540, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtph_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtps_ph, addr 0x62e88b4, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtps_ph(::Unity::Burst::Intrinsics::v128  a, int32_t  rounding) ;

static inline ::ArrayW<uint16_t,::Array<uint16_t>*> getStaticF_BaseTable() ;

static inline ::ArrayW<int8_t,::Array<int8_t>*> getStaticF_ShiftTable() ;

/// @brief Method get_IsF16CSupported, addr 0x62e84cc, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsF16CSupported() ;

/// @brief Method mm256_cvtph_ps, addr 0x62e85e4, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtph_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtps_ph, addr 0x62e8980, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtps_ph(::Unity::Burst::Intrinsics::v256  a, int32_t  rounding) ;

static inline void setStaticF_BaseTable(::ArrayW<uint16_t,::Array<uint16_t>*>  value) ;

static inline void setStaticF_ShiftTable(::ArrayW<int8_t,::Array<int8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_F16C() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_F16C", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_F16C(X86_F16C && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_F16C", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_F16C(X86_F16C const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17326};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_F16C, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies 
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/Fma/Union
struct CORDL_TYPE Fma_X86_Union {
public:
// Declarations
/// @brief Field f, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_f, put=__cordl_internal_set_f)) float_t  f;

/// @brief Field u, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_u, put=__cordl_internal_set_u)) uint32_t  u;

constexpr float_t const& __cordl_internal_get_f() const;

constexpr float_t& __cordl_internal_get_f() ;

constexpr uint32_t const& __cordl_internal_get_u() const;

constexpr uint32_t& __cordl_internal_get_u() ;

constexpr void __cordl_internal_set_f(float_t  value) ;

constexpr void __cordl_internal_set_u(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Fma_X86_Union() ;

// Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "u", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Fma_X86_Union(float_t  f, uint32_t  u) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___f_padding[0x0];
/// @brief Field f, offset: 0x0, size: 0x4, def value: None
 float_t  ___f;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___f_padding_forAlignment[0x0];
/// @brief Field f, offset: 0x0, size: 0x4, def value: None
 float_t  ___f_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___u_padding[0x0];
/// @brief Field u, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___u;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___u_padding_forAlignment[0x0];
/// @brief Field u, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___u_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Fma_X86_Union, 0x4>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Fma
class CORDL_TYPE X86_Fma : public ::System::Object {
public:
// Declarations
using Union = ::Unity::Burst::Intrinsics::Fma_X86_Union;

/// @brief Method FmaHelper, addr 0x62e8bbc, size 0x1c, virtual false, abstract: false, final false
static inline float_t FmaHelper(float_t  a, float_t  b, float_t  c) ;

/// @brief Method FnmaHelper, addr 0x62e8bd8, size 0x1c, virtual false, abstract: false, final false
static inline float_t FnmaHelper(float_t  a, float_t  b, float_t  c) ;

/// @brief Method fmadd_pd, addr 0x62e8bf4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmadd_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmadd_ps, addr 0x62e8c8c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmadd_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmadd_sd, addr 0x62e8d78, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmadd_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmadd_ss, addr 0x62e8dc4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmadd_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmaddsub_pd, addr 0x62e8df8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmaddsub_ps, addr 0x62e8e90, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsub_pd, addr 0x62e8fb8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsub_ps, addr 0x62e9050, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsub_sd, addr 0x62e913c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsub_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsub_ss, addr 0x62e9188, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsub_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsubadd_pd, addr 0x62e91bc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsubadd_ps, addr 0x62e9254, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmadd_pd, addr 0x62e9374, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmadd_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmadd_ps, addr 0x62e940c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmadd_sd, addr 0x62e94f8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmadd_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmadd_ss, addr 0x62e9544, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmsub_pd, addr 0x62e9578, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmsub_ps, addr 0x62e9610, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmsub_sd, addr 0x62e970c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmsub_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmsub_ss, addr 0x62e9758, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method get_IsFmaSupported, addr 0x62e8bb4, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsFmaSupported() ;

/// @brief Method mm256_fmadd_pd, addr 0x62e8c40, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmadd_ps, addr 0x62e8d04, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmaddsub_pd, addr 0x62e8e44, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmaddsub_ps, addr 0x62e8f08, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmsub_pd, addr 0x62e9004, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmsub_ps, addr 0x62e90c8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmsubadd_pd, addr 0x62e9208, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmsubadd_ps, addr 0x62e92cc, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fnmadd_pd, addr 0x62e93c0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fnmadd_ps, addr 0x62e9484, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fnmsub_pd, addr 0x62e95c4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fnmsub_ps, addr 0x62e9690, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Fma() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Fma", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Fma(X86_Fma && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Fma", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Fma(X86_Fma const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Fma, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Popcnt
class CORDL_TYPE X86_Popcnt : public ::System::Object {
public:
// Declarations
/// @brief Method get_IsPopcntSupported, addr 0x62e9790, size 0x54, virtual false, abstract: false, final false
static inline bool get_IsPopcntSupported() ;

/// @brief Method popcnt_u32, addr 0x62e97e4, size 0x28, virtual false, abstract: false, final false
static inline int32_t popcnt_u32(uint32_t  v) ;

/// @brief Method popcnt_u64, addr 0x62e980c, size 0x28, virtual false, abstract: false, final false
static inline int32_t popcnt_u64(uint64_t  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Popcnt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Popcnt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Popcnt(X86_Popcnt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Popcnt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Popcnt(X86_Popcnt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Popcnt, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse
class CORDL_TYPE X86_Sse : public ::System::Object {
public:
// Declarations
/// @brief Method SHUFFLE, addr 0x62ea018, size 0x14, virtual false, abstract: false, final false
static inline int32_t SHUFFLE(int32_t  d, int32_t  c, int32_t  b, int32_t  a) ;

/// @brief Method TRANSPOSE4_PS, addr 0x62ea03c, size 0x11c, virtual false, abstract: false, final false
static inline void TRANSPOSE4_PS(::ByRef<::Unity::Burst::Intrinsics::v128>  row0, ::ByRef<::Unity::Burst::Intrinsics::v128>  row1, ::ByRef<::Unity::Burst::Intrinsics::v128>  row2, ::ByRef<::Unity::Burst::Intrinsics::v128>  row3) ;

/// @brief Method add_ps, addr 0x62df9e4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_ss, addr 0x62e9878, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method and_ps, addr 0x62dfad4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 and_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method andnot_ps, addr 0x62dfb10, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 andnot_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_ps, addr 0x62e105c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_ss, addr 0x62e9b1c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpge_ps, addr 0x62e13f4, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpge_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpge_ss, addr 0x62e9ba0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpge_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_ps, addr 0x62e143c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_ss, addr 0x62e9b7c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmple_ps, addr 0x62e10ec, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmple_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmple_ss, addr 0x62e9b5c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmple_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_ps, addr 0x62e10a4, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_ss, addr 0x62e9b3c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpneq_ps, addr 0x62e11a0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpneq_ss, addr 0x62e9bc4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnge_ps, addr 0x62e132c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnge_ss, addr 0x62e9c48, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpngt_ps, addr 0x62e1390, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpngt_ss, addr 0x62e9c24, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnle_ps, addr 0x62e1254, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnle_ss, addr 0x62e9c04, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnlt_ps, addr 0x62e11f0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnlt_ss, addr 0x62e9be4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpord_ps, addr 0x62e12b8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpord_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpord_ss, addr 0x62e9c6c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpord_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpunord_ps, addr 0x62e1134, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpunord_ss, addr 0x62e9ca0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comieq_ss, addr 0x62e9cc8, size 0x14, virtual false, abstract: false, final false
static inline int32_t comieq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comige_ss, addr 0x62e9d18, size 0x14, virtual false, abstract: false, final false
static inline int32_t comige_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comigt_ss, addr 0x62e9d04, size 0x14, virtual false, abstract: false, final false
static inline int32_t comigt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comile_ss, addr 0x62e9cf0, size 0x14, virtual false, abstract: false, final false
static inline int32_t comile_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comilt_ss, addr 0x62e9cdc, size 0x14, virtual false, abstract: false, final false
static inline int32_t comilt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comineq_ss, addr 0x62e9d2c, size 0x14, virtual false, abstract: false, final false
static inline int32_t comineq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvt_ss2si, addr 0x62e9dbc, size 0xc4, virtual false, abstract: false, final false
static inline int32_t cvt_ss2si(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsi32_ss, addr 0x62e9850, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_ss(::Unity::Burst::Intrinsics::v128  a, int32_t  b) ;

/// @brief Method cvtsi64_ss, addr 0x62e9864, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_ss(::Unity::Burst::Intrinsics::v128  a, int64_t  b) ;

/// @brief Method cvtss_f32, addr 0x62e9f44, size 0x8, virtual false, abstract: false, final false
static inline float_t cvtss_f32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtss_si32, addr 0x62e9db8, size 0x4, virtual false, abstract: false, final false
static inline int32_t cvtss_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtss_si64, addr 0x62e9e80, size 0xc4, virtual false, abstract: false, final false
static inline int64_t cvtss_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtt_ss2si, addr 0x62e9f6c, size 0x20, virtual false, abstract: false, final false
static inline int32_t cvtt_ss2si(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttss_si32, addr 0x62e9f4c, size 0x20, virtual false, abstract: false, final false
static inline int32_t cvttss_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttss_si64, addr 0x62e9f8c, size 0x20, virtual false, abstract: false, final false
static inline int64_t cvttss_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method div_ps, addr 0x62dfd3c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 div_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method div_ss, addr 0x62e98cc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 div_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method get_IsSseSupported, addr 0x62df958, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSseSupported() ;

/// @brief Method load_ps, addr 0x62e9834, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 load_ps(void*  ptr) ;

/// @brief Method loadu_ps, addr 0x62e1d28, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_ps(void*  ptr) ;

/// @brief Method loadu_si16, addr 0x62ea158, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_si16(void*  mem_addr) ;

/// @brief Method loadu_si64, addr 0x62ea16c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_si64(void*  mem_addr) ;

/// @brief Method max_ps, addr 0x62dfff0, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_ss, addr 0x62e9a8c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_ps, addr 0x62e017c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_ss, addr 0x62e99fc, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method move_ss, addr 0x62ea010, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 move_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movehl_ps, addr 0x62ea02c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 movehl_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movelh_ps, addr 0x62ea034, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 movelh_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movemask_ps, addr 0x62e2e04, size 0x28, virtual false, abstract: false, final false
static inline int32_t movemask_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mul_ps, addr 0x62e02c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mul_ss, addr 0x62e98b0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method or_ps, addr 0x62e0330, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 or_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method rcp_ps, addr 0x62e21f0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 rcp_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method rcp_ss, addr 0x62e9960, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 rcp_ss(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method rsqrt_ps, addr 0x62e2268, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method rsqrt_ss, addr 0x62e997c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ss(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method set1_ps, addr 0x62e9fb8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_ps(float_t  a) ;

/// @brief Method set_ps, addr 0x62e9fd8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_ps(float_t  e3, float_t  e2, float_t  e1, float_t  e0) ;

/// @brief Method set_ps1, addr 0x62e9fc8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_ps1(float_t  a) ;

/// @brief Method set_ss, addr 0x62e9fac, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_ss(float_t  a) ;

/// @brief Method setr_ps, addr 0x62e9ff4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_ps(float_t  e3, float_t  e2, float_t  e1, float_t  e0) ;

/// @brief Method setzero_ps, addr 0x62e325c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setzero_ps() ;

/// @brief Method shuffle_ps, addr 0x62e042c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shuffle_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method sqrt_ps, addr 0x62e2390, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sqrt_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method sqrt_ss, addr 0x62e98e8, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sqrt_ss(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method store_ps, addr 0x62e9840, size 0x8, virtual false, abstract: false, final false
static inline void store_ps(void*  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method storeu_ps, addr 0x62e1ea8, size 0x8, virtual false, abstract: false, final false
static inline void storeu_ps(void*  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method storeu_si16, addr 0x62ea164, size 0x8, virtual false, abstract: false, final false
static inline void storeu_si16(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method storeu_si64, addr 0x62ea178, size 0x8, virtual false, abstract: false, final false
static inline void storeu_si64(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method stream_ps, addr 0x62e9848, size 0x8, virtual false, abstract: false, final false
static inline void stream_ps(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method sub_ps, addr 0x62e0510, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_ss, addr 0x62e9894, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomieq_ss, addr 0x62e9d40, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomieq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomige_ss, addr 0x62e9d90, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomige_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomigt_ss, addr 0x62e9d7c, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomigt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomile_ss, addr 0x62e9d68, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomile_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomilt_ss, addr 0x62e9d54, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomilt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomineq_ss, addr 0x62e9da4, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomineq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_ps, addr 0x62e26e8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_ps, addr 0x62e2730, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method xor_ps, addr 0x62e0580, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 xor_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Sse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Sse(X86_Sse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Sse(X86_Sse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse2
class CORDL_TYPE X86_Sse2 : public ::System::Object {
public:
// Declarations
/// @brief Method SHUFFLE2, addr 0x62ea188, size 0x8, virtual false, abstract: false, final false
static inline int32_t SHUFFLE2(int32_t  x, int32_t  y) ;

/// @brief Method add_epi16, addr 0x62ea220, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_epi32, addr 0x62ea290, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_epi64, addr 0x62ea2bc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_epi8, addr 0x62ea1b0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_pd, addr 0x62ecde4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_sd, addr 0x62ecdd0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method adds_epi16, addr 0x62ea350, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 adds_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method adds_epi8, addr 0x62ea2c8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 adds_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method adds_epu16, addr 0x62ea454, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 adds_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method adds_epu8, addr 0x62ea3dc, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 adds_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method and_pd, addr 0x62ed1f0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 and_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method and_si128, addr 0x62ec0e0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 and_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method andnot_pd, addr 0x62ed1fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 andnot_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method andnot_si128, addr 0x62ec0ec, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 andnot_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method avg_epu16, addr 0x62ea544, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 avg_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method avg_epu8, addr 0x62ea4cc, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 avg_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method bslli_si128, addr 0x62eb290, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 bslli_si128(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method bsrli_si128, addr 0x62eb294, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 bsrli_si128(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method clflush, addr 0x62ede58, size 0x4, virtual false, abstract: false, final false
static inline void clflush(void*  ptr) ;

/// @brief Method cmpeq_epi16, addr 0x62ec184, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_epi32, addr 0x62ec1f8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_epi8, addr 0x62ec110, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_pd, addr 0x62ed33c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_sd, addr 0x62ed220, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpge_pd, addr 0x62ed3cc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpge_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpge_sd, addr 0x62ed274, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpge_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_epi16, addr 0x62ec2e0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_epi32, addr 0x62ec354, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_epi8, addr 0x62ec26c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_pd, addr 0x62ed3a8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_sd, addr 0x62ed25c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmple_pd, addr 0x62ed384, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmple_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmple_sd, addr 0x62ed248, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmple_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_epi16, addr 0x62ec3e4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_epi32, addr 0x62ec400, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_epi8, addr 0x62ec3c8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_pd, addr 0x62ed360, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_sd, addr 0x62ed234, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpneq_pd, addr 0x62ed464, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpneq_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpneq_sd, addr 0x62ed2d0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpneq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnge_pd, addr 0x62ed4f4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnge_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnge_sd, addr 0x62ed324, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnge_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpngt_pd, addr 0x62ed4d0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpngt_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpngt_sd, addr 0x62ed30c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpngt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnle_pd, addr 0x62ed4ac, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnle_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnle_sd, addr 0x62ed2f8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnle_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnlt_pd, addr 0x62ed488, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnlt_sd, addr 0x62ed2e4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpord_pd, addr 0x62ed3f0, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpord_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpord_sd, addr 0x62ed28c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpord_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpunord_pd, addr 0x62ed42c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpunord_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpunord_sd, addr 0x62ed2b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpunord_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comieq_sd, addr 0x62ed518, size 0x14, virtual false, abstract: false, final false
static inline int32_t comieq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comige_sd, addr 0x62ed568, size 0x14, virtual false, abstract: false, final false
static inline int32_t comige_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comigt_sd, addr 0x62ed554, size 0x14, virtual false, abstract: false, final false
static inline int32_t comigt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comile_sd, addr 0x62ed540, size 0x14, virtual false, abstract: false, final false
static inline int32_t comile_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comilt_sd, addr 0x62ed52c, size 0x14, virtual false, abstract: false, final false
static inline int32_t comilt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comineq_sd, addr 0x62ed57c, size 0x14, virtual false, abstract: false, final false
static inline int32_t comineq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvtepi32_pd, addr 0x62ec41c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi32_ps, addr 0x62ec458, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtpd_epi32, addr 0x62ed64c, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtpd_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtpd_ps, addr 0x62ed608, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtpd_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtps_epi32, addr 0x62eda60, size 0x298, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtps_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtps_pd, addr 0x62ed62c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtps_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_f64, addr 0x62ed99c, size 0x8, virtual false, abstract: false, final false
static inline double_t cvtsd_f64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_si32, addr 0x62ed7c0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t cvtsd_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_si64, addr 0x62ed8a0, size 0xe0, virtual false, abstract: false, final false
static inline int64_t cvtsd_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_si64x, addr 0x62ed980, size 0x4, virtual false, abstract: false, final false
static inline int64_t cvtsd_si64x(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_ss, addr 0x62ed984, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsd_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvtsi128_si32, addr 0x62ec4a4, size 0x4, virtual false, abstract: false, final false
static inline int32_t cvtsi128_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsi128_si64, addr 0x62ec4a8, size 0x4, virtual false, abstract: false, final false
static inline int64_t cvtsi128_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsi128_si64x, addr 0x62ec4ac, size 0x4, virtual false, abstract: false, final false
static inline int64_t cvtsi128_si64x(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsi32_sd, addr 0x62ec434, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_sd(::Unity::Burst::Intrinsics::v128  a, int32_t  b) ;

/// @brief Method cvtsi32_si128, addr 0x62ec488, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_si128(int32_t  a) ;

/// @brief Method cvtsi64_sd, addr 0x62ec440, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_sd(::Unity::Burst::Intrinsics::v128  a, int64_t  b) ;

/// @brief Method cvtsi64_si128, addr 0x62ec494, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_si128(int64_t  a) ;

/// @brief Method cvtsi64x_sd, addr 0x62ec44c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_sd(::Unity::Burst::Intrinsics::v128  a, int64_t  b) ;

/// @brief Method cvtsi64x_si128, addr 0x62ec49c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_si128(int64_t  a) ;

/// @brief Method cvtss_sd, addr 0x62ed9a4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtss_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvttpd_epi32, addr 0x62ed9c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvttpd_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttps_epi32, addr 0x62edcf8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvttps_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttsd_si32, addr 0x62eda00, size 0x20, virtual false, abstract: false, final false
static inline int32_t cvttsd_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttsd_si64, addr 0x62eda20, size 0x20, virtual false, abstract: false, final false
static inline int64_t cvttsd_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttsd_si64x, addr 0x62eda40, size 0x20, virtual false, abstract: false, final false
static inline int64_t cvttsd_si64x(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method div_pd, addr 0x62ece1c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 div_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method div_sd, addr 0x62ece08, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 div_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method extract_epi16, addr 0x62ec920, size 0x44, virtual false, abstract: false, final false
static inline uint16_t extract_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method get_IsSse2Supported, addr 0x62ea180, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse2Supported() ;

/// @brief Method insert_epi16, addr 0x62ec964, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  i, int32_t  imm8) ;

/// @brief Method load_si128, addr 0x62ede30, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 load_si128(void*  ptr) ;

/// @brief Method loadu_si128, addr 0x62ede3c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_si128(void*  ptr) ;

/// @brief Method loadu_si32, addr 0x62ede1c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_si32(void*  mem_addr) ;

/// @brief Method madd_epi16, addr 0x62ea5bc, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 madd_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epi16, addr 0x62ea640, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epu8, addr 0x62ea71c, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_pd, addr 0x62ecec8, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_sd, addr 0x62ece40, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epi16, addr 0x62ea7ec, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epu8, addr 0x62ea8c8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_pd, addr 0x62ecff4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_sd, addr 0x62ecf6c, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method move_epi64, addr 0x62ec700, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 move_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method move_sd, addr 0x62ede14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 move_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movemask_epi8, addr 0x62ec9ac, size 0x68, virtual false, abstract: false, final false
static inline int32_t movemask_epi8(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method movemask_pd, addr 0x62edda8, size 0x14, virtual false, abstract: false, final false
static inline int32_t movemask_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mul_epu32, addr 0x62eaaf0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_epu32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mul_pd, addr 0x62ed0ac, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mul_sd, addr 0x62ed098, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mulhi_epi16, addr 0x62ea998, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mulhi_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mulhi_epu16, addr 0x62eaa0c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mulhi_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mullo_epi16, addr 0x62eaa80, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mullo_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method or_pd, addr 0x62ed208, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 or_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method or_si128, addr 0x62ec0f8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 or_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method packs_epi16, addr 0x62ec708, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method packs_epi32, addr 0x62ec7c0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packs_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method packus_epi16, addr 0x62ec880, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packus_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sad_epu8, addr 0x62eaafc, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sad_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method set1_epi16, addr 0x62ec590, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_epi16(int16_t  a) ;

/// @brief Method set1_epi32, addr 0x62ec580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_epi32(int32_t  a) ;

/// @brief Method set1_epi64x, addr 0x62ec578, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_epi64x(int64_t  a) ;

/// @brief Method set1_epi8, addr 0x62ec5e4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_epi8(int8_t  a) ;

/// @brief Method set1_pd, addr 0x62edd64, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_pd(double_t  a) ;

/// @brief Method set_epi16, addr 0x62ec4d4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_epi16(int16_t  e7, int16_t  e6, int16_t  e5, int16_t  e4, int16_t  e3, int16_t  e2, int16_t  e1, int16_t  e0) ;

/// @brief Method set_epi32, addr 0x62ec4c0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_epi32(int32_t  e3, int32_t  e2, int32_t  e1, int32_t  e0) ;

/// @brief Method set_epi64x, addr 0x62ec4b0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_epi64x(int64_t  e1, int64_t  e0) ;

/// @brief Method set_epi8, addr 0x62ec504, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_epi8(int8_t  e15_, int8_t  e14_, int8_t  e13_, int8_t  e12_, int8_t  e11_, int8_t  e10_, int8_t  e9_, int8_t  e8_, int8_t  e7_, int8_t  e6_, int8_t  e5_, int8_t  e4_, int8_t  e3_, int8_t  e2_, int8_t  e1_, int8_t  e0_) ;

/// @brief Method set_pd, addr 0x62edd7c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_pd(double_t  e1, double_t  e0) ;

/// @brief Method set_pd1, addr 0x62edd70, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_pd1(double_t  a) ;

/// @brief Method set_sd, addr 0x62edd58, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_sd(double_t  a) ;

/// @brief Method setr_epi16, addr 0x62ec650, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_epi16(int16_t  e7, int16_t  e6, int16_t  e5, int16_t  e4, int16_t  e3, int16_t  e2, int16_t  e1, int16_t  e0) ;

/// @brief Method setr_epi32, addr 0x62ec638, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_epi32(int32_t  e3, int32_t  e2, int32_t  e1, int32_t  e0) ;

/// @brief Method setr_epi8, addr 0x62ec680, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_epi8(int8_t  e15_, int8_t  e14_, int8_t  e13_, int8_t  e12_, int8_t  e11_, int8_t  e10_, int8_t  e9_, int8_t  e8_, int8_t  e7_, int8_t  e6_, int8_t  e5_, int8_t  e4_, int8_t  e3_, int8_t  e2_, int8_t  e1_, int8_t  e0_) ;

/// @brief Method setr_pd, addr 0x62edd88, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_pd(double_t  e1, double_t  e0) ;

/// @brief Method setzero_si128, addr 0x62ec6f4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setzero_si128() ;

/// @brief Method shuffle_epi32, addr 0x62eca14, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method shuffle_pd, addr 0x62eddbc, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shuffle_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method shufflehi_epi16, addr 0x62eca90, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shufflehi_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method shufflelo_epi16, addr 0x62ecb24, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shufflelo_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method sll_epi16, addr 0x62eb3f8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sll_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method sll_epi32, addr 0x62eb5a0, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sll_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method sll_epi64, addr 0x62eb754, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sll_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method slli_epi16, addr 0x62eb380, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 slli_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method slli_epi32, addr 0x62eb4c8, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 slli_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method slli_epi64, addr 0x62eb674, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 slli_epi64(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method slli_si128, addr 0x62eafe0, size 0x2b0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 slli_si128(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method sqrt_pd, addr 0x62ed140, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sqrt_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method sqrt_sd, addr 0x62ed0d0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sqrt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sra_epi16, addr 0x62eb914, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sra_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method sra_epi32, addr 0x62ebad8, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sra_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srai_epi16, addr 0x62eb830, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srai_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srai_epi32, addr 0x62eb9f4, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srai_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srl_epi16, addr 0x62ebca0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srl_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srl_epi32, addr 0x62ebe64, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srl_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srl_epi64, addr 0x62ec014, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srl_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srli_epi16, addr 0x62ebbbc, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srli_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srli_epi32, addr 0x62ebd80, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srli_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srli_epi64, addr 0x62ebf44, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srli_epi64(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srli_si128, addr 0x62ebbb8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srli_si128(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method store_si128, addr 0x62ede48, size 0x8, virtual false, abstract: false, final false
static inline void store_si128(void*  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method storeu_si128, addr 0x62ede50, size 0x8, virtual false, abstract: false, final false
static inline void storeu_si128(void*  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method storeu_si32, addr 0x62ede28, size 0x8, virtual false, abstract: false, final false
static inline void storeu_si32(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method stream_pd, addr 0x62ea1a0, size 0x8, virtual false, abstract: false, final false
static inline void stream_pd(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method stream_si128, addr 0x62ea1a8, size 0x8, virtual false, abstract: false, final false
static inline void stream_si128(void*  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method stream_si32, addr 0x62ea190, size 0x8, virtual false, abstract: false, final false
static inline void stream_si32(int32_t*  mem_addr, int32_t  a) ;

/// @brief Method stream_si64, addr 0x62ea198, size 0x8, virtual false, abstract: false, final false
static inline void stream_si64(int64_t*  mem_addr, int64_t  a) ;

/// @brief Method sub_epi16, addr 0x62eacc0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_epi32, addr 0x62ead30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_epi64, addr 0x62eada0, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_epi8, addr 0x62eac50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_pd, addr 0x62ed1cc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_sd, addr 0x62ed1b8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method subs_epi16, addr 0x62eae6c, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 subs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method subs_epi8, addr 0x62eade4, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 subs_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method subs_epu16, addr 0x62eaf6c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 subs_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method subs_epu8, addr 0x62eaef8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 subs_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomieq_sd, addr 0x62ed590, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomieq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomige_sd, addr 0x62ed5e0, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomige_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomigt_sd, addr 0x62ed5cc, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomigt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomile_sd, addr 0x62ed5b8, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomile_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomilt_sd, addr 0x62ed5a4, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomilt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomineq_sd, addr 0x62ed5f4, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomineq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_epi16, addr 0x62ecc34, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_epi32, addr 0x62eccb0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_epi64, addr 0x62eccc4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_epi8, addr 0x62ecbb8, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_pd, addr 0x62edd94, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_epi16, addr 0x62ecd44, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_epi32, addr 0x62ecdb8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_epi64, addr 0x62ecdc8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_epi8, addr 0x62eccd0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_pd, addr 0x62edda0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method xor_pd, addr 0x62ed214, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 xor_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method xor_si128, addr 0x62ec104, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 xor_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Sse2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Sse2(X86_Sse2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Sse2(X86_Sse2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17331};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse2, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse3
class CORDL_TYPE X86_Sse3 : public ::System::Object {
public:
// Declarations
/// @brief Method addsub_pd, addr 0x62edea4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 addsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method addsub_ps, addr 0x62ede64, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 addsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method get_IsSse3Supported, addr 0x62ede5c, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse3Supported() ;

/// @brief Method hadd_pd, addr 0x62edec8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadd_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hadd_ps, addr 0x62edeec, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadd_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsub_pd, addr 0x62edf2c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsub_ps, addr 0x62edf50, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movedup_pd, addr 0x62edf90, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 movedup_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method movehdup_ps, addr 0x62edf98, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 movehdup_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method moveldup_ps, addr 0x62edfa4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 moveldup_ps(::Unity::Burst::Intrinsics::v128  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Sse3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Sse3(X86_Sse3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Sse3(X86_Sse3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17332};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse3, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_1
class CORDL_TYPE X86_Sse4_1 : public ::System::Object {
public:
// Declarations
/// @brief Method MK_INSERTPS_NDX, addr 0x62ef884, size 0x10, virtual false, abstract: false, final false
static inline int32_t MK_INSERTPS_NDX(int32_t  srcField, int32_t  dstField, int32_t  zeroMask) ;

/// @brief Method RoundDImpl, addr 0x62ef300, size 0x148, virtual false, abstract: false, final false
static inline double_t RoundDImpl(double_t  d, int32_t  roundingMode) ;

/// @brief Method blend_epi16, addr 0x62ee238, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blend_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method blend_pd, addr 0x62edfc4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blend_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method blend_ps, addr 0x62ee040, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blend_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method blendv_epi8, addr 0x62ee1bc, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blendv_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method blendv_pd, addr 0x62ee0bc, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blendv_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method blendv_ps, addr 0x62ee140, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blendv_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method ceil_pd, addr 0x62ef4c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 ceil_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method ceil_ps, addr 0x62ef5bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 ceil_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method ceil_sd, addr 0x62ef60c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 ceil_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ceil_ss, addr 0x62ef6a8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 ceil_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_epi64, addr 0x62eedd4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvtepi16_epi32, addr 0x62eeee8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi16_epi64, addr 0x62eef48, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi32_epi64, addr 0x62eef88, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi8_epi16, addr 0x62eede8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi8_epi32, addr 0x62eee48, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi8_epi64, addr 0x62eeea8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu16_epi32, addr 0x62ef0c8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu16_epi64, addr 0x62ef128, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu32_epi64, addr 0x62ef168, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu32_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu8_epi16, addr 0x62eefc8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu8_epi32, addr 0x62ef028, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu8_epi64, addr 0x62ef088, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method dp_pd, addr 0x62ee2b4, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 dp_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method dp_ps, addr 0x62ee2fc, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 dp_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method extract_epi32, addr 0x62ee468, size 0x44, virtual false, abstract: false, final false
static inline int32_t extract_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method extract_epi64, addr 0x62ee4ac, size 0x44, virtual false, abstract: false, final false
static inline int64_t extract_epi64(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method extract_epi8, addr 0x62ee424, size 0x44, virtual false, abstract: false, final false
static inline uint8_t extract_epi8(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method extract_ps, addr 0x62ee39c, size 0x44, virtual false, abstract: false, final false
static inline int32_t extract_ps(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method extractf_ps, addr 0x62ee3e0, size 0x44, virtual false, abstract: false, final false
static inline float_t extractf_ps(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method floor_pd, addr 0x62ef48c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 floor_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method floor_ps, addr 0x62ef5b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 floor_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method floor_sd, addr 0x62ef5e8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 floor_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method floor_ss, addr 0x62ef66c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 floor_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method get_IsSse41Supported, addr 0x62edfb0, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse41Supported() ;

/// @brief Method insert_epi32, addr 0x62ee5b8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  i, int32_t  imm8) ;

/// @brief Method insert_epi64, addr 0x62ee600, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_epi64(::Unity::Burst::Intrinsics::v128  a, int64_t  i, int32_t  imm8) ;

/// @brief Method insert_epi8, addr 0x62ee570, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_epi8(::Unity::Burst::Intrinsics::v128  a, uint8_t  i, int32_t  imm8) ;

/// @brief Method insert_ps, addr 0x62ee4f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method max_epi32, addr 0x62ee720, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epi8, addr 0x62ee648, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epu16, addr 0x62ee8c8, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epu32, addr 0x62ee7f4, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epu32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epi32, addr 0x62eea74, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epi8, addr 0x62ee99c, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epu16, addr 0x62eec1c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epu32, addr 0x62eeb48, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epu32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method minpos_epu16, addr 0x62ef6e4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 minpos_epu16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mpsadbw_epu8, addr 0x62ef754, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mpsadbw_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mul_epi32, addr 0x62ef1a8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mullo_epi32, addr 0x62ef1b4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mullo_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method packus_epi32, addr 0x62eecf0, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packus_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method round_pd, addr 0x62ef448, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 round_pd(::Unity::Burst::Intrinsics::v128  a, int32_t  rounding) ;

/// @brief Method round_ps, addr 0x62ef4fc, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 round_ps(::Unity::Burst::Intrinsics::v128  a, int32_t  rounding) ;

/// @brief Method round_sd, addr 0x62ef5c4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 round_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  rounding) ;

/// @brief Method round_ss, addr 0x62ef630, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 round_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  rounding) ;

/// @brief Method stream_load_si128, addr 0x62edfb8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 stream_load_si128(void*  mem_addr) ;

/// @brief Method test_all_ones, addr 0x62ef2c4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t test_all_ones(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method test_all_zeros, addr 0x62ef280, size 0x18, virtual false, abstract: false, final false
static inline int32_t test_all_zeros(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method test_mix_ones_zeroes, addr 0x62ef298, size 0x2c, virtual false, abstract: false, final false
static inline int32_t test_mix_ones_zeroes(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method testc_si128, addr 0x62ef23c, size 0x18, virtual false, abstract: false, final false
static inline int32_t testc_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testnzc_si128, addr 0x62ef254, size 0x2c, virtual false, abstract: false, final false
static inline int32_t testnzc_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testz_si128, addr 0x62ef224, size 0x18, virtual false, abstract: false, final false
static inline int32_t testz_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Sse4_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Sse4_1(X86_Sse4_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Sse4_1(X86_Sse4_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse4_1, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies 
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_2/SIDD
struct CORDL_TYPE Sse4_2_X86_SIDD {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Sse4_2_X86_SIDD_Unwrapped
enum struct __Sse4_2_X86_SIDD_Unwrapped : int32_t {
__E_UBYTE_OPS = static_cast<int32_t>(0x0),
__E_UWORD_OPS = static_cast<int32_t>(0x1),
__E_SBYTE_OPS = static_cast<int32_t>(0x2),
__E_SWORD_OPS = static_cast<int32_t>(0x3),
__E_CMP_EQUAL_ANY = static_cast<int32_t>(0x0),
__E_CMP_RANGES = static_cast<int32_t>(0x4),
__E_CMP_EQUAL_EACH = static_cast<int32_t>(0x8),
__E_CMP_EQUAL_ORDERED = static_cast<int32_t>(0xc),
__E_POSITIVE_POLARITY = static_cast<int32_t>(0x0),
__E_NEGATIVE_POLARITY = static_cast<int32_t>(0x10),
__E_MASKED_POSITIVE_POLARITY = static_cast<int32_t>(0x20),
__E_MASKED_NEGATIVE_POLARITY = static_cast<int32_t>(0x30),
__E_LEAST_SIGNIFICANT = static_cast<int32_t>(0x0),
__E_MOST_SIGNIFICANT = static_cast<int32_t>(0x40),
__E_BIT_MASK = static_cast<int32_t>(0x0),
__E_UNIT_MASK = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Sse4_2_X86_SIDD_Unwrapped () const noexcept {
return static_cast<__Sse4_2_X86_SIDD_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Sse4_2_X86_SIDD() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Sse4_2_X86_SIDD(int32_t  value__) noexcept;

/// @brief Field BIT_MASK value: I32(0)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const BIT_MASK;

/// @brief Field CMP_EQUAL_ANY value: I32(0)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const CMP_EQUAL_ANY;

/// @brief Field CMP_EQUAL_EACH value: I32(8)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const CMP_EQUAL_EACH;

/// @brief Field CMP_EQUAL_ORDERED value: I32(12)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const CMP_EQUAL_ORDERED;

/// @brief Field CMP_RANGES value: I32(4)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const CMP_RANGES;

/// @brief Field LEAST_SIGNIFICANT value: I32(0)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const LEAST_SIGNIFICANT;

/// @brief Field MASKED_NEGATIVE_POLARITY value: I32(48)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const MASKED_NEGATIVE_POLARITY;

/// @brief Field MASKED_POSITIVE_POLARITY value: I32(32)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const MASKED_POSITIVE_POLARITY;

/// @brief Field MOST_SIGNIFICANT value: I32(64)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const MOST_SIGNIFICANT;

/// @brief Field NEGATIVE_POLARITY value: I32(16)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const NEGATIVE_POLARITY;

/// @brief Field POSITIVE_POLARITY value: I32(0)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const POSITIVE_POLARITY;

/// @brief Field SBYTE_OPS value: I32(2)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const SBYTE_OPS;

/// @brief Field SWORD_OPS value: I32(3)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const SWORD_OPS;

/// @brief Field UBYTE_OPS value: I32(0)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const UBYTE_OPS;

/// @brief Field UNIT_MASK value: I32(64)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const UNIT_MASK;

/// @brief Field UWORD_OPS value: I32(1)
static ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD const UWORD_OPS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17334};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD, 0x4>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies 
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer(uint16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 uint16_t  FixedElementField;

/// @brief Size padding 0x20 - 0x2 = 0x1e, packed as 0x1e
 uint8_t  _cordl_size_padding[0x1e];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer, 0x20>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies Unity.Burst.Intrinsics.X86::Sse4_2::StrBoolArray::<Bits>e__FixedBuffer
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct CORDL_TYPE Sse4_2_X86_StrBoolArray {
public:
// Declarations
using _Bits_e__FixedBuffer = ::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer;

/// @brief Method GetBit, addr 0x62f0d44, size 0x10, virtual false, abstract: false, final false
inline bool GetBit(int32_t  aindex, int32_t  bindex) ;

/// @brief Method SetBit, addr 0x62f0d20, size 0x24, virtual false, abstract: false, final false
inline void SetBit(int32_t  aindex, int32_t  bindex, bool  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr Sse4_2_X86_StrBoolArray() ;

// Ctor Parameters [CppParam { name: "Bits", ty: "::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr Sse4_2_X86_StrBoolArray(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer  Bits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17336};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Bits, offset: 0x0, size: 0x20, def value: None
 ::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer  Bits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray, Bits) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray, 0x20>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_2
class CORDL_TYPE X86_Sse4_2 : public ::System::Object {
public:
// Declarations
using SIDD = ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD;

using StrBoolArray = ::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray;

/// @brief Field crctab, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crctab, put=setStaticF_crctab)) ::ArrayW<uint32_t,::Array<uint32_t>*>  crctab;

/// @brief Method ComputeStrCmpIntRes2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t ComputeStrCmpIntRes2(T*  a, int32_t  alen, T*  b, int32_t  blen, int32_t  len, int32_t  imm8, int32_t  allOnes) ;

/// @brief Method ComputeStriOutput, addr 0x62ef89c, size 0x48, virtual false, abstract: false, final false
static inline int32_t ComputeStriOutput(int32_t  len, int32_t  imm8, int32_t  intRes2) ;

/// @brief Method ComputeStringLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t ComputeStringLength(T*  ptr, int32_t  max) ;

/// @brief Method ComputeStrmOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Burst::Intrinsics::v128 ComputeStrmOutput(int32_t  len, int32_t  imm8, T  allOnesT, int32_t  intRes2) ;

/// @brief Method cmpestra, addr 0x62f0920, size 0xc0, virtual false, abstract: false, final false
static inline int32_t cmpestra(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestrc, addr 0x62f0580, size 0x1c4, virtual false, abstract: false, final false
static inline int32_t cmpestrc(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestri, addr 0x62efdf8, size 0x1dc, virtual false, abstract: false, final false
static inline int32_t cmpestri(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t cmpestri_emulation(T*  a, int32_t  alen, T*  b, int32_t  blen, int32_t  len, int32_t  imm8, int32_t  allOnes, T  allOnesT) ;

/// @brief Method cmpestrm, addr 0x62efc1c, size 0x1dc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpestrm(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Burst::Intrinsics::v128 cmpestrm_emulation(T*  a, int32_t  alen, T*  b, int32_t  blen, int32_t  len, int32_t  imm8, int32_t  allOnes, T  allOnesT) ;

/// @brief Method cmpestro, addr 0x62f0760, size 0x1c0, virtual false, abstract: false, final false
static inline int32_t cmpestro(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestrs, addr 0x62f0744, size 0x1c, virtual false, abstract: false, final false
static inline int32_t cmpestrs(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestrz, addr 0x62f0564, size 0x1c, virtual false, abstract: false, final false
static inline int32_t cmpestrz(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpgt_epi64, addr 0x62f09e0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi64(::Unity::Burst::Intrinsics::v128  val1, ::Unity::Burst::Intrinsics::v128  val2) ;

/// @brief Method cmpistra, addr 0x62f04bc, size 0xa8, virtual false, abstract: false, final false
static inline int32_t cmpistra(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistrc, addr 0x62f00c8, size 0xa0, virtual false, abstract: false, final false
static inline int32_t cmpistrc(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistri, addr 0x62efa80, size 0x19c, virtual false, abstract: false, final false
static inline int32_t cmpistri(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t cmpistri_emulation(T*  a, T*  b, int32_t  len, int32_t  imm8, int32_t  allOnes, T  allOnesT) ;

/// @brief Method cmpistrm, addr 0x62ef8e4, size 0x19c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpistrm(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Burst::Intrinsics::v128 cmpistrm_emulation(T*  a, T*  b, int32_t  len, int32_t  imm8, int32_t  allOnes, T  allOnesT) ;

/// @brief Method cmpistro, addr 0x62f025c, size 0x260, virtual false, abstract: false, final false
static inline int32_t cmpistro(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistrs, addr 0x62f0168, size 0xf4, virtual false, abstract: false, final false
static inline int32_t cmpistrs(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistrz, addr 0x62effd4, size 0xf4, virtual false, abstract: false, final false
static inline int32_t cmpistrz(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method crc32_u16, addr 0x62f0b08, size 0x70, virtual false, abstract: false, final false
static inline uint32_t crc32_u16(uint32_t  crc, uint16_t  v) ;

/// @brief Method crc32_u32, addr 0x62f09f4, size 0x80, virtual false, abstract: false, final false
static inline uint32_t crc32_u32(uint32_t  crc, uint32_t  v) ;

/// @brief Method crc32_u64, addr 0x62f0b78, size 0x68, virtual false, abstract: false, final false
static inline uint64_t crc32_u64(uint64_t  crc_ul, int64_t  v) ;

/// @brief Method crc32_u64, addr 0x62f0be0, size 0xa8, virtual false, abstract: false, final false
static inline uint64_t crc32_u64(uint64_t  crc_ul, uint64_t  v) ;

/// @brief Method crc32_u8, addr 0x62f0a74, size 0x94, virtual false, abstract: false, final false
static inline uint32_t crc32_u8(uint32_t  crc, uint8_t  v) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_crctab() ;

/// @brief Method get_IsSse42Supported, addr 0x62ef894, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse42Supported() ;

static inline void setStaticF_crctab(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Sse4_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Sse4_2(X86_Sse4_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Sse4_2(X86_Sse4_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17337};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse4_2, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Ssse3
class CORDL_TYPE X86_Ssse3 : public ::System::Object {
public:
// Declarations
/// @brief Method abs_epi16, addr 0x62f0e1c, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 abs_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method abs_epi32, addr 0x62f0ee0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 abs_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method abs_epi8, addr 0x62f0d5c, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 abs_epi8(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method alignr_epi8, addr 0x62f1020, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 alignr_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  count) ;

/// @brief Method get_IsSsse3Supported, addr 0x62f0d54, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSsse3Supported() ;

/// @brief Method hadd_epi16, addr 0x62f10c0, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadd_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hadd_epi32, addr 0x62f1204, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadd_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hadds_epi16, addr 0x62f114c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadds_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsub_epi16, addr 0x62f1230, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsub_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsub_epi32, addr 0x62f1374, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsub_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsubs_epi16, addr 0x62f12bc, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsubs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method maddubs_epi16, addr 0x62f13a0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maddubs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mulhrs_epi16, addr 0x62f1440, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mulhrs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method shuffle_epi8, addr 0x62f0fa0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sign_epi16, addr 0x62f153c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sign_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sign_epi32, addr 0x62f15bc, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sign_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sign_epi8, addr 0x62f14bc, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sign_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Ssse3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Ssse3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Ssse3(X86_Ssse3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Ssse3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Ssse3(X86_Ssse3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Ssse3, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86
class CORDL_TYPE X86 : public ::System::Object {
public:
// Declarations
using Avx = ::Unity::Burst::Intrinsics::X86_Avx;

using Avx2 = ::Unity::Burst::Intrinsics::X86_Avx2;

using Bmi1 = ::Unity::Burst::Intrinsics::X86_Bmi1;

using Bmi2 = ::Unity::Burst::Intrinsics::X86_Bmi2;

using F16C = ::Unity::Burst::Intrinsics::X86_F16C;

using Fma = ::Unity::Burst::Intrinsics::X86_Fma;

using MXCSRBits = ::Unity::Burst::Intrinsics::X86_MXCSRBits;

using Popcnt = ::Unity::Burst::Intrinsics::X86_Popcnt;

using RoundingMode = ::Unity::Burst::Intrinsics::X86_RoundingMode;

using RoundingScope = ::Unity::Burst::Intrinsics::X86_RoundingScope;

using Sse = ::Unity::Burst::Intrinsics::X86_Sse;

using Sse2 = ::Unity::Burst::Intrinsics::X86_Sse2;

using Sse3 = ::Unity::Burst::Intrinsics::X86_Sse3;

using Sse4_1 = ::Unity::Burst::Intrinsics::X86_Sse4_1;

using Sse4_2 = ::Unity::Burst::Intrinsics::X86_Sse4_2;

using Ssse3 = ::Unity::Burst::Intrinsics::X86_Ssse3;

/// @brief Method BurstIntrinsicGetCSRFromManaged, addr 0x62df938, size 0x8, virtual false, abstract: false, final false
static inline int32_t BurstIntrinsicGetCSRFromManaged() ;

/// @brief Method BurstIntrinsicSetCSRFromManaged, addr 0x62df934, size 0x4, virtual false, abstract: false, final false
static inline void BurstIntrinsicSetCSRFromManaged(int32_t  _) ;

/// @brief Method DoGetCSRTrampoline, addr 0x62df948, size 0x8, virtual false, abstract: false, final false
static inline int32_t DoGetCSRTrampoline() ;

/// @brief Method DoSetCSRTrampoline, addr 0x62df954, size 0x4, virtual false, abstract: false, final false
static inline void DoSetCSRTrampoline(int32_t  bits) ;

/// @brief Method GenericCSharpLoad, addr 0x62df89c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 GenericCSharpLoad(void*  ptr) ;

/// @brief Method GenericCSharpStore, addr 0x62df8a8, size 0x8, virtual false, abstract: false, final false
static inline void GenericCSharpStore(void*  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method IsNaN, addr 0x62df90c, size 0x14, virtual false, abstract: false, final false
static inline bool IsNaN(uint32_t  v) ;

/// @brief Method IsNaN, addr 0x62df920, size 0x14, virtual false, abstract: false, final false
static inline bool IsNaN(uint64_t  v) ;

/// @brief Method Saturate_To_Int16, addr 0x62df8dc, size 0x20, virtual false, abstract: false, final false
static inline int16_t Saturate_To_Int16(int32_t  val) ;

/// @brief Method Saturate_To_Int8, addr 0x62df8b0, size 0x1c, virtual false, abstract: false, final false
static inline int8_t Saturate_To_Int8(int32_t  val) ;

/// @brief Method Saturate_To_UnsignedInt16, addr 0x62df8fc, size 0x10, virtual false, abstract: false, final false
static inline uint16_t Saturate_To_UnsignedInt16(int32_t  val) ;

/// @brief Method Saturate_To_UnsignedInt8, addr 0x62df8cc, size 0x10, virtual false, abstract: false, final false
static inline uint8_t Saturate_To_UnsignedInt8(int32_t  val) ;

/// @brief Method get_MXCSR, addr 0x62df960, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::X86_MXCSRBits get_MXCSR() ;

/// @brief Method getcsr_raw, addr 0x62df940, size 0x8, virtual false, abstract: false, final false
static inline int32_t getcsr_raw() ;

/// @brief Method set_MXCSR, addr 0x62df968, size 0x4, virtual false, abstract: false, final false
static inline void set_MXCSR(::Unity::Burst::Intrinsics::X86_MXCSRBits  value) ;

/// @brief Method setcsr_raw, addr 0x62df950, size 0x4, virtual false, abstract: false, final false
static inline void setcsr_raw(int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86(X86 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86(X86 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Avx_X86_CMP, "Unity.Burst.Intrinsics", "X86/Avx/CMP");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD, "Unity.Burst.Intrinsics", "X86/Sse4_2/SIDD");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_MXCSRBits, "Unity.Burst.Intrinsics", "X86/MXCSRBits");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_RoundingMode, "Unity.Burst.Intrinsics", "X86/RoundingMode");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86*, "Unity.Burst.Intrinsics", "X86");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Avx);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Avx*, "Unity.Burst.Intrinsics", "X86/Avx");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Avx2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Avx2*, "Unity.Burst.Intrinsics", "X86/Avx2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Bmi1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Bmi1*, "Unity.Burst.Intrinsics", "X86/Bmi1");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Bmi2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Bmi2*, "Unity.Burst.Intrinsics", "X86/Bmi2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_F16C);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_F16C*, "Unity.Burst.Intrinsics", "X86/F16C");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Fma);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Fma*, "Unity.Burst.Intrinsics", "X86/Fma");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Popcnt);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Popcnt*, "Unity.Burst.Intrinsics", "X86/Popcnt");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Sse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Sse*, "Unity.Burst.Intrinsics", "X86/Sse");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Sse2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Sse2*, "Unity.Burst.Intrinsics", "X86/Sse2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Sse3);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Sse3*, "Unity.Burst.Intrinsics", "X86/Sse3");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Sse4_1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Sse4_1*, "Unity.Burst.Intrinsics", "X86/Sse4_1");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Sse4_2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Sse4_2*, "Unity.Burst.Intrinsics", "X86/Sse4_2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86_Ssse3);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_Ssse3*, "Unity.Burst.Intrinsics", "X86/Ssse3");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Fma_X86_Union, "Unity.Burst.Intrinsics", "X86/Fma/Union");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray, "Unity.Burst.Intrinsics", "X86/Sse4_2/StrBoolArray");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer, "Unity.Burst.Intrinsics", "X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86_RoundingScope, "Unity.Burst.Intrinsics", "X86/RoundingScope");
