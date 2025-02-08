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

  /// @brief Method Equals, addr 0x46c9d24, size 0x168, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46c9c18, size 0x10c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int4x4 rhs);

  /// @brief Method GetHashCode, addr 0x46c9e8c, size 0x114, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46c9fa0, size 0x4ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46ca44c, size 0x494, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46c73f0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3);

  /// @brief Method .ctor, addr 0x46c7408, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22, int32_t m23, int32_t m30,
                    int32_t m31, int32_t m32, int32_t m33);

  /// @brief Method .ctor, addr 0x46c748c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x4 v);

  /// @brief Method .ctor, addr 0x46c770c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x4 v);

  /// @brief Method .ctor, addr 0x46c7598, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 v);

  /// @brief Method .ctor, addr 0x46c7544, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x4 v);

  /// @brief Method .ctor, addr 0x46c746c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46c76dc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46c7568, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46c7450, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46c7528, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int4x4 getStaticF_identity();

  static inline ::Unity::Mathematics::int4x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46c9c10, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::int4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x4>* i___System__IEquatable_1___Unity__Mathematics__int4x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46c7e24, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Addition(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Addition, addr 0x46c7e88, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Addition(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46c7f10, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Addition(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c985c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c9888, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c9910, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c9998, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c99c4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c9a4c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Decrement, addr 0x46c8618, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Decrement(::Unity::Mathematics::int4x4 val);

  /// @brief Method op_Division, addr 0x46c810c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Division(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Division, addr 0x46c81d0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Division(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46c8264, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Division(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Equality, addr 0x46c92d0, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Equality, addr 0x46c93cc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46c94a8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c9ad4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c9b00, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c9b88, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Explicit, addr 0x46c788c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method op_Explicit, addr 0x46c7afc, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method op_Explicit, addr 0x46c7988, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method op_Explicit, addr 0x46c7944, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method op_Explicit, addr 0x46c786c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(bool v);

  /// @brief Method op_Explicit, addr 0x46c7acc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(double_t v);

  /// @brief Method op_Explicit, addr 0x46c7958, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(float_t v);

  /// @brief Method op_Explicit, addr 0x46c7928, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46c8bdc, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x46c8cd8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46c8db4, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46c8e90, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46c8f8c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46c9068, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Implicit, addr 0x46c7850, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Implicit___Unity__Mathematics__int4x4(int32_t v);

  /// @brief Method op_Increment, addr 0x46c85b4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Increment(::Unity::Mathematics::int4x4 val);

  /// @brief Method op_Inequality, addr 0x46c9584, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Inequality, addr 0x46c9680, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46c975c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_LeftShift, addr 0x46c91b4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_LeftShift(::Unity::Mathematics::int4x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46c8674, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_LessThan, addr 0x46c8770, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46c884c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46c8928, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46c8a24, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46c8b00, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Modulus, addr 0x46c82f8, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Modulus(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Modulus, addr 0x46c83fc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Modulus(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46c84d8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Modulus(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Multiply, addr 0x46c7c40, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Multiply(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Multiply, addr 0x46c7d14, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Multiply(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46c7d9c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Multiply(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x46c9838, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_OnesComplement(::Unity::Mathematics::int4x4 val);

  /// @brief Method op_RightShift, addr 0x46c9240, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_RightShift(::Unity::Mathematics::int4x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46c7f98, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Subtraction(::Unity::Mathematics::int4x4 lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_Subtraction, addr 0x46c7ffc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Subtraction(::Unity::Mathematics::int4x4 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46c8084, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int4x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46c9144, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 op_UnaryNegation(::Unity::Mathematics::int4x4 val);

  /// @brief Method op_UnaryPlus, addr 0x46c91a0, size 0x14, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10009 };

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
