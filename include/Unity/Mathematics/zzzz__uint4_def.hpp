#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint4)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
class uint4_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class uint4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint4;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::uint4_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::uint4);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.uint4/DebuggerProxy
class CORDL_TYPE uint4_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field w, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w)) uint32_t w;

  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) uint32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) uint32_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) uint32_t z;

  static inline ::Unity::Mathematics::uint4_DebuggerProxy* New_ctor(::Unity::Mathematics::uint4 v);

  constexpr uint32_t const& __cordl_internal_get_w() const;

  constexpr uint32_t& __cordl_internal_get_w();

  constexpr uint32_t const& __cordl_internal_get_x() const;

  constexpr uint32_t& __cordl_internal_get_x();

  constexpr uint32_t const& __cordl_internal_get_y() const;

  constexpr uint32_t& __cordl_internal_get_y();

  constexpr uint32_t const& __cordl_internal_get_z() const;

  constexpr uint32_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_w(uint32_t value);

  constexpr void __cordl_internal_set_x(uint32_t value);

  constexpr void __cordl_internal_set_y(uint32_t value);

  constexpr void __cordl_internal_set_z(uint32_t value);

  /// @brief Method .ctor, addr 0x4673574, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr uint4_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "uint4_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  uint4_DebuggerProxy(uint4_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "uint4_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  uint4_DebuggerProxy(uint4_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10027 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  uint32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  uint32_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  uint32_t ___z;

  /// @brief Field w, offset: 0x1c, size: 0x4, def value: None
  uint32_t ___w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint4_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4_DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4_DebuggerProxy, ___w) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint4_DebuggerProxy, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint4
