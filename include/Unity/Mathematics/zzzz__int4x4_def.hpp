#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int4x4)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4x4;
}
namespace Unity::Mathematics {
struct double4x4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int4x4);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.int4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int4x4
struct CORDL_TYPE int4x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int4 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::int4x4 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int4x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int4x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46c0934, size 0x168, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46c0828, size 0x10c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int4x4 rhs);

  /// @brief Method GetHashCode, addr 0x46c0a9c, size 0x114, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46c0bb0, size 0x4ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46c105c, size 0x494, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46be000, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3);

  /// @brief Method .ctor, addr 0x46be018, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22, int32_t m23, int32_t m30,
                    int32_t m31, int32_t m32, int32_t m33);

  /// @brief Method .ctor, addr 0x46be09c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x4 v);

  /// @brief Method .ctor, addr 0x46be31c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x4 v);

  /// @brief Method .ctor, addr 0x46be1a8, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 v);

  /// @brief Method .ctor, addr 0x46be154, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x4 v);

  /// @brief Method .ctor, addr 0x46be07c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46be2ec, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46be178, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46be060, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46be138, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int4x4 getStaticF_identity();

  static inline ::Unity::Mathematics::int4x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46c0820, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::int4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x4>* i___System__IEquatable_1___Unity__Mathematics__int4x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46bea34, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Addition(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Addition, addr 0x46bea98, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Addition(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46beb20, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Addition(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c046c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c0498, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c0520, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c05a8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c05d4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c065c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Decrement, addr 0x46bf228, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Decrement(::Unity::Mathematics::int4x4 val);

  /// @brief Method op_Division, addr 0x46bed1c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Division(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Division, addr 0x46bede0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Division(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46bee74, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Division(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Equality, addr 0x46bfee0, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Equality, addr 0x46bffdc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46c00b8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c06e4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c0710, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c0798, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Explicit, addr 0x46be49c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method op_Explicit, addr 0x46be70c, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method op_Explicit, addr 0x46be598, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method op_Explicit, addr 0x46be554, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method op_Explicit, addr 0x46be47c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(bool v);

  /// @brief Method op_Explicit, addr 0x46be6dc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(double_t v);

  /// @brief Method op_Explicit, addr 0x46be568, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(float_t v);

  /// @brief Method op_Explicit, addr 0x46be538, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46bf7ec, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x46bf8e8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46bf9c4, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46bfaa0, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46bfb9c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46bfc78, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Implicit, addr 0x46be460, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Implicit___Unity__Mathematics__int4x4(int32_t v);

  /// @brief Method op_Increment, addr 0x46bf1c4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Increment(::Unity::Mathematics::int4x4 val);

  /// @brief Method op_Inequality, addr 0x46c0194, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Inequality, addr 0x46c0290, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46c036c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_LeftShift, addr 0x46bfdc4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_LeftShift(::Unity::Mathematics::int4x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46bf284, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_LessThan, addr 0x46bf380, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46bf45c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46bf538, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46bf634, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46bf710, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Modulus, addr 0x46bef08, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Modulus(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Modulus, addr 0x46bf00c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Modulus(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46bf0e8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Modulus(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Multiply, addr 0x46be850, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Multiply(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Multiply, addr 0x46be924, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Multiply(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46be9ac, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Multiply(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x46c0448, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_OnesComplement(::Unity::Mathematics::int4x4 val);

  /// @brief Method op_RightShift, addr 0x46bfe50, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_RightShift(::Unity::Mathematics::int4x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46beba8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Subtraction(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Subtraction, addr 0x46bec0c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Subtraction(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46bec94, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46bfd54, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_UnaryNegation(::Unity::Mathematics::int4x4 val);

  /// @brief Method op_UnaryPlus, addr 0x46bfdb0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_UnaryPlus(::Unity::Mathematics::int4x4 val);

  static inline void setStaticF_identity(::Unity::Mathematics::int4x4 value);

  static inline void setStaticF_zero(::Unity::Mathematics::int4x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int4x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None
  // }, CppParam { name: "c2", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }]
  constexpr int4x4(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c2;

  /// @brief Field c3, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int4x4, 0x40>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int4x4, "Unity.Mathematics", "int4x4");
