#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float4x2)
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
struct bool4x2;
}
namespace Unity::Mathematics {
struct double4x2;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct int4x2;
}
namespace Unity::Mathematics {
struct uint4x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float4x2);
// Type: Unity.Mathematics::float4x2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float4x2
struct CORDL_TYPE float4x2 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::float4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x20
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::float4x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float4x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x3238028, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3237f9c, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float4x2 rhs);

  /// @brief Method GetHashCode, addr 0x3238110, size 0xb4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x32381c4, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3238470, size 0x294, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x3237008, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1);

  /// @brief Method .ctor, addr 0x323701c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21, float_t m30, float_t m31);

  /// @brief Method .ctor, addr 0x3237058, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x2 v);

  /// @brief Method .ctor, addr 0x3237194, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x2 v);

  /// @brief Method .ctor, addr 0x32370c8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x2 v);

  /// @brief Method .ctor, addr 0x3237120, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x2 v);

  /// @brief Method .ctor, addr 0x323703c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x3237184, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3237030, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x32370b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x323710c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float4x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3237f94, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::float4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float4x2>* i___System__IEquatable_1___Unity__Mathematics__float4x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x323737c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Addition(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Addition, addr 0x3237394, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Addition(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x32373ac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Addition(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Decrement, addr 0x3237718, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Decrement(::Unity::Mathematics::float4x2 val);

  /// @brief Method op_Division, addr 0x323740c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Division(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Division, addr 0x3237424, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Division(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x323743c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Division(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Equality, addr 0x3237cd4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Equality, addr 0x3237d54, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x3237dc4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Explicit, addr 0x32371e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Explicit___Unity__Mathematics__float4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method op_Explicit, addr 0x323731c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Explicit___Unity__Mathematics__float4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method op_Explicit, addr 0x32371c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Explicit___Unity__Mathematics__float4x2(bool v);

  /// @brief Method op_Explicit, addr 0x323730c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Explicit___Unity__Mathematics__float4x2(double_t v);

  /// @brief Method op_GreaterThan, addr 0x32379f4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x3237a74, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x3237ae4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3237b54, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3237bd4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3237c44, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Implicit, addr 0x3237250, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Implicit___Unity__Mathematics__float4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method op_Implicit, addr 0x32372a8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Implicit___Unity__Mathematics__float4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method op_Implicit, addr 0x32371b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Implicit___Unity__Mathematics__float4x2(float_t v);

  /// @brief Method op_Implicit, addr 0x3237240, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Implicit___Unity__Mathematics__float4x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x3237294, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Implicit___Unity__Mathematics__float4x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x32376fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Increment(::Unity::Mathematics::float4x2 val);

  /// @brief Method op_Inequality, addr 0x3237e34, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Inequality, addr 0x3237eb4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x3237f24, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_LessThan, addr 0x3237734, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_LessThan, addr 0x32377b4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x3237824, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3237894, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3237914, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3237984, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Modulus, addr 0x3237454, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Modulus(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Modulus, addr 0x323754c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Modulus(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x3237628, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Modulus(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Multiply, addr 0x323733c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Multiply(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Multiply, addr 0x3237354, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Multiply(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x3237368, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Multiply(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x32373c4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Subtraction(::Unity::Mathematics::float4x2 lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x32373dc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Subtraction(::Unity::Mathematics::float4x2 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x32373f4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_Subtraction(float_t lhs, ::Unity::Mathematics::float4x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x3237cb4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_UnaryNegation(::Unity::Mathematics::float4x2 val);

  /// @brief Method op_UnaryPlus, addr 0x3237cc8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 op_UnaryPlus(::Unity::Mathematics::float4x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float4x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float4x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float4", modifiers: "", def_value:
  // None }]
  constexpr float4x2(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float4x2, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x2, c1) == 0x10, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float4x2, "Unity.Mathematics", "float4x2");
