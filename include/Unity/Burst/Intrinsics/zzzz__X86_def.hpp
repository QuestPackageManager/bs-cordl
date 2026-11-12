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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17772 };

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

  /// @brief Method Select4, addr 0x68fd904, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 Select4(::Unity::Burst::Intrinsics::v256 src1, ::Unity::Burst::Intrinsics::v256 src2, int32_t control);

  /// [DebuggerStepThrough]
  /// @brief Method broadcast_ss, addr 0x68fdae4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcast_ss(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method cmp_pd, addr 0x68fc378, size 0x3c8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmp_ps, addr 0x68fc7a4, size 0x6a4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmp_sd, addr 0x68fd2d4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmp_ss, addr 0x68fd2ec, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmp_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method get_IsAvxSupported, addr 0x68fb758, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvxSupported();

  /// [DebuggerStepThrough]
  /// @brief Method maskload_pd, addr 0x68fdcc4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method maskload_ps, addr 0x68fdda8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method maskstore_pd, addr 0x68fdd40, size 0x1c, virtual false, abstract: false, final false
  static inline void maskstore_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method maskstore_ps, addr 0x68fde48, size 0x3c, virtual false, abstract: false, final false
  static inline void maskstore_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_pd, addr 0x68fb760, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_ps, addr 0x68fb778, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_addsub_pd, addr 0x68fb810, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_addsub_ps, addr 0x68fb838, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_and_pd, addr 0x68fb890, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_and_ps, addr 0x68fb8a8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_andnot_pd, addr 0x68fb8cc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_andnot_ps, addr 0x68fb8e4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blend_pd, addr 0x68fb908, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blend_ps, addr 0x68fb974, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blendv_pd, addr 0x68fb9e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blendv_ps, addr 0x68fba4c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcast_pd, addr 0x68fdb20, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_pd(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcast_ps, addr 0x68fdb04, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcast_sd, addr 0x68fdaf4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_sd(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcast_ss, addr 0x68fdad8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ss(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castpd128_pd256, addr 0x68ff054, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd128_pd256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castpd256_pd128, addr 0x68ff024, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castpd256_pd128(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castpd_ps, addr 0x68fefd0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castpd_si256, addr 0x68feff4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_si256(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castps128_ps256, addr 0x68ff03c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps128_ps256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castps256_ps128, addr 0x68ff018, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castps256_ps128(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castps_pd, addr 0x68fefdc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castps_si256, addr 0x68fefe8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_si256(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castsi128_si256, addr 0x68ff060, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castsi256_pd, addr 0x68ff00c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castsi256_ps, addr 0x68ff000, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_castsi256_si128, addr 0x68ff030, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_castsi256_si128(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_ceil_pd, addr 0x68fe280, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_pd(::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_ceil_ps, addr 0x68fe3b0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_ps(::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmp_pd, addr 0x68fc740, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmp_ps, addr 0x68fd270, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi32_pd, addr 0x68fd318, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi32_ps, addr 0x68fd33c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_cvtpd_epi32, addr 0x68fd494, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtpd_ps, addr 0x68fd380, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtps_epi32, addr 0x68fd3b4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtps_pd, addr 0x68fd400, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtss_f32, addr 0x68fd55c, size 0x8, virtual false, abstract: false, final false
  static inline float_t mm256_cvtss_f32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvttpd_epi32, addr 0x68fd434, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_cvttpd_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvttps_epi32, addr 0x68fd4d0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvttps_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_div_pd, addr 0x68fbab8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_div_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_div_ps, addr 0x68fbad0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_div_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_dp_ps, addr 0x68fbb68, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_dp_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extract_epi32, addr 0x68ff218, size 0xc, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extract_epi64, addr 0x68ff224, size 0xc, virtual false, abstract: false, final false
  static inline int64_t mm256_extract_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extractf128_pd, addr 0x68fd588, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extractf128_ps, addr 0x68fd564, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_ps(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extractf128_si256, addr 0x68fd5ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_floor_pd, addr 0x68fe2e8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_pd(::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_floor_ps, addr 0x68fe40c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_ps(::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadd_pd, addr 0x68fbbd4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadd_ps, addr 0x68fbc00, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsub_pd, addr 0x68fbc7c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsub_ps, addr 0x68fbca8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insert_epi16, addr 0x68ff128, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insert_epi32, addr 0x68ff178, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insert_epi64, addr 0x68ff1c8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi64(::Unity::Burst::Intrinsics::v256 a, int64_t i, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insert_epi8, addr 0x68ff0d8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi8(::Unity::Burst::Intrinsics::v256 a, int32_t i, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insertf128_pd, addr 0x68fdb5c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insertf128_ps, addr 0x68fdb30, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_insertf128_si256, addr 0x68fdb88, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_lddqu_si256, addr 0x68fdf64, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_lddqu_si256(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_load_pd, addr 0x68fdbcc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_pd(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_load_ps, addr 0x68fdbb4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_load_si256, addr 0x68fdc14, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_load_si256(void* ptr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_loadu2_m128, addr 0x68fdc44, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128(void* hiaddr, void* loaddr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_loadu2_m128d, addr 0x68fdc60, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128d(void* hiaddr, void* loaddr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_loadu2_m128i, addr 0x68fdc70, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128i(void* hiaddr, void* loaddr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_loadu_pd, addr 0x68fdbe4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_pd(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_loadu_ps, addr 0x68fdbfc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_loadu_si256, addr 0x68fdc2c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_si256(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskload_pd, addr 0x68fdcec, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskload_ps, addr 0x68fddf4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskstore_pd, addr 0x68fdd5c, size 0x4c, virtual false, abstract: false, final false
  static inline void mm256_maskstore_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskstore_ps, addr 0x68fde84, size 0x84, virtual false, abstract: false, final false
  static inline void mm256_maskstore_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_pd, addr 0x68fbd24, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_ps, addr 0x68fbd84, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_pd, addr 0x68fbeb0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_ps, addr 0x68fbf10, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movedup_pd, addr 0x68fdf50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_movedup_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movehdup_ps, addr 0x68fdf08, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_movehdup_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_moveldup_ps, addr 0x68fdf2c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_moveldup_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movemask_pd, addr 0x68feb58, size 0x38, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movemask_ps, addr 0x68feb90, size 0x60, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mul_pd, addr 0x68fc03c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mul_ps, addr 0x68fc054, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_or_pd, addr 0x68fc0ec, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_or_ps, addr 0x68fc104, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute2f128_pd, addr 0x68fd9d0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute2f128_ps, addr 0x68fd94c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute2f128_si256, addr 0x68fda54, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute_pd, addr 0x68fd804, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute_ps, addr 0x68fd6a8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_ps(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permutevar_pd, addr 0x68fd76c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permutevar_ps, addr 0x68fd648, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_rcp_ps, addr 0x68fdf94, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_rcp_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_round_pd, addr 0x68fe208, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_round_pd(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_round_ps, addr 0x68fe350, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_round_ps(::Unity::Burst::Intrinsics::v256 a, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_rsqrt_ps, addr 0x68fe010, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_rsqrt_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_epi16, addr 0x68fefac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi16(int16_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_epi32, addr 0x68fefb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi32(int32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_epi64x, addr 0x68fefc4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi64x(int64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_epi8, addr 0x68fefa0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi8(uint8_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_pd, addr 0x68fef88, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_pd(double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set1_ps, addr 0x68fef94, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_ps(float_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_epi16, addr 0x68fed40, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi16(int16_t e15_, int16_t e14_, int16_t e13_, int16_t e12_, int16_t e11_, int16_t e10_, int16_t e9_, int16_t e8_, int16_t e7_, int16_t e6_,
                                                                 int16_t e5_, int16_t e4_, int16_t e3_, int16_t e2_, int16_t e1_, int16_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_epi32, addr 0x68feda4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi32(int32_t e7, int32_t e6, int32_t e5, int32_t e4, int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_epi64x, addr 0x68fedb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi64x(int64_t e3, int64_t e2, int64_t e1, int64_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_epi8, addr 0x68fec5c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi8(uint8_t e31_, uint8_t e30_, uint8_t e29_, uint8_t e28_, uint8_t e27_, uint8_t e26_, uint8_t e25_, uint8_t e24_, uint8_t e23_,
                                                                uint8_t e22_, uint8_t e21_, uint8_t e20_, uint8_t e19_, uint8_t e18_, uint8_t e17_, uint8_t e16_, uint8_t e15_, uint8_t e14_,
                                                                uint8_t e13_, uint8_t e12_, uint8_t e11_, uint8_t e10_, uint8_t e9_, uint8_t e8_, uint8_t e7_, uint8_t e6_, uint8_t e5_, uint8_t e4_,
                                                                uint8_t e3_, uint8_t e2_, uint8_t e1_, uint8_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_m128, addr 0x68fdc54, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_m128d, addr 0x68fedc4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128d(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_m128i, addr 0x68fedd0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128i(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_pd, addr 0x68fec3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_pd(double_t d, double_t c, double_t b, double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_set_ps, addr 0x68fec48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_set_ps(float_t e7, float_t e6, float_t e5, float_t e4, float_t e3, float_t e2, float_t e1, float_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_epi16, addr 0x68feee0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi16(int16_t e15_, int16_t e14_, int16_t e13_, int16_t e12_, int16_t e11_, int16_t e10_, int16_t e9_, int16_t e8_, int16_t e7_,
                                                                  int16_t e6_, int16_t e5_, int16_t e4_, int16_t e3_, int16_t e2_, int16_t e1_, int16_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_epi32, addr 0x68fef44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi32(int32_t e7, int32_t e6, int32_t e5, int32_t e4, int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_epi64x, addr 0x68fef58, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi64x(int64_t e3, int64_t e2, int64_t e1, int64_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_epi8, addr 0x68fedfc, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi8(uint8_t e31_, uint8_t e30_, uint8_t e29_, uint8_t e28_, uint8_t e27_, uint8_t e26_, uint8_t e25_, uint8_t e24_, uint8_t e23_,
                                                                 uint8_t e22_, uint8_t e21_, uint8_t e20_, uint8_t e19_, uint8_t e18_, uint8_t e17_, uint8_t e16_, uint8_t e15_, uint8_t e14_,
                                                                 uint8_t e13_, uint8_t e12_, uint8_t e11_, uint8_t e10_, uint8_t e9_, uint8_t e8_, uint8_t e7_, uint8_t e6_, uint8_t e5_, uint8_t e4_,
                                                                 uint8_t e3_, uint8_t e2_, uint8_t e1_, uint8_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_m128, addr 0x68fef64, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_m128d, addr 0x68fef70, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128d(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_m128i, addr 0x68fef7c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128i(::Unity::Burst::Intrinsics::v128 hi, ::Unity::Burst::Intrinsics::v128 lo);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_pd, addr 0x68feddc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_pd(double_t d, double_t c, double_t b, double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setr_ps, addr 0x68fede8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_ps(float_t e7, float_t e6, float_t e5, float_t e4, float_t e3, float_t e2, float_t e1, float_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setzero_pd, addr 0x68fec18, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_pd();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setzero_ps, addr 0x68fec24, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_ps();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_setzero_si256, addr 0x68fec30, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_si256();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shuffle_pd, addr 0x68fc128, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shuffle_ps, addr 0x68fc1b4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sqrt_pd, addr 0x68fe0ec, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_pd(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sqrt_ps, addr 0x68fe138, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_ps(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_store_pd, addr 0x68fdbd8, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_pd(void* ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_store_ps, addr 0x68fdbc0, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_ps(void* ptr, ::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_store_si256, addr 0x68fdc20, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_store_si256(void* ptr, ::Unity::Burst::Intrinsics::v256 v);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_storeu2_m128, addr 0x68fdc80, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128(void* hiaddr, void* loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_storeu2_m128d, addr 0x68fdc9c, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128d(void* hiaddr, void* loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_storeu2_m128i, addr 0x68fdcb0, size 0x14, virtual false, abstract: false, final false
  static inline void mm256_storeu2_m128i(void* hiaddr, void* loaddr, ::Unity::Burst::Intrinsics::v256 val);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_storeu_pd, addr 0x68fdbf0, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_pd(void* ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_storeu_ps, addr 0x68fdc08, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_ps(void* ptr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_storeu_si256, addr 0x68fdc38, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_storeu_si256(void* ptr, ::Unity::Burst::Intrinsics::v256 v);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_stream_pd, addr 0x68fdf7c, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_stream_ps, addr 0x68fdf88, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_stream_si256, addr 0x68fdf70, size 0xc, virtual false, abstract: false, final false
  static inline void mm256_stream_si256(void* mem_addr, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_pd, addr 0x68fc28c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_ps, addr 0x68fc2a4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testc_pd, addr 0x68fe628, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testc_ps, addr 0x68fe8d0, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testc_si256, addr 0x68fe564, size 0x38, virtual false, abstract: false, final false
  static inline int32_t mm256_testc_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testnzc_pd, addr 0x68fe658, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testnzc_ps, addr 0x68fe900, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testnzc_si256, addr 0x68fe59c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t mm256_testnzc_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testz_pd, addr 0x68fe5f8, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testz_ps, addr 0x68fe8a0, size 0x30, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_testz_si256, addr 0x68fe52c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t mm256_testz_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_undefined_pd, addr 0x68ff09c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_pd();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_undefined_ps, addr 0x68ff090, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_ps();

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_undefined_si256, addr 0x68ff0a8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_si256();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_pd, addr 0x68fe468, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_unpackhi_ps, addr 0x68fe4a0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_pd, addr 0x68fe484, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_unpacklo_ps, addr 0x68fe4e8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_xor_pd, addr 0x68fc33c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_xor_ps, addr 0x68fc354, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_zeroall, addr 0x68fd5d0, size 0x4, virtual false, abstract: false, final false
  static inline void mm256_zeroall();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_zeroupper, addr 0x68fd5d4, size 0x4, virtual false, abstract: false, final false
  static inline void mm256_zeroupper();

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_zextpd128_pd256, addr 0x68ff0c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextpd128_pd256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_zextps128_ps256, addr 0x68ff0b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextps128_ps256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method mm256_zextsi128_si256, addr 0x68ff0cc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_zextsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method permute_pd, addr 0x68fd8a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permute_pd(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method permute_ps, addr 0x68fd6a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permute_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method permutevar_pd, addr 0x68fd708, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permutevar_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method permutevar_ps, addr 0x68fd5d8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 permutevar_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testc_pd, addr 0x68fe78c, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testc_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testc_ps, addr 0x68fea34, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testc_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testnzc_pd, addr 0x68fe7fc, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t testnzc_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testnzc_ps, addr 0x68feaa4, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t testnzc_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testz_pd, addr 0x68fe71c, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testz_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testz_ps, addr 0x68fe9c4, size 0x70, virtual false, abstract: false, final false
  static inline int32_t testz_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method undefined_pd, addr 0x68ff078, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_pd();

  /// [DebuggerStepThrough]
  /// @brief Method undefined_ps, addr 0x68ff06c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 undefined_ps();

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)5)]
  /// @brief Method undefined_si128, addr 0x68ff084, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17773 };

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
  /// @brief Method blend_epi32, addr 0x69015e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastb_epi8, addr 0x6901d70, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastb_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastd_epi32, addr 0x6901d98, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastq_epi64, addr 0x6901da4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastq_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastsd_pd, addr 0x6901d5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastsd_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastss_ps, addr 0x6901d44, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastss_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method broadcastw_epi16, addr 0x6901d84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 broadcastw_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// @brief Method get_IsAvx2Supported, addr 0x68ff230, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvx2Supported();

  /// [DebuggerStepThrough]
  /// @brief Method i32gather_epi32, addr 0x69030b4, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi32(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i32gather_epi64, addr 0x6903174, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi64(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i32gather_pd, addr 0x6902bb8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_pd(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i32gather_ps, addr 0x6902c5c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i32gather_ps(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i64gather_epi32, addr 0x6903218, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi32(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i64gather_epi64, addr 0x69032bc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi64(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i64gather_pd, addr 0x6902d1c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_pd(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method i64gather_ps, addr 0x6902ddc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 i64gather_ps(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i32gather_epi32, addr 0x6903c88, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi32(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i32gather_epi64, addr 0x6903d40, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi64(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i32gather_pd, addr 0x69039ac, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_pd(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i32gather_ps, addr 0x6903a64, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_ps(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i64gather_epi32, addr 0x6903df8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i64gather_epi64, addr 0x6903eac, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi64(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                      ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i64gather_pd, addr 0x6903b1c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_pd(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mask_i64gather_ps, addr 0x6903bd4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_ps(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                   ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method maskload_epi32, addr 0x69022c8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_epi32(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method maskload_epi64, addr 0x6902330, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maskload_epi64(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method maskstore_epi32, addr 0x69023a0, size 0x64, virtual false, abstract: false, final false
  static inline void maskstore_epi32(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method maskstore_epi64, addr 0x6902404, size 0x6c, virtual false, abstract: false, final false
  static inline void maskstore_epi64(void* mem_addr, ::Unity::Burst::Intrinsics::v128 mask, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_abs_epi16, addr 0x68ffab0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi16(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_abs_epi32, addr 0x68ffafc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_abs_epi8, addr 0x68ffa64, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi8(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_epi16, addr 0x68ffba8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_epi32, addr 0x68ffc08, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_epi64, addr 0x68ffc74, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_add_epi8, addr 0x68ffb48, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_adds_epi16, addr 0x68ffcec, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_adds_epi8, addr 0x68ffc8c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_adds_epu16, addr 0x68ffdac, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_adds_epu8, addr 0x68ffd4c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_alignr_epi8, addr 0x6901654, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_alignr_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_and_si256, addr 0x68ffa04, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_and_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_andnot_si256, addr 0x68ffa1c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_avg_epu16, addr 0x6900194, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_avg_epu8, addr 0x6900134, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blend_epi16, addr 0x690172c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blend_epi32, addr 0x69015e8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_blendv_epi8, addr 0x69016c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastb_epi8, addr 0x6901dac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastb_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastd_epi32, addr 0x6901dc4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastq_epi64, addr 0x6901dd0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastq_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastsd_pd, addr 0x6901d64, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsd_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastsi128_si256, addr 0x6901ddc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsi128_si256(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastss_ps, addr 0x6901d50, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastss_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_broadcastw_epi16, addr 0x6901db8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastw_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_bslli_epi128, addr 0x69009a0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_bslli_epi128(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_bsrli_epi128, addr 0x6900a60, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_bsrli_epi128(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpeq_epi16, addr 0x68ff2fc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpeq_epi32, addr 0x68ff35c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpeq_epi64, addr 0x68ff3bc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpeq_epi8, addr 0x68ff29c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpgt_epi16, addr 0x68ff434, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpgt_epi32, addr 0x68ff494, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpgt_epi64, addr 0x68ff4f4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cmpgt_epi8, addr 0x68ff3d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi16_epi32, addr 0x6901f20, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi16_epi64, addr 0x6901f88, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi32_epi64, addr 0x6901ff0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi8_epi16, addr 0x6901de8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi8_epi32, addr 0x6901e50, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepi8_epi64, addr 0x6901eb8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu16_epi32, addr 0x6902190, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu16_epi64, addr 0x69021f8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu32_epi64, addr 0x6902260, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu8_epi16, addr 0x6902058, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu8_epi32, addr 0x69020c0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtepu8_epi64, addr 0x6902128, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtsd_f64, addr 0x68ff284, size 0x8, virtual false, abstract: false, final false
  static inline double_t mm256_cvtsd_f64(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtsi256_si32, addr 0x68ff28c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mm256_cvtsi256_si32(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtsi256_si64, addr 0x68ff294, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mm256_cvtsi256_si64(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extract_epi16, addr 0x68ff278, size 0xc, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extract_epi8, addr 0x68ff26c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t mm256_extract_epi8(::Unity::Burst::Intrinsics::v256 a, int32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_extracti128_si256, addr 0x6901cb8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_extracti128_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadd_epi16, addr 0x69001f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadd_epi32, addr 0x6900254, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hadds_epi16, addr 0x69002c0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hadds_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsub_epi16, addr 0x6900320, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsub_epi32, addr 0x6900380, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_hsubs_epi16, addr 0x69003dc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_hsubs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i32gather_epi32, addr 0x69027e4, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi32(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i32gather_epi64, addr 0x6902e80, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi64(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i32gather_pd, addr 0x69028b4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_pd(void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i32gather_ps, addr 0x690296c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_ps(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i64gather_epi32, addr 0x6902f38, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_epi32(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i64gather_epi64, addr 0x6902fe4, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_epi64(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i64gather_pd, addr 0x6902a3c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_pd(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_i64gather_ps, addr 0x6902b0c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_ps(void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_inserti128_si256, addr 0x6901d18, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_inserti128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_madd_epi16, addr 0x690043c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_madd_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maddubs_epi16, addr 0x690049c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maddubs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i32gather_epi32, addr 0x6903694, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi32(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i32gather_epi64, addr 0x690375c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi64(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i32gather_pd, addr 0x690337c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_pd(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v128 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i32gather_ps, addr 0x6903444, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_ps(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i64gather_epi32, addr 0x69038ec, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i64gather_epi64, addr 0x6903824, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_epi64(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                            ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i64gather_pd, addr 0x690350c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_pd(::Unity::Burst::Intrinsics::v256 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v256 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mask_i64gather_ps, addr 0x69035d4, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_ps(::Unity::Burst::Intrinsics::v128 src, void* base_addr, ::Unity::Burst::Intrinsics::v256 vindex,
                                                                         ::Unity::Burst::Intrinsics::v128 mask, int32_t scale);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskload_epi32, addr 0x6902470, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi32(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskload_epi64, addr 0x69024d8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi64(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskstore_epi32, addr 0x6902540, size 0x24, virtual false, abstract: false, final false
  static inline void mm256_maskstore_epi32(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_maskstore_epi64, addr 0x6902564, size 0x24, virtual false, abstract: false, final false
  static inline void mm256_maskstore_epi64(void* mem_addr, ::Unity::Burst::Intrinsics::v256 mask, ::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epi16, addr 0x68ff5e4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epi32, addr 0x68ff644, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epi8, addr 0x68ff584, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epu16, addr 0x68ff704, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epu32, addr 0x68ff764, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_max_epu8, addr 0x68ff6a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epi16, addr 0x68ff824, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epi32, addr 0x68ff884, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epi8, addr 0x68ff7c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epu16, addr 0x68ff944, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epu32, addr 0x68ff9a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_min_epu8, addr 0x68ff8e4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_movemask_epi8, addr 0x68ff238, size 0x34, virtual false, abstract: false, final false
  static inline int32_t mm256_movemask_epi8(::Unity::Burst::Intrinsics::v256 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mpsadbw_epu8, addr 0x69008d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mpsadbw_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mul_epi32, addr 0x69006b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mul_epu32, addr 0x690067c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epu32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mulhi_epi16, addr 0x69004fc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mulhi_epu16, addr 0x690055c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mulhrs_epi16, addr 0x6900814, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhrs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mullo_epi16, addr 0x69005bc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_mullo_epi32, addr 0x690061c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_or_si256, addr 0x68ffa34, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_or_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_packs_epi16, addr 0x6901798, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_packs_epi32, addr 0x69017f8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_packus_epi16, addr 0x6901858, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_packus_epi32, addr 0x69018b8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute2x128_si256, addr 0x6902754, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2x128_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute4x64_epi64, addr 0x6902674, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permute4x64_pd, addr 0x69026dc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_pd(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permutevar8x32_epi32, addr 0x6902588, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 idx);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_permutevar8x32_ps, addr 0x69025f0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 idx);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sad_epu8, addr 0x6900874, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sad_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shuffle_epi32, addr 0x6901b98, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shuffle_epi8, addr 0x6901b38, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shufflehi_epi16, addr 0x6901bf8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflehi_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_shufflelo_epi16, addr 0x6901c58, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflelo_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sign_epi16, addr 0x6900754, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sign_epi32, addr 0x69007b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sign_epi8, addr 0x69006f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sll_epi16, addr 0x6900ac0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sll_epi32, addr 0x6900b2c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sll_epi64, addr 0x6900b98, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_slli_epi16, addr 0x6900c04, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_slli_epi32, addr 0x6900c64, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_slli_epi64, addr 0x6900cc4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_slli_si256, addr 0x6900940, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sllv_epi32, addr 0x6900d24, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sllv_epi64, addr 0x6900dfc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sra_epi16, addr 0x6900edc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sra_epi32, addr 0x6900f48, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srai_epi16, addr 0x6900fb4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srai_epi32, addr 0x6901014, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srav_epi32, addr 0x6901074, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srav_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srl_epi16, addr 0x69011c4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srl_epi32, addr 0x6901230, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srl_epi64, addr 0x690129c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srli_epi16, addr 0x6901308, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi16(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srli_epi32, addr 0x6901368, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi32(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srli_epi64, addr 0x69013c8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi64(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srli_si256, addr 0x6900a08, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_si256(::Unity::Burst::Intrinsics::v256 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srlv_epi32, addr 0x6901428, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_srlv_epi64, addr 0x6901500, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 count);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_stream_load_si256, addr 0x69027d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_stream_load_si256(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_epi16, addr 0x68ffe6c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_epi32, addr 0x68ffecc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_epi64, addr 0x68fff2c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_sub_epi8, addr 0x68ffe0c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_subs_epi16, addr 0x6900014, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_subs_epi8, addr 0x68fffb4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_subs_epu16, addr 0x69000d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_subs_epu8, addr 0x6900074, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_epi16, addr 0x6901978, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_epi32, addr 0x69019d8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_epi64, addr 0x6901a0c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpackhi_epi8, addr 0x6901918, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_epi16, addr 0x6901a88, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi16(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_epi32, addr 0x6901ae8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi32(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_epi64, addr 0x6901b1c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi64(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_unpacklo_epi8, addr 0x6901a28, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi8(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_xor_si256, addr 0x68ffa4c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_si256(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b);

  /// [DebuggerStepThrough]
  /// @brief Method sllv_epi32, addr 0x6900d7c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sllv_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method sllv_epi64, addr 0x6900e54, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sllv_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srav_epi32, addr 0x69010cc, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srav_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srlv_epi32, addr 0x6901480, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srlv_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srlv_epi64, addr 0x6901558, size 0x88, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17774 };

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
  /// @brief Method andn_u32, addr 0x6903f6c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t andn_u32(uint32_t a, uint32_t b);

  /// [DebuggerStepThrough]
  /// @brief Method andn_u64, addr 0x6903f74, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t andn_u64(uint64_t a, uint64_t b);

  /// [DebuggerStepThrough]
  /// @brief Method bextr2_u32, addr 0x6903fc4, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t bextr2_u32(uint32_t a, uint32_t control);

  /// [DebuggerStepThrough]
  /// @brief Method bextr2_u64, addr 0x6903ff4, size 0x30, virtual false, abstract: false, final false
  static inline uint64_t bextr2_u64(uint64_t a, uint64_t control);

  /// [DebuggerStepThrough]
  /// @brief Method bextr_u32, addr 0x6903f7c, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t bextr_u32(uint32_t a, uint32_t start, uint32_t len);

  /// [DebuggerStepThrough]
  /// @brief Method bextr_u64, addr 0x6903fa0, size 0x24, virtual false, abstract: false, final false
  static inline uint64_t bextr_u64(uint64_t a, uint32_t start, uint32_t len);

  /// [DebuggerStepThrough]
  /// @brief Method blsi_u32, addr 0x6904024, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsi_u32(uint32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsi_u64, addr 0x6904030, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsi_u64(uint64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsmsk_u32, addr 0x690403c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsmsk_u32(uint32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsmsk_u64, addr 0x6904048, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsmsk_u64(uint64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsr_u32, addr 0x6904054, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t blsr_u32(uint32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method blsr_u64, addr 0x6904060, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t blsr_u64(uint64_t a);

  /// @brief Method get_IsBmi1Supported, addr 0x6903f64, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsBmi1Supported();

  /// [DebuggerStepThrough]
  /// @brief Method tzcnt_u32, addr 0x690406c, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t tzcnt_u32(uint32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method tzcnt_u64, addr 0x69040c4, size 0x64, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17775 };

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
  /// @brief Method bzhi_u32, addr 0x6904130, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t bzhi_u32(uint32_t a, uint32_t index);

  /// [DebuggerStepThrough]
  /// @brief Method bzhi_u64, addr 0x6904148, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t bzhi_u64(uint64_t a, uint64_t index);

  /// @brief Method get_IsBmi2Supported, addr 0x6904128, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsBmi2Supported();

  /// [DebuggerStepThrough]
  /// @brief Method mulx_u32, addr 0x6904160, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t mulx_u32(uint32_t a, uint32_t b, ::by_ref<uint32_t> hi);

  /// [DebuggerStepThrough]
  /// @brief Method mulx_u64, addr 0x6904170, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t mulx_u64(uint64_t a, uint64_t b, ::by_ref<uint64_t> hi);

  /// [DebuggerStepThrough]
  /// @brief Method pdep_u32, addr 0x69041ac, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t pdep_u32(uint32_t a, uint32_t mask);

  /// [DebuggerStepThrough]
  /// @brief Method pdep_u64, addr 0x69041ec, size 0x40, virtual false, abstract: false, final false
  static inline uint64_t pdep_u64(uint64_t a, uint64_t mask);

  /// [DebuggerStepThrough]
  /// @brief Method pext_u32, addr 0x690422c, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t pext_u32(uint32_t a, uint32_t mask);

  /// [DebuggerStepThrough]
  /// @brief Method pext_u64, addr 0x690426c, size 0x40, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17776 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17777 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17778 };

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

  /// @brief Method Dispose, addr 0x69042e4, size 0xc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x69042ac, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::Intrinsics::X86_MXCSRBits roundingMode);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr X86_RoundingScope();

  // Ctor Parameters [CppParam { name: "OldBits", ty: "::Unity::Burst::Intrinsics::X86_MXCSRBits", modifiers: "", def_value: None, comment: None }]
  constexpr X86_RoundingScope(::Unity::Burst::Intrinsics::X86_MXCSRBits OldBits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17779 };

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
  /// @brief Method FloatToHalf, addr 0x6904500, size 0x1d8, virtual false, abstract: false, final false
  static inline uint16_t FloatToHalf(uint32_t f, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method HalfToFloat, addr 0x69042f8, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t HalfToFloat(uint16_t h);

  /// [DebuggerStepThrough]
  /// @brief Method cvtph_ps, addr 0x6904364, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtph_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtps_ph, addr 0x69046d8, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_ph(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  static inline ::ArrayW<uint16_t> getStaticF_BaseTable();

  static inline ::ArrayW<int8_t> getStaticF_ShiftTable();

  /// @brief Method get_IsF16CSupported, addr 0x69042f0, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsF16CSupported();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtph_ps, addr 0x6904408, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtph_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_cvtps_ph, addr 0x69047e4, size 0x188, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17780 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17781 };

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
  /// @brief Method FmaHelper, addr 0x6904a64, size 0x1c, virtual false, abstract: false, final false
  static inline float_t FmaHelper(float_t a, float_t b, float_t c);

  /// [DebuggerStepThrough]
  /// @brief Method FnmaHelper, addr 0x6904a80, size 0x1c, virtual false, abstract: false, final false
  static inline float_t FnmaHelper(float_t a, float_t b, float_t c);

  /// [DebuggerStepThrough]
  /// @brief Method fmadd_pd, addr 0x6904a9c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmadd_ps, addr 0x6904b34, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmadd_sd, addr 0x6904c20, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmadd_ss, addr 0x6904c6c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmadd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmaddsub_pd, addr 0x6904ca0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmaddsub_ps, addr 0x6904d38, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsub_pd, addr 0x6904e60, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsub_ps, addr 0x6904ef8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsub_sd, addr 0x6904fe4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsub_ss, addr 0x6905030, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsubadd_pd, addr 0x6905064, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fmsubadd_ps, addr 0x69050fc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmadd_pd, addr 0x690521c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmadd_ps, addr 0x69052b4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmadd_sd, addr 0x69053a0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmadd_ss, addr 0x69053ec, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmsub_pd, addr 0x6905420, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmsub_ps, addr 0x69054b8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmsub_sd, addr 0x69055b4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// [DebuggerStepThrough]
  /// @brief Method fnmsub_ss, addr 0x6905600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 c);

  /// @brief Method get_IsFmaSupported, addr 0x6904a5c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsFmaSupported();

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmadd_pd, addr 0x6904ae8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmadd_ps, addr 0x6904bac, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmaddsub_pd, addr 0x6904cec, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmaddsub_ps, addr 0x6904db0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmsub_pd, addr 0x6904eac, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmsub_ps, addr 0x6904f70, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmsubadd_pd, addr 0x69050b0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fmsubadd_ps, addr 0x6905174, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fnmadd_pd, addr 0x6905268, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fnmadd_ps, addr 0x690532c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_ps(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fnmsub_pd, addr 0x690546c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_pd(::Unity::Burst::Intrinsics::v256 a, ::Unity::Burst::Intrinsics::v256 b, ::Unity::Burst::Intrinsics::v256 c);

  /// [DebuggerStepThrough]
  /// @brief Method mm256_fnmsub_ps, addr 0x6905538, size 0x7c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17782 };

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
  /// @brief Method get_IsPopcntSupported, addr 0x6905638, size 0x54, virtual false, abstract: false, final false
  static inline bool get_IsPopcntSupported();

  /// [DebuggerStepThrough]
  /// @brief Method popcnt_u32, addr 0x690568c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t popcnt_u32(uint32_t v);

  /// [DebuggerStepThrough]
  /// @brief Method popcnt_u64, addr 0x69056b4, size 0x28, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17783 };

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
  /// @brief Method SHUFFLE, addr 0x6905f24, size 0x14, virtual false, abstract: false, final false
  static inline int32_t SHUFFLE(int32_t d, int32_t c, int32_t b, int32_t a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method TRANSPOSE4_PS, addr 0x6905f48, size 0x11c, virtual false, abstract: false, final false
  static inline void TRANSPOSE4_PS(::by_ref<::Unity::Burst::Intrinsics::v128> row0, ::by_ref<::Unity::Burst::Intrinsics::v128> row1, ::by_ref<::Unity::Burst::Intrinsics::v128> row2,
                                   ::by_ref<::Unity::Burst::Intrinsics::v128> row3);

  /// [DebuggerStepThrough]
  /// @brief Method add_ps, addr 0x68fb7d0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_ss, addr 0x6905720, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method and_ps, addr 0x68fb8c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method andnot_ps, addr 0x68fb8fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_ps, addr 0x68fce48, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_ss, addr 0x69059c4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpge_ps, addr 0x68fd1e0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpge_ss, addr 0x6905a48, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpgt_ps, addr 0x68fd228, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpgt_ss, addr 0x6905a24, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmple_ps, addr 0x68fced8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmple_ss, addr 0x6905a04, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmplt_ps, addr 0x68fce90, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmplt_ss, addr 0x69059e4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpneq_ps, addr 0x68fcf8c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpneq_ss, addr 0x6905a6c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpnge_ps, addr 0x68fd118, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpnge_ss, addr 0x6905af0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpngt_ps, addr 0x68fd17c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpngt_ss, addr 0x6905acc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnle_ps, addr 0x68fd040, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnle_ss, addr 0x6905aac, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnlt_ps, addr 0x68fcfdc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnlt_ss, addr 0x6905a8c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpord_ps, addr 0x68fd0a4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpord_ss, addr 0x6905b14, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpunord_ps, addr 0x68fcf20, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpunord_ss, addr 0x6905b48, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comieq_ss, addr 0x6905b70, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comieq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comige_ss, addr 0x6905bc0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comige_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comigt_ss, addr 0x6905bac, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comigt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comile_ss, addr 0x6905b98, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comile_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comilt_ss, addr 0x6905b84, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comilt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comineq_ss, addr 0x6905bd4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comineq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvt_ss2si, addr 0x6905c64, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t cvt_ss2si(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi32_ss, addr 0x69056f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_ss(::Unity::Burst::Intrinsics::v128 a, int32_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi64_ss, addr 0x690570c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_ss(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtss_f32, addr 0x6905dec, size 0x8, virtual false, abstract: false, final false
  static inline float_t cvtss_f32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvtss_si32, addr 0x6905c60, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtss_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtss_si64, addr 0x6905d28, size 0xc4, virtual false, abstract: false, final false
  static inline int64_t cvtss_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvtt_ss2si, addr 0x6905e54, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtt_ss2si(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttss_si32, addr 0x6905df4, size 0x60, virtual false, abstract: false, final false
  static inline int32_t cvttss_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttss_si64, addr 0x6905e58, size 0x60, virtual false, abstract: false, final false
  static inline int64_t cvttss_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method div_ps, addr 0x68fbb28, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method div_ss, addr 0x6905774, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSseSupported, addr 0x68fb748, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSseSupported();

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method load_ps, addr 0x69056dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 load_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method loadu_ps, addr 0x68fdb14, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_ps(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method loadu_si16, addr 0x6906064, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si16(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method loadu_si64, addr 0x6906078, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si64(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method max_ps, addr 0x68fbddc, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_ss, addr 0x6905934, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_ps, addr 0x68fbf68, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_ss, addr 0x69058a4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method move_ss, addr 0x6905f1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movehl_ps, addr 0x6905f38, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movehl_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movelh_ps, addr 0x6905f40, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movelh_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movemask_ps, addr 0x68febf0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t movemask_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mul_ps, addr 0x68fc0ac, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mul_ss, addr 0x6905758, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method or_ps, addr 0x68fc11c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method rcp_ps, addr 0x68fdfdc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rcp_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method rcp_ss, addr 0x6905808, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rcp_ss(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method rsqrt_ps, addr 0x68fe054, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method rsqrt_ss, addr 0x6905824, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ss(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_ps, addr 0x6905ec4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_ps(float_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set_ps, addr 0x6905ee4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ps(float_t e3, float_t e2, float_t e1, float_t e0);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method set_ps1, addr 0x6905ed4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ps1(float_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set_ss, addr 0x6905eb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_ss(float_t a);

  /// [DebuggerStepThrough]
  /// @brief Method setr_ps, addr 0x6905f00, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_ps(float_t e3, float_t e2, float_t e1, float_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method setzero_ps, addr 0x68ff048, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setzero_ps();

  /// [DebuggerStepThrough]
  /// @brief Method shuffle_ps, addr 0x68fc218, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method sqrt_ps, addr 0x68fe17c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method sqrt_ss, addr 0x6905790, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_ss(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method store_ps, addr 0x69056e8, size 0x8, virtual false, abstract: false, final false
  static inline void store_ps(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method storeu_ps, addr 0x68fdc94, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_ps(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si16, addr 0x6906070, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si16(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method storeu_si64, addr 0x6906084, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si64(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method stream_ps, addr 0x69056f0, size 0x8, virtual false, abstract: false, final false
  static inline void stream_ps(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method sub_ps, addr 0x68fc2fc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_ss, addr 0x690573c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomieq_ss, addr 0x6905be8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomieq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomige_ss, addr 0x6905c38, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomige_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomigt_ss, addr 0x6905c24, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomigt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomile_ss, addr 0x6905c10, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomile_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomilt_ss, addr 0x6905bfc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomilt_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomineq_ss, addr 0x6905c4c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomineq_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_ps, addr 0x68fe4d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_ps, addr 0x68fe51c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method xor_ps, addr 0x68fc36c, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17784 };

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
  /// @brief Method SHUFFLE2, addr 0x6906094, size 0x8, virtual false, abstract: false, final false
  static inline int32_t SHUFFLE2(int32_t x, int32_t y);

  /// [DebuggerStepThrough]
  /// @brief Method add_epi16, addr 0x690612c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_epi32, addr 0x690619c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_epi64, addr 0x69061c8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_epi8, addr 0x69060bc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_pd, addr 0x6908cf0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method add_sd, addr 0x6908cdc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 add_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method adds_epi16, addr 0x690625c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method adds_epi8, addr 0x69061d4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method adds_epu16, addr 0x6906360, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method adds_epu8, addr 0x69062e8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 adds_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method and_pd, addr 0x69090fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method and_si128, addr 0x6907fec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 and_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method andnot_pd, addr 0x6909108, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method andnot_si128, addr 0x6907ff8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 andnot_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method avg_epu16, addr 0x6906450, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 avg_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method avg_epu8, addr 0x69063d8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 avg_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method bslli_si128, addr 0x690719c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 bslli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method bsrli_si128, addr 0x69071a0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 bsrli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method clflush, addr 0x6909d64, size 0x4, virtual false, abstract: false, final false
  static inline void clflush(void* ptr);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_epi16, addr 0x6908090, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_epi32, addr 0x6908104, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_epi8, addr 0x690801c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_pd, addr 0x6909248, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_sd, addr 0x690912c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpge_pd, addr 0x69092d8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpge_sd, addr 0x6909180, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpge_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_epi16, addr 0x69081ec, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_epi32, addr 0x6908260, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_epi8, addr 0x6908178, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_pd, addr 0x69092b4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpgt_sd, addr 0x6909168, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmple_pd, addr 0x6909290, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmple_sd, addr 0x6909154, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmple_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmplt_epi16, addr 0x69082f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmplt_epi32, addr 0x690830c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmplt_epi8, addr 0x69082d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmplt_pd, addr 0x690926c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmplt_sd, addr 0x6909140, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmplt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpneq_pd, addr 0x6909370, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpneq_sd, addr 0x69091dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpneq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnge_pd, addr 0x6909400, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpnge_sd, addr 0x6909230, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnge_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpngt_pd, addr 0x69093dc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cmpngt_sd, addr 0x6909218, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpngt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnle_pd, addr 0x69093b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnle_sd, addr 0x6909204, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnle_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnlt_pd, addr 0x6909394, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpnlt_sd, addr 0x69091f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpord_pd, addr 0x69092fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpord_sd, addr 0x6909198, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpord_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpunord_pd, addr 0x6909338, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpunord_sd, addr 0x69091bc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpunord_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comieq_sd, addr 0x6909424, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comieq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comige_sd, addr 0x6909474, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comige_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comigt_sd, addr 0x6909460, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comigt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comile_sd, addr 0x690944c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comile_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comilt_sd, addr 0x6909438, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comilt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method comineq_sd, addr 0x6909488, size 0x14, virtual false, abstract: false, final false
  static inline int32_t comineq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi32_pd, addr 0x6908328, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi32_ps, addr 0x6908364, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtpd_epi32, addr 0x6909558, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtpd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtpd_ps, addr 0x6909514, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtpd_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtps_epi32, addr 0x690996c, size 0x298, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtps_pd, addr 0x6909538, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtps_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsd_f64, addr 0x69098a8, size 0x8, virtual false, abstract: false, final false
  static inline double_t cvtsd_f64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsd_si32, addr 0x69096cc, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t cvtsd_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsd_si64, addr 0x69097ac, size 0xe0, virtual false, abstract: false, final false
  static inline int64_t cvtsd_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvtsd_si64x, addr 0x690988c, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsd_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsd_ss, addr 0x6909890, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsd_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi128_si32, addr 0x69083b0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t cvtsi128_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi128_si64, addr 0x69083b4, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsi128_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi128_si64x, addr 0x69083b8, size 0x4, virtual false, abstract: false, final false
  static inline int64_t cvtsi128_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi32_sd, addr 0x6908340, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_sd(::Unity::Burst::Intrinsics::v128 a, int32_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi32_si128, addr 0x6908394, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_si128(int32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi64_sd, addr 0x690834c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_sd(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi64_si128, addr 0x69083a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_si128(int64_t a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvtsi64x_sd, addr 0x6908358, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_sd(::Unity::Burst::Intrinsics::v128 a, int64_t b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtsi64x_si128, addr 0x69083a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_si128(int64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtss_sd, addr 0x69098b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtss_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvttpd_epi32, addr 0x69098cc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvttpd_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttps_epi32, addr 0x6909c04, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvttps_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttsd_si32, addr 0x690990c, size 0x20, virtual false, abstract: false, final false
  static inline int32_t cvttsd_si32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvttsd_si64, addr 0x690992c, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttsd_si64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method cvttsd_si64x, addr 0x690994c, size 0x20, virtual false, abstract: false, final false
  static inline int64_t cvttsd_si64x(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method div_pd, addr 0x6908d28, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method div_sd, addr 0x6908d14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 div_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method extract_epi16, addr 0x690882c, size 0x44, virtual false, abstract: false, final false
  static inline uint16_t extract_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// @brief Method get_IsSse2Supported, addr 0x690608c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse2Supported();

  /// [DebuggerStepThrough]
  /// @brief Method insert_epi16, addr 0x6908870, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t i, int32_t imm8);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method load_si128, addr 0x6909d3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 load_si128(void* ptr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method loadu_si128, addr 0x6909d48, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si128(void* ptr);

  /// @brief Method loadu_si32, addr 0x6909d28, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 loadu_si32(void* mem_addr);

  /// [DebuggerStepThrough]
  /// @brief Method madd_epi16, addr 0x69064c8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 madd_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epi16, addr 0x690654c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epu8, addr 0x6906628, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_pd, addr 0x6908dd4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_sd, addr 0x6908d4c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epi16, addr 0x69066f8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epu8, addr 0x69067d4, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_pd, addr 0x6908f00, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_sd, addr 0x6908e78, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method move_epi64, addr 0x690860c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method move_sd, addr 0x6909d20, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 move_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movemask_epi8, addr 0x69088b8, size 0x68, virtual false, abstract: false, final false
  static inline int32_t movemask_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method movemask_pd, addr 0x6909cb4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t movemask_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mul_epu32, addr 0x69069fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mul_pd, addr 0x6908fb8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mul_sd, addr 0x6908fa4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mulhi_epi16, addr 0x69068a4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhi_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mulhi_epu16, addr 0x6906918, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhi_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mullo_epi16, addr 0x690698c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mullo_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method or_pd, addr 0x6909114, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method or_si128, addr 0x6908004, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 or_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method packs_epi16, addr 0x6908614, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method packs_epi32, addr 0x69086cc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packs_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method packus_epi16, addr 0x690878c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packus_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sad_epu8, addr 0x6906a08, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sad_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method set1_epi16, addr 0x690849c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi16(int16_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_epi32, addr 0x690848c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi32(int32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_epi64x, addr 0x6908484, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi64x(int64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_epi8, addr 0x69084f0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_epi8(int8_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set1_pd, addr 0x6909c70, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set1_pd(double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set_epi16, addr 0x69083e0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method set_epi32, addr 0x69083cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method set_epi64x, addr 0x69083bc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi64x(int64_t e1, int64_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method set_epi8, addr 0x6908410, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_epi8(int8_t e15_, int8_t e14_, int8_t e13_, int8_t e12_, int8_t e11_, int8_t e10_, int8_t e9_, int8_t e8_, int8_t e7_, int8_t e6_, int8_t e5_,
                                                          int8_t e4_, int8_t e3_, int8_t e2_, int8_t e1_, int8_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method set_pd, addr 0x6909c88, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_pd(double_t e1, double_t e0);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method set_pd1, addr 0x6909c7c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_pd1(double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method set_sd, addr 0x6909c64, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 set_sd(double_t a);

  /// [DebuggerStepThrough]
  /// @brief Method setr_epi16, addr 0x690855c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method setr_epi32, addr 0x6908544, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method setr_epi8, addr 0x690858c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_epi8(int8_t e15_, int8_t e14_, int8_t e13_, int8_t e12_, int8_t e11_, int8_t e10_, int8_t e9_, int8_t e8_, int8_t e7_, int8_t e6_, int8_t e5_,
                                                           int8_t e4_, int8_t e3_, int8_t e2_, int8_t e1_, int8_t e0_);

  /// [DebuggerStepThrough]
  /// @brief Method setr_pd, addr 0x6909c94, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setr_pd(double_t e1, double_t e0);

  /// [DebuggerStepThrough]
  /// @brief Method setzero_si128, addr 0x6908600, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 setzero_si128();

  /// [DebuggerStepThrough]
  /// @brief Method shuffle_epi32, addr 0x6908920, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method shuffle_pd, addr 0x6909cc8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method shufflehi_epi16, addr 0x690899c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shufflehi_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method shufflelo_epi16, addr 0x6908a30, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shufflelo_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method sll_epi16, addr 0x6907304, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method sll_epi32, addr 0x69074ac, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method sll_epi64, addr 0x6907660, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sll_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method slli_epi16, addr 0x690728c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method slli_epi32, addr 0x69073d4, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method slli_epi64, addr 0x6907580, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method slli_si128, addr 0x6906eec, size 0x2b0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 slli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method sqrt_pd, addr 0x690904c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method sqrt_sd, addr 0x6908fdc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sqrt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sra_epi16, addr 0x6907820, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sra_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method sra_epi32, addr 0x69079e4, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sra_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srai_epi16, addr 0x690773c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srai_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srai_epi32, addr 0x6907900, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srai_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srl_epi16, addr 0x6907bac, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srl_epi32, addr 0x6907d70, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srl_epi64, addr 0x6907f20, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srl_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 count);

  /// [DebuggerStepThrough]
  /// @brief Method srli_epi16, addr 0x6907ac8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi16(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srli_epi32, addr 0x6907c8c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srli_epi64, addr 0x6907e50, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method srli_si128, addr 0x6907ac4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 srli_si128(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method store_si128, addr 0x6909d54, size 0x8, virtual false, abstract: false, final false
  static inline void store_si128(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method storeu_si128, addr 0x6909d5c, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si128(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method storeu_si32, addr 0x6909d34, size 0x8, virtual false, abstract: false, final false
  static inline void storeu_si32(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method stream_pd, addr 0x69060ac, size 0x8, virtual false, abstract: false, final false
  static inline void stream_pd(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method stream_si128, addr 0x69060b4, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si128(void* mem_addr, ::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method stream_si32, addr 0x690609c, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si32(int32_t* mem_addr, int32_t a);

  /// [DebuggerStepThrough]
  /// @brief Method stream_si64, addr 0x69060a4, size 0x8, virtual false, abstract: false, final false
  static inline void stream_si64(int64_t* mem_addr, int64_t a);

  /// [DebuggerStepThrough]
  /// @brief Method sub_epi16, addr 0x6906bcc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_epi32, addr 0x6906c3c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_epi64, addr 0x6906cac, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_epi8, addr 0x6906b5c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_pd, addr 0x69090d8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sub_sd, addr 0x69090c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sub_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method subs_epi16, addr 0x6906d78, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method subs_epi8, addr 0x6906cf0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method subs_epu16, addr 0x6906e78, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method subs_epu8, addr 0x6906e04, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 subs_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomieq_sd, addr 0x690949c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomieq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomige_sd, addr 0x69094ec, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomige_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomigt_sd, addr 0x69094d8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomigt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomile_sd, addr 0x69094c4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomile_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomilt_sd, addr 0x69094b0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomilt_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method ucomineq_sd, addr 0x6909500, size 0x14, virtual false, abstract: false, final false
  static inline int32_t ucomineq_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_epi16, addr 0x6908b40, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_epi32, addr 0x6908bbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_epi64, addr 0x6908bd0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_epi8, addr 0x6908ac4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpackhi_pd, addr 0x6909ca0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpackhi_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_epi16, addr 0x6908c50, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_epi32, addr 0x6908cc4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_epi64, addr 0x6908cd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_epi8, addr 0x6908bdc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method unpacklo_pd, addr 0x6909cac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 unpacklo_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method xor_pd, addr 0x6909120, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 xor_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method xor_si128, addr 0x6908010, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17785 };

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
  /// @brief Method addsub_pd, addr 0x6909db0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 addsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method addsub_ps, addr 0x6909d70, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 addsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSse3Supported, addr 0x6909d68, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse3Supported();

  /// [DebuggerStepThrough]
  /// @brief Method hadd_pd, addr 0x6909dd4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hadd_ps, addr 0x6909df8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsub_pd, addr 0x6909e38, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsub_ps, addr 0x6909e5c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method movedup_pd, addr 0x6909e9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movedup_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method movehdup_ps, addr 0x6909ea4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 movehdup_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method moveldup_ps, addr 0x6909eb0, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17786 };

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
  /// @brief Method MK_INSERTPS_NDX, addr 0x690b7f8, size 0x10, virtual false, abstract: false, final false
  static inline int32_t MK_INSERTPS_NDX(int32_t srcField, int32_t dstField, int32_t zeroMask);

  /// @brief Method RoundDImpl, addr 0x690b20c, size 0x1b0, virtual false, abstract: false, final false
  static inline double_t RoundDImpl(double_t d, int32_t roundingMode);

  /// [DebuggerStepThrough]
  /// @brief Method blend_epi16, addr 0x690a144, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method blend_pd, addr 0x6909ed0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method blend_ps, addr 0x6909f4c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blend_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method blendv_epi8, addr 0x690a0c8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method blendv_pd, addr 0x6909fc8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method blendv_ps, addr 0x690a04c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 blendv_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method ceil_pd, addr 0x690b438, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method ceil_ps, addr 0x690b530, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method ceil_sd, addr 0x690b580, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method ceil_ss, addr 0x690b61c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 ceil_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cmpeq_epi64, addr 0x690ace0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi64(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi16_epi32, addr 0x690adf4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi16_epi64, addr 0x690ae54, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi32_epi64, addr 0x690ae94, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi8_epi16, addr 0x690acf4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi8_epi32, addr 0x690ad54, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepi8_epi64, addr 0x690adb4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu16_epi32, addr 0x690afd4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu16_epi64, addr 0x690b034, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu32_epi64, addr 0x690b074, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu32_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu8_epi16, addr 0x690aed4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu8_epi32, addr 0x690af34, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method cvtepu8_epi64, addr 0x690af94, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi64(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method dp_pd, addr 0x690a1c0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 dp_pd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method dp_ps, addr 0x690a208, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 dp_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extract_epi32, addr 0x690a374, size 0x44, virtual false, abstract: false, final false
  static inline int32_t extract_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extract_epi64, addr 0x690a3b8, size 0x44, virtual false, abstract: false, final false
  static inline int64_t extract_epi64(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extract_epi8, addr 0x690a330, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t extract_epi8(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extract_ps, addr 0x690a2a8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t extract_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method extractf_ps, addr 0x690a2ec, size 0x44, virtual false, abstract: false, final false
  static inline float_t extractf_ps(::Unity::Burst::Intrinsics::v128 a, int32_t imm8);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method floor_pd, addr 0x690b400, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_pd(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method floor_ps, addr 0x690b528, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_ps(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method floor_sd, addr 0x690b55c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method floor_ss, addr 0x690b5e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 floor_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// @brief Method get_IsSse41Supported, addr 0x6909ebc, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSse41Supported();

  /// [DebuggerStepThrough]
  /// @brief Method insert_epi32, addr 0x690a4c4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi32(::Unity::Burst::Intrinsics::v128 a, int32_t i, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method insert_epi64, addr 0x690a50c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi64(::Unity::Burst::Intrinsics::v128 a, int64_t i, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method insert_epi8, addr 0x690a47c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_epi8(::Unity::Burst::Intrinsics::v128 a, uint8_t i, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method insert_ps, addr 0x690a3fc, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 insert_ps(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method max_epi32, addr 0x690a62c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epi8, addr 0x690a554, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epu16, addr 0x690a7d4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method max_epu32, addr 0x690a700, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 max_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epi32, addr 0x690a980, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epi8, addr 0x690a8a8, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epu16, addr 0x690ab28, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method min_epu32, addr 0x690aa54, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 min_epu32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method minpos_epu16, addr 0x690b658, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 minpos_epu16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method mpsadbw_epu8, addr 0x690b6c8, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mpsadbw_epu8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method mul_epi32, addr 0x690b0b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mul_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mullo_epi32, addr 0x690b0c0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mullo_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method packus_epi32, addr 0x690abfc, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 packus_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method round_pd, addr 0x690b3bc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_pd(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method round_ps, addr 0x690b470, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_ps(::Unity::Burst::Intrinsics::v128 a, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method round_sd, addr 0x690b538, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_sd(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method round_ss, addr 0x690b5a4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 round_ss(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t rounding);

  /// [DebuggerStepThrough]
  /// @brief Method stream_load_si128, addr 0x6909ec4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 stream_load_si128(void* mem_addr);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method test_all_ones, addr 0x690b1d0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t test_all_ones(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method test_all_zeros, addr 0x690b18c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t test_all_zeros(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)4)]
  /// @brief Method test_mix_ones_zeroes, addr 0x690b1a4, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t test_mix_ones_zeroes(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 mask);

  /// [DebuggerStepThrough]
  /// @brief Method testc_si128, addr 0x690b148, size 0x18, virtual false, abstract: false, final false
  static inline int32_t testc_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testnzc_si128, addr 0x690b160, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t testnzc_si128(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method testz_si128, addr 0x690b130, size 0x18, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17787 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17788 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17789 };

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

  /// @brief Method GetBit, addr 0x690ccb8, size 0x10, virtual false, abstract: false, final false
  inline bool GetBit(int32_t aindex, int32_t bindex);

  /// @brief Method SetBit, addr 0x690cc94, size 0x24, virtual false, abstract: false, final false
  inline void SetBit(int32_t aindex, int32_t bindex, bool val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sse4_2_X86_StrBoolArray();

  // Ctor Parameters [CppParam { name: "Bits", ty: "::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr Sse4_2_X86_StrBoolArray(::Unity::Burst::Intrinsics::StrBoolArray_Sse4_2_X86__Bits_e__FixedBuffer Bits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17790 };

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

  /// @brief Method ComputeStriOutput, addr 0x690b810, size 0x48, virtual false, abstract: false, final false
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
  /// @brief Method cmpestra, addr 0x690c894, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t cmpestra(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestrc, addr 0x690c4f4, size 0x1c4, virtual false, abstract: false, final false
  static inline int32_t cmpestrc(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestri, addr 0x690bd6c, size 0x1dc, virtual false, abstract: false, final false
  static inline int32_t cmpestri(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t cmpestri_emulation(T* a, int32_t alen, T* b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestrm, addr 0x690bb90, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpestrm(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// @brief Method cmpestrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Burst::Intrinsics::v128 cmpestrm_emulation(T* a, int32_t alen, T* b, int32_t blen, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestro, addr 0x690c6d4, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t cmpestro(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestrs, addr 0x690c6b8, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t cmpestrs(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpestrz, addr 0x690c4d8, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t cmpestrz(::Unity::Burst::Intrinsics::v128 a, int32_t la, ::Unity::Burst::Intrinsics::v128 b, int32_t lb, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpgt_epi64, addr 0x690c954, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi64(::Unity::Burst::Intrinsics::v128 val1, ::Unity::Burst::Intrinsics::v128 val2);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistra, addr 0x690c430, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t cmpistra(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistrc, addr 0x690c03c, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t cmpistrc(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistri, addr 0x690b9f4, size 0x19c, virtual false, abstract: false, final false
  static inline int32_t cmpistri(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t cmpistri_emulation(T* a, T* b, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistrm, addr 0x690b858, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 cmpistrm(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// @brief Method cmpistrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Burst::Intrinsics::v128 cmpistrm_emulation(T* a, T* b, int32_t len, int32_t imm8, int32_t allOnes, T allOnesT);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistro, addr 0x690c1d0, size 0x260, virtual false, abstract: false, final false
  static inline int32_t cmpistro(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistrs, addr 0x690c0dc, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t cmpistrs(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method cmpistrz, addr 0x690bf48, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t cmpistrz(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t imm8);

  /// [DebuggerStepThrough]
  /// @brief Method crc32_u16, addr 0x690ca7c, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t crc32_u16(uint32_t crc, uint16_t v);

  /// [DebuggerStepThrough]
  /// @brief Method crc32_u32, addr 0x690c968, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t crc32_u32(uint32_t crc, uint32_t v);

  /// [DebuggerStepThrough]
  /// [Obsolete("Use the ulong version of this intrinsic instead.")]
  /// @brief Method crc32_u64, addr 0x690caec, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t crc32_u64(uint64_t crc_ul, int64_t v);

  /// [DebuggerStepThrough]
  /// @brief Method crc32_u64, addr 0x690cb54, size 0xa8, virtual false, abstract: false, final false
  static inline uint64_t crc32_u64(uint64_t crc_ul, uint64_t v);

  /// [DebuggerStepThrough]
  /// @brief Method crc32_u8, addr 0x690c9e8, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t crc32_u8(uint32_t crc, uint8_t v);

  static inline ::ArrayW<uint32_t> getStaticF_crctab();

  /// @brief Method get_IsSse42Supported, addr 0x690b808, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17791 };

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
  /// @brief Method abs_epi16, addr 0x690cd90, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi16(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method abs_epi32, addr 0x690ce54, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi32(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method abs_epi8, addr 0x690ccd0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 abs_epi8(::Unity::Burst::Intrinsics::v128 a);

  /// [DebuggerStepThrough]
  /// @brief Method alignr_epi8, addr 0x690cf94, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 alignr_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b, int32_t count);

  /// @brief Method get_IsSsse3Supported, addr 0x690ccc8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSsse3Supported();

  /// [DebuggerStepThrough]
  /// @brief Method hadd_epi16, addr 0x690d034, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hadd_epi32, addr 0x690d178, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadd_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hadds_epi16, addr 0x690d0c0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hadds_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsub_epi16, addr 0x690d1a4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsub_epi32, addr 0x690d2e8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsub_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method hsubs_epi16, addr 0x690d230, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 hsubs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method maddubs_epi16, addr 0x690d314, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 maddubs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method mulhrs_epi16, addr 0x690d3b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 mulhrs_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method shuffle_epi8, addr 0x690cf14, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi8(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sign_epi16, addr 0x690d4b0, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi16(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sign_epi32, addr 0x690d530, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 sign_epi32(::Unity::Burst::Intrinsics::v128 a, ::Unity::Burst::Intrinsics::v128 b);

  /// [DebuggerStepThrough]
  /// @brief Method sign_epi8, addr 0x690d430, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17792 };

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
  /// @brief Method BeginInvoke, addr 0x690d630, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t bits, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_2);

  /// @brief Method EndInvoke, addr 0x690d688, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x690d61c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t bits);

  static inline ::Unity::Burst::Intrinsics::X86_DoSetCSRTrampoline_00000129$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                           ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x690d5b0, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17793 };

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

  /// @brief Method GetFunctionPointer, addr 0x690d7a0, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x690d694, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x690d7b8, size 0x90, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17794 };

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
  /// @brief Method BeginInvoke, addr 0x690d8c4, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method EndInvoke, addr 0x690d8e0, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x690d8b0, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke();

  static inline ::Unity::Burst::Intrinsics::X86_DoGetCSRTrampoline_0000012A$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                           ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x690d848, size 0x68, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17795 };

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

  /// @brief Method GetFunctionPointer, addr 0x690da10, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x690d904, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x690da28, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17796 };

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

  /// @brief Method BurstIntrinsicGetCSRFromManaged, addr 0x68fb71c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t BurstIntrinsicGetCSRFromManaged();

  /// @brief Method BurstIntrinsicSetCSRFromManaged, addr 0x68fb718, size 0x4, virtual false, abstract: false, final false
  static inline void BurstIntrinsicSetCSRFromManaged(int32_t _);

  /// [BurstCompile(CompileSynchronously = true)]
  /// [MonoPInvokeCallback(typeof(Unity.Burst.Intrinsics.Unity.Burst.Intrinsics.X86::DoGetCSRTrampoline_0000012A$PostfixBurstDelegate))]
  /// @brief Method DoGetCSRTrampoline, addr 0x68fb678, size 0x8, virtual false, abstract: false, final false
  static inline int32_t DoGetCSRTrampoline();

  /// [BurstCompile(CompileSynchronously = true)]
  /// @brief Method DoGetCSRTrampoline$BurstManaged, addr 0x68fb750, size 0x8, virtual false, abstract: false, final false
  static inline int32_t DoGetCSRTrampoline$BurstManaged();

  /// [BurstCompile(CompileSynchronously = true)]
  /// [MonoPInvokeCallback(typeof(Unity.Burst.Intrinsics.Unity.Burst.Intrinsics.X86::DoSetCSRTrampoline_00000129$PostfixBurstDelegate))]
  /// @brief Method DoSetCSRTrampoline, addr 0x68fb670, size 0x8, virtual false, abstract: false, final false
  static inline void DoSetCSRTrampoline(int32_t bits);

  /// [BurstCompile(CompileSynchronously = true)]
  /// @brief Method DoSetCSRTrampoline$BurstManaged, addr 0x68fb744, size 0x4, virtual false, abstract: false, final false
  static inline void DoSetCSRTrampoline$BurstManaged(int32_t bits);

  /// @brief Method GenericCSharpLoad, addr 0x68fb680, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 GenericCSharpLoad(void* ptr);

  /// @brief Method GenericCSharpStore, addr 0x68fb68c, size 0x8, virtual false, abstract: false, final false
  static inline void GenericCSharpStore(void* ptr, ::Unity::Burst::Intrinsics::v128 val);

  /// @brief Method IsNaN, addr 0x68fb6f0, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNaN(uint32_t v);

  /// @brief Method IsNaN, addr 0x68fb704, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNaN(uint64_t v);

  /// @brief Method Saturate_To_Int16, addr 0x68fb6c0, size 0x20, virtual false, abstract: false, final false
  static inline int16_t Saturate_To_Int16(int32_t val);

  /// @brief Method Saturate_To_Int8, addr 0x68fb694, size 0x1c, virtual false, abstract: false, final false
  static inline int8_t Saturate_To_Int8(int32_t val);

  /// @brief Method Saturate_To_UnsignedInt16, addr 0x68fb6e0, size 0x10, virtual false, abstract: false, final false
  static inline uint16_t Saturate_To_UnsignedInt16(int32_t val);

  /// @brief Method Saturate_To_UnsignedInt8, addr 0x68fb6b0, size 0x10, virtual false, abstract: false, final false
  static inline uint8_t Saturate_To_UnsignedInt8(int32_t val);

  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method get_MXCSR, addr 0x68fb734, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::X86_MXCSRBits get_MXCSR();

  /// @brief Method getcsr_raw, addr 0x68fb724, size 0x8, virtual false, abstract: false, final false
  static inline int32_t getcsr_raw();

  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)3)]
  /// @brief Method set_MXCSR, addr 0x68fb73c, size 0x8, virtual false, abstract: false, final false
  static inline void set_MXCSR(::Unity::Burst::Intrinsics::X86_MXCSRBits value);

  /// @brief Method setcsr_raw, addr 0x68fb72c, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17797 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
