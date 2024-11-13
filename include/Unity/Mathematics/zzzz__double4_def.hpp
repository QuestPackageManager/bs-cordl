#pragma once
// IWYU pragma private; include "Unity/Mathematics/double4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double4)
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
class __double4__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct half4;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class __double4__DebuggerProxy;
}
namespace Unity::Mathematics {
struct double4;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__double4__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::double4);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::double4::DebuggerProxy*
class CORDL_TYPE __double4__DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field w, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w)) double_t w;

  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) double_t x;

  /// @brief Field y, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) double_t y;

  /// @brief Field z, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) double_t z;

  static inline ::Unity::Mathematics::__double4__DebuggerProxy* New_ctor(::Unity::Mathematics::double4 v);

  constexpr double_t const& __cordl_internal_get_w() const;

  constexpr double_t& __cordl_internal_get_w();

  constexpr double_t const& __cordl_internal_get_x() const;

  constexpr double_t& __cordl_internal_get_x();

  constexpr double_t const& __cordl_internal_get_y() const;

  constexpr double_t& __cordl_internal_get_y();

  constexpr double_t const& __cordl_internal_get_z() const;

  constexpr double_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_w(double_t value);

  constexpr void __cordl_internal_set_x(double_t value);

  constexpr void __cordl_internal_set_y(double_t value);

  constexpr void __cordl_internal_set_z(double_t value);

  /// @brief Method .ctor, addr 0x4620144, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __double4__DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__double4__DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __double4__DebuggerProxy(__double4__DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__double4__DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __double4__DebuggerProxy(__double4__DebuggerProxy const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  double_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x8, def value: None
  double_t ___y;

  /// @brief Field z, offset: 0x20, size: 0x8, def value: None
  double_t ___z;

  /// @brief Field w, offset: 0x28, size: 0x8, def value: None
  double_t ___w;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__double4__DebuggerProxy, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double4__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double4__DebuggerProxy, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double4__DebuggerProxy, ___z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double4__DebuggerProxy, ___w) == 0x28, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::double4
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double4
struct CORDL_TYPE double4 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::__double4__DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) double_t Item[];

  __declspec(property(get = get_ww)) ::Unity::Mathematics::double2 ww;

  __declspec(property(get = get_www)) ::Unity::Mathematics::double3 www;

  __declspec(property(get = get_wwww)) ::Unity::Mathematics::double4 wwww;

  __declspec(property(get = get_wwwx)) ::Unity::Mathematics::double4 wwwx;

  __declspec(property(get = get_wwwy)) ::Unity::Mathematics::double4 wwwy;

  __declspec(property(get = get_wwwz)) ::Unity::Mathematics::double4 wwwz;

  __declspec(property(get = get_wwx)) ::Unity::Mathematics::double3 wwx;

  __declspec(property(get = get_wwxw)) ::Unity::Mathematics::double4 wwxw;

  __declspec(property(get = get_wwxx)) ::Unity::Mathematics::double4 wwxx;

  __declspec(property(get = get_wwxy)) ::Unity::Mathematics::double4 wwxy;

  __declspec(property(get = get_wwxz)) ::Unity::Mathematics::double4 wwxz;

  __declspec(property(get = get_wwy)) ::Unity::Mathematics::double3 wwy;

  __declspec(property(get = get_wwyw)) ::Unity::Mathematics::double4 wwyw;

  __declspec(property(get = get_wwyx)) ::Unity::Mathematics::double4 wwyx;

  __declspec(property(get = get_wwyy)) ::Unity::Mathematics::double4 wwyy;

  __declspec(property(get = get_wwyz)) ::Unity::Mathematics::double4 wwyz;

  __declspec(property(get = get_wwz)) ::Unity::Mathematics::double3 wwz;

  __declspec(property(get = get_wwzw)) ::Unity::Mathematics::double4 wwzw;

  __declspec(property(get = get_wwzx)) ::Unity::Mathematics::double4 wwzx;

  __declspec(property(get = get_wwzy)) ::Unity::Mathematics::double4 wwzy;

  __declspec(property(get = get_wwzz)) ::Unity::Mathematics::double4 wwzz;

  __declspec(property(get = get_wx, put = set_wx)) ::Unity::Mathematics::double2 wx;

  __declspec(property(get = get_wxw)) ::Unity::Mathematics::double3 wxw;

  __declspec(property(get = get_wxww)) ::Unity::Mathematics::double4 wxww;

  __declspec(property(get = get_wxwx)) ::Unity::Mathematics::double4 wxwx;

  __declspec(property(get = get_wxwy)) ::Unity::Mathematics::double4 wxwy;

  __declspec(property(get = get_wxwz)) ::Unity::Mathematics::double4 wxwz;

  __declspec(property(get = get_wxx)) ::Unity::Mathematics::double3 wxx;

  __declspec(property(get = get_wxxw)) ::Unity::Mathematics::double4 wxxw;

  __declspec(property(get = get_wxxx)) ::Unity::Mathematics::double4 wxxx;

  __declspec(property(get = get_wxxy)) ::Unity::Mathematics::double4 wxxy;

  __declspec(property(get = get_wxxz)) ::Unity::Mathematics::double4 wxxz;

  __declspec(property(get = get_wxy, put = set_wxy)) ::Unity::Mathematics::double3 wxy;

  __declspec(property(get = get_wxyw)) ::Unity::Mathematics::double4 wxyw;

  __declspec(property(get = get_wxyx)) ::Unity::Mathematics::double4 wxyx;

  __declspec(property(get = get_wxyy)) ::Unity::Mathematics::double4 wxyy;

  __declspec(property(get = get_wxyz, put = set_wxyz)) ::Unity::Mathematics::double4 wxyz;

  __declspec(property(get = get_wxz, put = set_wxz)) ::Unity::Mathematics::double3 wxz;

  __declspec(property(get = get_wxzw)) ::Unity::Mathematics::double4 wxzw;

  __declspec(property(get = get_wxzx)) ::Unity::Mathematics::double4 wxzx;

  __declspec(property(get = get_wxzy, put = set_wxzy)) ::Unity::Mathematics::double4 wxzy;

  __declspec(property(get = get_wxzz)) ::Unity::Mathematics::double4 wxzz;

  __declspec(property(get = get_wy, put = set_wy)) ::Unity::Mathematics::double2 wy;

  __declspec(property(get = get_wyw)) ::Unity::Mathematics::double3 wyw;

  __declspec(property(get = get_wyww)) ::Unity::Mathematics::double4 wyww;

  __declspec(property(get = get_wywx)) ::Unity::Mathematics::double4 wywx;

  __declspec(property(get = get_wywy)) ::Unity::Mathematics::double4 wywy;

  __declspec(property(get = get_wywz)) ::Unity::Mathematics::double4 wywz;

  __declspec(property(get = get_wyx, put = set_wyx)) ::Unity::Mathematics::double3 wyx;

  __declspec(property(get = get_wyxw)) ::Unity::Mathematics::double4 wyxw;

  __declspec(property(get = get_wyxx)) ::Unity::Mathematics::double4 wyxx;

  __declspec(property(get = get_wyxy)) ::Unity::Mathematics::double4 wyxy;

  __declspec(property(get = get_wyxz, put = set_wyxz)) ::Unity::Mathematics::double4 wyxz;

  __declspec(property(get = get_wyy)) ::Unity::Mathematics::double3 wyy;

  __declspec(property(get = get_wyyw)) ::Unity::Mathematics::double4 wyyw;

  __declspec(property(get = get_wyyx)) ::Unity::Mathematics::double4 wyyx;

  __declspec(property(get = get_wyyy)) ::Unity::Mathematics::double4 wyyy;

  __declspec(property(get = get_wyyz)) ::Unity::Mathematics::double4 wyyz;

  __declspec(property(get = get_wyz, put = set_wyz)) ::Unity::Mathematics::double3 wyz;

  __declspec(property(get = get_wyzw)) ::Unity::Mathematics::double4 wyzw;

  __declspec(property(get = get_wyzx, put = set_wyzx)) ::Unity::Mathematics::double4 wyzx;

  __declspec(property(get = get_wyzy)) ::Unity::Mathematics::double4 wyzy;

  __declspec(property(get = get_wyzz)) ::Unity::Mathematics::double4 wyzz;

  __declspec(property(get = get_wz, put = set_wz)) ::Unity::Mathematics::double2 wz;

  __declspec(property(get = get_wzw)) ::Unity::Mathematics::double3 wzw;

  __declspec(property(get = get_wzww)) ::Unity::Mathematics::double4 wzww;

  __declspec(property(get = get_wzwx)) ::Unity::Mathematics::double4 wzwx;

  __declspec(property(get = get_wzwy)) ::Unity::Mathematics::double4 wzwy;

  __declspec(property(get = get_wzwz)) ::Unity::Mathematics::double4 wzwz;

  __declspec(property(get = get_wzx, put = set_wzx)) ::Unity::Mathematics::double3 wzx;

  __declspec(property(get = get_wzxw)) ::Unity::Mathematics::double4 wzxw;

  __declspec(property(get = get_wzxx)) ::Unity::Mathematics::double4 wzxx;

  __declspec(property(get = get_wzxy, put = set_wzxy)) ::Unity::Mathematics::double4 wzxy;

  __declspec(property(get = get_wzxz)) ::Unity::Mathematics::double4 wzxz;

  __declspec(property(get = get_wzy, put = set_wzy)) ::Unity::Mathematics::double3 wzy;

  __declspec(property(get = get_wzyw)) ::Unity::Mathematics::double4 wzyw;

  __declspec(property(get = get_wzyx, put = set_wzyx)) ::Unity::Mathematics::double4 wzyx;

  __declspec(property(get = get_wzyy)) ::Unity::Mathematics::double4 wzyy;

  __declspec(property(get = get_wzyz)) ::Unity::Mathematics::double4 wzyz;

  __declspec(property(get = get_wzz)) ::Unity::Mathematics::double3 wzz;

  __declspec(property(get = get_wzzw)) ::Unity::Mathematics::double4 wzzw;

  __declspec(property(get = get_wzzx)) ::Unity::Mathematics::double4 wzzx;

  __declspec(property(get = get_wzzy)) ::Unity::Mathematics::double4 wzzy;

  __declspec(property(get = get_wzzz)) ::Unity::Mathematics::double4 wzzz;

  __declspec(property(get = get_xw, put = set_xw)) ::Unity::Mathematics::double2 xw;

  __declspec(property(get = get_xww)) ::Unity::Mathematics::double3 xww;

  __declspec(property(get = get_xwww)) ::Unity::Mathematics::double4 xwww;

  __declspec(property(get = get_xwwx)) ::Unity::Mathematics::double4 xwwx;

  __declspec(property(get = get_xwwy)) ::Unity::Mathematics::double4 xwwy;

  __declspec(property(get = get_xwwz)) ::Unity::Mathematics::double4 xwwz;

  __declspec(property(get = get_xwx)) ::Unity::Mathematics::double3 xwx;

  __declspec(property(get = get_xwxw)) ::Unity::Mathematics::double4 xwxw;

  __declspec(property(get = get_xwxx)) ::Unity::Mathematics::double4 xwxx;

  __declspec(property(get = get_xwxy)) ::Unity::Mathematics::double4 xwxy;

  __declspec(property(get = get_xwxz)) ::Unity::Mathematics::double4 xwxz;

  __declspec(property(get = get_xwy, put = set_xwy)) ::Unity::Mathematics::double3 xwy;

  __declspec(property(get = get_xwyw)) ::Unity::Mathematics::double4 xwyw;

  __declspec(property(get = get_xwyx)) ::Unity::Mathematics::double4 xwyx;

  __declspec(property(get = get_xwyy)) ::Unity::Mathematics::double4 xwyy;

  __declspec(property(get = get_xwyz, put = set_xwyz)) ::Unity::Mathematics::double4 xwyz;

  __declspec(property(get = get_xwz, put = set_xwz)) ::Unity::Mathematics::double3 xwz;

  __declspec(property(get = get_xwzw)) ::Unity::Mathematics::double4 xwzw;

  __declspec(property(get = get_xwzx)) ::Unity::Mathematics::double4 xwzx;

  __declspec(property(get = get_xwzy, put = set_xwzy)) ::Unity::Mathematics::double4 xwzy;

  __declspec(property(get = get_xwzz)) ::Unity::Mathematics::double4 xwzz;

  __declspec(property(get = get_xx)) ::Unity::Mathematics::double2 xx;

  __declspec(property(get = get_xxw)) ::Unity::Mathematics::double3 xxw;

  __declspec(property(get = get_xxww)) ::Unity::Mathematics::double4 xxww;

  __declspec(property(get = get_xxwx)) ::Unity::Mathematics::double4 xxwx;

  __declspec(property(get = get_xxwy)) ::Unity::Mathematics::double4 xxwy;

  __declspec(property(get = get_xxwz)) ::Unity::Mathematics::double4 xxwz;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::double3 xxx;

  __declspec(property(get = get_xxxw)) ::Unity::Mathematics::double4 xxxw;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::double4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::double4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::double4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::double3 xxy;

  __declspec(property(get = get_xxyw)) ::Unity::Mathematics::double4 xxyw;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::double4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::double4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::double4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::double3 xxz;

  __declspec(property(get = get_xxzw)) ::Unity::Mathematics::double4 xxzw;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::double4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::double4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::double4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::double2 xy;

  __declspec(property(get = get_xyw, put = set_xyw)) ::Unity::Mathematics::double3 xyw;

  __declspec(property(get = get_xyww)) ::Unity::Mathematics::double4 xyww;

  __declspec(property(get = get_xywx)) ::Unity::Mathematics::double4 xywx;

  __declspec(property(get = get_xywy)) ::Unity::Mathematics::double4 xywy;

  __declspec(property(get = get_xywz, put = set_xywz)) ::Unity::Mathematics::double4 xywz;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::double3 xyx;

  __declspec(property(get = get_xyxw)) ::Unity::Mathematics::double4 xyxw;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::double4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::double4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::double4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::double3 xyy;

  __declspec(property(get = get_xyyw)) ::Unity::Mathematics::double4 xyyw;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::double4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::double4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::double4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::double3 xyz;

  __declspec(property(get = get_xyzw, put = set_xyzw)) ::Unity::Mathematics::double4 xyzw;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::double4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::double4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::double4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::double2 xz;

  __declspec(property(get = get_xzw, put = set_xzw)) ::Unity::Mathematics::double3 xzw;

  __declspec(property(get = get_xzww)) ::Unity::Mathematics::double4 xzww;

  __declspec(property(get = get_xzwx)) ::Unity::Mathematics::double4 xzwx;

  __declspec(property(get = get_xzwy, put = set_xzwy)) ::Unity::Mathematics::double4 xzwy;

  __declspec(property(get = get_xzwz)) ::Unity::Mathematics::double4 xzwz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::double3 xzx;

  __declspec(property(get = get_xzxw)) ::Unity::Mathematics::double4 xzxw;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::double4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::double4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::double4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::double3 xzy;

  __declspec(property(get = get_xzyw, put = set_xzyw)) ::Unity::Mathematics::double4 xzyw;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::double4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::double4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::double4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::double3 xzz;

  __declspec(property(get = get_xzzw)) ::Unity::Mathematics::double4 xzzw;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::double4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::double4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::double4 xzzz;

  __declspec(property(get = get_yw, put = set_yw)) ::Unity::Mathematics::double2 yw;

  __declspec(property(get = get_yww)) ::Unity::Mathematics::double3 yww;

  __declspec(property(get = get_ywww)) ::Unity::Mathematics::double4 ywww;

  __declspec(property(get = get_ywwx)) ::Unity::Mathematics::double4 ywwx;

  __declspec(property(get = get_ywwy)) ::Unity::Mathematics::double4 ywwy;

  __declspec(property(get = get_ywwz)) ::Unity::Mathematics::double4 ywwz;

  __declspec(property(get = get_ywx, put = set_ywx)) ::Unity::Mathematics::double3 ywx;

  __declspec(property(get = get_ywxw)) ::Unity::Mathematics::double4 ywxw;

  __declspec(property(get = get_ywxx)) ::Unity::Mathematics::double4 ywxx;

  __declspec(property(get = get_ywxy)) ::Unity::Mathematics::double4 ywxy;

  __declspec(property(get = get_ywxz, put = set_ywxz)) ::Unity::Mathematics::double4 ywxz;

  __declspec(property(get = get_ywy)) ::Unity::Mathematics::double3 ywy;

  __declspec(property(get = get_ywyw)) ::Unity::Mathematics::double4 ywyw;

  __declspec(property(get = get_ywyx)) ::Unity::Mathematics::double4 ywyx;

  __declspec(property(get = get_ywyy)) ::Unity::Mathematics::double4 ywyy;

  __declspec(property(get = get_ywyz)) ::Unity::Mathematics::double4 ywyz;

  __declspec(property(get = get_ywz, put = set_ywz)) ::Unity::Mathematics::double3 ywz;

  __declspec(property(get = get_ywzw)) ::Unity::Mathematics::double4 ywzw;

  __declspec(property(get = get_ywzx, put = set_ywzx)) ::Unity::Mathematics::double4 ywzx;

  __declspec(property(get = get_ywzy)) ::Unity::Mathematics::double4 ywzy;

  __declspec(property(get = get_ywzz)) ::Unity::Mathematics::double4 ywzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::double2 yx;

  __declspec(property(get = get_yxw, put = set_yxw)) ::Unity::Mathematics::double3 yxw;

  __declspec(property(get = get_yxww)) ::Unity::Mathematics::double4 yxww;

  __declspec(property(get = get_yxwx)) ::Unity::Mathematics::double4 yxwx;

  __declspec(property(get = get_yxwy)) ::Unity::Mathematics::double4 yxwy;

  __declspec(property(get = get_yxwz, put = set_yxwz)) ::Unity::Mathematics::double4 yxwz;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::double3 yxx;

  __declspec(property(get = get_yxxw)) ::Unity::Mathematics::double4 yxxw;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::double4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::double4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::double4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::double3 yxy;

  __declspec(property(get = get_yxyw)) ::Unity::Mathematics::double4 yxyw;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::double4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::double4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::double4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::double3 yxz;

  __declspec(property(get = get_yxzw, put = set_yxzw)) ::Unity::Mathematics::double4 yxzw;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::double4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::double4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::double4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::double2 yy;

  __declspec(property(get = get_yyw)) ::Unity::Mathematics::double3 yyw;

  __declspec(property(get = get_yyww)) ::Unity::Mathematics::double4 yyww;

  __declspec(property(get = get_yywx)) ::Unity::Mathematics::double4 yywx;

  __declspec(property(get = get_yywy)) ::Unity::Mathematics::double4 yywy;

  __declspec(property(get = get_yywz)) ::Unity::Mathematics::double4 yywz;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::double3 yyx;

  __declspec(property(get = get_yyxw)) ::Unity::Mathematics::double4 yyxw;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::double4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::double4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::double4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::double3 yyy;

  __declspec(property(get = get_yyyw)) ::Unity::Mathematics::double4 yyyw;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::double4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::double4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::double4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::double3 yyz;

  __declspec(property(get = get_yyzw)) ::Unity::Mathematics::double4 yyzw;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::double4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::double4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::double4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::double2 yz;

  __declspec(property(get = get_yzw, put = set_yzw)) ::Unity::Mathematics::double3 yzw;

  __declspec(property(get = get_yzww)) ::Unity::Mathematics::double4 yzww;

  __declspec(property(get = get_yzwx, put = set_yzwx)) ::Unity::Mathematics::double4 yzwx;

  __declspec(property(get = get_yzwy)) ::Unity::Mathematics::double4 yzwy;

  __declspec(property(get = get_yzwz)) ::Unity::Mathematics::double4 yzwz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::double3 yzx;

  __declspec(property(get = get_yzxw, put = set_yzxw)) ::Unity::Mathematics::double4 yzxw;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::double4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::double4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::double4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::double3 yzy;

  __declspec(property(get = get_yzyw)) ::Unity::Mathematics::double4 yzyw;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::double4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::double4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::double4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::double3 yzz;

  __declspec(property(get = get_yzzw)) ::Unity::Mathematics::double4 yzzw;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::double4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::double4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::double4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0x20
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double4 zero;

  __declspec(property(get = get_zw, put = set_zw)) ::Unity::Mathematics::double2 zw;

  __declspec(property(get = get_zww)) ::Unity::Mathematics::double3 zww;

  __declspec(property(get = get_zwww)) ::Unity::Mathematics::double4 zwww;

  __declspec(property(get = get_zwwx)) ::Unity::Mathematics::double4 zwwx;

  __declspec(property(get = get_zwwy)) ::Unity::Mathematics::double4 zwwy;

  __declspec(property(get = get_zwwz)) ::Unity::Mathematics::double4 zwwz;

  __declspec(property(get = get_zwx, put = set_zwx)) ::Unity::Mathematics::double3 zwx;

  __declspec(property(get = get_zwxw)) ::Unity::Mathematics::double4 zwxw;

  __declspec(property(get = get_zwxx)) ::Unity::Mathematics::double4 zwxx;

  __declspec(property(get = get_zwxy, put = set_zwxy)) ::Unity::Mathematics::double4 zwxy;

  __declspec(property(get = get_zwxz)) ::Unity::Mathematics::double4 zwxz;

  __declspec(property(get = get_zwy, put = set_zwy)) ::Unity::Mathematics::double3 zwy;

  __declspec(property(get = get_zwyw)) ::Unity::Mathematics::double4 zwyw;

  __declspec(property(get = get_zwyx, put = set_zwyx)) ::Unity::Mathematics::double4 zwyx;

  __declspec(property(get = get_zwyy)) ::Unity::Mathematics::double4 zwyy;

  __declspec(property(get = get_zwyz)) ::Unity::Mathematics::double4 zwyz;

  __declspec(property(get = get_zwz)) ::Unity::Mathematics::double3 zwz;

  __declspec(property(get = get_zwzw)) ::Unity::Mathematics::double4 zwzw;

  __declspec(property(get = get_zwzx)) ::Unity::Mathematics::double4 zwzx;

  __declspec(property(get = get_zwzy)) ::Unity::Mathematics::double4 zwzy;

  __declspec(property(get = get_zwzz)) ::Unity::Mathematics::double4 zwzz;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::double2 zx;

  __declspec(property(get = get_zxw, put = set_zxw)) ::Unity::Mathematics::double3 zxw;

  __declspec(property(get = get_zxww)) ::Unity::Mathematics::double4 zxww;

  __declspec(property(get = get_zxwx)) ::Unity::Mathematics::double4 zxwx;

  __declspec(property(get = get_zxwy, put = set_zxwy)) ::Unity::Mathematics::double4 zxwy;

  __declspec(property(get = get_zxwz)) ::Unity::Mathematics::double4 zxwz;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::double3 zxx;

  __declspec(property(get = get_zxxw)) ::Unity::Mathematics::double4 zxxw;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::double4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::double4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::double4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::double3 zxy;

  __declspec(property(get = get_zxyw, put = set_zxyw)) ::Unity::Mathematics::double4 zxyw;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::double4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::double4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::double4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::double3 zxz;

  __declspec(property(get = get_zxzw)) ::Unity::Mathematics::double4 zxzw;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::double4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::double4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::double4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::double2 zy;

  __declspec(property(get = get_zyw, put = set_zyw)) ::Unity::Mathematics::double3 zyw;

  __declspec(property(get = get_zyww)) ::Unity::Mathematics::double4 zyww;

  __declspec(property(get = get_zywx, put = set_zywx)) ::Unity::Mathematics::double4 zywx;

  __declspec(property(get = get_zywy)) ::Unity::Mathematics::double4 zywy;

  __declspec(property(get = get_zywz)) ::Unity::Mathematics::double4 zywz;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::double3 zyx;

  __declspec(property(get = get_zyxw, put = set_zyxw)) ::Unity::Mathematics::double4 zyxw;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::double4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::double4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::double4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::double3 zyy;

  __declspec(property(get = get_zyyw)) ::Unity::Mathematics::double4 zyyw;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::double4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::double4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::double4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::double3 zyz;

  __declspec(property(get = get_zyzw)) ::Unity::Mathematics::double4 zyzw;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::double4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::double4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::double4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::double2 zz;

  __declspec(property(get = get_zzw)) ::Unity::Mathematics::double3 zzw;

  __declspec(property(get = get_zzww)) ::Unity::Mathematics::double4 zzww;

  __declspec(property(get = get_zzwx)) ::Unity::Mathematics::double4 zzwx;

  __declspec(property(get = get_zzwy)) ::Unity::Mathematics::double4 zzwy;

  __declspec(property(get = get_zzwz)) ::Unity::Mathematics::double4 zzwz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::double3 zzx;

  __declspec(property(get = get_zzxw)) ::Unity::Mathematics::double4 zzxw;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::double4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::double4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::double4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::double3 zzy;

  __declspec(property(get = get_zzyw)) ::Unity::Mathematics::double4 zzyw;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::double4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::double4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::double4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::double3 zzz;

  __declspec(property(get = get_zzzw)) ::Unity::Mathematics::double4 zzzw;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::double4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::double4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::double4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x461fce4, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x461fca8, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double4 rhs);

  /// @brief Method GetHashCode, addr 0x461fd8c, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x461fe04, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x461ffb0, size 0x194, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x461da70, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 v);

  /// @brief Method .ctor, addr 0x461dc64, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 v);

  /// @brief Method .ctor, addr 0x461db0c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x461db78, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half4 v);

  /// @brief Method .ctor, addr 0x461dab4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 v);

  /// @brief Method .ctor, addr 0x461dae8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 v);

  /// @brief Method .ctor, addr 0x461da54, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x461da48, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x461dc54, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x461daa4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x461dad8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x461d9e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y, double_t z, double_t w);

  /// @brief Method .ctor, addr 0x461d9f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y, ::Unity::Mathematics::double2 zw);

  /// @brief Method .ctor, addr 0x461da00, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t x, ::Unity::Mathematics::double2 yz, double_t w);

  /// @brief Method .ctor, addr 0x461da0c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t x, ::Unity::Mathematics::double3 yzw);

  /// @brief Method .ctor, addr 0x461da18, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 xy, double_t z, double_t w);

  /// @brief Method .ctor, addr 0x461da24, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 xy, ::Unity::Mathematics::double2 zw);

  /// @brief Method .ctor, addr 0x461da30, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 xyz, double_t w);

  /// @brief Method .ctor, addr 0x461da3c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 xyzw);

  static inline ::Unity::Mathematics::double4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x461fc98, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Item(int32_t index);

  /// @brief Method get_ww, addr 0x461fc8c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_ww();

  /// @brief Method get_www, addr 0x461fb68, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_www();

  /// @brief Method get_wwww, addr 0x461f6ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwww();

  /// @brief Method get_wwwx, addr 0x461f6b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwwx();

  /// @brief Method get_wwwy, addr 0x461f6c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwwy();

  /// @brief Method get_wwwz, addr 0x461f6dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwwz();

  /// @brief Method get_wwx, addr 0x461fb3c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wwx();

  /// @brief Method get_wwxw, addr 0x461f618, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwxw();

  /// @brief Method get_wwxx, addr 0x461f5e4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwxx();

  /// @brief Method get_wwxy, addr 0x461f5f8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwxy();

  /// @brief Method get_wwxz, addr 0x461f608, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwxz();

  /// @brief Method get_wwy, addr 0x461fb4c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wwy();

  /// @brief Method get_wwyw, addr 0x461f660, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwyw();

  /// @brief Method get_wwyx, addr 0x461f62c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwyx();

  /// @brief Method get_wwyy, addr 0x461f63c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwyy();

  /// @brief Method get_wwyz, addr 0x461f650, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwyz();

  /// @brief Method get_wwz, addr 0x461fb5c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wwz();

  /// @brief Method get_wwzw, addr 0x461f6a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwzw();

  /// @brief Method get_wwzx, addr 0x461f674, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwzx();

  /// @brief Method get_wwzy, addr 0x461f684, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwzy();

  /// @brief Method get_wwzz, addr 0x461f694, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wwzz();

  /// @brief Method get_wx, addr 0x461fc4c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_wx();

  /// @brief Method get_wxw, addr 0x461fa94, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wxw();

  /// @brief Method get_wxww, addr 0x461f3a0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxww();

  /// @brief Method get_wxwx, addr 0x461f36c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxwx();

  /// @brief Method get_wxwy, addr 0x461f380, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxwy();

  /// @brief Method get_wxwz, addr 0x461f390, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxwz();

  /// @brief Method get_wxx, addr 0x461fa54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wxx();

  /// @brief Method get_wxxw, addr 0x461f2c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxxw();

  /// @brief Method get_wxxx, addr 0x461f294, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxxx();

  /// @brief Method get_wxxy, addr 0x461f2a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxxy();

  /// @brief Method get_wxxz, addr 0x461f2b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxxz();

  /// @brief Method get_wxy, addr 0x461fa64, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wxy();

  /// @brief Method get_wxyw, addr 0x461f314, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxyw();

  /// @brief Method get_wxyx, addr 0x461f2dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxyx();

  /// @brief Method get_wxyy, addr 0x461f2ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxyy();

  /// @brief Method get_wxyz, addr 0x461f2fc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxyz();

  /// @brief Method get_wxz, addr 0x461fa7c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wxz();

  /// @brief Method get_wxzw, addr 0x461f35c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxzw();

  /// @brief Method get_wxzx, addr 0x461f324, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxzx();

  /// @brief Method get_wxzy, addr 0x461f334, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxzy();

  /// @brief Method get_wxzz, addr 0x461f34c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wxzz();

  /// @brief Method get_wy, addr 0x461fc64, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_wy();

  /// @brief Method get_wyw, addr 0x461fae4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wyw();

  /// @brief Method get_wyww, addr 0x461f4c0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyww();

  /// @brief Method get_wywx, addr 0x461f48c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wywx();

  /// @brief Method get_wywy, addr 0x461f49c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wywy();

  /// @brief Method get_wywz, addr 0x461f4b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wywz();

  /// @brief Method get_wyx, addr 0x461faa4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wyx();

  /// @brief Method get_wyxw, addr 0x461f3ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyxw();

  /// @brief Method get_wyxx, addr 0x461f3b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyxx();

  /// @brief Method get_wyxy, addr 0x461f3c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyxy();

  /// @brief Method get_wyxz, addr 0x461f3d4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyxz();

  /// @brief Method get_wyy, addr 0x461fabc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wyy();

  /// @brief Method get_wyyw, addr 0x461f430, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyyw();

  /// @brief Method get_wyyx, addr 0x461f3fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyyx();

  /// @brief Method get_wyyy, addr 0x461f40c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyyy();

  /// @brief Method get_wyyz, addr 0x461f420, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyyz();

  /// @brief Method get_wyz, addr 0x461facc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wyz();

  /// @brief Method get_wyzw, addr 0x461f47c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyzw();

  /// @brief Method get_wyzx, addr 0x461f444, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyzx();

  /// @brief Method get_wyzy, addr 0x461f45c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyzy();

  /// @brief Method get_wyzz, addr 0x461f46c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wyzz();

  /// @brief Method get_wz, addr 0x461fc7c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_wz();

  /// @brief Method get_wzw, addr 0x461fb30, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wzw();

  /// @brief Method get_wzww, addr 0x461f5d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzww();

  /// @brief Method get_wzwx, addr 0x461f5a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzwx();

  /// @brief Method get_wzwy, addr 0x461f5b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzwy();

  /// @brief Method get_wzwz, addr 0x461f5c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzwz();

  /// @brief Method get_wzx, addr 0x461faf4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wzx();

  /// @brief Method get_wzxw, addr 0x461f50c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzxw();

  /// @brief Method get_wzxx, addr 0x461f4d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzxx();

  /// @brief Method get_wzxy, addr 0x461f4e4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzxy();

  /// @brief Method get_wzxz, addr 0x461f4fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzxz();

  /// @brief Method get_wzy, addr 0x461fb0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wzy();

  /// @brief Method get_wzyw, addr 0x461f554, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzyw();

  /// @brief Method get_wzyx, addr 0x461f51c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzyx();

  /// @brief Method get_wzyy, addr 0x461f534, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzyy();

  /// @brief Method get_wzyz, addr 0x461f544, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzyz();

  /// @brief Method get_wzz, addr 0x461fb24, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_wzz();

  /// @brief Method get_wzzw, addr 0x461f594, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzzw();

  /// @brief Method get_wzzx, addr 0x461f564, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzzx();

  /// @brief Method get_wzzy, addr 0x461f574, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzzy();

  /// @brief Method get_wzzz, addr 0x461f584, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_wzzz();

  /// @brief Method get_xw, addr 0x461fbac, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xw();

  /// @brief Method get_xww, addr 0x461f814, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xww();

  /// @brief Method get_xwww, addr 0x461e9e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwww();

  /// @brief Method get_xwwx, addr 0x461e9ac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwwx();

  /// @brief Method get_xwwy, addr 0x461e9c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwwy();

  /// @brief Method get_xwwz, addr 0x461e9d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwwz();

  /// @brief Method get_xwx, addr 0x461f7d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xwx();

  /// @brief Method get_xwxw, addr 0x461e908, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwxw();

  /// @brief Method get_xwxx, addr 0x461e8d4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwxx();

  /// @brief Method get_xwxy, addr 0x461e8e8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwxy();

  /// @brief Method get_xwxz, addr 0x461e8f8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwxz();

  /// @brief Method get_xwy, addr 0x461f7e4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xwy();

  /// @brief Method get_xwyw, addr 0x461e954, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwyw();

  /// @brief Method get_xwyx, addr 0x461e91c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwyx();

  /// @brief Method get_xwyy, addr 0x461e92c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwyy();

  /// @brief Method get_xwyz, addr 0x461e93c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwyz();

  /// @brief Method get_xwz, addr 0x461f7fc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xwz();

  /// @brief Method get_xwzw, addr 0x461e99c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwzw();

  /// @brief Method get_xwzx, addr 0x461e964, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwzx();

  /// @brief Method get_xwzy, addr 0x461e974, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwzy();

  /// @brief Method get_xwzz, addr 0x461e98c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xwzz();

  /// @brief Method get_xx, addr 0x461fb78, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xx();

  /// @brief Method get_xxw, addr 0x461f72c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxw();

  /// @brief Method get_xxww, addr 0x461e690, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxww();

  /// @brief Method get_xxwx, addr 0x461e65c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxwx();

  /// @brief Method get_xxwy, addr 0x461e670, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxwy();

  /// @brief Method get_xxwz, addr 0x461e680, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxwz();

  /// @brief Method get_xxx, addr 0x461f700, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxx();

  /// @brief Method get_xxxw, addr 0x461e5c0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxw();

  /// @brief Method get_xxxx, addr 0x461e588, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x461e59c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x461e5ac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxz();

  /// @brief Method get_xxy, addr 0x461f710, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxy();

  /// @brief Method get_xxyw, addr 0x461e604, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyw();

  /// @brief Method get_xxyx, addr 0x461e5d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x461e5e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x461e5f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyz();

  /// @brief Method get_xxz, addr 0x461f71c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxz();

  /// @brief Method get_xxzw, addr 0x461e64c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzw();

  /// @brief Method get_xxzx, addr 0x461e614, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x461e628, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x461e638, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzz();

  /// @brief Method get_xy, addr 0x461fb84, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xy();

  /// @brief Method get_xyw, addr 0x461f76c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyw();

  /// @brief Method get_xyww, addr 0x461e7a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyww();

  /// @brief Method get_xywx, addr 0x461e76c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xywx();

  /// @brief Method get_xywy, addr 0x461e77c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xywy();

  /// @brief Method get_xywz, addr 0x461e78c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xywz();

  /// @brief Method get_xyx, addr 0x461f73c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyx();

  /// @brief Method get_xyxw, addr 0x461e6d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxw();

  /// @brief Method get_xyxx, addr 0x461e6a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x461e6b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x461e6c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxz();

  /// @brief Method get_xyy, addr 0x461f748, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyy();

  /// @brief Method get_xyyw, addr 0x461e714, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyw();

  /// @brief Method get_xyyx, addr 0x461e6e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x461e6f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x461e704, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyz();

  /// @brief Method get_xyz, addr 0x461f754, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyz();

  /// @brief Method get_xyzw, addr 0x461e754, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzw();

  /// @brief Method get_xyzx, addr 0x461e724, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x461e734, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x461e744, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzz();

  /// @brief Method get_xz, addr 0x461fb94, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xz();

  /// @brief Method get_xzw, addr 0x461f7bc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzw();

  /// @brief Method get_xzww, addr 0x461e8c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzww();

  /// @brief Method get_xzwx, addr 0x461e88c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzwx();

  /// @brief Method get_xzwy, addr 0x461e89c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzwy();

  /// @brief Method get_xzwz, addr 0x461e8b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzwz();

  /// @brief Method get_xzx, addr 0x461f784, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzx();

  /// @brief Method get_xzxw, addr 0x461e7ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxw();

  /// @brief Method get_xzxx, addr 0x461e7b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x461e7c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x461e7d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxz();

  /// @brief Method get_xzy, addr 0x461f794, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzy();

  /// @brief Method get_xzyw, addr 0x461e82c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyw();

  /// @brief Method get_xzyx, addr 0x461e7fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x461e80c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x461e81c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyz();

  /// @brief Method get_xzz, addr 0x461f7ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzz();

  /// @brief Method get_xzzw, addr 0x461e87c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzw();

  /// @brief Method get_xzzx, addr 0x461e844, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x461e858, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x461e868, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzz();

  /// @brief Method get_yw, addr 0x461fbf0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yw();

  /// @brief Method get_yww, addr 0x461f92c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yww();

  /// @brief Method get_ywww, addr 0x461ee30, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywww();

  /// @brief Method get_ywwx, addr 0x461edfc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywwx();

  /// @brief Method get_ywwy, addr 0x461ee0c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywwy();

  /// @brief Method get_ywwz, addr 0x461ee20, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywwz();

  /// @brief Method get_ywx, addr 0x461f8ec, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_ywx();

  /// @brief Method get_ywxw, addr 0x461ed5c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywxw();

  /// @brief Method get_ywxx, addr 0x461ed24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywxx();

  /// @brief Method get_ywxy, addr 0x461ed34, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywxy();

  /// @brief Method get_ywxz, addr 0x461ed44, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywxz();

  /// @brief Method get_ywy, addr 0x461f904, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_ywy();

  /// @brief Method get_ywyw, addr 0x461eda0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywyw();

  /// @brief Method get_ywyx, addr 0x461ed6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywyx();

  /// @brief Method get_ywyy, addr 0x461ed7c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywyy();

  /// @brief Method get_ywyz, addr 0x461ed90, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywyz();

  /// @brief Method get_ywz, addr 0x461f914, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_ywz();

  /// @brief Method get_ywzw, addr 0x461edec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywzw();

  /// @brief Method get_ywzx, addr 0x461edb4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywzx();

  /// @brief Method get_ywzy, addr 0x461edcc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywzy();

  /// @brief Method get_ywzz, addr 0x461eddc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_ywzz();

  /// @brief Method get_yx, addr 0x461fbc4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yx();

  /// @brief Method get_yxw, addr 0x461f854, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxw();

  /// @brief Method get_yxww, addr 0x461eaf4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxww();

  /// @brief Method get_yxwx, addr 0x461eabc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxwx();

  /// @brief Method get_yxwy, addr 0x461eacc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxwy();

  /// @brief Method get_yxwz, addr 0x461eadc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxwz();

  /// @brief Method get_yxx, addr 0x461f824, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxx();

  /// @brief Method get_yxxw, addr 0x461ea24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxw();

  /// @brief Method get_yxxx, addr 0x461e9f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x461ea04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x461ea14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxz();

  /// @brief Method get_yxy, addr 0x461f830, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxy();

  /// @brief Method get_yxyw, addr 0x461ea64, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyw();

  /// @brief Method get_yxyx, addr 0x461ea34, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x461ea44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x461ea54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyz();

  /// @brief Method get_yxz, addr 0x461f83c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxz();

  /// @brief Method get_yxzw, addr 0x461eaa4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzw();

  /// @brief Method get_yxzx, addr 0x461ea74, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x461ea84, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x461ea94, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzz();

  /// @brief Method get_yy, addr 0x461fbd4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yy();

  /// @brief Method get_yyw, addr 0x461f894, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyw();

  /// @brief Method get_yyww, addr 0x461ec00, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyww();

  /// @brief Method get_yywx, addr 0x461ebcc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yywx();

  /// @brief Method get_yywy, addr 0x461ebdc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yywy();

  /// @brief Method get_yywz, addr 0x461ebf0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yywz();

  /// @brief Method get_yyx, addr 0x461f86c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyx();

  /// @brief Method get_yyxw, addr 0x461eb34, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxw();

  /// @brief Method get_yyxx, addr 0x461eb04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x461eb14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x461eb24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxz();

  /// @brief Method get_yyy, addr 0x461f878, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyy();

  /// @brief Method get_yyyw, addr 0x461eb78, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyw();

  /// @brief Method get_yyyx, addr 0x461eb44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x461eb54, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x461eb68, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyz();

  /// @brief Method get_yyz, addr 0x461f888, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyz();

  /// @brief Method get_yyzw, addr 0x461ebbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzw();

  /// @brief Method get_yyzx, addr 0x461eb8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x461eb9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x461ebac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzz();

  /// @brief Method get_yz, addr 0x461fbe0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yz();

  /// @brief Method get_yzw, addr 0x461f8d4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzw();

  /// @brief Method get_yzww, addr 0x461ed14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzww();

  /// @brief Method get_yzwx, addr 0x461ecdc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzwx();

  /// @brief Method get_yzwy, addr 0x461ecf4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzwy();

  /// @brief Method get_yzwz, addr 0x461ed04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzwz();

  /// @brief Method get_yzx, addr 0x461f8a4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzx();

  /// @brief Method get_yzxw, addr 0x461ec44, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxw();

  /// @brief Method get_yzxx, addr 0x461ec14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x461ec24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x461ec34, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxz();

  /// @brief Method get_yzy, addr 0x461f8bc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzy();

  /// @brief Method get_yzyw, addr 0x461ec8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyw();

  /// @brief Method get_yzyx, addr 0x461ec5c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x461ec6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x461ec7c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyz();

  /// @brief Method get_yzz, addr 0x461f8c8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzz();

  /// @brief Method get_yzzw, addr 0x461eccc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzw();

  /// @brief Method get_yzzx, addr 0x461ec9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x461ecac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x461ecbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzz();

  /// @brief Method get_zw, addr 0x461fc3c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zw();

  /// @brief Method get_zww, addr 0x461fa48, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zww();

  /// @brief Method get_zwww, addr 0x461f284, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwww();

  /// @brief Method get_zwwx, addr 0x461f254, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwwx();

  /// @brief Method get_zwwy, addr 0x461f264, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwwy();

  /// @brief Method get_zwwz, addr 0x461f274, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwwz();

  /// @brief Method get_zwx, addr 0x461fa0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zwx();

  /// @brief Method get_zwxw, addr 0x461f1bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwxw();

  /// @brief Method get_zwxx, addr 0x461f184, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwxx();

  /// @brief Method get_zwxy, addr 0x461f194, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwxy();

  /// @brief Method get_zwxz, addr 0x461f1ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwxz();

  /// @brief Method get_zwy, addr 0x461fa24, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zwy();

  /// @brief Method get_zwyw, addr 0x461f204, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwyw();

  /// @brief Method get_zwyx, addr 0x461f1cc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwyx();

  /// @brief Method get_zwyy, addr 0x461f1e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwyy();

  /// @brief Method get_zwyz, addr 0x461f1f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwyz();

  /// @brief Method get_zwz, addr 0x461fa3c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zwz();

  /// @brief Method get_zwzw, addr 0x461f244, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwzw();

  /// @brief Method get_zwzx, addr 0x461f214, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwzx();

  /// @brief Method get_zwzy, addr 0x461f224, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwzy();

  /// @brief Method get_zwzz, addr 0x461f234, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zwzz();

  /// @brief Method get_zx, addr 0x461fc08, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zx();

  /// @brief Method get_zxw, addr 0x461f974, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxw();

  /// @brief Method get_zxww, addr 0x461ef54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxww();

  /// @brief Method get_zxwx, addr 0x461ef1c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxwx();

  /// @brief Method get_zxwy, addr 0x461ef2c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxwy();

  /// @brief Method get_zxwz, addr 0x461ef44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxwz();

  /// @brief Method get_zxx, addr 0x461f93c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxx();

  /// @brief Method get_zxxw, addr 0x461ee7c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxw();

  /// @brief Method get_zxxx, addr 0x461ee44, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x461ee58, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x461ee68, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxz();

  /// @brief Method get_zxy, addr 0x461f94c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxy();

  /// @brief Method get_zxyw, addr 0x461eebc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyw();

  /// @brief Method get_zxyx, addr 0x461ee8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x461ee9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x461eeac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyz();

  /// @brief Method get_zxz, addr 0x461f964, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxz();

  /// @brief Method get_zxzw, addr 0x461ef0c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzw();

  /// @brief Method get_zxzx, addr 0x461eed4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x461eee8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x461eef8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzz();

  /// @brief Method get_zy, addr 0x461fc20, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zy();

  /// @brief Method get_zyw, addr 0x461f9bc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyw();

  /// @brief Method get_zyww, addr 0x461f064, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyww();

  /// @brief Method get_zywx, addr 0x461f02c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zywx();

  /// @brief Method get_zywy, addr 0x461f044, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zywy();

  /// @brief Method get_zywz, addr 0x461f054, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zywz();

  /// @brief Method get_zyx, addr 0x461f98c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyx();

  /// @brief Method get_zyxw, addr 0x461ef94, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxw();

  /// @brief Method get_zyxx, addr 0x461ef64, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x461ef74, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x461ef84, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxz();

  /// @brief Method get_zyy, addr 0x461f9a4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyy();

  /// @brief Method get_zyyw, addr 0x461efdc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyw();

  /// @brief Method get_zyyx, addr 0x461efac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x461efbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x461efcc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyz();

  /// @brief Method get_zyz, addr 0x461f9b0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyz();

  /// @brief Method get_zyzw, addr 0x461f01c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzw();

  /// @brief Method get_zyzx, addr 0x461efec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x461effc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x461f00c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzz();

  /// @brief Method get_zz, addr 0x461fc30, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zz();

  /// @brief Method get_zzw, addr 0x461fa00, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzw();

  /// @brief Method get_zzww, addr 0x461f174, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzww();

  /// @brief Method get_zzwx, addr 0x461f144, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzwx();

  /// @brief Method get_zzwy, addr 0x461f154, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzwy();

  /// @brief Method get_zzwz, addr 0x461f164, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzwz();

  /// @brief Method get_zzx, addr 0x461f9d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzx();

  /// @brief Method get_zzxw, addr 0x461f0ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxw();

  /// @brief Method get_zzxx, addr 0x461f074, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x461f088, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x461f098, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxz();

  /// @brief Method get_zzy, addr 0x461f9e4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzy();

  /// @brief Method get_zzyw, addr 0x461f0ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyw();

  /// @brief Method get_zzyx, addr 0x461f0bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x461f0cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x461f0dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyz();

  /// @brief Method get_zzz, addr 0x461f9f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzz();

  /// @brief Method get_zzzw, addr 0x461f134, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzw();

  /// @brief Method get_zzzx, addr 0x461f0fc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x461f110, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x461f120, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double4>* i___System__IEquatable_1___Unity__Mathematics__double4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x461df58, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Addition(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Addition, addr 0x461df6c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Addition(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x461df80, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Addition(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Decrement, addr 0x461e1b0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Decrement(::Unity::Mathematics::double4 val);

  /// @brief Method op_Division, addr 0x461dfd8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Division(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Division, addr 0x461dfec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Division(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x461e000, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Division(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Equality, addr 0x461e450, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Equality, addr 0x461e484, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x461e4b8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Explicit, addr 0x461dcb0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Explicit___Unity__Mathematics__double4(::Unity::Mathematics::bool4 v);

  /// @brief Method op_Explicit, addr 0x461dc90, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Explicit___Unity__Mathematics__double4(bool v);

  /// @brief Method op_GreaterThan, addr 0x461e300, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_GreaterThan, addr 0x461e334, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x461e368, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x461e39c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x461e3d0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x461e404, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Implicit, addr 0x461df04, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::float4 v);

  /// @brief Method op_Implicit, addr 0x461dd3c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x461ddac, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::half4 v);

  /// @brief Method op_Implicit, addr 0x461dcf0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::int4 v);

  /// @brief Method op_Implicit, addr 0x461dd20, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::uint4 v);

  /// @brief Method op_Implicit, addr 0x461dc80, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(double_t v);

  /// @brief Method op_Implicit, addr 0x461def0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(float_t v);

  /// @brief Method op_Implicit, addr 0x461dcdc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(int32_t v);

  /// @brief Method op_Implicit, addr 0x461dd0c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Implicit___Unity__Mathematics__double4(uint32_t v);

  /// @brief Method op_Increment, addr 0x461e198, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Increment(::Unity::Mathematics::double4 val);

  /// @brief Method op_Inequality, addr 0x461e4ec, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Inequality, addr 0x461e520, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x461e554, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_LessThan, addr 0x461e1c8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_LessThan, addr 0x461e1fc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x461e230, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThan(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x461e264, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x461e298, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x461e2cc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Modulus, addr 0x461e018, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Modulus(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Modulus, addr 0x461e0a4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Modulus(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x461e120, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Modulus(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Multiply, addr 0x461df18, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Multiply(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Multiply, addr 0x461df2c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Multiply(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x461df40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Multiply(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Subtraction, addr 0x461df98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Subtraction(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_Subtraction, addr 0x461dfac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Subtraction(::Unity::Mathematics::double4 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x461dfc0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_Subtraction(double_t lhs, ::Unity::Mathematics::double4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x461e438, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_UnaryNegation(::Unity::Mathematics::double4 val);

  /// @brief Method op_UnaryPlus, addr 0x461e44c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 op_UnaryPlus(::Unity::Mathematics::double4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double4 value);

  /// @brief Method set_Item, addr 0x461fca0, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, double_t value);

  /// @brief Method set_wx, addr 0x461fc58, size 0xc, virtual false, abstract: false, final false
  inline void set_wx(::Unity::Mathematics::double2 value);

  /// @brief Method set_wxy, addr 0x461fa70, size 0xc, virtual false, abstract: false, final false
  inline void set_wxy(::Unity::Mathematics::double3 value);

  /// @brief Method set_wxyz, addr 0x461f308, size 0xc, virtual false, abstract: false, final false
  inline void set_wxyz(::Unity::Mathematics::double4 value);

  /// @brief Method set_wxz, addr 0x461fa88, size 0xc, virtual false, abstract: false, final false
  inline void set_wxz(::Unity::Mathematics::double3 value);

  /// @brief Method set_wxzy, addr 0x461f340, size 0xc, virtual false, abstract: false, final false
  inline void set_wxzy(::Unity::Mathematics::double4 value);

  /// @brief Method set_wy, addr 0x461fc70, size 0xc, virtual false, abstract: false, final false
  inline void set_wy(::Unity::Mathematics::double2 value);

  /// @brief Method set_wyx, addr 0x461fab0, size 0xc, virtual false, abstract: false, final false
  inline void set_wyx(::Unity::Mathematics::double3 value);

  /// @brief Method set_wyxz, addr 0x461f3e0, size 0xc, virtual false, abstract: false, final false
  inline void set_wyxz(::Unity::Mathematics::double4 value);

  /// @brief Method set_wyz, addr 0x461fad8, size 0xc, virtual false, abstract: false, final false
  inline void set_wyz(::Unity::Mathematics::double3 value);

  /// @brief Method set_wyzx, addr 0x461f450, size 0xc, virtual false, abstract: false, final false
  inline void set_wyzx(::Unity::Mathematics::double4 value);

  /// @brief Method set_wz, addr 0x461fc84, size 0x8, virtual false, abstract: false, final false
  inline void set_wz(::Unity::Mathematics::double2 value);

  /// @brief Method set_wzx, addr 0x461fb00, size 0xc, virtual false, abstract: false, final false
  inline void set_wzx(::Unity::Mathematics::double3 value);

  /// @brief Method set_wzxy, addr 0x461f4f0, size 0xc, virtual false, abstract: false, final false
  inline void set_wzxy(::Unity::Mathematics::double4 value);

  /// @brief Method set_wzy, addr 0x461fb18, size 0xc, virtual false, abstract: false, final false
  inline void set_wzy(::Unity::Mathematics::double3 value);

  /// @brief Method set_wzyx, addr 0x461f528, size 0xc, virtual false, abstract: false, final false
  inline void set_wzyx(::Unity::Mathematics::double4 value);

  /// @brief Method set_xw, addr 0x461fbb8, size 0xc, virtual false, abstract: false, final false
  inline void set_xw(::Unity::Mathematics::double2 value);

  /// @brief Method set_xwy, addr 0x461f7f0, size 0xc, virtual false, abstract: false, final false
  inline void set_xwy(::Unity::Mathematics::double3 value);

  /// @brief Method set_xwyz, addr 0x461e948, size 0xc, virtual false, abstract: false, final false
  inline void set_xwyz(::Unity::Mathematics::double4 value);

  /// @brief Method set_xwz, addr 0x461f808, size 0xc, virtual false, abstract: false, final false
  inline void set_xwz(::Unity::Mathematics::double3 value);

  /// @brief Method set_xwzy, addr 0x461e980, size 0xc, virtual false, abstract: false, final false
  inline void set_xwzy(::Unity::Mathematics::double4 value);

  /// @brief Method set_xy, addr 0x461fb8c, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::double2 value);

  /// @brief Method set_xyw, addr 0x461f778, size 0xc, virtual false, abstract: false, final false
  inline void set_xyw(::Unity::Mathematics::double3 value);

  /// @brief Method set_xywz, addr 0x461e798, size 0xc, virtual false, abstract: false, final false
  inline void set_xywz(::Unity::Mathematics::double4 value);

  /// @brief Method set_xyz, addr 0x461f760, size 0xc, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::double3 value);

  /// @brief Method set_xyzw, addr 0x461e760, size 0xc, virtual false, abstract: false, final false
  inline void set_xyzw(::Unity::Mathematics::double4 value);

  /// @brief Method set_xz, addr 0x461fba0, size 0xc, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::double2 value);

  /// @brief Method set_xzw, addr 0x461f7c8, size 0xc, virtual false, abstract: false, final false
  inline void set_xzw(::Unity::Mathematics::double3 value);

  /// @brief Method set_xzwy, addr 0x461e8a8, size 0xc, virtual false, abstract: false, final false
  inline void set_xzwy(::Unity::Mathematics::double4 value);

  /// @brief Method set_xzy, addr 0x461f7a0, size 0xc, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::double3 value);

  /// @brief Method set_xzyw, addr 0x461e838, size 0xc, virtual false, abstract: false, final false
  inline void set_xzyw(::Unity::Mathematics::double4 value);

  /// @brief Method set_yw, addr 0x461fbfc, size 0xc, virtual false, abstract: false, final false
  inline void set_yw(::Unity::Mathematics::double2 value);

  /// @brief Method set_ywx, addr 0x461f8f8, size 0xc, virtual false, abstract: false, final false
  inline void set_ywx(::Unity::Mathematics::double3 value);

  /// @brief Method set_ywxz, addr 0x461ed50, size 0xc, virtual false, abstract: false, final false
  inline void set_ywxz(::Unity::Mathematics::double4 value);

  /// @brief Method set_ywz, addr 0x461f920, size 0xc, virtual false, abstract: false, final false
  inline void set_ywz(::Unity::Mathematics::double3 value);

  /// @brief Method set_ywzx, addr 0x461edc0, size 0xc, virtual false, abstract: false, final false
  inline void set_ywzx(::Unity::Mathematics::double4 value);

  /// @brief Method set_yx, addr 0x461fbcc, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::double2 value);

  /// @brief Method set_yxw, addr 0x461f860, size 0xc, virtual false, abstract: false, final false
  inline void set_yxw(::Unity::Mathematics::double3 value);

  /// @brief Method set_yxwz, addr 0x461eae8, size 0xc, virtual false, abstract: false, final false
  inline void set_yxwz(::Unity::Mathematics::double4 value);

  /// @brief Method set_yxz, addr 0x461f848, size 0xc, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::double3 value);

  /// @brief Method set_yxzw, addr 0x461eab0, size 0xc, virtual false, abstract: false, final false
  inline void set_yxzw(::Unity::Mathematics::double4 value);

  /// @brief Method set_yz, addr 0x461fbe8, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::double2 value);

  /// @brief Method set_yzw, addr 0x461f8e0, size 0xc, virtual false, abstract: false, final false
  inline void set_yzw(::Unity::Mathematics::double3 value);

  /// @brief Method set_yzwx, addr 0x461ece8, size 0xc, virtual false, abstract: false, final false
  inline void set_yzwx(::Unity::Mathematics::double4 value);

  /// @brief Method set_yzx, addr 0x461f8b0, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::double3 value);

  /// @brief Method set_yzxw, addr 0x461ec50, size 0xc, virtual false, abstract: false, final false
  inline void set_yzxw(::Unity::Mathematics::double4 value);

  /// @brief Method set_zw, addr 0x461fc44, size 0x8, virtual false, abstract: false, final false
  inline void set_zw(::Unity::Mathematics::double2 value);

  /// @brief Method set_zwx, addr 0x461fa18, size 0xc, virtual false, abstract: false, final false
  inline void set_zwx(::Unity::Mathematics::double3 value);

  /// @brief Method set_zwxy, addr 0x461f1a0, size 0xc, virtual false, abstract: false, final false
  inline void set_zwxy(::Unity::Mathematics::double4 value);

  /// @brief Method set_zwy, addr 0x461fa30, size 0xc, virtual false, abstract: false, final false
  inline void set_zwy(::Unity::Mathematics::double3 value);

  /// @brief Method set_zwyx, addr 0x461f1d8, size 0xc, virtual false, abstract: false, final false
  inline void set_zwyx(::Unity::Mathematics::double4 value);

  /// @brief Method set_zx, addr 0x461fc14, size 0xc, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::double2 value);

  /// @brief Method set_zxw, addr 0x461f980, size 0xc, virtual false, abstract: false, final false
  inline void set_zxw(::Unity::Mathematics::double3 value);

  /// @brief Method set_zxwy, addr 0x461ef38, size 0xc, virtual false, abstract: false, final false
  inline void set_zxwy(::Unity::Mathematics::double4 value);

  /// @brief Method set_zxy, addr 0x461f958, size 0xc, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::double3 value);

  /// @brief Method set_zxyw, addr 0x461eec8, size 0xc, virtual false, abstract: false, final false
  inline void set_zxyw(::Unity::Mathematics::double4 value);

  /// @brief Method set_zy, addr 0x461fc28, size 0x8, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::double2 value);

  /// @brief Method set_zyw, addr 0x461f9c8, size 0xc, virtual false, abstract: false, final false
  inline void set_zyw(::Unity::Mathematics::double3 value);

  /// @brief Method set_zywx, addr 0x461f038, size 0xc, virtual false, abstract: false, final false
  inline void set_zywx(::Unity::Mathematics::double4 value);

  /// @brief Method set_zyx, addr 0x461f998, size 0xc, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::double3 value);

  /// @brief Method set_zyxw, addr 0x461efa0, size 0xc, virtual false, abstract: false, final false
  inline void set_zyxw(::Unity::Mathematics::double4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double4();

  // Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "z", ty:
  // "double_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "double_t", modifiers: "", def_value: None }]
  constexpr double4(double_t x, double_t y, double_t z, double_t w) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x8, def value: None
  double_t x;

  /// @brief Field y, offset: 0x8, size: 0x8, def value: None
  double_t y;

  /// @brief Field z, offset: 0x10, size: 0x8, def value: None
  double_t z;

  /// @brief Field w, offset: 0x18, size: 0x8, def value: None
  double_t w;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9940 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double4, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4, z) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4, w) == 0x18, "Offset mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__double4__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__double4__DebuggerProxy*, "Unity.Mathematics", "double4/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double4, "Unity.Mathematics", "double4");
