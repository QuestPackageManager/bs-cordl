#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x3)
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
// Type: Unity.Mathematics::float2x3
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float2x3
struct CORDL_TYPE float2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::float2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::float2x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float2x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x321855c, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x32184f0, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float2x3 rhs);

  /// @brief Method GetHashCode, addr 0x3218624, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x32186b0, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x32188dc, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x3217744, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2);

  /// @brief Method .ctor, addr 0x3217754, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12);

  /// @brief Method .ctor, addr 0x3217794, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x3 v);

  /// @brief Method .ctor, addr 0x321789c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x3 v);

  /// @brief Method .ctor, addr 0x32177f0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x3 v);

  /// @brief Method .ctor, addr 0x321783c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x3 v);

  /// @brief Method .ctor, addr 0x3217774, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x3217888, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3217764, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x32177dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x3217824, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float2x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x32184e8, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::float2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x3>* i___System__IEquatable_1___Unity__Mathematics__float2x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x3217a88, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Addition(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Addition, addr 0x3217ab0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Addition(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x3217ad4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Addition(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Decrement, addr 0x3217e0c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Decrement(::Unity::Mathematics::float2x3 val);

  /// @brief Method op_Division, addr 0x3217b68, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Division(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Division, addr 0x3217b90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Division(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x3217bb4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Division(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Equality, addr 0x32182c0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Equality, addr 0x3218324, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x321837c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Explicit, addr 0x32178f4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Explicit___Unity__Mathematics__float2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method op_Explicit, addr 0x32179fc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Explicit___Unity__Mathematics__float2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method op_Explicit, addr 0x32178d4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Explicit___Unity__Mathematics__float2x3(bool v);

  /// @brief Method op_Explicit, addr 0x32179e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Explicit___Unity__Mathematics__float2x3(double_t v);

  /// @brief Method op_GreaterThan, addr 0x3218064, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x32180c8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x3218120, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3218178, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32181dc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3218234, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Implicit, addr 0x3217950, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method op_Implicit, addr 0x321799c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method op_Implicit, addr 0x32178c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(float_t v);

  /// @brief Method op_Implicit, addr 0x321793c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x3217984, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Implicit___Unity__Mathematics__float2x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x3217ddc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Increment(::Unity::Mathematics::float2x3 val);

  /// @brief Method op_Inequality, addr 0x32183d4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Inequality, addr 0x3218438, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x3218490, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_LessThan, addr 0x3217e3c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_LessThan, addr 0x3217ea0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x3217ef8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3217f50, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3217fb4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x321800c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Modulus, addr 0x3217bd8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Modulus(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Modulus, addr 0x3217c88, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Modulus(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x3217d38, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Modulus(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Multiply, addr 0x3217a20, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Multiply(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Multiply, addr 0x3217a48, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Multiply(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x3217a68, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Multiply(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x3217af8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Subtraction(::Unity::Mathematics::float2x3 lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x3217b20, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Subtraction(::Unity::Mathematics::float2x3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x3217b44, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_Subtraction(float_t lhs, ::Unity::Mathematics::float2x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x321828c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_UnaryNegation(::Unity::Mathematics::float2x3 val);

  /// @brief Method op_UnaryPlus, addr 0x32182ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 op_UnaryPlus(::Unity::Mathematics::float2x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float2x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }]
  constexpr float2x3(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c1;

  /// @brief Field c2, offset: 0x10, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2x3, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x3, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x3, c2) == 0x10, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2x3, "Unity.Mathematics", "float2x3");