struct CORDL_TYPE uint4 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::uint4_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) uint32_t Item[];

  __declspec(property(get = get_ww)) ::Unity::Mathematics::uint2 ww;

  __declspec(property(get = get_www)) ::Unity::Mathematics::uint3 www;

  __declspec(property(get = get_wwww)) ::Unity::Mathematics::uint4 wwww;

  __declspec(property(get = get_wwwx)) ::Unity::Mathematics::uint4 wwwx;

  __declspec(property(get = get_wwwy)) ::Unity::Mathematics::uint4 wwwy;

  __declspec(property(get = get_wwwz)) ::Unity::Mathematics::uint4 wwwz;

  __declspec(property(get = get_wwx)) ::Unity::Mathematics::uint3 wwx;

  __declspec(property(get = get_wwxw)) ::Unity::Mathematics::uint4 wwxw;

  __declspec(property(get = get_wwxx)) ::Unity::Mathematics::uint4 wwxx;

  __declspec(property(get = get_wwxy)) ::Unity::Mathematics::uint4 wwxy;

  __declspec(property(get = get_wwxz)) ::Unity::Mathematics::uint4 wwxz;

  __declspec(property(get = get_wwy)) ::Unity::Mathematics::uint3 wwy;

  __declspec(property(get = get_wwyw)) ::Unity::Mathematics::uint4 wwyw;

  __declspec(property(get = get_wwyx)) ::Unity::Mathematics::uint4 wwyx;

  __declspec(property(get = get_wwyy)) ::Unity::Mathematics::uint4 wwyy;

  __declspec(property(get = get_wwyz)) ::Unity::Mathematics::uint4 wwyz;

  __declspec(property(get = get_wwz)) ::Unity::Mathematics::uint3 wwz;

  __declspec(property(get = get_wwzw)) ::Unity::Mathematics::uint4 wwzw;

  __declspec(property(get = get_wwzx)) ::Unity::Mathematics::uint4 wwzx;

  __declspec(property(get = get_wwzy)) ::Unity::Mathematics::uint4 wwzy;

  __declspec(property(get = get_wwzz)) ::Unity::Mathematics::uint4 wwzz;

  __declspec(property(get = get_wx, put = set_wx)) ::Unity::Mathematics::uint2 wx;

  __declspec(property(get = get_wxw)) ::Unity::Mathematics::uint3 wxw;

  __declspec(property(get = get_wxww)) ::Unity::Mathematics::uint4 wxww;

  __declspec(property(get = get_wxwx)) ::Unity::Mathematics::uint4 wxwx;

  __declspec(property(get = get_wxwy)) ::Unity::Mathematics::uint4 wxwy;

  __declspec(property(get = get_wxwz)) ::Unity::Mathematics::uint4 wxwz;

  __declspec(property(get = get_wxx)) ::Unity::Mathematics::uint3 wxx;

  __declspec(property(get = get_wxxw)) ::Unity::Mathematics::uint4 wxxw;

  __declspec(property(get = get_wxxx)) ::Unity::Mathematics::uint4 wxxx;

  __declspec(property(get = get_wxxy)) ::Unity::Mathematics::uint4 wxxy;

  __declspec(property(get = get_wxxz)) ::Unity::Mathematics::uint4 wxxz;

  __declspec(property(get = get_wxy, put = set_wxy)) ::Unity::Mathematics::uint3 wxy;

  __declspec(property(get = get_wxyw)) ::Unity::Mathematics::uint4 wxyw;

  __declspec(property(get = get_wxyx)) ::Unity::Mathematics::uint4 wxyx;

  __declspec(property(get = get_wxyy)) ::Unity::Mathematics::uint4 wxyy;

  __declspec(property(get = get_wxyz, put = set_wxyz)) ::Unity::Mathematics::uint4 wxyz;

  __declspec(property(get = get_wxz, put = set_wxz)) ::Unity::Mathematics::uint3 wxz;

  __declspec(property(get = get_wxzw)) ::Unity::Mathematics::uint4 wxzw;

  __declspec(property(get = get_wxzx)) ::Unity::Mathematics::uint4 wxzx;

  __declspec(property(get = get_wxzy, put = set_wxzy)) ::Unity::Mathematics::uint4 wxzy;

  __declspec(property(get = get_wxzz)) ::Unity::Mathematics::uint4 wxzz;

  __declspec(property(get = get_wy, put = set_wy)) ::Unity::Mathematics::uint2 wy;

  __declspec(property(get = get_wyw)) ::Unity::Mathematics::uint3 wyw;

  __declspec(property(get = get_wyww)) ::Unity::Mathematics::uint4 wyww;

  __declspec(property(get = get_wywx)) ::Unity::Mathematics::uint4 wywx;

  __declspec(property(get = get_wywy)) ::Unity::Mathematics::uint4 wywy;

  __declspec(property(get = get_wywz)) ::Unity::Mathematics::uint4 wywz;

  __declspec(property(get = get_wyx, put = set_wyx)) ::Unity::Mathematics::uint3 wyx;

  __declspec(property(get = get_wyxw)) ::Unity::Mathematics::uint4 wyxw;

  __declspec(property(get = get_wyxx)) ::Unity::Mathematics::uint4 wyxx;

  __declspec(property(get = get_wyxy)) ::Unity::Mathematics::uint4 wyxy;

  __declspec(property(get = get_wyxz, put = set_wyxz)) ::Unity::Mathematics::uint4 wyxz;

  __declspec(property(get = get_wyy)) ::Unity::Mathematics::uint3 wyy;

  __declspec(property(get = get_wyyw)) ::Unity::Mathematics::uint4 wyyw;

  __declspec(property(get = get_wyyx)) ::Unity::Mathematics::uint4 wyyx;

  __declspec(property(get = get_wyyy)) ::Unity::Mathematics::uint4 wyyy;

  __declspec(property(get = get_wyyz)) ::Unity::Mathematics::uint4 wyyz;

  __declspec(property(get = get_wyz, put = set_wyz)) ::Unity::Mathematics::uint3 wyz;

  __declspec(property(get = get_wyzw)) ::Unity::Mathematics::uint4 wyzw;

  __declspec(property(get = get_wyzx, put = set_wyzx)) ::Unity::Mathematics::uint4 wyzx;

  __declspec(property(get = get_wyzy)) ::Unity::Mathematics::uint4 wyzy;

  __declspec(property(get = get_wyzz)) ::Unity::Mathematics::uint4 wyzz;

  __declspec(property(get = get_wz, put = set_wz)) ::Unity::Mathematics::uint2 wz;

  __declspec(property(get = get_wzw)) ::Unity::Mathematics::uint3 wzw;

  __declspec(property(get = get_wzww)) ::Unity::Mathematics::uint4 wzww;

  __declspec(property(get = get_wzwx)) ::Unity::Mathematics::uint4 wzwx;

  __declspec(property(get = get_wzwy)) ::Unity::Mathematics::uint4 wzwy;

  __declspec(property(get = get_wzwz)) ::Unity::Mathematics::uint4 wzwz;

  __declspec(property(get = get_wzx, put = set_wzx)) ::Unity::Mathematics::uint3 wzx;

  __declspec(property(get = get_wzxw)) ::Unity::Mathematics::uint4 wzxw;

  __declspec(property(get = get_wzxx)) ::Unity::Mathematics::uint4 wzxx;

  __declspec(property(get = get_wzxy, put = set_wzxy)) ::Unity::Mathematics::uint4 wzxy;

  __declspec(property(get = get_wzxz)) ::Unity::Mathematics::uint4 wzxz;

  __declspec(property(get = get_wzy, put = set_wzy)) ::Unity::Mathematics::uint3 wzy;

  __declspec(property(get = get_wzyw)) ::Unity::Mathematics::uint4 wzyw;

  __declspec(property(get = get_wzyx, put = set_wzyx)) ::Unity::Mathematics::uint4 wzyx;

  __declspec(property(get = get_wzyy)) ::Unity::Mathematics::uint4 wzyy;

  __declspec(property(get = get_wzyz)) ::Unity::Mathematics::uint4 wzyz;

  __declspec(property(get = get_wzz)) ::Unity::Mathematics::uint3 wzz;

  __declspec(property(get = get_wzzw)) ::Unity::Mathematics::uint4 wzzw;

  __declspec(property(get = get_wzzx)) ::Unity::Mathematics::uint4 wzzx;

  __declspec(property(get = get_wzzy)) ::Unity::Mathematics::uint4 wzzy;

  __declspec(property(get = get_wzzz)) ::Unity::Mathematics::uint4 wzzz;

  __declspec(property(get = get_xw, put = set_xw)) ::Unity::Mathematics::uint2 xw;

  __declspec(property(get = get_xww)) ::Unity::Mathematics::uint3 xww;

  __declspec(property(get = get_xwww)) ::Unity::Mathematics::uint4 xwww;

  __declspec(property(get = get_xwwx)) ::Unity::Mathematics::uint4 xwwx;

  __declspec(property(get = get_xwwy)) ::Unity::Mathematics::uint4 xwwy;

  __declspec(property(get = get_xwwz)) ::Unity::Mathematics::uint4 xwwz;

  __declspec(property(get = get_xwx)) ::Unity::Mathematics::uint3 xwx;

  __declspec(property(get = get_xwxw)) ::Unity::Mathematics::uint4 xwxw;

  __declspec(property(get = get_xwxx)) ::Unity::Mathematics::uint4 xwxx;

  __declspec(property(get = get_xwxy)) ::Unity::Mathematics::uint4 xwxy;

  __declspec(property(get = get_xwxz)) ::Unity::Mathematics::uint4 xwxz;

  __declspec(property(get = get_xwy, put = set_xwy)) ::Unity::Mathematics::uint3 xwy;

  __declspec(property(get = get_xwyw)) ::Unity::Mathematics::uint4 xwyw;

  __declspec(property(get = get_xwyx)) ::Unity::Mathematics::uint4 xwyx;

  __declspec(property(get = get_xwyy)) ::Unity::Mathematics::uint4 xwyy;

  __declspec(property(get = get_xwyz, put = set_xwyz)) ::Unity::Mathematics::uint4 xwyz;

  __declspec(property(get = get_xwz, put = set_xwz)) ::Unity::Mathematics::uint3 xwz;

  __declspec(property(get = get_xwzw)) ::Unity::Mathematics::uint4 xwzw;

  __declspec(property(get = get_xwzx)) ::Unity::Mathematics::uint4 xwzx;

  __declspec(property(get = get_xwzy, put = set_xwzy)) ::Unity::Mathematics::uint4 xwzy;

  __declspec(property(get = get_xwzz)) ::Unity::Mathematics::uint4 xwzz;

  __declspec(property(get = get_xx)) ::Unity::Mathematics::uint2 xx;

  __declspec(property(get = get_xxw)) ::Unity::Mathematics::uint3 xxw;

  __declspec(property(get = get_xxww)) ::Unity::Mathematics::uint4 xxww;

  __declspec(property(get = get_xxwx)) ::Unity::Mathematics::uint4 xxwx;

  __declspec(property(get = get_xxwy)) ::Unity::Mathematics::uint4 xxwy;

  __declspec(property(get = get_xxwz)) ::Unity::Mathematics::uint4 xxwz;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::uint3 xxx;

  __declspec(property(get = get_xxxw)) ::Unity::Mathematics::uint4 xxxw;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::uint4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::uint4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::uint4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::uint3 xxy;

  __declspec(property(get = get_xxyw)) ::Unity::Mathematics::uint4 xxyw;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::uint4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::uint4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::uint4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::uint3 xxz;

  __declspec(property(get = get_xxzw)) ::Unity::Mathematics::uint4 xxzw;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::uint4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::uint4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::uint4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::uint2 xy;

  __declspec(property(get = get_xyw, put = set_xyw)) ::Unity::Mathematics::uint3 xyw;

  __declspec(property(get = get_xyww)) ::Unity::Mathematics::uint4 xyww;

  __declspec(property(get = get_xywx)) ::Unity::Mathematics::uint4 xywx;

  __declspec(property(get = get_xywy)) ::Unity::Mathematics::uint4 xywy;

  __declspec(property(get = get_xywz, put = set_xywz)) ::Unity::Mathematics::uint4 xywz;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::uint3 xyx;

  __declspec(property(get = get_xyxw)) ::Unity::Mathematics::uint4 xyxw;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::uint4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::uint4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::uint4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::uint3 xyy;

  __declspec(property(get = get_xyyw)) ::Unity::Mathematics::uint4 xyyw;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::uint4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::uint4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::uint4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::uint3 xyz;

  __declspec(property(get = get_xyzw, put = set_xyzw)) ::Unity::Mathematics::uint4 xyzw;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::uint4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::uint4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::uint4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::uint2 xz;

  __declspec(property(get = get_xzw, put = set_xzw)) ::Unity::Mathematics::uint3 xzw;

  __declspec(property(get = get_xzww)) ::Unity::Mathematics::uint4 xzww;

  __declspec(property(get = get_xzwx)) ::Unity::Mathematics::uint4 xzwx;

  __declspec(property(get = get_xzwy, put = set_xzwy)) ::Unity::Mathematics::uint4 xzwy;

  __declspec(property(get = get_xzwz)) ::Unity::Mathematics::uint4 xzwz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::uint3 xzx;

  __declspec(property(get = get_xzxw)) ::Unity::Mathematics::uint4 xzxw;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::uint4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::uint4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::uint4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::uint3 xzy;

  __declspec(property(get = get_xzyw, put = set_xzyw)) ::Unity::Mathematics::uint4 xzyw;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::uint4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::uint4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::uint4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::uint3 xzz;

  __declspec(property(get = get_xzzw)) ::Unity::Mathematics::uint4 xzzw;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::uint4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::uint4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::uint4 xzzz;

  __declspec(property(get = get_yw, put = set_yw)) ::Unity::Mathematics::uint2 yw;

  __declspec(property(get = get_yww)) ::Unity::Mathematics::uint3 yww;

  __declspec(property(get = get_ywww)) ::Unity::Mathematics::uint4 ywww;

  __declspec(property(get = get_ywwx)) ::Unity::Mathematics::uint4 ywwx;

  __declspec(property(get = get_ywwy)) ::Unity::Mathematics::uint4 ywwy;

  __declspec(property(get = get_ywwz)) ::Unity::Mathematics::uint4 ywwz;

  __declspec(property(get = get_ywx, put = set_ywx)) ::Unity::Mathematics::uint3 ywx;

  __declspec(property(get = get_ywxw)) ::Unity::Mathematics::uint4 ywxw;

  __declspec(property(get = get_ywxx)) ::Unity::Mathematics::uint4 ywxx;

  __declspec(property(get = get_ywxy)) ::Unity::Mathematics::uint4 ywxy;

  __declspec(property(get = get_ywxz, put = set_ywxz)) ::Unity::Mathematics::uint4 ywxz;

  __declspec(property(get = get_ywy)) ::Unity::Mathematics::uint3 ywy;

  __declspec(property(get = get_ywyw)) ::Unity::Mathematics::uint4 ywyw;

  __declspec(property(get = get_ywyx)) ::Unity::Mathematics::uint4 ywyx;

  __declspec(property(get = get_ywyy)) ::Unity::Mathematics::uint4 ywyy;

  __declspec(property(get = get_ywyz)) ::Unity::Mathematics::uint4 ywyz;

  __declspec(property(get = get_ywz, put = set_ywz)) ::Unity::Mathematics::uint3 ywz;

  __declspec(property(get = get_ywzw)) ::Unity::Mathematics::uint4 ywzw;

  __declspec(property(get = get_ywzx, put = set_ywzx)) ::Unity::Mathematics::uint4 ywzx;

  __declspec(property(get = get_ywzy)) ::Unity::Mathematics::uint4 ywzy;

  __declspec(property(get = get_ywzz)) ::Unity::Mathematics::uint4 ywzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::uint2 yx;

  __declspec(property(get = get_yxw, put = set_yxw)) ::Unity::Mathematics::uint3 yxw;

  __declspec(property(get = get_yxww)) ::Unity::Mathematics::uint4 yxww;

  __declspec(property(get = get_yxwx)) ::Unity::Mathematics::uint4 yxwx;

  __declspec(property(get = get_yxwy)) ::Unity::Mathematics::uint4 yxwy;

  __declspec(property(get = get_yxwz, put = set_yxwz)) ::Unity::Mathematics::uint4 yxwz;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::uint3 yxx;

  __declspec(property(get = get_yxxw)) ::Unity::Mathematics::uint4 yxxw;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::uint4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::uint4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::uint4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::uint3 yxy;

  __declspec(property(get = get_yxyw)) ::Unity::Mathematics::uint4 yxyw;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::uint4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::uint4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::uint4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::uint3 yxz;

  __declspec(property(get = get_yxzw, put = set_yxzw)) ::Unity::Mathematics::uint4 yxzw;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::uint4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::uint4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::uint4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::uint2 yy;

  __declspec(property(get = get_yyw)) ::Unity::Mathematics::uint3 yyw;

  __declspec(property(get = get_yyww)) ::Unity::Mathematics::uint4 yyww;

  __declspec(property(get = get_yywx)) ::Unity::Mathematics::uint4 yywx;

  __declspec(property(get = get_yywy)) ::Unity::Mathematics::uint4 yywy;

  __declspec(property(get = get_yywz)) ::Unity::Mathematics::uint4 yywz;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::uint3 yyx;

  __declspec(property(get = get_yyxw)) ::Unity::Mathematics::uint4 yyxw;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::uint4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::uint4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::uint4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::uint3 yyy;

  __declspec(property(get = get_yyyw)) ::Unity::Mathematics::uint4 yyyw;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::uint4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::uint4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::uint4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::uint3 yyz;

  __declspec(property(get = get_yyzw)) ::Unity::Mathematics::uint4 yyzw;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::uint4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::uint4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::uint4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::uint2 yz;

  __declspec(property(get = get_yzw, put = set_yzw)) ::Unity::Mathematics::uint3 yzw;

  __declspec(property(get = get_yzww)) ::Unity::Mathematics::uint4 yzww;

  __declspec(property(get = get_yzwx, put = set_yzwx)) ::Unity::Mathematics::uint4 yzwx;

  __declspec(property(get = get_yzwy)) ::Unity::Mathematics::uint4 yzwy;

  __declspec(property(get = get_yzwz)) ::Unity::Mathematics::uint4 yzwz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::uint3 yzx;

  __declspec(property(get = get_yzxw, put = set_yzxw)) ::Unity::Mathematics::uint4 yzxw;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::uint4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::uint4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::uint4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::uint3 yzy;

  __declspec(property(get = get_yzyw)) ::Unity::Mathematics::uint4 yzyw;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::uint4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::uint4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::uint4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::uint3 yzz;

  __declspec(property(get = get_yzzw)) ::Unity::Mathematics::uint4 yzzw;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::uint4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::uint4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::uint4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint4 zero;

  __declspec(property(get = get_zw, put = set_zw)) ::Unity::Mathematics::uint2 zw;

  __declspec(property(get = get_zww)) ::Unity::Mathematics::uint3 zww;

  __declspec(property(get = get_zwww)) ::Unity::Mathematics::uint4 zwww;

  __declspec(property(get = get_zwwx)) ::Unity::Mathematics::uint4 zwwx;

  __declspec(property(get = get_zwwy)) ::Unity::Mathematics::uint4 zwwy;

  __declspec(property(get = get_zwwz)) ::Unity::Mathematics::uint4 zwwz;

  __declspec(property(get = get_zwx, put = set_zwx)) ::Unity::Mathematics::uint3 zwx;

  __declspec(property(get = get_zwxw)) ::Unity::Mathematics::uint4 zwxw;

  __declspec(property(get = get_zwxx)) ::Unity::Mathematics::uint4 zwxx;

  __declspec(property(get = get_zwxy, put = set_zwxy)) ::Unity::Mathematics::uint4 zwxy;

  __declspec(property(get = get_zwxz)) ::Unity::Mathematics::uint4 zwxz;

  __declspec(property(get = get_zwy, put = set_zwy)) ::Unity::Mathematics::uint3 zwy;

  __declspec(property(get = get_zwyw)) ::Unity::Mathematics::uint4 zwyw;

  __declspec(property(get = get_zwyx, put = set_zwyx)) ::Unity::Mathematics::uint4 zwyx;

  __declspec(property(get = get_zwyy)) ::Unity::Mathematics::uint4 zwyy;

  __declspec(property(get = get_zwyz)) ::Unity::Mathematics::uint4 zwyz;

  __declspec(property(get = get_zwz)) ::Unity::Mathematics::uint3 zwz;

  __declspec(property(get = get_zwzw)) ::Unity::Mathematics::uint4 zwzw;

  __declspec(property(get = get_zwzx)) ::Unity::Mathematics::uint4 zwzx;

  __declspec(property(get = get_zwzy)) ::Unity::Mathematics::uint4 zwzy;

  __declspec(property(get = get_zwzz)) ::Unity::Mathematics::uint4 zwzz;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::uint2 zx;

  __declspec(property(get = get_zxw, put = set_zxw)) ::Unity::Mathematics::uint3 zxw;

  __declspec(property(get = get_zxww)) ::Unity::Mathematics::uint4 zxww;

  __declspec(property(get = get_zxwx)) ::Unity::Mathematics::uint4 zxwx;

  __declspec(property(get = get_zxwy, put = set_zxwy)) ::Unity::Mathematics::uint4 zxwy;

  __declspec(property(get = get_zxwz)) ::Unity::Mathematics::uint4 zxwz;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::uint3 zxx;

  __declspec(property(get = get_zxxw)) ::Unity::Mathematics::uint4 zxxw;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::uint4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::uint4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::uint4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::uint3 zxy;

  __declspec(property(get = get_zxyw, put = set_zxyw)) ::Unity::Mathematics::uint4 zxyw;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::uint4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::uint4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::uint4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::uint3 zxz;

  __declspec(property(get = get_zxzw)) ::Unity::Mathematics::uint4 zxzw;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::uint4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::uint4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::uint4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::uint2 zy;

  __declspec(property(get = get_zyw, put = set_zyw)) ::Unity::Mathematics::uint3 zyw;

  __declspec(property(get = get_zyww)) ::Unity::Mathematics::uint4 zyww;

  __declspec(property(get = get_zywx, put = set_zywx)) ::Unity::Mathematics::uint4 zywx;

  __declspec(property(get = get_zywy)) ::Unity::Mathematics::uint4 zywy;

  __declspec(property(get = get_zywz)) ::Unity::Mathematics::uint4 zywz;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::uint3 zyx;

  __declspec(property(get = get_zyxw, put = set_zyxw)) ::Unity::Mathematics::uint4 zyxw;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::uint4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::uint4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::uint4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::uint3 zyy;

  __declspec(property(get = get_zyyw)) ::Unity::Mathematics::uint4 zyyw;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::uint4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::uint4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::uint4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::uint3 zyz;

  __declspec(property(get = get_zyzw)) ::Unity::Mathematics::uint4 zyzw;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::uint4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::uint4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::uint4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::uint2 zz;

  __declspec(property(get = get_zzw)) ::Unity::Mathematics::uint3 zzw;

  __declspec(property(get = get_zzww)) ::Unity::Mathematics::uint4 zzww;

  __declspec(property(get = get_zzwx)) ::Unity::Mathematics::uint4 zzwx;

  __declspec(property(get = get_zzwy)) ::Unity::Mathematics::uint4 zzwy;

  __declspec(property(get = get_zzwz)) ::Unity::Mathematics::uint4 zzwz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::uint3 zzx;

  __declspec(property(get = get_zzxw)) ::Unity::Mathematics::uint4 zzxw;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::uint4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::uint4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::uint4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::uint3 zzy;

  __declspec(property(get = get_zzyw)) ::Unity::Mathematics::uint4 zzyw;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::uint4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::uint4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::uint4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::uint3 zzz;

  __declspec(property(get = get_zzzw)) ::Unity::Mathematics::uint4 zzzw;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::uint4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::uint4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::uint4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4673130, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46730ec, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint4 rhs);

  /// @brief Method GetHashCode, addr 0x46731d8, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4673234, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46733e0, size 0x194, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4670664, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 v);

  /// @brief Method .ctor, addr 0x4670740, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 v);

  /// @brief Method .ctor, addr 0x46706d8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 v);

  /// @brief Method .ctor, addr 0x46706a8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 v);

  /// @brief Method .ctor, addr 0x4670654, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4670724, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46706bc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x467069c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4670648, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x46705c4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, uint32_t y, uint32_t z, uint32_t w);

  /// @brief Method .ctor, addr 0x46705d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, uint32_t y, ::Unity::Mathematics::uint2 zw);

  /// @brief Method .ctor, addr 0x46705e0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, ::Unity::Mathematics::uint2 yz, uint32_t w);

  /// @brief Method .ctor, addr 0x46705f0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, ::Unity::Mathematics::uint3 yzw);

  /// @brief Method .ctor, addr 0x4670600, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 xy, uint32_t z, uint32_t w);

  /// @brief Method .ctor, addr 0x4670610, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 xy, ::Unity::Mathematics::uint2 zw);

  /// @brief Method .ctor, addr 0x4670624, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 xyz, uint32_t w);

  /// @brief Method .ctor, addr 0x4670634, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 xyzw);

  static inline ::Unity::Mathematics::uint4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46730dc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Item(int32_t index);

  /// @brief Method get_ww, addr 0x46730d0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_ww();

  /// @brief Method get_www, addr 0x4672f40, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_www();

  /// @brief Method get_wwww, addr 0x4672954, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwww();

  /// @brief Method get_wwwx, addr 0x4672904, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwwx();

  /// @brief Method get_wwwy, addr 0x4672920, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwwy();

  /// @brief Method get_wwwz, addr 0x467293c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwwz();

  /// @brief Method get_wwx, addr 0x4672f08, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wwx();

  /// @brief Method get_wwxw, addr 0x467284c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwxw();

  /// @brief Method get_wwxx, addr 0x4672810, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwxx();

  /// @brief Method get_wwxy, addr 0x4672824, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwxy();

  /// @brief Method get_wwxz, addr 0x4672838, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwxz();

  /// @brief Method get_wwy, addr 0x4672f1c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wwy();

  /// @brief Method get_wwyw, addr 0x46728a0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwyw();

  /// @brief Method get_wwyx, addr 0x4672864, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwyx();

  /// @brief Method get_wwyy, addr 0x4672878, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwyy();

  /// @brief Method get_wwyz, addr 0x467288c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwyz();

  /// @brief Method get_wwz, addr 0x4672f30, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wwz();

  /// @brief Method get_wwzw, addr 0x46728f0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwzw();

  /// @brief Method get_wwzx, addr 0x46728b8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwzx();

  /// @brief Method get_wwzy, addr 0x46728cc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwzy();

  /// @brief Method get_wwzz, addr 0x46728e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wwzz();

  /// @brief Method get_wx, addr 0x467306c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_wx();

  /// @brief Method get_wxw, addr 0x4672e1c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wxw();

  /// @brief Method get_wxww, addr 0x46724b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxww();

  /// @brief Method get_wxwx, addr 0x467246c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxwx();

  /// @brief Method get_wxwy, addr 0x4672480, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxwy();

  /// @brief Method get_wxwz, addr 0x467249c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxwz();

  /// @brief Method get_wxx, addr 0x4672dc0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wxx();

  /// @brief Method get_wxxw, addr 0x4672374, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxxw();

  /// @brief Method get_wxxx, addr 0x467232c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxxx();

  /// @brief Method get_wxxy, addr 0x4672344, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxxy();

  /// @brief Method get_wxxz, addr 0x467235c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxxz();

  /// @brief Method get_wxy, addr 0x4672dd4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wxy();

  /// @brief Method get_wxyw, addr 0x46723e4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxyw();

  /// @brief Method get_wxyx, addr 0x467238c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxyx();

  /// @brief Method get_wxyy, addr 0x46723a0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxyy();

  /// @brief Method get_wxyz, addr 0x46723b8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxyz();

  /// @brief Method get_wxz, addr 0x4672df8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wxz();

  /// @brief Method get_wxzw, addr 0x4672454, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxzw();

  /// @brief Method get_wxzx, addr 0x46723fc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxzx();

  /// @brief Method get_wxzy, addr 0x4672410, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxzy();

  /// @brief Method get_wxzz, addr 0x467243c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wxzz();

  /// @brief Method get_wy, addr 0x4673090, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_wy();

  /// @brief Method get_wyw, addr 0x4672e8c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wyw();

  /// @brief Method get_wyww, addr 0x4672660, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyww();

  /// @brief Method get_wywx, addr 0x4672614, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wywx();

  /// @brief Method get_wywy, addr 0x4672630, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wywy();

  /// @brief Method get_wywz, addr 0x4672644, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wywz();

  /// @brief Method get_wyx, addr 0x4672e30, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wyx();

  /// @brief Method get_wyxw, addr 0x467252c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyxw();

  /// @brief Method get_wyxx, addr 0x46724d4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyxx();

  /// @brief Method get_wyxy, addr 0x46724ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyxy();

  /// @brief Method get_wyxz, addr 0x4672500, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyxz();

  /// @brief Method get_wyy, addr 0x4672e54, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wyy();

  /// @brief Method get_wyyw, addr 0x467258c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyyw();

  /// @brief Method get_wyyx, addr 0x4672544, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyyx();

  /// @brief Method get_wyyy, addr 0x467255c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyyy();

  /// @brief Method get_wyyz, addr 0x4672574, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyyz();

  /// @brief Method get_wyz, addr 0x4672e68, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wyz();

  /// @brief Method get_wyzw, addr 0x46725fc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyzw();

  /// @brief Method get_wyzx, addr 0x46725a4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyzx();

  /// @brief Method get_wyzy, addr 0x46725d0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyzy();

  /// @brief Method get_wyzz, addr 0x46725e4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wyzz();

  /// @brief Method get_wz, addr 0x46730b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_wz();

  /// @brief Method get_wzw, addr 0x4672ef8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wzw();

  /// @brief Method get_wzww, addr 0x46727f8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzww();

  /// @brief Method get_wzwx, addr 0x46727b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzwx();

  /// @brief Method get_wzwy, addr 0x46727cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzwy();

  /// @brief Method get_wzwz, addr 0x46727e8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzwz();

  /// @brief Method get_wzx, addr 0x4672ea0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wzx();

  /// @brief Method get_wzxw, addr 0x46726d0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzxw();

  /// @brief Method get_wzxx, addr 0x467267c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzxx();

  /// @brief Method get_wzxy, addr 0x4672694, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzxy();

  /// @brief Method get_wzxz, addr 0x46726bc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzxz();

  /// @brief Method get_wzy, addr 0x4672ec4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wzy();

  /// @brief Method get_wzyw, addr 0x4672740, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzyw();

  /// @brief Method get_wzyx, addr 0x46726e8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzyx();

  /// @brief Method get_wzyy, addr 0x4672714, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzyy();

  /// @brief Method get_wzyz, addr 0x467272c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzyz();

  /// @brief Method get_wzz, addr 0x4672ee8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_wzz();

  /// @brief Method get_wzzw, addr 0x467279c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzzw();

  /// @brief Method get_wzzx, addr 0x4672758, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzzx();

  /// @brief Method get_wzzy, addr 0x4672770, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzzy();

  /// @brief Method get_wzzz, addr 0x4672788, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_wzzz();

  /// @brief Method get_xw, addr 0x4672f90, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xw();

  /// @brief Method get_xww, addr 0x4672ad0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xww();

  /// @brief Method get_xwww, addr 0x4671724, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwww();

  /// @brief Method get_xwwx, addr 0x46716dc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwwx();

  /// @brief Method get_xwwy, addr 0x46716f4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwwy();

  /// @brief Method get_xwwz, addr 0x467170c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwwz();

  /// @brief Method get_xwx, addr 0x4672a74, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xwx();

  /// @brief Method get_xwxw, addr 0x46715e8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwxw();

  /// @brief Method get_xwxx, addr 0x4671594, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwxx();

  /// @brief Method get_xwxy, addr 0x46715b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwxy();

  /// @brief Method get_xwxz, addr 0x46715cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwxz();

  /// @brief Method get_xwy, addr 0x4672a88, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xwy();

  /// @brief Method get_xwyw, addr 0x4671658, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwyw();

  /// @brief Method get_xwyx, addr 0x46715fc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwyx();

  /// @brief Method get_xwyy, addr 0x4671614, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwyy();

  /// @brief Method get_xwyz, addr 0x467162c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwyz();

  /// @brief Method get_xwz, addr 0x4672aac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xwz();

  /// @brief Method get_xwzw, addr 0x46716c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwzw();

  /// @brief Method get_xwzx, addr 0x467166c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwzx();

  /// @brief Method get_xwzy, addr 0x4671684, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwzy();

  /// @brief Method get_xwzz, addr 0x46716b0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xwzz();

  /// @brief Method get_xx, addr 0x4672f50, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xx();

  /// @brief Method get_xxw, addr 0x4672998, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxw();

  /// @brief Method get_xxww, addr 0x467126c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxww();

  /// @brief Method get_xxwx, addr 0x467122c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxwx();

  /// @brief Method get_xxwy, addr 0x4671244, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxwy();

  /// @brief Method get_xxwz, addr 0x4671258, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxwz();

  /// @brief Method get_xxx, addr 0x4672964, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxx();

  /// @brief Method get_xxxw, addr 0x4671170, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxw();

  /// @brief Method get_xxxx, addr 0x467112c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x467113c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x4671154, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxz();

  /// @brief Method get_xxy, addr 0x4672974, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxy();

  /// @brief Method get_xxyw, addr 0x46711c4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyw();

  /// @brief Method get_xxyx, addr 0x467118c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x46711a0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x46711b0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyz();

  /// @brief Method get_xxz, addr 0x4672984, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxz();

  /// @brief Method get_xxzw, addr 0x4671218, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxzw();

  /// @brief Method get_xxzx, addr 0x46711d8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x46711f0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x4671204, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxzz();

  /// @brief Method get_xy, addr 0x4672f5c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xy();

  /// @brief Method get_xyw, addr 0x46729e8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyw();

  /// @brief Method get_xyww, addr 0x46713dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyww();

  /// @brief Method get_xywx, addr 0x467138c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xywx();

  /// @brief Method get_xywy, addr 0x46713a4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xywy();

  /// @brief Method get_xywz, addr 0x46713b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xywz();

  /// @brief Method get_xyx, addr 0x46729ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyx();

  /// @brief Method get_xyxw, addr 0x46712c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxw();

  /// @brief Method get_xyxx, addr 0x4671280, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x4671298, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x46712a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxz();

  /// @brief Method get_xyy, addr 0x46729bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyy();

  /// @brief Method get_xyyw, addr 0x467131c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyw();

  /// @brief Method get_xyyx, addr 0x46712dc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x46712f0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x4671304, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyz();

  /// @brief Method get_xyz, addr 0x46729cc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyz();

  /// @brief Method get_xyzw, addr 0x4671370, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyzw();

  /// @brief Method get_xyzx, addr 0x4671334, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x467134c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x4671360, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyzz();

  /// @brief Method get_xz, addr 0x4672f6c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xz();

  /// @brief Method get_xzw, addr 0x4672a50, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xzw();

  /// @brief Method get_xzww, addr 0x467157c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzww();

  /// @brief Method get_xzwx, addr 0x4671524, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzwx();

  /// @brief Method get_xzwy, addr 0x467153c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzwy();

  /// @brief Method get_xzwz, addr 0x4671568, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzwz();

  /// @brief Method get_xzx, addr 0x4672a04, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xzx();

  /// @brief Method get_xzxw, addr 0x4671438, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzxw();

  /// @brief Method get_xzxx, addr 0x46713ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x4671408, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x4671424, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzxz();

  /// @brief Method get_xzy, addr 0x4672a18, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xzy();

  /// @brief Method get_xzyw, addr 0x4671498, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzyw();

  /// @brief Method get_xzyx, addr 0x4671454, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x467146c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x4671484, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzyz();

  /// @brief Method get_xzz, addr 0x4672a3c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xzz();

  /// @brief Method get_xzzw, addr 0x467150c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzzw();

  /// @brief Method get_xzzx, addr 0x46714c4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x46714dc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x46714f4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzzz();

  /// @brief Method get_yw, addr 0x4672fec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yw();

  /// @brief Method get_yww, addr 0x4672c40, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yww();

  /// @brief Method get_ywww, addr 0x4671d24, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywww();

  /// @brief Method get_ywwx, addr 0x4671cdc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywwx();

  /// @brief Method get_ywwy, addr 0x4671cf4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywwy();

  /// @brief Method get_ywwz, addr 0x4671d0c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywwz();

  /// @brief Method get_ywx, addr 0x4672be4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_ywx();

  /// @brief Method get_ywxw, addr 0x4671bf0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywxw();

  /// @brief Method get_ywxx, addr 0x4671b94, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywxx();

  /// @brief Method get_ywxy, addr 0x4671bac, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywxy();

  /// @brief Method get_ywxz, addr 0x4671bc4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywxz();

  /// @brief Method get_ywy, addr 0x4672c08, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_ywy();

  /// @brief Method get_ywyw, addr 0x4671c58, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywyw();

  /// @brief Method get_ywyx, addr 0x4671c04, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywyx();

  /// @brief Method get_ywyy, addr 0x4671c20, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywyy();

  /// @brief Method get_ywyz, addr 0x4671c3c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywyz();

  /// @brief Method get_ywz, addr 0x4672c1c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_ywz();

  /// @brief Method get_ywzw, addr 0x4671cc8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywzw();

  /// @brief Method get_ywzx, addr 0x4671c6c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywzx();

  /// @brief Method get_ywzy, addr 0x4671c98, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywzy();

  /// @brief Method get_ywzz, addr 0x4671cb0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_ywzz();

  /// @brief Method get_yx, addr 0x4672fb4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yx();

  /// @brief Method get_yxw, addr 0x4672b28, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxw();

  /// @brief Method get_yxww, addr 0x46718b8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxww();

  /// @brief Method get_yxwx, addr 0x4671860, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxwx();

  /// @brief Method get_yxwy, addr 0x4671874, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxwy();

  /// @brief Method get_yxwz, addr 0x467188c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxwz();

  /// @brief Method get_yxx, addr 0x4672ae4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxx();

  /// @brief Method get_yxxw, addr 0x467177c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxw();

  /// @brief Method get_yxxx, addr 0x467173c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x4671750, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x4671764, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxz();

  /// @brief Method get_yxy, addr 0x4672af4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxy();

  /// @brief Method get_yxyw, addr 0x46717d8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyw();

  /// @brief Method get_yxyx, addr 0x4671794, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x46717a4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x46717bc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyz();

  /// @brief Method get_yxz, addr 0x4672b04, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxz();

  /// @brief Method get_yxzw, addr 0x4671838, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxzw();

  /// @brief Method get_yxzx, addr 0x46717f4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x4671808, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x4671820, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxzz();

  /// @brief Method get_yy, addr 0x4672fd0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yy();

  /// @brief Method get_yyw, addr 0x4672b7c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyw();

  /// @brief Method get_yyww, addr 0x4671a04, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyww();

  /// @brief Method get_yywx, addr 0x46719c4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yywx();

  /// @brief Method get_yywy, addr 0x46719d8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yywy();

  /// @brief Method get_yywz, addr 0x46719f0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yywz();

  /// @brief Method get_yyx, addr 0x4672b4c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyx();

  /// @brief Method get_yyxw, addr 0x4671908, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxw();

  /// @brief Method get_yyxx, addr 0x46718d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x46718e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x46718f4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxz();

  /// @brief Method get_yyy, addr 0x4672b5c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyy();

  /// @brief Method get_yyyw, addr 0x467195c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyw();

  /// @brief Method get_yyyx, addr 0x467191c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x4671934, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x4671944, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyz();

  /// @brief Method get_yyz, addr 0x4672b6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyz();

  /// @brief Method get_yyzw, addr 0x46719b0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyzw();

  /// @brief Method get_yyzx, addr 0x4671978, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x467198c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x46719a0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyzz();

  /// @brief Method get_yz, addr 0x4672fdc, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yz();

  /// @brief Method get_yzw, addr 0x4672bc8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yzw();

  /// @brief Method get_yzww, addr 0x4671b84, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzww();

  /// @brief Method get_yzwx, addr 0x4671b30, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzwx();

  /// @brief Method get_yzwy, addr 0x4671b58, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzwy();

  /// @brief Method get_yzwz, addr 0x4671b70, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzwz();

  /// @brief Method get_yzx, addr 0x4672b90, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yzx();

  /// @brief Method get_yzxw, addr 0x4671a54, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzxw();

  /// @brief Method get_yzxx, addr 0x4671a18, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x4671a28, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x4671a40, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzxz();

  /// @brief Method get_yzy, addr 0x4672ba8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yzy();

  /// @brief Method get_yzyw, addr 0x4671abc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzyw();

  /// @brief Method get_yzyx, addr 0x4671a7c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x4671a98, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x4671ab0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzyz();

  /// @brief Method get_yzz, addr 0x4672bb8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yzz();

  /// @brief Method get_yzzw, addr 0x4671b18, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzzw();

  /// @brief Method get_yzzx, addr 0x4671ad8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x4671af0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x4671b04, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzzz();

  /// @brief Method get_zw, addr 0x467305c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_zw();

  /// @brief Method get_zww, addr 0x4672db0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zww();

  /// @brief Method get_zwww, addr 0x4672318, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwww();

  /// @brief Method get_zwwx, addr 0x46722d4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwwx();

  /// @brief Method get_zwwy, addr 0x46722ec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwwy();

  /// @brief Method get_zwwz, addr 0x4672304, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwwz();

  /// @brief Method get_zwx, addr 0x4672d70, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zwx();

  /// @brief Method get_zwxw, addr 0x4672208, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwxw();

  /// @brief Method get_zwxx, addr 0x46721c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwxx();

  /// @brief Method get_zwxy, addr 0x46721d8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwxy();

  /// @brief Method get_zwxz, addr 0x46721f0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwxz();

  /// @brief Method get_zwy, addr 0x4672d88, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zwy();

  /// @brief Method get_zwyw, addr 0x4672264, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwyw();

  /// @brief Method get_zwyx, addr 0x467221c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwyx();

  /// @brief Method get_zwyy, addr 0x467223c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwyy();

  /// @brief Method get_zwyz, addr 0x467224c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwyz();

  /// @brief Method get_zwz, addr 0x4672da0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zwz();

  /// @brief Method get_zwzw, addr 0x46722c8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwzw();

  /// @brief Method get_zwzx, addr 0x4672278, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwzx();

  /// @brief Method get_zwzy, addr 0x4672294, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwzy();

  /// @brief Method get_zwzz, addr 0x46722b0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zwzz();

  /// @brief Method get_zx, addr 0x4673010, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_zx();

  /// @brief Method get_zxw, addr 0x4672ca0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zxw();

  /// @brief Method get_zxww, addr 0x4671ecc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxww();

  /// @brief Method get_zxwx, addr 0x4671e74, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxwx();

  /// @brief Method get_zxwy, addr 0x4671e88, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxwy();

  /// @brief Method get_zxwz, addr 0x4671eb4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxwz();

  /// @brief Method get_zxx, addr 0x4672c54, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zxx();

  /// @brief Method get_zxxw, addr 0x4671d84, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxxw();

  /// @brief Method get_zxxx, addr 0x4671d3c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x4671d54, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x4671d6c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxxz();

  /// @brief Method get_zxy, addr 0x4672c68, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zxy();

  /// @brief Method get_zxyw, addr 0x4671de0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxyw();

  /// @brief Method get_zxyx, addr 0x4671d9c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x4671db0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x4671dc8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxyz();

  /// @brief Method get_zxz, addr 0x4672c8c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zxz();

  /// @brief Method get_zxzw, addr 0x4671e58, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxzw();

  /// @brief Method get_zxzx, addr 0x4671e0c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x4671e20, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x4671e3c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxzz();

  /// @brief Method get_zy, addr 0x4673034, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_zy();

  /// @brief Method get_zyw, addr 0x4672d08, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zyw();

  /// @brief Method get_zyww, addr 0x4672068, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyww();

  /// @brief Method get_zywx, addr 0x4672010, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zywx();

  /// @brief Method get_zywy, addr 0x467203c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zywy();

  /// @brief Method get_zywz, addr 0x4672050, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zywz();

  /// @brief Method get_zyx, addr 0x4672cc4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zyx();

  /// @brief Method get_zyxw, addr 0x4671f28, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyxw();

  /// @brief Method get_zyxx, addr 0x4671ee4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x4671efc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x4671f10, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyxz();

  /// @brief Method get_zyy, addr 0x4672ce8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zyy();

  /// @brief Method get_zyyw, addr 0x4671f98, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyyw();

  /// @brief Method get_zyyx, addr 0x4671f58, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x4671f70, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x4671f84, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyyz();

  /// @brief Method get_zyz, addr 0x4672cf8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zyz();

  /// @brief Method get_zyzw, addr 0x4671ff4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyzw();

  /// @brief Method get_zyzx, addr 0x4671fb0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x4671fcc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x4671fdc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyzz();

  /// @brief Method get_zz, addr 0x4673050, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_zz();

  /// @brief Method get_zzw, addr 0x4672d60, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zzw();

  /// @brief Method get_zzww, addr 0x46721b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzww();

  /// @brief Method get_zzwx, addr 0x467217c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzwx();

  /// @brief Method get_zzwy, addr 0x4672190, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzwy();

  /// @brief Method get_zzwz, addr 0x46721a4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzwz();

  /// @brief Method get_zzx, addr 0x4672d2c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zzx();

  /// @brief Method get_zzxw, addr 0x46720c0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzxw();

  /// @brief Method get_zzxx, addr 0x4672080, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x4672094, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x46720a8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzxz();

  /// @brief Method get_zzy, addr 0x4672d40, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zzy();

  /// @brief Method get_zzyw, addr 0x467210c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzyw();

  /// @brief Method get_zzyx, addr 0x46720d4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x46720e8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x46720f8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzyz();

  /// @brief Method get_zzz, addr 0x4672d50, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zzz();

  /// @brief Method get_zzzw, addr 0x4672164, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzzw();

  /// @brief Method get_zzzx, addr 0x4672120, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x467213c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x4672154, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint4>* i___System__IEquatable_1___Unity__Mathematics__uint4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4670930, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Addition(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Addition, addr 0x467095c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Addition(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x4670980, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4671024, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_BitwiseAnd(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4671030, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_BitwiseAnd(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4671054, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x467107c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_BitwiseOr(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x4671088, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_BitwiseOr(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46710ac, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Decrement, addr 0x4670b68, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Decrement(::Unity::Mathematics::uint4 val);

  /// @brief Method op_Division, addr 0x4670a20, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Division(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Division, addr 0x4670a4c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Division(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x4670a70, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Division(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Equality, addr 0x4670eb8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Equality, addr 0x4670ef8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x4670f30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46710d4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_ExclusiveOr(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46710e0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_ExclusiveOr(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4671104, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Explicit, addr 0x46707b4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Explicit___Unity__Mathematics__uint4(::Unity::Mathematics::bool4 v);

  /// @brief Method op_Explicit, addr 0x467086c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Explicit___Unity__Mathematics__uint4(::Unity::Mathematics::double4 v);

  /// @brief Method op_Explicit, addr 0x4670804, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Explicit___Unity__Mathematics__uint4(::Unity::Mathematics::float4 v);

  /// @brief Method op_Explicit, addr 0x46707e4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Explicit___Unity__Mathematics__uint4(::Unity::Mathematics::int4 v);

  /// @brief Method op_Explicit, addr 0x467079c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Explicit___Unity__Mathematics__uint4(bool v);

  /// @brief Method op_Explicit, addr 0x4670850, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Explicit___Unity__Mathematics__uint4(double_t v);

  /// @brief Method op_Explicit, addr 0x46707e8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Explicit___Unity__Mathematics__uint4(float_t v);

  /// @brief Method op_Explicit, addr 0x46707d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Explicit___Unity__Mathematics__uint4(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x4670cf0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_GreaterThan, addr 0x4670d30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4670d68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4670da0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4670de0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4670e18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Implicit, addr 0x467078c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Implicit___Unity__Mathematics__uint4(uint32_t v);

  /// @brief Method op_Increment, addr 0x4670b40, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Increment(::Unity::Mathematics::uint4 val);

  /// @brief Method op_Inequality, addr 0x4670f68, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Inequality, addr 0x4670fa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x4670fe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_LeftShift, addr 0x4670e70, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_LeftShift(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x4670b90, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_LessThan, addr 0x4670bd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x4670c08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4670c40, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4670c80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4670cb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Modulus, addr 0x4670a98, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Modulus(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Modulus, addr 0x4670ad4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Modulus(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x4670b08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Multiply, addr 0x46708b8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Multiply(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Multiply, addr 0x46708e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Multiply(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x4670908, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_OnesComplement, addr 0x4671018, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_OnesComplement(::Unity::Mathematics::uint4 val);

  /// @brief Method op_RightShift, addr 0x4670e94, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_RightShift(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46709a8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Subtraction(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_Subtraction, addr 0x46709d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Subtraction(::Unity::Mathematics::uint4 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46709f8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4670e50, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_UnaryNegation(::Unity::Mathematics::uint4 val);

  /// @brief Method op_UnaryPlus, addr 0x4670e6c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 op_UnaryPlus(::Unity::Mathematics::uint4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint4 value);

  /// @brief Method set_Item, addr 0x46730e4, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, uint32_t value);

  /// @brief Method set_wx, addr 0x4673080, size 0x10, virtual false, abstract: false, final false
  inline void set_wx(::Unity::Mathematics::uint2 value);

  /// @brief Method set_wxy, addr 0x4672de8, size 0x10, virtual false, abstract: false, final false
  inline void set_wxy(::Unity::Mathematics::uint3 value);

  /// @brief Method set_wxyz, addr 0x46723d0, size 0x14, virtual false, abstract: false, final false
  inline void set_wxyz(::Unity::Mathematics::uint4 value);

  /// @brief Method set_wxz, addr 0x4672e0c, size 0x10, virtual false, abstract: false, final false
  inline void set_wxz(::Unity::Mathematics::uint3 value);

  /// @brief Method set_wxzy, addr 0x4672428, size 0x14, virtual false, abstract: false, final false
  inline void set_wxzy(::Unity::Mathematics::uint4 value);

  /// @brief Method set_wy, addr 0x46730a4, size 0x10, virtual false, abstract: false, final false
  inline void set_wy(::Unity::Mathematics::uint2 value);

  /// @brief Method set_wyx, addr 0x4672e44, size 0x10, virtual false, abstract: false, final false
  inline void set_wyx(::Unity::Mathematics::uint3 value);

  /// @brief Method set_wyxz, addr 0x4672518, size 0x14, virtual false, abstract: false, final false
  inline void set_wyxz(::Unity::Mathematics::uint4 value);

  /// @brief Method set_wyz, addr 0x4672e7c, size 0x10, virtual false, abstract: false, final false
  inline void set_wyz(::Unity::Mathematics::uint3 value);

  /// @brief Method set_wyzx, addr 0x46725bc, size 0x14, virtual false, abstract: false, final false
  inline void set_wyzx(::Unity::Mathematics::uint4 value);

  /// @brief Method set_wz, addr 0x46730c4, size 0xc, virtual false, abstract: false, final false
  inline void set_wz(::Unity::Mathematics::uint2 value);

  /// @brief Method set_wzx, addr 0x4672eb4, size 0x10, virtual false, abstract: false, final false
  inline void set_wzx(::Unity::Mathematics::uint3 value);

  /// @brief Method set_wzxy, addr 0x46726a8, size 0x14, virtual false, abstract: false, final false
  inline void set_wzxy(::Unity::Mathematics::uint4 value);

  /// @brief Method set_wzy, addr 0x4672ed8, size 0x10, virtual false, abstract: false, final false
  inline void set_wzy(::Unity::Mathematics::uint3 value);

  /// @brief Method set_wzyx, addr 0x4672700, size 0x14, virtual false, abstract: false, final false
  inline void set_wzyx(::Unity::Mathematics::uint4 value);

  /// @brief Method set_xw, addr 0x4672fa4, size 0x10, virtual false, abstract: false, final false
  inline void set_xw(::Unity::Mathematics::uint2 value);

  /// @brief Method set_xwy, addr 0x4672a9c, size 0x10, virtual false, abstract: false, final false
  inline void set_xwy(::Unity::Mathematics::uint3 value);

  /// @brief Method set_xwyz, addr 0x4671644, size 0x14, virtual false, abstract: false, final false
  inline void set_xwyz(::Unity::Mathematics::uint4 value);

  /// @brief Method set_xwz, addr 0x4672ac0, size 0x10, virtual false, abstract: false, final false
  inline void set_xwz(::Unity::Mathematics::uint3 value);

  /// @brief Method set_xwzy, addr 0x467169c, size 0x14, virtual false, abstract: false, final false
  inline void set_xwzy(::Unity::Mathematics::uint4 value);

  /// @brief Method set_xy, addr 0x4672f64, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::uint2 value);

  /// @brief Method set_xyw, addr 0x46729f4, size 0x10, virtual false, abstract: false, final false
  inline void set_xyw(::Unity::Mathematics::uint3 value);

  /// @brief Method set_xywz, addr 0x46713c8, size 0x14, virtual false, abstract: false, final false
  inline void set_xywz(::Unity::Mathematics::uint4 value);

  /// @brief Method set_xyz, addr 0x46729d8, size 0x10, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::uint3 value);

  /// @brief Method set_xyzw, addr 0x4671378, size 0x14, virtual false, abstract: false, final false
  inline void set_xyzw(::Unity::Mathematics::uint4 value);

  /// @brief Method set_xz, addr 0x4672f80, size 0x10, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::uint2 value);

  /// @brief Method set_xzw, addr 0x4672a64, size 0x10, virtual false, abstract: false, final false
  inline void set_xzw(::Unity::Mathematics::uint3 value);

  /// @brief Method set_xzwy, addr 0x4671554, size 0x14, virtual false, abstract: false, final false
  inline void set_xzwy(::Unity::Mathematics::uint4 value);

  /// @brief Method set_xzy, addr 0x4672a2c, size 0x10, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::uint3 value);

  /// @brief Method set_xzyw, addr 0x46714b0, size 0x14, virtual false, abstract: false, final false
  inline void set_xzyw(::Unity::Mathematics::uint4 value);

  /// @brief Method set_yw, addr 0x4673000, size 0x10, virtual false, abstract: false, final false
  inline void set_yw(::Unity::Mathematics::uint2 value);

  /// @brief Method set_ywx, addr 0x4672bf8, size 0x10, virtual false, abstract: false, final false
  inline void set_ywx(::Unity::Mathematics::uint3 value);

  /// @brief Method set_ywxz, addr 0x4671bdc, size 0x14, virtual false, abstract: false, final false
  inline void set_ywxz(::Unity::Mathematics::uint4 value);

  /// @brief Method set_ywz, addr 0x4672c30, size 0x10, virtual false, abstract: false, final false
  inline void set_ywz(::Unity::Mathematics::uint3 value);

  /// @brief Method set_ywzx, addr 0x4671c84, size 0x14, virtual false, abstract: false, final false
  inline void set_ywzx(::Unity::Mathematics::uint4 value);

  /// @brief Method set_yx, addr 0x4672fc4, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::uint2 value);

  /// @brief Method set_yxw, addr 0x4672b3c, size 0x10, virtual false, abstract: false, final false
  inline void set_yxw(::Unity::Mathematics::uint3 value);

  /// @brief Method set_yxwz, addr 0x46718a4, size 0x14, virtual false, abstract: false, final false
  inline void set_yxwz(::Unity::Mathematics::uint4 value);

  /// @brief Method set_yxz, addr 0x4672b18, size 0x10, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::uint3 value);

  /// @brief Method set_yxzw, addr 0x467184c, size 0x14, virtual false, abstract: false, final false
  inline void set_yxzw(::Unity::Mathematics::uint4 value);

  /// @brief Method set_yz, addr 0x4672fe4, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::uint2 value);

  /// @brief Method set_yzw, addr 0x4672bd4, size 0x10, virtual false, abstract: false, final false
  inline void set_yzw(::Unity::Mathematics::uint3 value);

  /// @brief Method set_yzwx, addr 0x4671b44, size 0x14, virtual false, abstract: false, final false
  inline void set_yzwx(::Unity::Mathematics::uint4 value);

  /// @brief Method set_yzx, addr 0x4672b9c, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::uint3 value);

  /// @brief Method set_yzxw, addr 0x4671a68, size 0x14, virtual false, abstract: false, final false
  inline void set_yzxw(::Unity::Mathematics::uint4 value);

  /// @brief Method set_zw, addr 0x4673064, size 0x8, virtual false, abstract: false, final false
  inline void set_zw(::Unity::Mathematics::uint2 value);

  /// @brief Method set_zwx, addr 0x4672d7c, size 0xc, virtual false, abstract: false, final false
  inline void set_zwx(::Unity::Mathematics::uint3 value);

  /// @brief Method set_zwxy, addr 0x46721e0, size 0x10, virtual false, abstract: false, final false
  inline void set_zwxy(::Unity::Mathematics::uint4 value);

  /// @brief Method set_zwy, addr 0x4672d94, size 0xc, virtual false, abstract: false, final false
  inline void set_zwy(::Unity::Mathematics::uint3 value);

  /// @brief Method set_zwyx, addr 0x467222c, size 0x10, virtual false, abstract: false, final false
  inline void set_zwyx(::Unity::Mathematics::uint4 value);

  /// @brief Method set_zx, addr 0x4673024, size 0x10, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::uint2 value);

  /// @brief Method set_zxw, addr 0x4672cb4, size 0x10, virtual false, abstract: false, final false
  inline void set_zxw(::Unity::Mathematics::uint3 value);

  /// @brief Method set_zxwy, addr 0x4671ea0, size 0x14, virtual false, abstract: false, final false
  inline void set_zxwy(::Unity::Mathematics::uint4 value);

  /// @brief Method set_zxy, addr 0x4672c7c, size 0x10, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::uint3 value);

  /// @brief Method set_zxyw, addr 0x4671df8, size 0x14, virtual false, abstract: false, final false
  inline void set_zxyw(::Unity::Mathematics::uint4 value);

  /// @brief Method set_zy, addr 0x4673044, size 0xc, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::uint2 value);

  /// @brief Method set_zyw, addr 0x4672d1c, size 0x10, virtual false, abstract: false, final false
  inline void set_zyw(::Unity::Mathematics::uint3 value);

  /// @brief Method set_zywx, addr 0x4672028, size 0x14, virtual false, abstract: false, final false
  inline void set_zywx(::Unity::Mathematics::uint4 value);

  /// @brief Method set_zyx, addr 0x4672cd8, size 0x10, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::uint3 value);

  /// @brief Method set_zyxw, addr 0x4671f40, size 0x18, virtual false, abstract: false, final false
  inline void set_zyxw(::Unity::Mathematics::uint4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint4();

  // Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr uint4(uint32_t x, uint32_t y, uint32_t z, uint32_t w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10028 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  uint32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  uint32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  uint32_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  uint32_t w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4, w) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint4, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::uint4_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint4_DebuggerProxy*, "Unity.Mathematics", "uint4/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint4, "Unity.Mathematics", "uint4");
