#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/X86.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X86)
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
  constexpr operator __Avx_X86_CMP_Unwrapped() const noexcept {
    return static_cast<__Avx_X86_CMP_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Avx_X86_CMP();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Avx_X86_CMP(int32_t value__) noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Avx_X86_CMP, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Avx_X86_CMP, 0x4>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Avx
class CORDL_TYPE X86_Avx : public ::System::Object {
public:
  // Declarations
  using CMP = ::Unity::Burst::Intrinsics::Avx_X86_CMP;

  /// @brief Method Select4, addr 0x452b8ec, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 Select4(::Unity::Burst::Intrinsics::v256 src1, ::Unity::Burst::Intrinsics::v256 src2, int32_t control);

  /// @brief Method broadcast_ss, addr 0x452bad4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcast_ss(::cordl_internals::Ptr<void> ptr);

  /// @brief Method cmp_pd, addr 0x452a90c, size 0x300, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmp_ps, addr 0x452ac70, size 0x27c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmp_sd, addr 0x452b308, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmp_ss, addr 0x452b320, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method get_IsAvxSupported, addr 0x45299f4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvxSupported();

  /// @brief Method maskload_pd, addr 0x452bcac, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method maskload_ps, addr 0x452bd90, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method maskstore_pd, addr 0x452bd28, size 0x1c, virtual false, abstract: false, final false
  static inline void maskstore_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method maskstore_ps, addr 0x452be30, size 0x40, virtual false, abstract: false, final false
  static inline void maskstore_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_add_pd, addr 0x45299fc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_add_ps, addr 0x4529a5c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_addsub_pd, addr 0x4529afc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_addsub_ps, addr 0x4529b5c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_and_pd, addr 0x4529bbc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_and_ps, addr 0x4529c1c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_andnot_pd, addr 0x4529c40, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_andnot_ps, addr 0x4529ca0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_blend_pd, addr 0x4529cc4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_blend_ps, addr 0x4529d34, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_blendv_pd, addr 0x4529da4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_blendv_ps, addr 0x4529e10, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_broadcast_pd, addr 0x452bb10, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_pd(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_broadcast_ps, addr 0x452baf4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_broadcast_sd, addr 0x452bae4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_sd(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_broadcast_ss, addr 0x452bac8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ss(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_castpd128_pd256, addr 0x452d064, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd128_pd256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_castpd256_pd128, addr 0x452d034, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castpd256_pd128(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castpd_ps, addr 0x452cfe0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castpd_si256, addr 0x452d004, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_si256(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castps128_ps256, addr 0x452d04c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps128_ps256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_castps256_ps128, addr 0x452d028, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castps256_ps128(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castps_pd, addr 0x452cfec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castps_si256, addr 0x452cff8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_si256(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castsi128_si256, addr 0x452d070, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_castsi256_pd, addr 0x452d01c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castsi256_ps, addr 0x452d010, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castsi256_si128, addr 0x452d040, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castsi256_si128(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_ceil_pd, addr 0x452c210, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_pd(::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_ceil_ps, addr 0x452c338, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_ps(::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_cmp_pd, addr 0x452ac0c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_cmp_ps, addr 0x452b2a4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_cvtepi32_pd, addr 0x452b34c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi32_ps, addr 0x452b370, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtpd_epi32, addr 0x452b4b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtpd_ps, addr 0x452b3bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtps_epi32, addr 0x452b3f8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtps_pd, addr 0x452b444, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtss_f32, addr 0x452b540, size 0x8, virtual false, abstract: false, final false
  static inline float_t mm256_cvtss_f32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvttpd_epi32, addr 0x452b45c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvttpd_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvttps_epi32, addr 0x452b4f4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvttps_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_div_pd, addr 0x4529e7c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_div_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_div_ps, addr 0x4529edc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_div_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_dp_ps, addr 0x4529f7c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_dp_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_extract_epi32, addr 0x452d234, size 0x10, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// @brief Method mm256_extract_epi64, addr 0x452d244, size 0x10, virtual false, abstract: false, final false
  static inline int64_t mm256_extract_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// @brief Method mm256_extractf128_pd, addr 0x452b56c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_extractf128_ps, addr 0x452b548, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_ps(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_extractf128_si256, addr 0x452b590, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_floor_pd, addr 0x452c274, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_pd(::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_floor_ps, addr 0x452c39c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_ps(::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_hadd_pd, addr 0x4529fe8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hadd_ps, addr 0x452a048, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsub_pd, addr 0x452a0a8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsub_ps, addr 0x452a108, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_insert_epi16, addr 0x452d138, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// @brief Method mm256_insert_epi32, addr 0x452d18c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// @brief Method mm256_insert_epi64, addr 0x452d1e0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi64(::Unity::Burst::Intrinsics::v256 a, int64_t i, int32_t index);

  /// @brief Method mm256_insert_epi8, addr 0x452d0e8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi8(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// @brief Method mm256_insertf128_pd, addr 0x452bb4c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mm256_insertf128_ps, addr 0x452bb20, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mm256_insertf128_si256, addr 0x452bb74, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mm256_lddqu_si256, addr 0x452bf08, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_lddqu_si256(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method mm256_load_pd, addr 0x452bbb4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_pd(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_load_ps, addr 0x452bb9c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_load_si256, addr 0x452bbfc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_si256(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_loadu2_m128, addr 0x452bc2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr);

  /// @brief Method mm256_loadu2_m128d, addr 0x452bc48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128d(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr);

  /// @brief Method mm256_loadu2_m128i, addr 0x452bc58, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128i(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr);

  /// @brief Method mm256_loadu_pd, addr 0x452bbcc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_pd(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_loadu_ps, addr 0x452bbe4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_loadu_si256, addr 0x452bc14, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_si256(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_maskload_pd, addr 0x452bcd4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_maskload_ps, addr 0x452bde0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_maskstore_pd, addr 0x452bd44, size 0x4c, virtual false, abstract: false, final false
  static inline void mm256_maskstore_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_maskstore_ps, addr 0x452be70, size 0x3c, virtual false, abstract: false, final false
  static inline void mm256_maskstore_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_max_pd, addr 0x452a168, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_ps, addr 0x452a1c8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_pd, addr 0x452a310, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_ps, addr 0x452a370, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_movedup_pd, addr 0x452bef4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_movedup_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_movehdup_ps, addr 0x452beac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_movehdup_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_moveldup_ps, addr 0x452bed0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_moveldup_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_movemask_pd, addr 0x452cb64, size 0x38, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_movemask_ps, addr 0x452cb9c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_mul_pd, addr 0x452a4b8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mul_ps, addr 0x452a518, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_or_pd, addr 0x452a5b8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_or_ps, addr 0x452a618, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_permute2f128_pd, addr 0x452b9c0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_permute2f128_ps, addr 0x452b93c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_permute2f128_si256, addr 0x452ba44, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_permute_pd, addr 0x452b7ec, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_permute_ps, addr 0x452b690, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_ps(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_permutevar_pd, addr 0x452b754, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_permutevar_ps, addr 0x452b630, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_rcp_ps, addr 0x452bf38, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_rcp_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_round_pd, addr 0x452c1b0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_round_pd(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  /// @brief Method mm256_round_ps, addr 0x452c2d8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_round_ps(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  /// @brief Method mm256_rsqrt_ps, addr 0x452bfb8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_rsqrt_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_set1_epi16, addr 0x452cfbc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi16(int16_t a);

  /// @brief Method mm256_set1_epi32, addr 0x452cfc8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi32(int32_t a);

  /// @brief Method mm256_set1_epi64x, addr 0x452cfd4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi64x(int64_t a);

  /// @brief Method mm256_set1_epi8, addr 0x452cfa4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi8(uint8_t a);

  /// @brief Method mm256_set1_pd, addr 0x452cf8c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_pd(double_t a);

  /// @brief Method mm256_set1_ps, addr 0x452cf98, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_ps(float_t a);

  /// @brief Method mm256_set_epi16, addr 0x452cd44, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi16(int16_t e15_, int16_t e14_, int16_t e13_, int16_t e12_, int16_t e11_, int16_t e10_, int16_t e9_, int16_t e8_, int16_t e7_, int16_t e6_,
                                                                 int16_t e5_, int16_t e4_, int16_t e3_, int16_t e2_, int16_t e1_, int16_t e0_);

  /// @brief Method mm256_set_epi32, addr 0x452cda8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi32(int32_t e7, int32_t e6, int32_t e5, int32_t e4, int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// @brief Method mm256_set_epi64x, addr 0x452cdbc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi64x(int64_t e3, int64_t e2, int64_t e1, int64_t e0);

  /// @brief Method mm256_set_epi8, addr 0x452cc60, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi8(uint8_t e31_, uint8_t e30_, uint8_t e29_, uint8_t e28_, uint8_t e27_, uint8_t e26_, uint8_t e25_, uint8_t e24_, uint8_t e23_,
                                                                uint8_t e22_, uint8_t e21_, uint8_t e20_, uint8_t e19_, uint8_t e18_, uint8_t e17_, uint8_t e16_, uint8_t e15_, uint8_t e14_,
                                                                uint8_t e13_, uint8_t e12_, uint8_t e11_, uint8_t e10_, uint8_t e9_, uint8_t e8_, uint8_t e7_, uint8_t e6_, uint8_t e5_, uint8_t e4_,
                                                                uint8_t e3_, uint8_t e2_, uint8_t e1_, uint8_t e0_);

  /// @brief Method mm256_set_m128, addr 0x452bc3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_set_m128d, addr 0x452cdc8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128d(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_set_m128i, addr 0x452cdd4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128i(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_set_pd, addr 0x452cc40, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_pd(double_t d, double_t c, double_t b, double_t a);

  /// @brief Method mm256_set_ps, addr 0x452cc4c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_ps(float_t e7, float_t e6, float_t e5, float_t e4, float_t e3, float_t e2, float_t e1, float_t e0);

  /// @brief Method mm256_setr_epi16, addr 0x452cee4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi16(int16_t e15_, int16_t e14_, int16_t e13_, int16_t e12_, int16_t e11_, int16_t e10_, int16_t e9_, int16_t e8_, int16_t e7_,
                                                                  int16_t e6_, int16_t e5_, int16_t e4_, int16_t e3_, int16_t e2_, int16_t e1_, int16_t e0_);

  /// @brief Method mm256_setr_epi32, addr 0x452cf48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi32(int32_t e7, int32_t e6, int32_t e5, int32_t e4, int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// @brief Method mm256_setr_epi64x, addr 0x452cf5c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi64x(int64_t e3, int64_t e2, int64_t e1, int64_t e0);

  /// @brief Method mm256_setr_epi8, addr 0x452ce00, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi8(uint8_t e31_, uint8_t e30_, uint8_t e29_, uint8_t e28_, uint8_t e27_, uint8_t e26_, uint8_t e25_, uint8_t e24_, uint8_t e23_,
                                                                 uint8_t e22_, uint8_t e21_, uint8_t e20_, uint8_t e19_, uint8_t e18_, uint8_t e17_, uint8_t e16_, uint8_t e15_, uint8_t e14_,
                                                                 uint8_t e13_, uint8_t e12_, uint8_t e11_, uint8_t e10_, uint8_t e9_, uint8_t e8_, uint8_t e7_, uint8_t e6_, uint8_t e5_, uint8_t e4_,
                                                                 uint8_t e3_, uint8_t e2_, uint8_t e1_, uint8_t e0_);

  /// @brief Method mm256_setr_m128, addr 0x452cf68, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_setr_m128d, addr 0x452cf74, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128d(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_setr_m128i, addr 0x452cf80, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128i(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_setr_pd, addr 0x452cde0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_pd(double_t d, double_t c, double_t b, double_t a);

  /// @brief Method mm256_setr_ps, addr 0x452cdec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_ps(float_t e7, float_t e6, float_t e5, float_t e4, float_t e3, float_t e2, float_t e1, float_t e0);

  /// @brief Method mm256_setzero_pd, addr 0x452cc1c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_pd();

  /// @brief Method mm256_setzero_ps, addr 0x452cc28, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_ps();

  /// @brief Method mm256_setzero_si256, addr 0x452cc34, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_si256();

  /// @brief Method mm256_shuffle_pd, addr 0x452a63c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_shuffle_ps, addr 0x452a6ac, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_sqrt_pd, addr 0x452c094, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_sqrt_ps, addr 0x452c0e0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_store_pd, addr 0x452bbc0, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_pd(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_store_ps, addr 0x452bba8, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_ps(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_store_si256, addr 0x452bc08, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_si256(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 v);

  /// @brief Method mm256_storeu2_m128, addr 0x452bc68, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_storeu2_m128d, addr 0x452bc84, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128d(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_storeu2_m128i, addr 0x452bc98, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128i(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_storeu_pd, addr 0x452bbd8, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_pd(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_storeu_ps, addr 0x452bbf0, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_ps(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_storeu_si256, addr 0x452bc20, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_si256(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 v);

  /// @brief Method mm256_stream_pd, addr 0x452bf20, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_stream_ps, addr 0x452bf2c, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_stream_si256, addr 0x452bf14, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_si256(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_sub_pd, addr 0x452a788, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sub_ps, addr 0x452a7e8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testc_pd, addr 0x452c6a8, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testc_ps, addr 0x452c93c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testc_si256, addr 0x452c598, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testnzc_pd, addr 0x452c6d8, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testnzc_ps, addr 0x452c96c, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testnzc_si256, addr 0x452c5e4, size 0x94, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testz_pd, addr 0x452c678, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testz_ps, addr 0x452c90c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testz_si256, addr 0x452c54c, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_undefined_pd, addr 0x452d0ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_pd();

  /// @brief Method mm256_undefined_ps, addr 0x452d0a0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_ps();

  /// @brief Method mm256_undefined_si256, addr 0x452d0b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_si256();

  /// @brief Method mm256_unpackhi_pd, addr 0x452c400, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_ps, addr 0x452c4c0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_pd, addr 0x452c460, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_ps, addr 0x452c508, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_xor_pd, addr 0x452a888, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_xor_ps, addr 0x452a8e8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_zeroall, addr 0x452b5b4, size 0x4, virtual false, abstract: false, final false
  static inline void mm256_zeroall();

  /// @brief Method mm256_zeroupper, addr 0x452b5b8, size 0x4, virtual false, abstract: false, final false
  static inline void mm256_zeroupper();

  /// @brief Method mm256_zextpd128_pd256, addr 0x452d0d0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextpd128_pd256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_zextps128_ps256, addr 0x452d0c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextps128_ps256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_zextsi128_si256, addr 0x452d0dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method permute_pd, addr 0x452b88c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permute_pd(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method permute_ps, addr 0x452b688, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permute_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method permutevar_pd, addr 0x452b6f0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permutevar_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method permutevar_ps, addr 0x452b5bc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permutevar_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testc_pd, addr 0x452c810, size 0x74, virtual false, abstract: false, final false
  static inline int32_t testc_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testc_ps, addr 0x452caa0, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testc_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testnzc_pd, addr 0x452c884, size 0x88, virtual false, abstract: false, final false
  static inline int32_t testnzc_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testnzc_ps, addr 0x452cb10, size 0x54, virtual false, abstract: false, final false
  static inline int32_t testnzc_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testz_pd, addr 0x452c79c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t testz_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testz_ps, addr 0x452ca30, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testz_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method undefined_pd, addr 0x452d088, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_pd();

  /// @brief Method undefined_ps, addr 0x452d07c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_ps();

  /// @brief Method undefined_si128, addr 0x452d094, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_si128();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Avx();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Avx", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Avx(X86_Avx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Avx", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Avx(X86_Avx const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14650 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Avx, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Avx2
class CORDL_TYPE X86_Avx2 : public ::System::Object {
public:
  // Declarations
  /// @brief Method EmulatedGather, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
  static inline void EmulatedGather(::cordl_internals::Ptr<T> dptr, ::cordl_internals::Ptr<void> base_addr, ::cordl_internals::Ptr<int32_t> indexPtr, int32_t scale, int32_t n,
                                    ::cordl_internals::Ptr<U> mask);

  /// @brief Method EmulatedGather, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
  static inline void EmulatedGather(::cordl_internals::Ptr<T> dptr, ::cordl_internals::Ptr<void> base_addr, ::cordl_internals::Ptr<int64_t> indexPtr, int32_t scale, int32_t n,
                                    ::cordl_internals::Ptr<U> mask);

  /// @brief Method blend_epi32, addr 0x452f798, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method broadcastb_epi8, addr 0x452ffd4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastb_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastd_epi32, addr 0x4530004, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastq_epi64, addr 0x4530014, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastq_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastsd_pd, addr 0x452ffc0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastsd_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastss_ps, addr 0x452ff9c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastss_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastw_epi16, addr 0x452ffe8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastw_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method get_IsAvx2Supported, addr 0x452d254, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvx2Supported();

  /// @brief Method i32gather_epi32, addr 0x45312b0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi32(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i32gather_epi64, addr 0x4531350, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi64(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i32gather_pd, addr 0x4530e20, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_pd(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i32gather_ps, addr 0x4530ec0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_ps(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i64gather_epi32, addr 0x45313f0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi32(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i64gather_epi64, addr 0x4531490, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi64(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i64gather_pd, addr 0x4530f60, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_pd(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i64gather_ps, addr 0x4531000, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_ps(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method mask_i32gather_epi32, addr 0x4531e0c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi32(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i32gather_epi64, addr 0x4531ec0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi64(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i32gather_pd, addr 0x4531b40, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_pd(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i32gather_ps, addr 0x4531bf4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_ps(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i64gather_epi32, addr 0x4531f74, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i64gather_epi64, addr 0x4532024, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi64(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i64gather_pd, addr 0x4531ca8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_pd(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i64gather_ps, addr 0x4531d5c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_ps(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method maskload_epi32, addr 0x4530584, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_epi32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method maskload_epi64, addr 0x45305ec, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_epi64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method maskstore_epi32, addr 0x453065c, size 0x64, virtual false, abstract: false, final false
  static inline void maskstore_epi32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method maskstore_epi64, addr 0x45306c0, size 0x6c, virtual false, abstract: false, final false
  static inline void maskstore_epi64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_abs_epi16, addr 0x452dc5c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi16(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_abs_epi32, addr 0x452dca8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_abs_epi8, addr 0x452dc10, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi8(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_add_epi16, addr 0x452dd54, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_add_epi32, addr 0x452ddb4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_add_epi64, addr 0x452de14, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_add_epi8, addr 0x452dcf4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_adds_epi16, addr 0x452ded4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_adds_epi8, addr 0x452de74, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_adds_epu16, addr 0x452df94, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_adds_epu8, addr 0x452df34, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_alignr_epi8, addr 0x452f80c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_alignr_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_and_si256, addr 0x452da90, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_andnot_si256, addr 0x452daf0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_avg_epu16, addr 0x452e354, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_avg_epu8, addr 0x452e2f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_blend_epi16, addr 0x452f8e4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_blend_epi32, addr 0x452f7a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_blendv_epi8, addr 0x452f878, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_broadcastb_epi8, addr 0x453001c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastb_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastd_epi32, addr 0x4530078, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastq_epi64, addr 0x453008c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastq_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastsd_pd, addr 0x452ffc8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsd_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastsi128_si256, addr 0x4530098, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastss_ps, addr 0x452ffac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastss_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastw_epi16, addr 0x4530034, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastw_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_bslli_epi128, addr 0x452eba4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_bslli_epi128(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_bsrli_epi128, addr 0x452ec64, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_bsrli_epi128(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_cmpeq_epi16, addr 0x452d324, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpeq_epi32, addr 0x452d384, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpeq_epi64, addr 0x452d3e4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpeq_epi8, addr 0x452d2c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpgt_epi16, addr 0x452d4a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpgt_epi32, addr 0x452d504, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpgt_epi64, addr 0x452d564, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpgt_epi8, addr 0x452d444, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cvtepi16_epi32, addr 0x45301dc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi16_epi64, addr 0x4530244, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi32_epi64, addr 0x45302ac, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi8_epi16, addr 0x45300a4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi8_epi32, addr 0x453010c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi8_epi64, addr 0x4530174, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu16_epi32, addr 0x453044c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu16_epi64, addr 0x45304b4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu32_epi64, addr 0x453051c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu8_epi16, addr 0x4530314, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu8_epi32, addr 0x453037c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu8_epi64, addr 0x45303e4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtsd_f64, addr 0x452d2ac, size 0x8, virtual false, abstract: false, final false
  static inline double_t mm256_cvtsd_f64(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtsi256_si32, addr 0x452d2b4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mm256_cvtsi256_si32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtsi256_si64, addr 0x452d2bc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mm256_cvtsi256_si64(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_extract_epi16, addr 0x452d29c, size 0x10, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// @brief Method mm256_extract_epi8, addr 0x452d290, size 0xc, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi8(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// @brief Method mm256_extracti128_si256, addr 0x452ff50, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extracti128_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_hadd_epi16, addr 0x452e3b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hadd_epi32, addr 0x452e414, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hadds_epi16, addr 0x452e474, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadds_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsub_epi16, addr 0x452e4d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsub_epi32, addr 0x452e534, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsubs_epi16, addr 0x452e594, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsubs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_i32gather_epi32, addr 0x4530aa8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi32(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i32gather_epi64, addr 0x45310a0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi64(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method mm256_i32gather_pd, addr 0x4530b5c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_pd(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method mm256_i32gather_ps, addr 0x4530c10, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_ps(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i64gather_epi32, addr 0x4531154, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_epi32(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i64gather_epi64, addr 0x45311fc, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_epi64(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i64gather_pd, addr 0x4530cc4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_pd(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i64gather_ps, addr 0x4530d78, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_ps(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_inserti128_si256, addr 0x452ff74, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_inserti128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mm256_madd_epi16, addr 0x452e5f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_madd_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_maddubs_epi16, addr 0x452e654, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maddubs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mask_i32gather_epi32, addr 0x4531838, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi32(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i32gather_epi64, addr 0x45318fc, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi64(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i32gather_pd, addr 0x4531530, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_pd(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i32gather_ps, addr 0x45315f4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_ps(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i64gather_epi32, addr 0x4531a84, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mm256_mask_i64gather_epi64, addr 0x45319c0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_epi64(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i64gather_pd, addr 0x45316b8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_pd(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i64gather_ps, addr 0x453177c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_ps(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mm256_maskload_epi32, addr 0x453072c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_maskload_epi64, addr 0x4530794, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_maskstore_epi32, addr 0x45307fc, size 0x24, virtual false, abstract: false, final false
  static inline void mm256_maskstore_epi32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_maskstore_epi64, addr 0x4530820, size 0x24, virtual false, abstract: false, final false
  static inline void mm256_maskstore_epi64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_max_epi16, addr 0x452d670, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epi32, addr 0x452d6d0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epi8, addr 0x452d610, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epu16, addr 0x452d790, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epu32, addr 0x452d7f0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epu8, addr 0x452d730, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epi16, addr 0x452d8b0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epi32, addr 0x452d910, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epi8, addr 0x452d850, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epu16, addr 0x452d9d0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epu32, addr 0x452da30, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epu8, addr 0x452d970, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_movemask_epi8, addr 0x452d25c, size 0x34, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_epi8(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_mpsadbw_epu8, addr 0x452ead4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mpsadbw_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_mul_epi32, addr 0x452e894, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mul_epu32, addr 0x452e834, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mulhi_epi16, addr 0x452e6b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mulhi_epu16, addr 0x452e714, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mulhrs_epi16, addr 0x452ea14, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhrs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mullo_epi16, addr 0x452e774, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mullo_epi32, addr 0x452e7d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_or_si256, addr 0x452db50, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_packs_epi16, addr 0x452f950, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_packs_epi32, addr 0x452f9b0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_packus_epi16, addr 0x452fa10, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_packus_epi32, addr 0x452fa70, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_permute2x128_si256, addr 0x4530a18, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2x128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_permute4x64_epi64, addr 0x4530934, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_permute4x64_pd, addr 0x45309a0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_permutevar8x32_epi32, addr 0x4530844, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 idx);

  /// @brief Method mm256_permutevar8x32_ps, addr 0x45308b0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 idx);

  /// @brief Method mm256_sad_epu8, addr 0x452ea74, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sad_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_shuffle_epi32, addr 0x452fe30, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_shuffle_epi8, addr 0x452fdd0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_shufflehi_epi16, addr 0x452fe90, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflehi_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_shufflelo_epi16, addr 0x452fef0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflelo_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_sign_epi16, addr 0x452e954, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sign_epi32, addr 0x452e9b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sign_epi8, addr 0x452e8f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sll_epi16, addr 0x452ecc4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_sll_epi32, addr 0x452ed30, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_sll_epi64, addr 0x452ed9c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_slli_epi16, addr 0x452ee08, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_slli_epi32, addr 0x452ee68, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_slli_epi64, addr 0x452eec8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_slli_si256, addr 0x452eb44, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_sllv_epi32, addr 0x452ef28, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_sllv_epi64, addr 0x452f000, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_sra_epi16, addr 0x452f0c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_sra_epi32, addr 0x452f12c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_srai_epi16, addr 0x452f198, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srai_epi32, addr 0x452f1f8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srav_epi32, addr 0x452f258, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srav_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_srl_epi16, addr 0x452f39c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_srl_epi32, addr 0x452f408, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_srl_epi64, addr 0x452f474, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_srli_epi16, addr 0x452f4e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srli_epi32, addr 0x452f540, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srli_epi64, addr 0x452f5a0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srli_si256, addr 0x452ec04, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srlv_epi32, addr 0x452f600, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_srlv_epi64, addr 0x452f6d8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_stream_load_si256, addr 0x4530a9c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_stream_load_si256(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method mm256_sub_epi16, addr 0x452e054, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sub_epi32, addr 0x452e0b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sub_epi64, addr 0x452e114, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sub_epi8, addr 0x452dff4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_subs_epi16, addr 0x452e1d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_subs_epi8, addr 0x452e174, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_subs_epu16, addr 0x452e294, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_subs_epu8, addr 0x452e234, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_epi16, addr 0x452fb30, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_epi32, addr 0x452fb90, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_epi64, addr 0x452fbf0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_epi8, addr 0x452fad0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_epi16, addr 0x452fcb0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_epi32, addr 0x452fd10, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_epi64, addr 0x452fd70, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_epi8, addr 0x452fc50, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_xor_si256, addr 0x452dbb0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method sllv_epi32, addr 0x452ef80, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sllv_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method sllv_epi64, addr 0x452f058, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sllv_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srav_epi32, addr 0x452f2b0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srav_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srlv_epi32, addr 0x452f658, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srlv_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srlv_epi64, addr 0x452f730, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srlv_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Avx2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Avx2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Avx2(X86_Avx2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Avx2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Avx2(X86_Avx2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14651 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Avx2, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Bmi1
class CORDL_TYPE X86_Bmi1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method andn_u32, addr 0x45320e0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t andn_u32(uint32_t a, uint32_t b);

  /// @brief Method andn_u64, addr 0x45320e8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t andn_u64(uint64_t a, uint64_t b);

  /// @brief Method bextr2_u32, addr 0x4532150, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t bextr2_u32(uint32_t a, uint32_t control);

  /// @brief Method bextr2_u64, addr 0x4532184, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t bextr2_u64(uint64_t a, uint64_t control);

  /// @brief Method bextr_u32, addr 0x45320f0, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t bextr_u32(uint32_t a, uint32_t start, uint32_t len);

  /// @brief Method bextr_u64, addr 0x4532120, size 0x30, virtual false, abstract: false, final false
  static inline uint64_t bextr_u64(uint64_t a, uint32_t start, uint32_t len);

  /// @brief Method blsi_u32, addr 0x45321b8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsi_u32(uint32_t a);

  /// @brief Method blsi_u64, addr 0x45321c4, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsi_u64(uint64_t a);

  /// @brief Method blsmsk_u32, addr 0x45321d0, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsmsk_u32(uint32_t a);

  /// @brief Method blsmsk_u64, addr 0x45321dc, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsmsk_u64(uint64_t a);

  /// @brief Method blsr_u32, addr 0x45321e8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsr_u32(uint32_t a);

  /// @brief Method blsr_u64, addr 0x45321f4, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsr_u64(uint64_t a);

  /// @brief Method get_IsBmi1Supported, addr 0x45320d8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsBmi1Supported();

  /// @brief Method tzcnt_u32, addr 0x4532200, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t tzcnt_u32(uint32_t a);

  /// @brief Method tzcnt_u64, addr 0x4532258, size 0x64, virtual false, abstract: false, final false
  static inline uint64_t tzcnt_u64(uint64_t a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Bmi1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Bmi1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Bmi1(X86_Bmi1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Bmi1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Bmi1(X86_Bmi1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Bmi1, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Bmi2
class CORDL_TYPE X86_Bmi2 : public ::System::Object {
public:
  // Declarations
  /// @brief Method bzhi_u32, addr 0x45322c4, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t bzhi_u32(uint32_t a, uint32_t index);

  /// @brief Method bzhi_u64, addr 0x45322dc, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t bzhi_u64(uint64_t a, uint64_t index);

  /// @brief Method get_IsBmi2Supported, addr 0x45322bc, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsBmi2Supported();

  /// @brief Method mulx_u32, addr 0x45322f4, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t mulx_u32(uint32_t a, uint32_t b, ::ByRef<uint32_t> hi);

  /// @brief Method mulx_u64, addr 0x4532304, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t mulx_u64(uint64_t a, uint64_t b, ::ByRef<uint64_t> hi);

  /// @brief Method pdep_u32, addr 0x4532340, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t pdep_u32(uint32_t a, uint32_t mask);

  /// @brief Method pdep_u64, addr 0x453237c, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t pdep_u64(uint64_t a, uint64_t mask);

  /// @brief Method pext_u32, addr 0x45323b8, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t pext_u32(uint32_t a, uint32_t mask);

  /// @brief Method pext_u64, addr 0x45323f4, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t pext_u64(uint64_t a, uint64_t mask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Bmi2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Bmi2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Bmi2(X86_Bmi2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Bmi2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Bmi2(X86_Bmi2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14653 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Bmi2, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
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
  constexpr operator __X86_MXCSRBits_Unwrapped() const noexcept {
    return static_cast<__X86_MXCSRBits_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_MXCSRBits();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X86_MXCSRBits(int32_t value__) noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14654 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_MXCSRBits, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_MXCSRBits, 0x4>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
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
  constexpr operator __X86_RoundingMode_Unwrapped() const noexcept {
    return static_cast<__X86_RoundingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_RoundingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X86_RoundingMode(int32_t value__) noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14655 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_RoundingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_RoundingMode, 0x4>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.IDisposable, Unity.Burst.Intrinsics.X86::MXCSRBits
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/RoundingScope
struct CORDL_TYPE X86_RoundingScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x4532438, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x4532430, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::Intrinsics::X86_MXCSRBits roundingMode);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_RoundingScope();

  // Ctor Parameters [CppParam { name: "OldBits", ty: "::Unity::Burst::Intrinsics::X86_MXCSRBits", modifiers: "", def_value: None }]
  constexpr X86_RoundingScope(::Unity::Burst::Intrinsics::X86_MXCSRBits OldBits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OldBits, offset: 0x0, size: 0x4, def value: None
  ::Unity::Burst::Intrinsics::X86_MXCSRBits OldBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_RoundingScope, OldBits) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_RoundingScope, 0x4>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/F16C
class CORDL_TYPE X86_F16C : public ::System::Object {
public:
  // Declarations
  /// @brief Field BaseTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BaseTable, put = setStaticF_BaseTable)) ::ArrayW<uint16_t, ::Array<uint16_t>*> BaseTable;

  /// @brief Field ShiftTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ShiftTable, put = setStaticF_ShiftTable)) ::ArrayW<int8_t, ::Array<int8_t>*> ShiftTable;

  /// @brief Method FloatToHalf, addr 0x4532638, size 0x1d0, virtual false, abstract: false, final false
  static inline uint16_t FloatToHalf(uint32_t f, int32_t rounding);

  /// @brief Method HalfToFloat, addr 0x4532444, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t HalfToFloat(uint16_t h);

  /// @brief Method cvtph_ps, addr 0x45324a0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtph_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtps_ph, addr 0x4532808, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_ph(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  static inline ::ArrayW<uint16_t, ::Array<uint16_t>*> getStaticF_BaseTable();

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_ShiftTable();

  /// @brief Method get_IsF16CSupported, addr 0x453243c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsF16CSupported();

  /// @brief Method mm256_cvtph_ps, addr 0x4532544, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtph_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtps_ph, addr 0x45328d4, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtps_ph(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  static inline void setStaticF_BaseTable(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  static inline void setStaticF_ShiftTable(::ArrayW<int8_t, ::Array<int8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_F16C();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_F16C", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_F16C(X86_F16C&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_F16C", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_F16C(X86_F16C const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_F16C, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/Fma/Union
struct CORDL_TYPE Fma_X86_Union {
public:
  // Declarations
  /// @brief Field f, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_f, put = __cordl_internal_set_f)) float_t f;

  /// @brief Field u, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_u, put = __cordl_internal_set_u)) uint32_t u;

  constexpr float_t const& __cordl_internal_get_f() const;

  constexpr float_t& __cordl_internal_get_f();

  constexpr uint32_t const& __cordl_internal_get_u() const;

  constexpr uint32_t& __cordl_internal_get_u();

  constexpr void __cordl_internal_set_f(float_t value);

  constexpr void __cordl_internal_set_u(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Fma_X86_Union();

  // Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "u", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Fma_X86_Union(float_t f, uint32_t u) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___f_padding[0x0];
      /// @brief Field f, offset: 0x0, size: 0x4, def value: None
      float_t ___f;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___f_padding_forAlignment[0x0];
      /// @brief Field f, offset: 0x0, size: 0x4, def value: None
      float_t ___f_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___u_padding[0x0];
      /// @brief Field u, offset: 0x0, size: 0x4, def value: None
      uint32_t ___u;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___u_padding_forAlignment[0x0];
      /// @brief Field u, offset: 0x0, size: 0x4, def value: None
      uint32_t ___u_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14658 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Fma_X86_Union, 0x4>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Fma
class CORDL_TYPE X86_Fma : public ::System::Object {
public:
  // Declarations
  using Union = ::Unity::Burst::Intrinsics::Fma_X86_Union;

  /// @brief Method FmaHelper, addr 0x4532b0c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t FmaHelper(float_t a, float_t b, float_t c);

  /// @brief Method FnmaHelper, addr 0x4532b28, size 0x1c, virtual false, abstract: false, final false
  static inline float_t FnmaHelper(float_t a, float_t b, float_t c);

  /// @brief Method fmadd_pd, addr 0x4532b44, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmadd_ps, addr 0x4532bdc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmadd_sd, addr 0x4532ce0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmadd_ss, addr 0x4532d2c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmaddsub_pd, addr 0x4532d60, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmaddsub_ps, addr 0x4532df8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsub_pd, addr 0x4532f34, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsub_ps, addr 0x4532fcc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsub_sd, addr 0x45330d0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsub_ss, addr 0x453311c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsubadd_pd, addr 0x4533150, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsubadd_ps, addr 0x45331e8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmadd_pd, addr 0x4533314, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmadd_ps, addr 0x45333ac, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmadd_sd, addr 0x45334b0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmadd_ss, addr 0x45334fc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmsub_pd, addr 0x4533530, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmsub_ps, addr 0x45335c8, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmsub_sd, addr 0x45336dc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmsub_ss, addr 0x4533728, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method get_IsFmaSupported, addr 0x4532b04, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsFmaSupported();

  /// @brief Method mm256_fmadd_pd, addr 0x4532b90, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmadd_ps, addr 0x4532c60, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmaddsub_pd, addr 0x4532dac, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmaddsub_ps, addr 0x4532e7c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmsub_pd, addr 0x4532f80, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmsub_ps, addr 0x4533050, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmsubadd_pd, addr 0x453319c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmsubadd_ps, addr 0x453326c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fnmadd_pd, addr 0x4533360, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fnmadd_ps, addr 0x4533430, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fnmsub_pd, addr 0x453357c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fnmsub_ps, addr 0x4533654, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Fma();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Fma", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Fma(X86_Fma&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Fma", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Fma(X86_Fma const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Fma, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Popcnt
class CORDL_TYPE X86_Popcnt : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_IsPopcntSupported, addr 0x4533760, size 0x50, virtual false, abstract: false, final false
  static inline bool get_IsPopcntSupported();

  /// @brief Method popcnt_u32, addr 0x45337b0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t popcnt_u32(uint32_t v);

  /// @brief Method popcnt_u64, addr 0x45337d0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t popcnt_u64(uint64_t v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Popcnt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Popcnt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Popcnt(X86_Popcnt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Popcnt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Popcnt(X86_Popcnt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14660 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Popcnt, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse
class CORDL_TYPE X86_Sse : public ::System::Object {
public:
  // Declarations
  /// @brief Method SHUFFLE, addr 0x4533fa0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t SHUFFLE(int32_t d, int32_t c, int32_t b, int32_t a);

  /// @brief Method TRANSPOSE4_PS, addr 0x4533fc4, size 0x100, virtual false, abstract: false, final false
  static inline void TRANSPOSE4_PS(::ByRef<::Unity::Burst::Intrinsics::v128> row0, ::ByRef<::Unity::Burst::Intrinsics::v128> row1, ::ByRef<::Unity::Burst::Intrinsics::v128> row2,
                                   ::ByRef<::Unity::Burst::Intrinsics::v128> row3);

  /// @brief Method add_ps, addr 0x4529ab4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_ss, addr 0x4533834, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method and_ps, addr 0x4529c34, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method andnot_ps, addr 0x4529cb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_ps, addr 0x452aeec, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_ss, addr 0x4533ab0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpge_ps, addr 0x452b26c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpge_ss, addr 0x4533b34, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_ps, addr 0x452b288, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_ss, addr 0x4533b10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmple_ps, addr 0x452afc4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmple_ss, addr 0x4533af0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_ps, addr 0x452af58, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_ss, addr 0x4533ad0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpneq_ps, addr 0x452b090, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpneq_ss, addr 0x4533b58, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnge_ps, addr 0x452b234, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnge_ss, addr 0x4533bdc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpngt_ps, addr 0x452b250, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpngt_ss, addr 0x4533bb8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnle_ps, addr 0x452b168, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnle_ss, addr 0x4533b98, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnlt_ps, addr 0x452b0fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnlt_ss, addr 0x4533b78, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpord_ps, addr 0x452b1d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpord_ss, addr 0x4533c00, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpunord_ps, addr 0x452b030, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpunord_ss, addr 0x4533c3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comieq_ss, addr 0x4533c78, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comieq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comige_ss, addr 0x4533cc8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comige_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comigt_ss, addr 0x4533cb4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comigt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comile_ss, addr 0x4533ca0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comile_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comilt_ss, addr 0x4533c8c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comilt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comineq_ss, addr 0x4533cdc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comineq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvt_ss2si, addr 0x4533d6c, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t cvt_ss2si(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsi32_ss, addr 0x453380c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_ss(::Unity::Burst::Intrinsics::v128 a, int32_t b);

  /// @brief Method cvtsi64_ss, addr 0x4533820, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_ss(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// @brief Method cvtss_f32, addr 0x4533ecc, size 0x8, virtual false, abstract: false, final false
  static inline float_t cvtss_f32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtss_si32, addr 0x4533d68, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtss_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtss_si64, addr 0x4533e1c, size 0xb0, virtual false, abstract: false, final false
  static inline int64_t cvtss_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtt_ss2si, addr 0x4533ef4, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvtt_ss2si(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttss_si32, addr 0x4533ed4, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvttss_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttss_si64, addr 0x4533f14, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttss_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method div_ps, addr 0x4529f34, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method div_ss, addr 0x4533888, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSseSupported, addr 0x45299e0, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSseSupported();

  /// @brief Method load_ps, addr 0x45337f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 load_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method loadu_ps, addr 0x452bb04, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method loadu_si16, addr 0x45340c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si16(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method loadu_si64, addr 0x45340d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si64(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method max_ps, addr 0x452a220, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_ss, addr 0x4533a30, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_ps, addr 0x452a3c8, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_ss, addr 0x45339b0, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method move_ss, addr 0x4533f98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movehl_ps, addr 0x4533fb4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movehl_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movelh_ps, addr 0x4533fbc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movelh_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movemask_ps, addr 0x452cbf4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t movemask_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mul_ps, addr 0x452a570, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mul_ss, addr 0x453386c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method or_ps, addr 0x452a630, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method rcp_ps, addr 0x452bf80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rcp_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method rcp_ss, addr 0x4533918, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rcp_ss(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method rsqrt_ps, addr 0x452bffc, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method rsqrt_ss, addr 0x4533934, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ss(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method set1_ps, addr 0x4533f40, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_ps(float_t a);

  /// @brief Method set_ps, addr 0x4533f60, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ps(float_t e3, float_t e2, float_t e1, float_t e0);

  /// @brief Method set_ps1, addr 0x4533f50, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ps1(float_t a);

  /// @brief Method set_ss, addr 0x4533f34, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ss(float_t a);

  /// @brief Method setr_ps, addr 0x4533f7c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_ps(float_t e3, float_t e2, float_t e1, float_t e0);

  /// @brief Method setzero_ps, addr 0x452d058, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setzero_ps();

  /// @brief Method shuffle_ps, addr 0x452a710, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method sqrt_ps, addr 0x452c124, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method sqrt_ss, addr 0x45338a4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_ss(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method store_ps, addr 0x45337fc, size 0x8, virtual false, abstract: false, final false
  static inline void store_ps(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_ps, addr 0x452bc7c, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_ps(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si16, addr 0x45340d0, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si16(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method storeu_si64, addr 0x45340e4, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method stream_ps, addr 0x4533804, size 0x8, virtual false, abstract: false, final false
  static inline void stream_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method sub_ps, addr 0x452a840, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_ss, addr 0x4533850, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomieq_ss, addr 0x4533cf0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomieq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomige_ss, addr 0x4533d40, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomige_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomigt_ss, addr 0x4533d2c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomigt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomile_ss, addr 0x4533d18, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomile_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomilt_ss, addr 0x4533d04, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomilt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomineq_ss, addr 0x4533d54, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomineq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_ps, addr 0x452c4f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_ps, addr 0x452c53c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method xor_ps, addr 0x452a900, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse(X86_Sse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse(X86_Sse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse2
class CORDL_TYPE X86_Sse2 : public ::System::Object {
public:
  // Declarations
  /// @brief Method SHUFFLE2, addr 0x45340f4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t SHUFFLE2(int32_t x, int32_t y);

  /// @brief Method add_epi16, addr 0x453418c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_epi32, addr 0x45341fc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_epi64, addr 0x4534228, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_epi8, addr 0x453411c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_pd, addr 0x4536c44, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_sd, addr 0x4536c30, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method adds_epi16, addr 0x45342bc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method adds_epi8, addr 0x4534234, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method adds_epu16, addr 0x45343cc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method adds_epu8, addr 0x4534344, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method and_pd, addr 0x4537010, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method and_si128, addr 0x4535f38, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method andnot_pd, addr 0x453701c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method andnot_si128, addr 0x4535f44, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method avg_epu16, addr 0x45344cc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 avg_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method avg_epu8, addr 0x4534454, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 avg_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method bslli_si128, addr 0x45350b4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 bslli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method bsrli_si128, addr 0x45350b8, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 bsrli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method clflush, addr 0x4537de4, size 0x4, virtual false, abstract: false, final false
  static inline void clflush(::cordl_internals::Ptr<void> ptr);

  /// @brief Method cmpeq_epi16, addr 0x4535fdc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_epi32, addr 0x4536050, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_epi8, addr 0x4535f68, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_pd, addr 0x45371a8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_sd, addr 0x4537040, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpge_pd, addr 0x4537238, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpge_sd, addr 0x4537094, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_epi16, addr 0x4536138, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_epi32, addr 0x45361ac, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_epi8, addr 0x45360c4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_pd, addr 0x4537214, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_sd, addr 0x453707c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmple_pd, addr 0x45371f0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmple_sd, addr 0x4537068, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_epi16, addr 0x453623c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_epi32, addr 0x4536258, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_epi8, addr 0x4536220, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_pd, addr 0x45371cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_sd, addr 0x4537054, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpneq_pd, addr 0x45373ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpneq_sd, addr 0x453713c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnge_pd, addr 0x453743c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnge_sd, addr 0x4537190, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpngt_pd, addr 0x4537418, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpngt_sd, addr 0x4537178, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnle_pd, addr 0x45373f4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnle_sd, addr 0x4537164, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnlt_pd, addr 0x45373d0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnlt_sd, addr 0x4537150, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpord_pd, addr 0x453725c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpord_sd, addr 0x45370ac, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpunord_pd, addr 0x4537308, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpunord_sd, addr 0x45370f4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comieq_sd, addr 0x4537460, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comieq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comige_sd, addr 0x45374b0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comige_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comigt_sd, addr 0x453749c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comigt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comile_sd, addr 0x4537488, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comile_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comilt_sd, addr 0x4537474, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comilt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comineq_sd, addr 0x45374c4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comineq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvtepi32_pd, addr 0x4536274, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi32_ps, addr 0x45362b0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtpd_epi32, addr 0x4537594, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtpd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtpd_ps, addr 0x4537550, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtpd_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtps_epi32, addr 0x453799c, size 0x294, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtps_pd, addr 0x4537574, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_f64, addr 0x45378d8, size 0x8, virtual false, abstract: false, final false
  static inline double_t cvtsd_f64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_si32, addr 0x4537704, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t cvtsd_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_si64, addr 0x45377e0, size 0xdc, virtual false, abstract: false, final false
  static inline int64_t cvtsd_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_si64x, addr 0x45378bc, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsd_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_ss, addr 0x45378c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvtsi128_si32, addr 0x4536300, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtsi128_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsi128_si64, addr 0x4536304, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsi128_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsi128_si64x, addr 0x4536308, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsi128_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsi32_sd, addr 0x453628c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_sd(::Unity::Burst::Intrinsics::v128 a, int32_t b);

  /// @brief Method cvtsi32_si128, addr 0x45362e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_si128(int32_t a);

  /// @brief Method cvtsi64_sd, addr 0x4536298, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_sd(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// @brief Method cvtsi64_si128, addr 0x45362f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_si128(int64_t a);

  /// @brief Method cvtsi64x_sd, addr 0x45362a4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_sd(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// @brief Method cvtsi64x_si128, addr 0x45362f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_si128(int64_t a);

  /// @brief Method cvtss_sd, addr 0x45378e0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtss_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvttpd_epi32, addr 0x45378fc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvttpd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttps_epi32, addr 0x4537c30, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvttps_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttsd_si32, addr 0x453793c, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvttsd_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttsd_si64, addr 0x453795c, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttsd_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttsd_si64x, addr 0x453797c, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttsd_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method div_pd, addr 0x4536c7c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method div_sd, addr 0x4536c68, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method extract_epi16, addr 0x4536770, size 0x48, virtual false, abstract: false, final false
  static inline uint16_t extract_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method get_IsSse2Supported, addr 0x45340ec, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse2Supported();

  /// @brief Method insert_epi16, addr 0x45367b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t i, int32_t imm8);

  /// @brief Method load_si128, addr 0x4537dc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 load_si128(::cordl_internals::Ptr<void> ptr);

  /// @brief Method loadu_si128, addr 0x4537dcc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si128(::cordl_internals::Ptr<void> ptr);

  /// @brief Method loadu_si32, addr 0x4537d64, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si32(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method madd_epi16, addr 0x4534544, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 madd_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epi16, addr 0x45345c8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epu8, addr 0x453469c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_pd, addr 0x4536d18, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_sd, addr 0x4536ca0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epi16, addr 0x4534770, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epu8, addr 0x4534844, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_pd, addr 0x4536e28, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_sd, addr 0x4536db0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method move_epi64, addr 0x4536570, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method move_sd, addr 0x4537d5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movemask_epi8, addr 0x4536804, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t movemask_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method movemask_pd, addr 0x4537cec, size 0x14, virtual false, abstract: false, final false
  static inline int32_t movemask_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mul_epu32, addr 0x4534a70, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mul_pd, addr 0x4536ed4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mul_sd, addr 0x4536ec0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mulhi_epi16, addr 0x4534918, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhi_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mulhi_epu16, addr 0x453498c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhi_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mullo_epi16, addr 0x4534a00, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mullo_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method or_pd, addr 0x4537028, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method or_si128, addr 0x4535f50, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method packs_epi16, addr 0x4536578, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method packs_epi32, addr 0x4536620, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packs_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method packus_epi16, addr 0x45366c8, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packus_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sad_epu8, addr 0x4534a7c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sad_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method set1_epi16, addr 0x45363fc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi16(int16_t a);

  /// @brief Method set1_epi32, addr 0x45363ec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi32(int32_t a);

  /// @brief Method set1_epi64x, addr 0x45363e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi64x(int64_t a);

  /// @brief Method set1_epi8, addr 0x4536450, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi8(int8_t a);

  /// @brief Method set1_pd, addr 0x4537ca8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_pd(double_t a);

  /// @brief Method set_epi16, addr 0x4536334, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0);

  /// @brief Method set_epi32, addr 0x453631c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// @brief Method set_epi64x, addr 0x453630c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi64x(int64_t e1, int64_t e0);

  /// @brief Method set_epi8, addr 0x4536368, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi8(int8_t e15_, int8_t e14_, int8_t e13_, int8_t e12_, int8_t e11_, int8_t e10_, int8_t e9_, int8_t e8_, int8_t e7_, int8_t e6_, int8_t e5_,
                                                          int8_t e4_, int8_t e3_, int8_t e2_, int8_t e1_, int8_t e0_);

  /// @brief Method set_pd, addr 0x4537cc0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_pd(double_t e1, double_t e0);

  /// @brief Method set_pd1, addr 0x4537cb4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_pd1(double_t a);

  /// @brief Method set_sd, addr 0x4537c9c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_sd(double_t a);

  /// @brief Method setr_epi16, addr 0x45364bc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0);

  /// @brief Method setr_epi32, addr 0x45364a4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// @brief Method setr_epi8, addr 0x45364ec, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi8(int8_t e15_, int8_t e14_, int8_t e13_, int8_t e12_, int8_t e11_, int8_t e10_, int8_t e9_, int8_t e8_, int8_t e7_, int8_t e6_, int8_t e5_,
                                                           int8_t e4_, int8_t e3_, int8_t e2_, int8_t e1_, int8_t e0_);

  /// @brief Method setr_pd, addr 0x4537ccc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_pd(double_t e1, double_t e0);

  /// @brief Method setzero_si128, addr 0x4536564, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setzero_si128();

  /// @brief Method shuffle_epi32, addr 0x4536870, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method shuffle_pd, addr 0x4537d00, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method shufflehi_epi16, addr 0x45368f0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shufflehi_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method shufflelo_epi16, addr 0x4536984, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shufflelo_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method sll_epi16, addr 0x4535264, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method sll_epi32, addr 0x453540c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method sll_epi64, addr 0x45355bc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method slli_epi16, addr 0x45351ec, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method slli_epi32, addr 0x4535338, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method slli_epi64, addr 0x45354e0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method slli_si128, addr 0x4534f84, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method sqrt_pd, addr 0x4536f64, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method sqrt_sd, addr 0x4536ef8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sra_epi16, addr 0x4535778, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sra_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method sra_epi32, addr 0x4535938, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sra_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srai_epi16, addr 0x4535698, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srai_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srai_epi32, addr 0x4535858, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srai_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srl_epi16, addr 0x4535afc, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srl_epi32, addr 0x4535cbc, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srl_epi64, addr 0x4535e68, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srli_epi16, addr 0x4535a1c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srli_epi32, addr 0x4535bdc, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srli_epi64, addr 0x4535d9c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srli_si128, addr 0x4535a18, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method store_si128, addr 0x4537dd4, size 0x8, virtual false, abstract: false, final false
  static inline void store_si128(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si128, addr 0x4537ddc, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si128(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si32, addr 0x4537dbc, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method stream_pd, addr 0x453410c, size 0x8, virtual false, abstract: false, final false
  static inline void stream_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method stream_si128, addr 0x4534114, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si128(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method stream_si32, addr 0x45340fc, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si32(::cordl_internals::Ptr<int32_t> mem_addr, int32_t a);

  /// @brief Method stream_si64, addr 0x4534104, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si64(::cordl_internals::Ptr<int64_t> mem_addr, int64_t a);

  /// @brief Method sub_epi16, addr 0x4534c40, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_epi32, addr 0x4534cb0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_epi64, addr 0x4534d20, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_epi8, addr 0x4534bd0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_pd, addr 0x4536fec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_sd, addr 0x4536fd8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method subs_epi16, addr 0x4534dec, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method subs_epi8, addr 0x4534d64, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method subs_epu16, addr 0x4534efc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method subs_epu8, addr 0x4534e74, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomieq_sd, addr 0x45374d8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomieq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomige_sd, addr 0x4537528, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomige_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomigt_sd, addr 0x4537514, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomigt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomile_sd, addr 0x4537500, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomile_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomilt_sd, addr 0x45374ec, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomilt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomineq_sd, addr 0x453753c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomineq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_epi16, addr 0x4536a94, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_epi32, addr 0x4536b10, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_epi64, addr 0x4536b24, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_epi8, addr 0x4536a18, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_pd, addr 0x4537cd8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_epi16, addr 0x4536ba4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_epi32, addr 0x4536c18, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_epi64, addr 0x4536c28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_epi8, addr 0x4536b30, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_pd, addr 0x4537ce4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method xor_pd, addr 0x4537034, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method xor_si128, addr 0x4535f5c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse2(X86_Sse2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse2(X86_Sse2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse2, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse3
class CORDL_TYPE X86_Sse3 : public ::System::Object {
public:
  // Declarations
  /// @brief Method addsub_pd, addr 0x4537e38, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 addsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method addsub_ps, addr 0x4537df0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 addsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSse3Supported, addr 0x4537de8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse3Supported();

  /// @brief Method hadd_pd, addr 0x4537e5c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hadd_ps, addr 0x4537e80, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsub_pd, addr 0x4537ec8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsub_ps, addr 0x4537eec, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movedup_pd, addr 0x4537f34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movedup_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method movehdup_ps, addr 0x4537f3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movehdup_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method moveldup_ps, addr 0x4537f48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 moveldup_ps(::Unity::Burst::Intrinsics::v128 a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse3(X86_Sse3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse3(X86_Sse3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14663 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse3, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_1
class CORDL_TYPE X86_Sse4_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method MK_INSERTPS_NDX, addr 0x4539930, size 0x10, virtual false, abstract: false, final false
  static inline int32_t MK_INSERTPS_NDX(int32_t srcField, int32_t dstField, int32_t zeroMask);

  /// @brief Method RoundDImpl, addr 0x4539308, size 0x200, virtual false, abstract: false, final false
  static inline double_t RoundDImpl(double_t d, int32_t roundingMode);

  /// @brief Method blend_epi16, addr 0x45381e0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method blend_pd, addr 0x4537f6c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method blend_ps, addr 0x4537fe8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method blendv_epi8, addr 0x4538164, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method blendv_pd, addr 0x4538064, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method blendv_ps, addr 0x45380e8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method ceil_pd, addr 0x4539584, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method ceil_ps, addr 0x453966c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method ceil_sd, addr 0x45396bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ceil_ss, addr 0x4539758, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_epi64, addr 0x4538dd0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvtepi16_epi32, addr 0x4538ee4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi16_epi64, addr 0x4538f44, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi32_epi64, addr 0x4538f84, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi8_epi16, addr 0x4538de4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi8_epi32, addr 0x4538e44, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi8_epi64, addr 0x4538ea4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu16_epi32, addr 0x45390c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu16_epi64, addr 0x4539124, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu32_epi64, addr 0x4539164, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu8_epi16, addr 0x4538fc4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu8_epi32, addr 0x4539024, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu8_epi64, addr 0x4539084, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method dp_pd, addr 0x453825c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 dp_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method dp_ps, addr 0x45382a4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 dp_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method extract_epi32, addr 0x453842c, size 0x48, virtual false, abstract: false, final false
  static inline int32_t extract_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method extract_epi64, addr 0x4538474, size 0x48, virtual false, abstract: false, final false
  static inline int64_t extract_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method extract_epi8, addr 0x45383e8, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t extract_epi8(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method extract_ps, addr 0x4538358, size 0x48, virtual false, abstract: false, final false
  static inline int32_t extract_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method extractf_ps, addr 0x45383a0, size 0x48, virtual false, abstract: false, final false
  static inline float_t extractf_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method floor_pd, addr 0x4539548, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method floor_ps, addr 0x4539664, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method floor_sd, addr 0x4539698, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method floor_ss, addr 0x453971c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSse41Supported, addr 0x4537f5c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse41Supported();

  /// @brief Method insert_epi32, addr 0x45385b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t i, int32_t imm8);

  /// @brief Method insert_epi64, addr 0x4538604, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi64(::Unity::Burst::Intrinsics::v128 a, int64_t i, int32_t imm8);

  /// @brief Method insert_epi8, addr 0x4538570, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi8(::Unity::Burst::Intrinsics::v128 a, uint8_t i, int32_t imm8);

  /// @brief Method insert_ps, addr 0x45384bc, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method max_epi32, addr 0x4538724, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epi8, addr 0x4538650, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epu16, addr 0x45388cc, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epu32, addr 0x45387f8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epi32, addr 0x4538a74, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epi8, addr 0x45389a0, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epu16, addr 0x4538c1c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epu32, addr 0x4538b48, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method minpos_epu16, addr 0x4539794, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 minpos_epu16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mpsadbw_epu8, addr 0x4539808, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mpsadbw_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mul_epi32, addr 0x45391a4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mullo_epi32, addr 0x45391b0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mullo_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method packus_epi32, addr 0x4538cf0, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packus_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method round_pd, addr 0x4539508, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_pd(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  /// @brief Method round_ps, addr 0x45395c0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_ps(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  /// @brief Method round_sd, addr 0x4539674, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t rounding);

  /// @brief Method round_ss, addr 0x45396e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t rounding);

  /// @brief Method stream_load_si128, addr 0x4537f64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 stream_load_si128(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method test_all_ones, addr 0x45392cc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t test_all_ones(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method test_all_zeros, addr 0x4539284, size 0x18, virtual false, abstract: false, final false
  static inline int32_t test_all_zeros(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method test_mix_ones_zeroes, addr 0x453929c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t test_mix_ones_zeroes(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method testc_si128, addr 0x4539238, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t testc_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testnzc_si128, addr 0x4539254, size 0x30, virtual false, abstract: false, final false
  static inline int32_t testnzc_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testz_si128, addr 0x4539220, size 0x18, virtual false, abstract: false, final false
  static inline int32_t testz_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse4_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse4_1(X86_Sse4_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse4_1(X86_Sse4_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14664 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse4_1, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
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
  constexpr operator __Sse4_2_X86_SIDD_Unwrapped() const noexcept {
    return static_cast<__Sse4_2_X86_SIDD_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sse4_2_X86_SIDD();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Sse4_2_X86_SIDD(int32_t value__) noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14665 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD, 0x4>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
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
  constexpr StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14666 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  uint16_t FixedElementField;

  /// @brief Size padding 0x20 - 0x2 = 0x1e, packed as 0x1e
  uint8_t _cordl_size_padding[0x1e];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer, 0x20>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies Unity.Burst.Intrinsics.X86::Sse4_2::StrBoolArray::<Bits>e__FixedBuffer
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct CORDL_TYPE Sse4_2_X86_StrBoolArray {
public:
  // Declarations
  using _Bits_e__FixedBuffer = ::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer;

  /// @brief Method GetBit, addr 0x453ad28, size 0x10, virtual false, abstract: false, final false
  inline bool GetBit(int32_t aindex, int32_t bindex);

  /// @brief Method SetBit, addr 0x453ad04, size 0x24, virtual false, abstract: false, final false
  inline void SetBit(int32_t aindex, int32_t bindex, bool val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sse4_2_X86_StrBoolArray();

  // Ctor Parameters [CppParam { name: "Bits", ty: "::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr Sse4_2_X86_StrBoolArray(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer Bits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14667 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Bits, offset: 0x0, size: 0x20, def value: None
  ::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer Bits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray, Bits) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray, 0x20>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
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
  __declspec(property(get = getStaticF_crctab, put = setStaticF_crctab)) ::ArrayW<uint32_t, ::Array<uint32_t>*> crctab;

  /// @brief Method ComputeStrCmpIntRes2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t ComputeStrCmpIntRes2(::cordl_internals::Ptr<T> a, int32_t alen, ::cordl_internals::Ptr<T> b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes);

  /// @brief Method ComputeStriOutput, addr 0x4539948, size 0x48, virtual false, abstract: false, final false
  static inline int32_t ComputeStriOutput(int32_t len, int32_t imm8, int32_t intRes2);

  /// @brief Method ComputeStringLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t ComputeStringLength(::cordl_internals::Ptr<T> ptr, int32_t max);

  /// @brief Method ComputeStrmOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Burst::Intrinsics::v128 ComputeStrmOutput(int32_t len, int32_t imm8, T allOnesT, int32_t intRes2);

  /// @brief Method cmpestra, addr 0x453a914, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t cmpestra(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrc, addr 0x453a5ac, size 0x1a8, virtual false, abstract: false, final false
  static inline int32_t cmpestrc(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestri, addr 0x4539e50, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t cmpestri(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline int32_t cmpestri_emulation(::cordl_internals::Ptr<T> a, int32_t alen, ::cordl_internals::Ptr<T> b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// @brief Method cmpestrm, addr 0x4539c90, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpestrm(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Burst::Intrinsics::v128 cmpestrm_emulation(::cordl_internals::Ptr<T> a, int32_t alen, ::cordl_internals::Ptr<T> b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes,
                                                                    T allOnesT);

  /// @brief Method cmpestro, addr 0x453a770, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t cmpestro(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrs, addr 0x453a754, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t cmpestrs(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrz, addr 0x453a590, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t cmpestrz(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpgt_epi64, addr 0x453a9d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi64(::Unity::Burst::Intrinsics::v128 val1, ::Unity::Burst::Intrinsics::v128 val2);

  /// @brief Method cmpistra, addr 0x453a4e8, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t cmpistra(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrc, addr 0x453a100, size 0xac, virtual false, abstract: false, final false
  static inline int32_t cmpistrc(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistri, addr 0x4539b10, size 0x180, virtual false, abstract: false, final false
  static inline int32_t cmpistri(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t cmpistri_emulation(::cordl_internals::Ptr<T> a, ::cordl_internals::Ptr<T> b, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// @brief Method cmpistrm, addr 0x4539990, size 0x180, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpistrm(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Burst::Intrinsics::v128 cmpistrm_emulation(::cordl_internals::Ptr<T> a, ::cordl_internals::Ptr<T> b, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// @brief Method cmpistro, addr 0x453a29c, size 0x24c, virtual false, abstract: false, final false
  static inline int32_t cmpistro(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrs, addr 0x453a1ac, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t cmpistrs(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrz, addr 0x453a010, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t cmpistrz(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method crc32_u16, addr 0x453aafc, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t crc32_u16(uint32_t crc, uint16_t v);

  /// @brief Method crc32_u32, addr 0x453a9ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t crc32_u32(uint32_t crc, uint32_t v);

  /// @brief Method crc32_u64, addr 0x453ab68, size 0x64, virtual false, abstract: false, final false
  static inline uint64_t crc32_u64(uint64_t crc_ul, int64_t v);

  /// @brief Method crc32_u64, addr 0x453abcc, size 0xa4, virtual false, abstract: false, final false
  static inline uint64_t crc32_u64(uint64_t crc_ul, uint64_t v);

  /// @brief Method crc32_u8, addr 0x453aa68, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t crc32_u8(uint32_t crc, uint8_t v);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_crctab();

  /// @brief Method get_IsSse42Supported, addr 0x4539940, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse42Supported();

  static inline void setStaticF_crctab(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse4_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse4_2(X86_Sse4_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse4_2(X86_Sse4_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Sse4_2, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Ssse3
class CORDL_TYPE X86_Ssse3 : public ::System::Object {
public:
  // Declarations
  /// @brief Method abs_epi16, addr 0x453adf8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method abs_epi32, addr 0x453aeb0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method abs_epi8, addr 0x453ad40, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method alignr_epi8, addr 0x453afe8, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 alignr_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t count);

  /// @brief Method get_IsSsse3Supported, addr 0x453ad38, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSsse3Supported();

  /// @brief Method hadd_epi16, addr 0x453b088, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hadd_epi32, addr 0x453b1c0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hadds_epi16, addr 0x453b114, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadds_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsub_epi16, addr 0x453b1ec, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsub_epi32, addr 0x453b324, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsubs_epi16, addr 0x453b278, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsubs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method maddubs_epi16, addr 0x453b350, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maddubs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mulhrs_epi16, addr 0x453b3ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhrs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method shuffle_epi8, addr 0x453af68, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sign_epi16, addr 0x453b4e8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sign_epi32, addr 0x453b568, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sign_epi8, addr 0x453b468, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Ssse3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Ssse3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Ssse3(X86_Ssse3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Ssse3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Ssse3(X86_Ssse3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14669 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86_Ssse3, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
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

  /// @brief Method BurstIntrinsicGetCSRFromManaged, addr 0x45299c0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t BurstIntrinsicGetCSRFromManaged();

  /// @brief Method BurstIntrinsicSetCSRFromManaged, addr 0x45299bc, size 0x4, virtual false, abstract: false, final false
  static inline void BurstIntrinsicSetCSRFromManaged(int32_t _);

  /// @brief Method DoGetCSRTrampoline, addr 0x45299d0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t DoGetCSRTrampoline();

  /// @brief Method DoSetCSRTrampoline, addr 0x45299dc, size 0x4, virtual false, abstract: false, final false
  static inline void DoSetCSRTrampoline(int32_t bits);

  /// @brief Method GenericCSharpLoad, addr 0x452990c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 GenericCSharpLoad(::cordl_internals::Ptr<void> ptr);

  /// @brief Method GenericCSharpStore, addr 0x4529918, size 0x8, virtual false, abstract: false, final false
  static inline void GenericCSharpStore(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method IsNaN, addr 0x4529994, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNaN(uint32_t v);

  /// @brief Method IsNaN, addr 0x45299a8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNaN(uint64_t v);

  /// @brief Method Saturate_To_Int16, addr 0x4529958, size 0x24, virtual false, abstract: false, final false
  static inline int16_t Saturate_To_Int16(int32_t val);

  /// @brief Method Saturate_To_Int8, addr 0x4529920, size 0x20, virtual false, abstract: false, final false
  static inline int8_t Saturate_To_Int8(int32_t val);

  /// @brief Method Saturate_To_UnsignedInt16, addr 0x452997c, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t Saturate_To_UnsignedInt16(int32_t val);

  /// @brief Method Saturate_To_UnsignedInt8, addr 0x4529940, size 0x18, virtual false, abstract: false, final false
  static inline uint8_t Saturate_To_UnsignedInt8(int32_t val);

  /// @brief Method get_MXCSR, addr 0x45299e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::X86_MXCSRBits get_MXCSR();

  /// @brief Method getcsr_raw, addr 0x45299c8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t getcsr_raw();

  /// @brief Method set_MXCSR, addr 0x45299f0, size 0x4, virtual false, abstract: false, final false
  static inline void set_MXCSR(::Unity::Burst::Intrinsics::X86_MXCSRBits value);

  /// @brief Method setcsr_raw, addr 0x45299d8, size 0x4, virtual false, abstract: false, final false
  static inline void setcsr_raw(int32_t bits);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86(X86&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86(X86 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
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
