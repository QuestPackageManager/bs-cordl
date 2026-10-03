#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/X86.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X86)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
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
class X86_DoGetCSRTrampoline_0000012A$BurstDirectCall;
}
namespace Unity::Burst::Intrinsics {
class X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate;
}
namespace Unity::Burst::Intrinsics {
class X86_DoSetCSRTrampoline_00000129$BurstDirectCall;
}
namespace Unity::Burst::Intrinsics {
class X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate;
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
class X86_DoGetCSRTrampoline_0000012A$BurstDirectCall;
}
namespace Unity::Burst::Intrinsics {
class X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate;
}
namespace Unity::Burst::Intrinsics {
class X86_DoSetCSRTrampoline_00000129$BurstDirectCall;
}
namespace Unity::Burst::Intrinsics {
class X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate;
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
MARK_REF_T(::Unity::Burst::Intrinsics::X86*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Avx*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Avx2*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Bmi1*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Bmi2*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$BurstDirectCall*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$BurstDirectCall*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_F16C*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Fma*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Popcnt*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Sse*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Sse2*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Sse3*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Sse4_1*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Sse4_2*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Ssse3*);
MARK_VAL_T(::Unity::Burst::Intrinsics::Fma_X86_Union);
MARK_VAL_T(::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray);
MARK_VAL_T(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer);
MARK_VAL_T(::Unity::Burst::Intrinsics::X86_RoundingScope);
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Avx_X86_CMP, "Unity.Burst.Intrinsics", "X86/Avx/CMP");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD, "Unity.Burst.Intrinsics", "X86/Sse4_2/SIDD");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_MXCSRBits, "Unity.Burst.Intrinsics", "X86/MXCSRBits");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_RoundingMode, "Unity.Burst.Intrinsics", "X86/RoundingMode");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86*, "Unity.Burst.Intrinsics", "X86");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Avx*, "Unity.Burst.Intrinsics", "X86/Avx");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Avx2*, "Unity.Burst.Intrinsics", "X86/Avx2");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Bmi1*, "Unity.Burst.Intrinsics", "X86/Bmi1");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Bmi2*, "Unity.Burst.Intrinsics", "X86/Bmi2");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$BurstDirectCall*, "Unity.Burst.Intrinsics", "X86/DoGetCSRTrampoline_0000012A$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate*, "Unity.Burst.Intrinsics", "X86/DoGetCSRTrampoline_0000012A$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$BurstDirectCall*, "Unity.Burst.Intrinsics", "X86/DoSetCSRTrampoline_00000129$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate*, "Unity.Burst.Intrinsics", "X86/DoSetCSRTrampoline_00000129$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_F16C*, "Unity.Burst.Intrinsics", "X86/F16C");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Fma*, "Unity.Burst.Intrinsics", "X86/Fma");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Popcnt*, "Unity.Burst.Intrinsics", "X86/Popcnt");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Sse*, "Unity.Burst.Intrinsics", "X86/Sse");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Sse2*, "Unity.Burst.Intrinsics", "X86/Sse2");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Sse3*, "Unity.Burst.Intrinsics", "X86/Sse3");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Sse4_1*, "Unity.Burst.Intrinsics", "X86/Sse4_1");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Sse4_2*, "Unity.Burst.Intrinsics", "X86/Sse4_2");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Ssse3*, "Unity.Burst.Intrinsics", "X86/Ssse3");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Fma_X86_Union, "Unity.Burst.Intrinsics", "X86/Fma/Union");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray, "Unity.Burst.Intrinsics", "X86/Sse4_2/StrBoolArray");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer, "Unity.Burst.Intrinsics", "X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_RoundingScope, "Unity.Burst.Intrinsics", "X86/RoundingScope");
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17731 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Avx_X86_CMP, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::Intrinsics::Avx_X86_CMP) == 0x4, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Avx
class CORDL_TYPE X86_Avx : public ::System::Object {
public:
  // Declarations
  using CMP = ::Unity::Burst::Intrinsics::Avx_X86_CMP;

  /// @brief Method Select4, addr 0x68bfba8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 Select4(::Unity::Burst::Intrinsics::v256 src1, ::Unity::Burst::Intrinsics::v256 src2, int32_t control);

  /// [DebuggerStepThrough]
  /// @brief Method broadcast_ss, addr 0x68bfd88, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcast_ss(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method cmp_pd, addr 0x68be61c, size 0x3c8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmp_ps, addr 0x68bea48, size 0x6a4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmp_sd, addr 0x68bf578, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmp_ss, addr 0x68bf590, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method get_IsAvxSupported, addr 0x68bd9fc, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvxSupported();

