#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2)
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
class __uint2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class __uint2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__uint2__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::uint2);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::uint2::DebuggerProxy*
class CORDL_TYPE __uint2__DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) uint32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) uint32_t y;

  static inline ::Unity::Mathematics::__uint2__DebuggerProxy* New_ctor(::Unity::Mathematics::uint2 v);

  constexpr uint32_t const& __cordl_internal_get_x() const;

  constexpr uint32_t& __cordl_internal_get_x();

  constexpr uint32_t const& __cordl_internal_get_y() const;

  constexpr uint32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(uint32_t value);

  constexpr void __cordl_internal_set_y(uint32_t value);

  /// @brief Method .ctor, addr 0x3249d7c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __uint2__DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__uint2__DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __uint2__DebuggerProxy(__uint2__DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__uint2__DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __uint2__DebuggerProxy(__uint2__DebuggerProxy const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  uint32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  uint32_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__uint2__DebuggerProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__uint2__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__uint2__DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::uint2
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::uint2
struct CORDL_TYPE uint2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::__uint2__DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) uint32_t Item[];

  __declspec(property(get = get_xx))::Unity::Mathematics::uint2 xx;

  __declspec(property(get = get_xxx))::Unity::Mathematics::uint3 xxx;

  __declspec(property(get = get_xxxx))::Unity::Mathematics::uint4 xxxx;

  __declspec(property(get = get_xxxy))::Unity::Mathematics::uint4 xxxy;

  __declspec(property(get = get_xxy))::Unity::Mathematics::uint3 xxy;

  __declspec(property(get = get_xxyx))::Unity::Mathematics::uint4 xxyx;

  __declspec(property(get = get_xxyy))::Unity::Mathematics::uint4 xxyy;

  __declspec(property(get = get_xy, put = set_xy))::Unity::Mathematics::uint2 xy;

  __declspec(property(get = get_xyx))::Unity::Mathematics::uint3 xyx;

  __declspec(property(get = get_xyxx))::Unity::Mathematics::uint4 xyxx;

  __declspec(property(get = get_xyxy))::Unity::Mathematics::uint4 xyxy;

  __declspec(property(get = get_xyy))::Unity::Mathematics::uint3 xyy;

  __declspec(property(get = get_xyyx))::Unity::Mathematics::uint4 xyyx;

  __declspec(property(get = get_xyyy))::Unity::Mathematics::uint4 xyyy;

  __declspec(property(get = get_yx, put = set_yx))::Unity::Mathematics::uint2 yx;

  __declspec(property(get = get_yxx))::Unity::Mathematics::uint3 yxx;

  __declspec(property(get = get_yxxx))::Unity::Mathematics::uint4 yxxx;

  __declspec(property(get = get_yxxy))::Unity::Mathematics::uint4 yxxy;

  __declspec(property(get = get_yxy))::Unity::Mathematics::uint3 yxy;

  __declspec(property(get = get_yxyx))::Unity::Mathematics::uint4 yxyx;

  __declspec(property(get = get_yxyy))::Unity::Mathematics::uint4 yxyy;

  __declspec(property(get = get_yy))::Unity::Mathematics::uint2 yy;

  __declspec(property(get = get_yyx))::Unity::Mathematics::uint3 yyx;

  __declspec(property(get = get_yyxx))::Unity::Mathematics::uint4 yyxx;

  __declspec(property(get = get_yyxy))::Unity::Mathematics::uint4 yyxy;

  __declspec(property(get = get_yyy))::Unity::Mathematics::uint3 yyy;

  __declspec(property(get = get_yyyx))::Unity::Mathematics::uint4 yyyx;

  __declspec(property(get = get_yyyy))::Unity::Mathematics::uint4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::uint2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x3249b90, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3249b68, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint2 rhs);

  /// @brief Method GetHashCode, addr 0x3249c18, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3249c4c, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3249cec, size 0x90, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x324936c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x32493e8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

  /// @brief Method .ctor, addr 0x32493a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

  /// @brief Method .ctor, addr 0x3249384, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

  /// @brief Method .ctor, addr 0x3249360, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x32493d0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3249390, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x324937c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x3249358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x3249344, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, uint32_t y);

  /// @brief Method .ctor, addr 0x324934c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 xy);

  static inline ::Unity::Mathematics::uint2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3249b58, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x3249b14, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xx();

  /// @brief Method get_xxx, addr 0x3249a98, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxx();

  /// @brief Method get_xxxx, addr 0x324996c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x324997c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxy();

  /// @brief Method get_xxy, addr 0x3249aa8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxy();

  /// @brief Method get_xxyx, addr 0x3249994, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x32499a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyy();

  /// @brief Method get_xy, addr 0x3249b20, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xy();

  /// @brief Method get_xyx, addr 0x3249ab8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyx();

  /// @brief Method get_xyxx, addr 0x32499b8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x32499d0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxy();

  /// @brief Method get_xyy, addr 0x3249ac8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyy();

  /// @brief Method get_xyyx, addr 0x32499dc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x32499f0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyy();

  /// @brief Method get_yx, addr 0x3249b34, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yx();

  /// @brief Method get_yxx, addr 0x3249ad8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxx();

  /// @brief Method get_yxxx, addr 0x3249a04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x3249a14, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxy();

  /// @brief Method get_yxy, addr 0x3249ae4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxy();

  /// @brief Method get_yxyx, addr 0x3249a28, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x3249a38, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyy();

  /// @brief Method get_yy, addr 0x3249b4c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yy();

  /// @brief Method get_yyx, addr 0x3249af4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyx();

  /// @brief Method get_yyxx, addr 0x3249a50, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x3249a60, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxy();

  /// @brief Method get_yyy, addr 0x3249b04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyy();

  /// @brief Method get_yyyx, addr 0x3249a70, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x3249a88, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2>* i___System__IEquatable_1___Unity__Mathematics__uint2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x324950c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Addition, addr 0x3249524, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x3249538, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x32498d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x32498d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x32498ec, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x3249904, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x324990c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x3249920, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Decrement, addr 0x324964c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Decrement(::Unity::Mathematics::uint2 val);

  /// @brief Method op_Division, addr 0x3249594, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Division, addr 0x32495ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x32495c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Equality, addr 0x3249810, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Equality, addr 0x3249830, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x324984c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3249938, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3249940, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3249954, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Explicit, addr 0x3249428, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x32494a0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::double2 v);

  /// @brief Method op_Explicit, addr 0x3249460, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Explicit, addr 0x3249444, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::int2 v);

  /// @brief Method op_Explicit, addr 0x324941c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(bool v);

  /// @brief Method op_Explicit, addr 0x3249488, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(double_t v);

  /// @brief Method op_Explicit, addr 0x3249448, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(float_t v);

  /// @brief Method op_Explicit, addr 0x3249438, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x324971c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThan, addr 0x324973c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x3249758, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3249778, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3249798, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32497b4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Implicit, addr 0x3249410, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Implicit___Unity__Mathematics__uint2(uint32_t v);

  /// @brief Method op_Increment, addr 0x3249634, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Increment(::Unity::Mathematics::uint2 val);

  /// @brief Method op_Inequality, addr 0x324986c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Inequality, addr 0x324988c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x32498a8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LeftShift, addr 0x32497e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_LeftShift(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x3249664, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThan, addr 0x3249684, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x32496a0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x32496c0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x32496e0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x32496fc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Modulus, addr 0x32495d8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Modulus, addr 0x32495f8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x3249614, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Multiply, addr 0x32494c8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Multiply, addr 0x32494e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x32494f4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_OnesComplement, addr 0x32498c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_OnesComplement(::Unity::Mathematics::uint2 val);

  /// @brief Method op_RightShift, addr 0x32497fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_RightShift(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x3249550, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Subtraction, addr 0x3249568, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x324957c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x32497d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_UnaryNegation(::Unity::Mathematics::uint2 val);

  /// @brief Method op_UnaryPlus, addr 0x32497e4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_UnaryPlus(::Unity::Mathematics::uint2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint2 value);

  /// @brief Method set_Item, addr 0x3249b60, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, uint32_t value);

  /// @brief Method set_xy, addr 0x3249b28, size 0xc, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::uint2 value);

  /// @brief Method set_yx, addr 0x3249b40, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::uint2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2();

  // Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr uint2(uint32_t x, uint32_t y) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  uint32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  uint32_t y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint2, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2, y) == 0x4, "Offset mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__uint2__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__uint2__DebuggerProxy*, "Unity.Mathematics", "uint2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint2, "Unity.Mathematics", "uint2");
