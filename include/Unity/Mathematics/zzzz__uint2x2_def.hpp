#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2x2.hpp"
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
CORDL_MODULE_EXPORT(uint2x2)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2x2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint2x2);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.uint2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2x2
struct CORDL_TYPE uint2x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint2 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::uint2x2 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint2x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint2x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46dc564, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46dc520, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method GetHashCode, addr 0x46dc60c, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46dc660, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46dc80c, size 0x194, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46dba24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method .ctor, addr 0x46dba2c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method .ctor, addr 0x46dba68, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x2 v);

  /// @brief Method .ctor, addr 0x46dbb28, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x2 v);

  /// @brief Method .ctor, addr 0x46dbabc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x2 v);

  /// @brief Method .ctor, addr 0x46dba98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x2 v);

  /// @brief Method .ctor, addr 0x46dba54, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46dbb0c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46dbaa0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46dba88, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46dba44, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint2x2 getStaticF_identity();

  static inline ::Unity::Mathematics::uint2x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46dc518, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::uint2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2x2>* i___System__IEquatable_1___Unity__Mathematics__uint2x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46dbd1c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Addition, addr 0x46dbd48, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x46dbd6c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46dc410, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46dc41c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46dc440, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46dc468, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46dc474, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46dc498, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Decrement, addr 0x46dbf54, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Decrement(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_Division, addr 0x46dbe0c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Division, addr 0x46dbe38, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x46dbe5c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Equality, addr 0x46dc2a4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Equality, addr 0x46dc2e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x46dc31c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46dc4c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46dc4cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46dc4f0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Explicit, addr 0x46dbb9c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method op_Explicit, addr 0x46dbc58, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method op_Explicit, addr 0x46dbbf0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method op_Explicit, addr 0x46dbbd0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method op_Explicit, addr 0x46dbb88, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(bool v);

  /// @brief Method op_Explicit, addr 0x46dbc3c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(double_t v);

  /// @brief Method op_Explicit, addr 0x46dbbd4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(float_t v);

  /// @brief Method op_Explicit, addr 0x46dbbc0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x46dc0dc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x46dc11c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46dc154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dc18c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dc1cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dc204, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Implicit, addr 0x46dbb78, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Implicit___Unity__Mathematics__uint2x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x46dbf2c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Increment(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_Inequality, addr 0x46dc354, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Inequality, addr 0x46dc394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x46dc3cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LeftShift, addr 0x46dc25c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_LeftShift(::Unity::Mathematics::uint2x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46dbf7c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThan, addr 0x46dbfbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x46dbff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46dc02c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46dc06c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46dc0a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Modulus, addr 0x46dbe84, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Modulus, addr 0x46dbec0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x46dbef4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Multiply, addr 0x46dbca4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Multiply, addr 0x46dbcd0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x46dbcf4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x46dc404, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_OnesComplement(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_RightShift, addr 0x46dc280, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_RightShift(::Unity::Mathematics::uint2x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46dbd94, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x46dbdc0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46dbde4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46dc23c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_UnaryNegation(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_UnaryPlus, addr 0x46dc258, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_UnaryPlus(::Unity::Mathematics::uint2x2 val);

  static inline void setStaticF_identity(::Unity::Mathematics::uint2x2 value);

  static inline void setStaticF_zero(::Unity::Mathematics::uint2x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value:
  // None }]
  constexpr uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10018 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x2, c1) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint2x2, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint2x2, "Unity.Mathematics", "uint2x2");
