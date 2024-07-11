#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x3)
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
struct bool3x3;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x3);
// Type: Unity.Mathematics::double3x3
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double3x3
struct CORDL_TYPE double3x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::double3 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x48
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::Unity::Mathematics::double3x3 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x48
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::double3x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double3x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x3219ed8, size 0xf8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3219e3c, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double3x3 rhs);

  /// @brief Method GetHashCode, addr 0x3219fd0, size 0xfc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x321a0cc, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x321a3b8, size 0x2d4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x32188f0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2);

  /// @brief Method .ctor, addr 0x3218910, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22);

  /// @brief Method .ctor, addr 0x321896c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x3 v);

  /// @brief Method .ctor, addr 0x3218af4, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 v);

  /// @brief Method .ctor, addr 0x3218a0c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x3 v);

  /// @brief Method .ctor, addr 0x3218a80, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x3 v);

  /// @brief Method .ctor, addr 0x3218944, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x321892c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3218ad8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x32189f0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x3218a64, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double3x3 getStaticF_identity();

  static inline ::Unity::Mathematics::double3x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3219e30, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::double3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x3>* i___System__IEquatable_1___Unity__Mathematics__double3x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x3218dc4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Addition(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Addition, addr 0x3218e00, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Addition(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x3218e34, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Addition(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Decrement, addr 0x3219308, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Decrement(::Unity::Mathematics::double3x3 val);

  /// @brief Method op_Division, addr 0x3218f0c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Division(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Division, addr 0x3218f48, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Division(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x3218f7c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Division(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Equality, addr 0x3219aa8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Equality, addr 0x3219b4c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x3219bdc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Explicit, addr 0x3218b80, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Explicit___Unity__Mathematics__double3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method op_Explicit, addr 0x3218b58, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Explicit___Unity__Mathematics__double3x3(bool v);

  /// @brief Method op_GreaterThan, addr 0x32196d4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x3219778, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x3219808, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3219898, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x321993c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32199cc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Implicit, addr 0x3218cf8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method op_Implicit, addr 0x3218c20, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method op_Implicit, addr 0x3218c8c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method op_Implicit, addr 0x3218b40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(double_t v);

  /// @brief Method op_Implicit, addr 0x3218cdc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(float_t v);

  /// @brief Method op_Implicit, addr 0x3218c04, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x3218c70, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x32192c4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Increment(::Unity::Mathematics::double3x3 val);

  /// @brief Method op_Inequality, addr 0x3219c6c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Inequality, addr 0x3219d10, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x3219da0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_LessThan, addr 0x321934c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_LessThan, addr 0x32193f0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x3219480, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3219510, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x32195b4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3219644, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Modulus, addr 0x3218fb0, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Modulus(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Modulus, addr 0x32190c8, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Modulus(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x32191cc, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Modulus(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Multiply, addr 0x3218d28, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Multiply(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Multiply, addr 0x3218d64, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Multiply(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x3218d94, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Multiply(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x3218e68, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Subtraction(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x3218ea4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Subtraction(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x3218ed8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x3219a5c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_UnaryNegation(::Unity::Mathematics::double3x3 val);

  /// @brief Method op_UnaryPlus, addr 0x3219a8c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_UnaryPlus(::Unity::Mathematics::double3x3 val);

  static inline void setStaticF_identity(::Unity::Mathematics::double3x3 value);

  static inline void setStaticF_zero(::Unity::Mathematics::double3x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double3x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }]
  constexpr double3x3(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c0;

  /// @brief Field c1, offset: 0x18, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c1;

  /// @brief Field c2, offset: 0x30, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double3x3, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c2) == 0x30, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double3x3, "Unity.Mathematics", "double3x3");
