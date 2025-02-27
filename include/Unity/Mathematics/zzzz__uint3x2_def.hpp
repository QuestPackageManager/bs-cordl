#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint3x2)
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
struct int3x2;
}
namespace Unity::Mathematics {
struct uint3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint3x2);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.uint3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint3x2
struct CORDL_TYPE uint3x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint3x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint3x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46eb874, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46eb808, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method GetHashCode, addr 0x46eb93c, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46eb9b8, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46ebbe4, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46ea4bc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1);

  /// @brief Method .ctor, addr 0x46ea4d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21);

  /// @brief Method .ctor, addr 0x46ea51c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x2 v);

  /// @brief Method .ctor, addr 0x46ea668, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x2 v);

  /// @brief Method .ctor, addr 0x46ea5b4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x2 v);

  /// @brief Method .ctor, addr 0x46ea568, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x2 v);

  /// @brief Method .ctor, addr 0x46ea4fc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46ea640, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46ea58c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46ea54c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46ea4e0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint3x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46eb7fc, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::uint3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3x2>* i___System__IEquatable_1___Unity__Mathematics__uint3x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46ea9e4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Addition(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Addition, addr 0x46eaa48, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Addition(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x46eaa88, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46eb5b0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseAnd(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46eb5f4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseAnd(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46eb634, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46eb674, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseOr(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46eb6b8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseOr(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46eb6f8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Decrement, addr 0x46eadec, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Decrement(::Unity::Mathematics::uint3x2 val);

  /// @brief Method op_Division, addr 0x46eabac, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Division(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Division, addr 0x46eabf8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Division(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x46eac38, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Equality, addr 0x46eb364, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Equality, addr 0x46eb3c8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x46eb41c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46eb738, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_ExclusiveOr(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46eb77c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_ExclusiveOr(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46eb7bc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Explicit, addr 0x46ea730, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method op_Explicit, addr 0x46ea878, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method op_Explicit, addr 0x46ea7c8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method op_Explicit, addr 0x46ea77c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method op_Explicit, addr 0x46ea710, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(bool v);

  /// @brief Method op_Explicit, addr 0x46ea850, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(double_t v);

  /// @brief Method op_Explicit, addr 0x46ea7a0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(float_t v);

  /// @brief Method op_Explicit, addr 0x46ea760, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x46eb064, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x46eb0c8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46eb11c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46eb170, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46eb1d4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46eb228, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Implicit, addr 0x46ea6f4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Implicit___Unity__Mathematics__uint3x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x46ead8c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Increment(::Unity::Mathematics::uint3x2 val);

  /// @brief Method op_Inequality, addr 0x46eb470, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Inequality, addr 0x46eb4d4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x46eb528, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_LeftShift, addr 0x46eb2e4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_LeftShift(::Unity::Mathematics::uint3x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46eae4c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_LessThan, addr 0x46eaeb0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x46eaf04, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46eaf58, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46eafbc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46eb010, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Modulus, addr 0x46eac78, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Modulus(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Modulus, addr 0x46eacdc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Modulus(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x46ead34, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Multiply, addr 0x46ea900, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Multiply(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Multiply, addr 0x46ea964, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Multiply(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x46ea9a4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x46eb57c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_OnesComplement(::Unity::Mathematics::uint3x2 val);

  /// @brief Method op_RightShift, addr 0x46eb324, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_RightShift(::Unity::Mathematics::uint3x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46eaac8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Subtraction(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Subtraction, addr 0x46eab2c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Subtraction(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46eab6c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46eb27c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_UnaryNegation(::Unity::Mathematics::uint3x2 val);

  /// @brief Method op_UnaryPlus, addr 0x46eb2c0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_UnaryPlus(::Unity::Mathematics::uint3x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint3x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint3x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value:
  // None }]
  constexpr uint3x2(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10024 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x2, c1) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint3x2, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint3x2, "Unity.Mathematics", "uint3x2");
