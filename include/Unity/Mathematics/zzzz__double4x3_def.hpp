#pragma once
// IWYU pragma private; include "Unity/Mathematics/double4x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double4x3)
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
struct bool4x3;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float4x3;
}
namespace Unity::Mathematics {
struct int4x3;
}
namespace Unity::Mathematics {
struct uint4x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double4x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double4x3, "Unity.Mathematics", "double4x3");
// Dependencies Unity.Mathematics.double4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double4x3
struct CORDL_TYPE double4x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x60
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double4x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double4x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double4x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x662e7dc, size 0x12c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x662e710, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double4x3 rhs);

  /// @brief Method GetHashCode, addr 0x662e908, size 0x134, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x662ea3c, size 0x3a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x662eddc, size 0x39c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x662ce1c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2);

  /// @brief Method .ctor, addr 0x662ce48, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22, double_t m30, double_t m31, double_t m32);

  /// @brief Method .ctor, addr 0x662cec4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x3 v);

  /// @brief Method .ctor, addr 0x662d070, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x3 v);

  /// @brief Method .ctor, addr 0x662cf68, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x3 v);

  /// @brief Method .ctor, addr 0x662cfec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x3 v);

  /// @brief Method .ctor, addr 0x662ce98, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x662ce7c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x662d050, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x662cf48, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x662cfcc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double4x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x662e704, size 0xc, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::double4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double4x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double4x3>* i___System__IEquatable_1___Unity__Mathematics__double4x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x662d374, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Addition(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Addition, addr 0x662d3b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Addition(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x662d3ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Addition(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Decrement, addr 0x662d980, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Decrement(::Unity::Mathematics::double4x3 val);

  /// @brief Method op_Division, addr 0x662d4d4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Division(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Division, addr 0x662d514, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Division(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x662d54c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Division(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Equality, addr 0x662e2b4, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Equality, addr 0x662e37c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x662e42c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Explicit, addr 0x662d0ec, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Explicit___Unity__Mathematics__double4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method op_Explicit, addr 0x662d0c0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Explicit___Unity__Mathematics__double4x3(bool v);

  /// @brief Method op_GreaterThan, addr 0x662de14, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x662dedc, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x662df8c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x662e03c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x662e104, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x662e1b4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Implicit, addr 0x662d298, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method op_Implicit, addr 0x662d190, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method op_Implicit, addr 0x662d214, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method op_Implicit, addr 0x662d0a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(double_t v);

  /// @brief Method op_Implicit, addr 0x662d278, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(float_t v);

  /// @brief Method op_Implicit, addr 0x662d170, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x662d1f4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x662d93c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Increment(::Unity::Mathematics::double4x3 val);

  /// @brief Method op_Inequality, addr 0x662e4dc, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Inequality, addr 0x662e5a4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x662e654, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_LessThan, addr 0x662d9c4, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_LessThan, addr 0x662da8c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x662db3c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x662dbec, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x662dcb4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x662dd64, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Modulus, addr 0x662d584, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Modulus(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Modulus, addr 0x662d6d0, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Modulus(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x662d80c, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Modulus(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Multiply, addr 0x662d2cc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Multiply(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Multiply, addr 0x662d30c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Multiply(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x662d340, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Multiply(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x662d424, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Subtraction(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x662d464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Subtraction(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x662d49c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x662e264, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_UnaryNegation(::Unity::Mathematics::double4x3 val);

  /// @brief Method op_UnaryPlus, addr 0x662e298, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_UnaryPlus(::Unity::Mathematics::double4x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double4x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double4x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double4", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }]
  constexpr double4x3(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13129 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field c0, offset: 0x0, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c0;

  /// @brief Field c1, offset: 0x20, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c1;

  /// @brief Field c2, offset: 0x40, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x3, c1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x3, c2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double4x3) == 0x60, "Size mismatch!");

} // namespace Unity::Mathematics
