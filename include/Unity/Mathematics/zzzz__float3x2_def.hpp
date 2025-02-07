#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x2)
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
struct float3;
}
namespace Unity::Mathematics {
struct int3x2;
}
namespace Unity::Mathematics {
struct uint3x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x2);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.float3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3x2
struct CORDL_TYPE float3x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float3x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float3x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x469611c, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46960b0, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float3x2 rhs);

  /// @brief Method GetHashCode, addr 0x46961e4, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4696254, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4696480, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x469535c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1);

  /// @brief Method .ctor, addr 0x469536c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21);

  /// @brief Method .ctor, addr 0x46953ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x2 v);

  /// @brief Method .ctor, addr 0x46954a8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x2 v);

  /// @brief Method .ctor, addr 0x4695408, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x2 v);

  /// @brief Method .ctor, addr 0x4695458, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x2 v);

  /// @brief Method .ctor, addr 0x469538c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4695494, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x469537c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46953f4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4695444, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float3x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46960a4, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::float3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x2>* i___System__IEquatable_1___Unity__Mathematics__float3x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4695674, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Addition(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Addition, addr 0x4695698, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Addition(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x46956bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Addition(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Decrement, addr 0x4695a00, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Decrement(::Unity::Mathematics::float3x2 val);

  /// @brief Method op_Division, addr 0x469574c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Division(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Division, addr 0x4695770, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Division(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x4695794, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Division(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Equality, addr 0x4695e8c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Equality, addr 0x4695ef0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x4695f44, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Explicit, addr 0x469550c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Explicit___Unity__Mathematics__float3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method op_Explicit, addr 0x46955f8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Explicit___Unity__Mathematics__float3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method op_Explicit, addr 0x46954ec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Explicit___Unity__Mathematics__float3x2(bool v);

  /// @brief Method op_Explicit, addr 0x46955e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Explicit___Unity__Mathematics__float3x2(double_t v);

  /// @brief Method op_GreaterThan, addr 0x4695c44, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x4695ca8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4695cfc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4695d50, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4695db4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4695e08, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Implicit, addr 0x4695568, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method op_Implicit, addr 0x46955b0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method op_Implicit, addr 0x46954dc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(float_t v);

  /// @brief Method op_Implicit, addr 0x4695554, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x469559c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x46959d4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Increment(::Unity::Mathematics::float3x2 val);

  /// @brief Method op_Inequality, addr 0x4695f98, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Inequality, addr 0x4695ffc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x4696050, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_LessThan, addr 0x4695a2c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_LessThan, addr 0x4695a90, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x4695ae4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4695b38, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4695b9c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4695bf0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Modulus, addr 0x46957b8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Modulus(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Modulus, addr 0x4695874, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Modulus(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x4695928, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Modulus(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Multiply, addr 0x4695618, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Multiply(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Multiply, addr 0x469563c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Multiply(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x4695658, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Multiply(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Subtraction, addr 0x46956e0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Subtraction(::Unity::Mathematics::float3x2 lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_Subtraction, addr 0x4695704, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Subtraction(::Unity::Mathematics::float3x2 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x4695728, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_Subtraction(float_t lhs, ::Unity::Mathematics::float3x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4695e5c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_UnaryNegation(::Unity::Mathematics::float3x2 val);

  /// @brief Method op_UnaryPlus, addr 0x4695e78, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 op_UnaryPlus(::Unity::Mathematics::float3x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float3x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float3x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
  // None }]
  constexpr float3x2(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9980 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x2, c1) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3x2, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3x2, "Unity.Mathematics", "float3x2");
