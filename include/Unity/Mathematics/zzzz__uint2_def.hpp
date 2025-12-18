#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2.hpp"
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
class uint2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class uint2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::uint2_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::uint2);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.uint2/DebuggerProxy
class CORDL_TYPE uint2_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) uint32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) uint32_t y;

  static inline ::Unity::Mathematics::uint2_DebuggerProxy* New_ctor(::Unity::Mathematics::uint2 v);

  constexpr uint32_t const& __cordl_internal_get_x() const;

  constexpr uint32_t& __cordl_internal_get_x();

  constexpr uint32_t const& __cordl_internal_get_y() const;

  constexpr uint32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(uint32_t value);

  constexpr void __cordl_internal_set_y(uint32_t value);

  /// @brief Method .ctor, addr 0x64d198c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "uint2_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  uint2_DebuggerProxy(uint2_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "uint2_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  uint2_DebuggerProxy(uint2_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13175 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  uint32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  uint32_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint2_DebuggerProxy, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2
struct CORDL_TYPE uint2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::uint2_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) uint32_t Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::uint2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::uint3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::uint4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::uint4 xxxy;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::uint3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::uint4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::uint4 xxyy;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::uint2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::uint3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::uint4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::uint4 xyxy;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::uint3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::uint4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::uint4 xyyy;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::uint2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::uint3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::uint4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::uint4 yxxy;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::uint3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::uint4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::uint4 yxyy;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::uint2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::uint3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::uint4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::uint4 yyxy;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::uint3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::uint4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::uint4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x64d1758, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x64d1730, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint2 rhs);

  /// @brief Method GetHashCode, addr 0x64d17e4, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x64d1818, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x64d18cc, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x64d0fb0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x64d101c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

  /// @brief Method .ctor, addr 0x64d0fe8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

  /// @brief Method .ctor, addr 0x64d0fc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

  /// @brief Method .ctor, addr 0x64d0fa4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x64d1004, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x64d0fd0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x64d0fc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x64d0f9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x64d0f8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, uint32_t y);

  /// @brief Method .ctor, addr 0x64d0f94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 xy);

  static inline ::Unity::Mathematics::uint2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x64d1720, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x64d16e0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xx();

  /// @brief Method get_xxx, addr 0x64d1680, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxx();

  /// @brief Method get_xxxx, addr 0x64d156c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x64d157c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxy();

  /// @brief Method get_xxy, addr 0x64d168c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxy();

  /// @brief Method get_xxyx, addr 0x64d158c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x64d159c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyy();

  /// @brief Method get_xy, addr 0x64d16ec, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xy();

  /// @brief Method get_xyx, addr 0x64d1698, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyx();

  /// @brief Method get_xyxx, addr 0x64d15b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x64d15c8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxy();

  /// @brief Method get_xyy, addr 0x64d16a4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyy();

  /// @brief Method get_xyyx, addr 0x64d15d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x64d15e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyy();

  /// @brief Method get_yx, addr 0x64d16fc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yx();

  /// @brief Method get_yxx, addr 0x64d16b0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxx();

  /// @brief Method get_yxxx, addr 0x64d15f4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x64d1608, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxy();

  /// @brief Method get_yxy, addr 0x64d16bc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxy();

  /// @brief Method get_yxyx, addr 0x64d1614, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x64d1624, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyy();

  /// @brief Method get_yy, addr 0x64d1714, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yy();

  /// @brief Method get_yyx, addr 0x64d16c8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyx();

  /// @brief Method get_yyxx, addr 0x64d1634, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x64d1650, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxy();

  /// @brief Method get_yyy, addr 0x64d16d4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyy();

  /// @brief Method get_yyyx, addr 0x64d1660, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x64d1670, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2>* i___System__IEquatable_1___Unity__Mathematics__uint2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x64d1150, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Addition, addr 0x64d1168, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x64d117c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64d14dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64d14e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64d14f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x64d150c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x64d1514, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x64d1528, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Decrement, addr 0x64d1280, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Decrement(::Unity::Mathematics::uint2 val);

  /// @brief Method op_Division, addr 0x64d11d0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Division, addr 0x64d11e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x64d11fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Equality, addr 0x64d1424, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Equality, addr 0x64d1444, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x64d1460, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64d153c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64d1544, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64d1558, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Explicit, addr 0x64d1070, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x64d10e8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::double2 v);

  /// @brief Method op_Explicit, addr 0x64d10a8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Explicit, addr 0x64d108c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::int2 v);

  /// @brief Method op_Explicit, addr 0x64d1058, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(bool v);

  /// @brief Method op_Explicit, addr 0x64d10d0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(double_t v);

  /// @brief Method op_Explicit, addr 0x64d1090, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(float_t v);

  /// @brief Method op_Explicit, addr 0x64d1080, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x64d1340, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThan, addr 0x64d135c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x64d1378, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64d1394, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64d13b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64d13cc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Implicit, addr 0x64d104c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Implicit___Unity__Mathematics__uint2(uint32_t v);

  /// @brief Method op_Increment, addr 0x64d1268, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Increment(::Unity::Mathematics::uint2 val);

  /// @brief Method op_Inequality, addr 0x64d147c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Inequality, addr 0x64d149c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x64d14b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LeftShift, addr 0x64d13fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_LeftShift(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x64d1298, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThan, addr 0x64d12b4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x64d12d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64d12ec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64d1308, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64d1324, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Modulus, addr 0x64d1210, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Modulus, addr 0x64d1230, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x64d124c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Multiply, addr 0x64d1110, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Multiply, addr 0x64d1128, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x64d113c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_OnesComplement, addr 0x64d14d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_OnesComplement(::Unity::Mathematics::uint2 val);

  /// @brief Method op_RightShift, addr 0x64d1410, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_RightShift(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x64d1190, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Subtraction, addr 0x64d11a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x64d11bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x64d13e8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_UnaryNegation(::Unity::Mathematics::uint2 val);

  /// @brief Method op_UnaryPlus, addr 0x64d13f8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_UnaryPlus(::Unity::Mathematics::uint2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint2 value);

  /// @brief Method set_Item, addr 0x64d1728, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, uint32_t value);

  /// @brief Method set_xy, addr 0x64d16f4, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::uint2 value);

  /// @brief Method set_yx, addr 0x64d1708, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::uint2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2();

  // Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr uint2(uint32_t x, uint32_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13176 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  uint32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  uint32_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2, y) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint2, 0x8>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::uint2_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint2_DebuggerProxy*, "Unity.Mathematics", "uint2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint2, "Unity.Mathematics", "uint2");
