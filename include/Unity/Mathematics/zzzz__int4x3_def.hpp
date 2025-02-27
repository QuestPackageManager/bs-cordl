#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4x3.hpp"
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
CORDL_MODULE_EXPORT(int4x3)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4x3;
}
namespace Unity::Mathematics {
struct double4x3;
}
namespace Unity::Mathematics {
struct float4x3;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint4x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int4x3);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.int4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int4x3
struct CORDL_TYPE int4x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int4x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int4x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46cfae0, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46cfa14, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int4x3 rhs);

  /// @brief Method GetHashCode, addr 0x46cfc08, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46cfce0, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46d008c, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46cdb24, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2);

  /// @brief Method .ctor, addr 0x46cdb34, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22, int32_t m30, int32_t m31, int32_t m32);

  /// @brief Method .ctor, addr 0x46cdb98, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x3 v);

  /// @brief Method .ctor, addr 0x46cdd9c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x3 v);

  /// @brief Method .ctor, addr 0x46cdc78, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x3 v);

  /// @brief Method .ctor, addr 0x46cdc30, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x3 v);

  /// @brief Method .ctor, addr 0x46cdb7c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46cdd70, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46cdc4c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46cdb64, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46cdc18, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int4x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46cfa0c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::int4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x3>* i___System__IEquatable_1___Unity__Mathematics__int4x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46ce338, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Addition(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Addition, addr 0x46ce388, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Addition(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46ce3f4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Addition(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46cf70c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46cf734, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46cf7a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46cf80c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46cf834, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46cf8a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Decrement, addr 0x46ce940, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Decrement(::Unity::Mathematics::int4x3 val);

  /// @brief Method op_Division, addr 0x46ce588, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Division(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Division, addr 0x46ce610, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Division(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46ce680, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Division(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Equality, addr 0x46cf2e4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Equality, addr 0x46cf3a0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46cf444, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46cf90c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46cf934, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46cf9a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Explicit, addr 0x46cdec8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method op_Explicit, addr 0x46ce0c8, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method op_Explicit, addr 0x46cdfa4, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method op_Explicit, addr 0x46cdf64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method op_Explicit, addr 0x46cdeac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(bool v);

  /// @brief Method op_Explicit, addr 0x46ce09c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(double_t v);

  /// @brief Method op_Explicit, addr 0x46cdf78, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(float_t v);

  /// @brief Method op_Explicit, addr 0x46cdf4c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46ced98, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x46cee54, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46ceef8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46cef9c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46cf058, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46cf0fc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Implicit, addr 0x46cde94, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Implicit___Unity__Mathematics__int4x3(int32_t v);

  /// @brief Method op_Increment, addr 0x46ce8e8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Increment(::Unity::Mathematics::int4x3 val);

  /// @brief Method op_Inequality, addr 0x46cf4e8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Inequality, addr 0x46cf5a4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46cf648, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_LeftShift, addr 0x46cf200, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_LeftShift(::Unity::Mathematics::int4x3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46ce990, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_LessThan, addr 0x46cea4c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46ceaf0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46ceb94, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46cec50, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46cecf4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Modulus, addr 0x46ce6f0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Modulus(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Modulus, addr 0x46ce7a8, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Modulus(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46ce848, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Modulus(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Multiply, addr 0x46ce1c0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Multiply(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Multiply, addr 0x46ce260, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Multiply(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46ce2cc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Multiply(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_OnesComplement, addr 0x46cf6ec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_OnesComplement(::Unity::Mathematics::int4x3 val);

  /// @brief Method op_RightShift, addr 0x46cf270, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_RightShift(::Unity::Mathematics::int4x3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46ce460, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Subtraction(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x46ce4b0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Subtraction(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46ce51c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46cf1a0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_UnaryNegation(::Unity::Mathematics::int4x3 val);

  /// @brief Method op_UnaryPlus, addr 0x46cf1ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_UnaryPlus(::Unity::Mathematics::int4x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int4x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int4x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None
  // }, CppParam { name: "c2", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }]
  constexpr int4x3(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10009 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x3, c2) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int4x3, 0x30>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int4x3, "Unity.Mathematics", "int4x3");
