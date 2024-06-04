#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Type: Unity.Mathematics::double2x3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double2x3
struct CORDL_TYPE double2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::double2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::double2x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x32044b4, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3204448, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2x3 rhs);

  /// @brief Method GetHashCode, addr 0x320457c, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3204638, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3204864, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x32036e0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method .ctor, addr 0x32036f0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method .ctor, addr 0x3203730, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x3 v);

  /// @brief Method .ctor, addr 0x320381c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x3 v);

  /// @brief Method .ctor, addr 0x320378c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x3 v);

  /// @brief Method .ctor, addr 0x32037d4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x3 v);

  /// @brief Method .ctor, addr 0x3203710, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x3203700, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3203808, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x3203778, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x32037c0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double2x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3204440, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::double2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x3>* i___System__IEquatable_1___Unity__Mathematics__double2x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x32039e8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Addition, addr 0x3203a10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x3203a34, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Decrement, addr 0x3203d68, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Decrement(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_Division, addr 0x3203ac8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Division, addr 0x3203af0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x3203b14, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Equality, addr 0x3204218, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Equality, addr 0x320427c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x32042d4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Explicit, addr 0x3203874, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method op_Explicit, addr 0x3203854, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(bool v);

  /// @brief Method op_GreaterThan, addr 0x3203fbc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x3204020, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x3204078, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32040d0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3204134, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x320418c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Implicit, addr 0x3203960, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method op_Implicit, addr 0x32038d0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method op_Implicit, addr 0x3203918, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method op_Implicit, addr 0x3203844, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(double_t v);

  /// @brief Method op_Implicit, addr 0x320394c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(float_t v);

  /// @brief Method op_Implicit, addr 0x32038bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x3203904, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x3203d3c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Increment(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_Inequality, addr 0x320432c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Inequality, addr 0x3204390, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x32043e8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThan, addr 0x3203d94, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThan, addr 0x3203df8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x3203e50, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3203ea8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3203f0c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3203f64, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Modulus, addr 0x3203b38, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Modulus, addr 0x3203be8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x3203c98, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Multiply, addr 0x3203980, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Multiply, addr 0x32039a8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x32039c8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x3203a58, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x3203a80, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x3203aa4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x32041e4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_UnaryNegation(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_UnaryPlus, addr 0x3204204, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_UnaryPlus(::Unity::Mathematics::double2x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double2x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }]
  constexpr double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2x3, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c2) == 0x20, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2x3, "Unity.Mathematics", "double2x3");
