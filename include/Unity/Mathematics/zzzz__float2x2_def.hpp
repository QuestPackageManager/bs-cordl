#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x2)
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
struct bool2x2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float2x2);
// Dependencies Unity.Mathematics.float2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float2x2
struct CORDL_TYPE float2x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float2 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::float2x2 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float2x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float2x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x641c670, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x641c634, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float2x2 rhs);

  /// @brief Method GetHashCode, addr 0x641c71c, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Rotate, addr 0x641cab0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 Rotate(float_t angle);

  /// @brief Method Scale, addr 0x641cb70, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 Scale(float_t s);

  /// @brief Method Scale, addr 0x641cb90, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 Scale(::Unity::Mathematics::float2 v);

  /// @brief Method Scale, addr 0x641cb80, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 Scale(float_t x, float_t y);

  /// @brief Method ToString, addr 0x641c774, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x641c914, size 0x19c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x641bdd0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1);

  /// @brief Method .ctor, addr 0x641bddc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m10, float_t m11);

  /// @brief Method .ctor, addr 0x641be10, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x2 v);

  /// @brief Method .ctor, addr 0x641bebc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x2 v);

  /// @brief Method .ctor, addr 0x641be54, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x2 v);

  /// @brief Method .ctor, addr 0x641be88, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x2 v);

  /// @brief Method .ctor, addr 0x641bdf4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x641beac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x641bde8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x641be44, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x641be78, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float2x2 getStaticF_identity();

  static inline ::Unity::Mathematics::float2x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x641c62c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::float2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x2>* i___System__IEquatable_1___Unity__Mathematics__float2x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x641bffc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Addition(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Addition, addr 0x641c010, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Addition(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x641c024, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Addition(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Decrement, addr 0x641c254, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Decrement(::Unity::Mathematics::float2x2 val);

  /// @brief Method op_Division, addr 0x641c07c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Division(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Division, addr 0x641c090, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Division(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x641c0a4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Division(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Equality, addr 0x641c4f4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Equality, addr 0x641c528, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x641c55c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Explicit, addr 0x641bf08, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method op_Explicit, addr 0x641bfa8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method op_Explicit, addr 0x641bee8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(bool v);

  /// @brief Method op_Explicit, addr 0x641bf94, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(double_t v);

  /// @brief Method op_GreaterThan, addr 0x641c3a4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x641c3d8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x641c40c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x641c440, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x641c474, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x641c4a8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Implicit, addr 0x641bf48, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method op_Implicit, addr 0x641bf78, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method op_Implicit, addr 0x641bed8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(float_t v);

  /// @brief Method op_Implicit, addr 0x641bf34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x641bf64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x641c23c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Increment(::Unity::Mathematics::float2x2 val);

  /// @brief Method op_Inequality, addr 0x641c590, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Inequality, addr 0x641c5c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x641c5f8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_LessThan, addr 0x641c26c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_LessThan, addr 0x641c2a0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x641c2d4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x641c308, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x641c33c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x641c370, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Modulus, addr 0x641c0bc, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Modulus(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Modulus, addr 0x641c148, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Modulus(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x641c1c4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Modulus(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Multiply, addr 0x641bfbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Multiply(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Multiply, addr 0x641bfd0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Multiply(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x641bfe4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Multiply(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x641c03c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Subtraction(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x641c050, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Subtraction(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x641c064, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Subtraction(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x641c4dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_UnaryNegation(::Unity::Mathematics::float2x2 val);

  /// @brief Method op_UnaryPlus, addr 0x641c4f0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_UnaryPlus(::Unity::Mathematics::float2x2 val);

  static inline void setStaticF_identity(::Unity::Mathematics::float2x2 value);

  static inline void setStaticF_zero(::Unity::Mathematics::float2x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float2x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value:
  // None }]
  constexpr float2x2(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13129 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x2, c1) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2x2, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2x2, "Unity.Mathematics", "float2x2");
