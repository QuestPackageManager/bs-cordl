#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3x2)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool3x2;
}
namespace Unity::Mathematics {
struct double3x2;
}
namespace Unity::Mathematics {
struct float3x2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int3x2);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.int3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int3x2
struct CORDL_TYPE int3x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int3x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int3x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46b2934, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46b28c8, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3x2 rhs);

  /// @brief Method GetHashCode, addr 0x46b29fc, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46b2a78, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46b2ca4, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46b155c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1);

  /// @brief Method .ctor, addr 0x46b1570, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21);

  /// @brief Method .ctor, addr 0x46b15bc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x2 v);

  /// @brief Method .ctor, addr 0x46b1718, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x2 v);

  /// @brief Method .ctor, addr 0x46b165c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x2 v);

  /// @brief Method .ctor, addr 0x46b1608, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x2 v);

  /// @brief Method .ctor, addr 0x46b159c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46b16e8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46b162c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46b1580, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46b15ec, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int3x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46b28bc, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::int3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x2>* i___System__IEquatable_1___Unity__Mathematics__int3x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46b1aa4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Addition(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Addition, addr 0x46b1b08, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Addition(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46b1b48, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Addition(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b2670, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseAnd(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b26b4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseAnd(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b26f4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b2734, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseOr(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b2778, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseOr(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b27b8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Decrement, addr 0x46b1eac, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Decrement(::Unity::Mathematics::int3x2 val);

  /// @brief Method op_Division, addr 0x46b1c6c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Division(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Division, addr 0x46b1cb8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Division(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46b1cf8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Division(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Equality, addr 0x46b2424, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Equality, addr 0x46b2488, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46b24dc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b27f8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_ExclusiveOr(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b283c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_ExclusiveOr(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b287c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Explicit, addr 0x46b17e0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method op_Explicit, addr 0x46b1938, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method op_Explicit, addr 0x46b1880, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method op_Explicit, addr 0x46b182c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method op_Explicit, addr 0x46b17c0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(bool v);

  /// @brief Method op_Explicit, addr 0x46b1908, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(double_t v);

  /// @brief Method op_Explicit, addr 0x46b1850, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(float_t v);

  /// @brief Method op_Explicit, addr 0x46b1810, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46b2124, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x46b2188, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46b21dc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b2230, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b2294, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b22e8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Implicit, addr 0x46b17a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Implicit___Unity__Mathematics__int3x2(int32_t v);

  /// @brief Method op_Increment, addr 0x46b1e4c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Increment(::Unity::Mathematics::int3x2 val);

  /// @brief Method op_Inequality, addr 0x46b2530, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Inequality, addr 0x46b2594, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46b25e8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_LeftShift, addr 0x46b23a4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_LeftShift(::Unity::Mathematics::int3x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46b1f0c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_LessThan, addr 0x46b1f70, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46b1fc4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b2018, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b207c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b20d0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Modulus, addr 0x46b1d38, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Modulus(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Modulus, addr 0x46b1d9c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Modulus(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46b1df4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Multiply, addr 0x46b19c0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Multiply(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Multiply, addr 0x46b1a24, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Multiply(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46b1a64, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x46b263c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_OnesComplement(::Unity::Mathematics::int3x2 val);

  /// @brief Method op_RightShift, addr 0x46b23e4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_RightShift(::Unity::Mathematics::int3x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46b1b88, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Subtraction(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Subtraction, addr 0x46b1bec, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Subtraction(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46b1c2c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46b233c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_UnaryNegation(::Unity::Mathematics::int3x2 val);

  /// @brief Method op_UnaryPlus, addr 0x46b2380, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_UnaryPlus(::Unity::Mathematics::int3x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int3x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None
  // }]
  constexpr int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9998 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x2, c1) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3x2, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3x2, "Unity.Mathematics", "int3x2");
