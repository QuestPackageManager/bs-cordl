#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2x4)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2x4;
}
namespace Unity::Mathematics {
struct double2x4;
}
namespace Unity::Mathematics {
struct float2x4;
}
namespace Unity::Mathematics {
struct int2x4;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint2x4);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.uint2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2x4
struct CORDL_TYPE uint2x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint2x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint2x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46dcc90, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46dcc04, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method GetHashCode, addr 0x46dcd78, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46dce08, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46dd0b4, size 0x294, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46db5e4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2, ::Unity::Mathematics::uint2 c3);

  /// @brief Method .ctor, addr 0x46db5f0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13);

  /// @brief Method .ctor, addr 0x46db64c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x4 v);

  /// @brief Method .ctor, addr 0x46db7dc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x4 v);

  /// @brief Method .ctor, addr 0x46db708, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x4 v);

  /// @brief Method .ctor, addr 0x46db6c4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x4 v);

  /// @brief Method .ctor, addr 0x46db634, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46db7bc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46db6e8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46db6b0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46db620, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint2x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46dcbfc, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::uint2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2x4>* i___System__IEquatable_1___Unity__Mathematics__uint2x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46dbbd4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Addition(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Addition, addr 0x46dbc08, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Addition(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x46dbc50, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46dca04, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_BitwiseAnd(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46dca1c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_BitwiseAnd(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46dca64, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46dcaac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_BitwiseOr(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46dcac4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_BitwiseOr(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46dcb0c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Decrement, addr 0x46dbfe0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Decrement(::Unity::Mathematics::uint2x4 val);

  /// @brief Method op_Division, addr 0x46dbd5c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Division(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Division, addr 0x46dbdb8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Division(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x46dbe04, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Division(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Equality, addr 0x46dc6ec, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Equality, addr 0x46dc78c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x46dc7fc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46dcb54, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_ExclusiveOr(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46dcb6c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_ExclusiveOr(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46dcbb4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Explicit, addr 0x46db8bc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method op_Explicit, addr 0x46dba2c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method op_Explicit, addr 0x46db960, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method op_Explicit, addr 0x46db934, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method op_Explicit, addr 0x46db8a4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(bool v);

  /// @brief Method op_Explicit, addr 0x46dba0c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(double_t v);

  /// @brief Method op_Explicit, addr 0x46db940, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(float_t v);

  /// @brief Method op_Explicit, addr 0x46db920, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x46dc310, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x46dc3b0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46dc420, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dc490, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dc530, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dc5a0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Implicit, addr 0x46db890, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Implicit___Unity__Mathematics__uint2x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x46dbfa4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Increment(::Unity::Mathematics::uint2x4 val);

  /// @brief Method op_Inequality, addr 0x46dc86c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Inequality, addr 0x46dc910, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x46dc980, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_LeftShift, addr 0x46dc650, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_LeftShift(::Unity::Mathematics::uint2x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46dc010, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_LessThan, addr 0x46dc0b0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x46dc120, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46dc190, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46dc230, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46dc2a0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Modulus, addr 0x46dbe50, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Modulus(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Modulus, addr 0x46dbecc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Modulus(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x46dbf38, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Multiply, addr 0x46dbad8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Multiply(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Multiply, addr 0x46dbb44, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Multiply(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x46dbb8c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x46dc9f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_OnesComplement(::Unity::Mathematics::uint2x4 val);

  /// @brief Method op_RightShift, addr 0x46dc69c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_RightShift(::Unity::Mathematics::uint2x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46dbc98, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Subtraction(::Unity::Mathematics::uint2x4 lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_Subtraction, addr 0x46dbccc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Subtraction(::Unity::Mathematics::uint2x4 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46dbd14, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46dc610, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_UnaryNegation(::Unity::Mathematics::uint2x4 val);

  /// @brief Method op_UnaryPlus, addr 0x46dc644, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 op_UnaryPlus(::Unity::Mathematics::uint2x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint2x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }]
  constexpr uint2x4(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2, ::Unity::Mathematics::uint2 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10019 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c1;

  /// @brief Field c2, offset: 0x10, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c2;

  /// @brief Field c3, offset: 0x18, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x4, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x4, c2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x4, c3) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint2x4, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint2x4, "Unity.Mathematics", "uint2x4");
