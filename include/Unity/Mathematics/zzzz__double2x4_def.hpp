#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x4)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2x4;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2x4;
}
namespace Unity::Mathematics {
struct int2x4;
}
namespace Unity::Mathematics {
struct uint2x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x4);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.double2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2x4
struct CORDL_TYPE double2x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double2x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4676f64, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4676ed8, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2x4 rhs);

  /// @brief Method GetHashCode, addr 0x467704c, size 0xc8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4677114, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46773c0, size 0x294, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4675e3c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3);

  /// @brief Method .ctor, addr 0x4675e50, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13);

  /// @brief Method .ctor, addr 0x4675e9c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x4 v);

  /// @brief Method .ctor, addr 0x4675fc8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x4 v);

  /// @brief Method .ctor, addr 0x4675f10, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x4 v);

  /// @brief Method .ctor, addr 0x4675f6c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x4 v);

  /// @brief Method .ctor, addr 0x4675e78, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4675e64, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x4675fb0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x4675ef8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4675f54, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double2x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4676ed0, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::double2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x4>* i___System__IEquatable_1___Unity__Mathematics__double2x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46761f8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Addition(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Addition, addr 0x4676224, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Addition(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x467624c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Addition(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Decrement, addr 0x4676628, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Decrement(::Unity::Mathematics::double2x4 val);

  /// @brief Method op_Division, addr 0x46762f0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Division(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Division, addr 0x467631c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Division(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x4676344, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Division(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Equality, addr 0x4676c10, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Equality, addr 0x4676c90, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x4676d00, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Explicit, addr 0x4676034, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Explicit___Unity__Mathematics__double2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method op_Explicit, addr 0x4676010, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Explicit___Unity__Mathematics__double2x4(bool v);

  /// @brief Method op_GreaterThan, addr 0x4676918, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x4676998, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4676a08, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4676a78, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4676af8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4676b68, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Implicit, addr 0x4676160, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method op_Implicit, addr 0x46760a8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method op_Implicit, addr 0x4676104, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method op_Implicit, addr 0x4675ffc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(double_t v);

  /// @brief Method op_Implicit, addr 0x4676148, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(float_t v);

  /// @brief Method op_Implicit, addr 0x4676090, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x46760ec, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x46765f8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Increment(::Unity::Mathematics::double2x4 val);

  /// @brief Method op_Inequality, addr 0x4676d70, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Inequality, addr 0x4676df0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x4676e60, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_LessThan, addr 0x4676658, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_LessThan, addr 0x46766d8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x4676748, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46767b8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4676838, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46768a8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Modulus, addr 0x467636c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Modulus(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Modulus, addr 0x4676450, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Modulus(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x467652c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Modulus(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Multiply, addr 0x4676184, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Multiply(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Multiply, addr 0x46761b0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Multiply(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x46761d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Multiply(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Subtraction, addr 0x4676274, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Subtraction(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Subtraction, addr 0x46762a0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Subtraction(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x46762c8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4676bd8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_UnaryNegation(::Unity::Mathematics::double2x4 val);

  /// @brief Method op_UnaryPlus, addr 0x4676bfc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_UnaryPlus(::Unity::Mathematics::double2x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double2x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }]
  constexpr double2x4(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9963 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c2;

  /// @brief Field c3, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x4, c3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2x4, 0x40>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2x4, "Unity.Mathematics", "double2x4");
