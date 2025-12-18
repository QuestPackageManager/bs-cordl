#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2)
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
struct bool2;
}
namespace Unity::Mathematics {
class double2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct half2;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
class double2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct double2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::double2_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::double2);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.double2/DebuggerProxy
class CORDL_TYPE double2_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) double_t x;

  /// @brief Field y, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) double_t y;

  static inline ::Unity::Mathematics::double2_DebuggerProxy* New_ctor(::Unity::Mathematics::double2 v);

  constexpr double_t const& __cordl_internal_get_x() const;

  constexpr double_t& __cordl_internal_get_x();

  constexpr double_t const& __cordl_internal_get_y() const;

  constexpr double_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(double_t value);

  constexpr void __cordl_internal_set_y(double_t value);

  /// @brief Method .ctor, addr 0x646b83c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr double2_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "double2_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  double2_DebuggerProxy(double2_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "double2_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  double2_DebuggerProxy(double2_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13116 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  double_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x8, def value: None
  double_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2_DebuggerProxy, ___y) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2_DebuggerProxy, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2
struct CORDL_TYPE double2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::double2_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) double_t Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::double2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::double3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::double4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::double4 xxxy;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::double3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::double4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::double4 xxyy;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::double2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::double3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::double4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::double4 xyxy;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::double3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::double4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::double4 xyyy;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::double2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::double3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::double4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::double4 yxxy;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::double3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::double4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::double4 yxyy;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::double2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::double3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::double4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::double4 yyxy;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::double3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::double4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::double4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x646b5fc, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x646b5d8, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2 rhs);

  /// @brief Method GetHashCode, addr 0x646b688, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x646b6c8, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x646b77c, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x646adfc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x646af54, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

  /// @brief Method .ctor, addr 0x646ae60, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x646aec4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 v);

  /// @brief Method .ctor, addr 0x646ae2c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

  /// @brief Method .ctor, addr 0x646ae4c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

  /// @brief Method .ctor, addr 0x646ade4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x646addc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x646af48, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x646ae20, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x646ae40, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x646adcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y);

  /// @brief Method .ctor, addr 0x646add4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 xy);

  static inline ::Unity::Mathematics::double2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x646b5c8, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x646b590, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xx();

  /// @brief Method get_xxx, addr 0x646b528, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxx();

  /// @brief Method get_xxxx, addr 0x646b420, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x646b434, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxy();

  /// @brief Method get_xxy, addr 0x646b538, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxy();

  /// @brief Method get_xxyx, addr 0x646b444, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x646b454, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyy();

  /// @brief Method get_xy, addr 0x646b59c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xy();

  /// @brief Method get_xyx, addr 0x646b544, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyx();

  /// @brief Method get_xyxx, addr 0x646b464, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x646b474, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxy();

  /// @brief Method get_xyy, addr 0x646b550, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyy();

  /// @brief Method get_xyyx, addr 0x646b484, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x646b494, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyy();

  /// @brief Method get_yx, addr 0x646b5ac, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yx();

  /// @brief Method get_yxx, addr 0x646b55c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxx();

  /// @brief Method get_yxxx, addr 0x646b4a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x646b4b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxy();

  /// @brief Method get_yxy, addr 0x646b568, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxy();

  /// @brief Method get_yxyx, addr 0x646b4c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x646b4d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyy();

  /// @brief Method get_yy, addr 0x646b5bc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yy();

  /// @brief Method get_yyx, addr 0x646b574, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyx();

  /// @brief Method get_yyxx, addr 0x646b4e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x646b4f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxy();

  /// @brief Method get_yyy, addr 0x646b580, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyy();

  /// @brief Method get_yyyx, addr 0x646b504, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x646b514, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2>* i___System__IEquatable_1___Unity__Mathematics__double2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x646b100, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Addition(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Addition, addr 0x646b10c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Addition(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x646b118, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Addition(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Decrement, addr 0x646b250, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Decrement(::Unity::Mathematics::double2 val);

  /// @brief Method op_Division, addr 0x646b150, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Division(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Division, addr 0x646b15c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Division(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x646b168, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Division(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Equality, addr 0x646b390, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Equality, addr 0x646b3a8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x646b3c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Explicit, addr 0x646af84, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Explicit___Unity__Mathematics__double2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x646af6c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Explicit___Unity__Mathematics__double2(bool v);

  /// @brief Method op_GreaterThan, addr 0x646b2f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_GreaterThan, addr 0x646b308, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x646b320, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x646b338, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x646b350, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x646b368, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Implicit, addr 0x646b0cc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Implicit, addr 0x646afd8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x646b03c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::half2 v);

  /// @brief Method op_Implicit, addr 0x646afac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::int2 v);

  /// @brief Method op_Implicit, addr 0x646afc8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::uint2 v);

  /// @brief Method op_Implicit, addr 0x646af64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(double_t v);

  /// @brief Method op_Implicit, addr 0x646b0c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(float_t v);

  /// @brief Method op_Implicit, addr 0x646afa0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(int32_t v);

  /// @brief Method op_Implicit, addr 0x646afbc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(uint32_t v);

  /// @brief Method op_Increment, addr 0x646b240, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Increment(::Unity::Mathematics::double2 val);

  /// @brief Method op_Inequality, addr 0x646b3d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Inequality, addr 0x646b3f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x646b408, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_LessThan, addr 0x646b260, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_LessThan, addr 0x646b278, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x646b290, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x646b2a8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x646b2c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x646b2d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Modulus, addr 0x646b178, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Modulus(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Modulus, addr 0x646b1bc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Modulus(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x646b200, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Modulus(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Multiply, addr 0x646b0d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Multiply(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Multiply, addr 0x646b0e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Multiply(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x646b0f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Multiply(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Subtraction, addr 0x646b128, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Subtraction(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Subtraction, addr 0x646b134, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Subtraction(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x646b140, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x646b380, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_UnaryNegation(::Unity::Mathematics::double2 val);

  /// @brief Method op_UnaryPlus, addr 0x646b38c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_UnaryPlus(::Unity::Mathematics::double2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double2 value);

  /// @brief Method set_Item, addr 0x646b5d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, double_t value);

  /// @brief Method set_xy, addr 0x646b5a4, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::double2 value);

  /// @brief Method set_yx, addr 0x646b5b4, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::double2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2();

  // Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }]
  constexpr double2(double_t x, double_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13117 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x8, def value: None
  double_t x;

  /// @brief Field y, offset: 0x8, size: 0x8, def value: None
  double_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2, y) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::double2_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2_DebuggerProxy*, "Unity.Mathematics", "double2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2, "Unity.Mathematics", "double2");
