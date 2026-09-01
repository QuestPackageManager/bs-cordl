#pragma once
// IWYU pragma private; include "Unity\Mathematics\double2x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x3)
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
struct bool2x3;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct uint2x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double2x3, "Unity.Mathematics", "double2x3");
// Dependencies Unity.Mathematics.double2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2x3
struct CORDL_TYPE double2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double2x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6623b90, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6623b24, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2x3 rhs);

  /// @brief Method GetHashCode, addr 0x6623c5c, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6623cf8, size 0x220, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6623f18, size 0x21c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6622dbc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method .ctor, addr 0x6622dcc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method .ctor, addr 0x6622e0c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x3 v);

  /// @brief Method .ctor, addr 0x6622ef8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x3 v);

  /// @brief Method .ctor, addr 0x6622e68, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x3 v);

  /// @brief Method .ctor, addr 0x6622eb0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x3 v);

  /// @brief Method .ctor, addr 0x6622dec, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6622ddc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6622ee4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6622e54, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6622e9c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double2x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6623b1c, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::double2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x3>* i___System__IEquatable_1___Unity__Mathematics__double2x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x66230c4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Addition, addr 0x66230ec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x6623110, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Decrement, addr 0x6623444, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Decrement(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_Division, addr 0x66231a4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Division, addr 0x66231cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x66231f0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Equality, addr 0x66238f4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Equality, addr 0x6623958, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x66239b0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Explicit, addr 0x6622f50, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method op_Explicit, addr 0x6622f30, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(bool v);

  /// @brief Method op_GreaterThan, addr 0x6623698, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x66236fc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6623754, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x66237ac, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6623810, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6623868, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Implicit, addr 0x662303c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method op_Implicit, addr 0x6622fac, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method op_Implicit, addr 0x6622ff4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method op_Implicit, addr 0x6622f20, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(double_t v);

  /// @brief Method op_Implicit, addr 0x6623028, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(float_t v);

  /// @brief Method op_Implicit, addr 0x6622f98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x6622fe0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x6623418, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Increment(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_Inequality, addr 0x6623a08, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Inequality, addr 0x6623a6c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x6623ac4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThan, addr 0x6623470, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThan, addr 0x66234d4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x662352c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6623584, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x66235e8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6623640, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Modulus, addr 0x6623214, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Modulus, addr 0x66232c4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x6623374, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Multiply, addr 0x662305c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Multiply, addr 0x6623084, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x66230a4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x6623134, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x662315c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x6623180, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x66238c0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_UnaryNegation(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_UnaryPlus, addr 0x66238e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_UnaryPlus(::Unity::Mathematics::double2x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double2x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }]
  constexpr double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13146 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double2x3) == 0x30, "Size mismatch!");

} // namespace Unity::Mathematics
