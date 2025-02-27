#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4.hpp"
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
CORDL_MODULE_EXPORT(int4)
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
struct int2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
class int4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class int4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int4;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::int4_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::int4);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.int4/DebuggerProxy
class CORDL_TYPE int4_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field w, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w)) int32_t w;

  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) int32_t z;

  static inline ::Unity::Mathematics::int4_DebuggerProxy* New_ctor(::Unity::Mathematics::int4 v);

  constexpr int32_t const& __cordl_internal_get_w() const;

  constexpr int32_t& __cordl_internal_get_w();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr int32_t const& __cordl_internal_get_z() const;

  constexpr int32_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_w(int32_t value);

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  constexpr void __cordl_internal_set_z(int32_t value);

  /// @brief Method .ctor, addr 0x46cbe44, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr int4_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "int4_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  int4_DebuggerProxy(int4_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "int4_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  int4_DebuggerProxy(int4_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10006 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  int32_t ___z;

  /// @brief Field w, offset: 0x1c, size: 0x4, def value: None
  int32_t ___w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4_DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4_DebuggerProxy, ___w) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int4_DebuggerProxy, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int4
struct CORDL_TYPE int4 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::int4_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  __declspec(property(get = get_ww)) ::Unity::Mathematics::int2 ww;

  __declspec(property(get = get_www)) ::Unity::Mathematics::int3 www;

  __declspec(property(get = get_wwww)) ::Unity::Mathematics::int4 wwww;

  __declspec(property(get = get_wwwx)) ::Unity::Mathematics::int4 wwwx;

  __declspec(property(get = get_wwwy)) ::Unity::Mathematics::int4 wwwy;

  __declspec(property(get = get_wwwz)) ::Unity::Mathematics::int4 wwwz;

  __declspec(property(get = get_wwx)) ::Unity::Mathematics::int3 wwx;

  __declspec(property(get = get_wwxw)) ::Unity::Mathematics::int4 wwxw;

  __declspec(property(get = get_wwxx)) ::Unity::Mathematics::int4 wwxx;

  __declspec(property(get = get_wwxy)) ::Unity::Mathematics::int4 wwxy;

  __declspec(property(get = get_wwxz)) ::Unity::Mathematics::int4 wwxz;

  __declspec(property(get = get_wwy)) ::Unity::Mathematics::int3 wwy;

  __declspec(property(get = get_wwyw)) ::Unity::Mathematics::int4 wwyw;

  __declspec(property(get = get_wwyx)) ::Unity::Mathematics::int4 wwyx;

  __declspec(property(get = get_wwyy)) ::Unity::Mathematics::int4 wwyy;

  __declspec(property(get = get_wwyz)) ::Unity::Mathematics::int4 wwyz;

  __declspec(property(get = get_wwz)) ::Unity::Mathematics::int3 wwz;

  __declspec(property(get = get_wwzw)) ::Unity::Mathematics::int4 wwzw;

  __declspec(property(get = get_wwzx)) ::Unity::Mathematics::int4 wwzx;

  __declspec(property(get = get_wwzy)) ::Unity::Mathematics::int4 wwzy;

  __declspec(property(get = get_wwzz)) ::Unity::Mathematics::int4 wwzz;

  __declspec(property(get = get_wx, put = set_wx)) ::Unity::Mathematics::int2 wx;

  __declspec(property(get = get_wxw)) ::Unity::Mathematics::int3 wxw;

  __declspec(property(get = get_wxww)) ::Unity::Mathematics::int4 wxww;

  __declspec(property(get = get_wxwx)) ::Unity::Mathematics::int4 wxwx;

  __declspec(property(get = get_wxwy)) ::Unity::Mathematics::int4 wxwy;

  __declspec(property(get = get_wxwz)) ::Unity::Mathematics::int4 wxwz;

  __declspec(property(get = get_wxx)) ::Unity::Mathematics::int3 wxx;

  __declspec(property(get = get_wxxw)) ::Unity::Mathematics::int4 wxxw;

  __declspec(property(get = get_wxxx)) ::Unity::Mathematics::int4 wxxx;

  __declspec(property(get = get_wxxy)) ::Unity::Mathematics::int4 wxxy;

  __declspec(property(get = get_wxxz)) ::Unity::Mathematics::int4 wxxz;

  __declspec(property(get = get_wxy, put = set_wxy)) ::Unity::Mathematics::int3 wxy;

  __declspec(property(get = get_wxyw)) ::Unity::Mathematics::int4 wxyw;

  __declspec(property(get = get_wxyx)) ::Unity::Mathematics::int4 wxyx;

  __declspec(property(get = get_wxyy)) ::Unity::Mathematics::int4 wxyy;

  __declspec(property(get = get_wxyz, put = set_wxyz)) ::Unity::Mathematics::int4 wxyz;

  __declspec(property(get = get_wxz, put = set_wxz)) ::Unity::Mathematics::int3 wxz;

  __declspec(property(get = get_wxzw)) ::Unity::Mathematics::int4 wxzw;

  __declspec(property(get = get_wxzx)) ::Unity::Mathematics::int4 wxzx;

  __declspec(property(get = get_wxzy, put = set_wxzy)) ::Unity::Mathematics::int4 wxzy;

  __declspec(property(get = get_wxzz)) ::Unity::Mathematics::int4 wxzz;

  __declspec(property(get = get_wy, put = set_wy)) ::Unity::Mathematics::int2 wy;

  __declspec(property(get = get_wyw)) ::Unity::Mathematics::int3 wyw;

  __declspec(property(get = get_wyww)) ::Unity::Mathematics::int4 wyww;

  __declspec(property(get = get_wywx)) ::Unity::Mathematics::int4 wywx;

  __declspec(property(get = get_wywy)) ::Unity::Mathematics::int4 wywy;

  __declspec(property(get = get_wywz)) ::Unity::Mathematics::int4 wywz;

  __declspec(property(get = get_wyx, put = set_wyx)) ::Unity::Mathematics::int3 wyx;

  __declspec(property(get = get_wyxw)) ::Unity::Mathematics::int4 wyxw;

  __declspec(property(get = get_wyxx)) ::Unity::Mathematics::int4 wyxx;

  __declspec(property(get = get_wyxy)) ::Unity::Mathematics::int4 wyxy;

  __declspec(property(get = get_wyxz, put = set_wyxz)) ::Unity::Mathematics::int4 wyxz;

  __declspec(property(get = get_wyy)) ::Unity::Mathematics::int3 wyy;

  __declspec(property(get = get_wyyw)) ::Unity::Mathematics::int4 wyyw;

  __declspec(property(get = get_wyyx)) ::Unity::Mathematics::int4 wyyx;

  __declspec(property(get = get_wyyy)) ::Unity::Mathematics::int4 wyyy;

  __declspec(property(get = get_wyyz)) ::Unity::Mathematics::int4 wyyz;

  __declspec(property(get = get_wyz, put = set_wyz)) ::Unity::Mathematics::int3 wyz;

  __declspec(property(get = get_wyzw)) ::Unity::Mathematics::int4 wyzw;

  __declspec(property(get = get_wyzx, put = set_wyzx)) ::Unity::Mathematics::int4 wyzx;

  __declspec(property(get = get_wyzy)) ::Unity::Mathematics::int4 wyzy;

  __declspec(property(get = get_wyzz)) ::Unity::Mathematics::int4 wyzz;

  __declspec(property(get = get_wz, put = set_wz)) ::Unity::Mathematics::int2 wz;

  __declspec(property(get = get_wzw)) ::Unity::Mathematics::int3 wzw;

  __declspec(property(get = get_wzww)) ::Unity::Mathematics::int4 wzww;

  __declspec(property(get = get_wzwx)) ::Unity::Mathematics::int4 wzwx;

  __declspec(property(get = get_wzwy)) ::Unity::Mathematics::int4 wzwy;

  __declspec(property(get = get_wzwz)) ::Unity::Mathematics::int4 wzwz;

  __declspec(property(get = get_wzx, put = set_wzx)) ::Unity::Mathematics::int3 wzx;

  __declspec(property(get = get_wzxw)) ::Unity::Mathematics::int4 wzxw;

  __declspec(property(get = get_wzxx)) ::Unity::Mathematics::int4 wzxx;

  __declspec(property(get = get_wzxy, put = set_wzxy)) ::Unity::Mathematics::int4 wzxy;

  __declspec(property(get = get_wzxz)) ::Unity::Mathematics::int4 wzxz;

  __declspec(property(get = get_wzy, put = set_wzy)) ::Unity::Mathematics::int3 wzy;

  __declspec(property(get = get_wzyw)) ::Unity::Mathematics::int4 wzyw;

  __declspec(property(get = get_wzyx, put = set_wzyx)) ::Unity::Mathematics::int4 wzyx;

  __declspec(property(get = get_wzyy)) ::Unity::Mathematics::int4 wzyy;

  __declspec(property(get = get_wzyz)) ::Unity::Mathematics::int4 wzyz;

  __declspec(property(get = get_wzz)) ::Unity::Mathematics::int3 wzz;

  __declspec(property(get = get_wzzw)) ::Unity::Mathematics::int4 wzzw;

  __declspec(property(get = get_wzzx)) ::Unity::Mathematics::int4 wzzx;

  __declspec(property(get = get_wzzy)) ::Unity::Mathematics::int4 wzzy;

  __declspec(property(get = get_wzzz)) ::Unity::Mathematics::int4 wzzz;

  __declspec(property(get = get_xw, put = set_xw)) ::Unity::Mathematics::int2 xw;

  __declspec(property(get = get_xww)) ::Unity::Mathematics::int3 xww;

  __declspec(property(get = get_xwww)) ::Unity::Mathematics::int4 xwww;

  __declspec(property(get = get_xwwx)) ::Unity::Mathematics::int4 xwwx;

  __declspec(property(get = get_xwwy)) ::Unity::Mathematics::int4 xwwy;

  __declspec(property(get = get_xwwz)) ::Unity::Mathematics::int4 xwwz;

  __declspec(property(get = get_xwx)) ::Unity::Mathematics::int3 xwx;

  __declspec(property(get = get_xwxw)) ::Unity::Mathematics::int4 xwxw;

  __declspec(property(get = get_xwxx)) ::Unity::Mathematics::int4 xwxx;

  __declspec(property(get = get_xwxy)) ::Unity::Mathematics::int4 xwxy;

  __declspec(property(get = get_xwxz)) ::Unity::Mathematics::int4 xwxz;

  __declspec(property(get = get_xwy, put = set_xwy)) ::Unity::Mathematics::int3 xwy;

  __declspec(property(get = get_xwyw)) ::Unity::Mathematics::int4 xwyw;

  __declspec(property(get = get_xwyx)) ::Unity::Mathematics::int4 xwyx;

  __declspec(property(get = get_xwyy)) ::Unity::Mathematics::int4 xwyy;

  __declspec(property(get = get_xwyz, put = set_xwyz)) ::Unity::Mathematics::int4 xwyz;

  __declspec(property(get = get_xwz, put = set_xwz)) ::Unity::Mathematics::int3 xwz;

  __declspec(property(get = get_xwzw)) ::Unity::Mathematics::int4 xwzw;

  __declspec(property(get = get_xwzx)) ::Unity::Mathematics::int4 xwzx;

  __declspec(property(get = get_xwzy, put = set_xwzy)) ::Unity::Mathematics::int4 xwzy;

  __declspec(property(get = get_xwzz)) ::Unity::Mathematics::int4 xwzz;

  __declspec(property(get = get_xx)) ::Unity::Mathematics::int2 xx;

  __declspec(property(get = get_xxw)) ::Unity::Mathematics::int3 xxw;

  __declspec(property(get = get_xxww)) ::Unity::Mathematics::int4 xxww;

  __declspec(property(get = get_xxwx)) ::Unity::Mathematics::int4 xxwx;

  __declspec(property(get = get_xxwy)) ::Unity::Mathematics::int4 xxwy;

  __declspec(property(get = get_xxwz)) ::Unity::Mathematics::int4 xxwz;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::int3 xxx;

  __declspec(property(get = get_xxxw)) ::Unity::Mathematics::int4 xxxw;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::int4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::int4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::int4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::int3 xxy;

  __declspec(property(get = get_xxyw)) ::Unity::Mathematics::int4 xxyw;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::int4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::int4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::int4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::int3 xxz;

  __declspec(property(get = get_xxzw)) ::Unity::Mathematics::int4 xxzw;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::int4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::int4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::int4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::int2 xy;

  __declspec(property(get = get_xyw, put = set_xyw)) ::Unity::Mathematics::int3 xyw;

  __declspec(property(get = get_xyww)) ::Unity::Mathematics::int4 xyww;

  __declspec(property(get = get_xywx)) ::Unity::Mathematics::int4 xywx;

  __declspec(property(get = get_xywy)) ::Unity::Mathematics::int4 xywy;

  __declspec(property(get = get_xywz, put = set_xywz)) ::Unity::Mathematics::int4 xywz;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::int3 xyx;

  __declspec(property(get = get_xyxw)) ::Unity::Mathematics::int4 xyxw;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::int4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::int4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::int4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::int3 xyy;

  __declspec(property(get = get_xyyw)) ::Unity::Mathematics::int4 xyyw;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::int4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::int4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::int4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::int3 xyz;

  __declspec(property(get = get_xyzw, put = set_xyzw)) ::Unity::Mathematics::int4 xyzw;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::int4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::int4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::int4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::int2 xz;

  __declspec(property(get = get_xzw, put = set_xzw)) ::Unity::Mathematics::int3 xzw;

  __declspec(property(get = get_xzww)) ::Unity::Mathematics::int4 xzww;

  __declspec(property(get = get_xzwx)) ::Unity::Mathematics::int4 xzwx;

  __declspec(property(get = get_xzwy, put = set_xzwy)) ::Unity::Mathematics::int4 xzwy;

  __declspec(property(get = get_xzwz)) ::Unity::Mathematics::int4 xzwz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::int3 xzx;

  __declspec(property(get = get_xzxw)) ::Unity::Mathematics::int4 xzxw;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::int4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::int4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::int4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::int3 xzy;

  __declspec(property(get = get_xzyw, put = set_xzyw)) ::Unity::Mathematics::int4 xzyw;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::int4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::int4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::int4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::int3 xzz;

  __declspec(property(get = get_xzzw)) ::Unity::Mathematics::int4 xzzw;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::int4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::int4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::int4 xzzz;

  __declspec(property(get = get_yw, put = set_yw)) ::Unity::Mathematics::int2 yw;

  __declspec(property(get = get_yww)) ::Unity::Mathematics::int3 yww;

  __declspec(property(get = get_ywww)) ::Unity::Mathematics::int4 ywww;

  __declspec(property(get = get_ywwx)) ::Unity::Mathematics::int4 ywwx;

  __declspec(property(get = get_ywwy)) ::Unity::Mathematics::int4 ywwy;

  __declspec(property(get = get_ywwz)) ::Unity::Mathematics::int4 ywwz;

  __declspec(property(get = get_ywx, put = set_ywx)) ::Unity::Mathematics::int3 ywx;

  __declspec(property(get = get_ywxw)) ::Unity::Mathematics::int4 ywxw;

  __declspec(property(get = get_ywxx)) ::Unity::Mathematics::int4 ywxx;

  __declspec(property(get = get_ywxy)) ::Unity::Mathematics::int4 ywxy;

  __declspec(property(get = get_ywxz, put = set_ywxz)) ::Unity::Mathematics::int4 ywxz;

  __declspec(property(get = get_ywy)) ::Unity::Mathematics::int3 ywy;

  __declspec(property(get = get_ywyw)) ::Unity::Mathematics::int4 ywyw;

  __declspec(property(get = get_ywyx)) ::Unity::Mathematics::int4 ywyx;

  __declspec(property(get = get_ywyy)) ::Unity::Mathematics::int4 ywyy;

  __declspec(property(get = get_ywyz)) ::Unity::Mathematics::int4 ywyz;

  __declspec(property(get = get_ywz, put = set_ywz)) ::Unity::Mathematics::int3 ywz;

  __declspec(property(get = get_ywzw)) ::Unity::Mathematics::int4 ywzw;

  __declspec(property(get = get_ywzx, put = set_ywzx)) ::Unity::Mathematics::int4 ywzx;

  __declspec(property(get = get_ywzy)) ::Unity::Mathematics::int4 ywzy;

  __declspec(property(get = get_ywzz)) ::Unity::Mathematics::int4 ywzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::int2 yx;

  __declspec(property(get = get_yxw, put = set_yxw)) ::Unity::Mathematics::int3 yxw;

  __declspec(property(get = get_yxww)) ::Unity::Mathematics::int4 yxww;

  __declspec(property(get = get_yxwx)) ::Unity::Mathematics::int4 yxwx;

  __declspec(property(get = get_yxwy)) ::Unity::Mathematics::int4 yxwy;

  __declspec(property(get = get_yxwz, put = set_yxwz)) ::Unity::Mathematics::int4 yxwz;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::int3 yxx;

  __declspec(property(get = get_yxxw)) ::Unity::Mathematics::int4 yxxw;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::int4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::int4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::int4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::int3 yxy;

  __declspec(property(get = get_yxyw)) ::Unity::Mathematics::int4 yxyw;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::int4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::int4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::int4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::int3 yxz;

  __declspec(property(get = get_yxzw, put = set_yxzw)) ::Unity::Mathematics::int4 yxzw;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::int4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::int4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::int4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::int2 yy;

  __declspec(property(get = get_yyw)) ::Unity::Mathematics::int3 yyw;

  __declspec(property(get = get_yyww)) ::Unity::Mathematics::int4 yyww;

  __declspec(property(get = get_yywx)) ::Unity::Mathematics::int4 yywx;

  __declspec(property(get = get_yywy)) ::Unity::Mathematics::int4 yywy;

  __declspec(property(get = get_yywz)) ::Unity::Mathematics::int4 yywz;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::int3 yyx;

  __declspec(property(get = get_yyxw)) ::Unity::Mathematics::int4 yyxw;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::int4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::int4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::int4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::int3 yyy;

  __declspec(property(get = get_yyyw)) ::Unity::Mathematics::int4 yyyw;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::int4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::int4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::int4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::int3 yyz;

  __declspec(property(get = get_yyzw)) ::Unity::Mathematics::int4 yyzw;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::int4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::int4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::int4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::int2 yz;

  __declspec(property(get = get_yzw, put = set_yzw)) ::Unity::Mathematics::int3 yzw;

  __declspec(property(get = get_yzww)) ::Unity::Mathematics::int4 yzww;

  __declspec(property(get = get_yzwx, put = set_yzwx)) ::Unity::Mathematics::int4 yzwx;

  __declspec(property(get = get_yzwy)) ::Unity::Mathematics::int4 yzwy;

  __declspec(property(get = get_yzwz)) ::Unity::Mathematics::int4 yzwz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::int3 yzx;

  __declspec(property(get = get_yzxw, put = set_yzxw)) ::Unity::Mathematics::int4 yzxw;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::int4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::int4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::int4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::int3 yzy;

  __declspec(property(get = get_yzyw)) ::Unity::Mathematics::int4 yzyw;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::int4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::int4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::int4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::int3 yzz;

  __declspec(property(get = get_yzzw)) ::Unity::Mathematics::int4 yzzw;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::int4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::int4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::int4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int4 zero;

  __declspec(property(get = get_zw, put = set_zw)) ::Unity::Mathematics::int2 zw;

  __declspec(property(get = get_zww)) ::Unity::Mathematics::int3 zww;

  __declspec(property(get = get_zwww)) ::Unity::Mathematics::int4 zwww;

  __declspec(property(get = get_zwwx)) ::Unity::Mathematics::int4 zwwx;

  __declspec(property(get = get_zwwy)) ::Unity::Mathematics::int4 zwwy;

  __declspec(property(get = get_zwwz)) ::Unity::Mathematics::int4 zwwz;

  __declspec(property(get = get_zwx, put = set_zwx)) ::Unity::Mathematics::int3 zwx;

  __declspec(property(get = get_zwxw)) ::Unity::Mathematics::int4 zwxw;

  __declspec(property(get = get_zwxx)) ::Unity::Mathematics::int4 zwxx;

  __declspec(property(get = get_zwxy, put = set_zwxy)) ::Unity::Mathematics::int4 zwxy;

  __declspec(property(get = get_zwxz)) ::Unity::Mathematics::int4 zwxz;

  __declspec(property(get = get_zwy, put = set_zwy)) ::Unity::Mathematics::int3 zwy;

  __declspec(property(get = get_zwyw)) ::Unity::Mathematics::int4 zwyw;

  __declspec(property(get = get_zwyx, put = set_zwyx)) ::Unity::Mathematics::int4 zwyx;

  __declspec(property(get = get_zwyy)) ::Unity::Mathematics::int4 zwyy;

  __declspec(property(get = get_zwyz)) ::Unity::Mathematics::int4 zwyz;

  __declspec(property(get = get_zwz)) ::Unity::Mathematics::int3 zwz;

  __declspec(property(get = get_zwzw)) ::Unity::Mathematics::int4 zwzw;

  __declspec(property(get = get_zwzx)) ::Unity::Mathematics::int4 zwzx;

  __declspec(property(get = get_zwzy)) ::Unity::Mathematics::int4 zwzy;

  __declspec(property(get = get_zwzz)) ::Unity::Mathematics::int4 zwzz;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::int2 zx;

  __declspec(property(get = get_zxw, put = set_zxw)) ::Unity::Mathematics::int3 zxw;

  __declspec(property(get = get_zxww)) ::Unity::Mathematics::int4 zxww;

  __declspec(property(get = get_zxwx)) ::Unity::Mathematics::int4 zxwx;

  __declspec(property(get = get_zxwy, put = set_zxwy)) ::Unity::Mathematics::int4 zxwy;

  __declspec(property(get = get_zxwz)) ::Unity::Mathematics::int4 zxwz;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::int3 zxx;

  __declspec(property(get = get_zxxw)) ::Unity::Mathematics::int4 zxxw;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::int4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::int4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::int4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::int3 zxy;

  __declspec(property(get = get_zxyw, put = set_zxyw)) ::Unity::Mathematics::int4 zxyw;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::int4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::int4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::int4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::int3 zxz;

  __declspec(property(get = get_zxzw)) ::Unity::Mathematics::int4 zxzw;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::int4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::int4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::int4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::int2 zy;

  __declspec(property(get = get_zyw, put = set_zyw)) ::Unity::Mathematics::int3 zyw;

  __declspec(property(get = get_zyww)) ::Unity::Mathematics::int4 zyww;

  __declspec(property(get = get_zywx, put = set_zywx)) ::Unity::Mathematics::int4 zywx;

  __declspec(property(get = get_zywy)) ::Unity::Mathematics::int4 zywy;

  __declspec(property(get = get_zywz)) ::Unity::Mathematics::int4 zywz;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::int3 zyx;

  __declspec(property(get = get_zyxw, put = set_zyxw)) ::Unity::Mathematics::int4 zyxw;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::int4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::int4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::int4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::int3 zyy;

  __declspec(property(get = get_zyyw)) ::Unity::Mathematics::int4 zyyw;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::int4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::int4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::int4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::int3 zyz;

  __declspec(property(get = get_zyzw)) ::Unity::Mathematics::int4 zyzw;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::int4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::int4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::int4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::int2 zz;

  __declspec(property(get = get_zzw)) ::Unity::Mathematics::int3 zzw;

  __declspec(property(get = get_zzww)) ::Unity::Mathematics::int4 zzww;

  __declspec(property(get = get_zzwx)) ::Unity::Mathematics::int4 zzwx;

  __declspec(property(get = get_zzwy)) ::Unity::Mathematics::int4 zzwy;

  __declspec(property(get = get_zzwz)) ::Unity::Mathematics::int4 zzwz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::int3 zzx;

  __declspec(property(get = get_zzxw)) ::Unity::Mathematics::int4 zzxw;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::int4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::int4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::int4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::int3 zzy;

  __declspec(property(get = get_zzyw)) ::Unity::Mathematics::int4 zzyw;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::int4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::int4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::int4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::int3 zzz;

  __declspec(property(get = get_zzzw)) ::Unity::Mathematics::int4 zzzw;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::int4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::int4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::int4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46ca040, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46c9ffc, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int4 rhs);

  /// @brief Method GetHashCode, addr 0x46ca0e8, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46ca144, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46ca2f0, size 0x1b54, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46c754c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 v);

  /// @brief Method .ctor, addr 0x46c7634, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 v);

  /// @brief Method .ctor, addr 0x46c75c8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 v);

  /// @brief Method .ctor, addr 0x46c7590, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 v);

  /// @brief Method .ctor, addr 0x46c753c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46c7610, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46c75a4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46c7530, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46c7584, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x46c74ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y, int32_t z, int32_t w);

  /// @brief Method .ctor, addr 0x46c74b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y, ::Unity::Mathematics::int2 zw);

  /// @brief Method .ctor, addr 0x46c74c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, ::Unity::Mathematics::int2 yz, int32_t w);

  /// @brief Method .ctor, addr 0x46c74d8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, ::Unity::Mathematics::int3 yzw);

  /// @brief Method .ctor, addr 0x46c74e8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 xy, int32_t z, int32_t w);

  /// @brief Method .ctor, addr 0x46c74f8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 xy, ::Unity::Mathematics::int2 zw);

  /// @brief Method .ctor, addr 0x46c750c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 xyz, int32_t w);

  /// @brief Method .ctor, addr 0x46c751c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 xyzw);

  static inline ::Unity::Mathematics::int4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46c9fec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method get_ww, addr 0x46c9fe0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_ww();

  /// @brief Method get_www, addr 0x46c9e50, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_www();

  /// @brief Method get_wwww, addr 0x46c9864, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwww();

  /// @brief Method get_wwwx, addr 0x46c9814, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwwx();

  /// @brief Method get_wwwy, addr 0x46c9830, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwwy();

  /// @brief Method get_wwwz, addr 0x46c984c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwwz();

  /// @brief Method get_wwx, addr 0x46c9e18, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wwx();

  /// @brief Method get_wwxw, addr 0x46c975c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwxw();

  /// @brief Method get_wwxx, addr 0x46c9720, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwxx();

  /// @brief Method get_wwxy, addr 0x46c9734, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwxy();

  /// @brief Method get_wwxz, addr 0x46c9748, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwxz();

  /// @brief Method get_wwy, addr 0x46c9e2c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wwy();

  /// @brief Method get_wwyw, addr 0x46c97b0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwyw();

  /// @brief Method get_wwyx, addr 0x46c9774, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwyx();

  /// @brief Method get_wwyy, addr 0x46c9788, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwyy();

  /// @brief Method get_wwyz, addr 0x46c979c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwyz();

  /// @brief Method get_wwz, addr 0x46c9e40, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wwz();

  /// @brief Method get_wwzw, addr 0x46c9800, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwzw();

  /// @brief Method get_wwzx, addr 0x46c97c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwzx();

  /// @brief Method get_wwzy, addr 0x46c97dc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwzy();

  /// @brief Method get_wwzz, addr 0x46c97f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wwzz();

  /// @brief Method get_wx, addr 0x46c9f7c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_wx();

  /// @brief Method get_wxw, addr 0x46c9d2c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wxw();

  /// @brief Method get_wxww, addr 0x46c93c8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxww();

  /// @brief Method get_wxwx, addr 0x46c937c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxwx();

  /// @brief Method get_wxwy, addr 0x46c9390, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxwy();

  /// @brief Method get_wxwz, addr 0x46c93ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxwz();

  /// @brief Method get_wxx, addr 0x46c9cd0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wxx();

  /// @brief Method get_wxxw, addr 0x46c9284, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxxw();

  /// @brief Method get_wxxx, addr 0x46c923c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxxx();

  /// @brief Method get_wxxy, addr 0x46c9254, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxxy();

  /// @brief Method get_wxxz, addr 0x46c926c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxxz();

  /// @brief Method get_wxy, addr 0x46c9ce4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wxy();

  /// @brief Method get_wxyw, addr 0x46c92f4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxyw();

  /// @brief Method get_wxyx, addr 0x46c929c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxyx();

  /// @brief Method get_wxyy, addr 0x46c92b0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxyy();

  /// @brief Method get_wxyz, addr 0x46c92c8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxyz();

  /// @brief Method get_wxz, addr 0x46c9d08, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wxz();

  /// @brief Method get_wxzw, addr 0x46c9364, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxzw();

  /// @brief Method get_wxzx, addr 0x46c930c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxzx();

  /// @brief Method get_wxzy, addr 0x46c9320, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxzy();

  /// @brief Method get_wxzz, addr 0x46c934c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wxzz();

  /// @brief Method get_wy, addr 0x46c9fa0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_wy();

  /// @brief Method get_wyw, addr 0x46c9d9c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wyw();

  /// @brief Method get_wyww, addr 0x46c9570, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyww();

  /// @brief Method get_wywx, addr 0x46c9524, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wywx();

  /// @brief Method get_wywy, addr 0x46c9540, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wywy();

  /// @brief Method get_wywz, addr 0x46c9554, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wywz();

  /// @brief Method get_wyx, addr 0x46c9d40, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wyx();

  /// @brief Method get_wyxw, addr 0x46c943c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyxw();

  /// @brief Method get_wyxx, addr 0x46c93e4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyxx();

  /// @brief Method get_wyxy, addr 0x46c93fc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyxy();

  /// @brief Method get_wyxz, addr 0x46c9410, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyxz();

  /// @brief Method get_wyy, addr 0x46c9d64, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wyy();

  /// @brief Method get_wyyw, addr 0x46c949c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyyw();

  /// @brief Method get_wyyx, addr 0x46c9454, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyyx();

  /// @brief Method get_wyyy, addr 0x46c946c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyyy();

  /// @brief Method get_wyyz, addr 0x46c9484, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyyz();

  /// @brief Method get_wyz, addr 0x46c9d78, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wyz();

  /// @brief Method get_wyzw, addr 0x46c950c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyzw();

  /// @brief Method get_wyzx, addr 0x46c94b4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyzx();

  /// @brief Method get_wyzy, addr 0x46c94e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyzy();

  /// @brief Method get_wyzz, addr 0x46c94f4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wyzz();

  /// @brief Method get_wz, addr 0x46c9fc4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_wz();

  /// @brief Method get_wzw, addr 0x46c9e08, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wzw();

  /// @brief Method get_wzww, addr 0x46c9708, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzww();

  /// @brief Method get_wzwx, addr 0x46c96c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzwx();

  /// @brief Method get_wzwy, addr 0x46c96dc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzwy();

  /// @brief Method get_wzwz, addr 0x46c96f8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzwz();

  /// @brief Method get_wzx, addr 0x46c9db0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wzx();

  /// @brief Method get_wzxw, addr 0x46c95e0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzxw();

  /// @brief Method get_wzxx, addr 0x46c958c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzxx();

  /// @brief Method get_wzxy, addr 0x46c95a4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzxy();

  /// @brief Method get_wzxz, addr 0x46c95cc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzxz();

  /// @brief Method get_wzy, addr 0x46c9dd4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wzy();

  /// @brief Method get_wzyw, addr 0x46c9650, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzyw();

  /// @brief Method get_wzyx, addr 0x46c95f8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzyx();

  /// @brief Method get_wzyy, addr 0x46c9624, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzyy();

  /// @brief Method get_wzyz, addr 0x46c963c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzyz();

  /// @brief Method get_wzz, addr 0x46c9df8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_wzz();

  /// @brief Method get_wzzw, addr 0x46c96ac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzzw();

  /// @brief Method get_wzzx, addr 0x46c9668, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzzx();

  /// @brief Method get_wzzy, addr 0x46c9680, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzzy();

  /// @brief Method get_wzzz, addr 0x46c9698, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_wzzz();

  /// @brief Method get_xw, addr 0x46c9ea0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xw();

  /// @brief Method get_xww, addr 0x46c99e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xww();

  /// @brief Method get_xwww, addr 0x46c8634, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwww();

  /// @brief Method get_xwwx, addr 0x46c85ec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwwx();

  /// @brief Method get_xwwy, addr 0x46c8604, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwwy();

  /// @brief Method get_xwwz, addr 0x46c861c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwwz();

  /// @brief Method get_xwx, addr 0x46c9984, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xwx();

  /// @brief Method get_xwxw, addr 0x46c84f8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwxw();

  /// @brief Method get_xwxx, addr 0x46c84a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwxx();

  /// @brief Method get_xwxy, addr 0x46c84c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwxy();

  /// @brief Method get_xwxz, addr 0x46c84dc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwxz();

  /// @brief Method get_xwy, addr 0x46c9998, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xwy();

  /// @brief Method get_xwyw, addr 0x46c8568, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwyw();

  /// @brief Method get_xwyx, addr 0x46c850c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwyx();

  /// @brief Method get_xwyy, addr 0x46c8524, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwyy();

  /// @brief Method get_xwyz, addr 0x46c853c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwyz();

  /// @brief Method get_xwz, addr 0x46c99bc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xwz();

  /// @brief Method get_xwzw, addr 0x46c85d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwzw();

  /// @brief Method get_xwzx, addr 0x46c857c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwzx();

  /// @brief Method get_xwzy, addr 0x46c8594, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwzy();

  /// @brief Method get_xwzz, addr 0x46c85c0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xwzz();

  /// @brief Method get_xx, addr 0x46c9e60, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xx();

  /// @brief Method get_xxw, addr 0x46c98a8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxw();

  /// @brief Method get_xxww, addr 0x46c817c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxww();

  /// @brief Method get_xxwx, addr 0x46c813c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxwx();

  /// @brief Method get_xxwy, addr 0x46c8154, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxwy();

  /// @brief Method get_xxwz, addr 0x46c8168, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxwz();

  /// @brief Method get_xxx, addr 0x46c9874, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxx();

  /// @brief Method get_xxxw, addr 0x46c8080, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxw();

  /// @brief Method get_xxxx, addr 0x46c803c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x46c804c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x46c8064, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxz();

  /// @brief Method get_xxy, addr 0x46c9884, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxy();

  /// @brief Method get_xxyw, addr 0x46c80d4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyw();

  /// @brief Method get_xxyx, addr 0x46c809c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x46c80b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x46c80c0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyz();

  /// @brief Method get_xxz, addr 0x46c9894, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxz();

  /// @brief Method get_xxzw, addr 0x46c8128, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzw();

  /// @brief Method get_xxzx, addr 0x46c80e8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x46c8100, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x46c8114, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzz();

  /// @brief Method get_xy, addr 0x46c9e6c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xy();

  /// @brief Method get_xyw, addr 0x46c98f8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyw();

  /// @brief Method get_xyww, addr 0x46c82ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyww();

  /// @brief Method get_xywx, addr 0x46c829c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xywx();

  /// @brief Method get_xywy, addr 0x46c82b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xywy();

  /// @brief Method get_xywz, addr 0x46c82c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xywz();

  /// @brief Method get_xyx, addr 0x46c98bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyx();

  /// @brief Method get_xyxw, addr 0x46c81d0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxw();

  /// @brief Method get_xyxx, addr 0x46c8190, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x46c81a8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x46c81b4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxz();

  /// @brief Method get_xyy, addr 0x46c98cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyy();

  /// @brief Method get_xyyw, addr 0x46c822c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyw();

  /// @brief Method get_xyyx, addr 0x46c81ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x46c8200, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x46c8214, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyz();

  /// @brief Method get_xyz, addr 0x46c98dc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyz();

  /// @brief Method get_xyzw, addr 0x46c8280, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzw();

  /// @brief Method get_xyzx, addr 0x46c8244, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x46c825c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x46c8270, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzz();

  /// @brief Method get_xz, addr 0x46c9e7c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xz();

  /// @brief Method get_xzw, addr 0x46c9960, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzw();

  /// @brief Method get_xzww, addr 0x46c848c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzww();

  /// @brief Method get_xzwx, addr 0x46c8434, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzwx();

  /// @brief Method get_xzwy, addr 0x46c844c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzwy();

  /// @brief Method get_xzwz, addr 0x46c8478, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzwz();

  /// @brief Method get_xzx, addr 0x46c9914, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzx();

  /// @brief Method get_xzxw, addr 0x46c8348, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxw();

  /// @brief Method get_xzxx, addr 0x46c82fc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x46c8318, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x46c8334, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxz();

  /// @brief Method get_xzy, addr 0x46c9928, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzy();

  /// @brief Method get_xzyw, addr 0x46c83a8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyw();

  /// @brief Method get_xzyx, addr 0x46c8364, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x46c837c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x46c8394, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyz();

  /// @brief Method get_xzz, addr 0x46c994c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzz();

  /// @brief Method get_xzzw, addr 0x46c841c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzw();

  /// @brief Method get_xzzx, addr 0x46c83d4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x46c83ec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x46c8404, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzz();

  /// @brief Method get_yw, addr 0x46c9efc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yw();

  /// @brief Method get_yww, addr 0x46c9b50, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yww();

  /// @brief Method get_ywww, addr 0x46c8c34, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywww();

  /// @brief Method get_ywwx, addr 0x46c8bec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywwx();

  /// @brief Method get_ywwy, addr 0x46c8c04, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywwy();

  /// @brief Method get_ywwz, addr 0x46c8c1c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywwz();

  /// @brief Method get_ywx, addr 0x46c9af4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_ywx();

  /// @brief Method get_ywxw, addr 0x46c8b00, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywxw();

  /// @brief Method get_ywxx, addr 0x46c8aa4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywxx();

  /// @brief Method get_ywxy, addr 0x46c8abc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywxy();

  /// @brief Method get_ywxz, addr 0x46c8ad4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywxz();

  /// @brief Method get_ywy, addr 0x46c9b18, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_ywy();

  /// @brief Method get_ywyw, addr 0x46c8b68, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywyw();

  /// @brief Method get_ywyx, addr 0x46c8b14, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywyx();

  /// @brief Method get_ywyy, addr 0x46c8b30, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywyy();

  /// @brief Method get_ywyz, addr 0x46c8b4c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywyz();

  /// @brief Method get_ywz, addr 0x46c9b2c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_ywz();

  /// @brief Method get_ywzw, addr 0x46c8bd8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywzw();

  /// @brief Method get_ywzx, addr 0x46c8b7c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywzx();

  /// @brief Method get_ywzy, addr 0x46c8ba8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywzy();

  /// @brief Method get_ywzz, addr 0x46c8bc0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_ywzz();

  /// @brief Method get_yx, addr 0x46c9ec4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yx();

  /// @brief Method get_yxw, addr 0x46c9a38, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxw();

  /// @brief Method get_yxww, addr 0x46c87c8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxww();

  /// @brief Method get_yxwx, addr 0x46c8770, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxwx();

  /// @brief Method get_yxwy, addr 0x46c8784, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxwy();

  /// @brief Method get_yxwz, addr 0x46c879c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxwz();

  /// @brief Method get_yxx, addr 0x46c99f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxx();

  /// @brief Method get_yxxw, addr 0x46c868c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxw();

  /// @brief Method get_yxxx, addr 0x46c864c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x46c8660, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x46c8674, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxz();

  /// @brief Method get_yxy, addr 0x46c9a04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxy();

  /// @brief Method get_yxyw, addr 0x46c86e8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyw();

  /// @brief Method get_yxyx, addr 0x46c86a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x46c86b4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x46c86cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyz();

  /// @brief Method get_yxz, addr 0x46c9a14, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxz();

  /// @brief Method get_yxzw, addr 0x46c8748, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzw();

  /// @brief Method get_yxzx, addr 0x46c8704, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x46c8718, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x46c8730, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzz();

  /// @brief Method get_yy, addr 0x46c9ee0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yy();

  /// @brief Method get_yyw, addr 0x46c9a8c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyw();

  /// @brief Method get_yyww, addr 0x46c8914, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyww();

  /// @brief Method get_yywx, addr 0x46c88d4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yywx();

  /// @brief Method get_yywy, addr 0x46c88e8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yywy();

  /// @brief Method get_yywz, addr 0x46c8900, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yywz();

  /// @brief Method get_yyx, addr 0x46c9a5c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyx();

  /// @brief Method get_yyxw, addr 0x46c8818, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxw();

  /// @brief Method get_yyxx, addr 0x46c87e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x46c87f0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x46c8804, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxz();

  /// @brief Method get_yyy, addr 0x46c9a6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyy();

  /// @brief Method get_yyyw, addr 0x46c886c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyw();

  /// @brief Method get_yyyx, addr 0x46c882c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x46c8844, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x46c8854, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyz();

  /// @brief Method get_yyz, addr 0x46c9a7c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyz();

  /// @brief Method get_yyzw, addr 0x46c88c0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzw();

  /// @brief Method get_yyzx, addr 0x46c8888, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x46c889c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x46c88b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzz();

  /// @brief Method get_yz, addr 0x46c9eec, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yz();

  /// @brief Method get_yzw, addr 0x46c9ad8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzw();

  /// @brief Method get_yzww, addr 0x46c8a94, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzww();

  /// @brief Method get_yzwx, addr 0x46c8a40, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzwx();

  /// @brief Method get_yzwy, addr 0x46c8a68, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzwy();

  /// @brief Method get_yzwz, addr 0x46c8a80, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzwz();

  /// @brief Method get_yzx, addr 0x46c9aa0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzx();

  /// @brief Method get_yzxw, addr 0x46c8964, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxw();

  /// @brief Method get_yzxx, addr 0x46c8928, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x46c8938, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x46c8950, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxz();

  /// @brief Method get_yzy, addr 0x46c9ab8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzy();

  /// @brief Method get_yzyw, addr 0x46c89cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyw();

  /// @brief Method get_yzyx, addr 0x46c898c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x46c89a8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x46c89c0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyz();

  /// @brief Method get_yzz, addr 0x46c9ac8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzz();

  /// @brief Method get_yzzw, addr 0x46c8a28, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzw();

  /// @brief Method get_yzzx, addr 0x46c89e8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x46c8a00, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x46c8a14, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzz();

  /// @brief Method get_zw, addr 0x46c9f6c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zw();

  /// @brief Method get_zww, addr 0x46c9cc0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zww();

  /// @brief Method get_zwww, addr 0x46c9228, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwww();

  /// @brief Method get_zwwx, addr 0x46c91e4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwwx();

  /// @brief Method get_zwwy, addr 0x46c91fc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwwy();

  /// @brief Method get_zwwz, addr 0x46c9214, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwwz();

  /// @brief Method get_zwx, addr 0x46c9c80, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zwx();

  /// @brief Method get_zwxw, addr 0x46c9118, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwxw();

  /// @brief Method get_zwxx, addr 0x46c90d8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwxx();

  /// @brief Method get_zwxy, addr 0x46c90e8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwxy();

  /// @brief Method get_zwxz, addr 0x46c9100, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwxz();

  /// @brief Method get_zwy, addr 0x46c9c98, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zwy();

  /// @brief Method get_zwyw, addr 0x46c9174, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwyw();

  /// @brief Method get_zwyx, addr 0x46c912c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwyx();

  /// @brief Method get_zwyy, addr 0x46c914c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwyy();

  /// @brief Method get_zwyz, addr 0x46c915c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwyz();

  /// @brief Method get_zwz, addr 0x46c9cb0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zwz();

  /// @brief Method get_zwzw, addr 0x46c91d8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwzw();

  /// @brief Method get_zwzx, addr 0x46c9188, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwzx();

  /// @brief Method get_zwzy, addr 0x46c91a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwzy();

  /// @brief Method get_zwzz, addr 0x46c91c0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zwzz();

  /// @brief Method get_zx, addr 0x46c9f20, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zx();

  /// @brief Method get_zxw, addr 0x46c9bb0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxw();

  /// @brief Method get_zxww, addr 0x46c8ddc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxww();

  /// @brief Method get_zxwx, addr 0x46c8d84, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxwx();

  /// @brief Method get_zxwy, addr 0x46c8d98, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxwy();

  /// @brief Method get_zxwz, addr 0x46c8dc4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxwz();

  /// @brief Method get_zxx, addr 0x46c9b64, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxx();

  /// @brief Method get_zxxw, addr 0x46c8c94, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxw();

  /// @brief Method get_zxxx, addr 0x46c8c4c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x46c8c64, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x46c8c7c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxz();

  /// @brief Method get_zxy, addr 0x46c9b78, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxy();

  /// @brief Method get_zxyw, addr 0x46c8cf0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyw();

  /// @brief Method get_zxyx, addr 0x46c8cac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x46c8cc0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x46c8cd8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyz();

  /// @brief Method get_zxz, addr 0x46c9b9c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxz();

  /// @brief Method get_zxzw, addr 0x46c8d68, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzw();

  /// @brief Method get_zxzx, addr 0x46c8d1c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x46c8d30, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x46c8d4c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzz();

  /// @brief Method get_zy, addr 0x46c9f44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zy();

  /// @brief Method get_zyw, addr 0x46c9c18, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyw();

  /// @brief Method get_zyww, addr 0x46c8f78, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyww();

  /// @brief Method get_zywx, addr 0x46c8f20, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zywx();

  /// @brief Method get_zywy, addr 0x46c8f4c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zywy();

  /// @brief Method get_zywz, addr 0x46c8f60, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zywz();

  /// @brief Method get_zyx, addr 0x46c9bd4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyx();

  /// @brief Method get_zyxw, addr 0x46c8e38, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxw();

  /// @brief Method get_zyxx, addr 0x46c8df4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x46c8e0c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x46c8e20, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxz();

  /// @brief Method get_zyy, addr 0x46c9bf8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyy();

  /// @brief Method get_zyyw, addr 0x46c8ea8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyw();

  /// @brief Method get_zyyx, addr 0x46c8e68, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x46c8e80, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x46c8e94, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyz();

  /// @brief Method get_zyz, addr 0x46c9c08, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyz();

  /// @brief Method get_zyzw, addr 0x46c8f04, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzw();

  /// @brief Method get_zyzx, addr 0x46c8ec0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x46c8edc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x46c8eec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzz();

  /// @brief Method get_zz, addr 0x46c9f60, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zz();

  /// @brief Method get_zzw, addr 0x46c9c70, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzw();

  /// @brief Method get_zzww, addr 0x46c90c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzww();

  /// @brief Method get_zzwx, addr 0x46c908c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzwx();

  /// @brief Method get_zzwy, addr 0x46c90a0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzwy();

  /// @brief Method get_zzwz, addr 0x46c90b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzwz();

  /// @brief Method get_zzx, addr 0x46c9c3c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzx();

  /// @brief Method get_zzxw, addr 0x46c8fd0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxw();

  /// @brief Method get_zzxx, addr 0x46c8f90, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x46c8fa4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x46c8fb8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxz();

  /// @brief Method get_zzy, addr 0x46c9c50, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzy();

  /// @brief Method get_zzyw, addr 0x46c901c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyw();

  /// @brief Method get_zzyx, addr 0x46c8fe4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x46c8ff8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x46c9008, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyz();

  /// @brief Method get_zzz, addr 0x46c9c60, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzz();

  /// @brief Method get_zzzw, addr 0x46c9074, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzw();

  /// @brief Method get_zzzx, addr 0x46c9030, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x46c904c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x46c9064, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int4>* i___System__IEquatable_1___Unity__Mathematics__int4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46c7840, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Addition(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Addition, addr 0x46c786c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Addition(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46c7890, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Addition(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c7f34, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_BitwiseAnd(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c7f40, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_BitwiseAnd(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46c7f64, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c7f8c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_BitwiseOr(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c7f98, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_BitwiseOr(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46c7fbc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Decrement, addr 0x46c7a78, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Decrement(::Unity::Mathematics::int4 val);

  /// @brief Method op_Division, addr 0x46c7930, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Division(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Division, addr 0x46c795c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Division(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46c7980, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Division(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Equality, addr 0x46c7dc8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Equality, addr 0x46c7e08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46c7e40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c7fe4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_ExclusiveOr(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c7ff0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_ExclusiveOr(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46c8014, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Explicit, addr 0x46c76a4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::bool4 v);

  /// @brief Method op_Explicit, addr 0x46c7774, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::double4 v);

  /// @brief Method op_Explicit, addr 0x46c76fc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::float4 v);

  /// @brief Method op_Explicit, addr 0x46c76d4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::uint4 v);

  /// @brief Method op_Explicit, addr 0x46c768c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(bool v);

  /// @brief Method op_Explicit, addr 0x46c7750, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(double_t v);

  /// @brief Method op_Explicit, addr 0x46c76d8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(float_t v);

  /// @brief Method op_Explicit, addr 0x46c76c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46c7c00, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_GreaterThan, addr 0x46c7c40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46c7c78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46c7cb0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46c7cf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46c7d28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Implicit, addr 0x46c767c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Implicit___Unity__Mathematics__int4(int32_t v);

  /// @brief Method op_Increment, addr 0x46c7a50, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Increment(::Unity::Mathematics::int4 val);

  /// @brief Method op_Inequality, addr 0x46c7e78, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Inequality, addr 0x46c7eb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46c7ef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_LeftShift, addr 0x46c7d80, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_LeftShift(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46c7aa0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_LessThan, addr 0x46c7ae0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46c7b18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46c7b50, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46c7b90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46c7bc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Modulus, addr 0x46c79a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Modulus(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Modulus, addr 0x46c79e4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Modulus(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46c7a18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Modulus(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Multiply, addr 0x46c77c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Multiply(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Multiply, addr 0x46c77f4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Multiply(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46c7818, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Multiply(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_OnesComplement, addr 0x46c7f28, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_OnesComplement(::Unity::Mathematics::int4 val);

  /// @brief Method op_RightShift, addr 0x46c7da4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_RightShift(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46c78b8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Subtraction(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_Subtraction, addr 0x46c78e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Subtraction(::Unity::Mathematics::int4 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46c7908, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46c7d60, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_UnaryNegation(::Unity::Mathematics::int4 val);

  /// @brief Method op_UnaryPlus, addr 0x46c7d7c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 op_UnaryPlus(::Unity::Mathematics::int4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int4 value);

  /// @brief Method set_Item, addr 0x46c9ff4, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

  /// @brief Method set_wx, addr 0x46c9f90, size 0x10, virtual false, abstract: false, final false
  inline void set_wx(::Unity::Mathematics::int2 value);

  /// @brief Method set_wxy, addr 0x46c9cf8, size 0x10, virtual false, abstract: false, final false
  inline void set_wxy(::Unity::Mathematics::int3 value);

  /// @brief Method set_wxyz, addr 0x46c92e0, size 0x14, virtual false, abstract: false, final false
  inline void set_wxyz(::Unity::Mathematics::int4 value);

  /// @brief Method set_wxz, addr 0x46c9d1c, size 0x10, virtual false, abstract: false, final false
  inline void set_wxz(::Unity::Mathematics::int3 value);

  /// @brief Method set_wxzy, addr 0x46c9338, size 0x14, virtual false, abstract: false, final false
  inline void set_wxzy(::Unity::Mathematics::int4 value);

  /// @brief Method set_wy, addr 0x46c9fb4, size 0x10, virtual false, abstract: false, final false
  inline void set_wy(::Unity::Mathematics::int2 value);

  /// @brief Method set_wyx, addr 0x46c9d54, size 0x10, virtual false, abstract: false, final false
  inline void set_wyx(::Unity::Mathematics::int3 value);

  /// @brief Method set_wyxz, addr 0x46c9428, size 0x14, virtual false, abstract: false, final false
  inline void set_wyxz(::Unity::Mathematics::int4 value);

  /// @brief Method set_wyz, addr 0x46c9d8c, size 0x10, virtual false, abstract: false, final false
  inline void set_wyz(::Unity::Mathematics::int3 value);

  /// @brief Method set_wyzx, addr 0x46c94cc, size 0x14, virtual false, abstract: false, final false
  inline void set_wyzx(::Unity::Mathematics::int4 value);

  /// @brief Method set_wz, addr 0x46c9fd4, size 0xc, virtual false, abstract: false, final false
  inline void set_wz(::Unity::Mathematics::int2 value);

  /// @brief Method set_wzx, addr 0x46c9dc4, size 0x10, virtual false, abstract: false, final false
  inline void set_wzx(::Unity::Mathematics::int3 value);

  /// @brief Method set_wzxy, addr 0x46c95b8, size 0x14, virtual false, abstract: false, final false
  inline void set_wzxy(::Unity::Mathematics::int4 value);

  /// @brief Method set_wzy, addr 0x46c9de8, size 0x10, virtual false, abstract: false, final false
  inline void set_wzy(::Unity::Mathematics::int3 value);

  /// @brief Method set_wzyx, addr 0x46c9610, size 0x14, virtual false, abstract: false, final false
  inline void set_wzyx(::Unity::Mathematics::int4 value);

  /// @brief Method set_xw, addr 0x46c9eb4, size 0x10, virtual false, abstract: false, final false
  inline void set_xw(::Unity::Mathematics::int2 value);

  /// @brief Method set_xwy, addr 0x46c99ac, size 0x10, virtual false, abstract: false, final false
  inline void set_xwy(::Unity::Mathematics::int3 value);

  /// @brief Method set_xwyz, addr 0x46c8554, size 0x14, virtual false, abstract: false, final false
  inline void set_xwyz(::Unity::Mathematics::int4 value);

  /// @brief Method set_xwz, addr 0x46c99d0, size 0x10, virtual false, abstract: false, final false
  inline void set_xwz(::Unity::Mathematics::int3 value);

  /// @brief Method set_xwzy, addr 0x46c85ac, size 0x14, virtual false, abstract: false, final false
  inline void set_xwzy(::Unity::Mathematics::int4 value);

  /// @brief Method set_xy, addr 0x46c9e74, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::int2 value);

  /// @brief Method set_xyw, addr 0x46c9904, size 0x10, virtual false, abstract: false, final false
  inline void set_xyw(::Unity::Mathematics::int3 value);

  /// @brief Method set_xywz, addr 0x46c82d8, size 0x14, virtual false, abstract: false, final false
  inline void set_xywz(::Unity::Mathematics::int4 value);

  /// @brief Method set_xyz, addr 0x46c98e8, size 0x10, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::int3 value);

  /// @brief Method set_xyzw, addr 0x46c8288, size 0x14, virtual false, abstract: false, final false
  inline void set_xyzw(::Unity::Mathematics::int4 value);

  /// @brief Method set_xz, addr 0x46c9e90, size 0x10, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::int2 value);

  /// @brief Method set_xzw, addr 0x46c9974, size 0x10, virtual false, abstract: false, final false
  inline void set_xzw(::Unity::Mathematics::int3 value);

  /// @brief Method set_xzwy, addr 0x46c8464, size 0x14, virtual false, abstract: false, final false
  inline void set_xzwy(::Unity::Mathematics::int4 value);

  /// @brief Method set_xzy, addr 0x46c993c, size 0x10, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::int3 value);

  /// @brief Method set_xzyw, addr 0x46c83c0, size 0x14, virtual false, abstract: false, final false
  inline void set_xzyw(::Unity::Mathematics::int4 value);

  /// @brief Method set_yw, addr 0x46c9f10, size 0x10, virtual false, abstract: false, final false
  inline void set_yw(::Unity::Mathematics::int2 value);

  /// @brief Method set_ywx, addr 0x46c9b08, size 0x10, virtual false, abstract: false, final false
  inline void set_ywx(::Unity::Mathematics::int3 value);

  /// @brief Method set_ywxz, addr 0x46c8aec, size 0x14, virtual false, abstract: false, final false
  inline void set_ywxz(::Unity::Mathematics::int4 value);

  /// @brief Method set_ywz, addr 0x46c9b40, size 0x10, virtual false, abstract: false, final false
  inline void set_ywz(::Unity::Mathematics::int3 value);

  /// @brief Method set_ywzx, addr 0x46c8b94, size 0x14, virtual false, abstract: false, final false
  inline void set_ywzx(::Unity::Mathematics::int4 value);

  /// @brief Method set_yx, addr 0x46c9ed4, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::int2 value);

  /// @brief Method set_yxw, addr 0x46c9a4c, size 0x10, virtual false, abstract: false, final false
  inline void set_yxw(::Unity::Mathematics::int3 value);

  /// @brief Method set_yxwz, addr 0x46c87b4, size 0x14, virtual false, abstract: false, final false
  inline void set_yxwz(::Unity::Mathematics::int4 value);

  /// @brief Method set_yxz, addr 0x46c9a28, size 0x10, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::int3 value);

  /// @brief Method set_yxzw, addr 0x46c875c, size 0x14, virtual false, abstract: false, final false
  inline void set_yxzw(::Unity::Mathematics::int4 value);

  /// @brief Method set_yz, addr 0x46c9ef4, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::int2 value);

  /// @brief Method set_yzw, addr 0x46c9ae4, size 0x10, virtual false, abstract: false, final false
  inline void set_yzw(::Unity::Mathematics::int3 value);

  /// @brief Method set_yzwx, addr 0x46c8a54, size 0x14, virtual false, abstract: false, final false
  inline void set_yzwx(::Unity::Mathematics::int4 value);

  /// @brief Method set_yzx, addr 0x46c9aac, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::int3 value);

  /// @brief Method set_yzxw, addr 0x46c8978, size 0x14, virtual false, abstract: false, final false
  inline void set_yzxw(::Unity::Mathematics::int4 value);

  /// @brief Method set_zw, addr 0x46c9f74, size 0x8, virtual false, abstract: false, final false
  inline void set_zw(::Unity::Mathematics::int2 value);

  /// @brief Method set_zwx, addr 0x46c9c8c, size 0xc, virtual false, abstract: false, final false
  inline void set_zwx(::Unity::Mathematics::int3 value);

  /// @brief Method set_zwxy, addr 0x46c90f0, size 0x10, virtual false, abstract: false, final false
  inline void set_zwxy(::Unity::Mathematics::int4 value);

  /// @brief Method set_zwy, addr 0x46c9ca4, size 0xc, virtual false, abstract: false, final false
  inline void set_zwy(::Unity::Mathematics::int3 value);

  /// @brief Method set_zwyx, addr 0x46c913c, size 0x10, virtual false, abstract: false, final false
  inline void set_zwyx(::Unity::Mathematics::int4 value);

  /// @brief Method set_zx, addr 0x46c9f34, size 0x10, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::int2 value);

  /// @brief Method set_zxw, addr 0x46c9bc4, size 0x10, virtual false, abstract: false, final false
  inline void set_zxw(::Unity::Mathematics::int3 value);

  /// @brief Method set_zxwy, addr 0x46c8db0, size 0x14, virtual false, abstract: false, final false
  inline void set_zxwy(::Unity::Mathematics::int4 value);

  /// @brief Method set_zxy, addr 0x46c9b8c, size 0x10, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::int3 value);

  /// @brief Method set_zxyw, addr 0x46c8d08, size 0x14, virtual false, abstract: false, final false
  inline void set_zxyw(::Unity::Mathematics::int4 value);

  /// @brief Method set_zy, addr 0x46c9f54, size 0xc, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::int2 value);

  /// @brief Method set_zyw, addr 0x46c9c2c, size 0x10, virtual false, abstract: false, final false
  inline void set_zyw(::Unity::Mathematics::int3 value);

  /// @brief Method set_zywx, addr 0x46c8f38, size 0x14, virtual false, abstract: false, final false
  inline void set_zywx(::Unity::Mathematics::int4 value);

  /// @brief Method set_zyx, addr 0x46c9be8, size 0x10, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::int3 value);

  /// @brief Method set_zyxw, addr 0x46c8e50, size 0x18, virtual false, abstract: false, final false
  inline void set_zyxw(::Unity::Mathematics::int4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int4();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr int4(int32_t x, int32_t y, int32_t z, int32_t w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10007 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  int32_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  int32_t w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, w) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int4, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::int4_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int4_DebuggerProxy*, "Unity.Mathematics", "int4/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int4, "Unity.Mathematics", "int4");