  /// [DebuggerStepThrough]
  /// @brief Method maskload_pd, addr 0x68bff68, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method maskload_ps, addr 0x68c004c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method maskstore_pd, addr 0x68bffe4, size 0x1c, virtual false, abstract: false, final false
  static inline void maskstore_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method maskstore_ps, addr 0x68c00ec, size 0x3c, virtual false, abstract: false, final false
  static inline void maskstore_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_pd, addr 0x68bda04, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_ps, addr 0x68bda1c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_addsub_pd, addr 0x68bdab4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_addsub_ps, addr 0x68bdadc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_and_pd, addr 0x68bdb34, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_and_ps, addr 0x68bdb4c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_andnot_pd, addr 0x68bdb70, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_andnot_ps, addr 0x68bdb88, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blend_pd, addr 0x68bdbac, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blend_ps, addr 0x68bdc18, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blendv_pd, addr 0x68bdc84, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blendv_ps, addr 0x68bdcf0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcast_pd, addr 0x68bfdc4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_pd(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcast_ps, addr 0x68bfda8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcast_sd, addr 0x68bfd98, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_sd(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcast_ss, addr 0x68bfd7c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ss(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castpd128_pd256, addr 0x68c12f8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd128_pd256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castpd256_pd128, addr 0x68c12c8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castpd256_pd128(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castpd_ps, addr 0x68c1274, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castpd_si256, addr 0x68c1298, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_si256(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castps128_ps256, addr 0x68c12e0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps128_ps256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castps256_ps128, addr 0x68c12bc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castps256_ps128(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castps_pd, addr 0x68c1280, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castps_si256, addr 0x68c128c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_si256(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castsi128_si256, addr 0x68c1304, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castsi256_pd, addr 0x68c12b0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castsi256_ps, addr 0x68c12a4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castsi256_si128, addr 0x68c12d4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castsi256_si128(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_ceil_pd, addr 0x68c0524, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_pd(::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_ceil_ps, addr 0x68c0654, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_ps(::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmp_pd, addr 0x68be9e4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmp_ps, addr 0x68bf514, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi32_pd, addr 0x68bf5bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi32_ps, addr 0x68bf5e0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_cvtpd_epi32, addr 0x68bf738, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtpd_ps, addr 0x68bf624, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtps_epi32, addr 0x68bf658, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtps_pd, addr 0x68bf6a4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtss_f32, addr 0x68bf800, size 0x8, virtual false, abstract: false, final false
  static inline float_t mm256_cvtss_f32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvttpd_epi32, addr 0x68bf6d8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvttpd_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvttps_epi32, addr 0x68bf774, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvttps_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_div_pd, addr 0x68bdd5c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_div_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_div_ps, addr 0x68bdd74, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_div_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_dp_ps, addr 0x68bde0c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_dp_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extract_epi32, addr 0x68c14bc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extract_epi64, addr 0x68c14c8, size 0xc, virtual false, abstract: false, final false
  static inline int64_t mm256_extract_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extractf128_pd, addr 0x68bf82c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extractf128_ps, addr 0x68bf808, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_ps(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extractf128_si256, addr 0x68bf850, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_floor_pd, addr 0x68c058c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_pd(::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_floor_ps, addr 0x68c06b0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_ps(::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadd_pd, addr 0x68bde78, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadd_ps, addr 0x68bdea4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsub_pd, addr 0x68bdf20, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsub_ps, addr 0x68bdf4c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insert_epi16, addr 0x68c13cc, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insert_epi32, addr 0x68c141c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insert_epi64, addr 0x68c146c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi64(::Unity::Burst::Intrinsics::v256 a, int64_t i, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insert_epi8, addr 0x68c137c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi8(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insertf128_pd, addr 0x68bfe00, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insertf128_ps, addr 0x68bfdd4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insertf128_si256, addr 0x68bfe2c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_lddqu_si256, addr 0x68c0208, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_lddqu_si256(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_load_pd, addr 0x68bfe70, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_pd(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_load_ps, addr 0x68bfe58, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_load_si256, addr 0x68bfeb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_si256(void* ptr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_loadu2_m128, addr 0x68bfee8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128(void* hiaddr, void* loaddr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_loadu2_m128d, addr 0x68bff04, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128d(void* hiaddr, void* loaddr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_loadu2_m128i, addr 0x68bff14, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128i(void* hiaddr, void* loaddr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_loadu_pd, addr 0x68bfe88, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_pd(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_loadu_ps, addr 0x68bfea0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_loadu_si256, addr 0x68bfed0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_si256(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskload_pd, addr 0x68bff90, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskload_ps, addr 0x68c0098, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskstore_pd, addr 0x68c0000, size 0x4c, virtual false, abstract: false, final false
  static inline void mm256_maskstore_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskstore_ps, addr 0x68c0128, size 0x84, virtual false, abstract: false, final false
  static inline void mm256_maskstore_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_pd, addr 0x68bdfc8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_ps, addr 0x68be028, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_pd, addr 0x68be154, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_ps, addr 0x68be1b4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movedup_pd, addr 0x68c01f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_movedup_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movehdup_ps, addr 0x68c01ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_movehdup_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_moveldup_ps, addr 0x68c01d0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_moveldup_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movemask_pd, addr 0x68c0dfc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movemask_ps, addr 0x68c0e34, size 0x60, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mul_pd, addr 0x68be2e0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mul_ps, addr 0x68be2f8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_or_pd, addr 0x68be390, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_or_ps, addr 0x68be3a8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute2f128_pd, addr 0x68bfc74, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute2f128_ps, addr 0x68bfbf0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute2f128_si256, addr 0x68bfcf8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute_pd, addr 0x68bfaa8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute_ps, addr 0x68bf94c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_ps(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permutevar_pd, addr 0x68bfa10, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permutevar_ps, addr 0x68bf8ec, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_rcp_ps, addr 0x68c0238, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_rcp_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_round_pd, addr 0x68c04ac, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_round_pd(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_round_ps, addr 0x68c05f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_round_ps(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_rsqrt_ps, addr 0x68c02b4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_rsqrt_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_epi16, addr 0x68c1250, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi16(int16_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_epi32, addr 0x68c125c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi32(int32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_epi64x, addr 0x68c1268, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi64x(int64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_epi8, addr 0x68c1244, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi8(uint8_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_pd, addr 0x68c122c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_pd(double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_ps, addr 0x68c1238, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_ps(float_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_epi16, addr 0x68c0fe4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi16(int16_t e15_, int16_t e14_, int16_t e13_, int16_t e12_, int16_t e11_, int16_t e10_, int16_t e9_, int16_t e8_, int16_t e7_, int16_t e6_,
                                                                 int16_t e5_, int16_t e4_, int16_t e3_, int16_t e2_, int16_t e1_, int16_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_epi32, addr 0x68c1048, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi32(int32_t e7, int32_t e6, int32_t e5, int32_t e4, int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_epi64x, addr 0x68c105c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi64x(int64_t e3, int64_t e2, int64_t e1, int64_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_epi8, addr 0x68c0f00, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi8(uint8_t e31_, uint8_t e30_, uint8_t e29_, uint8_t e28_, uint8_t e27_, uint8_t e26_, uint8_t e25_, uint8_t e24_, uint8_t e23_,
                                                                uint8_t e22_, uint8_t e21_, uint8_t e20_, uint8_t e19_, uint8_t e18_, uint8_t e17_, uint8_t e16_, uint8_t e15_, uint8_t e14_,
                                                                uint8_t e13_, uint8_t e12_, uint8_t e11_, uint8_t e10_, uint8_t e9_, uint8_t e8_, uint8_t e7_, uint8_t e6_, uint8_t e5_, uint8_t e4_,
                                                                uint8_t e3_, uint8_t e2_, uint8_t e1_, uint8_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_m128, addr 0x68bfef8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_m128d, addr 0x68c1068, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128d(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_m128i, addr 0x68c1074, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128i(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_pd, addr 0x68c0ee0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_pd(double_t d, double_t c, double_t b, double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_ps, addr 0x68c0eec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_ps(float_t e7, float_t e6, float_t e5, float_t e4, float_t e3, float_t e2, float_t e1, float_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_epi16, addr 0x68c1184, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi16(int16_t e15_, int16_t e14_, int16_t e13_, int16_t e12_, int16_t e11_, int16_t e10_, int16_t e9_, int16_t e8_, int16_t e7_,
                                                                  int16_t e6_, int16_t e5_, int16_t e4_, int16_t e3_, int16_t e2_, int16_t e1_, int16_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_epi32, addr 0x68c11e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi32(int32_t e7, int32_t e6, int32_t e5, int32_t e4, int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_epi64x, addr 0x68c11fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi64x(int64_t e3, int64_t e2, int64_t e1, int64_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_epi8, addr 0x68c10a0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi8(uint8_t e31_, uint8_t e30_, uint8_t e29_, uint8_t e28_, uint8_t e27_, uint8_t e26_, uint8_t e25_, uint8_t e24_, uint8_t e23_,
                                                                 uint8_t e22_, uint8_t e21_, uint8_t e20_, uint8_t e19_, uint8_t e18_, uint8_t e17_, uint8_t e16_, uint8_t e15_, uint8_t e14_,
                                                                 uint8_t e13_, uint8_t e12_, uint8_t e11_, uint8_t e10_, uint8_t e9_, uint8_t e8_, uint8_t e7_, uint8_t e6_, uint8_t e5_, uint8_t e4_,
                                                                 uint8_t e3_, uint8_t e2_, uint8_t e1_, uint8_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_m128, addr 0x68c1208, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_m128d, addr 0x68c1214, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128d(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_m128i, addr 0x68c1220, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128i(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_pd, addr 0x68c1080, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_pd(double_t d, double_t c, double_t b, double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_ps, addr 0x68c108c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_ps(float_t e7, float_t e6, float_t e5, float_t e4, float_t e3, float_t e2, float_t e1, float_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setzero_pd, addr 0x68c0ebc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_pd();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setzero_ps, addr 0x68c0ec8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_ps();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setzero_si256, addr 0x68c0ed4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_si256();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shuffle_pd, addr 0x68be3cc, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shuffle_ps, addr 0x68be458, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sqrt_pd, addr 0x68c0390, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sqrt_ps, addr 0x68c03dc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_store_pd, addr 0x68bfe7c, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_pd(void* ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_store_ps, addr 0x68bfe64, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_ps(void* ptr, ::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_store_si256, addr 0x68bfec4, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_si256(void* ptr, ::Unity::Burst::Intrinsics::v256 v);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_storeu2_m128, addr 0x68bff24, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128(void* hiaddr, void* loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_storeu2_m128d, addr 0x68bff40, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128d(void* hiaddr, void* loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_storeu2_m128i, addr 0x68bff54, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128i(void* hiaddr, void* loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_storeu_pd, addr 0x68bfe94, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_pd(void* ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_storeu_ps, addr 0x68bfeac, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_ps(void* ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_storeu_si256, addr 0x68bfedc, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_si256(void* ptr, ::Unity::Burst::Intrinsics::v256 v);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_stream_pd, addr 0x68c0220, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_stream_ps, addr 0x68c022c, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_stream_si256, addr 0x68c0214, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_si256(void* mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_pd, addr 0x68be530, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_ps, addr 0x68be548, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testc_pd, addr 0x68c08cc, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testc_ps, addr 0x68c0b74, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testc_si256, addr 0x68c0808, size 0x38, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testnzc_pd, addr 0x68c08fc, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testnzc_ps, addr 0x68c0ba4, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testnzc_si256, addr 0x68c0840, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testz_pd, addr 0x68c089c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testz_ps, addr 0x68c0b44, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testz_si256, addr 0x68c07d0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_undefined_pd, addr 0x68c1340, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_pd();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_undefined_ps, addr 0x68c1334, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_ps();

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_undefined_si256, addr 0x68c134c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_si256();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_pd, addr 0x68c070c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_unpackhi_ps, addr 0x68c0744, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_pd, addr 0x68c0728, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_unpacklo_ps, addr 0x68c078c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_xor_pd, addr 0x68be5e0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_xor_ps, addr 0x68be5f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_zeroall, addr 0x68bf874, size 0x4, virtual false, abstract: false, final false
  static inline void mm256_zeroall();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_zeroupper, addr 0x68bf878, size 0x4, virtual false, abstract: false, final false
  static inline void mm256_zeroupper();

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_zextpd128_pd256, addr 0x68c1364, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextpd128_pd256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_zextps128_ps256, addr 0x68c1358, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextps128_ps256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_zextsi128_si256, addr 0x68c1370, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method permute_pd, addr 0x68bfb4c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permute_pd(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method permute_ps, addr 0x68bf944, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permute_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method permutevar_pd, addr 0x68bf9ac, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permutevar_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method permutevar_ps, addr 0x68bf87c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permutevar_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testc_pd, addr 0x68c0a30, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testc_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testc_ps, addr 0x68c0cd8, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testc_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testnzc_pd, addr 0x68c0aa0, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t testnzc_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testnzc_ps, addr 0x68c0d48, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t testnzc_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testz_pd, addr 0x68c09c0, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testz_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testz_ps, addr 0x68c0c68, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testz_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method undefined_pd, addr 0x68c131c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_pd();

  /// [DebuggerStepThrough]
  /// @brief Method undefined_ps, addr 0x68c1310, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_ps();

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method undefined_si128, addr 0x68c1328, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_si128();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Avx();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Avx", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Avx(X86_Avx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Avx", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Avx(X86_Avx const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17732 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Avx) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.IComparable`1<T>, System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Avx2
class CORDL_TYPE X86_Avx2 : public ::System::Object {
public:
  // Declarations
  /// @brief Method EmulatedGather, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::IComparable_1<U>*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void EmulatedGather(T* dptr, void* base_addr, int32_t* indexPtr, int32_t scale, int32_t n, U* mask);

  /// @brief Method EmulatedGather, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::IComparable_1<U>*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void EmulatedGather(T* dptr, void* base_addr, int64_t* indexPtr, int32_t scale, int32_t n, U* mask);

  /// [DebuggerStepThrough]
  /// @brief Method blend_epi32, addr 0x68c3884, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastb_epi8, addr 0x68c4014, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastb_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastd_epi32, addr 0x68c403c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastq_epi64, addr 0x68c4048, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastq_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastsd_pd, addr 0x68c4000, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastsd_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastss_ps, addr 0x68c3fe8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastss_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastw_epi16, addr 0x68c4028, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastw_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method get_IsAvx2Supported, addr 0x68c14d4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvx2Supported();

  /// [DebuggerStepThrough]
  /// @brief Method i32gather_epi32, addr 0x68c5358, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi32(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i32gather_epi64, addr 0x68c5418, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi64(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i32gather_pd, addr 0x68c4e5c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_pd(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i32gather_ps, addr 0x68c4f00, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_ps(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i64gather_epi32, addr 0x68c54bc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi32(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i64gather_epi64, addr 0x68c5560, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi64(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i64gather_pd, addr 0x68c4fc0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_pd(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i64gather_ps, addr 0x68c5080, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_ps(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i32gather_epi32, addr 0x68c5f2c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi32(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i32gather_epi64, addr 0x68c5fe4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi64(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i32gather_pd, addr 0x68c5c50, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_pd(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i32gather_ps, addr 0x68c5d08, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_ps(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i64gather_epi32, addr 0x68c609c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i64gather_epi64, addr 0x68c6150, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi64(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i64gather_pd, addr 0x68c5dc0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_pd(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i64gather_ps, addr 0x68c5e78, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_ps(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method maskload_epi32, addr 0x68c456c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_epi32(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method maskload_epi64, addr 0x68c45d4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_epi64(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method maskstore_epi32, addr 0x68c4644, size 0x64, virtual false, abstract: false, final false
  static inline void maskstore_epi32(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method maskstore_epi64, addr 0x68c46a8, size 0x6c, virtual false, abstract: false, final false
  static inline void maskstore_epi64(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_abs_epi16, addr 0x68c1d54, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi16(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_abs_epi32, addr 0x68c1da0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_abs_epi8, addr 0x68c1d08, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi8(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_epi16, addr 0x68c1e4c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_epi32, addr 0x68c1eac, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_epi64, addr 0x68c1f18, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_epi8, addr 0x68c1dec, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_adds_epi16, addr 0x68c1f90, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_adds_epi8, addr 0x68c1f30, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_adds_epu16, addr 0x68c2050, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_adds_epu8, addr 0x68c1ff0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_alignr_epi8, addr 0x68c38f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_alignr_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_and_si256, addr 0x68c1ca8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_andnot_si256, addr 0x68c1cc0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_avg_epu16, addr 0x68c2438, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_avg_epu8, addr 0x68c23d8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blend_epi16, addr 0x68c39d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blend_epi32, addr 0x68c388c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blendv_epi8, addr 0x68c3964, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastb_epi8, addr 0x68c4050, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastb_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastd_epi32, addr 0x68c4068, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastq_epi64, addr 0x68c4074, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastq_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastsd_pd, addr 0x68c4008, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsd_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastsi128_si256, addr 0x68c4080, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastss_ps, addr 0x68c3ff4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastss_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastw_epi16, addr 0x68c405c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastw_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_bslli_epi128, addr 0x68c2c44, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_bslli_epi128(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_bsrli_epi128, addr 0x68c2d04, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_bsrli_epi128(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpeq_epi16, addr 0x68c15a0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpeq_epi32, addr 0x68c1600, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpeq_epi64, addr 0x68c1660, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpeq_epi8, addr 0x68c1540, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpgt_epi16, addr 0x68c16d8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpgt_epi32, addr 0x68c1738, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpgt_epi64, addr 0x68c1798, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpgt_epi8, addr 0x68c1678, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi16_epi32, addr 0x68c41c4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi16_epi64, addr 0x68c422c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi32_epi64, addr 0x68c4294, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi8_epi16, addr 0x68c408c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi8_epi32, addr 0x68c40f4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi8_epi64, addr 0x68c415c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu16_epi32, addr 0x68c4434, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu16_epi64, addr 0x68c449c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu32_epi64, addr 0x68c4504, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu8_epi16, addr 0x68c42fc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu8_epi32, addr 0x68c4364, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu8_epi64, addr 0x68c43cc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtsd_f64, addr 0x68c1528, size 0x8, virtual false, abstract: false, final false
  static inline double_t mm256_cvtsd_f64(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtsi256_si32, addr 0x68c1530, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mm256_cvtsi256_si32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtsi256_si64, addr 0x68c1538, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mm256_cvtsi256_si64(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extract_epi16, addr 0x68c151c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extract_epi8, addr 0x68c1510, size 0xc, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi8(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extracti128_si256, addr 0x68c3f5c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extracti128_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadd_epi16, addr 0x68c2498, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadd_epi32, addr 0x68c24f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadds_epi16, addr 0x68c2564, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadds_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsub_epi16, addr 0x68c25c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsub_epi32, addr 0x68c2624, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsubs_epi16, addr 0x68c2680, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsubs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i32gather_epi32, addr 0x68c4a88, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi32(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i32gather_epi64, addr 0x68c5124, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi64(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i32gather_pd, addr 0x68c4b58, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_pd(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i32gather_ps, addr 0x68c4c10, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_ps(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i64gather_epi32, addr 0x68c51dc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_epi32(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i64gather_epi64, addr 0x68c5288, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_epi64(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i64gather_pd, addr 0x68c4ce0, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_pd(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i64gather_ps, addr 0x68c4db0, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_ps(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_inserti128_si256, addr 0x68c3fbc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_inserti128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_madd_epi16, addr 0x68c26e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_madd_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maddubs_epi16, addr 0x68c2740, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maddubs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i32gather_epi32, addr 0x68c5938, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi32(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i32gather_epi64, addr 0x68c5a00, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi64(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i32gather_pd, addr 0x68c5620, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_pd(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i32gather_ps, addr 0x68c56e8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_ps(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i64gather_epi32, addr 0x68c5b90, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i64gather_epi64, addr 0x68c5ac8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_epi64(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i64gather_pd, addr 0x68c57b0, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_pd(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i64gather_ps, addr 0x68c5878, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_ps(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskload_epi32, addr 0x68c4714, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi32(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskload_epi64, addr 0x68c477c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi64(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskstore_epi32, addr 0x68c47e4, size 0x24, virtual false, abstract: false, final false
  static inline void mm256_maskstore_epi32(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskstore_epi64, addr 0x68c4808, size 0x24, virtual false, abstract: false, final false
  static inline void mm256_maskstore_epi64(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epi16, addr 0x68c1888, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epi32, addr 0x68c18e8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epi8, addr 0x68c1828, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epu16, addr 0x68c19a8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epu32, addr 0x68c1a08, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epu8, addr 0x68c1948, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epi16, addr 0x68c1ac8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epi32, addr 0x68c1b28, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epi8, addr 0x68c1a68, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epu16, addr 0x68c1be8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epu32, addr 0x68c1c48, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epu8, addr 0x68c1b88, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movemask_epi8, addr 0x68c14dc, size 0x34, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_epi8(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mpsadbw_epu8, addr 0x68c2b78, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mpsadbw_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mul_epi32, addr 0x68c295c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mul_epu32, addr 0x68c2920, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mulhi_epi16, addr 0x68c27a0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mulhi_epu16, addr 0x68c2800, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mulhrs_epi16, addr 0x68c2ab8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhrs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mullo_epi16, addr 0x68c2860, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mullo_epi32, addr 0x68c28c0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_or_si256, addr 0x68c1cd8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_packs_epi16, addr 0x68c3a3c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_packs_epi32, addr 0x68c3a9c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_packus_epi16, addr 0x68c3afc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_packus_epi32, addr 0x68c3b5c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute2x128_si256, addr 0x68c49f8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2x128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute4x64_epi64, addr 0x68c4918, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute4x64_pd, addr 0x68c4980, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permutevar8x32_epi32, addr 0x68c482c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 idx);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permutevar8x32_ps, addr 0x68c4894, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 idx);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sad_epu8, addr 0x68c2b18, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sad_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shuffle_epi32, addr 0x68c3e3c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shuffle_epi8, addr 0x68c3ddc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shufflehi_epi16, addr 0x68c3e9c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflehi_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shufflelo_epi16, addr 0x68c3efc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflelo_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sign_epi16, addr 0x68c29f8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sign_epi32, addr 0x68c2a58, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sign_epi8, addr 0x68c2998, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sll_epi16, addr 0x68c2d64, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sll_epi32, addr 0x68c2dd0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sll_epi64, addr 0x68c2e3c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_slli_epi16, addr 0x68c2ea8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_slli_epi32, addr 0x68c2f08, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_slli_epi64, addr 0x68c2f68, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_slli_si256, addr 0x68c2be4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sllv_epi32, addr 0x68c2fc8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sllv_epi64, addr 0x68c30a0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sra_epi16, addr 0x68c3180, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sra_epi32, addr 0x68c31ec, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srai_epi16, addr 0x68c3258, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srai_epi32, addr 0x68c32b8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srav_epi32, addr 0x68c3318, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srav_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srl_epi16, addr 0x68c3468, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srl_epi32, addr 0x68c34d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srl_epi64, addr 0x68c3540, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srli_epi16, addr 0x68c35ac, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srli_epi32, addr 0x68c360c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srli_epi64, addr 0x68c366c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srli_si256, addr 0x68c2cac, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srlv_epi32, addr 0x68c36cc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srlv_epi64, addr 0x68c37a4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_stream_load_si256, addr 0x68c4a7c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_stream_load_si256(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_epi16, addr 0x68c2110, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_epi32, addr 0x68c2170, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_epi64, addr 0x68c21d0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_epi8, addr 0x68c20b0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_subs_epi16, addr 0x68c22b8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_subs_epi8, addr 0x68c2258, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_subs_epu16, addr 0x68c2378, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_subs_epu8, addr 0x68c2318, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_epi16, addr 0x68c3c1c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_epi32, addr 0x68c3c7c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_epi64, addr 0x68c3cb0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_epi8, addr 0x68c3bbc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_epi16, addr 0x68c3d2c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_epi32, addr 0x68c3d8c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_epi64, addr 0x68c3dc0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_epi8, addr 0x68c3ccc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_xor_si256, addr 0x68c1cf0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method sllv_epi32, addr 0x68c3020, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sllv_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method sllv_epi64, addr 0x68c30f8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sllv_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srav_epi32, addr 0x68c3370, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srav_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srlv_epi32, addr 0x68c3724, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srlv_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srlv_epi64, addr 0x68c37fc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srlv_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Avx2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Avx2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Avx2(X86_Avx2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Avx2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Avx2(X86_Avx2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17733 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Avx2) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Bmi1
class CORDL_TYPE X86_Bmi1 : public ::System::Object {
public:
  // Declarations
  /// [DebuggerStepThrough]
  /// @brief Method andn_u32, addr 0x68c6210, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t andn_u32(uint32_t a, uint32_t b);

  /// [DebuggerStepThrough]
  /// @brief Method andn_u64, addr 0x68c6218, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t andn_u64(uint64_t a, uint64_t b);

  /// [DebuggerStepThrough]
  /// @brief Method bextr2_u32, addr 0x68c6268, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t bextr2_u32(uint32_t a, uint32_t control);

  /// [DebuggerStepThrough]
  /// @brief Method bextr2_u64, addr 0x68c6298, size 0x30, virtual false, abstract: false, final false
  static inline uint64_t bextr2_u64(uint64_t a, uint64_t control);

  /// [DebuggerStepThrough]
  /// @brief Method bextr_u32, addr 0x68c6220, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t bextr_u32(uint32_t a, uint32_t start, uint32_t len);

  /// [DebuggerStepThrough]
  /// @brief Method bextr_u64, addr 0x68c6244, size 0x24, virtual false, abstract: false, final false
  static inline uint64_t bextr_u64(uint64_t a, uint32_t start, uint32_t len);

  /// [DebuggerStepThrough]
  /// @brief Method blsi_u32, addr 0x68c62c8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsi_u32(uint32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsi_u64, addr 0x68c62d4, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsi_u64(uint64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsmsk_u32, addr 0x68c62e0, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsmsk_u32(uint32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsmsk_u64, addr 0x68c62ec, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsmsk_u64(uint64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsr_u32, addr 0x68c62f8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsr_u32(uint32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsr_u64, addr 0x68c6304, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsr_u64(uint64_t a);

  /// @brief Method get_IsBmi1Supported, addr 0x68c6208, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsBmi1Supported();

  /// [DebuggerStepThrough]
  /// @brief Method tzcnt_u32, addr 0x68c6310, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t tzcnt_u32(uint32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method tzcnt_u64, addr 0x68c6368, size 0x64, virtual false, abstract: false, final false
  static inline uint64_t tzcnt_u64(uint64_t a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Bmi1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Bmi1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Bmi1(X86_Bmi1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Bmi1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Bmi1(X86_Bmi1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17734 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Bmi1) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Bmi2
class CORDL_TYPE X86_Bmi2 : public ::System::Object {
public:
  // Declarations
  /// [DebuggerStepThrough]
  /// @brief Method bzhi_u32, addr 0x68c63d4, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t bzhi_u32(uint32_t a, uint32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method bzhi_u64, addr 0x68c63ec, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t bzhi_u64(uint64_t a, uint64_t index);

  /// @brief Method get_IsBmi2Supported, addr 0x68c63cc, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsBmi2Supported();

  /// [DebuggerStepThrough]
  /// @brief Method mulx_u32, addr 0x68c6404, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t mulx_u32(uint32_t a, uint32_t b, ::by_ref<uint32_t> hi);

  /// [DebuggerStepThrough]
  /// @brief Method mulx_u64, addr 0x68c6414, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t mulx_u64(uint64_t a, uint64_t b, ::by_ref<uint64_t> hi);

  /// [DebuggerStepThrough]
  /// @brief Method pdep_u32, addr 0x68c6450, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t pdep_u32(uint32_t a, uint32_t mask);

  /// [DebuggerStepThrough]
  /// @brief Method pdep_u64, addr 0x68c6490, size 0x40, virtual false, abstract: false, final false
  static inline uint64_t pdep_u64(uint64_t a, uint64_t mask);

  /// [DebuggerStepThrough]
  /// @brief Method pext_u32, addr 0x68c64d0, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t pext_u32(uint32_t a, uint32_t mask);

  /// [DebuggerStepThrough]
  /// @brief Method pext_u64, addr 0x68c6510, size 0x40, virtual false, abstract: false, final false
  static inline uint64_t pext_u64(uint64_t a, uint64_t mask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Bmi2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Bmi2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Bmi2(X86_Bmi2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Bmi2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Bmi2(X86_Bmi2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17735 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Bmi2) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// [Flags]
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17736 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_MXCSRBits, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::Intrinsics::X86_MXCSRBits) == 0x4, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// [Flags]
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17737 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_RoundingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::Intrinsics::X86_RoundingMode) == 0x4, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies Unity.Burst.Intrinsics.X86::MXCSRBits
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/RoundingScope
struct CORDL_TYPE X86_RoundingScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x68c6588, size 0xc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x68c6550, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::Intrinsics::X86_MXCSRBits roundingMode);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_RoundingScope();

  // Ctor Parameters [CppParam { name: "OldBits", ty: "::Unity::Burst::Intrinsics::X86_MXCSRBits", modifiers: "", def_value: None, comment: None }]
  constexpr X86_RoundingScope(::Unity::Burst::Intrinsics::X86_MXCSRBits OldBits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17738 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OldBits, offset: 0x0, size: 0x4, def value: None
  ::Unity::Burst::Intrinsics::X86_MXCSRBits OldBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::X86_RoundingScope, OldBits) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::Intrinsics::X86_RoundingScope) == 0x4, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/F16C
class CORDL_TYPE X86_F16C : public ::System::Object {
public:
  // Declarations
  /// @brief Field BaseTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BaseTable, put = setStaticF_BaseTable)) ::ArrayW<uint16_t> BaseTable;

  /// @brief Field ShiftTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ShiftTable, put = setStaticF_ShiftTable)) ::ArrayW<int8_t> ShiftTable;

  /// [DebuggerStepThrough]
  /// @brief Method FloatToHalf, addr 0x68c67a4, size 0x1d8, virtual false, abstract: false, final false
  static inline uint16_t FloatToHalf(uint32_t f, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method HalfToFloat, addr 0x68c659c, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t HalfToFloat(uint16_t h);

  /// [DebuggerStepThrough]
  /// @brief Method cvtph_ps, addr 0x68c6608, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtph_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtps_ph, addr 0x68c697c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_ph(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  static inline ::ArrayW<uint16_t> getStaticF_BaseTable();

  static inline ::ArrayW<int8_t> getStaticF_ShiftTable();

  /// @brief Method get_IsF16CSupported, addr 0x68c6594, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsF16CSupported();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtph_ps, addr 0x68c66ac, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtph_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtps_ph, addr 0x68c6a88, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtps_ph(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  static inline void setStaticF_BaseTable(::ArrayW<uint16_t> value);

  static inline void setStaticF_ShiftTable(::ArrayW<int8_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_F16C();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_F16C", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_F16C(X86_F16C&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_F16C", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_F16C(X86_F16C const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_F16C) == 0x10, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "u", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::Fma_X86_Union) == 0x4, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Fma
class CORDL_TYPE X86_Fma : public ::System::Object {
public:
  // Declarations
  using Union = ::Unity::Burst::Intrinsics::Fma_X86_Union;

  /// [DebuggerStepThrough]
  /// @brief Method FmaHelper, addr 0x68c6d08, size 0x1c, virtual false, abstract: false, final false
  static inline float_t FmaHelper(float_t a, float_t b, float_t c);

  /// [DebuggerStepThrough]
  /// @brief Method FnmaHelper, addr 0x68c6d24, size 0x1c, virtual false, abstract: false, final false
  static inline float_t FnmaHelper(float_t a, float_t b, float_t c);

  /// [DebuggerStepThrough]
  /// @brief Method fmadd_pd, addr 0x68c6d40, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmadd_ps, addr 0x68c6dd8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmadd_sd, addr 0x68c6ec4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmadd_ss, addr 0x68c6f10, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmaddsub_pd, addr 0x68c6f44, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmaddsub_ps, addr 0x68c6fdc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsub_pd, addr 0x68c7104, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsub_ps, addr 0x68c719c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsub_sd, addr 0x68c7288, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsub_ss, addr 0x68c72d4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsubadd_pd, addr 0x68c7308, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsubadd_ps, addr 0x68c73a0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmadd_pd, addr 0x68c74c0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmadd_ps, addr 0x68c7558, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmadd_sd, addr 0x68c7644, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmadd_ss, addr 0x68c7690, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmsub_pd, addr 0x68c76c4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmsub_ps, addr 0x68c775c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmsub_sd, addr 0x68c7858, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmsub_ss, addr 0x68c78a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method get_IsFmaSupported, addr 0x68c6d00, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsFmaSupported();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmadd_pd, addr 0x68c6d8c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmadd_ps, addr 0x68c6e50, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmaddsub_pd, addr 0x68c6f90, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmaddsub_ps, addr 0x68c7054, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmsub_pd, addr 0x68c7150, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmsub_ps, addr 0x68c7214, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmsubadd_pd, addr 0x68c7354, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmsubadd_ps, addr 0x68c7418, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fnmadd_pd, addr 0x68c750c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fnmadd_ps, addr 0x68c75d0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fnmsub_pd, addr 0x68c7710, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fnmsub_ps, addr 0x68c77dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Fma();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Fma", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Fma(X86_Fma&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Fma", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Fma(X86_Fma const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17741 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Fma) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Popcnt
class CORDL_TYPE X86_Popcnt : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_IsPopcntSupported, addr 0x68c78dc, size 0x54, virtual false, abstract: false, final false
  static inline bool get_IsPopcntSupported();

  /// [DebuggerStepThrough]
  /// @brief Method popcnt_u32, addr 0x68c7930, size 0x28, virtual false, abstract: false, final false
  static inline int32_t popcnt_u32(uint32_t v);

  /// [DebuggerStepThrough]
  /// @brief Method popcnt_u64, addr 0x68c7958, size 0x28, virtual false, abstract: false, final false
  static inline int32_t popcnt_u64(uint64_t v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Popcnt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Popcnt", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Popcnt(X86_Popcnt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Popcnt", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Popcnt(X86_Popcnt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Popcnt) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse
class CORDL_TYPE X86_Sse : public ::System::Object {
public:
  // Declarations
  /// @brief Method SHUFFLE, addr 0x68c81c8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t SHUFFLE(int32_t d, int32_t c, int32_t b, int32_t a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method TRANSPOSE4_PS, addr 0x68c81ec, size 0x11c, virtual false, abstract: false, final false
  static inline void TRANSPOSE4_PS(::by_ref<::Unity::Burst::Intrinsics::v128> row0, ::by_ref<::Unity::Burst::Intrinsics::v128> row1, ::by_ref<::Unity::Burst::Intrinsics::v128> row2,
                                   ::by_ref<::Unity::Burst::Intrinsics::v128> row3);

  /// [DebuggerStepThrough]
  /// @brief Method add_ps, addr 0x68bda74, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_ss, addr 0x68c79c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method and_ps, addr 0x68bdb64, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method andnot_ps, addr 0x68bdba0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_ps, addr 0x68bf0ec, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_ss, addr 0x68c7c68, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpge_ps, addr 0x68bf484, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpge_ss, addr 0x68c7cec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpgt_ps, addr 0x68bf4cc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpgt_ss, addr 0x68c7cc8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmple_ps, addr 0x68bf17c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmple_ss, addr 0x68c7ca8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmplt_ps, addr 0x68bf134, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmplt_ss, addr 0x68c7c88, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpneq_ps, addr 0x68bf230, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpneq_ss, addr 0x68c7d10, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpnge_ps, addr 0x68bf3bc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpnge_ss, addr 0x68c7d94, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpngt_ps, addr 0x68bf420, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpngt_ss, addr 0x68c7d70, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnle_ps, addr 0x68bf2e4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnle_ss, addr 0x68c7d50, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnlt_ps, addr 0x68bf280, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnlt_ss, addr 0x68c7d30, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpord_ps, addr 0x68bf348, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpord_ss, addr 0x68c7db8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpunord_ps, addr 0x68bf1c4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpunord_ss, addr 0x68c7dec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comieq_ss, addr 0x68c7e14, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comieq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comige_ss, addr 0x68c7e64, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comige_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comigt_ss, addr 0x68c7e50, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comigt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comile_ss, addr 0x68c7e3c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comile_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comilt_ss, addr 0x68c7e28, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comilt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comineq_ss, addr 0x68c7e78, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comineq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvt_ss2si, addr 0x68c7f08, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t cvt_ss2si(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi32_ss, addr 0x68c799c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_ss(::Unity::Burst::Intrinsics::v128 a, int32_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi64_ss, addr 0x68c79b0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_ss(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtss_f32, addr 0x68c8090, size 0x8, virtual false, abstract: false, final false
  static inline float_t cvtss_f32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvtss_si32, addr 0x68c7f04, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtss_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtss_si64, addr 0x68c7fcc, size 0xc4, virtual false, abstract: false, final false
  static inline int64_t cvtss_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvtt_ss2si, addr 0x68c80f8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtt_ss2si(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttss_si32, addr 0x68c8098, size 0x60, virtual false, abstract: false, final false
  static inline int32_t cvttss_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttss_si64, addr 0x68c80fc, size 0x60, virtual false, abstract: false, final false
  static inline int64_t cvttss_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method div_ps, addr 0x68bddcc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method div_ss, addr 0x68c7a18, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSseSupported, addr 0x68bd9ec, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSseSupported();

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method load_ps, addr 0x68c7980, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 load_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method loadu_ps, addr 0x68bfdb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method loadu_si16, addr 0x68c8308, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si16(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method loadu_si64, addr 0x68c831c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si64(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method max_ps, addr 0x68be080, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_ss, addr 0x68c7bd8, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_ps, addr 0x68be20c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_ss, addr 0x68c7b48, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method move_ss, addr 0x68c81c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movehl_ps, addr 0x68c81dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movehl_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movelh_ps, addr 0x68c81e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movelh_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movemask_ps, addr 0x68c0e94, size 0x28, virtual false, abstract: false, final false
  static inline int32_t movemask_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mul_ps, addr 0x68be350, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mul_ss, addr 0x68c79fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method or_ps, addr 0x68be3c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method rcp_ps, addr 0x68c0280, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rcp_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method rcp_ss, addr 0x68c7aac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rcp_ss(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method rsqrt_ps, addr 0x68c02f8, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method rsqrt_ss, addr 0x68c7ac8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ss(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_ps, addr 0x68c8168, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_ps(float_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set_ps, addr 0x68c8188, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ps(float_t e3, float_t e2, float_t e1, float_t e0);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method set_ps1, addr 0x68c8178, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ps1(float_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set_ss, addr 0x68c815c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ss(float_t a);

  /// [DebuggerStepThrough]
  /// @brief Method setr_ps, addr 0x68c81a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_ps(float_t e3, float_t e2, float_t e1, float_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method setzero_ps, addr 0x68c12ec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setzero_ps();

  /// [DebuggerStepThrough]
  /// @brief Method shuffle_ps, addr 0x68be4bc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method sqrt_ps, addr 0x68c0420, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method sqrt_ss, addr 0x68c7a34, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_ss(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method store_ps, addr 0x68c798c, size 0x8, virtual false, abstract: false, final false
  static inline void store_ps(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method storeu_ps, addr 0x68bff38, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_ps(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si16, addr 0x68c8314, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si16(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method storeu_si64, addr 0x68c8328, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si64(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method stream_ps, addr 0x68c7994, size 0x8, virtual false, abstract: false, final false
  static inline void stream_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method sub_ps, addr 0x68be5a0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_ss, addr 0x68c79e0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomieq_ss, addr 0x68c7e8c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomieq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomige_ss, addr 0x68c7edc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomige_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomigt_ss, addr 0x68c7ec8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomigt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomile_ss, addr 0x68c7eb4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomile_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomilt_ss, addr 0x68c7ea0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomilt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomineq_ss, addr 0x68c7ef0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomineq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_ps, addr 0x68c0778, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_ps, addr 0x68c07c0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method xor_ps, addr 0x68be610, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse(X86_Sse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse(X86_Sse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17743 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Sse) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse2
class CORDL_TYPE X86_Sse2 : public ::System::Object {
public:
  // Declarations
  /// [DebuggerStepThrough]
  /// @brief Method SHUFFLE2, addr 0x68c8338, size 0x8, virtual false, abstract: false, final false
  static inline int32_t SHUFFLE2(int32_t x, int32_t y);

  /// [DebuggerStepThrough]
  /// @brief Method add_epi16, addr 0x68c83d0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_epi32, addr 0x68c8440, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_epi64, addr 0x68c846c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_epi8, addr 0x68c8360, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_pd, addr 0x68caf94, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_sd, addr 0x68caf80, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method adds_epi16, addr 0x68c8500, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method adds_epi8, addr 0x68c8478, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method adds_epu16, addr 0x68c8604, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method adds_epu8, addr 0x68c858c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method and_pd, addr 0x68cb3a0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method and_si128, addr 0x68ca290, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method andnot_pd, addr 0x68cb3ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method andnot_si128, addr 0x68ca29c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method avg_epu16, addr 0x68c86f4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 avg_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method avg_epu8, addr 0x68c867c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 avg_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method bslli_si128, addr 0x68c9440, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 bslli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method bsrli_si128, addr 0x68c9444, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 bsrli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method clflush, addr 0x68cc008, size 0x4, virtual false, abstract: false, final false
  static inline void clflush(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_epi16, addr 0x68ca334, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_epi32, addr 0x68ca3a8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_epi8, addr 0x68ca2c0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_pd, addr 0x68cb4ec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_sd, addr 0x68cb3d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpge_pd, addr 0x68cb57c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpge_sd, addr 0x68cb424, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_epi16, addr 0x68ca490, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_epi32, addr 0x68ca504, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_epi8, addr 0x68ca41c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_pd, addr 0x68cb558, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpgt_sd, addr 0x68cb40c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmple_pd, addr 0x68cb534, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmple_sd, addr 0x68cb3f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmplt_epi16, addr 0x68ca594, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmplt_epi32, addr 0x68ca5b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmplt_epi8, addr 0x68ca578, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmplt_pd, addr 0x68cb510, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmplt_sd, addr 0x68cb3e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpneq_pd, addr 0x68cb614, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpneq_sd, addr 0x68cb480, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnge_pd, addr 0x68cb6a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpnge_sd, addr 0x68cb4d4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpngt_pd, addr 0x68cb680, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpngt_sd, addr 0x68cb4bc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnle_pd, addr 0x68cb65c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnle_sd, addr 0x68cb4a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnlt_pd, addr 0x68cb638, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnlt_sd, addr 0x68cb494, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpord_pd, addr 0x68cb5a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpord_sd, addr 0x68cb43c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpunord_pd, addr 0x68cb5dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpunord_sd, addr 0x68cb460, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comieq_sd, addr 0x68cb6c8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comieq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comige_sd, addr 0x68cb718, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comige_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comigt_sd, addr 0x68cb704, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comigt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comile_sd, addr 0x68cb6f0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comile_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comilt_sd, addr 0x68cb6dc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comilt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comineq_sd, addr 0x68cb72c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comineq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi32_pd, addr 0x68ca5cc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi32_ps, addr 0x68ca608, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtpd_epi32, addr 0x68cb7fc, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtpd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtpd_ps, addr 0x68cb7b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtpd_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtps_epi32, addr 0x68cbc10, size 0x298, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtps_pd, addr 0x68cb7dc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsd_f64, addr 0x68cbb4c, size 0x8, virtual false, abstract: false, final false
  static inline double_t cvtsd_f64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsd_si32, addr 0x68cb970, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t cvtsd_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsd_si64, addr 0x68cba50, size 0xe0, virtual false, abstract: false, final false
  static inline int64_t cvtsd_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvtsd_si64x, addr 0x68cbb30, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsd_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsd_ss, addr 0x68cbb34, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi128_si32, addr 0x68ca654, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtsi128_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi128_si64, addr 0x68ca658, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsi128_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi128_si64x, addr 0x68ca65c, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsi128_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi32_sd, addr 0x68ca5e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_sd(::Unity::Burst::Intrinsics::v128 a, int32_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi32_si128, addr 0x68ca638, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_si128(int32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi64_sd, addr 0x68ca5f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_sd(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi64_si128, addr 0x68ca644, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_si128(int64_t a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvtsi64x_sd, addr 0x68ca5fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_sd(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi64x_si128, addr 0x68ca64c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_si128(int64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtss_sd, addr 0x68cbb54, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtss_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvttpd_epi32, addr 0x68cbb70, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvttpd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttps_epi32, addr 0x68cbea8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvttps_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttsd_si32, addr 0x68cbbb0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvttsd_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttsd_si64, addr 0x68cbbd0, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttsd_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvttsd_si64x, addr 0x68cbbf0, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttsd_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method div_pd, addr 0x68cafcc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method div_sd, addr 0x68cafb8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method extract_epi16, addr 0x68caad0, size 0x44, virtual false, abstract: false, final false
  static inline uint16_t extract_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method get_IsSse2Supported, addr 0x68c8330, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse2Supported();

  /// [DebuggerStepThrough]
  /// @brief Method insert_epi16, addr 0x68cab14, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t i, int32_t imm8);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method load_si128, addr 0x68cbfe0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 load_si128(void* ptr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method loadu_si128, addr 0x68cbfec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si128(void* ptr);

  /// @brief Method loadu_si32, addr 0x68cbfcc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si32(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method madd_epi16, addr 0x68c876c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 madd_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epi16, addr 0x68c87f0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epu8, addr 0x68c88cc, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_pd, addr 0x68cb078, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_sd, addr 0x68caff0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epi16, addr 0x68c899c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epu8, addr 0x68c8a78, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_pd, addr 0x68cb1a4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_sd, addr 0x68cb11c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method move_epi64, addr 0x68ca8b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method move_sd, addr 0x68cbfc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movemask_epi8, addr 0x68cab5c, size 0x68, virtual false, abstract: false, final false
  static inline int32_t movemask_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method movemask_pd, addr 0x68cbf58, size 0x14, virtual false, abstract: false, final false
  static inline int32_t movemask_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mul_epu32, addr 0x68c8ca0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mul_pd, addr 0x68cb25c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mul_sd, addr 0x68cb248, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mulhi_epi16, addr 0x68c8b48, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhi_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mulhi_epu16, addr 0x68c8bbc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhi_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mullo_epi16, addr 0x68c8c30, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mullo_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method or_pd, addr 0x68cb3b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method or_si128, addr 0x68ca2a8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method packs_epi16, addr 0x68ca8b8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method packs_epi32, addr 0x68ca970, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packs_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method packus_epi16, addr 0x68caa30, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packus_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sad_epu8, addr 0x68c8cac, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sad_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method set1_epi16, addr 0x68ca740, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi16(int16_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_epi32, addr 0x68ca730, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi32(int32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_epi64x, addr 0x68ca728, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi64x(int64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_epi8, addr 0x68ca794, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi8(int8_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_pd, addr 0x68cbf14, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_pd(double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set_epi16, addr 0x68ca684, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method set_epi32, addr 0x68ca670, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method set_epi64x, addr 0x68ca660, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi64x(int64_t e1, int64_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method set_epi8, addr 0x68ca6b4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi8(int8_t e15_, int8_t e14_, int8_t e13_, int8_t e12_, int8_t e11_, int8_t e10_, int8_t e9_, int8_t e8_, int8_t e7_, int8_t e6_, int8_t e5_,
                                                          int8_t e4_, int8_t e3_, int8_t e2_, int8_t e1_, int8_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method set_pd, addr 0x68cbf2c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_pd(double_t e1, double_t e0);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method set_pd1, addr 0x68cbf20, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_pd1(double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set_sd, addr 0x68cbf08, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_sd(double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method setr_epi16, addr 0x68ca800, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method setr_epi32, addr 0x68ca7e8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method setr_epi8, addr 0x68ca830, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi8(int8_t e15_, int8_t e14_, int8_t e13_, int8_t e12_, int8_t e11_, int8_t e10_, int8_t e9_, int8_t e8_, int8_t e7_, int8_t e6_, int8_t e5_,
                                                           int8_t e4_, int8_t e3_, int8_t e2_, int8_t e1_, int8_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method setr_pd, addr 0x68cbf38, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_pd(double_t e1, double_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method setzero_si128, addr 0x68ca8a4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setzero_si128();

  /// [DebuggerStepThrough]
  /// @brief Method shuffle_epi32, addr 0x68cabc4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method shuffle_pd, addr 0x68cbf6c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method shufflehi_epi16, addr 0x68cac40, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shufflehi_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method shufflelo_epi16, addr 0x68cacd4, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shufflelo_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method sll_epi16, addr 0x68c95a8, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method sll_epi32, addr 0x68c9750, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method sll_epi64, addr 0x68c9904, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method slli_epi16, addr 0x68c9530, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method slli_epi32, addr 0x68c9678, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method slli_epi64, addr 0x68c9824, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method slli_si128, addr 0x68c9190, size 0x2b0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method sqrt_pd, addr 0x68cb2f0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method sqrt_sd, addr 0x68cb280, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sra_epi16, addr 0x68c9ac4, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sra_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method sra_epi32, addr 0x68c9c88, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sra_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srai_epi16, addr 0x68c99e0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srai_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srai_epi32, addr 0x68c9ba4, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srai_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srl_epi16, addr 0x68c9e50, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srl_epi32, addr 0x68ca014, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srl_epi64, addr 0x68ca1c4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srli_epi16, addr 0x68c9d6c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srli_epi32, addr 0x68c9f30, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srli_epi64, addr 0x68ca0f4, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srli_si128, addr 0x68c9d68, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method store_si128, addr 0x68cbff8, size 0x8, virtual false, abstract: false, final false
  static inline void store_si128(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method storeu_si128, addr 0x68cc000, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si128(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si32, addr 0x68cbfd8, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si32(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method stream_pd, addr 0x68c8350, size 0x8, virtual false, abstract: false, final false
  static inline void stream_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method stream_si128, addr 0x68c8358, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si128(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method stream_si32, addr 0x68c8340, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si32(int32_t* mem_addr, int32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method stream_si64, addr 0x68c8348, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si64(int64_t* mem_addr, int64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method sub_epi16, addr 0x68c8e70, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_epi32, addr 0x68c8ee0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_epi64, addr 0x68c8f50, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_epi8, addr 0x68c8e00, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_pd, addr 0x68cb37c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_sd, addr 0x68cb368, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method subs_epi16, addr 0x68c901c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method subs_epi8, addr 0x68c8f94, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method subs_epu16, addr 0x68c911c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method subs_epu8, addr 0x68c90a8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomieq_sd, addr 0x68cb740, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomieq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomige_sd, addr 0x68cb790, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomige_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomigt_sd, addr 0x68cb77c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomigt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomile_sd, addr 0x68cb768, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomile_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomilt_sd, addr 0x68cb754, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomilt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomineq_sd, addr 0x68cb7a4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomineq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_epi16, addr 0x68cade4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_epi32, addr 0x68cae60, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_epi64, addr 0x68cae74, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_epi8, addr 0x68cad68, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_pd, addr 0x68cbf44, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_epi16, addr 0x68caef4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_epi32, addr 0x68caf68, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_epi64, addr 0x68caf78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_epi8, addr 0x68cae80, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_pd, addr 0x68cbf50, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method xor_pd, addr 0x68cb3c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method xor_si128, addr 0x68ca2b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse2(X86_Sse2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse2(X86_Sse2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Sse2) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse3
class CORDL_TYPE X86_Sse3 : public ::System::Object {
public:
  // Declarations
  /// [DebuggerStepThrough]
  /// @brief Method addsub_pd, addr 0x68cc054, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 addsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method addsub_ps, addr 0x68cc014, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 addsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSse3Supported, addr 0x68cc00c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse3Supported();

  /// [DebuggerStepThrough]
  /// @brief Method hadd_pd, addr 0x68cc078, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hadd_ps, addr 0x68cc09c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsub_pd, addr 0x68cc0dc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsub_ps, addr 0x68cc100, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movedup_pd, addr 0x68cc140, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movedup_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method movehdup_ps, addr 0x68cc148, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movehdup_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method moveldup_ps, addr 0x68cc154, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 moveldup_ps(::Unity::Burst::Intrinsics::v128 a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse3", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse3(X86_Sse3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse3", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse3(X86_Sse3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Sse3) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_1
class CORDL_TYPE X86_Sse4_1 : public ::System::Object {
public:
  // Declarations
  /// [DebuggerStepThrough]
  /// @brief Method MK_INSERTPS_NDX, addr 0x68cda9c, size 0x10, virtual false, abstract: false, final false
  static inline int32_t MK_INSERTPS_NDX(int32_t srcField, int32_t dstField, int32_t zeroMask);

  /// @brief Method RoundDImpl, addr 0x68cd4b0, size 0x1b0, virtual false, abstract: false, final false
  static inline double_t RoundDImpl(double_t d, int32_t roundingMode);

  /// [DebuggerStepThrough]
  /// @brief Method blend_epi16, addr 0x68cc3e8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method blend_pd, addr 0x68cc174, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method blend_ps, addr 0x68cc1f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method blendv_epi8, addr 0x68cc36c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method blendv_pd, addr 0x68cc26c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method blendv_ps, addr 0x68cc2f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method ceil_pd, addr 0x68cd6dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method ceil_ps, addr 0x68cd7d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method ceil_sd, addr 0x68cd824, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method ceil_ss, addr 0x68cd8c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_epi64, addr 0x68ccf84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi16_epi32, addr 0x68cd098, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi16_epi64, addr 0x68cd0f8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi32_epi64, addr 0x68cd138, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi8_epi16, addr 0x68ccf98, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi8_epi32, addr 0x68ccff8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi8_epi64, addr 0x68cd058, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu16_epi32, addr 0x68cd278, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu16_epi64, addr 0x68cd2d8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu32_epi64, addr 0x68cd318, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu8_epi16, addr 0x68cd178, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu8_epi32, addr 0x68cd1d8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu8_epi64, addr 0x68cd238, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method dp_pd, addr 0x68cc464, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 dp_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method dp_ps, addr 0x68cc4ac, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 dp_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extract_epi32, addr 0x68cc618, size 0x44, virtual false, abstract: false, final false
  static inline int32_t extract_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extract_epi64, addr 0x68cc65c, size 0x44, virtual false, abstract: false, final false
  static inline int64_t extract_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extract_epi8, addr 0x68cc5d4, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t extract_epi8(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extract_ps, addr 0x68cc54c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t extract_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extractf_ps, addr 0x68cc590, size 0x44, virtual false, abstract: false, final false
  static inline float_t extractf_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method floor_pd, addr 0x68cd6a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method floor_ps, addr 0x68cd7cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method floor_sd, addr 0x68cd800, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method floor_ss, addr 0x68cd884, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSse41Supported, addr 0x68cc160, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse41Supported();

  /// [DebuggerStepThrough]
  /// @brief Method insert_epi32, addr 0x68cc768, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t i, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method insert_epi64, addr 0x68cc7b0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi64(::Unity::Burst::Intrinsics::v128 a, int64_t i, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method insert_epi8, addr 0x68cc720, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi8(::Unity::Burst::Intrinsics::v128 a, uint8_t i, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method insert_ps, addr 0x68cc6a0, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method max_epi32, addr 0x68cc8d0, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epi8, addr 0x68cc7f8, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epu16, addr 0x68cca78, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epu32, addr 0x68cc9a4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epi32, addr 0x68ccc24, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epi8, addr 0x68ccb4c, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epu16, addr 0x68ccdcc, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epu32, addr 0x68cccf8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method minpos_epu16, addr 0x68cd8fc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 minpos_epu16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mpsadbw_epu8, addr 0x68cd96c, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mpsadbw_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mul_epi32, addr 0x68cd358, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mullo_epi32, addr 0x68cd364, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mullo_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method packus_epi32, addr 0x68ccea0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packus_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method round_pd, addr 0x68cd660, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_pd(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method round_ps, addr 0x68cd714, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_ps(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method round_sd, addr 0x68cd7dc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method round_ss, addr 0x68cd848, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method stream_load_si128, addr 0x68cc168, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 stream_load_si128(void* mem_addr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method test_all_ones, addr 0x68cd474, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t test_all_ones(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method test_all_zeros, addr 0x68cd430, size 0x18, virtual false, abstract: false, final false
  static inline int32_t test_all_zeros(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method test_mix_ones_zeroes, addr 0x68cd448, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t test_mix_ones_zeroes(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method testc_si128, addr 0x68cd3ec, size 0x18, virtual false, abstract: false, final false
  static inline int32_t testc_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testnzc_si128, addr 0x68cd404, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t testnzc_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testz_si128, addr 0x68cd3d4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t testz_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse4_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse4_1(X86_Sse4_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse4_1(X86_Sse4_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Sse4_1) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// [Flags]
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD) == 0x4, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// [CompilerGenerated]
// [UnsafeValueType]
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

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
  constexpr StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17748 };

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

static_assert(sizeof(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer) == 0x20, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies Unity.Burst.Intrinsics.X86::Sse4_2::StrBoolArray::<Bits>e__FixedBuffer
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct CORDL_TYPE Sse4_2_X86_StrBoolArray {
public:
  // Declarations
  using _Bits_e__FixedBuffer = ::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer;

  /// @brief Method GetBit, addr 0x68cef5c, size 0x10, virtual false, abstract: false, final false
  inline bool GetBit(int32_t aindex, int32_t bindex);

  /// @brief Method SetBit, addr 0x68cef38, size 0x24, virtual false, abstract: false, final false
  inline void SetBit(int32_t aindex, int32_t bindex, bool val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sse4_2_X86_StrBoolArray();

  // Ctor Parameters [CppParam { name: "Bits", ty: "::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr Sse4_2_X86_StrBoolArray(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer Bits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17749 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [FixedBuffer(typeof(System.UInt16), 16)]
  /// @brief Field Bits, offset: 0x0, size: 0x20, def value: None
  ::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer Bits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray, Bits) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray) == 0x20, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.IComparable`1<T>, System.IEquatable`1<T>, System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse4_2
class CORDL_TYPE X86_Sse4_2 : public ::System::Object {
public:
  // Declarations
  using SIDD = ::Unity::Burst::Intrinsics::Sse4_2_X86_SIDD;

  using StrBoolArray = ::Unity::Burst::Intrinsics::Sse4_2_X86_StrBoolArray;

  /// @brief Field crctab, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_crctab, put = setStaticF_crctab)) ::ArrayW<uint32_t> crctab;

  /// @brief Method ComputeStrCmpIntRes2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t ComputeStrCmpIntRes2(T* a, int32_t alen, T* b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes);

  /// @brief Method ComputeStriOutput, addr 0x68cdab4, size 0x48, virtual false, abstract: false, final false
  static inline int32_t ComputeStriOutput(int32_t len, int32_t imm8, int32_t intRes2);

  /// @brief Method ComputeStringLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t ComputeStringLength(T* ptr, int32_t max);

  /// @brief Method ComputeStrmOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Burst::Intrinsics::v128 ComputeStrmOutput(int32_t len, int32_t imm8, T allOnesT, int32_t intRes2);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestra, addr 0x68ceb38, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t cmpestra(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestrc, addr 0x68ce798, size 0x1c4, virtual false, abstract: false, final false
  static inline int32_t cmpestrc(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestri, addr 0x68ce010, size 0x1dc, virtual false, abstract: false, final false
  static inline int32_t cmpestri(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t cmpestri_emulation(T* a, int32_t alen, T* b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestrm, addr 0x68cde34, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpestrm(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Burst::Intrinsics::v128 cmpestrm_emulation(T* a, int32_t alen, T* b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestro, addr 0x68ce978, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t cmpestro(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestrs, addr 0x68ce95c, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t cmpestrs(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestrz, addr 0x68ce77c, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t cmpestrz(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_epi64, addr 0x68cebf8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi64(::Unity::Burst::Intrinsics::v128 val1, ::Unity::Burst::Intrinsics::v128 val2);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistra, addr 0x68ce6d4, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t cmpistra(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistrc, addr 0x68ce2e0, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t cmpistrc(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistri, addr 0x68cdc98, size 0x19c, virtual false, abstract: false, final false
  static inline int32_t cmpistri(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t cmpistri_emulation(T* a, T* b, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistrm, addr 0x68cdafc, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpistrm(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Burst::Intrinsics::v128 cmpistrm_emulation(T* a, T* b, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistro, addr 0x68ce474, size 0x260, virtual false, abstract: false, final false
  static inline int32_t cmpistro(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistrs, addr 0x68ce380, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t cmpistrs(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistrz, addr 0x68ce1ec, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t cmpistrz(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method crc32_u16, addr 0x68ced20, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t crc32_u16(uint32_t crc, uint16_t v);

  /// [DebuggerStepThrough]
  /// @brief Method crc32_u32, addr 0x68cec0c, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t crc32_u32(uint32_t crc, uint32_t v);

  /// [DebuggerStepThrough]
  /// [Obsolete("Use the ulong version of this intrinsic instead.")]
  /// @brief Method crc32_u64, addr 0x68ced90, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t crc32_u64(uint64_t crc_ul, int64_t v);

  /// [DebuggerStepThrough]
  /// @brief Method crc32_u64, addr 0x68cedf8, size 0xa8, virtual false, abstract: false, final false
  static inline uint64_t crc32_u64(uint64_t crc_ul, uint64_t v);

  /// [DebuggerStepThrough]
  /// @brief Method crc32_u8, addr 0x68cec8c, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t crc32_u8(uint32_t crc, uint8_t v);

  static inline ::ArrayW<uint32_t> getStaticF_crctab();

  /// @brief Method get_IsSse42Supported, addr 0x68cdaac, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse42Supported();

  static inline void setStaticF_crctab(::ArrayW<uint32_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Sse4_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Sse4_2(X86_Sse4_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Sse4_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Sse4_2(X86_Sse4_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Sse4_2) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Ssse3
class CORDL_TYPE X86_Ssse3 : public ::System::Object {
public:
  // Declarations
  /// [DebuggerStepThrough]
  /// @brief Method abs_epi16, addr 0x68cf034, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method abs_epi32, addr 0x68cf0f8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method abs_epi8, addr 0x68cef74, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method alignr_epi8, addr 0x68cf238, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 alignr_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t count);

  /// @brief Method get_IsSsse3Supported, addr 0x68cef6c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSsse3Supported();

  /// [DebuggerStepThrough]
  /// @brief Method hadd_epi16, addr 0x68cf2d8, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hadd_epi32, addr 0x68cf41c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hadds_epi16, addr 0x68cf364, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadds_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsub_epi16, addr 0x68cf448, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsub_epi32, addr 0x68cf58c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsubs_epi16, addr 0x68cf4d4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsubs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method maddubs_epi16, addr 0x68cf5b8, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maddubs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mulhrs_epi16, addr 0x68cf658, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhrs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method shuffle_epi8, addr 0x68cf1b8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sign_epi16, addr 0x68cf754, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sign_epi32, addr 0x68cf7d4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sign_epi8, addr 0x68cf6d4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_Ssse3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_Ssse3", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_Ssse3(X86_Ssse3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_Ssse3", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_Ssse3(X86_Ssse3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17751 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Ssse3) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/DoSetCSRTrampoline_00000129$PostfixBurstDelegate
class CORDL_TYPE X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x68cf8d4, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t bits, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_2);

  /// @brief Method EndInvoke, addr 0x68cf92c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x68cf8c0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t bits);

  static inline ::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                           ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x68cf854, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate(X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate(X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17752 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.IntPtr, System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/DoSetCSRTrampoline_00000129$BurstDirectCall
class CORDL_TYPE X86_DoSetCSRTrampoline_00000129$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x68cfa44, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x68cf938, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x68cfa5c, size 0x90, virtual false, abstract: false, final false
  static inline void Invoke(int32_t bits);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_DoSetCSRTrampoline_00000129$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_DoSetCSRTrampoline_00000129$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_DoSetCSRTrampoline_00000129$BurstDirectCall(X86_DoSetCSRTrampoline_00000129$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_DoSetCSRTrampoline_00000129$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_DoSetCSRTrampoline_00000129$BurstDirectCall(X86_DoSetCSRTrampoline_00000129$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/DoGetCSRTrampoline_0000012A$PostfixBurstDelegate
class CORDL_TYPE X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x68cfb68, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method EndInvoke, addr 0x68cfb84, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x68cfb54, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke();

  static inline ::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                           ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x68cfaec, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate(X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate(X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17754 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// Dependencies System.IntPtr, System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/DoGetCSRTrampoline_0000012A$BurstDirectCall
class CORDL_TYPE X86_DoGetCSRTrampoline_0000012A$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x68cfcb4, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x68cfba8, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x68cfccc, size 0x80, virtual false, abstract: false, final false
  static inline int32_t Invoke();

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_DoGetCSRTrampoline_0000012A$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86_DoGetCSRTrampoline_0000012A$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86_DoGetCSRTrampoline_0000012A$BurstDirectCall(X86_DoGetCSRTrampoline_0000012A$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86_DoGetCSRTrampoline_0000012A$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86_DoGetCSRTrampoline_0000012A$BurstDirectCall(X86_DoGetCSRTrampoline_0000012A$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
// [BurstCompile]
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

  using DoGetCSRTrampoline_0000012A$BurstDirectCall = ::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$BurstDirectCall;

  using DoGetCSRTrampoline_0000012A$PostfixBurstDelegate = ::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate;

  using DoSetCSRTrampoline_00000129$BurstDirectCall = ::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$BurstDirectCall;

  using DoSetCSRTrampoline_00000129$PostfixBurstDelegate = ::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate;

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

  /// @brief Method BurstIntrinsicGetCSRFromManaged, addr 0x68bd9c0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t BurstIntrinsicGetCSRFromManaged();

  /// @brief Method BurstIntrinsicSetCSRFromManaged, addr 0x68bd9bc, size 0x4, virtual false, abstract: false, final false
  static inline void BurstIntrinsicSetCSRFromManaged(int32_t _);

  /// [BurstCompile(CompileSynchronously = true)]
  /// [MonoPInvokeCallback(typeof(Unity.Burst.Intrinsics.Unity.Burst.Intrinsics.X86::DoGetCSRTrampoline_0000012A$PostfixBurstDelegate))]
  /// @brief Method DoGetCSRTrampoline, addr 0x68bd91c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t DoGetCSRTrampoline();

  /// [BurstCompile(CompileSynchronously = true)]
  /// @brief Method DoGetCSRTrampoline$BurstManaged, addr 0x68bd9f4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t DoGetCSRTrampoline$BurstManaged();

  /// [BurstCompile(CompileSynchronously = true)]
  /// [MonoPInvokeCallback(typeof(Unity.Burst.Intrinsics.Unity.Burst.Intrinsics.X86::DoSetCSRTrampoline_00000129$PostfixBurstDelegate))]
  /// @brief Method DoSetCSRTrampoline, addr 0x68bd914, size 0x8, virtual false, abstract: false, final false
  static inline void DoSetCSRTrampoline(int32_t bits);

  /// [BurstCompile(CompileSynchronously = true)]
  /// @brief Method DoSetCSRTrampoline$BurstManaged, addr 0x68bd9e8, size 0x4, virtual false, abstract: false, final false
  static inline void DoSetCSRTrampoline$BurstManaged(int32_t bits);

  /// @brief Method GenericCSharpLoad, addr 0x68bd924, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 GenericCSharpLoad(void* ptr);

  /// @brief Method GenericCSharpStore, addr 0x68bd930, size 0x8, virtual false, abstract: false, final false
  static inline void GenericCSharpStore(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method IsNaN, addr 0x68bd994, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNaN(uint32_t v);

  /// @brief Method IsNaN, addr 0x68bd9a8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNaN(uint64_t v);

  /// @brief Method Saturate_To_Int16, addr 0x68bd964, size 0x20, virtual false, abstract: false, final false
  static inline int16_t Saturate_To_Int16(int32_t val);

  /// @brief Method Saturate_To_Int8, addr 0x68bd938, size 0x1c, virtual false, abstract: false, final false
  static inline int8_t Saturate_To_Int8(int32_t val);

  /// @brief Method Saturate_To_UnsignedInt16, addr 0x68bd984, size 0x10, virtual false, abstract: false, final false
  static inline uint16_t Saturate_To_UnsignedInt16(int32_t val);

  /// @brief Method Saturate_To_UnsignedInt8, addr 0x68bd954, size 0x10, virtual false, abstract: false, final false
  static inline uint8_t Saturate_To_UnsignedInt8(int32_t val);

  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method get_MXCSR, addr 0x68bd9d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::X86_MXCSRBits get_MXCSR();

  /// @brief Method getcsr_raw, addr 0x68bd9c8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t getcsr_raw();

  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method set_MXCSR, addr 0x68bd9e0, size 0x8, virtual false, abstract: false, final false
  static inline void set_MXCSR(::Unity::Burst::Intrinsics::X86_MXCSRBits value);

  /// @brief Method setcsr_raw, addr 0x68bd9d0, size 0x8, virtual false, abstract: false, final false
  static inline void setcsr_raw(int32_t bits);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X86();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X86(X86&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X86(X86 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
