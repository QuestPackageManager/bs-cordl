#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x4)
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
struct double2x4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2x4;
}
namespace Unity::Mathematics {
struct uint2x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float2x4);
// Dependencies Unity.Mathematics.float2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float2x4
struct CORDL_TYPE float2x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float2x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float2x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6486b08, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6486a7c, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float2x4 rhs);

  /// @brief Method GetHashCode, addr 0x6486bf4, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6486c84, size 0x2a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6486f24, size 0x29c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6485aa4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2, ::Unity::Mathematics::float2 c3);

  /// @brief Method .ctor, addr 0x6485ab8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13);

  /// @brief Method .ctor, addr 0x6485afc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x4 v);

  /// @brief Method .ctor, addr 0x6485c10, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x4 v);

  /// @brief Method .ctor, addr 0x6485b68, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x4 v);

  /// @brief Method .ctor, addr 0x6485bbc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x4 v);

  /// @brief Method .ctor, addr 0x6485ad8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6485c00, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6485acc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6485b58, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6485bac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float2x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6486a74, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::float2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x4>* i___System__IEquatable_1___Unity__Mathematics__float2x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6485de8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Addition(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Addition, addr 0x6485e00, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Addition(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x6485e18, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Addition(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Decrement, addr 0x6486168, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Decrement(::Unity::Mathematics::float2x4 val);

  /// @brief Method op_Division, addr 0x6485e78, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Division(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Division, addr 0x6485e90, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Division(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x6485ea8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Division(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Equality, addr 0x6486784, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Equality, addr 0x648680c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x6486884, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Explicit, addr 0x6485c74, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method op_Explicit, addr 0x6485d88, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method op_Explicit, addr 0x6485c50, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(bool v);

  /// @brief Method op_Explicit, addr 0x6485d78, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(double_t v);

  /// @brief Method op_GreaterThan, addr 0x6486474, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x64864fc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6486574, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64865ec, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6486674, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64866ec, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Implicit, addr 0x6485ce0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method op_Implicit, addr 0x6485d34, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method op_Implicit, addr 0x6485c44, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(float_t v);

  /// @brief Method op_Implicit, addr 0x6485cd0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x6485d24, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x648614c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Increment(::Unity::Mathematics::float2x4 val);

  /// @brief Method op_Inequality, addr 0x64868fc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Inequality, addr 0x6486984, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x64869fc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_LessThan, addr 0x6486184, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_LessThan, addr 0x648620c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x6486284, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64862fc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6486384, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64863fc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Modulus, addr 0x6485ec0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Modulus(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Modulus, addr 0x6485fa4, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Modulus(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x6486080, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Modulus(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Multiply, addr 0x6485da8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Multiply(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Multiply, addr 0x6485dc0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Multiply(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x6485dd4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Multiply(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Subtraction, addr 0x6485e30, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Subtraction(::Unity::Mathematics::float2x4 lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_Subtraction, addr 0x6485e48, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Subtraction(::Unity::Mathematics::float2x4 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x6485e60, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_Subtraction(float_t lhs, ::Unity::Mathematics::float2x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6486764, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_UnaryNegation(::Unity::Mathematics::float2x4 val);

  /// @brief Method op_UnaryPlus, addr 0x6486778, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 op_UnaryPlus(::Unity::Mathematics::float2x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float2x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float2x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }]
  constexpr float2x4(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2, ::Unity::Mathematics::float2 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13135 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c1;

  /// @brief Field c2, offset: 0x10, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c2;

  /// @brief Field c3, offset: 0x18, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c3) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2x4, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2x4, "Unity.Mathematics", "float2x4");
