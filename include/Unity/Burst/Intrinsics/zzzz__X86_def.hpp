#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/X86.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/Intrinsics/zzzz__X86_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X86)
namespace GlobalNamespace {
struct __X86__Avx__CMP;
}
namespace GlobalNamespace {
struct __X86__Fma__Union;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__SIDD;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__StrBoolArray;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer;
}
namespace System {
class IDisposable;
}
namespace Unity::Burst::Intrinsics {
class __X86__Avx2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Avx;
}
namespace Unity::Burst::Intrinsics {
class __X86__Bmi1;
}
namespace Unity::Burst::Intrinsics {
class __X86__Bmi2;
}
namespace Unity::Burst::Intrinsics {
class __X86__F16C;
}
namespace Unity::Burst::Intrinsics {
class __X86__Fma;
}
namespace Unity::Burst::Intrinsics {
struct __X86__MXCSRBits;
}
namespace Unity::Burst::Intrinsics {
class __X86__Popcnt;
}
namespace Unity::Burst::Intrinsics {
struct __X86__RoundingMode;
}
namespace Unity::Burst::Intrinsics {
struct __X86__RoundingScope;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse3;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse4_1;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse4_2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse;
}
namespace Unity::Burst::Intrinsics {
class __X86__Ssse3;
}
namespace Unity::Burst::Intrinsics {
struct v128;
}
namespace Unity::Burst::Intrinsics {
struct v256;
}
// Forward declare root types
namespace GlobalNamespace {
struct __X86__Avx__CMP;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__SIDD;
}
namespace Unity::Burst::Intrinsics {
struct __X86__MXCSRBits;
}
namespace Unity::Burst::Intrinsics {
struct __X86__RoundingMode;
}
namespace Unity::Burst::Intrinsics {
class X86;
}
namespace Unity::Burst::Intrinsics {
class __X86__Avx;
}
namespace Unity::Burst::Intrinsics {
class __X86__Avx2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Bmi1;
}
namespace Unity::Burst::Intrinsics {
class __X86__Bmi2;
}
namespace Unity::Burst::Intrinsics {
class __X86__F16C;
}
namespace Unity::Burst::Intrinsics {
class __X86__Fma;
}
namespace Unity::Burst::Intrinsics {
class __X86__Popcnt;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse3;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse4_1;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse4_2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Ssse3;
}
namespace GlobalNamespace {
struct __X86__Fma__Union;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__StrBoolArray;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer;
}
namespace Unity::Burst::Intrinsics {
struct __X86__RoundingScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__X86__Avx__CMP);
MARK_VAL_T(::GlobalNamespace::__X86__Sse4_2__SIDD);
MARK_VAL_T(::Unity::Burst::Intrinsics::__X86__MXCSRBits);
MARK_VAL_T(::Unity::Burst::Intrinsics::__X86__RoundingMode);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Avx);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Avx2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Bmi1);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Bmi2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__F16C);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Fma);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Popcnt);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse3);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse4_1);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse4_2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Ssse3);
MARK_VAL_T(::GlobalNamespace::__X86__Fma__Union);
MARK_VAL_T(::GlobalNamespace::__X86__Sse4_2__StrBoolArray);
MARK_VAL_T(::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer);
MARK_VAL_T(::Unity::Burst::Intrinsics::__X86__RoundingScope);
// Type: ::CMP
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Avx::CMP
struct CORDL_TYPE __X86__Avx__CMP {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____X86__Avx__CMP_Unwrapped
  enum struct ____X86__Avx__CMP_Unwrapped : int32_t {
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
  constexpr operator ____X86__Avx__CMP_Unwrapped() const noexcept {
    return static_cast<____X86__Avx__CMP_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Avx__CMP();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __X86__Avx__CMP(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EQ_OQ value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__X86__Avx__CMP const EQ_OQ;

  /// @brief Field EQ_OS value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__X86__Avx__CMP const EQ_OS;

  /// @brief Field EQ_UQ value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__X86__Avx__CMP const EQ_UQ;

  /// @brief Field EQ_US value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::__X86__Avx__CMP const EQ_US;

  /// @brief Field FALSE_OQ value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__X86__Avx__CMP const FALSE_OQ;

  /// @brief Field FALSE_OS value: static_cast<int32_t>(0x1b)
  static ::GlobalNamespace::__X86__Avx__CMP const FALSE_OS;

  /// @brief Field GE_OQ value: static_cast<int32_t>(0x1d)
  static ::GlobalNamespace::__X86__Avx__CMP const GE_OQ;

  /// @brief Field GE_OS value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__X86__Avx__CMP const GE_OS;

  /// @brief Field GT_OQ value: static_cast<int32_t>(0x1e)
  static ::GlobalNamespace::__X86__Avx__CMP const GT_OQ;

  /// @brief Field GT_OS value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__X86__Avx__CMP const GT_OS;

  /// @brief Field LE_OQ value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::__X86__Avx__CMP const LE_OQ;

  /// @brief Field LE_OS value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__X86__Avx__CMP const LE_OS;

  /// @brief Field LT_OQ value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::__X86__Avx__CMP const LT_OQ;

  /// @brief Field LT_OS value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__X86__Avx__CMP const LT_OS;

  /// @brief Field NEQ_OQ value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__X86__Avx__CMP const NEQ_OQ;

  /// @brief Field NEQ_OS value: static_cast<int32_t>(0x1c)
  static ::GlobalNamespace::__X86__Avx__CMP const NEQ_OS;

  /// @brief Field NEQ_UQ value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__X86__Avx__CMP const NEQ_UQ;

  /// @brief Field NEQ_US value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::__X86__Avx__CMP const NEQ_US;

  /// @brief Field NGE_UQ value: static_cast<int32_t>(0x19)
  static ::GlobalNamespace::__X86__Avx__CMP const NGE_UQ;

  /// @brief Field NGE_US value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__X86__Avx__CMP const NGE_US;

  /// @brief Field NGT_UQ value: static_cast<int32_t>(0x1a)
  static ::GlobalNamespace::__X86__Avx__CMP const NGT_UQ;

  /// @brief Field NGT_US value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__X86__Avx__CMP const NGT_US;

  /// @brief Field NLE_UQ value: static_cast<int32_t>(0x16)
  static ::GlobalNamespace::__X86__Avx__CMP const NLE_UQ;

  /// @brief Field NLE_US value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__X86__Avx__CMP const NLE_US;

  /// @brief Field NLT_UQ value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::__X86__Avx__CMP const NLT_UQ;

  /// @brief Field NLT_US value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__X86__Avx__CMP const NLT_US;

  /// @brief Field ORD_Q value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__X86__Avx__CMP const ORD_Q;

  /// @brief Field ORD_S value: static_cast<int32_t>(0x17)
  static ::GlobalNamespace::__X86__Avx__CMP const ORD_S;

  /// @brief Field TRUE_UQ value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__X86__Avx__CMP const TRUE_UQ;

  /// @brief Field TRUE_US value: static_cast<int32_t>(0x1f)
  static ::GlobalNamespace::__X86__Avx__CMP const TRUE_US;

  /// @brief Field UNORD_Q value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__X86__Avx__CMP const UNORD_Q;

  /// @brief Field UNORD_S value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__X86__Avx__CMP const UNORD_S;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Avx__CMP, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X86__Avx__CMP, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Avx
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Avx*
class CORDL_TYPE __X86__Avx : public ::System::Object {
public:
  // Declarations
  using CMP = ::GlobalNamespace::__X86__Avx__CMP;

  /// @brief Method Select4, addr 0x30c3c00, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 Select4(::Unity::Burst::Intrinsics::v256 src1, ::Unity::Burst::Intrinsics::v256 src2, int32_t control);

  /// @brief Method broadcast_ss, addr 0x30c3de8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcast_ss(::cordl_internals::Ptr<void> ptr);

  /// @brief Method cmp_pd, addr 0x30c2b5c, size 0x300, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmp_ps, addr 0x30c2ec0, size 0x27c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmp_sd, addr 0x30c3630, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmp_ss, addr 0x30c3648, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method get_IsAvxSupported, addr 0x30c1bac, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvxSupported();

  /// @brief Method maskload_pd, addr 0x30c3fc8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method maskload_ps, addr 0x30c40ac, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method maskstore_pd, addr 0x30c4044, size 0x1c, virtual false, abstract: false, final false
  static inline void maskstore_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method maskstore_ps, addr 0x30c414c, size 0x40, virtual false, abstract: false, final false
  static inline void maskstore_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_add_pd, addr 0x30c1bb4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_add_ps, addr 0x30c1c14, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_addsub_pd, addr 0x30c1cc8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_addsub_ps, addr 0x30c1d28, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_and_pd, addr 0x30c1d88, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_and_ps, addr 0x30c1de8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_andnot_pd, addr 0x30c1e0c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_andnot_ps, addr 0x30c1e6c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_blend_pd, addr 0x30c1ea8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_blend_ps, addr 0x30c1f18, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_blendv_pd, addr 0x30c1f88, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_blendv_ps, addr 0x30c1ff4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_broadcast_pd, addr 0x30c3e24, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_pd(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_broadcast_ps, addr 0x30c3e08, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_broadcast_sd, addr 0x30c3df8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_sd(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_broadcast_ss, addr 0x30c3ddc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ss(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_castpd128_pd256, addr 0x30c53b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd128_pd256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_castpd256_pd128, addr 0x30c5384, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castpd256_pd128(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castpd_ps, addr 0x30c5330, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castpd_si256, addr 0x30c5354, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_si256(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castps128_ps256, addr 0x30c539c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps128_ps256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_castps256_ps128, addr 0x30c5378, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castps256_ps128(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castps_pd, addr 0x30c533c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castps_si256, addr 0x30c5348, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_si256(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castsi128_si256, addr 0x30c53c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_castsi256_pd, addr 0x30c536c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castsi256_ps, addr 0x30c5360, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_castsi256_si128, addr 0x30c5390, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castsi256_si128(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_ceil_pd, addr 0x30c4584, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_pd(::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_ceil_ps, addr 0x30c46ac, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_ps(::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_cmp_pd, addr 0x30c2e5c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_cmp_ps, addr 0x30c35cc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_cvtepi32_pd, addr 0x30c3674, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi32_ps, addr 0x30c3698, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtpd_epi32, addr 0x30c37fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtpd_ps, addr 0x30c36e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtps_epi32, addr 0x30c3720, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtps_pd, addr 0x30c376c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtss_f32, addr 0x30c3884, size 0x8, virtual false, abstract: false, final false
  static inline float_t mm256_cvtss_f32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvttpd_epi32, addr 0x30c37a0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvttpd_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvttps_epi32, addr 0x30c3838, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvttps_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_div_pd, addr 0x30c2060, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_div_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_div_ps, addr 0x30c20c0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_div_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_dp_ps, addr 0x30c2174, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_dp_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_extract_epi32, addr 0x30c5584, size 0x10, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// @brief Method mm256_extract_epi64, addr 0x30c5594, size 0x10, virtual false, abstract: false, final false
  static inline int64_t mm256_extract_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// @brief Method mm256_extractf128_pd, addr 0x30c38b0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_extractf128_ps, addr 0x30c388c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_ps(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_extractf128_si256, addr 0x30c38d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_floor_pd, addr 0x30c45e8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_pd(::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_floor_ps, addr 0x30c4710, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_ps(::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_hadd_pd, addr 0x30c21e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hadd_ps, addr 0x30c2240, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsub_pd, addr 0x30c22a0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsub_ps, addr 0x30c2300, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_insert_epi16, addr 0x30c5488, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// @brief Method mm256_insert_epi32, addr 0x30c54dc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// @brief Method mm256_insert_epi64, addr 0x30c5530, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi64(::Unity::Burst::Intrinsics::v256 a, int64_t i, int32_t index);

  /// @brief Method mm256_insert_epi8, addr 0x30c5438, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi8(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// @brief Method mm256_insertf128_pd, addr 0x30c3e68, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mm256_insertf128_ps, addr 0x30c3e34, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mm256_insertf128_si256, addr 0x30c3e90, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mm256_lddqu_si256, addr 0x30c4224, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_lddqu_si256(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method mm256_load_pd, addr 0x30c3ed0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_pd(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_load_ps, addr 0x30c3eb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_load_si256, addr 0x30c3f18, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_si256(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_loadu2_m128, addr 0x30c3f48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr);

  /// @brief Method mm256_loadu2_m128d, addr 0x30c3f64, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128d(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr);

  /// @brief Method mm256_loadu2_m128i, addr 0x30c3f74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128i(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr);

  /// @brief Method mm256_loadu_pd, addr 0x30c3ee8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_pd(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_loadu_ps, addr 0x30c3f00, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_loadu_si256, addr 0x30c3f30, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_si256(::cordl_internals::Ptr<void> ptr);

  /// @brief Method mm256_maskload_pd, addr 0x30c3ff0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_maskload_ps, addr 0x30c40fc, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_maskstore_pd, addr 0x30c4060, size 0x4c, virtual false, abstract: false, final false
  static inline void mm256_maskstore_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_maskstore_ps, addr 0x30c418c, size 0x3c, virtual false, abstract: false, final false
  static inline void mm256_maskstore_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_max_pd, addr 0x30c2360, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_ps, addr 0x30c23c0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_pd, addr 0x30c2520, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_ps, addr 0x30c2580, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_movedup_pd, addr 0x30c4210, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_movedup_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_movehdup_ps, addr 0x30c41c8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_movehdup_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_moveldup_ps, addr 0x30c41ec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_moveldup_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_movemask_pd, addr 0x30c4eb4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_movemask_ps, addr 0x30c4eec, size 0x58, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_mul_pd, addr 0x30c26e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mul_ps, addr 0x30c2740, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_or_pd, addr 0x30c27f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_or_ps, addr 0x30c2854, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_permute2f128_pd, addr 0x30c3cd4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_permute2f128_ps, addr 0x30c3c50, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_permute2f128_si256, addr 0x30c3d58, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_permute_pd, addr 0x30c3b2c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_permute_ps, addr 0x30c39d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_ps(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_permutevar_pd, addr 0x30c3a90, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_permutevar_ps, addr 0x30c3974, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_rcp_ps, addr 0x30c4254, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_rcp_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_round_pd, addr 0x30c4524, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_round_pd(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  /// @brief Method mm256_round_ps, addr 0x30c464c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_round_ps(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  /// @brief Method mm256_rsqrt_ps, addr 0x30c42e4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_rsqrt_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_set1_epi16, addr 0x30c530c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi16(int16_t a);

  /// @brief Method mm256_set1_epi32, addr 0x30c5318, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi32(int32_t a);

  /// @brief Method mm256_set1_epi64x, addr 0x30c5324, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi64x(int64_t a);

  /// @brief Method mm256_set1_epi8, addr 0x30c52f4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi8(uint8_t a);

  /// @brief Method mm256_set1_pd, addr 0x30c52dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_pd(double_t a);

  /// @brief Method mm256_set1_ps, addr 0x30c52e8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_ps(float_t a);

  /// @brief Method mm256_set_epi16, addr 0x30c5094, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi16(int16_t e15_, int16_t e14_, int16_t e13_, int16_t e12_, int16_t e11_, int16_t e10_, int16_t e9_, int16_t e8_, int16_t e7_, int16_t e6_,
                                                                 int16_t e5_, int16_t e4_, int16_t e3_, int16_t e2_, int16_t e1_, int16_t e0_);

  /// @brief Method mm256_set_epi32, addr 0x30c50f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi32(int32_t e7, int32_t e6, int32_t e5, int32_t e4, int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// @brief Method mm256_set_epi64x, addr 0x30c510c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi64x(int64_t e3, int64_t e2, int64_t e1, int64_t e0);

  /// @brief Method mm256_set_epi8, addr 0x30c4fb0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi8(uint8_t e31_, uint8_t e30_, uint8_t e29_, uint8_t e28_, uint8_t e27_, uint8_t e26_, uint8_t e25_, uint8_t e24_, uint8_t e23_,
                                                                uint8_t e22_, uint8_t e21_, uint8_t e20_, uint8_t e19_, uint8_t e18_, uint8_t e17_, uint8_t e16_, uint8_t e15_, uint8_t e14_,
                                                                uint8_t e13_, uint8_t e12_, uint8_t e11_, uint8_t e10_, uint8_t e9_, uint8_t e8_, uint8_t e7_, uint8_t e6_, uint8_t e5_, uint8_t e4_,
                                                                uint8_t e3_, uint8_t e2_, uint8_t e1_, uint8_t e0_);

  /// @brief Method mm256_set_m128, addr 0x30c3f58, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_set_m128d, addr 0x30c5118, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128d(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_set_m128i, addr 0x30c5124, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128i(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_set_pd, addr 0x30c4f90, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_pd(double_t d, double_t c, double_t b, double_t a);

  /// @brief Method mm256_set_ps, addr 0x30c4f9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_ps(float_t e7, float_t e6, float_t e5, float_t e4, float_t e3, float_t e2, float_t e1, float_t e0);

  /// @brief Method mm256_setr_epi16, addr 0x30c5234, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi16(int16_t e15_, int16_t e14_, int16_t e13_, int16_t e12_, int16_t e11_, int16_t e10_, int16_t e9_, int16_t e8_, int16_t e7_,
                                                                  int16_t e6_, int16_t e5_, int16_t e4_, int16_t e3_, int16_t e2_, int16_t e1_, int16_t e0_);

  /// @brief Method mm256_setr_epi32, addr 0x30c5298, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi32(int32_t e7, int32_t e6, int32_t e5, int32_t e4, int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// @brief Method mm256_setr_epi64x, addr 0x30c52ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi64x(int64_t e3, int64_t e2, int64_t e1, int64_t e0);

  /// @brief Method mm256_setr_epi8, addr 0x30c5150, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi8(uint8_t e31_, uint8_t e30_, uint8_t e29_, uint8_t e28_, uint8_t e27_, uint8_t e26_, uint8_t e25_, uint8_t e24_, uint8_t e23_,
                                                                 uint8_t e22_, uint8_t e21_, uint8_t e20_, uint8_t e19_, uint8_t e18_, uint8_t e17_, uint8_t e16_, uint8_t e15_, uint8_t e14_,
                                                                 uint8_t e13_, uint8_t e12_, uint8_t e11_, uint8_t e10_, uint8_t e9_, uint8_t e8_, uint8_t e7_, uint8_t e6_, uint8_t e5_, uint8_t e4_,
                                                                 uint8_t e3_, uint8_t e2_, uint8_t e1_, uint8_t e0_);

  /// @brief Method mm256_setr_m128, addr 0x30c52b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_setr_m128d, addr 0x30c52c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128d(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_setr_m128i, addr 0x30c52d0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128i(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// @brief Method mm256_setr_pd, addr 0x30c5130, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_pd(double_t d, double_t c, double_t b, double_t a);

  /// @brief Method mm256_setr_ps, addr 0x30c513c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_ps(float_t e7, float_t e6, float_t e5, float_t e4, float_t e3, float_t e2, float_t e1, float_t e0);

  /// @brief Method mm256_setzero_pd, addr 0x30c4f6c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_pd();

  /// @brief Method mm256_setzero_ps, addr 0x30c4f78, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_ps();

  /// @brief Method mm256_setzero_si256, addr 0x30c4f84, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_si256();

  /// @brief Method mm256_shuffle_pd, addr 0x30c2878, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_shuffle_ps, addr 0x30c28e8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_sqrt_pd, addr 0x30c43e8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_pd(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_sqrt_ps, addr 0x30c4434, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_ps(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_store_pd, addr 0x30c3edc, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_pd(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_store_ps, addr 0x30c3ec4, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_ps(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_store_si256, addr 0x30c3f24, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_si256(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 v);

  /// @brief Method mm256_storeu2_m128, addr 0x30c3f84, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_storeu2_m128d, addr 0x30c3fa0, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128d(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_storeu2_m128i, addr 0x30c3fb4, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128i(::cordl_internals::Ptr<void> hiaddr, ::cordl_internals::Ptr<void> loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// @brief Method mm256_storeu_pd, addr 0x30c3ef4, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_pd(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_storeu_ps, addr 0x30c3f0c, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_ps(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_storeu_si256, addr 0x30c3f3c, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_si256(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v256 v);

  /// @brief Method mm256_stream_pd, addr 0x30c423c, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_stream_ps, addr 0x30c4248, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_stream_si256, addr 0x30c4230, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_si256(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_sub_pd, addr 0x30c29c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sub_ps, addr 0x30c2a24, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testc_pd, addr 0x30c4a1c, size 0x34, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testc_ps, addr 0x30c4c80, size 0x34, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testc_si256, addr 0x30c490c, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testnzc_pd, addr 0x30c4a50, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testnzc_ps, addr 0x30c4cb4, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testnzc_si256, addr 0x30c4958, size 0x94, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testz_pd, addr 0x30c49ec, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testz_ps, addr 0x30c4c50, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_testz_si256, addr 0x30c48c0, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_undefined_pd, addr 0x30c53fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_pd();

  /// @brief Method mm256_undefined_ps, addr 0x30c53f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_ps();

  /// @brief Method mm256_undefined_si256, addr 0x30c5408, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_si256();

  /// @brief Method mm256_unpackhi_pd, addr 0x30c4774, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_ps, addr 0x30c4834, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_pd, addr 0x30c47d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_ps, addr 0x30c487c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_xor_pd, addr 0x30c2ad8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_xor_ps, addr 0x30c2b38, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_zeroall, addr 0x30c38f8, size 0x4, virtual false, abstract: false, final false
  static inline void mm256_zeroall();

  /// @brief Method mm256_zeroupper, addr 0x30c38fc, size 0x4, virtual false, abstract: false, final false
  static inline void mm256_zeroupper();

  /// @brief Method mm256_zextpd128_pd256, addr 0x30c5420, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextpd128_pd256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_zextps128_ps256, addr 0x30c5414, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextps128_ps256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_zextsi128_si256, addr 0x30c542c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method permute_pd, addr 0x30c3bac, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permute_pd(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method permute_ps, addr 0x30c39cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permute_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method permutevar_pd, addr 0x30c3a34, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permutevar_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method permutevar_ps, addr 0x30c3900, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permutevar_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testc_pd, addr 0x30c4b88, size 0x74, virtual false, abstract: false, final false
  static inline int32_t testc_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testc_ps, addr 0x30c4dec, size 0x74, virtual false, abstract: false, final false
  static inline int32_t testc_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testnzc_pd, addr 0x30c4bfc, size 0x54, virtual false, abstract: false, final false
  static inline int32_t testnzc_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testnzc_ps, addr 0x30c4e60, size 0x54, virtual false, abstract: false, final false
  static inline int32_t testnzc_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testz_pd, addr 0x30c4b18, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testz_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testz_ps, addr 0x30c4d7c, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testz_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method undefined_pd, addr 0x30c53d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_pd();

  /// @brief Method undefined_ps, addr 0x30c53cc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_ps();

  /// @brief Method undefined_si128, addr 0x30c53e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_si128();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Avx();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Avx", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Avx(__X86__Avx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Avx", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Avx(__X86__Avx const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Avx, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Avx2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Avx2*
class CORDL_TYPE __X86__Avx2 : public ::System::Object {
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

  /// @brief Method blend_epi32, addr 0x30c7b08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method broadcastb_epi8, addr 0x30c8338, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastb_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastd_epi32, addr 0x30c8368, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastq_epi64, addr 0x30c8374, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastq_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastsd_pd, addr 0x30c8324, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastsd_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastss_ps, addr 0x30c830c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastss_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method broadcastw_epi16, addr 0x30c834c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastw_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method get_IsAvx2Supported, addr 0x30c55a4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvx2Supported();

  /// @brief Method i32gather_epi32, addr 0x30c95c0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi32(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i32gather_epi64, addr 0x30c9660, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi64(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i32gather_pd, addr 0x30c9130, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_pd(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i32gather_ps, addr 0x30c91d0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_ps(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i64gather_epi32, addr 0x30c9700, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi32(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i64gather_epi64, addr 0x30c97a0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi64(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i64gather_pd, addr 0x30c9270, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_pd(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method i64gather_ps, addr 0x30c9310, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_ps(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method mask_i32gather_epi32, addr 0x30ca11c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi32(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i32gather_epi64, addr 0x30ca1d0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi64(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i32gather_pd, addr 0x30c9e50, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_pd(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i32gather_ps, addr 0x30c9f04, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_ps(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i64gather_epi32, addr 0x30ca284, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i64gather_epi64, addr 0x30ca334, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi64(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i64gather_pd, addr 0x30c9fb8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_pd(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mask_i64gather_ps, addr 0x30ca06c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_ps(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method maskload_epi32, addr 0x30c88a4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_epi32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method maskload_epi64, addr 0x30c890c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_epi64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method maskstore_epi32, addr 0x30c8974, size 0x64, virtual false, abstract: false, final false
  static inline void maskstore_epi32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method maskstore_epi64, addr 0x30c89d8, size 0x64, virtual false, abstract: false, final false
  static inline void maskstore_epi64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_abs_epi16, addr 0x30c5fac, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi16(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_abs_epi32, addr 0x30c5ff8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_abs_epi8, addr 0x30c5f60, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi8(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_add_epi16, addr 0x30c60a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_add_epi32, addr 0x30c6104, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_add_epi64, addr 0x30c6164, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_add_epi8, addr 0x30c6044, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_adds_epi16, addr 0x30c6224, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_adds_epi8, addr 0x30c61c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_adds_epu16, addr 0x30c62e4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_adds_epu8, addr 0x30c6284, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_alignr_epi8, addr 0x30c7b7c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_alignr_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_and_si256, addr 0x30c5de0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_andnot_si256, addr 0x30c5e40, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_avg_epu16, addr 0x30c66a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_avg_epu8, addr 0x30c6644, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_blend_epi16, addr 0x30c7c54, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_blend_epi32, addr 0x30c7b10, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_blendv_epi8, addr 0x30c7be8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_broadcastb_epi8, addr 0x30c837c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastb_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastd_epi32, addr 0x30c83a0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastq_epi64, addr 0x30c83ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastq_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastsd_pd, addr 0x30c832c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsd_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastsi128_si256, addr 0x30c83b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastss_ps, addr 0x30c8318, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastss_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_broadcastw_epi16, addr 0x30c8394, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastw_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_bslli_epi128, addr 0x30c6ef4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_bslli_epi128(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_bsrli_epi128, addr 0x30c6fb4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_bsrli_epi128(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_cmpeq_epi16, addr 0x30c5674, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpeq_epi32, addr 0x30c56d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpeq_epi64, addr 0x30c5734, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpeq_epi8, addr 0x30c5614, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpgt_epi16, addr 0x30c57f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpgt_epi32, addr 0x30c5854, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpgt_epi64, addr 0x30c58b4, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cmpgt_epi8, addr 0x30c5794, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_cvtepi16_epi32, addr 0x30c84fc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi16_epi64, addr 0x30c8564, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi32_epi64, addr 0x30c85cc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi8_epi16, addr 0x30c83c4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi8_epi32, addr 0x30c842c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepi8_epi64, addr 0x30c8494, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu16_epi32, addr 0x30c876c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu16_epi64, addr 0x30c87d4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu32_epi64, addr 0x30c883c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu8_epi16, addr 0x30c8634, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu8_epi32, addr 0x30c869c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtepu8_epi64, addr 0x30c8704, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtsd_f64, addr 0x30c55fc, size 0x8, virtual false, abstract: false, final false
  static inline double_t mm256_cvtsd_f64(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtsi256_si32, addr 0x30c5604, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mm256_cvtsi256_si32(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_cvtsi256_si64, addr 0x30c560c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mm256_cvtsi256_si64(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_extract_epi16, addr 0x30c55ec, size 0x10, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// @brief Method mm256_extract_epi8, addr 0x30c55e0, size 0xc, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi8(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// @brief Method mm256_extracti128_si256, addr 0x30c82c0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extracti128_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_hadd_epi16, addr 0x30c6704, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hadd_epi32, addr 0x30c6764, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hadds_epi16, addr 0x30c67c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadds_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsub_epi16, addr 0x30c6824, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsub_epi32, addr 0x30c6884, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_hsubs_epi16, addr 0x30c68e4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsubs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_i32gather_epi32, addr 0x30c8db8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi32(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i32gather_epi64, addr 0x30c93b0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi64(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method mm256_i32gather_pd, addr 0x30c8e6c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_pd(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// @brief Method mm256_i32gather_ps, addr 0x30c8f20, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_ps(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i64gather_epi32, addr 0x30c9464, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_epi32(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i64gather_epi64, addr 0x30c950c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_epi64(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i64gather_pd, addr 0x30c8fd4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_pd(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_i64gather_ps, addr 0x30c9088, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_ps(::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// @brief Method mm256_inserti128_si256, addr 0x30c82e4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_inserti128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mm256_madd_epi16, addr 0x30c6944, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_madd_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_maddubs_epi16, addr 0x30c69a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maddubs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mask_i32gather_epi32, addr 0x30c9b48, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi32(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i32gather_epi64, addr 0x30c9c0c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi64(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i32gather_pd, addr 0x30c9840, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_pd(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i32gather_ps, addr 0x30c9904, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_ps(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i64gather_epi32, addr 0x30c9d94, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mm256_mask_i64gather_epi64, addr 0x30c9cd0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_epi64(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i64gather_pd, addr 0x30c99c8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_pd(::Unity::Burst::Intrinsics::v256 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// @brief Method mm256_mask_i64gather_ps, addr 0x30c9a8c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_ps(::Unity::Burst::Intrinsics::v128 src, ::cordl_internals::Ptr<void> base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// @brief Method mm256_maskload_epi32, addr 0x30c8a3c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_maskload_epi64, addr 0x30c8aa4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// @brief Method mm256_maskstore_epi32, addr 0x30c8b0c, size 0x24, virtual false, abstract: false, final false
  static inline void mm256_maskstore_epi32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_maskstore_epi64, addr 0x30c8b30, size 0x24, virtual false, abstract: false, final false
  static inline void mm256_maskstore_epi64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_max_epi16, addr 0x30c59c0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epi32, addr 0x30c5a20, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epi8, addr 0x30c5960, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epu16, addr 0x30c5ae0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epu32, addr 0x30c5b40, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_max_epu8, addr 0x30c5a80, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epi16, addr 0x30c5c00, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epi32, addr 0x30c5c60, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epi8, addr 0x30c5ba0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epu16, addr 0x30c5d20, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epu32, addr 0x30c5d80, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_min_epu8, addr 0x30c5cc0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_movemask_epi8, addr 0x30c55ac, size 0x34, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_epi8(::Unity::Burst::Intrinsics::v256 a);

  /// @brief Method mm256_mpsadbw_epu8, addr 0x30c6e24, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mpsadbw_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_mul_epi32, addr 0x30c6be4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mul_epu32, addr 0x30c6b84, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mulhi_epi16, addr 0x30c6a04, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mulhi_epu16, addr 0x30c6a64, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mulhrs_epi16, addr 0x30c6d64, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhrs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mullo_epi16, addr 0x30c6ac4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_mullo_epi32, addr 0x30c6b24, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_or_si256, addr 0x30c5ea0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_packs_epi16, addr 0x30c7cc0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_packs_epi32, addr 0x30c7d20, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_packus_epi16, addr 0x30c7d80, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_packus_epi32, addr 0x30c7de0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_permute2x128_si256, addr 0x30c8d28, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2x128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// @brief Method mm256_permute4x64_epi64, addr 0x30c8c44, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_permute4x64_pd, addr 0x30c8cb0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_permutevar8x32_epi32, addr 0x30c8b54, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 idx);

  /// @brief Method mm256_permutevar8x32_ps, addr 0x30c8bc0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 idx);

  /// @brief Method mm256_sad_epu8, addr 0x30c6dc4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sad_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_shuffle_epi32, addr 0x30c81a0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_shuffle_epi8, addr 0x30c8140, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_shufflehi_epi16, addr 0x30c8200, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflehi_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_shufflelo_epi16, addr 0x30c8260, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflelo_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_sign_epi16, addr 0x30c6ca4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sign_epi32, addr 0x30c6d04, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sign_epi8, addr 0x30c6c44, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sll_epi16, addr 0x30c7014, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_sll_epi32, addr 0x30c7080, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_sll_epi64, addr 0x30c70ec, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_slli_epi16, addr 0x30c7158, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_slli_epi32, addr 0x30c71b8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_slli_epi64, addr 0x30c7218, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_slli_si256, addr 0x30c6e94, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_sllv_epi32, addr 0x30c7278, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_sllv_epi64, addr 0x30c7350, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_sra_epi16, addr 0x30c7420, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_sra_epi32, addr 0x30c748c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_srai_epi16, addr 0x30c74f8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srai_epi32, addr 0x30c7558, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srav_epi32, addr 0x30c75b8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srav_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_srl_epi16, addr 0x30c76fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_srl_epi32, addr 0x30c7768, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_srl_epi64, addr 0x30c77d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method mm256_srli_epi16, addr 0x30c7840, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srli_epi32, addr 0x30c78a0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srli_epi64, addr 0x30c7900, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srli_si256, addr 0x30c6f54, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// @brief Method mm256_srlv_epi32, addr 0x30c7960, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_srlv_epi64, addr 0x30c7a38, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// @brief Method mm256_stream_load_si256, addr 0x30c8dac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_stream_load_si256(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method mm256_sub_epi16, addr 0x30c63a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sub_epi32, addr 0x30c6404, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sub_epi64, addr 0x30c6464, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_sub_epi8, addr 0x30c6344, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_subs_epi16, addr 0x30c6524, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_subs_epi8, addr 0x30c64c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_subs_epu16, addr 0x30c65e4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_subs_epu8, addr 0x30c6584, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_epi16, addr 0x30c7ea0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_epi32, addr 0x30c7f00, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_epi64, addr 0x30c7f60, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpackhi_epi8, addr 0x30c7e40, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_epi16, addr 0x30c8020, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_epi32, addr 0x30c8080, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_epi64, addr 0x30c80e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_unpacklo_epi8, addr 0x30c7fc0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method mm256_xor_si256, addr 0x30c5f00, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// @brief Method sllv_epi32, addr 0x30c72d0, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sllv_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method sllv_epi64, addr 0x30c73a8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sllv_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srav_epi32, addr 0x30c7610, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srav_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srlv_epi32, addr 0x30c79b8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srlv_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srlv_epi64, addr 0x30c7a90, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srlv_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Avx2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Avx2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Avx2(__X86__Avx2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Avx2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Avx2(__X86__Avx2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Avx2, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Bmi1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Bmi1*
class CORDL_TYPE __X86__Bmi1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method andn_u32, addr 0x30ca3f0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t andn_u32(uint32_t a, uint32_t b);

  /// @brief Method andn_u64, addr 0x30ca3f8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t andn_u64(uint64_t a, uint64_t b);

  /// @brief Method bextr2_u32, addr 0x30ca460, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t bextr2_u32(uint32_t a, uint32_t control);

  /// @brief Method bextr2_u64, addr 0x30ca494, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t bextr2_u64(uint64_t a, uint64_t control);

  /// @brief Method bextr_u32, addr 0x30ca400, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t bextr_u32(uint32_t a, uint32_t start, uint32_t len);

  /// @brief Method bextr_u64, addr 0x30ca430, size 0x30, virtual false, abstract: false, final false
  static inline uint64_t bextr_u64(uint64_t a, uint32_t start, uint32_t len);

  /// @brief Method blsi_u32, addr 0x30ca4c8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsi_u32(uint32_t a);

  /// @brief Method blsi_u64, addr 0x30ca4d4, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsi_u64(uint64_t a);

  /// @brief Method blsmsk_u32, addr 0x30ca4e0, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsmsk_u32(uint32_t a);

  /// @brief Method blsmsk_u64, addr 0x30ca4ec, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsmsk_u64(uint64_t a);

  /// @brief Method blsr_u32, addr 0x30ca4f8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsr_u32(uint32_t a);

  /// @brief Method blsr_u64, addr 0x30ca504, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsr_u64(uint64_t a);

  /// @brief Method get_IsBmi1Supported, addr 0x30ca3e8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsBmi1Supported();

  /// @brief Method tzcnt_u32, addr 0x30ca510, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t tzcnt_u32(uint32_t a);

  /// @brief Method tzcnt_u64, addr 0x30ca568, size 0x64, virtual false, abstract: false, final false
  static inline uint64_t tzcnt_u64(uint64_t a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Bmi1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Bmi1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Bmi1(__X86__Bmi1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Bmi1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Bmi1(__X86__Bmi1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Bmi1, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Bmi2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Bmi2*
class CORDL_TYPE __X86__Bmi2 : public ::System::Object {
public:
  // Declarations
  /// @brief Method bzhi_u32, addr 0x30ca5d4, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t bzhi_u32(uint32_t a, uint32_t index);

  /// @brief Method bzhi_u64, addr 0x30ca5f0, size 0x1c, virtual false, abstract: false, final false
  static inline uint64_t bzhi_u64(uint64_t a, uint64_t index);

  /// @brief Method get_IsBmi2Supported, addr 0x30ca5cc, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsBmi2Supported();

  /// @brief Method mulx_u32, addr 0x30ca60c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t mulx_u32(uint32_t a, uint32_t b, ByRef<uint32_t> hi);

  /// @brief Method mulx_u64, addr 0x30ca61c, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t mulx_u64(uint64_t a, uint64_t b, ByRef<uint64_t> hi);

  /// @brief Method pdep_u32, addr 0x30ca658, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t pdep_u32(uint32_t a, uint32_t mask);

  /// @brief Method pdep_u64, addr 0x30ca69c, size 0x44, virtual false, abstract: false, final false
  static inline uint64_t pdep_u64(uint64_t a, uint64_t mask);

  /// @brief Method pext_u32, addr 0x30ca6e0, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t pext_u32(uint32_t a, uint32_t mask);

  /// @brief Method pext_u64, addr 0x30ca724, size 0x44, virtual false, abstract: false, final false
  static inline uint64_t pext_u64(uint64_t a, uint64_t mask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Bmi2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Bmi2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Bmi2(__X86__Bmi2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Bmi2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Bmi2(__X86__Bmi2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Bmi2, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::MXCSRBits
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::X86::MXCSRBits
struct CORDL_TYPE __X86__MXCSRBits {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____X86__MXCSRBits_Unwrapped
  enum struct ____X86__MXCSRBits_Unwrapped : int32_t {
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
  constexpr operator ____X86__MXCSRBits_Unwrapped() const noexcept {
    return static_cast<____X86__MXCSRBits_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__MXCSRBits();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __X86__MXCSRBits(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DenormalFlag value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DenormalFlag;

  /// @brief Field DenormalOperationMask value: static_cast<int32_t>(0x100)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DenormalOperationMask;

  /// @brief Field DenormalsAreZeroes value: static_cast<int32_t>(0x40)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DenormalsAreZeroes;

  /// @brief Field DivideByZeroFlag value: static_cast<int32_t>(0x4)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DivideByZeroFlag;

  /// @brief Field DivideByZeroMask value: static_cast<int32_t>(0x200)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DivideByZeroMask;

  /// @brief Field ExceptionMask value: static_cast<int32_t>(0x1f80)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const ExceptionMask;

  /// @brief Field FlagMask value: static_cast<int32_t>(0x3f)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const FlagMask;

  /// @brief Field FlushToZero value: static_cast<int32_t>(0x8000)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const FlushToZero;

  /// @brief Field InvalidOperationFlag value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const InvalidOperationFlag;

  /// @brief Field InvalidOperationMask value: static_cast<int32_t>(0x80)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const InvalidOperationMask;

  /// @brief Field OverflowFlag value: static_cast<int32_t>(0x8)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const OverflowFlag;

  /// @brief Field OverflowMask value: static_cast<int32_t>(0x400)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const OverflowMask;

  /// @brief Field PrecisionFlag value: static_cast<int32_t>(0x20)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const PrecisionFlag;

  /// @brief Field PrecisionMask value: static_cast<int32_t>(0x1000)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const PrecisionMask;

  /// @brief Field RoundDown value: static_cast<int32_t>(0x2000)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundDown;

  /// @brief Field RoundToNearest value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundToNearest;

  /// @brief Field RoundTowardZero value: static_cast<int32_t>(0x6000)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundTowardZero;

  /// @brief Field RoundUp value: static_cast<int32_t>(0x4000)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundUp;

  /// @brief Field RoundingControlMask value: static_cast<int32_t>(0x6000)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundingControlMask;

  /// @brief Field UnderflowFlag value: static_cast<int32_t>(0x10)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const UnderflowFlag;

  /// @brief Field UnderflowMask value: static_cast<int32_t>(0x800)
  static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const UnderflowMask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__MXCSRBits, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::Intrinsics::__X86__MXCSRBits, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::RoundingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::X86::RoundingMode
struct CORDL_TYPE __X86__RoundingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____X86__RoundingMode_Unwrapped
  enum struct ____X86__RoundingMode_Unwrapped : int32_t {
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
  constexpr operator ____X86__RoundingMode_Unwrapped() const noexcept {
    return static_cast<____X86__RoundingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__RoundingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __X86__RoundingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FROUND_CEIL value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_CEIL;

  /// @brief Field FROUND_CEIL_NOEXC value: static_cast<int32_t>(0xa)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_CEIL_NOEXC;

  /// @brief Field FROUND_CUR_DIRECTION value: static_cast<int32_t>(0x4)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_CUR_DIRECTION;

  /// @brief Field FROUND_FLOOR value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_FLOOR;

  /// @brief Field FROUND_FLOOR_NOEXC value: static_cast<int32_t>(0x9)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_FLOOR_NOEXC;

  /// @brief Field FROUND_NEARBYINT value: static_cast<int32_t>(0xc)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_NEARBYINT;

  /// @brief Field FROUND_NINT value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_NINT;

  /// @brief Field FROUND_NINT_NOEXC value: static_cast<int32_t>(0x8)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_NINT_NOEXC;

  /// @brief Field FROUND_NO_EXC value: static_cast<int32_t>(0x8)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_NO_EXC;

  /// @brief Field FROUND_RAISE_EXC value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_RAISE_EXC;

  /// @brief Field FROUND_RINT value: static_cast<int32_t>(0x4)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_RINT;

  /// @brief Field FROUND_RINT_NOEXC value: static_cast<int32_t>(0xc)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_RINT_NOEXC;

  /// @brief Field FROUND_TO_NEAREST_INT value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TO_NEAREST_INT;

  /// @brief Field FROUND_TO_NEG_INF value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TO_NEG_INF;

  /// @brief Field FROUND_TO_POS_INF value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TO_POS_INF;

  /// @brief Field FROUND_TO_ZERO value: static_cast<int32_t>(0x3)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TO_ZERO;

  /// @brief Field FROUND_TRUNC value: static_cast<int32_t>(0x3)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TRUNC;

  /// @brief Field FROUND_TRUNC_NOEXC value: static_cast<int32_t>(0xb)
  static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TRUNC_NOEXC;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__RoundingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::Intrinsics::__X86__RoundingMode, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::RoundingScope
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::X86::RoundingScope
struct CORDL_TYPE __X86__RoundingScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x30ca770, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x30ca768, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::Intrinsics::__X86__MXCSRBits roundingMode);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__RoundingScope();

  // Ctor Parameters [CppParam { name: "OldBits", ty: "::Unity::Burst::Intrinsics::__X86__MXCSRBits", modifiers: "", def_value: None }]
  constexpr __X86__RoundingScope(::Unity::Burst::Intrinsics::__X86__MXCSRBits OldBits) noexcept;

  /// @brief Field OldBits, offset: 0x0, size: 0x4, def value: None
  ::Unity::Burst::Intrinsics::__X86__MXCSRBits OldBits;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__RoundingScope, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::Intrinsics::__X86__RoundingScope, OldBits) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::F16C
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::F16C*
class CORDL_TYPE __X86__F16C : public ::System::Object {
public:
  // Declarations
  /// @brief Field BaseTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BaseTable, put = setStaticF_BaseTable))::ArrayW<uint16_t, ::Array<uint16_t>*> BaseTable;

  /// @brief Field ShiftTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ShiftTable, put = setStaticF_ShiftTable))::ArrayW<int8_t, ::Array<int8_t>*> ShiftTable;

  /// @brief Method FloatToHalf, addr 0x30ca970, size 0x1d0, virtual false, abstract: false, final false
  static inline uint16_t FloatToHalf(uint32_t f, int32_t rounding);

  /// @brief Method HalfToFloat, addr 0x30ca77c, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t HalfToFloat(uint16_t h);

  /// @brief Method cvtph_ps, addr 0x30ca7d8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtph_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtps_ph, addr 0x30cab40, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_ph(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  static inline ::ArrayW<uint16_t, ::Array<uint16_t>*> getStaticF_BaseTable();

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_ShiftTable();

  /// @brief Method get_IsF16CSupported, addr 0x30ca774, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsF16CSupported();

  /// @brief Method mm256_cvtph_ps, addr 0x30ca87c, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtph_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mm256_cvtps_ph, addr 0x30cac14, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtps_ph(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  static inline void setStaticF_BaseTable(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  static inline void setStaticF_ShiftTable(::ArrayW<int8_t, ::Array<int8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__F16C();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__F16C", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__F16C(__X86__F16C&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__F16C", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__F16C(__X86__F16C const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__F16C, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Union
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Fma::Union
struct CORDL_TYPE __X86__Fma__Union {
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
  constexpr __X86__Fma__Union();

  // Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "u", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __X86__Fma__Union(float_t f, uint32_t u) noexcept;

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
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Fma__Union, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Fma
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Fma*
class CORDL_TYPE __X86__Fma : public ::System::Object {
public:
  // Declarations
  using Union = ::GlobalNamespace::__X86__Fma__Union;

  /// @brief Method FmaHelper, addr 0x30cae4c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t FmaHelper(float_t a, float_t b, float_t c);

  /// @brief Method FnmaHelper, addr 0x30cae68, size 0x1c, virtual false, abstract: false, final false
  static inline float_t FnmaHelper(float_t a, float_t b, float_t c);

  /// @brief Method fmadd_pd, addr 0x30cae84, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmadd_ps, addr 0x30caf24, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmadd_sd, addr 0x30cb080, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmadd_ss, addr 0x30cb0d0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmaddsub_pd, addr 0x30cb104, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmaddsub_ps, addr 0x30cb1a4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsub_pd, addr 0x30cb330, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsub_ps, addr 0x30cb3d0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsub_sd, addr 0x30cb4ec, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsub_ss, addr 0x30cb53c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsubadd_pd, addr 0x30cb570, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fmsubadd_ps, addr 0x30cb610, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmadd_pd, addr 0x30cb78c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmadd_ps, addr 0x30cb82c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmadd_sd, addr 0x30cb948, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmadd_ss, addr 0x30cb998, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmsub_pd, addr 0x30cb9cc, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmsub_ps, addr 0x30cba6c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmsub_sd, addr 0x30cbb90, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method fnmsub_ss, addr 0x30cbbe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method get_IsFmaSupported, addr 0x30cae44, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsFmaSupported();

  /// @brief Method mm256_fmadd_pd, addr 0x30caed4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmadd_ps, addr 0x30cafe8, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmaddsub_pd, addr 0x30cb154, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmaddsub_ps, addr 0x30cb268, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmsub_pd, addr 0x30cb380, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmsub_ps, addr 0x30cb454, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmsubadd_pd, addr 0x30cb5c0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fmsubadd_ps, addr 0x30cb6d4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fnmadd_pd, addr 0x30cb7dc, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fnmadd_ps, addr 0x30cb8b0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fnmsub_pd, addr 0x30cba1c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// @brief Method mm256_fnmsub_ps, addr 0x30cbaf8, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Fma();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Fma", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Fma(__X86__Fma&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Fma", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Fma(__X86__Fma const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Fma, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Popcnt
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Popcnt*
class CORDL_TYPE __X86__Popcnt : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_IsPopcntSupported, addr 0x30cbc18, size 0x50, virtual false, abstract: false, final false
  static inline bool get_IsPopcntSupported();

  /// @brief Method popcnt_u32, addr 0x30cbc68, size 0x20, virtual false, abstract: false, final false
  static inline int32_t popcnt_u32(uint32_t v);

  /// @brief Method popcnt_u64, addr 0x30cbc88, size 0x20, virtual false, abstract: false, final false
  static inline int32_t popcnt_u64(uint64_t v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Popcnt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Popcnt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Popcnt(__X86__Popcnt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Popcnt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Popcnt(__X86__Popcnt const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Popcnt, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Sse
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse*
class CORDL_TYPE __X86__Sse : public ::System::Object {
public:
  // Declarations
  /// @brief Method SHUFFLE, addr 0x30cc37c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t SHUFFLE(int32_t d, int32_t c, int32_t b, int32_t a);

  /// @brief Method TRANSPOSE4_PS, addr 0x30cc3a0, size 0x100, virtual false, abstract: false, final false
  static inline void TRANSPOSE4_PS(ByRef<::Unity::Burst::Intrinsics::v128> row0, ByRef<::Unity::Burst::Intrinsics::v128> row1, ByRef<::Unity::Burst::Intrinsics::v128> row2,
                                   ByRef<::Unity::Burst::Intrinsics::v128> row3);

  /// @brief Method add_ps, addr 0x30c1c6c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_ss, addr 0x30cbcec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method and_ps, addr 0x30c1e00, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method andnot_ps, addr 0x30c1e84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_ps, addr 0x30c313c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_ss, addr 0x30cbf90, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpge_ps, addr 0x30c3594, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpge_ss, addr 0x30cc014, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_ps, addr 0x30c35b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_ss, addr 0x30cbff0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmple_ps, addr 0x30c325c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmple_ss, addr 0x30cbfd0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_ps, addr 0x30c31cc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_ss, addr 0x30cbfb0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpneq_ps, addr 0x30c334c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpneq_ss, addr 0x30cc038, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnge_ps, addr 0x30c355c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnge_ss, addr 0x30cc0bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpngt_ps, addr 0x30c3578, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpngt_ss, addr 0x30cc098, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnle_ps, addr 0x30c346c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnle_ss, addr 0x30cc078, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnlt_ps, addr 0x30c33dc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnlt_ss, addr 0x30cc058, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpord_ps, addr 0x30c34fc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpord_ss, addr 0x30cc0e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpunord_ps, addr 0x30c32ec, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpunord_ss, addr 0x30cc11c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comieq_ss, addr 0x30cc158, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comieq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comige_ss, addr 0x30cc1a8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comige_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comigt_ss, addr 0x30cc194, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comigt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comile_ss, addr 0x30cc180, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comile_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comilt_ss, addr 0x30cc16c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comilt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comineq_ss, addr 0x30cc1bc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comineq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvt_ss2si, addr 0x30cc268, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvt_ss2si(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsi32_ss, addr 0x30cbcc4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_ss(::Unity::Burst::Intrinsics::v128 a, int32_t b);

  /// @brief Method cvtsi64_ss, addr 0x30cbcd8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_ss(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// @brief Method cvtss_f32, addr 0x30cc2a8, size 0x8, virtual false, abstract: false, final false
  static inline float_t cvtss_f32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtss_si32, addr 0x30cc248, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvtss_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtss_si64, addr 0x30cc288, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvtss_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtt_ss2si, addr 0x30cc2d0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvtt_ss2si(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttss_si32, addr 0x30cc2b0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvttss_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttss_si64, addr 0x30cc2f0, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttss_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method div_ps, addr 0x30c2118, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method div_ss, addr 0x30cbd40, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSseSupported, addr 0x30c1b98, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSseSupported();

  /// @brief Method load_ps, addr 0x30cbca8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 load_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method loadu_ps, addr 0x30c3e18, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_ps(::cordl_internals::Ptr<void> ptr);

  /// @brief Method loadu_si16, addr 0x30cc4a0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si16(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method loadu_si64, addr 0x30cc4b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si64(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method max_ps, addr 0x30c2418, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_ss, addr 0x30cbf04, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_ps, addr 0x30c25d8, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_ss, addr 0x30cbe78, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method move_ss, addr 0x30cc374, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movehl_ps, addr 0x30cc390, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movehl_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movelh_ps, addr 0x30cc398, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movelh_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movemask_ps, addr 0x30c4f44, size 0x28, virtual false, abstract: false, final false
  static inline int32_t movemask_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mul_ps, addr 0x30c2798, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mul_ss, addr 0x30cbd24, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method or_ps, addr 0x30c286c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method rcp_ps, addr 0x30c429c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rcp_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method rcp_ss, addr 0x30cbdd8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rcp_ss(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method rsqrt_ps, addr 0x30c4328, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method rsqrt_ss, addr 0x30cbdf4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ss(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method set1_ps, addr 0x30cc31c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_ps(float_t a);

  /// @brief Method set_ps, addr 0x30cc33c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ps(float_t e3, float_t e2, float_t e1, float_t e0);

  /// @brief Method set_ps1, addr 0x30cc32c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ps1(float_t a);

  /// @brief Method set_ss, addr 0x30cc310, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ss(float_t a);

  /// @brief Method setr_ps, addr 0x30cc358, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_ps(float_t e3, float_t e2, float_t e1, float_t e0);

  /// @brief Method setzero_ps, addr 0x30c53a8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setzero_ps();

  /// @brief Method shuffle_ps, addr 0x30c294c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method sqrt_ps, addr 0x30c4478, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method sqrt_ss, addr 0x30cbd5c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_ss(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method store_ps, addr 0x30cbcb4, size 0x8, virtual false, abstract: false, final false
  static inline void store_ps(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_ps, addr 0x30c3f98, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_ps(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si16, addr 0x30cc4ac, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si16(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method storeu_si64, addr 0x30cc4c0, size 0x1008, virtual false, abstract: false, final false
  static inline void storeu_si64(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method stream_ps, addr 0x30cbcbc, size 0x8, virtual false, abstract: false, final false
  static inline void stream_ps(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method sub_ps, addr 0x30c2a7c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_ss, addr 0x30cbd08, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomieq_ss, addr 0x30cc1d0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomieq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomige_ss, addr 0x30cc220, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomige_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomigt_ss, addr 0x30cc20c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomigt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomile_ss, addr 0x30cc1f8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomile_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomilt_ss, addr 0x30cc1e4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomilt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomineq_ss, addr 0x30cc234, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomineq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_ps, addr 0x30c4868, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_ps, addr 0x30c48b0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method xor_ps, addr 0x30c2b50, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Sse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Sse(__X86__Sse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Sse(__X86__Sse const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Sse2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse2*
class CORDL_TYPE __X86__Sse2 : public ::System::Object {
public:
  // Declarations
  /// @brief Method SHUFFLE2, addr 0x30cd4d0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t SHUFFLE2(int32_t x, int32_t y);

  /// @brief Method add_epi16, addr 0x30cd568, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_epi32, addr 0x30cd5d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_epi64, addr 0x30cd604, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_epi8, addr 0x30cd4f8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_pd, addr 0x30cfffc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method add_sd, addr 0x30cffe8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method adds_epi16, addr 0x30cd698, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method adds_epi8, addr 0x30cd610, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method adds_epu16, addr 0x30cd7a8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method adds_epu8, addr 0x30cd720, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method and_pd, addr 0x30d0418, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method and_si128, addr 0x30cf2e8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method andnot_pd, addr 0x30d0424, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method andnot_si128, addr 0x30cf2f4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method avg_epu16, addr 0x30cd8a8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 avg_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method avg_epu8, addr 0x30cd830, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 avg_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method bslli_si128, addr 0x30ce468, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 bslli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method bsrli_si128, addr 0x30ce46c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 bsrli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method clflush, addr 0x30d1198, size 0x4, virtual false, abstract: false, final false
  static inline void clflush(::cordl_internals::Ptr<void> ptr);

  /// @brief Method cmpeq_epi16, addr 0x30cf38c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_epi32, addr 0x30cf400, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_epi8, addr 0x30cf318, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_pd, addr 0x30d05b0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_sd, addr 0x30d0448, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpge_pd, addr 0x30d0640, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpge_sd, addr 0x30d049c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_epi16, addr 0x30cf4e8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_epi32, addr 0x30cf55c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_epi8, addr 0x30cf474, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_pd, addr 0x30d061c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpgt_sd, addr 0x30d0484, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmple_pd, addr 0x30d05f8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmple_sd, addr 0x30d0470, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_epi16, addr 0x30cf5ec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_epi32, addr 0x30cf608, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_epi8, addr 0x30cf5d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_pd, addr 0x30d05d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmplt_sd, addr 0x30d045c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpneq_pd, addr 0x30d074c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpneq_sd, addr 0x30d0544, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnge_pd, addr 0x30d07dc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnge_sd, addr 0x30d0598, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpngt_pd, addr 0x30d07b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpngt_sd, addr 0x30d0580, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnle_pd, addr 0x30d0794, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnle_sd, addr 0x30d056c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnlt_pd, addr 0x30d0770, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpnlt_sd, addr 0x30d0558, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpord_pd, addr 0x30d0664, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpord_sd, addr 0x30d04b4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpunord_pd, addr 0x30d06dc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpunord_sd, addr 0x30d04fc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comieq_sd, addr 0x30d0800, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comieq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comige_sd, addr 0x30d0850, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comige_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comigt_sd, addr 0x30d083c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comigt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comile_sd, addr 0x30d0828, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comile_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comilt_sd, addr 0x30d0814, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comilt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method comineq_sd, addr 0x30d0864, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comineq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvtepi32_pd, addr 0x30cf624, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi32_ps, addr 0x30cf660, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtpd_epi32, addr 0x30d0934, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtpd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtpd_ps, addr 0x30d08f0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtpd_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtps_epi32, addr 0x30d0d50, size 0x294, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtps_pd, addr 0x30d0914, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_f64, addr 0x30d0c8c, size 0x8, virtual false, abstract: false, final false
  static inline double_t cvtsd_f64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_si32, addr 0x30d0ab8, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t cvtsd_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_si64, addr 0x30d0b94, size 0xdc, virtual false, abstract: false, final false
  static inline int64_t cvtsd_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_si64x, addr 0x30d0c70, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsd_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsd_ss, addr 0x30d0c74, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvtsi128_si32, addr 0x30cf6b0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtsi128_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsi128_si64, addr 0x30cf6b4, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsi128_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsi128_si64x, addr 0x30cf6b8, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsi128_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtsi32_sd, addr 0x30cf63c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_sd(::Unity::Burst::Intrinsics::v128 a, int32_t b);

  /// @brief Method cvtsi32_si128, addr 0x30cf694, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_si128(int32_t a);

  /// @brief Method cvtsi64_sd, addr 0x30cf648, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_sd(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// @brief Method cvtsi64_si128, addr 0x30cf6a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_si128(int64_t a);

  /// @brief Method cvtsi64x_sd, addr 0x30cf654, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_sd(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// @brief Method cvtsi64x_si128, addr 0x30cf6a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_si128(int64_t a);

  /// @brief Method cvtss_sd, addr 0x30d0c94, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtss_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvttpd_epi32, addr 0x30d0cb0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvttpd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttps_epi32, addr 0x30d0fe4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvttps_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttsd_si32, addr 0x30d0cf0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvttsd_si32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttsd_si64, addr 0x30d0d10, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttsd_si64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvttsd_si64x, addr 0x30d0d30, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttsd_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method div_pd, addr 0x30d0034, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method div_sd, addr 0x30d0020, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method extract_epi16, addr 0x30cfb20, size 0x48, virtual false, abstract: false, final false
  static inline uint16_t extract_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method get_IsSse2Supported, addr 0x30cd4c8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse2Supported();

  /// @brief Method insert_epi16, addr 0x30cfb68, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t i, int32_t imm8);

  /// @brief Method load_si128, addr 0x30d1178, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 load_si128(::cordl_internals::Ptr<void> ptr);

  /// @brief Method loadu_si128, addr 0x30d1180, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si128(::cordl_internals::Ptr<void> ptr);

  /// @brief Method loadu_si32, addr 0x30d1118, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si32(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method madd_epi16, addr 0x30cd920, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 madd_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epi16, addr 0x30cd9a4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epu8, addr 0x30cda78, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_pd, addr 0x30d00e0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_sd, addr 0x30d0058, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epi16, addr 0x30cdb4c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epu8, addr 0x30cdc20, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_pd, addr 0x30d0210, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_sd, addr 0x30d0188, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method move_epi64, addr 0x30cf920, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method move_sd, addr 0x30d1110, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movemask_epi8, addr 0x30cfbb4, size 0x68, virtual false, abstract: false, final false
  static inline int32_t movemask_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method movemask_pd, addr 0x30d10a0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t movemask_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mul_epu32, addr 0x30cde4c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mul_pd, addr 0x30d02cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mul_sd, addr 0x30d02b8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mulhi_epi16, addr 0x30cdcf4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhi_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mulhi_epu16, addr 0x30cdd68, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhi_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mullo_epi16, addr 0x30cdddc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mullo_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method or_pd, addr 0x30d0430, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method or_si128, addr 0x30cf300, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method packs_epi16, addr 0x30cf928, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method packs_epi32, addr 0x30cf9d0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packs_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method packus_epi16, addr 0x30cfa78, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packus_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sad_epu8, addr 0x30cde68, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sad_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method set1_epi16, addr 0x30cf7ac, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi16(int16_t a);

  /// @brief Method set1_epi32, addr 0x30cf79c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi32(int32_t a);

  /// @brief Method set1_epi64x, addr 0x30cf794, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi64x(int64_t a);

  /// @brief Method set1_epi8, addr 0x30cf800, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi8(int8_t a);

  /// @brief Method set1_pd, addr 0x30d105c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_pd(double_t a);

  /// @brief Method set_epi16, addr 0x30cf6e4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0);

  /// @brief Method set_epi32, addr 0x30cf6cc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// @brief Method set_epi64x, addr 0x30cf6bc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi64x(int64_t e1, int64_t e0);

  /// @brief Method set_epi8, addr 0x30cf718, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi8(int8_t e15_, int8_t e14_, int8_t e13_, int8_t e12_, int8_t e11_, int8_t e10_, int8_t e9_, int8_t e8_, int8_t e7_, int8_t e6_, int8_t e5_,
                                                          int8_t e4_, int8_t e3_, int8_t e2_, int8_t e1_, int8_t e0_);

  /// @brief Method set_pd, addr 0x30d1074, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_pd(double_t e1, double_t e0);

  /// @brief Method set_pd1, addr 0x30d1068, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_pd1(double_t a);

  /// @brief Method set_sd, addr 0x30d1050, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_sd(double_t a);

  /// @brief Method setr_epi16, addr 0x30cf86c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0);

  /// @brief Method setr_epi32, addr 0x30cf854, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// @brief Method setr_epi8, addr 0x30cf89c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi8(int8_t e15_, int8_t e14_, int8_t e13_, int8_t e12_, int8_t e11_, int8_t e10_, int8_t e9_, int8_t e8_, int8_t e7_, int8_t e6_, int8_t e5_,
                                                           int8_t e4_, int8_t e3_, int8_t e2_, int8_t e1_, int8_t e0_);

  /// @brief Method setr_pd, addr 0x30d1080, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_pd(double_t e1, double_t e0);

  /// @brief Method setzero_si128, addr 0x30cf914, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setzero_si128();

  /// @brief Method shuffle_epi32, addr 0x30cfc1c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method shuffle_pd, addr 0x30d10b4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method shufflehi_epi16, addr 0x30cfca0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shufflehi_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method shufflelo_epi16, addr 0x30cfd38, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shufflelo_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method sll_epi16, addr 0x30ce5d4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method sll_epi32, addr 0x30ce77c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method sll_epi64, addr 0x30ce924, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method slli_epi16, addr 0x30ce55c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method slli_epi32, addr 0x30ce6a8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method slli_epi64, addr 0x30ce850, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method slli_si128, addr 0x30ce378, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method sqrt_pd, addr 0x30d0364, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method sqrt_sd, addr 0x30d02f0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sra_epi16, addr 0x30ceadc, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sra_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method sra_epi32, addr 0x30ceca4, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sra_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srai_epi16, addr 0x30ce9f8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srai_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srai_epi32, addr 0x30cebc0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srai_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srl_epi16, addr 0x30cee70, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srl_epi32, addr 0x30cf038, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srl_epi64, addr 0x30cf200, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// @brief Method srli_epi16, addr 0x30ced8c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srli_epi32, addr 0x30cef54, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srli_epi64, addr 0x30cf11c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method srli_si128, addr 0x30ced88, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method store_si128, addr 0x30d1188, size 0x8, virtual false, abstract: false, final false
  static inline void store_si128(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si128, addr 0x30d1190, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si128(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si32, addr 0x30d1170, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si32(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method stream_pd, addr 0x30cd4e8, size 0x8, virtual false, abstract: false, final false
  static inline void stream_pd(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method stream_si128, addr 0x30cd4f0, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si128(::cordl_internals::Ptr<void> mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method stream_si32, addr 0x30cd4d8, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si32(::cordl_internals::Ptr<int32_t> mem_addr, int32_t a);

  /// @brief Method stream_si64, addr 0x30cd4e0, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si64(::cordl_internals::Ptr<int64_t> mem_addr, int64_t a);

  /// @brief Method sub_epi16, addr 0x30ce008, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_epi32, addr 0x30ce078, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_epi64, addr 0x30ce0e8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_epi8, addr 0x30cdf98, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_pd, addr 0x30d03f4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sub_sd, addr 0x30d03e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method subs_epi16, addr 0x30ce1e0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method subs_epi8, addr 0x30ce158, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method subs_epu16, addr 0x30ce2f0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method subs_epu8, addr 0x30ce268, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomieq_sd, addr 0x30d0878, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomieq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomige_sd, addr 0x30d08c8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomige_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomigt_sd, addr 0x30d08b4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomigt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomile_sd, addr 0x30d08a0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomile_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomilt_sd, addr 0x30d088c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomilt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ucomineq_sd, addr 0x30d08dc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomineq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_epi16, addr 0x30cfe4c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_epi32, addr 0x30cfec8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_epi64, addr 0x30cfedc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_epi8, addr 0x30cfdd0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpackhi_pd, addr 0x30d108c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_epi16, addr 0x30cff5c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_epi32, addr 0x30cffd0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_epi64, addr 0x30cffe0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_epi8, addr 0x30cfee8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method unpacklo_pd, addr 0x30d1098, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method xor_pd, addr 0x30d043c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method xor_si128, addr 0x30cf30c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Sse2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Sse2(__X86__Sse2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Sse2(__X86__Sse2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse2, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Sse3
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse3*
class CORDL_TYPE __X86__Sse3 : public ::System::Object {
public:
  // Declarations
  /// @brief Method addsub_pd, addr 0x30d1200, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 addsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method addsub_ps, addr 0x30d11a4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 addsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSse3Supported, addr 0x30d119c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse3Supported();

  /// @brief Method hadd_pd, addr 0x30d1224, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hadd_ps, addr 0x30d1248, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsub_pd, addr 0x30d12a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsub_ps, addr 0x30d12c8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method movedup_pd, addr 0x30d1324, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movedup_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method movehdup_ps, addr 0x30d132c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movehdup_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method moveldup_ps, addr 0x30d1338, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 moveldup_ps(::Unity::Burst::Intrinsics::v128 a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Sse3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Sse3(__X86__Sse3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Sse3(__X86__Sse3 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse3, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Sse4_1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse4_1*
class CORDL_TYPE __X86__Sse4_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method MK_INSERTPS_NDX, addr 0x30d2ce0, size 0x10, virtual false, abstract: false, final false
  static inline int32_t MK_INSERTPS_NDX(int32_t srcField, int32_t dstField, int32_t zeroMask);

  /// @brief Method RoundDImpl, addr 0x30d26d8, size 0x1e0, virtual false, abstract: false, final false
  static inline double_t RoundDImpl(double_t d, int32_t roundingMode);

  /// @brief Method blend_epi16, addr 0x30d15c8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method blend_pd, addr 0x30d1354, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method blend_ps, addr 0x30d13d4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method blendv_epi8, addr 0x30d154c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method blendv_pd, addr 0x30d1454, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method blendv_ps, addr 0x30d14d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method ceil_pd, addr 0x30d2934, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method ceil_ps, addr 0x30d2a1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method ceil_sd, addr 0x30d2a6c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method ceil_ss, addr 0x30d2b08, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cmpeq_epi64, addr 0x30d21b0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method cvtepi16_epi32, addr 0x30d22c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi16_epi64, addr 0x30d2324, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi32_epi64, addr 0x30d2364, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi8_epi16, addr 0x30d21c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi8_epi32, addr 0x30d2224, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepi8_epi64, addr 0x30d2284, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu16_epi32, addr 0x30d24a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu16_epi64, addr 0x30d2504, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu32_epi64, addr 0x30d2544, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu8_epi16, addr 0x30d23a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu8_epi32, addr 0x30d2404, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method cvtepu8_epi64, addr 0x30d2464, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method dp_pd, addr 0x30d1648, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 dp_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method dp_ps, addr 0x30d168c, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 dp_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method extract_epi32, addr 0x30d1838, size 0x48, virtual false, abstract: false, final false
  static inline int32_t extract_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method extract_epi64, addr 0x30d1880, size 0x48, virtual false, abstract: false, final false
  static inline int64_t extract_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method extract_epi8, addr 0x30d17f4, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t extract_epi8(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method extract_ps, addr 0x30d1764, size 0x48, virtual false, abstract: false, final false
  static inline int32_t extract_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method extractf_ps, addr 0x30d17ac, size 0x48, virtual false, abstract: false, final false
  static inline float_t extractf_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method floor_pd, addr 0x30d28f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_pd(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method floor_ps, addr 0x30d2a14, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_ps(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method floor_sd, addr 0x30d2a48, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method floor_ss, addr 0x30d2acc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSse41Supported, addr 0x30d1344, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse41Supported();

  /// @brief Method insert_epi32, addr 0x30d1998, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t i, int32_t imm8);

  /// @brief Method insert_epi64, addr 0x30d19e4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi64(::Unity::Burst::Intrinsics::v128 a, int64_t i, int32_t imm8);

  /// @brief Method insert_epi8, addr 0x30d1950, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi8(::Unity::Burst::Intrinsics::v128 a, uint8_t i, int32_t imm8);

  /// @brief Method insert_ps, addr 0x30d18c8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method max_epi32, addr 0x30d1b04, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epi8, addr 0x30d1a30, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epu16, addr 0x30d1cac, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method max_epu32, addr 0x30d1bd8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epi32, addr 0x30d1e54, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epi8, addr 0x30d1d80, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epu16, addr 0x30d1ffc, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method min_epu32, addr 0x30d1f28, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method minpos_epu16, addr 0x30d2b44, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 minpos_epu16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method mpsadbw_epu8, addr 0x30d2bb8, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mpsadbw_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method mul_epi32, addr 0x30d2584, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mullo_epi32, addr 0x30d25a0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mullo_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method packus_epi32, addr 0x30d20d0, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packus_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method round_pd, addr 0x30d28b8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_pd(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  /// @brief Method round_ps, addr 0x30d2970, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_ps(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  /// @brief Method round_sd, addr 0x30d2a24, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t rounding);

  /// @brief Method round_ss, addr 0x30d2a90, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t rounding);

  /// @brief Method stream_load_si128, addr 0x30d134c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 stream_load_si128(::cordl_internals::Ptr<void> mem_addr);

  /// @brief Method test_all_ones, addr 0x30d2698, size 0x40, virtual false, abstract: false, final false
  static inline int32_t test_all_ones(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method test_all_zeros, addr 0x30d2680, size 0x14, virtual false, abstract: false, final false
  static inline int32_t test_all_zeros(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method test_mix_ones_zeroes, addr 0x30d2694, size 0x4, virtual false, abstract: false, final false
  static inline int32_t test_mix_ones_zeroes(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 mask);

  /// @brief Method testc_si128, addr 0x30d262c, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t testc_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testnzc_si128, addr 0x30d2648, size 0x38, virtual false, abstract: false, final false
  static inline int32_t testnzc_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method testz_si128, addr 0x30d2610, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t testz_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Sse4_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse4_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Sse4_1(__X86__Sse4_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse4_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Sse4_1(__X86__Sse4_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse4_1, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::SIDD
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Sse4_2::SIDD
struct CORDL_TYPE __X86__Sse4_2__SIDD {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____X86__Sse4_2__SIDD_Unwrapped
  enum struct ____X86__Sse4_2__SIDD_Unwrapped : int32_t {
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
  constexpr operator ____X86__Sse4_2__SIDD_Unwrapped() const noexcept {
    return static_cast<____X86__Sse4_2__SIDD_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Sse4_2__SIDD();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __X86__Sse4_2__SIDD(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BIT_MASK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const BIT_MASK;

  /// @brief Field CMP_EQUAL_ANY value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const CMP_EQUAL_ANY;

  /// @brief Field CMP_EQUAL_EACH value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const CMP_EQUAL_EACH;

  /// @brief Field CMP_EQUAL_ORDERED value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const CMP_EQUAL_ORDERED;

  /// @brief Field CMP_RANGES value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const CMP_RANGES;

  /// @brief Field LEAST_SIGNIFICANT value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const LEAST_SIGNIFICANT;

  /// @brief Field MASKED_NEGATIVE_POLARITY value: static_cast<int32_t>(0x30)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const MASKED_NEGATIVE_POLARITY;

  /// @brief Field MASKED_POSITIVE_POLARITY value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const MASKED_POSITIVE_POLARITY;

  /// @brief Field MOST_SIGNIFICANT value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const MOST_SIGNIFICANT;

  /// @brief Field NEGATIVE_POLARITY value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const NEGATIVE_POLARITY;

  /// @brief Field POSITIVE_POLARITY value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const POSITIVE_POLARITY;

  /// @brief Field SBYTE_OPS value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const SBYTE_OPS;

  /// @brief Field SWORD_OPS value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const SWORD_OPS;

  /// @brief Field UBYTE_OPS value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const UBYTE_OPS;

  /// @brief Field UNIT_MASK value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const UNIT_MASK;

  /// @brief Field UWORD_OPS value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__X86__Sse4_2__SIDD const UWORD_OPS;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Sse4_2__SIDD, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X86__Sse4_2__SIDD, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Bits>e__FixedBuffer
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Sse4_2::StrBoolArray::<Bits>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  uint16_t FixedElementField;

  /// @brief Size padding 0x20 - 0x2 = 0x1e, packed as 0x1e
  uint8_t _cordl_size_padding[0x1e];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StrBoolArray
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Sse4_2::StrBoolArray
struct CORDL_TYPE __X86__Sse4_2__StrBoolArray {
public:
  // Declarations
  using _Bits_e__FixedBuffer = ::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer;

  /// @brief Method GetBit, addr 0x30d40ec, size 0x18, virtual false, abstract: false, final false
  inline bool GetBit(int32_t aindex, int32_t bindex);

  /// @brief Method SetBit, addr 0x30d40c8, size 0x24, virtual false, abstract: false, final false
  inline void SetBit(int32_t aindex, int32_t bindex, bool val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Sse4_2__StrBoolArray();

  // Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr __X86__Sse4_2__StrBoolArray(::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer Bits) noexcept;

  /// @brief Field Bits, offset: 0x0, size: 0x20, def value: None
  ::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer Bits;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Sse4_2__StrBoolArray, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X86__Sse4_2__StrBoolArray, Bits) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Sse4_2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse4_2*
class CORDL_TYPE __X86__Sse4_2 : public ::System::Object {
public:
  // Declarations
  using SIDD = ::GlobalNamespace::__X86__Sse4_2__SIDD;

  using StrBoolArray = ::GlobalNamespace::__X86__Sse4_2__StrBoolArray;

  /// @brief Field crctab, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_crctab, put = setStaticF_crctab))::ArrayW<uint32_t, ::Array<uint32_t>*> crctab;

  /// @brief Method ComputeStrCmpIntRes2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t ComputeStrCmpIntRes2(::cordl_internals::Ptr<T> a, int32_t alen, ::cordl_internals::Ptr<T> b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes);

  /// @brief Method ComputeStriOutput, addr 0x30d2cf8, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t ComputeStriOutput(int32_t len, int32_t imm8, int32_t intRes2);

  /// @brief Method ComputeStringLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t ComputeStringLength(::cordl_internals::Ptr<T> ptr, int32_t max);

  /// @brief Method ComputeStrmOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Burst::Intrinsics::v128 ComputeStrmOutput(int32_t len, int32_t imm8, T allOnesT, int32_t intRes2);

  /// @brief Method cmpestra, addr 0x30d3cd8, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t cmpestra(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrc, addr 0x30d3970, size 0x1a8, virtual false, abstract: false, final false
  static inline int32_t cmpestrc(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestri, addr 0x30d3214, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t cmpestri(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline int32_t cmpestri_emulation(::cordl_internals::Ptr<T> a, int32_t alen, ::cordl_internals::Ptr<T> b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// @brief Method cmpestrm, addr 0x30d3054, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpestrm(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Burst::Intrinsics::v128 cmpestrm_emulation(::cordl_internals::Ptr<T> a, int32_t alen, ::cordl_internals::Ptr<T> b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes,
                                                                    T allOnesT);

  /// @brief Method cmpestro, addr 0x30d3b34, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t cmpestro(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrs, addr 0x30d3b18, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t cmpestrs(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrz, addr 0x30d3954, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t cmpestrz(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpgt_epi64, addr 0x30d3d9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi64(::Unity::Burst::Intrinsics::v128 val1, ::Unity::Burst::Intrinsics::v128 val2);

  /// @brief Method cmpistra, addr 0x30d38ac, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t cmpistra(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrc, addr 0x30d34c4, size 0xac, virtual false, abstract: false, final false
  static inline int32_t cmpistrc(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistri, addr 0x30d2ed4, size 0x180, virtual false, abstract: false, final false
  static inline int32_t cmpistri(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t cmpistri_emulation(::cordl_internals::Ptr<T> a, ::cordl_internals::Ptr<T> b, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// @brief Method cmpistrm, addr 0x30d2d54, size 0x180, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpistrm(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Burst::Intrinsics::v128 cmpistrm_emulation(::cordl_internals::Ptr<T> a, ::cordl_internals::Ptr<T> b, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// @brief Method cmpistro, addr 0x30d3660, size 0x24c, virtual false, abstract: false, final false
  static inline int32_t cmpistro(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrs, addr 0x30d3570, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t cmpistrs(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrz, addr 0x30d33d4, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t cmpistrz(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method crc32_u16, addr 0x30d3ec0, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t crc32_u16(uint32_t crc, uint16_t v);

  /// @brief Method crc32_u32, addr 0x30d3db0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t crc32_u32(uint32_t crc, uint32_t v);

  /// @brief Method crc32_u64, addr 0x30d3f2c, size 0x64, virtual false, abstract: false, final false
  static inline uint64_t crc32_u64(uint64_t crc_ul, int64_t v);

  /// @brief Method crc32_u64, addr 0x30d3f90, size 0xa4, virtual false, abstract: false, final false
  static inline uint64_t crc32_u64(uint64_t crc_ul, uint64_t v);

  /// @brief Method crc32_u8, addr 0x30d3e2c, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t crc32_u8(uint32_t crc, uint8_t v);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_crctab();

  /// @brief Method get_IsSse42Supported, addr 0x30d2cf0, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse42Supported();

  static inline void setStaticF_crctab(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Sse4_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse4_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Sse4_2(__X86__Sse4_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Sse4_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Sse4_2(__X86__Sse4_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse4_2, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: ::Ssse3
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Ssse3*
class CORDL_TYPE __X86__Ssse3 : public ::System::Object {
public:
  // Declarations
  /// @brief Method abs_epi16, addr 0x30d41c4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method abs_epi32, addr 0x30d427c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method abs_epi8, addr 0x30d410c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method alignr_epi8, addr 0x30d43b4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 alignr_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t count);

  /// @brief Method get_IsSsse3Supported, addr 0x30d4104, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSsse3Supported();

  /// @brief Method hadd_epi16, addr 0x30d4454, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hadd_epi32, addr 0x30d458c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hadds_epi16, addr 0x30d44e0, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadds_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsub_epi16, addr 0x30d45b8, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsub_epi32, addr 0x30d46f0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method hsubs_epi16, addr 0x30d4644, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsubs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method maddubs_epi16, addr 0x30d471c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maddubs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method mulhrs_epi16, addr 0x30d47b8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhrs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method shuffle_epi8, addr 0x30d4334, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sign_epi16, addr 0x30d48b4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sign_epi32, addr 0x30d4934, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method sign_epi8, addr 0x30d4834, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X86__Ssse3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X86__Ssse3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X86__Ssse3(__X86__Ssse3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X86__Ssse3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X86__Ssse3(__X86__Ssse3 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Ssse3, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Type: Unity.Burst.Intrinsics::X86
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::Unity.Burst.Intrinsics::X86*
class CORDL_TYPE X86 : public ::System::Object {
public:
  // Declarations
  using Avx = ::Unity::Burst::Intrinsics::__X86__Avx;

  using Avx2 = ::Unity::Burst::Intrinsics::__X86__Avx2;

  using Bmi1 = ::Unity::Burst::Intrinsics::__X86__Bmi1;

  using Bmi2 = ::Unity::Burst::Intrinsics::__X86__Bmi2;

  using F16C = ::Unity::Burst::Intrinsics::__X86__F16C;

  using Fma = ::Unity::Burst::Intrinsics::__X86__Fma;

  using MXCSRBits = ::Unity::Burst::Intrinsics::__X86__MXCSRBits;

  using Popcnt = ::Unity::Burst::Intrinsics::__X86__Popcnt;

  using RoundingMode = ::Unity::Burst::Intrinsics::__X86__RoundingMode;

  using RoundingScope = ::Unity::Burst::Intrinsics::__X86__RoundingScope;

  using Sse = ::Unity::Burst::Intrinsics::__X86__Sse;

  using Sse2 = ::Unity::Burst::Intrinsics::__X86__Sse2;

  using Sse3 = ::Unity::Burst::Intrinsics::__X86__Sse3;

  using Sse4_1 = ::Unity::Burst::Intrinsics::__X86__Sse4_1;

  using Sse4_2 = ::Unity::Burst::Intrinsics::__X86__Sse4_2;

  using Ssse3 = ::Unity::Burst::Intrinsics::__X86__Ssse3;

  /// @brief Method BurstIntrinsicGetCSRFromManaged, addr 0x30c1b78, size 0x8, virtual false, abstract: false, final false
  static inline int32_t BurstIntrinsicGetCSRFromManaged();

  /// @brief Method BurstIntrinsicSetCSRFromManaged, addr 0x30c1b74, size 0x4, virtual false, abstract: false, final false
  static inline void BurstIntrinsicSetCSRFromManaged(int32_t _);

  /// @brief Method DoGetCSRTrampoline, addr 0x30c1b88, size 0x8, virtual false, abstract: false, final false
  static inline int32_t DoGetCSRTrampoline();

  /// @brief Method DoSetCSRTrampoline, addr 0x30c1b94, size 0x4, virtual false, abstract: false, final false
  static inline void DoSetCSRTrampoline(int32_t bits);

  /// @brief Method GenericCSharpLoad, addr 0x30c1ac8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 GenericCSharpLoad(::cordl_internals::Ptr<void> ptr);

  /// @brief Method GenericCSharpStore, addr 0x30c1ad4, size 0x8, virtual false, abstract: false, final false
  static inline void GenericCSharpStore(::cordl_internals::Ptr<void> ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method IsNaN, addr 0x30c1b4c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNaN(uint32_t v);

  /// @brief Method IsNaN, addr 0x30c1b60, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNaN(uint64_t v);

  /// @brief Method Saturate_To_Int16, addr 0x30c1b14, size 0x20, virtual false, abstract: false, final false
  static inline int16_t Saturate_To_Int16(int32_t val);

  /// @brief Method Saturate_To_Int8, addr 0x30c1adc, size 0x20, virtual false, abstract: false, final false
  static inline int8_t Saturate_To_Int8(int32_t val);

  /// @brief Method Saturate_To_UnsignedInt16, addr 0x30c1b34, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t Saturate_To_UnsignedInt16(int32_t val);

  /// @brief Method Saturate_To_UnsignedInt8, addr 0x30c1afc, size 0x18, virtual false, abstract: false, final false
  static inline uint8_t Saturate_To_UnsignedInt8(int32_t val);

  /// @brief Method get_MXCSR, addr 0x30c1ba0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::__X86__MXCSRBits get_MXCSR();

  /// @brief Method getcsr_raw, addr 0x30c1b80, size 0x8, virtual false, abstract: false, final false
  static inline int32_t getcsr_raw();

  /// @brief Method set_MXCSR, addr 0x30c1ba8, size 0x4, virtual false, abstract: false, final false
  static inline void set_MXCSR(::Unity::Burst::Intrinsics::__X86__MXCSRBits value);

  /// @brief Method setcsr_raw, addr 0x30c1b90, size 0x4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Avx__CMP, "Unity.Burst.Intrinsics", "X86/Avx/CMP");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Sse4_2__SIDD, "Unity.Burst.Intrinsics", "X86/Sse4_2/SIDD");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__MXCSRBits, "Unity.Burst.Intrinsics", "X86/MXCSRBits");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__RoundingMode, "Unity.Burst.Intrinsics", "X86/RoundingMode");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86*, "Unity.Burst.Intrinsics", "X86");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Avx);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Avx*, "Unity.Burst.Intrinsics", "X86/Avx");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Avx2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Avx2*, "Unity.Burst.Intrinsics", "X86/Avx2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Bmi1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Bmi1*, "Unity.Burst.Intrinsics", "X86/Bmi1");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Bmi2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Bmi2*, "Unity.Burst.Intrinsics", "X86/Bmi2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__F16C);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__F16C*, "Unity.Burst.Intrinsics", "X86/F16C");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Fma);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Fma*, "Unity.Burst.Intrinsics", "X86/Fma");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Popcnt);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Popcnt*, "Unity.Burst.Intrinsics", "X86/Popcnt");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse*, "Unity.Burst.Intrinsics", "X86/Sse");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse2*, "Unity.Burst.Intrinsics", "X86/Sse2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse3);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse3*, "Unity.Burst.Intrinsics", "X86/Sse3");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse4_1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse4_1*, "Unity.Burst.Intrinsics", "X86/Sse4_1");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse4_2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse4_2*, "Unity.Burst.Intrinsics", "X86/Sse4_2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Ssse3);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Ssse3*, "Unity.Burst.Intrinsics", "X86/Ssse3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Fma__Union, "Unity.Burst.Intrinsics", "X86/Fma/Union");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Sse4_2__StrBoolArray, "Unity.Burst.Intrinsics", "X86/Sse4_2/StrBoolArray");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer, "Unity.Burst.Intrinsics", "X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__RoundingScope, "Unity.Burst.Intrinsics", "X86/RoundingScope");
