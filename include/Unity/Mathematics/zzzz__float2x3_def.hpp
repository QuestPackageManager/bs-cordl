#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x3)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2x3;
}
namespace Unity::Mathematics {
struct double2x3;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct uint2x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float2x3);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.float2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float2x3
struct CORDL_TYPE float2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float2x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float2x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4688fd0, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4688f64, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float2x3 rhs);

  /// @brief Method GetHashCode, addr 0x4689098, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4689104, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4689330, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4688260, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2);

  /// @brief Method .ctor, addr 0x4688270, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12);

  /// @brief Method .ctor, addr 0x46882b0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x3 v);

  /// @brief Method .ctor, addr 0x468839c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x3 v);

  /// @brief Method .ctor, addr 0x468830c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x3 v);

  /// @brief Method .ctor, addr 0x4688354, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x3 v);

  /// @brief Method .ctor, addr 0x4688290, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4688388, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x4688280, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46882f8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4688340, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float2x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4688f5c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::float2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x3>* i___System__IEquatable_1___Unity__Mathematics__float2x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x468855c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Addition(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Addition, addr 0x4688580, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Addition(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x46885a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Addition(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Decrement, addr 0x46888d0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Decrement(::Unity::Mathematics::float2x3 val);

  /// @brief Method op_Division, addr 0x4688634, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Division(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Division, addr 0x4688658, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Division(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x468867c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Division(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Equality, addr 0x4688d4c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Equality, addr 0x4688dac, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x4688e00, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Explicit, addr 0x46883f4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Explicit___Unity__Mathematics__float2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method op_Explicit, addr 0x46884e0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Explicit___Unity__Mathematics__float2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method op_Explicit, addr 0x46883d4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Explicit___Unity__Mathematics__float2x3(bool v);

  /// @brief Method op_Explicit, addr 0x46884cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Explicit___Unity__Mathematics__float2x3(double_t v);

  /// @brief Method op_GreaterThan, addr 0x4688b0c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x4688b6c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4688bc0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4688c14, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4688c74, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4688cc8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Implicit, addr 0x4688450, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method op_Implicit, addr 0x4688498, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method op_Implicit, addr 0x46883c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(float_t v);

  /// @brief Method op_Implicit, addr 0x468843c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x4688484, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x46888a4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Increment(::Unity::Mathematics::float2x3 val);

  /// @brief Method op_Inequality, addr 0x4688e54, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Inequality, addr 0x4688eb4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x4688f08, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_LessThan, addr 0x46888fc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_LessThan, addr 0x468895c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x46889b0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4688a04, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4688a64, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4688ab8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Modulus, addr 0x46886a0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Modulus(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Modulus, addr 0x4688750, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Modulus(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x4688800, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Modulus(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Multiply, addr 0x4688500, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Multiply(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Multiply, addr 0x4688524, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Multiply(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x4688540, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Multiply(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x46885c8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Subtraction(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x46885ec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Subtraction(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x4688610, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Subtraction(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4688d1c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_UnaryNegation(::Unity::Mathematics::float2x3 val);

  /// @brief Method op_UnaryPlus, addr 0x4688d38, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_UnaryPlus(::Unity::Mathematics::float2x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float2x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }]
  constexpr float2x3(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9977 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c1;

  /// @brief Field c2, offset: 0x10, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x3, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x3, c2) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2x3, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2x3, "Unity.Mathematics", "float2x3");
