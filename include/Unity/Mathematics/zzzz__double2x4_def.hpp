#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x4)
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
// Type: Unity.Mathematics::double2x4
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double2x4
struct CORDL_TYPE double2x4 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::double2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::double2x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x3205c30, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3205ba4, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2x4 rhs);

  /// @brief Method GetHashCode, addr 0x3205d18, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3205e10, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x32060bc, size 0x294, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x3204a78, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3);

  /// @brief Method .ctor, addr 0x3204a8c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13);

  /// @brief Method .ctor, addr 0x3204ad8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x4 v);

  /// @brief Method .ctor, addr 0x3204c04, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x4 v);

  /// @brief Method .ctor, addr 0x3204b4c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x4 v);

  /// @brief Method .ctor, addr 0x3204ba8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x4 v);

  /// @brief Method .ctor, addr 0x3204ab4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x3204aa0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3204bec, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x3204b34, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x3204b90, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double2x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3205b9c, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::double2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x4>* i___System__IEquatable_1___Unity__Mathematics__double2x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x3204e34, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Addition(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Addition, addr 0x3204e60, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Addition(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x3204e88, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Addition(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Decrement, addr 0x3205264, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Decrement(::Unity::Mathematics::double2x4 val);

  /// @brief Method op_Division, addr 0x3204f2c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Division(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Division, addr 0x3204f58, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Division(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x3204f80, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Division(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Equality, addr 0x32058ac, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Equality, addr 0x3205934, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x32059ac, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Explicit, addr 0x3204c70, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Explicit___Unity__Mathematics__double2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method op_Explicit, addr 0x3204c4c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Explicit___Unity__Mathematics__double2x4(bool v);

  /// @brief Method op_GreaterThan, addr 0x3205584, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x320560c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x3205684, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32056fc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3205784, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32057fc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Implicit, addr 0x3204d9c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method op_Implicit, addr 0x3204ce4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method op_Implicit, addr 0x3204d40, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method op_Implicit, addr 0x3204c38, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(double_t v);

  /// @brief Method op_Implicit, addr 0x3204d84, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(float_t v);

  /// @brief Method op_Implicit, addr 0x3204ccc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x3204d28, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Implicit___Unity__Mathematics__double2x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x3205234, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Increment(::Unity::Mathematics::double2x4 val);

  /// @brief Method op_Inequality, addr 0x3205a24, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Inequality, addr 0x3205aac, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x3205b24, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_LessThan, addr 0x3205294, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_LessThan, addr 0x320531c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x3205394, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x320540c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3205494, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x320550c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Modulus, addr 0x3204fa8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Modulus(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Modulus, addr 0x320508c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Modulus(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x3205168, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Modulus(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Multiply, addr 0x3204dc0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Multiply(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Multiply, addr 0x3204dec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Multiply(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x3204e10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Multiply(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Subtraction, addr 0x3204eb0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Subtraction(::Unity::Mathematics::double2x4 lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_Subtraction, addr 0x3204edc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Subtraction(::Unity::Mathematics::double2x4 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x3204f04, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x3205874, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_UnaryNegation(::Unity::Mathematics::double2x4 val);

  /// @brief Method op_UnaryPlus, addr 0x3205898, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 op_UnaryPlus(::Unity::Mathematics::double2x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double2x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }]
  constexpr double2x4(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c2;

  /// @brief Field c3, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2x4, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x4, c3) == 0x30, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2x4, "Unity.Mathematics", "double2x4");
