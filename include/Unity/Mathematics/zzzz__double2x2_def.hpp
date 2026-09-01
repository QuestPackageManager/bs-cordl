#pragma once
// IWYU pragma private; include "Unity\Mathematics\double2x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x2)
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
struct double2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double2x2, "Unity.Mathematics", "double2x2");
// Dependencies Unity.Mathematics.double2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2x2
struct CORDL_TYPE double2x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double2 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::double2x2 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double2x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x662290c, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x66228d0, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2x2 rhs);

  /// @brief Method GetHashCode, addr 0x66229b8, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6622a2c, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6622bcc, size 0x19c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x662206c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1);

  /// @brief Method .ctor, addr 0x6622078, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m10, double_t m11);

  /// @brief Method .ctor, addr 0x66220ac, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x2 v);

  /// @brief Method .ctor, addr 0x6622158, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x2 v);

  /// @brief Method .ctor, addr 0x66220f0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x2 v);

  /// @brief Method .ctor, addr 0x6622124, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x2 v);

  /// @brief Method .ctor, addr 0x6622090, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6622084, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6622148, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x66220e0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6622114, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double2x2 getStaticF_identity();

  static inline ::Unity::Mathematics::double2x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x66228c8, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::double2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x2>* i___System__IEquatable_1___Unity__Mathematics__double2x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6622298, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Addition(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Addition, addr 0x66222ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Addition(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x66222c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Addition(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Decrement, addr 0x66224f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Decrement(::Unity::Mathematics::double2x2 val);

  /// @brief Method op_Division, addr 0x6622318, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Division(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Division, addr 0x662232c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Division(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x6622340, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Division(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Equality, addr 0x6622790, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Equality, addr 0x66227c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x66227f8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Explicit, addr 0x66221a4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Explicit___Unity__Mathematics__double2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method op_Explicit, addr 0x6622184, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Explicit___Unity__Mathematics__double2x2(bool v);

  /// @brief Method op_GreaterThan, addr 0x6622640, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x6622674, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x66226a8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x66226dc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6622710, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6622744, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Implicit, addr 0x6622244, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method op_Implicit, addr 0x66221e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method op_Implicit, addr 0x6622214, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method op_Implicit, addr 0x6622174, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(double_t v);

  /// @brief Method op_Implicit, addr 0x6622230, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(float_t v);

  /// @brief Method op_Implicit, addr 0x66221d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x6622200, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x66224d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Increment(::Unity::Mathematics::double2x2 val);

  /// @brief Method op_Inequality, addr 0x662282c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Inequality, addr 0x6622860, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x6622894, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_LessThan, addr 0x6622508, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_LessThan, addr 0x662253c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x6622570, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x66225a4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x66225d8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x662260c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Modulus, addr 0x6622358, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Modulus(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Modulus, addr 0x66223e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Modulus(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x6622460, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Modulus(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Multiply, addr 0x6622258, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Multiply(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Multiply, addr 0x662226c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Multiply(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x6622280, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Multiply(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x66222d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Subtraction(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x66222ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Subtraction(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x6622300, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6622778, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_UnaryNegation(::Unity::Mathematics::double2x2 val);

  /// @brief Method op_UnaryPlus, addr 0x662278c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_UnaryPlus(::Unity::Mathematics::double2x2 val);

  static inline void setStaticF_identity(::Unity::Mathematics::double2x2 value);

  static inline void setStaticF_zero(::Unity::Mathematics::double2x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }]
  constexpr double2x2(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13145 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x2, c1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double2x2) == 0x20, "Size mismatch!");

} // namespace Unity::Mathematics
