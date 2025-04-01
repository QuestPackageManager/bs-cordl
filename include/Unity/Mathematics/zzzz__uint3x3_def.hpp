#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3x3.hpp"
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
CORDL_MODULE_EXPORT(uint3x3)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool3x3;
}
namespace Unity::Mathematics {
struct double3x3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct uint3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint3x3);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.uint3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint3x3
struct CORDL_TYPE uint3x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint3 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::uint3x3 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint3x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint3x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46db87c, size 0xf8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46db7e0, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method GetHashCode, addr 0x46db974, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46dba20, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46dbd0c, size 0x2d4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46d99d8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2);

  /// @brief Method .ctor, addr 0x46d99f4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22);

  /// @brief Method .ctor, addr 0x46d9a60, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x3 v);

  /// @brief Method .ctor, addr 0x46d9c48, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x3 v);

  /// @brief Method .ctor, addr 0x46d9b48, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 v);

  /// @brief Method .ctor, addr 0x46d9ae4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x3 v);

  /// @brief Method .ctor, addr 0x46d9a38, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46d9c18, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46d9b18, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46d9ac0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46d9a14, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint3x3 getStaticF_identity();

  static inline ::Unity::Mathematics::uint3x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46db7d4, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::uint3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3x3>* i___System__IEquatable_1___Unity__Mathematics__uint3x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46da168, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Addition(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Addition, addr 0x46da1fc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Addition(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x46da25c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46db468, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_BitwiseAnd(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46db4cc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_BitwiseAnd(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46db52c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46db58c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_BitwiseOr(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46db5f0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_BitwiseOr(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46db650, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Decrement, addr 0x46da770, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Decrement(::Unity::Mathematics::uint3x3 val);

  /// @brief Method op_Division, addr 0x46da410, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Division(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Division, addr 0x46da484, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Division(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x46da4e4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Division(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Equality, addr 0x46db084, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Equality, addr 0x46db12c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x46db1c0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46db6b0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_ExclusiveOr(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46db714, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_ExclusiveOr(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46db774, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Explicit, addr 0x46d9d64, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Explicit___Unity__Mathematics__uint3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method op_Explicit, addr 0x46d9f48, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Explicit___Unity__Mathematics__uint3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method op_Explicit, addr 0x46d9e4c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Explicit___Unity__Mathematics__uint3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method op_Explicit, addr 0x46d9de8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Explicit___Unity__Mathematics__uint3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method op_Explicit, addr 0x46d9d3c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Explicit___Unity__Mathematics__uint3x3(bool v);

  /// @brief Method op_Explicit, addr 0x46d9f18, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Explicit___Unity__Mathematics__uint3x3(double_t v);

  /// @brief Method op_Explicit, addr 0x46d9e1c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Explicit___Unity__Mathematics__uint3x3(float_t v);

  /// @brief Method op_Explicit, addr 0x46d9dc4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Explicit___Unity__Mathematics__uint3x3(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x46dab94, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x46dac3c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46dacd0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dad60, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dae08, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46dae9c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Implicit, addr 0x46d9d18, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Implicit___Unity__Mathematics__uint3x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x46da6e4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Increment(::Unity::Mathematics::uint3x3 val);

  /// @brief Method op_Inequality, addr 0x46db250, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Inequality, addr 0x46db2f8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x46db38c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_LeftShift, addr 0x46dafc4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_LeftShift(::Unity::Mathematics::uint3x3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46da7fc, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_LessThan, addr 0x46da8a4, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x46da938, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46da9c8, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46daa70, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46dab04, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Modulus, addr 0x46da544, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Modulus(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Modulus, addr 0x46da5dc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Modulus(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x46da660, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Multiply, addr 0x46da014, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Multiply(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Multiply, addr 0x46da0a8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Multiply(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x46da108, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_OnesComplement, addr 0x46db41c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_OnesComplement(::Unity::Mathematics::uint3x3 val);

  /// @brief Method op_RightShift, addr 0x46db024, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_RightShift(::Unity::Mathematics::uint3x3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46da2bc, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Subtraction(::Unity::Mathematics::uint3x3 lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x46da350, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Subtraction(::Unity::Mathematics::uint3x3 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46da3b0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint3x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46daf2c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_UnaryNegation(::Unity::Mathematics::uint3x3 val);

  /// @brief Method op_UnaryPlus, addr 0x46daf90, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 op_UnaryPlus(::Unity::Mathematics::uint3x3 val);

  static inline void setStaticF_identity(::Unity::Mathematics::uint3x3 value);

  static inline void setStaticF_zero(::Unity::Mathematics::uint3x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint3x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }]
  constexpr uint3x3(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10025 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x3, c2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint3x3, 0x24>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint3x3, "Unity.Mathematics", "uint3x3");
