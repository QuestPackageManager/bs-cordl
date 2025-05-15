#pragma once
// IWYU pragma private; include "Unity/Mathematics/int2x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int2x2)
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
struct int2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int2x2);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.int2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int2x2
struct CORDL_TYPE int2x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int2 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::int2x2 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int2x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int2x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int2x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46ad1fc, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46ad1b8, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int2x2 rhs);

  /// @brief Method GetHashCode, addr 0x46ad2a4, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46ad2f8, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46ad4a4, size 0x194, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46ac67c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1);

  /// @brief Method .ctor, addr 0x46ac684, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m10, int32_t m11);

  /// @brief Method .ctor, addr 0x46ac6c0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x2 v);

  /// @brief Method .ctor, addr 0x46ac798, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x2 v);

  /// @brief Method .ctor, addr 0x46ac71c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x2 v);

  /// @brief Method .ctor, addr 0x46ac6f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x2 v);

  /// @brief Method .ctor, addr 0x46ac6ac, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46ac774, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46ac6f8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46ac69c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46ac6e0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int2x2 getStaticF_identity();

  static inline ::Unity::Mathematics::int2x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46ad1b0, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::int2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int2x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int2x2>* i___System__IEquatable_1___Unity__Mathematics__int2x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46ac9b4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Addition(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Addition, addr 0x46ac9e0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Addition(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46aca04, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Addition(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46ad0a8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_BitwiseAnd(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46ad0b4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_BitwiseAnd(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46ad0d8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46ad100, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_BitwiseOr(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46ad10c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_BitwiseOr(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46ad130, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Decrement, addr 0x46acbec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Decrement(::Unity::Mathematics::int2x2 val);

  /// @brief Method op_Division, addr 0x46acaa4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Division(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Division, addr 0x46acad0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Division(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46acaf4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Division(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Equality, addr 0x46acf3c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Equality, addr 0x46acf7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46acfb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46ad158, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_ExclusiveOr(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46ad164, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_ExclusiveOr(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46ad188, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Explicit, addr 0x46ac814, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method op_Explicit, addr 0x46ac8e8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method op_Explicit, addr 0x46ac870, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method op_Explicit, addr 0x46ac848, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method op_Explicit, addr 0x46ac800, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(bool v);

  /// @brief Method op_Explicit, addr 0x46ac8c4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(double_t v);

  /// @brief Method op_Explicit, addr 0x46ac84c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(float_t v);

  /// @brief Method op_Explicit, addr 0x46ac838, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46acd74, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x46acdb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46acdec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46ace24, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46ace64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46ace9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Implicit, addr 0x46ac7f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Implicit___Unity__Mathematics__int2x2(int32_t v);

  /// @brief Method op_Increment, addr 0x46acbc4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Increment(::Unity::Mathematics::int2x2 val);

  /// @brief Method op_Inequality, addr 0x46acfec, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Inequality, addr 0x46ad02c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46ad064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_LeftShift, addr 0x46acef4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_LeftShift(::Unity::Mathematics::int2x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46acc14, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_LessThan, addr 0x46acc54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46acc8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46accc4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46acd04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46acd3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Modulus, addr 0x46acb1c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Modulus(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Modulus, addr 0x46acb58, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Modulus(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46acb8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Modulus(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Multiply, addr 0x46ac93c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Multiply(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Multiply, addr 0x46ac968, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Multiply(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46ac98c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Multiply(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x46ad09c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_OnesComplement(::Unity::Mathematics::int2x2 val);

  /// @brief Method op_RightShift, addr 0x46acf18, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_RightShift(::Unity::Mathematics::int2x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46aca2c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Subtraction(::Unity::Mathematics::int2x2 lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x46aca58, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Subtraction(::Unity::Mathematics::int2x2 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46aca7c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int2x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46aced4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_UnaryNegation(::Unity::Mathematics::int2x2 val);

  /// @brief Method op_UnaryPlus, addr 0x46acef0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 op_UnaryPlus(::Unity::Mathematics::int2x2 val);

  static inline void setStaticF_identity(::Unity::Mathematics::int2x2 value);

  static inline void setStaticF_zero(::Unity::Mathematics::int2x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int2x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None
  // }]
  constexpr int2x2(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9998 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x2, c1) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int2x2, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int2x2, "Unity.Mathematics", "int2x2");
