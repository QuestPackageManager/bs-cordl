#pragma once
// IWYU pragma private; include "Unity/Mathematics/double4x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double4x2)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4x2;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float4x2;
}
namespace Unity::Mathematics {
struct int4x2;
}
namespace Unity::Mathematics {
struct uint4x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double4x2);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.double4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double4x2
struct CORDL_TYPE double4x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double4x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double4x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double4x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4685860, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46857d4, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double4x2 rhs);

  /// @brief Method GetHashCode, addr 0x4685948, size 0xd4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4685a1c, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4685cc8, size 0x294, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46846fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1);

  /// @brief Method .ctor, addr 0x4684710, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21, double_t m30, double_t m31);

  /// @brief Method .ctor, addr 0x468475c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x2 v);

  /// @brief Method .ctor, addr 0x4684888, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x2 v);

  /// @brief Method .ctor, addr 0x46847d0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x2 v);

  /// @brief Method .ctor, addr 0x468482c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x2 v);

  /// @brief Method .ctor, addr 0x4684738, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4684724, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x4684870, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46847b8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4684814, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double4x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46857c8, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::double4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double4x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double4x2>* i___System__IEquatable_1___Unity__Mathematics__double4x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4684aa8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Addition(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Addition, addr 0x4684ad4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Addition(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x4684afc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Addition(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Decrement, addr 0x4684ef0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Decrement(::Unity::Mathematics::double4x2 val);

  /// @brief Method op_Division, addr 0x4684ba0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Division(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Division, addr 0x4684bcc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Division(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x4684bf4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Division(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Equality, addr 0x46854f8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Equality, addr 0x4685580, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x46855f0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Explicit, addr 0x46848e4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Explicit___Unity__Mathematics__double4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method op_Explicit, addr 0x46848c0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Explicit___Unity__Mathematics__double4x2(bool v);

  /// @brief Method op_GreaterThan, addr 0x46851f0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x4685278, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46852e8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4685358, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46853e0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4685450, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Implicit, addr 0x4684a10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method op_Implicit, addr 0x4684958, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method op_Implicit, addr 0x46849b4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method op_Implicit, addr 0x46848ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(double_t v);

  /// @brief Method op_Implicit, addr 0x46849f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(float_t v);

  /// @brief Method op_Implicit, addr 0x4684940, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x468499c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x4684ec0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Increment(::Unity::Mathematics::double4x2 val);

  /// @brief Method op_Inequality, addr 0x4685660, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Inequality, addr 0x46856e8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x4685758, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_LessThan, addr 0x4684f20, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_LessThan, addr 0x4684fa8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x4685018, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4685088, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4685110, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4685180, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Modulus, addr 0x4684c1c, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Modulus(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Modulus, addr 0x4684d10, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Modulus(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x4684dec, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Modulus(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Multiply, addr 0x4684a34, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Multiply(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Multiply, addr 0x4684a60, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Multiply(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x4684a84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Multiply(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x4684b24, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Subtraction(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x4684b50, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Subtraction(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x4684b78, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Subtraction(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46854c0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_UnaryNegation(::Unity::Mathematics::double4x2 val);

  /// @brief Method op_UnaryPlus, addr 0x46854e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_UnaryPlus(::Unity::Mathematics::double4x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double4x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double4x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double4", modifiers: "",
  // def_value: None }]
  constexpr double4x2(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9969 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field c0, offset: 0x0, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c0;

  /// @brief Field c1, offset: 0x20, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x2, c1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double4x2, 0x40>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double4x2, "Unity.Mathematics", "double4x2");
