#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool4)
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
class bool4_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class bool4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool4;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::bool4_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::bool4);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.bool4/DebuggerProxy
class CORDL_TYPE bool4_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field w, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w)) bool w;

  /// @brief Field x, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) bool x;

  /// @brief Field y, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) bool y;

  /// @brief Field z, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) bool z;

  static inline ::Unity::Mathematics::bool4_DebuggerProxy* New_ctor(::Unity::Mathematics::bool4 v);

  constexpr bool const& __cordl_internal_get_w() const;

  constexpr bool& __cordl_internal_get_w();

  constexpr bool const& __cordl_internal_get_x() const;

  constexpr bool& __cordl_internal_get_x();

  constexpr bool const& __cordl_internal_get_y() const;

  constexpr bool& __cordl_internal_get_y();

  constexpr bool const& __cordl_internal_get_z() const;

  constexpr bool& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_w(bool value);

  constexpr void __cordl_internal_set_x(bool value);

  constexpr void __cordl_internal_set_y(bool value);

  constexpr void __cordl_internal_set_z(bool value);

  /// @brief Method .ctor, addr 0x4670d7c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr bool4_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "bool4_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  bool4_DebuggerProxy(bool4_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "bool4_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  bool4_DebuggerProxy(bool4_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9954 };

  /// @brief Field x, offset: 0x10, size: 0x1, def value: None
  bool ___x;

  /// @brief Field y, offset: 0x11, size: 0x1, def value: None
  bool ___y;

  /// @brief Field z, offset: 0x12, size: 0x1, def value: None
  bool ___z;

  /// @brief Field w, offset: 0x13, size: 0x1, def value: None
  bool ___w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool4_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4_DebuggerProxy, ___y) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4_DebuggerProxy, ___z) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4_DebuggerProxy, ___w) == 0x13, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool4_DebuggerProxy, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies System.IEquatable`1<T>
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool4
struct CORDL_TYPE bool4 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::bool4_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_ww)) ::Unity::Mathematics::bool2 ww;

  __declspec(property(get = get_www)) ::Unity::Mathematics::bool3 www;

  __declspec(property(get = get_wwww)) ::Unity::Mathematics::bool4 wwww;

  __declspec(property(get = get_wwwx)) ::Unity::Mathematics::bool4 wwwx;

  __declspec(property(get = get_wwwy)) ::Unity::Mathematics::bool4 wwwy;

  __declspec(property(get = get_wwwz)) ::Unity::Mathematics::bool4 wwwz;

  __declspec(property(get = get_wwx)) ::Unity::Mathematics::bool3 wwx;

  __declspec(property(get = get_wwxw)) ::Unity::Mathematics::bool4 wwxw;

  __declspec(property(get = get_wwxx)) ::Unity::Mathematics::bool4 wwxx;

  __declspec(property(get = get_wwxy)) ::Unity::Mathematics::bool4 wwxy;

  __declspec(property(get = get_wwxz)) ::Unity::Mathematics::bool4 wwxz;

  __declspec(property(get = get_wwy)) ::Unity::Mathematics::bool3 wwy;

  __declspec(property(get = get_wwyw)) ::Unity::Mathematics::bool4 wwyw;

  __declspec(property(get = get_wwyx)) ::Unity::Mathematics::bool4 wwyx;

  __declspec(property(get = get_wwyy)) ::Unity::Mathematics::bool4 wwyy;

  __declspec(property(get = get_wwyz)) ::Unity::Mathematics::bool4 wwyz;

  __declspec(property(get = get_wwz)) ::Unity::Mathematics::bool3 wwz;

  __declspec(property(get = get_wwzw)) ::Unity::Mathematics::bool4 wwzw;

  __declspec(property(get = get_wwzx)) ::Unity::Mathematics::bool4 wwzx;

  __declspec(property(get = get_wwzy)) ::Unity::Mathematics::bool4 wwzy;

  __declspec(property(get = get_wwzz)) ::Unity::Mathematics::bool4 wwzz;

  __declspec(property(get = get_wx, put = set_wx)) ::Unity::Mathematics::bool2 wx;

  __declspec(property(get = get_wxw)) ::Unity::Mathematics::bool3 wxw;

  __declspec(property(get = get_wxww)) ::Unity::Mathematics::bool4 wxww;

  __declspec(property(get = get_wxwx)) ::Unity::Mathematics::bool4 wxwx;

  __declspec(property(get = get_wxwy)) ::Unity::Mathematics::bool4 wxwy;

  __declspec(property(get = get_wxwz)) ::Unity::Mathematics::bool4 wxwz;

  __declspec(property(get = get_wxx)) ::Unity::Mathematics::bool3 wxx;

  __declspec(property(get = get_wxxw)) ::Unity::Mathematics::bool4 wxxw;

  __declspec(property(get = get_wxxx)) ::Unity::Mathematics::bool4 wxxx;

  __declspec(property(get = get_wxxy)) ::Unity::Mathematics::bool4 wxxy;

  __declspec(property(get = get_wxxz)) ::Unity::Mathematics::bool4 wxxz;

  __declspec(property(get = get_wxy, put = set_wxy)) ::Unity::Mathematics::bool3 wxy;

  __declspec(property(get = get_wxyw)) ::Unity::Mathematics::bool4 wxyw;

  __declspec(property(get = get_wxyx)) ::Unity::Mathematics::bool4 wxyx;

  __declspec(property(get = get_wxyy)) ::Unity::Mathematics::bool4 wxyy;

  __declspec(property(get = get_wxyz, put = set_wxyz)) ::Unity::Mathematics::bool4 wxyz;

  __declspec(property(get = get_wxz, put = set_wxz)) ::Unity::Mathematics::bool3 wxz;

  __declspec(property(get = get_wxzw)) ::Unity::Mathematics::bool4 wxzw;

  __declspec(property(get = get_wxzx)) ::Unity::Mathematics::bool4 wxzx;

  __declspec(property(get = get_wxzy, put = set_wxzy)) ::Unity::Mathematics::bool4 wxzy;

  __declspec(property(get = get_wxzz)) ::Unity::Mathematics::bool4 wxzz;

  __declspec(property(get = get_wy, put = set_wy)) ::Unity::Mathematics::bool2 wy;

  __declspec(property(get = get_wyw)) ::Unity::Mathematics::bool3 wyw;

  __declspec(property(get = get_wyww)) ::Unity::Mathematics::bool4 wyww;

  __declspec(property(get = get_wywx)) ::Unity::Mathematics::bool4 wywx;

  __declspec(property(get = get_wywy)) ::Unity::Mathematics::bool4 wywy;

  __declspec(property(get = get_wywz)) ::Unity::Mathematics::bool4 wywz;

  __declspec(property(get = get_wyx, put = set_wyx)) ::Unity::Mathematics::bool3 wyx;

  __declspec(property(get = get_wyxw)) ::Unity::Mathematics::bool4 wyxw;

  __declspec(property(get = get_wyxx)) ::Unity::Mathematics::bool4 wyxx;

  __declspec(property(get = get_wyxy)) ::Unity::Mathematics::bool4 wyxy;

  __declspec(property(get = get_wyxz, put = set_wyxz)) ::Unity::Mathematics::bool4 wyxz;

  __declspec(property(get = get_wyy)) ::Unity::Mathematics::bool3 wyy;

  __declspec(property(get = get_wyyw)) ::Unity::Mathematics::bool4 wyyw;

  __declspec(property(get = get_wyyx)) ::Unity::Mathematics::bool4 wyyx;

  __declspec(property(get = get_wyyy)) ::Unity::Mathematics::bool4 wyyy;

  __declspec(property(get = get_wyyz)) ::Unity::Mathematics::bool4 wyyz;

  __declspec(property(get = get_wyz, put = set_wyz)) ::Unity::Mathematics::bool3 wyz;

  __declspec(property(get = get_wyzw)) ::Unity::Mathematics::bool4 wyzw;

  __declspec(property(get = get_wyzx, put = set_wyzx)) ::Unity::Mathematics::bool4 wyzx;

  __declspec(property(get = get_wyzy)) ::Unity::Mathematics::bool4 wyzy;

  __declspec(property(get = get_wyzz)) ::Unity::Mathematics::bool4 wyzz;

  __declspec(property(get = get_wz, put = set_wz)) ::Unity::Mathematics::bool2 wz;

  __declspec(property(get = get_wzw)) ::Unity::Mathematics::bool3 wzw;

  __declspec(property(get = get_wzww)) ::Unity::Mathematics::bool4 wzww;

  __declspec(property(get = get_wzwx)) ::Unity::Mathematics::bool4 wzwx;

  __declspec(property(get = get_wzwy)) ::Unity::Mathematics::bool4 wzwy;

  __declspec(property(get = get_wzwz)) ::Unity::Mathematics::bool4 wzwz;

  __declspec(property(get = get_wzx, put = set_wzx)) ::Unity::Mathematics::bool3 wzx;

  __declspec(property(get = get_wzxw)) ::Unity::Mathematics::bool4 wzxw;

  __declspec(property(get = get_wzxx)) ::Unity::Mathematics::bool4 wzxx;

  __declspec(property(get = get_wzxy, put = set_wzxy)) ::Unity::Mathematics::bool4 wzxy;

  __declspec(property(get = get_wzxz)) ::Unity::Mathematics::bool4 wzxz;

  __declspec(property(get = get_wzy, put = set_wzy)) ::Unity::Mathematics::bool3 wzy;

  __declspec(property(get = get_wzyw)) ::Unity::Mathematics::bool4 wzyw;

  __declspec(property(get = get_wzyx, put = set_wzyx)) ::Unity::Mathematics::bool4 wzyx;

  __declspec(property(get = get_wzyy)) ::Unity::Mathematics::bool4 wzyy;

  __declspec(property(get = get_wzyz)) ::Unity::Mathematics::bool4 wzyz;

  __declspec(property(get = get_wzz)) ::Unity::Mathematics::bool3 wzz;

  __declspec(property(get = get_wzzw)) ::Unity::Mathematics::bool4 wzzw;

  __declspec(property(get = get_wzzx)) ::Unity::Mathematics::bool4 wzzx;

  __declspec(property(get = get_wzzy)) ::Unity::Mathematics::bool4 wzzy;

  __declspec(property(get = get_wzzz)) ::Unity::Mathematics::bool4 wzzz;

  __declspec(property(get = get_xw, put = set_xw)) ::Unity::Mathematics::bool2 xw;

  __declspec(property(get = get_xww)) ::Unity::Mathematics::bool3 xww;

  __declspec(property(get = get_xwww)) ::Unity::Mathematics::bool4 xwww;

  __declspec(property(get = get_xwwx)) ::Unity::Mathematics::bool4 xwwx;

  __declspec(property(get = get_xwwy)) ::Unity::Mathematics::bool4 xwwy;

  __declspec(property(get = get_xwwz)) ::Unity::Mathematics::bool4 xwwz;

  __declspec(property(get = get_xwx)) ::Unity::Mathematics::bool3 xwx;

  __declspec(property(get = get_xwxw)) ::Unity::Mathematics::bool4 xwxw;

  __declspec(property(get = get_xwxx)) ::Unity::Mathematics::bool4 xwxx;

  __declspec(property(get = get_xwxy)) ::Unity::Mathematics::bool4 xwxy;

  __declspec(property(get = get_xwxz)) ::Unity::Mathematics::bool4 xwxz;

  __declspec(property(get = get_xwy, put = set_xwy)) ::Unity::Mathematics::bool3 xwy;

  __declspec(property(get = get_xwyw)) ::Unity::Mathematics::bool4 xwyw;

  __declspec(property(get = get_xwyx)) ::Unity::Mathematics::bool4 xwyx;

  __declspec(property(get = get_xwyy)) ::Unity::Mathematics::bool4 xwyy;

  __declspec(property(get = get_xwyz, put = set_xwyz)) ::Unity::Mathematics::bool4 xwyz;

  __declspec(property(get = get_xwz, put = set_xwz)) ::Unity::Mathematics::bool3 xwz;

  __declspec(property(get = get_xwzw)) ::Unity::Mathematics::bool4 xwzw;

  __declspec(property(get = get_xwzx)) ::Unity::Mathematics::bool4 xwzx;

  __declspec(property(get = get_xwzy, put = set_xwzy)) ::Unity::Mathematics::bool4 xwzy;

  __declspec(property(get = get_xwzz)) ::Unity::Mathematics::bool4 xwzz;

  __declspec(property(get = get_xx)) ::Unity::Mathematics::bool2 xx;

  __declspec(property(get = get_xxw)) ::Unity::Mathematics::bool3 xxw;

  __declspec(property(get = get_xxww)) ::Unity::Mathematics::bool4 xxww;

  __declspec(property(get = get_xxwx)) ::Unity::Mathematics::bool4 xxwx;

  __declspec(property(get = get_xxwy)) ::Unity::Mathematics::bool4 xxwy;

  __declspec(property(get = get_xxwz)) ::Unity::Mathematics::bool4 xxwz;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::bool3 xxx;

  __declspec(property(get = get_xxxw)) ::Unity::Mathematics::bool4 xxxw;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::bool4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::bool4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::bool4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::bool3 xxy;

  __declspec(property(get = get_xxyw)) ::Unity::Mathematics::bool4 xxyw;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::bool4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::bool4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::bool4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::bool3 xxz;

  __declspec(property(get = get_xxzw)) ::Unity::Mathematics::bool4 xxzw;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::bool4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::bool4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::bool4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::bool2 xy;

  __declspec(property(get = get_xyw, put = set_xyw)) ::Unity::Mathematics::bool3 xyw;

  __declspec(property(get = get_xyww)) ::Unity::Mathematics::bool4 xyww;

  __declspec(property(get = get_xywx)) ::Unity::Mathematics::bool4 xywx;

  __declspec(property(get = get_xywy)) ::Unity::Mathematics::bool4 xywy;

  __declspec(property(get = get_xywz, put = set_xywz)) ::Unity::Mathematics::bool4 xywz;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::bool3 xyx;

  __declspec(property(get = get_xyxw)) ::Unity::Mathematics::bool4 xyxw;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::bool4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::bool4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::bool4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::bool3 xyy;

  __declspec(property(get = get_xyyw)) ::Unity::Mathematics::bool4 xyyw;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::bool4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::bool4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::bool4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::bool3 xyz;

  __declspec(property(get = get_xyzw, put = set_xyzw)) ::Unity::Mathematics::bool4 xyzw;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::bool4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::bool4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::bool4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::bool2 xz;

  __declspec(property(get = get_xzw, put = set_xzw)) ::Unity::Mathematics::bool3 xzw;

  __declspec(property(get = get_xzww)) ::Unity::Mathematics::bool4 xzww;

  __declspec(property(get = get_xzwx)) ::Unity::Mathematics::bool4 xzwx;

  __declspec(property(get = get_xzwy, put = set_xzwy)) ::Unity::Mathematics::bool4 xzwy;

  __declspec(property(get = get_xzwz)) ::Unity::Mathematics::bool4 xzwz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::bool3 xzx;

  __declspec(property(get = get_xzxw)) ::Unity::Mathematics::bool4 xzxw;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::bool4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::bool4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::bool4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::bool3 xzy;

  __declspec(property(get = get_xzyw, put = set_xzyw)) ::Unity::Mathematics::bool4 xzyw;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::bool4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::bool4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::bool4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::bool3 xzz;

  __declspec(property(get = get_xzzw)) ::Unity::Mathematics::bool4 xzzw;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::bool4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::bool4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::bool4 xzzz;

  __declspec(property(get = get_yw, put = set_yw)) ::Unity::Mathematics::bool2 yw;

  __declspec(property(get = get_yww)) ::Unity::Mathematics::bool3 yww;

  __declspec(property(get = get_ywww)) ::Unity::Mathematics::bool4 ywww;

  __declspec(property(get = get_ywwx)) ::Unity::Mathematics::bool4 ywwx;

  __declspec(property(get = get_ywwy)) ::Unity::Mathematics::bool4 ywwy;

  __declspec(property(get = get_ywwz)) ::Unity::Mathematics::bool4 ywwz;

  __declspec(property(get = get_ywx, put = set_ywx)) ::Unity::Mathematics::bool3 ywx;

  __declspec(property(get = get_ywxw)) ::Unity::Mathematics::bool4 ywxw;

  __declspec(property(get = get_ywxx)) ::Unity::Mathematics::bool4 ywxx;

  __declspec(property(get = get_ywxy)) ::Unity::Mathematics::bool4 ywxy;

  __declspec(property(get = get_ywxz, put = set_ywxz)) ::Unity::Mathematics::bool4 ywxz;

  __declspec(property(get = get_ywy)) ::Unity::Mathematics::bool3 ywy;

  __declspec(property(get = get_ywyw)) ::Unity::Mathematics::bool4 ywyw;

  __declspec(property(get = get_ywyx)) ::Unity::Mathematics::bool4 ywyx;

  __declspec(property(get = get_ywyy)) ::Unity::Mathematics::bool4 ywyy;

  __declspec(property(get = get_ywyz)) ::Unity::Mathematics::bool4 ywyz;

  __declspec(property(get = get_ywz, put = set_ywz)) ::Unity::Mathematics::bool3 ywz;

  __declspec(property(get = get_ywzw)) ::Unity::Mathematics::bool4 ywzw;

  __declspec(property(get = get_ywzx, put = set_ywzx)) ::Unity::Mathematics::bool4 ywzx;

  __declspec(property(get = get_ywzy)) ::Unity::Mathematics::bool4 ywzy;

  __declspec(property(get = get_ywzz)) ::Unity::Mathematics::bool4 ywzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::bool2 yx;

  __declspec(property(get = get_yxw, put = set_yxw)) ::Unity::Mathematics::bool3 yxw;

  __declspec(property(get = get_yxww)) ::Unity::Mathematics::bool4 yxww;

  __declspec(property(get = get_yxwx)) ::Unity::Mathematics::bool4 yxwx;

  __declspec(property(get = get_yxwy)) ::Unity::Mathematics::bool4 yxwy;

  __declspec(property(get = get_yxwz, put = set_yxwz)) ::Unity::Mathematics::bool4 yxwz;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::bool3 yxx;

  __declspec(property(get = get_yxxw)) ::Unity::Mathematics::bool4 yxxw;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::bool4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::bool4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::bool4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::bool3 yxy;

  __declspec(property(get = get_yxyw)) ::Unity::Mathematics::bool4 yxyw;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::bool4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::bool4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::bool4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::bool3 yxz;

  __declspec(property(get = get_yxzw, put = set_yxzw)) ::Unity::Mathematics::bool4 yxzw;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::bool4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::bool4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::bool4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::bool2 yy;

  __declspec(property(get = get_yyw)) ::Unity::Mathematics::bool3 yyw;

  __declspec(property(get = get_yyww)) ::Unity::Mathematics::bool4 yyww;

  __declspec(property(get = get_yywx)) ::Unity::Mathematics::bool4 yywx;

  __declspec(property(get = get_yywy)) ::Unity::Mathematics::bool4 yywy;

  __declspec(property(get = get_yywz)) ::Unity::Mathematics::bool4 yywz;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::bool3 yyx;

  __declspec(property(get = get_yyxw)) ::Unity::Mathematics::bool4 yyxw;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::bool4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::bool4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::bool4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::bool3 yyy;

  __declspec(property(get = get_yyyw)) ::Unity::Mathematics::bool4 yyyw;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::bool4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::bool4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::bool4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::bool3 yyz;

  __declspec(property(get = get_yyzw)) ::Unity::Mathematics::bool4 yyzw;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::bool4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::bool4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::bool4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::bool2 yz;

  __declspec(property(get = get_yzw, put = set_yzw)) ::Unity::Mathematics::bool3 yzw;

  __declspec(property(get = get_yzww)) ::Unity::Mathematics::bool4 yzww;

  __declspec(property(get = get_yzwx, put = set_yzwx)) ::Unity::Mathematics::bool4 yzwx;

  __declspec(property(get = get_yzwy)) ::Unity::Mathematics::bool4 yzwy;

  __declspec(property(get = get_yzwz)) ::Unity::Mathematics::bool4 yzwz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::bool3 yzx;

  __declspec(property(get = get_yzxw, put = set_yzxw)) ::Unity::Mathematics::bool4 yzxw;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::bool4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::bool4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::bool4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::bool3 yzy;

  __declspec(property(get = get_yzyw)) ::Unity::Mathematics::bool4 yzyw;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::bool4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::bool4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::bool4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::bool3 yzz;

  __declspec(property(get = get_yzzw)) ::Unity::Mathematics::bool4 yzzw;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::bool4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::bool4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::bool4 yzzz;

  __declspec(property(get = get_zw, put = set_zw)) ::Unity::Mathematics::bool2 zw;

  __declspec(property(get = get_zww)) ::Unity::Mathematics::bool3 zww;

  __declspec(property(get = get_zwww)) ::Unity::Mathematics::bool4 zwww;

  __declspec(property(get = get_zwwx)) ::Unity::Mathematics::bool4 zwwx;

  __declspec(property(get = get_zwwy)) ::Unity::Mathematics::bool4 zwwy;

  __declspec(property(get = get_zwwz)) ::Unity::Mathematics::bool4 zwwz;

  __declspec(property(get = get_zwx, put = set_zwx)) ::Unity::Mathematics::bool3 zwx;

  __declspec(property(get = get_zwxw)) ::Unity::Mathematics::bool4 zwxw;

  __declspec(property(get = get_zwxx)) ::Unity::Mathematics::bool4 zwxx;

  __declspec(property(get = get_zwxy, put = set_zwxy)) ::Unity::Mathematics::bool4 zwxy;

  __declspec(property(get = get_zwxz)) ::Unity::Mathematics::bool4 zwxz;

  __declspec(property(get = get_zwy, put = set_zwy)) ::Unity::Mathematics::bool3 zwy;

  __declspec(property(get = get_zwyw)) ::Unity::Mathematics::bool4 zwyw;

  __declspec(property(get = get_zwyx, put = set_zwyx)) ::Unity::Mathematics::bool4 zwyx;

  __declspec(property(get = get_zwyy)) ::Unity::Mathematics::bool4 zwyy;

  __declspec(property(get = get_zwyz)) ::Unity::Mathematics::bool4 zwyz;

  __declspec(property(get = get_zwz)) ::Unity::Mathematics::bool3 zwz;

  __declspec(property(get = get_zwzw)) ::Unity::Mathematics::bool4 zwzw;

  __declspec(property(get = get_zwzx)) ::Unity::Mathematics::bool4 zwzx;

  __declspec(property(get = get_zwzy)) ::Unity::Mathematics::bool4 zwzy;

  __declspec(property(get = get_zwzz)) ::Unity::Mathematics::bool4 zwzz;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::bool2 zx;

  __declspec(property(get = get_zxw, put = set_zxw)) ::Unity::Mathematics::bool3 zxw;

  __declspec(property(get = get_zxww)) ::Unity::Mathematics::bool4 zxww;

  __declspec(property(get = get_zxwx)) ::Unity::Mathematics::bool4 zxwx;

  __declspec(property(get = get_zxwy, put = set_zxwy)) ::Unity::Mathematics::bool4 zxwy;

  __declspec(property(get = get_zxwz)) ::Unity::Mathematics::bool4 zxwz;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::bool3 zxx;

  __declspec(property(get = get_zxxw)) ::Unity::Mathematics::bool4 zxxw;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::bool4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::bool4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::bool4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::bool3 zxy;

  __declspec(property(get = get_zxyw, put = set_zxyw)) ::Unity::Mathematics::bool4 zxyw;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::bool4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::bool4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::bool4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::bool3 zxz;

  __declspec(property(get = get_zxzw)) ::Unity::Mathematics::bool4 zxzw;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::bool4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::bool4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::bool4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::bool2 zy;

  __declspec(property(get = get_zyw, put = set_zyw)) ::Unity::Mathematics::bool3 zyw;

  __declspec(property(get = get_zyww)) ::Unity::Mathematics::bool4 zyww;

  __declspec(property(get = get_zywx, put = set_zywx)) ::Unity::Mathematics::bool4 zywx;

  __declspec(property(get = get_zywy)) ::Unity::Mathematics::bool4 zywy;

  __declspec(property(get = get_zywz)) ::Unity::Mathematics::bool4 zywz;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::bool3 zyx;

  __declspec(property(get = get_zyxw, put = set_zyxw)) ::Unity::Mathematics::bool4 zyxw;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::bool4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::bool4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::bool4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::bool3 zyy;

  __declspec(property(get = get_zyyw)) ::Unity::Mathematics::bool4 zyyw;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::bool4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::bool4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::bool4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::bool3 zyz;

  __declspec(property(get = get_zyzw)) ::Unity::Mathematics::bool4 zyzw;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::bool4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::bool4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::bool4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::bool2 zz;

  __declspec(property(get = get_zzw)) ::Unity::Mathematics::bool3 zzw;

  __declspec(property(get = get_zzww)) ::Unity::Mathematics::bool4 zzww;

  __declspec(property(get = get_zzwx)) ::Unity::Mathematics::bool4 zzwx;

  __declspec(property(get = get_zzwy)) ::Unity::Mathematics::bool4 zzwy;

  __declspec(property(get = get_zzwz)) ::Unity::Mathematics::bool4 zzwz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::bool3 zzx;

  __declspec(property(get = get_zzxw)) ::Unity::Mathematics::bool4 zzxw;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::bool4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::bool4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::bool4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::bool3 zzy;

  __declspec(property(get = get_zzyw)) ::Unity::Mathematics::bool4 zzyw;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::bool4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::bool4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::bool4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::bool3 zzz;

  __declspec(property(get = get_zzzw)) ::Unity::Mathematics::bool4 zzzw;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::bool4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::bool4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::bool4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool4>*();

  /// @brief Method Equals, addr 0x465ec38, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x465ebec, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool4 rhs);

  /// @brief Method GetHashCode, addr 0x465ece4, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x465ed38, size 0x12a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x465bd6c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x465bc4c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool x, bool y, bool z, bool w);

  /// @brief Method .ctor, addr 0x465bc70, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool x, bool y, ::Unity::Mathematics::bool2 zw);

  /// @brief Method .ctor, addr 0x465bc94, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool x, ::Unity::Mathematics::bool2 yz, bool w);

  /// @brief Method .ctor, addr 0x465bcb8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool x, ::Unity::Mathematics::bool3 yzw);

  /// @brief Method .ctor, addr 0x465bcdc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 xy, bool z, bool w);

  /// @brief Method .ctor, addr 0x465bd00, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 xy, ::Unity::Mathematics::bool2 zw);

  /// @brief Method .ctor, addr 0x465bd24, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 xyz, bool w);

  /// @brief Method .ctor, addr 0x465bd48, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 xyzw);

  /// @brief Method get_Item, addr 0x465ebd0, size 0x10, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Method get_ww, addr 0x465ebc4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_ww();

  /// @brief Method get_www, addr 0x465e9dc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_www();

  /// @brief Method get_wwww, addr 0x465e148, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwww();

  /// @brief Method get_wwwx, addr 0x465e0f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwwx();

  /// @brief Method get_wwwy, addr 0x465e110, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwwy();

  /// @brief Method get_wwwz, addr 0x465e12c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwwz();

  /// @brief Method get_wwx, addr 0x465e994, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wwx();

  /// @brief Method get_wwxw, addr 0x465dfe8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwxw();

  /// @brief Method get_wwxx, addr 0x465df8c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwxx();

  /// @brief Method get_wwxy, addr 0x465dfa8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwxy();

  /// @brief Method get_wwxz, addr 0x465dfc8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwxz();

  /// @brief Method get_wwy, addr 0x465e9ac, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wwy();

  /// @brief Method get_wwyw, addr 0x465e060, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwyw();

  /// @brief Method get_wwyx, addr 0x465e004, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwyx();

  /// @brief Method get_wwyy, addr 0x465e024, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwyy();

  /// @brief Method get_wwyz, addr 0x465e040, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwyz();

  /// @brief Method get_wwz, addr 0x465e9c4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wwz();

  /// @brief Method get_wwzw, addr 0x465e0d8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwzw();

  /// @brief Method get_wwzx, addr 0x465e07c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwzx();

  /// @brief Method get_wwzy, addr 0x465e09c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwzy();

  /// @brief Method get_wwzz, addr 0x465e0bc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wwzz();

  /// @brief Method get_wx, addr 0x465eb50, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_wx();

  /// @brief Method get_wxw, addr 0x465e844, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wxw();

  /// @brief Method get_wxww, addr 0x465db10, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxww();

  /// @brief Method get_wxwx, addr 0x465dab4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxwx();

  /// @brief Method get_wxwy, addr 0x465dad0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxwy();

  /// @brief Method get_wxwz, addr 0x465daf0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxwz();

  /// @brief Method get_wxx, addr 0x465e7bc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wxx();

  /// @brief Method get_wxxw, addr 0x465d948, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxxw();

  /// @brief Method get_wxxx, addr 0x465d8ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxxx();

  /// @brief Method get_wxxy, addr 0x465d908, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxxy();

  /// @brief Method get_wxxz, addr 0x465d928, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxxz();

  /// @brief Method get_wxy, addr 0x465e7d4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wxy();

  /// @brief Method get_wxyw, addr 0x465d9ec, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxyw();

  /// @brief Method get_wxyx, addr 0x465d964, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxyx();

  /// @brief Method get_wxyy, addr 0x465d984, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxyy();

  /// @brief Method get_wxyz, addr 0x465d9a4, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxyz();

  /// @brief Method get_wxz, addr 0x465e80c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wxz();

  /// @brief Method get_wxzw, addr 0x465da94, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxzw();

  /// @brief Method get_wxzx, addr 0x465da0c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxzx();

  /// @brief Method get_wxzy, addr 0x465da2c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxzy();

  /// @brief Method get_wxzz, addr 0x465da74, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wxzz();

  /// @brief Method get_wy, addr 0x465eb78, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_wy();

  /// @brief Method get_wyw, addr 0x465e8e4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wyw();

  /// @brief Method get_wyww, addr 0x465dd50, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyww();

  /// @brief Method get_wywx, addr 0x465dcf4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wywx();

  /// @brief Method get_wywy, addr 0x465dd14, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wywy();

  /// @brief Method get_wywz, addr 0x465dd30, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wywz();

  /// @brief Method get_wyx, addr 0x465e85c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wyx();

  /// @brief Method get_wyxw, addr 0x465dbb4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyxw();

  /// @brief Method get_wyxx, addr 0x465db2c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyxx();

  /// @brief Method get_wyxy, addr 0x465db4c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyxy();

  /// @brief Method get_wyxz, addr 0x465db6c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyxz();

  /// @brief Method get_wyy, addr 0x465e894, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wyy();

  /// @brief Method get_wyyw, addr 0x465dc30, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyyw();

  /// @brief Method get_wyyx, addr 0x465dbd4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyyx();

  /// @brief Method get_wyyy, addr 0x465dbf4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyyy();

  /// @brief Method get_wyyz, addr 0x465dc10, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyyz();

  /// @brief Method get_wyz, addr 0x465e8ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wyz();

  /// @brief Method get_wyzw, addr 0x465dcd4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyzw();

  /// @brief Method get_wyzx, addr 0x465dc4c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyzx();

  /// @brief Method get_wyzy, addr 0x465dc94, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyzy();

  /// @brief Method get_wyzz, addr 0x465dcb4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wyzz();

  /// @brief Method get_wz, addr 0x465eba0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_wz();

  /// @brief Method get_wzw, addr 0x465e97c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wzw();

  /// @brief Method get_wzww, addr 0x465df70, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzww();

  /// @brief Method get_wzwx, addr 0x465df14, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzwx();

  /// @brief Method get_wzwy, addr 0x465df34, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzwy();

  /// @brief Method get_wzwz, addr 0x465df54, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzwz();

  /// @brief Method get_wzx, addr 0x465e8fc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wzx();

  /// @brief Method get_wzxw, addr 0x465ddec, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzxw();

  /// @brief Method get_wzxx, addr 0x465dd6c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzxx();

  /// @brief Method get_wzxy, addr 0x465dd88, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzxy();

  /// @brief Method get_wzxz, addr 0x465ddcc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzxz();

  /// @brief Method get_wzy, addr 0x465e930, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wzy();

  /// @brief Method get_wzyw, addr 0x465de7c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzyw();

  /// @brief Method get_wzyx, addr 0x465de0c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzyx();

  /// @brief Method get_wzyy, addr 0x465de40, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzyy();

  /// @brief Method get_wzyz, addr 0x465de5c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzyz();

  /// @brief Method get_wzz, addr 0x465e964, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_wzz();

  /// @brief Method get_wzzw, addr 0x465def8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzzw();

  /// @brief Method get_wzzx, addr 0x465de9c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzzx();

  /// @brief Method get_wzzy, addr 0x465debc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzzy();

  /// @brief Method get_wzzz, addr 0x465dedc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_wzzz();

  /// @brief Method get_xw, addr 0x465ea40, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xw();

  /// @brief Method get_xww, addr 0x465e36c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xww();

  /// @brief Method get_xwww, addr 0x465c818, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwww();

  /// @brief Method get_xwwx, addr 0x465c7bc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwwx();

  /// @brief Method get_xwwy, addr 0x465c7d8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwwy();

  /// @brief Method get_xwwz, addr 0x465c7f8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwwz();

  /// @brief Method get_xwx, addr 0x465e2e4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xwx();

  /// @brief Method get_xwxw, addr 0x465c650, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwxw();

  /// @brief Method get_xwxx, addr 0x465c5f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwxx();

  /// @brief Method get_xwxy, addr 0x465c610, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwxy();

  /// @brief Method get_xwxz, addr 0x465c630, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwxz();

  /// @brief Method get_xwy, addr 0x465e2fc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xwy();

  /// @brief Method get_xwyw, addr 0x465c6f4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwyw();

  /// @brief Method get_xwyx, addr 0x465c66c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwyx();

  /// @brief Method get_xwyy, addr 0x465c68c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwyy();

  /// @brief Method get_xwyz, addr 0x465c6ac, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwyz();

  /// @brief Method get_xwz, addr 0x465e334, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xwz();

  /// @brief Method get_xwzw, addr 0x465c79c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwzw();

  /// @brief Method get_xwzx, addr 0x465c714, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwzx();

  /// @brief Method get_xwzy, addr 0x465c734, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwzy();

  /// @brief Method get_xwzz, addr 0x465c77c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xwzz();

  /// @brief Method get_xx, addr 0x465e9f0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xx();

  /// @brief Method get_xxw, addr 0x465e1a4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxw();

  /// @brief Method get_xxww, addr 0x465c194, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxww();

  /// @brief Method get_xxwx, addr 0x465c138, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxwx();

  /// @brief Method get_xxwy, addr 0x465c154, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxwy();

  /// @brief Method get_xxwz, addr 0x465c174, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxwz();

  /// @brief Method get_xxx, addr 0x465e160, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxx();

  /// @brief Method get_xxxw, addr 0x465c02c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxw();

  /// @brief Method get_xxxx, addr 0x465bfdc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x465bff4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x465c010, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxz();

  /// @brief Method get_xxy, addr 0x465e174, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxy();

  /// @brief Method get_xxyw, addr 0x465c0a0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyw();

  /// @brief Method get_xxyx, addr 0x465c048, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x465c064, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x465c080, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyz();

  /// @brief Method get_xxz, addr 0x465e18c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxz();

  /// @brief Method get_xxzw, addr 0x465c118, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzw();

  /// @brief Method get_xxzx, addr 0x465c0c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x465c0dc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x465c0fc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzz();

  /// @brief Method get_xy, addr 0x465e9fc, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xy();

  /// @brief Method get_xyw, addr 0x465e218, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyw();

  /// @brief Method get_xyww, addr 0x465c3a0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyww();

  /// @brief Method get_xywx, addr 0x465c320, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xywx();

  /// @brief Method get_xywy, addr 0x465c340, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xywy();

  /// @brief Method get_xywz, addr 0x465c360, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xywz();

  /// @brief Method get_xyx, addr 0x465e1bc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyx();

  /// @brief Method get_xyxw, addr 0x465c208, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxw();

  /// @brief Method get_xyxx, addr 0x465c1b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x465c1cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x465c1e8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxz();

  /// @brief Method get_xyy, addr 0x465e1d4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyy();

  /// @brief Method get_xyyw, addr 0x465c280, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyw();

  /// @brief Method get_xyyx, addr 0x465c228, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x465c244, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x465c260, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyz();

  /// @brief Method get_xyz, addr 0x465e1ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyz();

  /// @brief Method get_xyzw, addr 0x465c2f4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzw();

  /// @brief Method get_xyzx, addr 0x465c2a0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x465c2c0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x465c2e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzz();

  /// @brief Method get_xz, addr 0x465ea18, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xz();

  /// @brief Method get_xzw, addr 0x465e2ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzw();

  /// @brief Method get_xzww, addr 0x465c5d4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzww();

  /// @brief Method get_xzwx, addr 0x465c54c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzwx();

  /// @brief Method get_xzwy, addr 0x465c56c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzwy();

  /// @brief Method get_xzwz, addr 0x465c5b4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzwz();

  /// @brief Method get_xzx, addr 0x465e244, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzx();

  /// @brief Method get_xzxw, addr 0x465c40c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxw();

  /// @brief Method get_xzxx, addr 0x465c3b4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x465c3d0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x465c3f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxz();

  /// @brief Method get_xzy, addr 0x465e25c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzy();

  /// @brief Method get_xzyw, addr 0x465c48c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyw();

  /// @brief Method get_xzyx, addr 0x465c42c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x465c44c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x465c46c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyz();

  /// @brief Method get_xzz, addr 0x465e294, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzz();

  /// @brief Method get_xzzw, addr 0x465c52c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzw();

  /// @brief Method get_xzzx, addr 0x465c4d4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x465c4f0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x465c510, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzz();

  /// @brief Method get_yw, addr 0x465eab4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yw();

  /// @brief Method get_yww, addr 0x465e588, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yww();

  /// @brief Method get_ywww, addr 0x465d074, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywww();

  /// @brief Method get_ywwx, addr 0x465d018, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywwx();

  /// @brief Method get_ywwy, addr 0x465d038, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywwy();

  /// @brief Method get_ywwz, addr 0x465d054, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywwz();

  /// @brief Method get_ywx, addr 0x465e500, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_ywx();

  /// @brief Method get_ywxw, addr 0x465ced8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywxw();

  /// @brief Method get_ywxx, addr 0x465ce50, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywxx();

  /// @brief Method get_ywxy, addr 0x465ce70, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywxy();

  /// @brief Method get_ywxz, addr 0x465ce90, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywxz();

  /// @brief Method get_ywy, addr 0x465e538, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_ywy();

  /// @brief Method get_ywyw, addr 0x465cf54, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywyw();

  /// @brief Method get_ywyx, addr 0x465cef8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywyx();

  /// @brief Method get_ywyy, addr 0x465cf18, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywyy();

  /// @brief Method get_ywyz, addr 0x465cf34, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywyz();

  /// @brief Method get_ywz, addr 0x465e550, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_ywz();

  /// @brief Method get_ywzw, addr 0x465cff8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywzw();

  /// @brief Method get_ywzx, addr 0x465cf70, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywzx();

  /// @brief Method get_ywzy, addr 0x465cfb8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywzy();

  /// @brief Method get_ywzz, addr 0x465cfd8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_ywzz();

  /// @brief Method get_yx, addr 0x465ea68, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yx();

  /// @brief Method get_yxw, addr 0x465e3e8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxw();

  /// @brief Method get_yxww, addr 0x465ca48, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxww();

  /// @brief Method get_yxwx, addr 0x465c9c4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxwx();

  /// @brief Method get_yxwy, addr 0x465c9e4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxwy();

  /// @brief Method get_yxwz, addr 0x465ca04, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxwz();

  /// @brief Method get_yxx, addr 0x465e384, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxx();

  /// @brief Method get_yxxw, addr 0x465c88c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxw();

  /// @brief Method get_yxxx, addr 0x465c834, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x465c850, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x465c86c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxz();

  /// @brief Method get_yxy, addr 0x465e39c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxy();

  /// @brief Method get_yxyw, addr 0x465c904, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyw();

  /// @brief Method get_yxyx, addr 0x465c8ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x465c8c8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x465c8e4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyz();

  /// @brief Method get_yxz, addr 0x465e3b4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxz();

  /// @brief Method get_yxzw, addr 0x465c980, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzw();

  /// @brief Method get_yxzx, addr 0x465c924, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x465c944, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x465c964, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzz();

  /// @brief Method get_yy, addr 0x465ea8c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yy();

  /// @brief Method get_yyw, addr 0x465e460, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyw();

  /// @brief Method get_yyww, addr 0x465cc1c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyww();

  /// @brief Method get_yywx, addr 0x465cbc0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yywx();

  /// @brief Method get_yywy, addr 0x465cbe0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yywy();

  /// @brief Method get_yywz, addr 0x465cbfc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yywz();

  /// @brief Method get_yyx, addr 0x465e41c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyx();

  /// @brief Method get_yyxw, addr 0x465cabc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxw();

  /// @brief Method get_yyxx, addr 0x465ca64, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x465ca80, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x465ca9c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxz();

  /// @brief Method get_yyy, addr 0x465e434, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyy();

  /// @brief Method get_yyyw, addr 0x465cb2c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyw();

  /// @brief Method get_yyyx, addr 0x465cadc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x465caf8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x465cb10, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyz();

  /// @brief Method get_yyz, addr 0x465e448, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyz();

  /// @brief Method get_yyzw, addr 0x465cba0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzw();

  /// @brief Method get_yyzx, addr 0x465cb48, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x465cb68, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x465cb84, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzz();

  /// @brief Method get_yz, addr 0x465ea98, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yz();

  /// @brief Method get_yzw, addr 0x465e4d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzw();

  /// @brief Method get_yzww, addr 0x465ce3c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzww();

  /// @brief Method get_yzwx, addr 0x465cdbc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzwx();

  /// @brief Method get_yzwy, addr 0x465cdfc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzwy();

  /// @brief Method get_yzwz, addr 0x465ce1c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzwz();

  /// @brief Method get_yzx, addr 0x465e478, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzx();

  /// @brief Method get_yzxw, addr 0x465cc8c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxw();

  /// @brief Method get_yzxx, addr 0x465cc38, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x465cc4c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x465cc6c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxz();

  /// @brief Method get_yzy, addr 0x465e4a4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzy();

  /// @brief Method get_yzyw, addr 0x465cd24, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyw();

  /// @brief Method get_yzyx, addr 0x465cccc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x465ccec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x465cd08, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyz();

  /// @brief Method get_yzz, addr 0x465e4bc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzz();

  /// @brief Method get_yzzw, addr 0x465cd9c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzw();

  /// @brief Method get_yzzx, addr 0x465cd44, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x465cd64, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x465cd80, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzz();

  /// @brief Method get_zw, addr 0x465eb34, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zw();

  /// @brief Method get_zww, addr 0x465e7a4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zww();

  /// @brief Method get_zwww, addr 0x465d8d0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwww();

  /// @brief Method get_zwwx, addr 0x465d874, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwwx();

  /// @brief Method get_zwwy, addr 0x465d894, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwwy();

  /// @brief Method get_zwwz, addr 0x465d8b4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwwz();

  /// @brief Method get_zwx, addr 0x465e734, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zwx();

  /// @brief Method get_zwxw, addr 0x465d748, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwxw();

  /// @brief Method get_zwxx, addr 0x465d6d4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwxx();

  /// @brief Method get_zwxy, addr 0x465d6e8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwxy();

  /// @brief Method get_zwxz, addr 0x465d728, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwxz();

  /// @brief Method get_zwy, addr 0x465e760, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zwy();

  /// @brief Method get_zwyw, addr 0x465d7dc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwyw();

  /// @brief Method get_zwyx, addr 0x465d768, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwyx();

  /// @brief Method get_zwyy, addr 0x465d7a8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwyy();

  /// @brief Method get_zwyz, addr 0x465d7bc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwyz();

  /// @brief Method get_zwz, addr 0x465e78c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zwz();

  /// @brief Method get_zwzw, addr 0x465d858, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwzw();

  /// @brief Method get_zwzx, addr 0x465d7fc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwzx();

  /// @brief Method get_zwzy, addr 0x465d81c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwzy();

  /// @brief Method get_zwzz, addr 0x465d83c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zwzz();

  /// @brief Method get_zx, addr 0x465eadc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zx();

  /// @brief Method get_zxw, addr 0x465e608, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxw();

  /// @brief Method get_zxww, addr 0x465d2b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxww();

  /// @brief Method get_zxwx, addr 0x465d228, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxwx();

  /// @brief Method get_zxwy, addr 0x465d248, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxwy();

  /// @brief Method get_zxwz, addr 0x465d290, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxwz();

  /// @brief Method get_zxx, addr 0x465e5a0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxx();

  /// @brief Method get_zxxw, addr 0x465d0e8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxw();

  /// @brief Method get_zxxx, addr 0x465d090, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x465d0ac, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x465d0cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxz();

  /// @brief Method get_zxy, addr 0x465e5b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxy();

  /// @brief Method get_zxyw, addr 0x465d168, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyw();

  /// @brief Method get_zxyx, addr 0x465d108, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x465d128, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x465d148, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyz();

  /// @brief Method get_zxz, addr 0x465e5f0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxz();

  /// @brief Method get_zxzw, addr 0x465d208, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzw();

  /// @brief Method get_zxzx, addr 0x465d1b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x465d1cc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x465d1ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzz();

  /// @brief Method get_zy, addr 0x465eb04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zy();

  /// @brief Method get_zyw, addr 0x465e6a4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyw();

  /// @brief Method get_zyww, addr 0x465d4e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyww();

  /// @brief Method get_zywx, addr 0x465d460, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zywx();

  /// @brief Method get_zywy, addr 0x465d4a4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zywy();

  /// @brief Method get_zywz, addr 0x465d4c4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zywz();

  /// @brief Method get_zyx, addr 0x465e640, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyx();

  /// @brief Method get_zyxw, addr 0x465d32c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxw();

  /// @brief Method get_zyxx, addr 0x465d2d0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x465d2ec, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x465d30c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxz();

  /// @brief Method get_zyy, addr 0x465e674, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyy();

  /// @brief Method get_zyyw, addr 0x465d3c8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyw();

  /// @brief Method get_zyyx, addr 0x465d370, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x465d390, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x465d3ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyz();

  /// @brief Method get_zyz, addr 0x465e68c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyz();

  /// @brief Method get_zyzw, addr 0x465d440, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzw();

  /// @brief Method get_zyzx, addr 0x465d3e8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x465d408, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x465d424, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzz();

  /// @brief Method get_zz, addr 0x465eb28, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zz();

  /// @brief Method get_zzw, addr 0x465e71c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzw();

  /// @brief Method get_zzww, addr 0x465d6b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzww();

  /// @brief Method get_zzwx, addr 0x465d65c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzwx();

  /// @brief Method get_zzwy, addr 0x465d67c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzwy();

  /// @brief Method get_zzwz, addr 0x465d69c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzwz();

  /// @brief Method get_zzx, addr 0x465e6d8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzx();

  /// @brief Method get_zzxw, addr 0x465d558, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxw();

  /// @brief Method get_zzxx, addr 0x465d500, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x465d51c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x465d53c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxz();

  /// @brief Method get_zzy, addr 0x465e6f0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzy();

  /// @brief Method get_zzyw, addr 0x465d5d0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyw();

  /// @brief Method get_zzyx, addr 0x465d578, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x465d598, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x465d5b4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyz();

  /// @brief Method get_zzz, addr 0x465e708, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzz();

  /// @brief Method get_zzzw, addr 0x465d640, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzw();

  /// @brief Method get_zzzx, addr 0x465d5f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x465d60c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x465d628, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4>* i___System__IEquatable_1___Unity__Mathematics__bool4_();

  /// @brief Method op_BitwiseAnd, addr 0x465be98, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_BitwiseAnd(::Unity::Mathematics::bool4 lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x465bea8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_BitwiseAnd(::Unity::Mathematics::bool4 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x465bed0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x465bef4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_BitwiseOr(::Unity::Mathematics::bool4 lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x465bf04, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_BitwiseOr(::Unity::Mathematics::bool4 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x465bf34, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_Equality, addr 0x465bd90, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::bool4 lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_Equality, addr 0x465bda0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::bool4 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x465bdd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(bool lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x465bf64, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_ExclusiveOr(::Unity::Mathematics::bool4 lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x465bf74, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_ExclusiveOr(::Unity::Mathematics::bool4 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x465bfa8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_Implicit, addr 0x465bd80, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Implicit___Unity__Mathematics__bool4(bool v);

  /// @brief Method op_Inequality, addr 0x465be10, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::bool4 lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_Inequality, addr 0x465be20, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::bool4 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x465be54, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(bool lhs, ::Unity::Mathematics::bool4 rhs);

  /// @brief Method op_LogicalNot, addr 0x465be88, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LogicalNot(::Unity::Mathematics::bool4 val);

  /// @brief Method set_Item, addr 0x465ebe0, size 0xc, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  /// @brief Method set_wx, addr 0x465eb64, size 0x14, virtual false, abstract: false, final false
  inline void set_wx(::Unity::Mathematics::bool2 value);

  /// @brief Method set_wxy, addr 0x465e7f0, size 0x1c, virtual false, abstract: false, final false
  inline void set_wxy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_wxyz, addr 0x465d9c8, size 0x24, virtual false, abstract: false, final false
  inline void set_wxyz(::Unity::Mathematics::bool4 value);

  /// @brief Method set_wxz, addr 0x465e828, size 0x1c, virtual false, abstract: false, final false
  inline void set_wxz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_wxzy, addr 0x465da50, size 0x24, virtual false, abstract: false, final false
  inline void set_wxzy(::Unity::Mathematics::bool4 value);

  /// @brief Method set_wy, addr 0x465eb8c, size 0x14, virtual false, abstract: false, final false
  inline void set_wy(::Unity::Mathematics::bool2 value);

  /// @brief Method set_wyx, addr 0x465e878, size 0x1c, virtual false, abstract: false, final false
  inline void set_wyx(::Unity::Mathematics::bool3 value);

  /// @brief Method set_wyxz, addr 0x465db90, size 0x24, virtual false, abstract: false, final false
  inline void set_wyxz(::Unity::Mathematics::bool4 value);

  /// @brief Method set_wyz, addr 0x465e8c8, size 0x1c, virtual false, abstract: false, final false
  inline void set_wyz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_wyzx, addr 0x465dc70, size 0x24, virtual false, abstract: false, final false
  inline void set_wyzx(::Unity::Mathematics::bool4 value);

  /// @brief Method set_wz, addr 0x465ebb0, size 0x14, virtual false, abstract: false, final false
  inline void set_wz(::Unity::Mathematics::bool2 value);

  /// @brief Method set_wzx, addr 0x465e914, size 0x1c, virtual false, abstract: false, final false
  inline void set_wzx(::Unity::Mathematics::bool3 value);

  /// @brief Method set_wzxy, addr 0x465dda8, size 0x24, virtual false, abstract: false, final false
  inline void set_wzxy(::Unity::Mathematics::bool4 value);

  /// @brief Method set_wzy, addr 0x465e948, size 0x1c, virtual false, abstract: false, final false
  inline void set_wzy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_wzyx, addr 0x465de1c, size 0x24, virtual false, abstract: false, final false
  inline void set_wzyx(::Unity::Mathematics::bool4 value);

  /// @brief Method set_xw, addr 0x465ea54, size 0x14, virtual false, abstract: false, final false
  inline void set_xw(::Unity::Mathematics::bool2 value);

  /// @brief Method set_xwy, addr 0x465e318, size 0x1c, virtual false, abstract: false, final false
  inline void set_xwy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_xwyz, addr 0x465c6d0, size 0x24, virtual false, abstract: false, final false
  inline void set_xwyz(::Unity::Mathematics::bool4 value);

  /// @brief Method set_xwz, addr 0x465e350, size 0x1c, virtual false, abstract: false, final false
  inline void set_xwz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_xwzy, addr 0x465c758, size 0x24, virtual false, abstract: false, final false
  inline void set_xwzy(::Unity::Mathematics::bool4 value);

  /// @brief Method set_xy, addr 0x465ea04, size 0x14, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::bool2 value);

  /// @brief Method set_xyw, addr 0x465e228, size 0x1c, virtual false, abstract: false, final false
  inline void set_xyw(::Unity::Mathematics::bool3 value);

  /// @brief Method set_xywz, addr 0x465c37c, size 0x24, virtual false, abstract: false, final false
  inline void set_xywz(::Unity::Mathematics::bool4 value);

  /// @brief Method set_xyz, addr 0x465e1fc, size 0x1c, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_xyzw, addr 0x465c2fc, size 0x24, virtual false, abstract: false, final false
  inline void set_xyzw(::Unity::Mathematics::bool4 value);

  /// @brief Method set_xz, addr 0x465ea2c, size 0x14, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::bool2 value);

  /// @brief Method set_xzw, addr 0x465e2c8, size 0x1c, virtual false, abstract: false, final false
  inline void set_xzw(::Unity::Mathematics::bool3 value);

  /// @brief Method set_xzwy, addr 0x465c590, size 0x24, virtual false, abstract: false, final false
  inline void set_xzwy(::Unity::Mathematics::bool4 value);

  /// @brief Method set_xzy, addr 0x465e278, size 0x1c, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_xzyw, addr 0x465c4b0, size 0x24, virtual false, abstract: false, final false
  inline void set_xzyw(::Unity::Mathematics::bool4 value);

  /// @brief Method set_yw, addr 0x465eac8, size 0x14, virtual false, abstract: false, final false
  inline void set_yw(::Unity::Mathematics::bool2 value);

  /// @brief Method set_ywx, addr 0x465e51c, size 0x1c, virtual false, abstract: false, final false
  inline void set_ywx(::Unity::Mathematics::bool3 value);

  /// @brief Method set_ywxz, addr 0x465ceb4, size 0x24, virtual false, abstract: false, final false
  inline void set_ywxz(::Unity::Mathematics::bool4 value);

  /// @brief Method set_ywz, addr 0x465e56c, size 0x1c, virtual false, abstract: false, final false
  inline void set_ywz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_ywzx, addr 0x465cf94, size 0x24, virtual false, abstract: false, final false
  inline void set_ywzx(::Unity::Mathematics::bool4 value);

  /// @brief Method set_yx, addr 0x465ea78, size 0x14, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::bool2 value);

  /// @brief Method set_yxw, addr 0x465e400, size 0x1c, virtual false, abstract: false, final false
  inline void set_yxw(::Unity::Mathematics::bool3 value);

  /// @brief Method set_yxwz, addr 0x465ca24, size 0x24, virtual false, abstract: false, final false
  inline void set_yxwz(::Unity::Mathematics::bool4 value);

  /// @brief Method set_yxz, addr 0x465e3cc, size 0x1c, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_yxzw, addr 0x465c9a0, size 0x24, virtual false, abstract: false, final false
  inline void set_yxzw(::Unity::Mathematics::bool4 value);

  /// @brief Method set_yz, addr 0x465eaa0, size 0x14, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::bool2 value);

  /// @brief Method set_yzw, addr 0x465e4e4, size 0x1c, virtual false, abstract: false, final false
  inline void set_yzw(::Unity::Mathematics::bool3 value);

  /// @brief Method set_yzwx, addr 0x465cdd8, size 0x24, virtual false, abstract: false, final false
  inline void set_yzwx(::Unity::Mathematics::bool4 value);

  /// @brief Method set_yzx, addr 0x465e488, size 0x1c, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::bool3 value);

  /// @brief Method set_yzxw, addr 0x465cca8, size 0x24, virtual false, abstract: false, final false
  inline void set_yzxw(::Unity::Mathematics::bool4 value);

  /// @brief Method set_zw, addr 0x465eb3c, size 0x14, virtual false, abstract: false, final false
  inline void set_zw(::Unity::Mathematics::bool2 value);

  /// @brief Method set_zwx, addr 0x465e744, size 0x1c, virtual false, abstract: false, final false
  inline void set_zwx(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zwxy, addr 0x465d704, size 0x24, virtual false, abstract: false, final false
  inline void set_zwxy(::Unity::Mathematics::bool4 value);

  /// @brief Method set_zwy, addr 0x465e770, size 0x1c, virtual false, abstract: false, final false
  inline void set_zwy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zwyx, addr 0x465d784, size 0x24, virtual false, abstract: false, final false
  inline void set_zwyx(::Unity::Mathematics::bool4 value);

  /// @brief Method set_zx, addr 0x465eaf0, size 0x14, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::bool2 value);

  /// @brief Method set_zxw, addr 0x465e624, size 0x1c, virtual false, abstract: false, final false
  inline void set_zxw(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zxwy, addr 0x465d26c, size 0x24, virtual false, abstract: false, final false
  inline void set_zxwy(::Unity::Mathematics::bool4 value);

  /// @brief Method set_zxy, addr 0x465e5d4, size 0x1c, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zxyw, addr 0x465d18c, size 0x24, virtual false, abstract: false, final false
  inline void set_zxyw(::Unity::Mathematics::bool4 value);

  /// @brief Method set_zy, addr 0x465eb14, size 0x14, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::bool2 value);

  /// @brief Method set_zyw, addr 0x465e6bc, size 0x1c, virtual false, abstract: false, final false
  inline void set_zyw(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zywx, addr 0x465d480, size 0x24, virtual false, abstract: false, final false
  inline void set_zywx(::Unity::Mathematics::bool4 value);

  /// @brief Method set_zyx, addr 0x465e658, size 0x1c, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zyxw, addr 0x465d34c, size 0x24, virtual false, abstract: false, final false
  inline void set_zyxw(::Unity::Mathematics::bool4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool4();

  // Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "z", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "bool", modifiers: "", def_value: None }]
  constexpr bool4(bool x, bool y, bool z, bool w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9955 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field x, offset: 0x0, size: 0x1, def value: None
  bool x;

  /// @brief Field y, offset: 0x1, size: 0x1, def value: None
  bool y;

  /// @brief Field z, offset: 0x2, size: 0x1, def value: None
  bool z;

  /// @brief Field w, offset: 0x3, size: 0x1, def value: None
  bool w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4, y) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4, z) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4, w) == 0x3, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool4, 0x4>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::bool4_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool4_DebuggerProxy*, "Unity.Mathematics", "bool4/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool4, "Unity.Mathematics", "bool4");
