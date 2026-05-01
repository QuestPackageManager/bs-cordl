#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint4x4)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
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
struct int4x4;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint4x4);
// Dependencies Unity.Mathematics.uint4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint4x4
struct CORDL_TYPE uint4x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint4 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::uint4x4 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint4x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint4x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint4x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x64d82fc, size 0x16c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x64d81f0, size 0x10c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method GetHashCode, addr 0x64d8468, size 0x114, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x64d857c, size 0x4a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x64d8a1c, size 0x49c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x64d5648, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2, ::Unity::Mathematics::uint4 c3);

  /// @brief Method .ctor, addr 0x64d5668, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m23,
                    uint32_t m30, uint32_t m31, uint32_t m32, uint32_t m33);

  /// @brief Method .ctor, addr 0x64d56fc, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x4 v);

  /// @brief Method .ctor, addr 0x64d5974, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x4 v);

  /// @brief Method .ctor, addr 0x64d57f8, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 v);

  /// @brief Method .ctor, addr 0x64d57ac, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x4 v);

  /// @brief Method .ctor, addr 0x64d56dc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x64d594c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x64d57d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x64d5790, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x64d56c0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint4x4 getStaticF_identity();

  static inline ::Unity::Mathematics::uint4x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x64d81e8, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::uint4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint4x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint4x4>* i___System__IEquatable_1___Unity__Mathematics__uint4x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x64d60c4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Addition(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Addition, addr 0x64d6198, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Addition(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x64d6220, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64d7e34, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_BitwiseAnd(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64d7e60, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_BitwiseAnd(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64d7ee8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x64d7f70, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_BitwiseOr(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x64d7f9c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_BitwiseOr(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x64d8024, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Decrement, addr 0x64d6af4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Decrement(::Unity::Mathematics::uint4x4 val);

  /// @brief Method op_Division, addr 0x64d648c, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Division(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Division, addr 0x64d6564, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Division(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x64d65f8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Division(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Equality, addr 0x64d7828, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Equality, addr 0x64d7944, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x64d7a30, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64d80ac, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_ExclusiveOr(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64d80d8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_ExclusiveOr(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64d8160, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Explicit, addr 0x64d5b04, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method op_Explicit, addr 0x64d5d6c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method op_Explicit, addr 0x64d5bf0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method op_Explicit, addr 0x64d5bb4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method op_Explicit, addr 0x64d5ae4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(bool v);

  /// @brief Method op_Explicit, addr 0x64d5d44, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(double_t v);

  /// @brief Method op_Explicit, addr 0x64d5bc8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(float_t v);

  /// @brief Method op_Explicit, addr 0x64d5b98, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x64d70f4, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x64d71f0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x64d72dc, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64d73c8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64d74c4, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64d75b0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Implicit, addr 0x64d5ac8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Implicit___Unity__Mathematics__uint4x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x64d6a94, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Increment(::Unity::Mathematics::uint4x4 val);

  /// @brief Method op_Inequality, addr 0x64d7b1c, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Inequality, addr 0x64d7c38, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x64d7d24, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_LeftShift, addr 0x64d770c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_LeftShift(::Unity::Mathematics::uint4x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x64d6b4c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_LessThan, addr 0x64d6c48, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x64d6d34, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64d6e20, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64d6f1c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64d7008, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Modulus, addr 0x64d668c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Modulus(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Modulus, addr 0x64d6844, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Modulus(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x64d696c, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Multiply, addr 0x64d5ec0, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Multiply(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Multiply, addr 0x64d5fb4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Multiply(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x64d603c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x64d7e10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_OnesComplement(::Unity::Mathematics::uint4x4 val);

  /// @brief Method op_RightShift, addr 0x64d7798, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_RightShift(::Unity::Mathematics::uint4x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x64d62a8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Subtraction(::Unity::Mathematics::uint4x4 lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_Subtraction, addr 0x64d637c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Subtraction(::Unity::Mathematics::uint4x4 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x64d6404, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint4x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x64d769c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_UnaryNegation(::Unity::Mathematics::uint4x4 val);

  /// @brief Method op_UnaryPlus, addr 0x64d76f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 op_UnaryPlus(::Unity::Mathematics::uint4x4 val);

  static inline void setStaticF_identity(::Unity::Mathematics::uint4x4 value);

  static inline void setStaticF_zero(::Unity::Mathematics::uint4x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint4x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }]
  constexpr uint4x4(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2, ::Unity::Mathematics::uint4 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13200 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c2;

  /// @brief Field c3, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x4, c3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint4x4, 0x40>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint4x4, "Unity.Mathematics", "uint4x4");
