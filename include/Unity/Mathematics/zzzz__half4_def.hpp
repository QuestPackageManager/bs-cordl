#pragma once
// IWYU pragma private; include "Unity/Mathematics/half4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(half4)
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
class __half4__DebuggerProxy;
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
struct half2;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct half;
}
// Forward declare root types
namespace Unity::Mathematics {
class __half4__DebuggerProxy;
}
namespace Unity::Mathematics {
struct half4;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__half4__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::half4);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 2, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::half4::DebuggerProxy*
class CORDL_TYPE __half4__DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field w, offset 0x16, size 0x2
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w))::Unity::Mathematics::half w;

  /// @brief Field x, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x))::Unity::Mathematics::half x;

  /// @brief Field y, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y))::Unity::Mathematics::half y;

  /// @brief Field z, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z))::Unity::Mathematics::half z;

  static inline ::Unity::Mathematics::__half4__DebuggerProxy* New_ctor(::Unity::Mathematics::half4 v);

  constexpr ::Unity::Mathematics::half const& __cordl_internal_get_w() const;

  constexpr ::Unity::Mathematics::half& __cordl_internal_get_w();

  constexpr ::Unity::Mathematics::half const& __cordl_internal_get_x() const;

  constexpr ::Unity::Mathematics::half& __cordl_internal_get_x();

  constexpr ::Unity::Mathematics::half const& __cordl_internal_get_y() const;

  constexpr ::Unity::Mathematics::half& __cordl_internal_get_y();

  constexpr ::Unity::Mathematics::half const& __cordl_internal_get_z() const;

  constexpr ::Unity::Mathematics::half& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_w(::Unity::Mathematics::half value);

  constexpr void __cordl_internal_set_x(::Unity::Mathematics::half value);

  constexpr void __cordl_internal_set_y(::Unity::Mathematics::half value);

  constexpr void __cordl_internal_set_z(::Unity::Mathematics::half value);

  /// @brief Method .ctor, addr 0x323946c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half4 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __half4__DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__half4__DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __half4__DebuggerProxy(__half4__DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__half4__DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __half4__DebuggerProxy(__half4__DebuggerProxy const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x2, def value: None
  ::Unity::Mathematics::half ___x;

  /// @brief Field y, offset: 0x12, size: 0x2, def value: None
  ::Unity::Mathematics::half ___y;

  /// @brief Field z, offset: 0x14, size: 0x2, def value: None
  ::Unity::Mathematics::half ___z;

  /// @brief Field w, offset: 0x16, size: 0x2, def value: None
  ::Unity::Mathematics::half ___w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__half4__DebuggerProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half4__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half4__DebuggerProxy, ___y) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half4__DebuggerProxy, ___z) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half4__DebuggerProxy, ___w) == 0x16, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::half4
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::half4
struct CORDL_TYPE half4 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::__half4__DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item))::Unity::Mathematics::half Item[];

  __declspec(property(get = get_ww))::Unity::Mathematics::half2 ww;

  __declspec(property(get = get_www))::Unity::Mathematics::half3 www;

  __declspec(property(get = get_wwww))::Unity::Mathematics::half4 wwww;

  __declspec(property(get = get_wwwx))::Unity::Mathematics::half4 wwwx;

  __declspec(property(get = get_wwwy))::Unity::Mathematics::half4 wwwy;

  __declspec(property(get = get_wwwz))::Unity::Mathematics::half4 wwwz;

  __declspec(property(get = get_wwx))::Unity::Mathematics::half3 wwx;

  __declspec(property(get = get_wwxw))::Unity::Mathematics::half4 wwxw;

  __declspec(property(get = get_wwxx))::Unity::Mathematics::half4 wwxx;

  __declspec(property(get = get_wwxy))::Unity::Mathematics::half4 wwxy;

  __declspec(property(get = get_wwxz))::Unity::Mathematics::half4 wwxz;

  __declspec(property(get = get_wwy))::Unity::Mathematics::half3 wwy;

  __declspec(property(get = get_wwyw))::Unity::Mathematics::half4 wwyw;

  __declspec(property(get = get_wwyx))::Unity::Mathematics::half4 wwyx;

  __declspec(property(get = get_wwyy))::Unity::Mathematics::half4 wwyy;

  __declspec(property(get = get_wwyz))::Unity::Mathematics::half4 wwyz;

  __declspec(property(get = get_wwz))::Unity::Mathematics::half3 wwz;

  __declspec(property(get = get_wwzw))::Unity::Mathematics::half4 wwzw;

  __declspec(property(get = get_wwzx))::Unity::Mathematics::half4 wwzx;

  __declspec(property(get = get_wwzy))::Unity::Mathematics::half4 wwzy;

  __declspec(property(get = get_wwzz))::Unity::Mathematics::half4 wwzz;

  __declspec(property(get = get_wx, put = set_wx))::Unity::Mathematics::half2 wx;

  __declspec(property(get = get_wxw))::Unity::Mathematics::half3 wxw;

  __declspec(property(get = get_wxww))::Unity::Mathematics::half4 wxww;

  __declspec(property(get = get_wxwx))::Unity::Mathematics::half4 wxwx;

  __declspec(property(get = get_wxwy))::Unity::Mathematics::half4 wxwy;

  __declspec(property(get = get_wxwz))::Unity::Mathematics::half4 wxwz;

  __declspec(property(get = get_wxx))::Unity::Mathematics::half3 wxx;

  __declspec(property(get = get_wxxw))::Unity::Mathematics::half4 wxxw;

  __declspec(property(get = get_wxxx))::Unity::Mathematics::half4 wxxx;

  __declspec(property(get = get_wxxy))::Unity::Mathematics::half4 wxxy;

  __declspec(property(get = get_wxxz))::Unity::Mathematics::half4 wxxz;

  __declspec(property(get = get_wxy, put = set_wxy))::Unity::Mathematics::half3 wxy;

  __declspec(property(get = get_wxyw))::Unity::Mathematics::half4 wxyw;

  __declspec(property(get = get_wxyx))::Unity::Mathematics::half4 wxyx;

  __declspec(property(get = get_wxyy))::Unity::Mathematics::half4 wxyy;

  __declspec(property(get = get_wxyz, put = set_wxyz))::Unity::Mathematics::half4 wxyz;

  __declspec(property(get = get_wxz, put = set_wxz))::Unity::Mathematics::half3 wxz;

  __declspec(property(get = get_wxzw))::Unity::Mathematics::half4 wxzw;

  __declspec(property(get = get_wxzx))::Unity::Mathematics::half4 wxzx;

  __declspec(property(get = get_wxzy, put = set_wxzy))::Unity::Mathematics::half4 wxzy;

  __declspec(property(get = get_wxzz))::Unity::Mathematics::half4 wxzz;

  __declspec(property(get = get_wy, put = set_wy))::Unity::Mathematics::half2 wy;

  __declspec(property(get = get_wyw))::Unity::Mathematics::half3 wyw;

  __declspec(property(get = get_wyww))::Unity::Mathematics::half4 wyww;

  __declspec(property(get = get_wywx))::Unity::Mathematics::half4 wywx;

  __declspec(property(get = get_wywy))::Unity::Mathematics::half4 wywy;

  __declspec(property(get = get_wywz))::Unity::Mathematics::half4 wywz;

  __declspec(property(get = get_wyx, put = set_wyx))::Unity::Mathematics::half3 wyx;

  __declspec(property(get = get_wyxw))::Unity::Mathematics::half4 wyxw;

  __declspec(property(get = get_wyxx))::Unity::Mathematics::half4 wyxx;

  __declspec(property(get = get_wyxy))::Unity::Mathematics::half4 wyxy;

  __declspec(property(get = get_wyxz, put = set_wyxz))::Unity::Mathematics::half4 wyxz;

  __declspec(property(get = get_wyy))::Unity::Mathematics::half3 wyy;

  __declspec(property(get = get_wyyw))::Unity::Mathematics::half4 wyyw;

  __declspec(property(get = get_wyyx))::Unity::Mathematics::half4 wyyx;

  __declspec(property(get = get_wyyy))::Unity::Mathematics::half4 wyyy;

  __declspec(property(get = get_wyyz))::Unity::Mathematics::half4 wyyz;

  __declspec(property(get = get_wyz, put = set_wyz))::Unity::Mathematics::half3 wyz;

  __declspec(property(get = get_wyzw))::Unity::Mathematics::half4 wyzw;

  __declspec(property(get = get_wyzx, put = set_wyzx))::Unity::Mathematics::half4 wyzx;

  __declspec(property(get = get_wyzy))::Unity::Mathematics::half4 wyzy;

  __declspec(property(get = get_wyzz))::Unity::Mathematics::half4 wyzz;

  __declspec(property(get = get_wz, put = set_wz))::Unity::Mathematics::half2 wz;

  __declspec(property(get = get_wzw))::Unity::Mathematics::half3 wzw;

  __declspec(property(get = get_wzww))::Unity::Mathematics::half4 wzww;

  __declspec(property(get = get_wzwx))::Unity::Mathematics::half4 wzwx;

  __declspec(property(get = get_wzwy))::Unity::Mathematics::half4 wzwy;

  __declspec(property(get = get_wzwz))::Unity::Mathematics::half4 wzwz;

  __declspec(property(get = get_wzx, put = set_wzx))::Unity::Mathematics::half3 wzx;

  __declspec(property(get = get_wzxw))::Unity::Mathematics::half4 wzxw;

  __declspec(property(get = get_wzxx))::Unity::Mathematics::half4 wzxx;

  __declspec(property(get = get_wzxy, put = set_wzxy))::Unity::Mathematics::half4 wzxy;

  __declspec(property(get = get_wzxz))::Unity::Mathematics::half4 wzxz;

  __declspec(property(get = get_wzy, put = set_wzy))::Unity::Mathematics::half3 wzy;

  __declspec(property(get = get_wzyw))::Unity::Mathematics::half4 wzyw;

  __declspec(property(get = get_wzyx, put = set_wzyx))::Unity::Mathematics::half4 wzyx;

  __declspec(property(get = get_wzyy))::Unity::Mathematics::half4 wzyy;

  __declspec(property(get = get_wzyz))::Unity::Mathematics::half4 wzyz;

  __declspec(property(get = get_wzz))::Unity::Mathematics::half3 wzz;

  __declspec(property(get = get_wzzw))::Unity::Mathematics::half4 wzzw;

  __declspec(property(get = get_wzzx))::Unity::Mathematics::half4 wzzx;

  __declspec(property(get = get_wzzy))::Unity::Mathematics::half4 wzzy;

  __declspec(property(get = get_wzzz))::Unity::Mathematics::half4 wzzz;

  __declspec(property(get = get_xw, put = set_xw))::Unity::Mathematics::half2 xw;

  __declspec(property(get = get_xww))::Unity::Mathematics::half3 xww;

  __declspec(property(get = get_xwww))::Unity::Mathematics::half4 xwww;

  __declspec(property(get = get_xwwx))::Unity::Mathematics::half4 xwwx;

  __declspec(property(get = get_xwwy))::Unity::Mathematics::half4 xwwy;

  __declspec(property(get = get_xwwz))::Unity::Mathematics::half4 xwwz;

  __declspec(property(get = get_xwx))::Unity::Mathematics::half3 xwx;

  __declspec(property(get = get_xwxw))::Unity::Mathematics::half4 xwxw;

  __declspec(property(get = get_xwxx))::Unity::Mathematics::half4 xwxx;

  __declspec(property(get = get_xwxy))::Unity::Mathematics::half4 xwxy;

  __declspec(property(get = get_xwxz))::Unity::Mathematics::half4 xwxz;

  __declspec(property(get = get_xwy, put = set_xwy))::Unity::Mathematics::half3 xwy;

  __declspec(property(get = get_xwyw))::Unity::Mathematics::half4 xwyw;

  __declspec(property(get = get_xwyx))::Unity::Mathematics::half4 xwyx;

  __declspec(property(get = get_xwyy))::Unity::Mathematics::half4 xwyy;

  __declspec(property(get = get_xwyz, put = set_xwyz))::Unity::Mathematics::half4 xwyz;

  __declspec(property(get = get_xwz, put = set_xwz))::Unity::Mathematics::half3 xwz;

  __declspec(property(get = get_xwzw))::Unity::Mathematics::half4 xwzw;

  __declspec(property(get = get_xwzx))::Unity::Mathematics::half4 xwzx;

  __declspec(property(get = get_xwzy, put = set_xwzy))::Unity::Mathematics::half4 xwzy;

  __declspec(property(get = get_xwzz))::Unity::Mathematics::half4 xwzz;

  __declspec(property(get = get_xx))::Unity::Mathematics::half2 xx;

  __declspec(property(get = get_xxw))::Unity::Mathematics::half3 xxw;

  __declspec(property(get = get_xxww))::Unity::Mathematics::half4 xxww;

  __declspec(property(get = get_xxwx))::Unity::Mathematics::half4 xxwx;

  __declspec(property(get = get_xxwy))::Unity::Mathematics::half4 xxwy;

  __declspec(property(get = get_xxwz))::Unity::Mathematics::half4 xxwz;

  __declspec(property(get = get_xxx))::Unity::Mathematics::half3 xxx;

  __declspec(property(get = get_xxxw))::Unity::Mathematics::half4 xxxw;

  __declspec(property(get = get_xxxx))::Unity::Mathematics::half4 xxxx;

  __declspec(property(get = get_xxxy))::Unity::Mathematics::half4 xxxy;

  __declspec(property(get = get_xxxz))::Unity::Mathematics::half4 xxxz;

  __declspec(property(get = get_xxy))::Unity::Mathematics::half3 xxy;

  __declspec(property(get = get_xxyw))::Unity::Mathematics::half4 xxyw;

  __declspec(property(get = get_xxyx))::Unity::Mathematics::half4 xxyx;

  __declspec(property(get = get_xxyy))::Unity::Mathematics::half4 xxyy;

  __declspec(property(get = get_xxyz))::Unity::Mathematics::half4 xxyz;

  __declspec(property(get = get_xxz))::Unity::Mathematics::half3 xxz;

  __declspec(property(get = get_xxzw))::Unity::Mathematics::half4 xxzw;

  __declspec(property(get = get_xxzx))::Unity::Mathematics::half4 xxzx;

  __declspec(property(get = get_xxzy))::Unity::Mathematics::half4 xxzy;

  __declspec(property(get = get_xxzz))::Unity::Mathematics::half4 xxzz;

  __declspec(property(get = get_xy, put = set_xy))::Unity::Mathematics::half2 xy;

  __declspec(property(get = get_xyw, put = set_xyw))::Unity::Mathematics::half3 xyw;

  __declspec(property(get = get_xyww))::Unity::Mathematics::half4 xyww;

  __declspec(property(get = get_xywx))::Unity::Mathematics::half4 xywx;

  __declspec(property(get = get_xywy))::Unity::Mathematics::half4 xywy;

  __declspec(property(get = get_xywz, put = set_xywz))::Unity::Mathematics::half4 xywz;

  __declspec(property(get = get_xyx))::Unity::Mathematics::half3 xyx;

  __declspec(property(get = get_xyxw))::Unity::Mathematics::half4 xyxw;

  __declspec(property(get = get_xyxx))::Unity::Mathematics::half4 xyxx;

  __declspec(property(get = get_xyxy))::Unity::Mathematics::half4 xyxy;

  __declspec(property(get = get_xyxz))::Unity::Mathematics::half4 xyxz;

  __declspec(property(get = get_xyy))::Unity::Mathematics::half3 xyy;

  __declspec(property(get = get_xyyw))::Unity::Mathematics::half4 xyyw;

  __declspec(property(get = get_xyyx))::Unity::Mathematics::half4 xyyx;

  __declspec(property(get = get_xyyy))::Unity::Mathematics::half4 xyyy;

  __declspec(property(get = get_xyyz))::Unity::Mathematics::half4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz))::Unity::Mathematics::half3 xyz;

  __declspec(property(get = get_xyzw, put = set_xyzw))::Unity::Mathematics::half4 xyzw;

  __declspec(property(get = get_xyzx))::Unity::Mathematics::half4 xyzx;

  __declspec(property(get = get_xyzy))::Unity::Mathematics::half4 xyzy;

  __declspec(property(get = get_xyzz))::Unity::Mathematics::half4 xyzz;

  __declspec(property(get = get_xz, put = set_xz))::Unity::Mathematics::half2 xz;

  __declspec(property(get = get_xzw, put = set_xzw))::Unity::Mathematics::half3 xzw;

  __declspec(property(get = get_xzww))::Unity::Mathematics::half4 xzww;

  __declspec(property(get = get_xzwx))::Unity::Mathematics::half4 xzwx;

  __declspec(property(get = get_xzwy, put = set_xzwy))::Unity::Mathematics::half4 xzwy;

  __declspec(property(get = get_xzwz))::Unity::Mathematics::half4 xzwz;

  __declspec(property(get = get_xzx))::Unity::Mathematics::half3 xzx;

  __declspec(property(get = get_xzxw))::Unity::Mathematics::half4 xzxw;

  __declspec(property(get = get_xzxx))::Unity::Mathematics::half4 xzxx;

  __declspec(property(get = get_xzxy))::Unity::Mathematics::half4 xzxy;

  __declspec(property(get = get_xzxz))::Unity::Mathematics::half4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy))::Unity::Mathematics::half3 xzy;

  __declspec(property(get = get_xzyw, put = set_xzyw))::Unity::Mathematics::half4 xzyw;

  __declspec(property(get = get_xzyx))::Unity::Mathematics::half4 xzyx;

  __declspec(property(get = get_xzyy))::Unity::Mathematics::half4 xzyy;

  __declspec(property(get = get_xzyz))::Unity::Mathematics::half4 xzyz;

  __declspec(property(get = get_xzz))::Unity::Mathematics::half3 xzz;

  __declspec(property(get = get_xzzw))::Unity::Mathematics::half4 xzzw;

  __declspec(property(get = get_xzzx))::Unity::Mathematics::half4 xzzx;

  __declspec(property(get = get_xzzy))::Unity::Mathematics::half4 xzzy;

  __declspec(property(get = get_xzzz))::Unity::Mathematics::half4 xzzz;

  __declspec(property(get = get_yw, put = set_yw))::Unity::Mathematics::half2 yw;

  __declspec(property(get = get_yww))::Unity::Mathematics::half3 yww;

  __declspec(property(get = get_ywww))::Unity::Mathematics::half4 ywww;

  __declspec(property(get = get_ywwx))::Unity::Mathematics::half4 ywwx;

  __declspec(property(get = get_ywwy))::Unity::Mathematics::half4 ywwy;

  __declspec(property(get = get_ywwz))::Unity::Mathematics::half4 ywwz;

  __declspec(property(get = get_ywx, put = set_ywx))::Unity::Mathematics::half3 ywx;

  __declspec(property(get = get_ywxw))::Unity::Mathematics::half4 ywxw;

  __declspec(property(get = get_ywxx))::Unity::Mathematics::half4 ywxx;

  __declspec(property(get = get_ywxy))::Unity::Mathematics::half4 ywxy;

  __declspec(property(get = get_ywxz, put = set_ywxz))::Unity::Mathematics::half4 ywxz;

  __declspec(property(get = get_ywy))::Unity::Mathematics::half3 ywy;

  __declspec(property(get = get_ywyw))::Unity::Mathematics::half4 ywyw;

  __declspec(property(get = get_ywyx))::Unity::Mathematics::half4 ywyx;

  __declspec(property(get = get_ywyy))::Unity::Mathematics::half4 ywyy;

  __declspec(property(get = get_ywyz))::Unity::Mathematics::half4 ywyz;

  __declspec(property(get = get_ywz, put = set_ywz))::Unity::Mathematics::half3 ywz;

  __declspec(property(get = get_ywzw))::Unity::Mathematics::half4 ywzw;

  __declspec(property(get = get_ywzx, put = set_ywzx))::Unity::Mathematics::half4 ywzx;

  __declspec(property(get = get_ywzy))::Unity::Mathematics::half4 ywzy;

  __declspec(property(get = get_ywzz))::Unity::Mathematics::half4 ywzz;

  __declspec(property(get = get_yx, put = set_yx))::Unity::Mathematics::half2 yx;

  __declspec(property(get = get_yxw, put = set_yxw))::Unity::Mathematics::half3 yxw;

  __declspec(property(get = get_yxww))::Unity::Mathematics::half4 yxww;

  __declspec(property(get = get_yxwx))::Unity::Mathematics::half4 yxwx;

  __declspec(property(get = get_yxwy))::Unity::Mathematics::half4 yxwy;

  __declspec(property(get = get_yxwz, put = set_yxwz))::Unity::Mathematics::half4 yxwz;

  __declspec(property(get = get_yxx))::Unity::Mathematics::half3 yxx;

  __declspec(property(get = get_yxxw))::Unity::Mathematics::half4 yxxw;

  __declspec(property(get = get_yxxx))::Unity::Mathematics::half4 yxxx;

  __declspec(property(get = get_yxxy))::Unity::Mathematics::half4 yxxy;

  __declspec(property(get = get_yxxz))::Unity::Mathematics::half4 yxxz;

  __declspec(property(get = get_yxy))::Unity::Mathematics::half3 yxy;

  __declspec(property(get = get_yxyw))::Unity::Mathematics::half4 yxyw;

  __declspec(property(get = get_yxyx))::Unity::Mathematics::half4 yxyx;

  __declspec(property(get = get_yxyy))::Unity::Mathematics::half4 yxyy;

  __declspec(property(get = get_yxyz))::Unity::Mathematics::half4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz))::Unity::Mathematics::half3 yxz;

  __declspec(property(get = get_yxzw, put = set_yxzw))::Unity::Mathematics::half4 yxzw;

  __declspec(property(get = get_yxzx))::Unity::Mathematics::half4 yxzx;

  __declspec(property(get = get_yxzy))::Unity::Mathematics::half4 yxzy;

  __declspec(property(get = get_yxzz))::Unity::Mathematics::half4 yxzz;

  __declspec(property(get = get_yy))::Unity::Mathematics::half2 yy;

  __declspec(property(get = get_yyw))::Unity::Mathematics::half3 yyw;

  __declspec(property(get = get_yyww))::Unity::Mathematics::half4 yyww;

  __declspec(property(get = get_yywx))::Unity::Mathematics::half4 yywx;

  __declspec(property(get = get_yywy))::Unity::Mathematics::half4 yywy;

  __declspec(property(get = get_yywz))::Unity::Mathematics::half4 yywz;

  __declspec(property(get = get_yyx))::Unity::Mathematics::half3 yyx;

  __declspec(property(get = get_yyxw))::Unity::Mathematics::half4 yyxw;

  __declspec(property(get = get_yyxx))::Unity::Mathematics::half4 yyxx;

  __declspec(property(get = get_yyxy))::Unity::Mathematics::half4 yyxy;

  __declspec(property(get = get_yyxz))::Unity::Mathematics::half4 yyxz;

  __declspec(property(get = get_yyy))::Unity::Mathematics::half3 yyy;

  __declspec(property(get = get_yyyw))::Unity::Mathematics::half4 yyyw;

  __declspec(property(get = get_yyyx))::Unity::Mathematics::half4 yyyx;

  __declspec(property(get = get_yyyy))::Unity::Mathematics::half4 yyyy;

  __declspec(property(get = get_yyyz))::Unity::Mathematics::half4 yyyz;

  __declspec(property(get = get_yyz))::Unity::Mathematics::half3 yyz;

  __declspec(property(get = get_yyzw))::Unity::Mathematics::half4 yyzw;

  __declspec(property(get = get_yyzx))::Unity::Mathematics::half4 yyzx;

  __declspec(property(get = get_yyzy))::Unity::Mathematics::half4 yyzy;

  __declspec(property(get = get_yyzz))::Unity::Mathematics::half4 yyzz;

  __declspec(property(get = get_yz, put = set_yz))::Unity::Mathematics::half2 yz;

  __declspec(property(get = get_yzw, put = set_yzw))::Unity::Mathematics::half3 yzw;

  __declspec(property(get = get_yzww))::Unity::Mathematics::half4 yzww;

  __declspec(property(get = get_yzwx, put = set_yzwx))::Unity::Mathematics::half4 yzwx;

  __declspec(property(get = get_yzwy))::Unity::Mathematics::half4 yzwy;

  __declspec(property(get = get_yzwz))::Unity::Mathematics::half4 yzwz;

  __declspec(property(get = get_yzx, put = set_yzx))::Unity::Mathematics::half3 yzx;

  __declspec(property(get = get_yzxw, put = set_yzxw))::Unity::Mathematics::half4 yzxw;

  __declspec(property(get = get_yzxx))::Unity::Mathematics::half4 yzxx;

  __declspec(property(get = get_yzxy))::Unity::Mathematics::half4 yzxy;

  __declspec(property(get = get_yzxz))::Unity::Mathematics::half4 yzxz;

  __declspec(property(get = get_yzy))::Unity::Mathematics::half3 yzy;

  __declspec(property(get = get_yzyw))::Unity::Mathematics::half4 yzyw;

  __declspec(property(get = get_yzyx))::Unity::Mathematics::half4 yzyx;

  __declspec(property(get = get_yzyy))::Unity::Mathematics::half4 yzyy;

  __declspec(property(get = get_yzyz))::Unity::Mathematics::half4 yzyz;

  __declspec(property(get = get_yzz))::Unity::Mathematics::half3 yzz;

  __declspec(property(get = get_yzzw))::Unity::Mathematics::half4 yzzw;

  __declspec(property(get = get_yzzx))::Unity::Mathematics::half4 yzzx;

  __declspec(property(get = get_yzzy))::Unity::Mathematics::half4 yzzy;

  __declspec(property(get = get_yzzz))::Unity::Mathematics::half4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::half4 zero;

  __declspec(property(get = get_zw, put = set_zw))::Unity::Mathematics::half2 zw;

  __declspec(property(get = get_zww))::Unity::Mathematics::half3 zww;

  __declspec(property(get = get_zwww))::Unity::Mathematics::half4 zwww;

  __declspec(property(get = get_zwwx))::Unity::Mathematics::half4 zwwx;

  __declspec(property(get = get_zwwy))::Unity::Mathematics::half4 zwwy;

  __declspec(property(get = get_zwwz))::Unity::Mathematics::half4 zwwz;

  __declspec(property(get = get_zwx, put = set_zwx))::Unity::Mathematics::half3 zwx;

  __declspec(property(get = get_zwxw))::Unity::Mathematics::half4 zwxw;

  __declspec(property(get = get_zwxx))::Unity::Mathematics::half4 zwxx;

  __declspec(property(get = get_zwxy, put = set_zwxy))::Unity::Mathematics::half4 zwxy;

  __declspec(property(get = get_zwxz))::Unity::Mathematics::half4 zwxz;

  __declspec(property(get = get_zwy, put = set_zwy))::Unity::Mathematics::half3 zwy;

  __declspec(property(get = get_zwyw))::Unity::Mathematics::half4 zwyw;

  __declspec(property(get = get_zwyx, put = set_zwyx))::Unity::Mathematics::half4 zwyx;

  __declspec(property(get = get_zwyy))::Unity::Mathematics::half4 zwyy;

  __declspec(property(get = get_zwyz))::Unity::Mathematics::half4 zwyz;

  __declspec(property(get = get_zwz))::Unity::Mathematics::half3 zwz;

  __declspec(property(get = get_zwzw))::Unity::Mathematics::half4 zwzw;

  __declspec(property(get = get_zwzx))::Unity::Mathematics::half4 zwzx;

  __declspec(property(get = get_zwzy))::Unity::Mathematics::half4 zwzy;

  __declspec(property(get = get_zwzz))::Unity::Mathematics::half4 zwzz;

  __declspec(property(get = get_zx, put = set_zx))::Unity::Mathematics::half2 zx;

  __declspec(property(get = get_zxw, put = set_zxw))::Unity::Mathematics::half3 zxw;

  __declspec(property(get = get_zxww))::Unity::Mathematics::half4 zxww;

  __declspec(property(get = get_zxwx))::Unity::Mathematics::half4 zxwx;

  __declspec(property(get = get_zxwy, put = set_zxwy))::Unity::Mathematics::half4 zxwy;

  __declspec(property(get = get_zxwz))::Unity::Mathematics::half4 zxwz;

  __declspec(property(get = get_zxx))::Unity::Mathematics::half3 zxx;

  __declspec(property(get = get_zxxw))::Unity::Mathematics::half4 zxxw;

  __declspec(property(get = get_zxxx))::Unity::Mathematics::half4 zxxx;

  __declspec(property(get = get_zxxy))::Unity::Mathematics::half4 zxxy;

  __declspec(property(get = get_zxxz))::Unity::Mathematics::half4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy))::Unity::Mathematics::half3 zxy;

  __declspec(property(get = get_zxyw, put = set_zxyw))::Unity::Mathematics::half4 zxyw;

  __declspec(property(get = get_zxyx))::Unity::Mathematics::half4 zxyx;

  __declspec(property(get = get_zxyy))::Unity::Mathematics::half4 zxyy;

  __declspec(property(get = get_zxyz))::Unity::Mathematics::half4 zxyz;

  __declspec(property(get = get_zxz))::Unity::Mathematics::half3 zxz;

  __declspec(property(get = get_zxzw))::Unity::Mathematics::half4 zxzw;

  __declspec(property(get = get_zxzx))::Unity::Mathematics::half4 zxzx;

  __declspec(property(get = get_zxzy))::Unity::Mathematics::half4 zxzy;

  __declspec(property(get = get_zxzz))::Unity::Mathematics::half4 zxzz;

  __declspec(property(get = get_zy, put = set_zy))::Unity::Mathematics::half2 zy;

  __declspec(property(get = get_zyw, put = set_zyw))::Unity::Mathematics::half3 zyw;

  __declspec(property(get = get_zyww))::Unity::Mathematics::half4 zyww;

  __declspec(property(get = get_zywx, put = set_zywx))::Unity::Mathematics::half4 zywx;

  __declspec(property(get = get_zywy))::Unity::Mathematics::half4 zywy;

  __declspec(property(get = get_zywz))::Unity::Mathematics::half4 zywz;

  __declspec(property(get = get_zyx, put = set_zyx))::Unity::Mathematics::half3 zyx;

  __declspec(property(get = get_zyxw, put = set_zyxw))::Unity::Mathematics::half4 zyxw;

  __declspec(property(get = get_zyxx))::Unity::Mathematics::half4 zyxx;

  __declspec(property(get = get_zyxy))::Unity::Mathematics::half4 zyxy;

  __declspec(property(get = get_zyxz))::Unity::Mathematics::half4 zyxz;

  __declspec(property(get = get_zyy))::Unity::Mathematics::half3 zyy;

  __declspec(property(get = get_zyyw))::Unity::Mathematics::half4 zyyw;

  __declspec(property(get = get_zyyx))::Unity::Mathematics::half4 zyyx;

  __declspec(property(get = get_zyyy))::Unity::Mathematics::half4 zyyy;

  __declspec(property(get = get_zyyz))::Unity::Mathematics::half4 zyyz;

  __declspec(property(get = get_zyz))::Unity::Mathematics::half3 zyz;

  __declspec(property(get = get_zyzw))::Unity::Mathematics::half4 zyzw;

  __declspec(property(get = get_zyzx))::Unity::Mathematics::half4 zyzx;

  __declspec(property(get = get_zyzy))::Unity::Mathematics::half4 zyzy;

  __declspec(property(get = get_zyzz))::Unity::Mathematics::half4 zyzz;

  __declspec(property(get = get_zz))::Unity::Mathematics::half2 zz;

  __declspec(property(get = get_zzw))::Unity::Mathematics::half3 zzw;

  __declspec(property(get = get_zzww))::Unity::Mathematics::half4 zzww;

  __declspec(property(get = get_zzwx))::Unity::Mathematics::half4 zzwx;

  __declspec(property(get = get_zzwy))::Unity::Mathematics::half4 zzwy;

  __declspec(property(get = get_zzwz))::Unity::Mathematics::half4 zzwz;

  __declspec(property(get = get_zzx))::Unity::Mathematics::half3 zzx;

  __declspec(property(get = get_zzxw))::Unity::Mathematics::half4 zzxw;

  __declspec(property(get = get_zzxx))::Unity::Mathematics::half4 zzxx;

  __declspec(property(get = get_zzxy))::Unity::Mathematics::half4 zzxy;

  __declspec(property(get = get_zzxz))::Unity::Mathematics::half4 zzxz;

  __declspec(property(get = get_zzy))::Unity::Mathematics::half3 zzy;

  __declspec(property(get = get_zzyw))::Unity::Mathematics::half4 zzyw;

  __declspec(property(get = get_zzyx))::Unity::Mathematics::half4 zzyx;

  __declspec(property(get = get_zzyy))::Unity::Mathematics::half4 zzyy;

  __declspec(property(get = get_zzyz))::Unity::Mathematics::half4 zzyz;

  __declspec(property(get = get_zzz))::Unity::Mathematics::half3 zzz;

  __declspec(property(get = get_zzzw))::Unity::Mathematics::half4 zzzw;

  __declspec(property(get = get_zzzx))::Unity::Mathematics::half4 zzzx;

  __declspec(property(get = get_zzzy))::Unity::Mathematics::half4 zzzy;

  __declspec(property(get = get_zzzz))::Unity::Mathematics::half4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::half4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x3238ea4, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3238e60, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::half4 rhs);

  /// @brief Method GetHashCode, addr 0x3238f48, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3238fb0, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x323915c, size 0x310, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x32355c4, size 0x2a8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 v);

  /// @brief Method .ctor, addr 0x32351b8, size 0x298, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 v);

  /// @brief Method .ctor, addr 0x323503c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x3235450, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3235048, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x3234f6c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method .ctor, addr 0x3234f80, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half2 zw);

  /// @brief Method .ctor, addr 0x3234f98, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz, ::Unity::Mathematics::half w);

  /// @brief Method .ctor, addr 0x3234fb0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half3 yzw);

  /// @brief Method .ctor, addr 0x3234fcc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method .ctor, addr 0x3234fe4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half2 zw);

  /// @brief Method .ctor, addr 0x3235000, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half3 xyz, ::Unity::Mathematics::half w);

  /// @brief Method .ctor, addr 0x323501c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half4 xyzw);

  static inline ::Unity::Mathematics::half4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3238e50, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half get_Item(int32_t index);

  /// @brief Method get_ww, addr 0x3238e44, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_ww();

  /// @brief Method get_www, addr 0x3238c5c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_www();

  /// @brief Method get_wwww, addr 0x32383c8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwww();

  /// @brief Method get_wwwx, addr 0x3238374, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwwx();

  /// @brief Method get_wwwy, addr 0x3238390, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwwy();

  /// @brief Method get_wwwz, addr 0x32383ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwwz();

  /// @brief Method get_wwx, addr 0x3238c14, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wwx();

  /// @brief Method get_wwxw, addr 0x3238268, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwxw();

  /// @brief Method get_wwxx, addr 0x323820c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwxx();

  /// @brief Method get_wwxy, addr 0x3238228, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwxy();

  /// @brief Method get_wwxz, addr 0x3238248, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwxz();

  /// @brief Method get_wwy, addr 0x3238c2c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wwy();

  /// @brief Method get_wwyw, addr 0x32382e0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwyw();

  /// @brief Method get_wwyx, addr 0x3238284, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwyx();

  /// @brief Method get_wwyy, addr 0x32382a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwyy();

  /// @brief Method get_wwyz, addr 0x32382c0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwyz();

  /// @brief Method get_wwz, addr 0x3238c44, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wwz();

  /// @brief Method get_wwzw, addr 0x3238358, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwzw();

  /// @brief Method get_wwzx, addr 0x32382fc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwzx();

  /// @brief Method get_wwzy, addr 0x323831c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwzy();

  /// @brief Method get_wwzz, addr 0x323833c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwzz();

  /// @brief Method get_wx, addr 0x3238dd8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_wx();

  /// @brief Method get_wxw, addr 0x3238acc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wxw();

  /// @brief Method get_wxww, addr 0x3237d80, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxww();

  /// @brief Method get_wxwx, addr 0x3237d24, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxwx();

  /// @brief Method get_wxwy, addr 0x3237d40, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxwy();

  /// @brief Method get_wxwz, addr 0x3237d60, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxwz();

  /// @brief Method get_wxx, addr 0x3238a4c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wxx();

  /// @brief Method get_wxxw, addr 0x3237bc0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxxw();

  /// @brief Method get_wxxx, addr 0x3237b64, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxxx();

  /// @brief Method get_wxxy, addr 0x3237b80, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxxy();

  /// @brief Method get_wxxz, addr 0x3237ba0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxxz();

  /// @brief Method get_wxy, addr 0x3238a64, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wxy();

  /// @brief Method get_wxyw, addr 0x3237c60, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxyw();

  /// @brief Method get_wxyx, addr 0x3237bdc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxyx();

  /// @brief Method get_wxyy, addr 0x3237bfc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxyy();

  /// @brief Method get_wxyz, addr 0x3237c1c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxyz();

  /// @brief Method get_wxz, addr 0x3238a98, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wxz();

  /// @brief Method get_wxzw, addr 0x3237d04, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxzw();

  /// @brief Method get_wxzx, addr 0x3237c80, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxzx();

  /// @brief Method get_wxzy, addr 0x3237ca0, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxzy();

  /// @brief Method get_wxzz, addr 0x3237ce4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxzz();

  /// @brief Method get_wy, addr 0x3238dfc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_wy();

  /// @brief Method get_wyw, addr 0x3238b64, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wyw();

  /// @brief Method get_wyww, addr 0x3237fb8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyww();

  /// @brief Method get_wywx, addr 0x3237f5c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wywx();

  /// @brief Method get_wywy, addr 0x3237f7c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wywy();

  /// @brief Method get_wywz, addr 0x3237f98, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wywz();

  /// @brief Method get_wyx, addr 0x3238ae4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wyx();

  /// @brief Method get_wyxw, addr 0x3237e20, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyxw();

  /// @brief Method get_wyxx, addr 0x3237d9c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyxx();

  /// @brief Method get_wyxy, addr 0x3237dbc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyxy();

  /// @brief Method get_wyxz, addr 0x3237ddc, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyxz();

  /// @brief Method get_wyy, addr 0x3238b18, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wyy();

  /// @brief Method get_wyyw, addr 0x3237e9c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyyw();

  /// @brief Method get_wyyx, addr 0x3237e40, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyyx();

  /// @brief Method get_wyyy, addr 0x3237e60, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyyy();

  /// @brief Method get_wyyz, addr 0x3237e7c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyyz();

  /// @brief Method get_wyz, addr 0x3238b30, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wyz();

  /// @brief Method get_wyzw, addr 0x3237f3c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyzw();

  /// @brief Method get_wyzx, addr 0x3237eb8, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyzx();

  /// @brief Method get_wyzy, addr 0x3237efc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyzy();

  /// @brief Method get_wyzz, addr 0x3237f1c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyzz();

  /// @brief Method get_wz, addr 0x3238e20, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_wz();

  /// @brief Method get_wzw, addr 0x3238bfc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wzw();

  /// @brief Method get_wzww, addr 0x32381f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzww();

  /// @brief Method get_wzwx, addr 0x3238194, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzwx();

  /// @brief Method get_wzwy, addr 0x32381b4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzwy();

  /// @brief Method get_wzwz, addr 0x32381d4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzwz();

  /// @brief Method get_wzx, addr 0x3238b7c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wzx();

  /// @brief Method get_wzxw, addr 0x3238058, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzxw();

  /// @brief Method get_wzxx, addr 0x3237fd4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzxx();

  /// @brief Method get_wzxy, addr 0x3237ff4, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzxy();

  /// @brief Method get_wzxz, addr 0x3238038, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzxz();

  /// @brief Method get_wzy, addr 0x3238bb0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wzy();

  /// @brief Method get_wzyw, addr 0x32380fc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzyw();

  /// @brief Method get_wzyx, addr 0x3238078, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzyx();

  /// @brief Method get_wzyy, addr 0x32380bc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzyy();

  /// @brief Method get_wzyz, addr 0x32380dc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzyz();

  /// @brief Method get_wzz, addr 0x3238be4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wzz();

  /// @brief Method get_wzzw, addr 0x3238178, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzzw();

  /// @brief Method get_wzzx, addr 0x323811c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzzx();

  /// @brief Method get_wzzy, addr 0x323813c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzzy();

  /// @brief Method get_wzzz, addr 0x323815c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzzz();

  /// @brief Method get_xw, addr 0x3238cc4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xw();

  /// @brief Method get_xww, addr 0x32385ec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xww();

  /// @brief Method get_xwww, addr 0x3236a50, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwww();

  /// @brief Method get_xwwx, addr 0x32369f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwwx();

  /// @brief Method get_xwwy, addr 0x3236a10, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwwy();

  /// @brief Method get_xwwz, addr 0x3236a30, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwwz();

  /// @brief Method get_xwx, addr 0x323856c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xwx();

  /// @brief Method get_xwxw, addr 0x3236890, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwxw();

  /// @brief Method get_xwxx, addr 0x3236834, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwxx();

  /// @brief Method get_xwxy, addr 0x3236850, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwxy();

  /// @brief Method get_xwxz, addr 0x3236870, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwxz();

  /// @brief Method get_xwy, addr 0x3238584, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xwy();

  /// @brief Method get_xwyw, addr 0x3236930, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwyw();

  /// @brief Method get_xwyx, addr 0x32368ac, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwyx();

  /// @brief Method get_xwyy, addr 0x32368cc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwyy();

  /// @brief Method get_xwyz, addr 0x32368ec, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwyz();

  /// @brief Method get_xwz, addr 0x32385b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xwz();

  /// @brief Method get_xwzw, addr 0x32369d4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwzw();

  /// @brief Method get_xwzx, addr 0x3236950, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwzx();

  /// @brief Method get_xwzy, addr 0x3236970, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwzy();

  /// @brief Method get_xwzz, addr 0x32369b4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwzz();

  /// @brief Method get_xx, addr 0x3238c70, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xx();

  /// @brief Method get_xxw, addr 0x3238424, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxw();

  /// @brief Method get_xxww, addr 0x32363c4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxww();

  /// @brief Method get_xxwx, addr 0x3236368, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxwx();

  /// @brief Method get_xxwy, addr 0x3236384, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxwy();

  /// @brief Method get_xxwz, addr 0x32363a4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxwz();

  /// @brief Method get_xxx, addr 0x32383e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxx();

  /// @brief Method get_xxxw, addr 0x323625c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxw();

  /// @brief Method get_xxxx, addr 0x323620c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x3236224, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x3236240, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxz();

  /// @brief Method get_xxy, addr 0x32383f4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxy();

  /// @brief Method get_xxyw, addr 0x32362d0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyw();

  /// @brief Method get_xxyx, addr 0x3236278, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x3236294, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x32362b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyz();

  /// @brief Method get_xxz, addr 0x323840c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxz();

  /// @brief Method get_xxzw, addr 0x3236348, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxzw();

  /// @brief Method get_xxzx, addr 0x32362f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x323630c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x323632c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxzz();

  /// @brief Method get_xy, addr 0x3238c7c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xy();

  /// @brief Method get_xyw, addr 0x32384a0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyw();

  /// @brief Method get_xyww, addr 0x32365dc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyww();

  /// @brief Method get_xywx, addr 0x3236558, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xywx();

  /// @brief Method get_xywy, addr 0x3236578, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xywy();

  /// @brief Method get_xywz, addr 0x3236598, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xywz();

  /// @brief Method get_xyx, addr 0x323843c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyx();

  /// @brief Method get_xyxw, addr 0x3236438, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxw();

  /// @brief Method get_xyxx, addr 0x32363e0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x32363fc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x3236418, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxz();

  /// @brief Method get_xyy, addr 0x3238454, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyy();

  /// @brief Method get_xyyw, addr 0x32364b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyw();

  /// @brief Method get_xyyx, addr 0x3236458, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x3236474, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x3236490, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyz();

  /// @brief Method get_xyz, addr 0x323846c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyz();

  /// @brief Method get_xyzw, addr 0x3236530, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyzw();

  /// @brief Method get_xyzx, addr 0x32364d0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x32364f0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x3236510, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyzz();

  /// @brief Method get_xz, addr 0x3238ca0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xz();

  /// @brief Method get_xzw, addr 0x3238538, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xzw();

  /// @brief Method get_xzww, addr 0x3236814, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzww();

  /// @brief Method get_xzwx, addr 0x3236790, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzwx();

  /// @brief Method get_xzwy, addr 0x32367b0, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzwy();

  /// @brief Method get_xzwz, addr 0x32367f4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzwz();

  /// @brief Method get_xzx, addr 0x32384d4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xzx();

  /// @brief Method get_xzxw, addr 0x3236654, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzxw();

  /// @brief Method get_xzxx, addr 0x32365fc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x3236618, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x3236638, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzxz();

  /// @brief Method get_xzy, addr 0x32384ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xzy();

  /// @brief Method get_xzyw, addr 0x32366d4, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzyw();

  /// @brief Method get_xzyx, addr 0x3236674, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x3236694, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x32366b4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzyz();

  /// @brief Method get_xzz, addr 0x3238520, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xzz();

  /// @brief Method get_xzzw, addr 0x3236770, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzzw();

  /// @brief Method get_xzzx, addr 0x3236718, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x3236734, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x3236754, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzzz();

  /// @brief Method get_yw, addr 0x3238d3c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yw();

  /// @brief Method get_yww, addr 0x3238810, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yww();

  /// @brief Method get_ywww, addr 0x32372cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywww();

  /// @brief Method get_ywwx, addr 0x3237270, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywwx();

  /// @brief Method get_ywwy, addr 0x3237290, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywwy();

  /// @brief Method get_ywwz, addr 0x32372ac, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywwz();

  /// @brief Method get_ywx, addr 0x3238790, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_ywx();

  /// @brief Method get_ywxw, addr 0x3237134, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywxw();

  /// @brief Method get_ywxx, addr 0x32370b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywxx();

  /// @brief Method get_ywxy, addr 0x32370d0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywxy();

  /// @brief Method get_ywxz, addr 0x32370f0, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywxz();

  /// @brief Method get_ywy, addr 0x32387c4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_ywy();

  /// @brief Method get_ywyw, addr 0x32371b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywyw();

  /// @brief Method get_ywyx, addr 0x3237154, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywyx();

  /// @brief Method get_ywyy, addr 0x3237174, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywyy();

  /// @brief Method get_ywyz, addr 0x3237190, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywyz();

  /// @brief Method get_ywz, addr 0x32387dc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_ywz();

  /// @brief Method get_ywzw, addr 0x3237250, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywzw();

  /// @brief Method get_ywzx, addr 0x32371cc, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywzx();

  /// @brief Method get_ywzy, addr 0x3237210, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywzy();

  /// @brief Method get_ywzz, addr 0x3237230, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywzz();

  /// @brief Method get_yx, addr 0x3238ce8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yx();

  /// @brief Method get_yxw, addr 0x3238668, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxw();

  /// @brief Method get_yxww, addr 0x3236c84, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxww();

  /// @brief Method get_yxwx, addr 0x3236c00, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxwx();

  /// @brief Method get_yxwy, addr 0x3236c20, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxwy();

  /// @brief Method get_yxwz, addr 0x3236c40, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxwz();

  /// @brief Method get_yxx, addr 0x3238604, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxx();

  /// @brief Method get_yxxw, addr 0x3236ac4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxw();

  /// @brief Method get_yxxx, addr 0x3236a6c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x3236a88, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x3236aa4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxz();

  /// @brief Method get_yxy, addr 0x323861c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxy();

  /// @brief Method get_yxyw, addr 0x3236b3c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyw();

  /// @brief Method get_yxyx, addr 0x3236ae4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x3236b00, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x3236b1c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyz();

  /// @brief Method get_yxz, addr 0x3238634, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxz();

  /// @brief Method get_yxzw, addr 0x3236bbc, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxzw();

  /// @brief Method get_yxzx, addr 0x3236b5c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x3236b7c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x3236b9c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxzz();

  /// @brief Method get_yy, addr 0x3238d0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yy();

  /// @brief Method get_yyw, addr 0x32386e0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyw();

  /// @brief Method get_yyww, addr 0x3236e5c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyww();

  /// @brief Method get_yywx, addr 0x3236e00, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yywx();

  /// @brief Method get_yywy, addr 0x3236e20, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yywy();

  /// @brief Method get_yywz, addr 0x3236e3c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yywz();

  /// @brief Method get_yyx, addr 0x323869c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyx();

  /// @brief Method get_yyxw, addr 0x3236cfc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxw();

  /// @brief Method get_yyxx, addr 0x3236ca4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x3236cc0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x3236cdc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxz();

  /// @brief Method get_yyy, addr 0x32386b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyy();

  /// @brief Method get_yyyw, addr 0x3236d6c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyw();

  /// @brief Method get_yyyx, addr 0x3236d1c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x3236d38, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x3236d50, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyz();

  /// @brief Method get_yyz, addr 0x32386c8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyz();

  /// @brief Method get_yyzw, addr 0x3236de0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyzw();

  /// @brief Method get_yyzx, addr 0x3236d88, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x3236da8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x3236dc4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyzz();

  /// @brief Method get_yz, addr 0x3238d18, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yz();

  /// @brief Method get_yzw, addr 0x323875c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yzw();

  /// @brief Method get_yzww, addr 0x3237090, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzww();

  /// @brief Method get_yzwx, addr 0x323700c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzwx();

  /// @brief Method get_yzwy, addr 0x3237050, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzwy();

  /// @brief Method get_yzwz, addr 0x3237070, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzwz();

  /// @brief Method get_yzx, addr 0x32386f8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yzx();

  /// @brief Method get_yzxw, addr 0x3236ed8, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzxw();

  /// @brief Method get_yzxx, addr 0x3236e78, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x3236e98, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x3236eb8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzxz();

  /// @brief Method get_yzy, addr 0x323872c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yzy();

  /// @brief Method get_yzyw, addr 0x3236f74, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzyw();

  /// @brief Method get_yzyx, addr 0x3236f1c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x3236f3c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x3236f58, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzyz();

  /// @brief Method get_yzz, addr 0x3238744, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yzz();

  /// @brief Method get_yzzw, addr 0x3236fec, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzzw();

  /// @brief Method get_yzzx, addr 0x3236f94, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x3236fb4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x3236fd0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzzz();

  /// @brief Method get_zw, addr 0x3238db4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_zw();

  /// @brief Method get_zww, addr 0x3238a34, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zww();

  /// @brief Method get_zwww, addr 0x3237b48, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwww();

  /// @brief Method get_zwwx, addr 0x3237aec, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwwx();

  /// @brief Method get_zwwy, addr 0x3237b0c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwwy();

  /// @brief Method get_zwwz, addr 0x3237b2c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwwz();

  /// @brief Method get_zwx, addr 0x32389b4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zwx();

  /// @brief Method get_zwxw, addr 0x32379b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwxw();

  /// @brief Method get_zwxx, addr 0x323792c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwxx();

  /// @brief Method get_zwxy, addr 0x323794c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwxy();

  /// @brief Method get_zwxz, addr 0x3237990, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwxz();

  /// @brief Method get_zwy, addr 0x32389e8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zwy();

  /// @brief Method get_zwyw, addr 0x3237a54, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwyw();

  /// @brief Method get_zwyx, addr 0x32379d0, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwyx();

  /// @brief Method get_zwyy, addr 0x3237a14, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwyy();

  /// @brief Method get_zwyz, addr 0x3237a34, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwyz();

  /// @brief Method get_zwz, addr 0x3238a1c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zwz();

  /// @brief Method get_zwzw, addr 0x3237ad0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwzw();

  /// @brief Method get_zwzx, addr 0x3237a74, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwzx();

  /// @brief Method get_zwzy, addr 0x3237a94, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwzy();

  /// @brief Method get_zwzz, addr 0x3237ab4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwzz();

  /// @brief Method get_zx, addr 0x3238d60, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_zx();

  /// @brief Method get_zxw, addr 0x323888c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zxw();

  /// @brief Method get_zxww, addr 0x3237500, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxww();

  /// @brief Method get_zxwx, addr 0x323747c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxwx();

  /// @brief Method get_zxwy, addr 0x323749c, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxwy();

  /// @brief Method get_zxwz, addr 0x32374e0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxwz();

  /// @brief Method get_zxx, addr 0x3238828, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zxx();

  /// @brief Method get_zxxw, addr 0x3237340, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxxw();

  /// @brief Method get_zxxx, addr 0x32372e8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x3237304, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x3237324, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxxz();

  /// @brief Method get_zxy, addr 0x3238840, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zxy();

  /// @brief Method get_zxyw, addr 0x32373c0, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxyw();

  /// @brief Method get_zxyx, addr 0x3237360, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x3237380, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x32373a0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxyz();

  /// @brief Method get_zxz, addr 0x3238874, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zxz();

  /// @brief Method get_zxzw, addr 0x323745c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxzw();

  /// @brief Method get_zxzx, addr 0x3237404, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x3237420, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x3237440, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxzz();

  /// @brief Method get_zy, addr 0x3238d84, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_zy();

  /// @brief Method get_zyw, addr 0x3238924, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zyw();

  /// @brief Method get_zyww, addr 0x3237738, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyww();

  /// @brief Method get_zywx, addr 0x32376b4, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zywx();

  /// @brief Method get_zywy, addr 0x32376f8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zywy();

  /// @brief Method get_zywz, addr 0x3237718, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zywz();

  /// @brief Method get_zyx, addr 0x32388c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zyx();

  /// @brief Method get_zyxw, addr 0x3237580, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyxw();

  /// @brief Method get_zyxx, addr 0x3237520, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x3237540, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x3237560, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyxz();

  /// @brief Method get_zyy, addr 0x32388f4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zyy();

  /// @brief Method get_zyyw, addr 0x323761c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyyw();

  /// @brief Method get_zyyx, addr 0x32375c4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x32375e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x3237600, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyyz();

  /// @brief Method get_zyz, addr 0x323890c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zyz();

  /// @brief Method get_zyzw, addr 0x3237694, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyzw();

  /// @brief Method get_zyzx, addr 0x323763c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x323765c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x3237678, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyzz();

  /// @brief Method get_zz, addr 0x3238da8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_zz();

  /// @brief Method get_zzw, addr 0x323899c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zzw();

  /// @brief Method get_zzww, addr 0x3237910, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzww();

  /// @brief Method get_zzwx, addr 0x32378b4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzwx();

  /// @brief Method get_zzwy, addr 0x32378d4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzwy();

  /// @brief Method get_zzwz, addr 0x32378f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzwz();

  /// @brief Method get_zzx, addr 0x3238958, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zzx();

  /// @brief Method get_zzxw, addr 0x32377b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzxw();

  /// @brief Method get_zzxx, addr 0x3237758, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x3237774, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x3237794, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzxz();

  /// @brief Method get_zzy, addr 0x3238970, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zzy();

  /// @brief Method get_zzyw, addr 0x3237828, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzyw();

  /// @brief Method get_zzyx, addr 0x32377d0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x32377f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x323780c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzyz();

  /// @brief Method get_zzz, addr 0x3238988, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zzz();

  /// @brief Method get_zzzw, addr 0x3237898, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzzw();

  /// @brief Method get_zzzx, addr 0x3237848, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x3237864, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x3237880, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::half4>* i___System__IEquatable_1___Unity__Mathematics__half4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x323611c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half4 rhs);

  /// @brief Method op_Equality, addr 0x32360dc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::half4 lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Equality, addr 0x32360a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::half4 lhs, ::Unity::Mathematics::half4 rhs);

  /// @brief Method op_Explicit, addr 0x3235df0, size 0x2b4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Explicit___Unity__Mathematics__half4(::Unity::Mathematics::double4 v);

  /// @brief Method op_Explicit, addr 0x32359e8, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Explicit___Unity__Mathematics__half4(::Unity::Mathematics::float4 v);

  /// @brief Method op_Explicit, addr 0x3235c8c, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Explicit___Unity__Mathematics__half4(double_t v);

  /// @brief Method op_Explicit, addr 0x3235888, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Explicit___Unity__Mathematics__half4(float_t v);

  /// @brief Method op_Implicit, addr 0x323586c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Implicit___Unity__Mathematics__half4(::Unity::Mathematics::half v);

  /// @brief Method op_Inequality, addr 0x32361d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half4 rhs);

  /// @brief Method op_Inequality, addr 0x3236190, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::half4 lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Inequality, addr 0x3236158, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::half4 lhs, ::Unity::Mathematics::half4 rhs);

  static inline void setStaticF_zero(::Unity::Mathematics::half4 value);

  /// @brief Method set_Item, addr 0x3238e58, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::Unity::Mathematics::half value);

  /// @brief Method set_wx, addr 0x3238dec, size 0x10, virtual false, abstract: false, final false
  inline void set_wx(::Unity::Mathematics::half2 value);

  /// @brief Method set_wxy, addr 0x3238a80, size 0x18, virtual false, abstract: false, final false
  inline void set_wxy(::Unity::Mathematics::half3 value);

  /// @brief Method set_wxyz, addr 0x3237c40, size 0x20, virtual false, abstract: false, final false
  inline void set_wxyz(::Unity::Mathematics::half4 value);

  /// @brief Method set_wxz, addr 0x3238ab4, size 0x18, virtual false, abstract: false, final false
  inline void set_wxz(::Unity::Mathematics::half3 value);

  /// @brief Method set_wxzy, addr 0x3237cc4, size 0x20, virtual false, abstract: false, final false
  inline void set_wxzy(::Unity::Mathematics::half4 value);

  /// @brief Method set_wy, addr 0x3238e10, size 0x10, virtual false, abstract: false, final false
  inline void set_wy(::Unity::Mathematics::half2 value);

  /// @brief Method set_wyx, addr 0x3238b00, size 0x18, virtual false, abstract: false, final false
  inline void set_wyx(::Unity::Mathematics::half3 value);

  /// @brief Method set_wyxz, addr 0x3237e00, size 0x20, virtual false, abstract: false, final false
  inline void set_wyxz(::Unity::Mathematics::half4 value);

  /// @brief Method set_wyz, addr 0x3238b4c, size 0x18, virtual false, abstract: false, final false
  inline void set_wyz(::Unity::Mathematics::half3 value);

  /// @brief Method set_wyzx, addr 0x3237edc, size 0x20, virtual false, abstract: false, final false
  inline void set_wyzx(::Unity::Mathematics::half4 value);

  /// @brief Method set_wz, addr 0x3238e34, size 0x10, virtual false, abstract: false, final false
  inline void set_wz(::Unity::Mathematics::half2 value);

  /// @brief Method set_wzx, addr 0x3238b98, size 0x18, virtual false, abstract: false, final false
  inline void set_wzx(::Unity::Mathematics::half3 value);

  /// @brief Method set_wzxy, addr 0x3238018, size 0x20, virtual false, abstract: false, final false
  inline void set_wzxy(::Unity::Mathematics::half4 value);

  /// @brief Method set_wzy, addr 0x3238bcc, size 0x18, virtual false, abstract: false, final false
  inline void set_wzy(::Unity::Mathematics::half3 value);

  /// @brief Method set_wzyx, addr 0x323809c, size 0x20, virtual false, abstract: false, final false
  inline void set_wzyx(::Unity::Mathematics::half4 value);

  /// @brief Method set_xw, addr 0x3238cd8, size 0x10, virtual false, abstract: false, final false
  inline void set_xw(::Unity::Mathematics::half2 value);

  /// @brief Method set_xwy, addr 0x32385a0, size 0x18, virtual false, abstract: false, final false
  inline void set_xwy(::Unity::Mathematics::half3 value);

  /// @brief Method set_xwyz, addr 0x3236910, size 0x20, virtual false, abstract: false, final false
  inline void set_xwyz(::Unity::Mathematics::half4 value);

  /// @brief Method set_xwz, addr 0x32385d4, size 0x18, virtual false, abstract: false, final false
  inline void set_xwz(::Unity::Mathematics::half3 value);

  /// @brief Method set_xwzy, addr 0x3236994, size 0x20, virtual false, abstract: false, final false
  inline void set_xwzy(::Unity::Mathematics::half4 value);

  /// @brief Method set_xy, addr 0x3238c90, size 0x10, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::half2 value);

  /// @brief Method set_xyw, addr 0x32384bc, size 0x18, virtual false, abstract: false, final false
  inline void set_xyw(::Unity::Mathematics::half3 value);

  /// @brief Method set_xywz, addr 0x32365bc, size 0x20, virtual false, abstract: false, final false
  inline void set_xywz(::Unity::Mathematics::half4 value);

  /// @brief Method set_xyz, addr 0x3238488, size 0x18, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::half3 value);

  /// @brief Method set_xyzw, addr 0x3236538, size 0x20, virtual false, abstract: false, final false
  inline void set_xyzw(::Unity::Mathematics::half4 value);

  /// @brief Method set_xz, addr 0x3238cb4, size 0x10, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::half2 value);

  /// @brief Method set_xzw, addr 0x3238554, size 0x18, virtual false, abstract: false, final false
  inline void set_xzw(::Unity::Mathematics::half3 value);

  /// @brief Method set_xzwy, addr 0x32367d4, size 0x20, virtual false, abstract: false, final false
  inline void set_xzwy(::Unity::Mathematics::half4 value);

  /// @brief Method set_xzy, addr 0x3238508, size 0x18, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::half3 value);

  /// @brief Method set_xzyw, addr 0x32366f8, size 0x20, virtual false, abstract: false, final false
  inline void set_xzyw(::Unity::Mathematics::half4 value);

  /// @brief Method set_yw, addr 0x3238d50, size 0x10, virtual false, abstract: false, final false
  inline void set_yw(::Unity::Mathematics::half2 value);

  /// @brief Method set_ywx, addr 0x32387ac, size 0x18, virtual false, abstract: false, final false
  inline void set_ywx(::Unity::Mathematics::half3 value);

  /// @brief Method set_ywxz, addr 0x3237114, size 0x20, virtual false, abstract: false, final false
  inline void set_ywxz(::Unity::Mathematics::half4 value);

  /// @brief Method set_ywz, addr 0x32387f8, size 0x18, virtual false, abstract: false, final false
  inline void set_ywz(::Unity::Mathematics::half3 value);

  /// @brief Method set_ywzx, addr 0x32371f0, size 0x20, virtual false, abstract: false, final false
  inline void set_ywzx(::Unity::Mathematics::half4 value);

  /// @brief Method set_yx, addr 0x3238cfc, size 0x10, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::half2 value);

  /// @brief Method set_yxw, addr 0x3238684, size 0x18, virtual false, abstract: false, final false
  inline void set_yxw(::Unity::Mathematics::half3 value);

  /// @brief Method set_yxwz, addr 0x3236c64, size 0x20, virtual false, abstract: false, final false
  inline void set_yxwz(::Unity::Mathematics::half4 value);

  /// @brief Method set_yxz, addr 0x3238650, size 0x18, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::half3 value);

  /// @brief Method set_yxzw, addr 0x3236be0, size 0x20, virtual false, abstract: false, final false
  inline void set_yxzw(::Unity::Mathematics::half4 value);

  /// @brief Method set_yz, addr 0x3238d2c, size 0x10, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::half2 value);

  /// @brief Method set_yzw, addr 0x3238778, size 0x18, virtual false, abstract: false, final false
  inline void set_yzw(::Unity::Mathematics::half3 value);

  /// @brief Method set_yzwx, addr 0x3237030, size 0x20, virtual false, abstract: false, final false
  inline void set_yzwx(::Unity::Mathematics::half4 value);

  /// @brief Method set_yzx, addr 0x3238714, size 0x18, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::half3 value);

  /// @brief Method set_yzxw, addr 0x3236efc, size 0x20, virtual false, abstract: false, final false
  inline void set_yzxw(::Unity::Mathematics::half4 value);

  /// @brief Method set_zw, addr 0x3238dc8, size 0x10, virtual false, abstract: false, final false
  inline void set_zw(::Unity::Mathematics::half2 value);

  /// @brief Method set_zwx, addr 0x32389d0, size 0x18, virtual false, abstract: false, final false
  inline void set_zwx(::Unity::Mathematics::half3 value);

  /// @brief Method set_zwxy, addr 0x3237970, size 0x20, virtual false, abstract: false, final false
  inline void set_zwxy(::Unity::Mathematics::half4 value);

  /// @brief Method set_zwy, addr 0x3238a04, size 0x18, virtual false, abstract: false, final false
  inline void set_zwy(::Unity::Mathematics::half3 value);

  /// @brief Method set_zwyx, addr 0x32379f4, size 0x20, virtual false, abstract: false, final false
  inline void set_zwyx(::Unity::Mathematics::half4 value);

  /// @brief Method set_zx, addr 0x3238d74, size 0x10, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::half2 value);

  /// @brief Method set_zxw, addr 0x32388a8, size 0x18, virtual false, abstract: false, final false
  inline void set_zxw(::Unity::Mathematics::half3 value);

  /// @brief Method set_zxwy, addr 0x32374c0, size 0x20, virtual false, abstract: false, final false
  inline void set_zxwy(::Unity::Mathematics::half4 value);

  /// @brief Method set_zxy, addr 0x323885c, size 0x18, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::half3 value);

  /// @brief Method set_zxyw, addr 0x32373e4, size 0x20, virtual false, abstract: false, final false
  inline void set_zxyw(::Unity::Mathematics::half4 value);

  /// @brief Method set_zy, addr 0x3238d98, size 0x10, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::half2 value);

  /// @brief Method set_zyw, addr 0x3238940, size 0x18, virtual false, abstract: false, final false
  inline void set_zyw(::Unity::Mathematics::half3 value);

  /// @brief Method set_zywx, addr 0x32376d8, size 0x20, virtual false, abstract: false, final false
  inline void set_zywx(::Unity::Mathematics::half4 value);

  /// @brief Method set_zyx, addr 0x32388dc, size 0x18, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::half3 value);

  /// @brief Method set_zyxw, addr 0x32375a4, size 0x20, virtual false, abstract: false, final false
  inline void set_zyxw(::Unity::Mathematics::half4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr half4();

  // Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None
  // }, CppParam { name: "z", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None }, CppParam { name: "w", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None }]
  constexpr half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x2, def value: None
  ::Unity::Mathematics::half x;

  /// @brief Field y, offset: 0x2, size: 0x2, def value: None
  ::Unity::Mathematics::half y;

  /// @brief Field z, offset: 0x4, size: 0x2, def value: None
  ::Unity::Mathematics::half z;

  /// @brief Field w, offset: 0x6, size: 0x2, def value: None
  ::Unity::Mathematics::half w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::half4, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, y) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, z) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, w) == 0x6, "Offset mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__half4__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__half4__DebuggerProxy*, "Unity.Mathematics", "half4/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::half4, "Unity.Mathematics", "half4");
