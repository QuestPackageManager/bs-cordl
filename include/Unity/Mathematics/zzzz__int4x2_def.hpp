#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4x2.hpp"
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
CORDL_MODULE_EXPORT(int4x2)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4x2;
}
namespace Unity::Mathematics {
struct double4x2;
}
namespace Unity::Mathematics {
struct float4x2;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint4x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int4x2);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.int4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int4x2
struct CORDL_TYPE int4x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int4x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int4x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46be574, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46be4e8, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int4x2 rhs);

  /// @brief Method GetHashCode, addr 0x46be65c, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46be6f8, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46be9a4, size 0x294, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46bcf98, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1);

  /// @brief Method .ctor, addr 0x46bcfa4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21, int32_t m30, int32_t m31);

  /// @brief Method .ctor, addr 0x46bcfe8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x2 v);

  /// @brief Method .ctor, addr 0x46bd170, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x2 v);

  /// @brief Method .ctor, addr 0x46bd09c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x2 v);

  /// @brief Method .ctor, addr 0x46bd060, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x2 v);

  /// @brief Method .ctor, addr 0x46bcfd0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46bd148, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46bd074, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46bcfbc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46bd04c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int4x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46be4e0, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::int4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x2>* i___System__IEquatable_1___Unity__Mathematics__int4x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46bd570, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Addition(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Addition, addr 0x46bd5a4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Addition(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46bd5ec, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Addition(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46be2e8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseAnd(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46be300, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseAnd(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46be348, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46be390, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseOr(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46be3a8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseOr(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46be3f0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Decrement, addr 0x46bd980, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Decrement(::Unity::Mathematics::int4x2 val);

  /// @brief Method op_Division, addr 0x46bd6f8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Division(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Division, addr 0x46bd754, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Division(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46bd7a0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Division(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Equality, addr 0x46be014, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Equality, addr 0x46be094, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46be104, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46be438, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_ExclusiveOr(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46be450, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_ExclusiveOr(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46be498, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Explicit, addr 0x46bd248, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method op_Explicit, addr 0x46bd3c8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method op_Explicit, addr 0x46bd2f4, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method op_Explicit, addr 0x46bd2c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method op_Explicit, addr 0x46bd230, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(bool v);

  /// @brief Method op_Explicit, addr 0x46bd3a0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(double_t v);

  /// @brief Method op_Explicit, addr 0x46bd2cc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(float_t v);

  /// @brief Method op_Explicit, addr 0x46bd2ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46bdc78, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x46bdcf8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46bdd68, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46bddd8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46bde58, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46bdec8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Implicit, addr 0x46bd21c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Implicit___Unity__Mathematics__int4x2(int32_t v);

  /// @brief Method op_Increment, addr 0x46bd940, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Increment(::Unity::Mathematics::int4x2 val);

  /// @brief Method op_Inequality, addr 0x46be174, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Inequality, addr 0x46be1f4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46be264, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_LeftShift, addr 0x46bdf78, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_LeftShift(::Unity::Mathematics::int4x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46bd9b8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_LessThan, addr 0x46bda38, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46bdaa8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46bdb18, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46bdb98, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46bdc08, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Modulus, addr 0x46bd7ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Modulus(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Modulus, addr 0x46bd868, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Modulus(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46bd8d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Modulus(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Multiply, addr 0x46bd474, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Multiply(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Multiply, addr 0x46bd4e0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Multiply(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46bd528, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Multiply(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x46be2d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_OnesComplement(::Unity::Mathematics::int4x2 val);

  /// @brief Method op_RightShift, addr 0x46bdfc4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_RightShift(::Unity::Mathematics::int4x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46bd634, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Subtraction(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x46bd668, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Subtraction(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46bd6b0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46bdf38, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_UnaryNegation(::Unity::Mathematics::int4x2 val);

  /// @brief Method op_UnaryPlus, addr 0x46bdf6c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_UnaryPlus(::Unity::Mathematics::int4x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int4x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int4x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None
  // }]
  constexpr int4x2(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10003 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x2, c1) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int4x2, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int4x2, "Unity.Mathematics", "int4x2");
