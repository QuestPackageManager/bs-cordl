#pragma once
// IWYU pragma private; include "Unity\Mathematics\double3x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x2)
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
struct bool3x2;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float3x2;
}
namespace Unity::Mathematics {
struct int3x2;
}
namespace Unity::Mathematics {
struct uint3x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double3x2, "Unity.Mathematics", "double3x2");
// Dependencies Unity.Mathematics.double3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3x2
struct CORDL_TYPE double3x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double3x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double3x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6627b88, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6627b1c, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double3x2 rhs);

  /// @brief Method GetHashCode, addr 0x6627c54, size 0xa0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6627cf4, size 0x220, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6627f14, size 0x21c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6626dc4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1);

  /// @brief Method .ctor, addr 0x6626dd4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21);

  /// @brief Method .ctor, addr 0x6626e14, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x2 v);

  /// @brief Method .ctor, addr 0x6626f10, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x2 v);

  /// @brief Method .ctor, addr 0x6626e70, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x2 v);

  /// @brief Method .ctor, addr 0x6626ec0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x2 v);

  /// @brief Method .ctor, addr 0x6626df4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6626de4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6626efc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6626e5c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6626eac, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double3x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6627b10, size 0xc, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::double3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x2>* i___System__IEquatable_1___Unity__Mathematics__double3x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x66270e8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Addition(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Addition, addr 0x6627110, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Addition(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x6627134, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Addition(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Decrement, addr 0x6627480, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Decrement(::Unity::Mathematics::double3x2 val);

  /// @brief Method op_Division, addr 0x66271c8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Division(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Division, addr 0x66271f0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Division(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x6627214, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Division(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Equality, addr 0x6627900, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Equality, addr 0x6627960, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x66279b4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Explicit, addr 0x6626f74, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Explicit___Unity__Mathematics__double3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method op_Explicit, addr 0x6626f54, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Explicit___Unity__Mathematics__double3x2(bool v);

  /// @brief Method op_GreaterThan, addr 0x66276bc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x662771c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6627770, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x66277c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6627824, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6627878, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Implicit, addr 0x6627060, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method op_Implicit, addr 0x6626fd0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method op_Implicit, addr 0x6627018, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method op_Implicit, addr 0x6626f44, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(double_t v);

  /// @brief Method op_Implicit, addr 0x662704c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(float_t v);

  /// @brief Method op_Implicit, addr 0x6626fbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x6627004, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x6627454, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Increment(::Unity::Mathematics::double3x2 val);

  /// @brief Method op_Inequality, addr 0x6627a08, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Inequality, addr 0x6627a68, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x6627abc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_LessThan, addr 0x66274ac, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_LessThan, addr 0x662750c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x6627560, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x66275b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6627614, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6627668, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Modulus, addr 0x6627238, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Modulus(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Modulus, addr 0x66272f4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Modulus(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x66273a8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Modulus(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Multiply, addr 0x6627080, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Multiply(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Multiply, addr 0x66270a8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Multiply(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x66270c8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Multiply(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Subtraction, addr 0x6627158, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Subtraction(::Unity::Mathematics::double3x2 lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_Subtraction, addr 0x6627180, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Subtraction(::Unity::Mathematics::double3x2 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x66271a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_Subtraction(double_t lhs, ::Unity::Mathematics::double3x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x66278cc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_UnaryNegation(::Unity::Mathematics::double3x2 val);

  /// @brief Method op_UnaryPlus, addr 0x66278ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 op_UnaryPlus(::Unity::Mathematics::double3x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double3x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double3x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "",
  // def_value: None }]
  constexpr double3x2(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13150 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c0;

  /// @brief Field c1, offset: 0x18, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x2, c1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double3x2) == 0x30, "Size mismatch!");

} // namespace Unity::Mathematics
