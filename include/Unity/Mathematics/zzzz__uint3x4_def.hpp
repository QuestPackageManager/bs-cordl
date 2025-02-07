#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3x4.hpp"
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
CORDL_MODULE_EXPORT(uint3x4)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool3x4;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct uint3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint3x4);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.uint3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint3x4
struct CORDL_TYPE uint3x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint3x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint3x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4666c50, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4666b84, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method GetHashCode, addr 0x4666d78, size 0xdc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4666e54, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4667200, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46644cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3);

  /// @brief Method .ctor, addr 0x46644f4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m23);

  /// @brief Method .ctor, addr 0x4664580, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x46647ec, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x4 v);

  /// @brief Method .ctor, addr 0x46646a0, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x4 v);

  /// @brief Method .ctor, addr 0x4664624, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x4 v);

  /// @brief Method .ctor, addr 0x4664550, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46647b4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x4664668, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46645f8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4664524, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4666b78, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::uint3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3x4>* i___System__IEquatable_1___Unity__Mathematics__uint3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4664e88, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Addition(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Addition, addr 0x4664f4c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Addition(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x4664fc8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4666704, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4666788, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4666804, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x4666880, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x4666904, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x4666980, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Decrement, addr 0x4665660, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Decrement(::Unity::Mathematics::uint3x4 val);

  /// @brief Method op_Division, addr 0x4665200, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Division(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Division, addr 0x4665294, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Division(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x4665310, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Division(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Equality, addr 0x4666208, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Equality, addr 0x46662dc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x4666398, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46669fc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4666a80, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4666afc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Explicit, addr 0x466495c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x4664bc0, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method op_Explicit, addr 0x4664a7c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method op_Explicit, addr 0x4664a00, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method op_Explicit, addr 0x466492c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(bool v);

  /// @brief Method op_Explicit, addr 0x4664b88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(double_t v);

  /// @brief Method op_Explicit, addr 0x4664a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(float_t v);

  /// @brief Method op_Explicit, addr 0x46649d4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x4665bb0, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x4665c84, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4665d40, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4665dfc, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4665ed0, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4665f8c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Implicit, addr 0x4664900, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Implicit___Unity__Mathematics__uint3x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x46655a8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Increment(::Unity::Mathematics::uint3x4 val);

  /// @brief Method op_Inequality, addr 0x4666454, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Inequality, addr 0x4666528, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x46665e4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_LeftShift, addr 0x4666110, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_LeftShift(::Unity::Mathematics::uint3x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x4665718, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_LessThan, addr 0x46657ec, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x46658a8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4665964, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4665a38, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4665af4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Modulus, addr 0x466538c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Modulus(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Modulus, addr 0x4665450, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Modulus(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x46654fc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Multiply, addr 0x4664ccc, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Multiply(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Multiply, addr 0x4664d90, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Multiply(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x4664e0c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x46666a0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_OnesComplement(::Unity::Mathematics::uint3x4 val);

  /// @brief Method op_RightShift, addr 0x466618c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_RightShift(::Unity::Mathematics::uint3x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x4665044, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Subtraction(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x4665108, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Subtraction(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x4665184, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4666048, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_UnaryNegation(::Unity::Mathematics::uint3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x46660cc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_UnaryPlus(::Unity::Mathematics::uint3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }]
  constexpr uint3x4(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10025 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c2;

  /// @brief Field c3, offset: 0x24, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c3) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint3x4, 0x30>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint3x4, "Unity.Mathematics", "uint3x4");
