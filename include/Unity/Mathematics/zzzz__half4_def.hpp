#pragma once
// IWYU pragma private; include "Unity/Mathematics/half4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class half4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half;
}
// Forward declare root types
namespace Unity::Mathematics {
class half4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half4;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::half4_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::half4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::half4_DebuggerProxy*, "Unity.Mathematics", "half4/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::half4, "Unity.Mathematics", "half4");
// Dependencies System.Object, Unity.Mathematics.half
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.half4/DebuggerProxy
class CORDL_TYPE half4_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field w, offset 0x16, size 0x2
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w)) ::Unity::Mathematics::half w;

  /// @brief Field x, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::Unity::Mathematics::half x;

  /// @brief Field y, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) ::Unity::Mathematics::half y;

  /// @brief Field z, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) ::Unity::Mathematics::half z;

  static inline ::Unity::Mathematics::half4_DebuggerProxy* New_ctor(::Unity::Mathematics::half4 v);

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

  /// @brief Method .ctor, addr 0x6ad29b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half4 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr half4_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "half4_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  half4_DebuggerProxy(half4_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "half4_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  half4_DebuggerProxy(half4_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13427 };

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
static_assert(offsetof(::Unity::Mathematics::half4_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4_DebuggerProxy, ___y) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4_DebuggerProxy, ___z) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4_DebuggerProxy, ___w) == 0x16, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::half4_DebuggerProxy) == 0x18, "Size mismatch!");

} // namespace Unity::Mathematics
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.half4::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.half
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.half4
struct CORDL_TYPE half4 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::half4_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) ::Unity::Mathematics::half Item[];

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ww)) ::Unity::Mathematics::half2 ww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_www)) ::Unity::Mathematics::half3 www;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwww)) ::Unity::Mathematics::half4 wwww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwwx)) ::Unity::Mathematics::half4 wwwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwwy)) ::Unity::Mathematics::half4 wwwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwwz)) ::Unity::Mathematics::half4 wwwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwx)) ::Unity::Mathematics::half3 wwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwxw)) ::Unity::Mathematics::half4 wwxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwxx)) ::Unity::Mathematics::half4 wwxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwxy)) ::Unity::Mathematics::half4 wwxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwxz)) ::Unity::Mathematics::half4 wwxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwy)) ::Unity::Mathematics::half3 wwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwyw)) ::Unity::Mathematics::half4 wwyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwyx)) ::Unity::Mathematics::half4 wwyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwyy)) ::Unity::Mathematics::half4 wwyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwyz)) ::Unity::Mathematics::half4 wwyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwz)) ::Unity::Mathematics::half3 wwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwzw)) ::Unity::Mathematics::half4 wwzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwzx)) ::Unity::Mathematics::half4 wwzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwzy)) ::Unity::Mathematics::half4 wwzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wwzz)) ::Unity::Mathematics::half4 wwzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wx, put = set_wx)) ::Unity::Mathematics::half2 wx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxw)) ::Unity::Mathematics::half3 wxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxww)) ::Unity::Mathematics::half4 wxww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxwx)) ::Unity::Mathematics::half4 wxwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxwy)) ::Unity::Mathematics::half4 wxwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxwz)) ::Unity::Mathematics::half4 wxwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxx)) ::Unity::Mathematics::half3 wxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxxw)) ::Unity::Mathematics::half4 wxxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxxx)) ::Unity::Mathematics::half4 wxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxxy)) ::Unity::Mathematics::half4 wxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxxz)) ::Unity::Mathematics::half4 wxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxy, put = set_wxy)) ::Unity::Mathematics::half3 wxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxyw)) ::Unity::Mathematics::half4 wxyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxyx)) ::Unity::Mathematics::half4 wxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxyy)) ::Unity::Mathematics::half4 wxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxyz, put = set_wxyz)) ::Unity::Mathematics::half4 wxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxz, put = set_wxz)) ::Unity::Mathematics::half3 wxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxzw)) ::Unity::Mathematics::half4 wxzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxzx)) ::Unity::Mathematics::half4 wxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxzy, put = set_wxzy)) ::Unity::Mathematics::half4 wxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wxzz)) ::Unity::Mathematics::half4 wxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wy, put = set_wy)) ::Unity::Mathematics::half2 wy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyw)) ::Unity::Mathematics::half3 wyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyww)) ::Unity::Mathematics::half4 wyww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wywx)) ::Unity::Mathematics::half4 wywx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wywy)) ::Unity::Mathematics::half4 wywy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wywz)) ::Unity::Mathematics::half4 wywz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyx, put = set_wyx)) ::Unity::Mathematics::half3 wyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyxw)) ::Unity::Mathematics::half4 wyxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyxx)) ::Unity::Mathematics::half4 wyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyxy)) ::Unity::Mathematics::half4 wyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyxz, put = set_wyxz)) ::Unity::Mathematics::half4 wyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyy)) ::Unity::Mathematics::half3 wyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyyw)) ::Unity::Mathematics::half4 wyyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyyx)) ::Unity::Mathematics::half4 wyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyyy)) ::Unity::Mathematics::half4 wyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyyz)) ::Unity::Mathematics::half4 wyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyz, put = set_wyz)) ::Unity::Mathematics::half3 wyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyzw)) ::Unity::Mathematics::half4 wyzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyzx, put = set_wyzx)) ::Unity::Mathematics::half4 wyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyzy)) ::Unity::Mathematics::half4 wyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wyzz)) ::Unity::Mathematics::half4 wyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wz, put = set_wz)) ::Unity::Mathematics::half2 wz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzw)) ::Unity::Mathematics::half3 wzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzww)) ::Unity::Mathematics::half4 wzww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzwx)) ::Unity::Mathematics::half4 wzwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzwy)) ::Unity::Mathematics::half4 wzwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzwz)) ::Unity::Mathematics::half4 wzwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzx, put = set_wzx)) ::Unity::Mathematics::half3 wzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzxw)) ::Unity::Mathematics::half4 wzxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzxx)) ::Unity::Mathematics::half4 wzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzxy, put = set_wzxy)) ::Unity::Mathematics::half4 wzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzxz)) ::Unity::Mathematics::half4 wzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzy, put = set_wzy)) ::Unity::Mathematics::half3 wzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzyw)) ::Unity::Mathematics::half4 wzyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzyx, put = set_wzyx)) ::Unity::Mathematics::half4 wzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzyy)) ::Unity::Mathematics::half4 wzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzyz)) ::Unity::Mathematics::half4 wzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzz)) ::Unity::Mathematics::half3 wzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzzw)) ::Unity::Mathematics::half4 wzzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzzx)) ::Unity::Mathematics::half4 wzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzzy)) ::Unity::Mathematics::half4 wzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_wzzz)) ::Unity::Mathematics::half4 wzzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xw, put = set_xw)) ::Unity::Mathematics::half2 xw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xww)) ::Unity::Mathematics::half3 xww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwww)) ::Unity::Mathematics::half4 xwww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwwx)) ::Unity::Mathematics::half4 xwwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwwy)) ::Unity::Mathematics::half4 xwwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwwz)) ::Unity::Mathematics::half4 xwwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwx)) ::Unity::Mathematics::half3 xwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwxw)) ::Unity::Mathematics::half4 xwxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwxx)) ::Unity::Mathematics::half4 xwxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwxy)) ::Unity::Mathematics::half4 xwxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwxz)) ::Unity::Mathematics::half4 xwxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwy, put = set_xwy)) ::Unity::Mathematics::half3 xwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwyw)) ::Unity::Mathematics::half4 xwyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwyx)) ::Unity::Mathematics::half4 xwyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwyy)) ::Unity::Mathematics::half4 xwyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwyz, put = set_xwyz)) ::Unity::Mathematics::half4 xwyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwz, put = set_xwz)) ::Unity::Mathematics::half3 xwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwzw)) ::Unity::Mathematics::half4 xwzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwzx)) ::Unity::Mathematics::half4 xwzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwzy, put = set_xwzy)) ::Unity::Mathematics::half4 xwzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xwzz)) ::Unity::Mathematics::half4 xwzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xx)) ::Unity::Mathematics::half2 xx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxw)) ::Unity::Mathematics::half3 xxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxww)) ::Unity::Mathematics::half4 xxww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxwx)) ::Unity::Mathematics::half4 xxwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxwy)) ::Unity::Mathematics::half4 xxwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxwz)) ::Unity::Mathematics::half4 xxwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxx)) ::Unity::Mathematics::half3 xxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxw)) ::Unity::Mathematics::half4 xxxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::half4 xxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::half4 xxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::half4 xxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxy)) ::Unity::Mathematics::half3 xxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyw)) ::Unity::Mathematics::half4 xxyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::half4 xxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::half4 xxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::half4 xxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxz)) ::Unity::Mathematics::half3 xxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzw)) ::Unity::Mathematics::half4 xxzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::half4 xxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::half4 xxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::half4 xxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::half2 xy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyw, put = set_xyw)) ::Unity::Mathematics::half3 xyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyww)) ::Unity::Mathematics::half4 xyww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xywx)) ::Unity::Mathematics::half4 xywx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xywy)) ::Unity::Mathematics::half4 xywy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xywz, put = set_xywz)) ::Unity::Mathematics::half4 xywz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyx)) ::Unity::Mathematics::half3 xyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxw)) ::Unity::Mathematics::half4 xyxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::half4 xyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::half4 xyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::half4 xyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyy)) ::Unity::Mathematics::half3 xyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyw)) ::Unity::Mathematics::half4 xyyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::half4 xyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::half4 xyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::half4 xyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::half3 xyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzw, put = set_xyzw)) ::Unity::Mathematics::half4 xyzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::half4 xyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::half4 xyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::half4 xyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::half2 xz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzw, put = set_xzw)) ::Unity::Mathematics::half3 xzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzww)) ::Unity::Mathematics::half4 xzww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzwx)) ::Unity::Mathematics::half4 xzwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzwy, put = set_xzwy)) ::Unity::Mathematics::half4 xzwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzwz)) ::Unity::Mathematics::half4 xzwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzx)) ::Unity::Mathematics::half3 xzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxw)) ::Unity::Mathematics::half4 xzxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::half4 xzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::half4 xzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::half4 xzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::half3 xzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyw, put = set_xzyw)) ::Unity::Mathematics::half4 xzyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::half4 xzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::half4 xzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::half4 xzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzz)) ::Unity::Mathematics::half3 xzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzw)) ::Unity::Mathematics::half4 xzzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::half4 xzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::half4 xzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::half4 xzzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yw, put = set_yw)) ::Unity::Mathematics::half2 yw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yww)) ::Unity::Mathematics::half3 yww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywww)) ::Unity::Mathematics::half4 ywww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywwx)) ::Unity::Mathematics::half4 ywwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywwy)) ::Unity::Mathematics::half4 ywwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywwz)) ::Unity::Mathematics::half4 ywwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywx, put = set_ywx)) ::Unity::Mathematics::half3 ywx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywxw)) ::Unity::Mathematics::half4 ywxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywxx)) ::Unity::Mathematics::half4 ywxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywxy)) ::Unity::Mathematics::half4 ywxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywxz, put = set_ywxz)) ::Unity::Mathematics::half4 ywxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywy)) ::Unity::Mathematics::half3 ywy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywyw)) ::Unity::Mathematics::half4 ywyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywyx)) ::Unity::Mathematics::half4 ywyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywyy)) ::Unity::Mathematics::half4 ywyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywyz)) ::Unity::Mathematics::half4 ywyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywz, put = set_ywz)) ::Unity::Mathematics::half3 ywz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywzw)) ::Unity::Mathematics::half4 ywzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywzx, put = set_ywzx)) ::Unity::Mathematics::half4 ywzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywzy)) ::Unity::Mathematics::half4 ywzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_ywzz)) ::Unity::Mathematics::half4 ywzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::half2 yx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxw, put = set_yxw)) ::Unity::Mathematics::half3 yxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxww)) ::Unity::Mathematics::half4 yxww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxwx)) ::Unity::Mathematics::half4 yxwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxwy)) ::Unity::Mathematics::half4 yxwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxwz, put = set_yxwz)) ::Unity::Mathematics::half4 yxwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxx)) ::Unity::Mathematics::half3 yxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxw)) ::Unity::Mathematics::half4 yxxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::half4 yxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::half4 yxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::half4 yxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxy)) ::Unity::Mathematics::half3 yxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyw)) ::Unity::Mathematics::half4 yxyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::half4 yxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::half4 yxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::half4 yxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::half3 yxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzw, put = set_yxzw)) ::Unity::Mathematics::half4 yxzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::half4 yxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::half4 yxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::half4 yxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yy)) ::Unity::Mathematics::half2 yy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyw)) ::Unity::Mathematics::half3 yyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyww)) ::Unity::Mathematics::half4 yyww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yywx)) ::Unity::Mathematics::half4 yywx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yywy)) ::Unity::Mathematics::half4 yywy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yywz)) ::Unity::Mathematics::half4 yywz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyx)) ::Unity::Mathematics::half3 yyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxw)) ::Unity::Mathematics::half4 yyxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::half4 yyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::half4 yyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::half4 yyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyy)) ::Unity::Mathematics::half3 yyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyw)) ::Unity::Mathematics::half4 yyyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::half4 yyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::half4 yyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::half4 yyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyz)) ::Unity::Mathematics::half3 yyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzw)) ::Unity::Mathematics::half4 yyzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::half4 yyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::half4 yyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::half4 yyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::half2 yz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzw, put = set_yzw)) ::Unity::Mathematics::half3 yzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzww)) ::Unity::Mathematics::half4 yzww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzwx, put = set_yzwx)) ::Unity::Mathematics::half4 yzwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzwy)) ::Unity::Mathematics::half4 yzwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzwz)) ::Unity::Mathematics::half4 yzwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::half3 yzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxw, put = set_yzxw)) ::Unity::Mathematics::half4 yzxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::half4 yzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::half4 yzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::half4 yzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzy)) ::Unity::Mathematics::half3 yzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyw)) ::Unity::Mathematics::half4 yzyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::half4 yzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::half4 yzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::half4 yzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzz)) ::Unity::Mathematics::half3 yzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzw)) ::Unity::Mathematics::half4 yzzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::half4 yzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::half4 yzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::half4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::half4 zero;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zw, put = set_zw)) ::Unity::Mathematics::half2 zw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zww)) ::Unity::Mathematics::half3 zww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwww)) ::Unity::Mathematics::half4 zwww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwwx)) ::Unity::Mathematics::half4 zwwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwwy)) ::Unity::Mathematics::half4 zwwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwwz)) ::Unity::Mathematics::half4 zwwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwx, put = set_zwx)) ::Unity::Mathematics::half3 zwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwxw)) ::Unity::Mathematics::half4 zwxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwxx)) ::Unity::Mathematics::half4 zwxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwxy, put = set_zwxy)) ::Unity::Mathematics::half4 zwxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwxz)) ::Unity::Mathematics::half4 zwxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwy, put = set_zwy)) ::Unity::Mathematics::half3 zwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwyw)) ::Unity::Mathematics::half4 zwyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwyx, put = set_zwyx)) ::Unity::Mathematics::half4 zwyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwyy)) ::Unity::Mathematics::half4 zwyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwyz)) ::Unity::Mathematics::half4 zwyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwz)) ::Unity::Mathematics::half3 zwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwzw)) ::Unity::Mathematics::half4 zwzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwzx)) ::Unity::Mathematics::half4 zwzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwzy)) ::Unity::Mathematics::half4 zwzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zwzz)) ::Unity::Mathematics::half4 zwzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::half2 zx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxw, put = set_zxw)) ::Unity::Mathematics::half3 zxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxww)) ::Unity::Mathematics::half4 zxww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxwx)) ::Unity::Mathematics::half4 zxwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxwy, put = set_zxwy)) ::Unity::Mathematics::half4 zxwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxwz)) ::Unity::Mathematics::half4 zxwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxx)) ::Unity::Mathematics::half3 zxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxw)) ::Unity::Mathematics::half4 zxxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::half4 zxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::half4 zxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::half4 zxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::half3 zxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyw, put = set_zxyw)) ::Unity::Mathematics::half4 zxyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::half4 zxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::half4 zxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::half4 zxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxz)) ::Unity::Mathematics::half3 zxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzw)) ::Unity::Mathematics::half4 zxzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::half4 zxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::half4 zxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::half4 zxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::half2 zy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyw, put = set_zyw)) ::Unity::Mathematics::half3 zyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyww)) ::Unity::Mathematics::half4 zyww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zywx, put = set_zywx)) ::Unity::Mathematics::half4 zywx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zywy)) ::Unity::Mathematics::half4 zywy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zywz)) ::Unity::Mathematics::half4 zywz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::half3 zyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxw, put = set_zyxw)) ::Unity::Mathematics::half4 zyxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::half4 zyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::half4 zyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::half4 zyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyy)) ::Unity::Mathematics::half3 zyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyw)) ::Unity::Mathematics::half4 zyyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::half4 zyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::half4 zyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::half4 zyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyz)) ::Unity::Mathematics::half3 zyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzw)) ::Unity::Mathematics::half4 zyzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::half4 zyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::half4 zyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::half4 zyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zz)) ::Unity::Mathematics::half2 zz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzw)) ::Unity::Mathematics::half3 zzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzww)) ::Unity::Mathematics::half4 zzww;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzwx)) ::Unity::Mathematics::half4 zzwx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzwy)) ::Unity::Mathematics::half4 zzwy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzwz)) ::Unity::Mathematics::half4 zzwz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzx)) ::Unity::Mathematics::half3 zzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxw)) ::Unity::Mathematics::half4 zzxw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::half4 zzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::half4 zzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::half4 zzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzy)) ::Unity::Mathematics::half3 zzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyw)) ::Unity::Mathematics::half4 zzyw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::half4 zzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::half4 zzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::half4 zzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzz)) ::Unity::Mathematics::half3 zzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzw)) ::Unity::Mathematics::half4 zzzw;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::half4 zzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::half4 zzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::half4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::half4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6ad23dc, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6ad2398, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::half4 rhs);

  /// @brief Method GetHashCode, addr 0x6ad2484, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6ad24f0, size 0x1b4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6ad26a4, size 0x314, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6acf5e8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 v);

  /// @brief Method .ctor, addr 0x6acf4fc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 v);

  /// @brief Method .ctor, addr 0x6acf48c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x6acf580, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6acf498, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6acf3d4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method .ctor, addr 0x6acf3e8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half2 zw);

  /// @brief Method .ctor, addr 0x6acf400, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz, ::Unity::Mathematics::half w);

  /// @brief Method .ctor, addr 0x6acf418, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half3 yzw);

  /// @brief Method .ctor, addr 0x6acf434, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method .ctor, addr 0x6acf44c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half2 zw);

  /// @brief Method .ctor, addr 0x6acf468, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half3 xyz, ::Unity::Mathematics::half w);

  /// @brief Method .ctor, addr 0x6acf484, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half4 xyzw);

  static inline ::Unity::Mathematics::half4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6ad2388, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half get_Item(int32_t index);

  /// @brief Method get_ww, addr 0x6ad237c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_ww();

  /// @brief Method get_www, addr 0x6ad2200, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_www();

  /// @brief Method get_wwww, addr 0x6ad1a70, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwww();

  /// @brief Method get_wwwx, addr 0x6ad1a1c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwwx();

  /// @brief Method get_wwwy, addr 0x6ad1a38, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwwy();

  /// @brief Method get_wwwz, addr 0x6ad1a54, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwwz();

  /// @brief Method get_wwx, addr 0x6ad21b8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wwx();

  /// @brief Method get_wwxw, addr 0x6ad1918, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwxw();

  /// @brief Method get_wwxx, addr 0x6ad18c4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwxx();

  /// @brief Method get_wwxy, addr 0x6ad18e0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwxy();

  /// @brief Method get_wwxz, addr 0x6ad18f8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwxz();

  /// @brief Method get_wwy, addr 0x6ad21d0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wwy();

  /// @brief Method get_wwyw, addr 0x6ad1988, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwyw();

  /// @brief Method get_wwyx, addr 0x6ad1934, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwyx();

  /// @brief Method get_wwyy, addr 0x6ad1954, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwyy();

  /// @brief Method get_wwyz, addr 0x6ad1970, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwyz();

  /// @brief Method get_wwz, addr 0x6ad21e8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wwz();

  /// @brief Method get_wwzw, addr 0x6ad1a00, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwzw();

  /// @brief Method get_wwzx, addr 0x6ad19a4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwzx();

  /// @brief Method get_wwzy, addr 0x6ad19c4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwzy();

  /// @brief Method get_wwzz, addr 0x6ad19e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wwzz();

  /// @brief Method get_wx, addr 0x6ad2320, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_wx();

  /// @brief Method get_wxw, addr 0x6ad2098, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wxw();

  /// @brief Method get_wxww, addr 0x6ad1490, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxww();

  /// @brief Method get_wxwx, addr 0x6ad1434, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxwx();

  /// @brief Method get_wxwy, addr 0x6ad1450, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxwy();

  /// @brief Method get_wxwz, addr 0x6ad1470, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxwz();

  /// @brief Method get_wxx, addr 0x6ad202c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wxx();

  /// @brief Method get_wxxw, addr 0x6ad12f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxxw();

  /// @brief Method get_wxxx, addr 0x6ad12a0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxxx();

  /// @brief Method get_wxxy, addr 0x6ad12b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxxy();

  /// @brief Method get_wxxz, addr 0x6ad12d4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxxz();

  /// @brief Method get_wxy, addr 0x6ad2040, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wxy();

  /// @brief Method get_wxyw, addr 0x6ad137c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxyw();

  /// @brief Method get_wxyx, addr 0x6ad130c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxyx();

  /// @brief Method get_wxyy, addr 0x6ad1328, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxyy();

  /// @brief Method get_wxyz, addr 0x6ad1344, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxyz();

  /// @brief Method get_wxz, addr 0x6ad2068, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wxz();

  /// @brief Method get_wxzw, addr 0x6ad1414, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxzw();

  /// @brief Method get_wxzx, addr 0x6ad139c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxzx();

  /// @brief Method get_wxzy, addr 0x6ad13b8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxzy();

  /// @brief Method get_wxzz, addr 0x6ad13f8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wxzz();

  /// @brief Method get_wy, addr 0x6ad2340, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_wy();

  /// @brief Method get_wyw, addr 0x6ad211c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wyw();

  /// @brief Method get_wyww, addr 0x6ad16a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyww();

  /// @brief Method get_wywx, addr 0x6ad1648, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wywx();

  /// @brief Method get_wywy, addr 0x6ad1668, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wywy();

  /// @brief Method get_wywz, addr 0x6ad1684, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wywz();

  /// @brief Method get_wyx, addr 0x6ad20b0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wyx();

  /// @brief Method get_wyxw, addr 0x6ad1524, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyxw();

  /// @brief Method get_wyxx, addr 0x6ad14ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyxx();

  /// @brief Method get_wyxy, addr 0x6ad14c8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyxy();

  /// @brief Method get_wyxz, addr 0x6ad14e4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyxz();

  /// @brief Method get_wyy, addr 0x6ad20e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wyy();

  /// @brief Method get_wyyw, addr 0x6ad1594, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyyw();

  /// @brief Method get_wyyx, addr 0x6ad1544, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyyx();

  /// @brief Method get_wyyy, addr 0x6ad1560, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyyy();

  /// @brief Method get_wyyz, addr 0x6ad1578, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyyz();

  /// @brief Method get_wyz, addr 0x6ad20f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wyz();

  /// @brief Method get_wyzw, addr 0x6ad1628, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyzw();

  /// @brief Method get_wyzx, addr 0x6ad15b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyzx();

  /// @brief Method get_wyzy, addr 0x6ad15f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyzy();

  /// @brief Method get_wyzz, addr 0x6ad160c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wyzz();

  /// @brief Method get_wz, addr 0x6ad2360, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_wz();

  /// @brief Method get_wzw, addr 0x6ad21a0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wzw();

  /// @brief Method get_wzww, addr 0x6ad18a8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzww();

  /// @brief Method get_wzwx, addr 0x6ad184c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzwx();

  /// @brief Method get_wzwy, addr 0x6ad186c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzwy();

  /// @brief Method get_wzwz, addr 0x6ad188c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzwz();

  /// @brief Method get_wzx, addr 0x6ad2134, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wzx();

  /// @brief Method get_wzxw, addr 0x6ad172c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzxw();

  /// @brief Method get_wzxx, addr 0x6ad16c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzxx();

  /// @brief Method get_wzxy, addr 0x6ad16dc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzxy();

  /// @brief Method get_wzxz, addr 0x6ad1710, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzxz();

  /// @brief Method get_wzy, addr 0x6ad2160, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wzy();

  /// @brief Method get_wzyw, addr 0x6ad17c0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzyw();

  /// @brief Method get_wzyx, addr 0x6ad174c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzyx();

  /// @brief Method get_wzyy, addr 0x6ad1788, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzyy();

  /// @brief Method get_wzyz, addr 0x6ad17a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzyz();

  /// @brief Method get_wzz, addr 0x6ad218c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_wzz();

  /// @brief Method get_wzzw, addr 0x6ad1830, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzzw();

  /// @brief Method get_wzzx, addr 0x6ad17e0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzzx();

  /// @brief Method get_wzzy, addr 0x6ad17fc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzzy();

  /// @brief Method get_wzzz, addr 0x6ad1818, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_wzzz();

  /// @brief Method get_xw, addr 0x6ad2250, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xw();

  /// @brief Method get_xww, addr 0x6ad1c5c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xww();

  /// @brief Method get_xwww, addr 0x6ad02e8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwww();

  /// @brief Method get_xwwx, addr 0x6ad0294, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwwx();

  /// @brief Method get_xwwy, addr 0x6ad02b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwwy();

  /// @brief Method get_xwwz, addr 0x6ad02cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwwz();

  /// @brief Method get_xwx, addr 0x6ad1be4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xwx();

  /// @brief Method get_xwxw, addr 0x6ad0150, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwxw();

  /// @brief Method get_xwxx, addr 0x6ad00f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwxx();

  /// @brief Method get_xwxy, addr 0x6ad0110, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwxy();

  /// @brief Method get_xwxz, addr 0x6ad0130, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwxz();

  /// @brief Method get_xwy, addr 0x6ad1bfc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xwy();

  /// @brief Method get_xwyw, addr 0x6ad01e0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwyw();

  /// @brief Method get_xwyx, addr 0x6ad016c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwyx();

  /// @brief Method get_xwyy, addr 0x6ad018c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwyy();

  /// @brief Method get_xwyz, addr 0x6ad01a8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwyz();

  /// @brief Method get_xwz, addr 0x6ad1c2c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xwz();

  /// @brief Method get_xwzw, addr 0x6ad0278, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwzw();

  /// @brief Method get_xwzx, addr 0x6ad01fc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwzx();

  /// @brief Method get_xwzy, addr 0x6ad021c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwzy();

  /// @brief Method get_xwzz, addr 0x6ad025c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xwzz();

  /// @brief Method get_xx, addr 0x6ad2214, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xx();

  /// @brief Method get_xxw, addr 0x6ad1acc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxw();

  /// @brief Method get_xxww, addr 0x6acfcf8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxww();

  /// @brief Method get_xxwx, addr 0x6acfc9c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxwx();

  /// @brief Method get_xxwy, addr 0x6acfcb8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxwy();

  /// @brief Method get_xxwz, addr 0x6acfcd8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxwz();

  /// @brief Method get_xxx, addr 0x6ad1a88, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxx();

  /// @brief Method get_xxxw, addr 0x6acfba0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxw();

  /// @brief Method get_xxxx, addr 0x6acfb50, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6acfb68, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x6acfb84, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxz();

  /// @brief Method get_xxy, addr 0x6ad1a9c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxy();

  /// @brief Method get_xxyw, addr 0x6acfc0c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyw();

  /// @brief Method get_xxyx, addr 0x6acfbbc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6acfbd8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x6acfbf4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyz();

  /// @brief Method get_xxz, addr 0x6ad1ab4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxz();

  /// @brief Method get_xxzw, addr 0x6acfc84, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxzw();

  /// @brief Method get_xxzx, addr 0x6acfc2c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x6acfc48, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x6acfc68, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxzz();

  /// @brief Method get_xy, addr 0x6ad2220, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xy();

  /// @brief Method get_xyw, addr 0x6ad1b38, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyw();

  /// @brief Method get_xyww, addr 0x6acfecc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyww();

  /// @brief Method get_xywx, addr 0x6acfe58, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xywx();

  /// @brief Method get_xywy, addr 0x6acfe78, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xywy();

  /// @brief Method get_xywz, addr 0x6acfe94, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xywz();

  /// @brief Method get_xyx, addr 0x6ad1ae4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyx();

  /// @brief Method get_xyxw, addr 0x6acfd6c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxw();

  /// @brief Method get_xyxx, addr 0x6acfd14, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6acfd30, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x6acfd4c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxz();

  /// @brief Method get_xyy, addr 0x6ad1afc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyy();

  /// @brief Method get_xyyw, addr 0x6acfddc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyw();

  /// @brief Method get_xyyx, addr 0x6acfd8c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6acfda8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x6acfdc0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyz();

  /// @brief Method get_xyz, addr 0x6ad1b10, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyz();

  /// @brief Method get_xyzw, addr 0x6acfe48, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyzw();

  /// @brief Method get_xyzx, addr 0x6acfdf8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x6acfe18, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x6acfe34, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyzz();

  /// @brief Method get_xz, addr 0x6ad2230, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xz();

  /// @brief Method get_xzw, addr 0x6ad1bbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xzw();

  /// @brief Method get_xzww, addr 0x6ad00d8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzww();

  /// @brief Method get_xzwx, addr 0x6ad005c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzwx();

  /// @brief Method get_xzwy, addr 0x6ad007c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzwy();

  /// @brief Method get_xzwz, addr 0x6ad00bc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzwz();

  /// @brief Method get_xzx, addr 0x6ad1b60, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xzx();

  /// @brief Method get_xzxw, addr 0x6acff38, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzxw();

  /// @brief Method get_xzxx, addr 0x6acfee0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x6acfefc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x6acff1c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzxz();

  /// @brief Method get_xzy, addr 0x6ad1b78, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xzy();

  /// @brief Method get_xzyw, addr 0x6acffb0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzyw();

  /// @brief Method get_xzyx, addr 0x6acff58, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x6acff78, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x6acff94, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzyz();

  /// @brief Method get_xzz, addr 0x6ad1ba8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xzz();

  /// @brief Method get_xzzw, addr 0x6ad0040, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzzw();

  /// @brief Method get_xzzx, addr 0x6acfff0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x6ad000c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x6ad0028, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xzzz();

  /// @brief Method get_yw, addr 0x6ad22a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yw();

  /// @brief Method get_yww, addr 0x6ad1e44, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yww();

  /// @brief Method get_ywww, addr 0x6ad0ac0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywww();

  /// @brief Method get_ywwx, addr 0x6ad0a6c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywwx();

  /// @brief Method get_ywwy, addr 0x6ad0a88, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywwy();

  /// @brief Method get_ywwz, addr 0x6ad0aa4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywwz();

  /// @brief Method get_ywx, addr 0x6ad1dcc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_ywx();

  /// @brief Method get_ywxw, addr 0x6ad0940, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywxw();

  /// @brief Method get_ywxx, addr 0x6ad08c4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywxx();

  /// @brief Method get_ywxy, addr 0x6ad08e0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywxy();

  /// @brief Method get_ywxz, addr 0x6ad0900, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywxz();

  /// @brief Method get_ywy, addr 0x6ad1dfc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_ywy();

  /// @brief Method get_ywyw, addr 0x6ad09b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywyw();

  /// @brief Method get_ywyx, addr 0x6ad095c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywyx();

  /// @brief Method get_ywyy, addr 0x6ad097c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywyy();

  /// @brief Method get_ywyz, addr 0x6ad0998, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywyz();

  /// @brief Method get_ywz, addr 0x6ad1e14, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_ywz();

  /// @brief Method get_ywzw, addr 0x6ad0a50, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywzw();

  /// @brief Method get_ywzx, addr 0x6ad09d4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywzx();

  /// @brief Method get_ywzy, addr 0x6ad0a14, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywzy();

  /// @brief Method get_ywzz, addr 0x6ad0a34, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_ywzz();

  /// @brief Method get_yx, addr 0x6ad2270, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yx();

  /// @brief Method get_yxw, addr 0x6ad1ccc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxw();

  /// @brief Method get_yxww, addr 0x6ad04f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxww();

  /// @brief Method get_yxwx, addr 0x6ad0474, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxwx();

  /// @brief Method get_yxwy, addr 0x6ad0490, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxwy();

  /// @brief Method get_yxwz, addr 0x6ad04b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxwz();

  /// @brief Method get_yxx, addr 0x6ad1c70, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxx();

  /// @brief Method get_yxxw, addr 0x6ad0350, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxw();

  /// @brief Method get_yxxx, addr 0x6ad0300, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6ad0318, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x6ad0334, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxz();

  /// @brief Method get_yxy, addr 0x6ad1c84, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxy();

  /// @brief Method get_yxyw, addr 0x6ad03c4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyw();

  /// @brief Method get_yxyx, addr 0x6ad036c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6ad0388, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x6ad03a4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyz();

  /// @brief Method get_yxz, addr 0x6ad1c9c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxz();

  /// @brief Method get_yxzw, addr 0x6ad043c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxzw();

  /// @brief Method get_yxzx, addr 0x6ad03e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x6ad0400, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x6ad0420, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxzz();

  /// @brief Method get_yy, addr 0x6ad228c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yy();

  /// @brief Method get_yyw, addr 0x6ad1d40, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyw();

  /// @brief Method get_yyww, addr 0x6ad06bc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyww();

  /// @brief Method get_yywx, addr 0x6ad0660, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yywx();

  /// @brief Method get_yywy, addr 0x6ad0680, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yywy();

  /// @brief Method get_yywz, addr 0x6ad069c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yywz();

  /// @brief Method get_yyx, addr 0x6ad1cfc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyx();

  /// @brief Method get_yyxw, addr 0x6ad0564, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxw();

  /// @brief Method get_yyxx, addr 0x6ad050c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6ad0528, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x6ad0544, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxz();

  /// @brief Method get_yyy, addr 0x6ad1d14, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyy();

  /// @brief Method get_yyyw, addr 0x6ad05d4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyw();

  /// @brief Method get_yyyx, addr 0x6ad0584, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6ad05a0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x6ad05b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyz();

  /// @brief Method get_yyz, addr 0x6ad1d28, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyz();

  /// @brief Method get_yyzw, addr 0x6ad0648, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyzw();

  /// @brief Method get_yyzx, addr 0x6ad05f0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x6ad0610, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x6ad062c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyzz();

  /// @brief Method get_yz, addr 0x6ad2298, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yz();

  /// @brief Method get_yzw, addr 0x6ad1da4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yzw();

  /// @brief Method get_yzww, addr 0x6ad08b0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzww();

  /// @brief Method get_yzwx, addr 0x6ad083c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzwx();

  /// @brief Method get_yzwy, addr 0x6ad0874, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzwy();

  /// @brief Method get_yzwz, addr 0x6ad0894, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzwz();

  /// @brief Method get_yzx, addr 0x6ad1d58, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yzx();

  /// @brief Method get_yzxw, addr 0x6ad0728, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzxw();

  /// @brief Method get_yzxx, addr 0x6ad06d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x6ad06ec, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x6ad070c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzxz();

  /// @brief Method get_yzy, addr 0x6ad1d78, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yzy();

  /// @brief Method get_yzyw, addr 0x6ad07b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzyw();

  /// @brief Method get_yzyx, addr 0x6ad0758, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x6ad0778, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x6ad0794, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzyz();

  /// @brief Method get_yzz, addr 0x6ad1d90, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yzz();

  /// @brief Method get_yzzw, addr 0x6ad0820, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzzw();

  /// @brief Method get_yzzx, addr 0x6ad07d0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x6ad07ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x6ad0808, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yzzz();

  /// @brief Method get_zw, addr 0x6ad2310, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_zw();

  /// @brief Method get_zww, addr 0x6ad2018, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zww();

  /// @brief Method get_zwww, addr 0x6ad1288, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwww();

  /// @brief Method get_zwwx, addr 0x6ad1234, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwwx();

  /// @brief Method get_zwwy, addr 0x6ad1250, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwwy();

  /// @brief Method get_zwwz, addr 0x6ad126c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwwz();

  /// @brief Method get_zwx, addr 0x6ad1fc0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zwx();

  /// @brief Method get_zwxw, addr 0x6ad1120, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwxw();

  /// @brief Method get_zwxx, addr 0x6ad10c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwxx();

  /// @brief Method get_zwxy, addr 0x6ad10dc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwxy();

  /// @brief Method get_zwxz, addr 0x6ad1100, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwxz();

  /// @brief Method get_zwy, addr 0x6ad1fe0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zwy();

  /// @brief Method get_zwyw, addr 0x6ad11a0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwyw();

  /// @brief Method get_zwyx, addr 0x6ad113c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwyx();

  /// @brief Method get_zwyy, addr 0x6ad116c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwyy();

  /// @brief Method get_zwyz, addr 0x6ad1180, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwyz();

  /// @brief Method get_zwz, addr 0x6ad2000, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zwz();

  /// @brief Method get_zwzw, addr 0x6ad1218, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwzw();

  /// @brief Method get_zwzx, addr 0x6ad11bc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwzx();

  /// @brief Method get_zwzy, addr 0x6ad11dc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwzy();

  /// @brief Method get_zwzz, addr 0x6ad11fc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zwzz();

  /// @brief Method get_zx, addr 0x6ad22c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_zx();

  /// @brief Method get_zxw, addr 0x6ad1eac, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zxw();

  /// @brief Method get_zxww, addr 0x6ad0cd0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxww();

  /// @brief Method get_zxwx, addr 0x6ad0c54, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxwx();

  /// @brief Method get_zxwy, addr 0x6ad0c70, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxwy();

  /// @brief Method get_zxwz, addr 0x6ad0cb0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxwz();

  /// @brief Method get_zxx, addr 0x6ad1e58, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zxx();

  /// @brief Method get_zxxw, addr 0x6ad0b28, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxxw();

  /// @brief Method get_zxxx, addr 0x6ad0ad8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x6ad0af0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x6ad0b0c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxxz();

  /// @brief Method get_zxy, addr 0x6ad1e6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zxy();

  /// @brief Method get_zxyw, addr 0x6ad0b9c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxyw();

  /// @brief Method get_zxyx, addr 0x6ad0b44, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x6ad0b60, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x6ad0b7c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxyz();

  /// @brief Method get_zxz, addr 0x6ad1e94, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zxz();

  /// @brief Method get_zxzw, addr 0x6ad0c34, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxzw();

  /// @brief Method get_zxzx, addr 0x6ad0bdc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x6ad0bf8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x6ad0c18, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zxzz();

  /// @brief Method get_zy, addr 0x6ad22e8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_zy();

  /// @brief Method get_zyw, addr 0x6ad1f34, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zyw();

  /// @brief Method get_zyww, addr 0x6ad0ee0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyww();

  /// @brief Method get_zywx, addr 0x6ad0e64, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zywx();

  /// @brief Method get_zywy, addr 0x6ad0ea4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zywy();

  /// @brief Method get_zywz, addr 0x6ad0ec0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zywz();

  /// @brief Method get_zyx, addr 0x6ad1edc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zyx();

  /// @brief Method get_zyxw, addr 0x6ad0d44, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyxw();

  /// @brief Method get_zyxx, addr 0x6ad0cec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x6ad0d08, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x6ad0d24, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyxz();

  /// @brief Method get_zyy, addr 0x6ad1f08, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zyy();

  /// @brief Method get_zyyw, addr 0x6ad0dd0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyyw();

  /// @brief Method get_zyyx, addr 0x6ad0d80, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x6ad0d9c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x6ad0db4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyyz();

  /// @brief Method get_zyz, addr 0x6ad1f1c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zyz();

  /// @brief Method get_zyzw, addr 0x6ad0e44, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyzw();

  /// @brief Method get_zyzx, addr 0x6ad0dec, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x6ad0e0c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x6ad0e28, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zyzz();

  /// @brief Method get_zz, addr 0x6ad2304, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_zz();

  /// @brief Method get_zzw, addr 0x6ad1fa8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zzw();

  /// @brief Method get_zzww, addr 0x6ad10ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzww();

  /// @brief Method get_zzwx, addr 0x6ad1050, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzwx();

  /// @brief Method get_zzwy, addr 0x6ad1070, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzwy();

  /// @brief Method get_zzwz, addr 0x6ad1090, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzwz();

  /// @brief Method get_zzx, addr 0x6ad1f64, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zzx();

  /// @brief Method get_zzxw, addr 0x6ad0f4c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzxw();

  /// @brief Method get_zzxx, addr 0x6ad0efc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x6ad0f18, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x6ad0f30, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzxz();

  /// @brief Method get_zzy, addr 0x6ad1f7c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zzy();

  /// @brief Method get_zzyw, addr 0x6ad0fc4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzyw();

  /// @brief Method get_zzyx, addr 0x6ad0f6c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x6ad0f8c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x6ad0fa8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzyz();

  /// @brief Method get_zzz, addr 0x6ad1f94, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_zzz();

  /// @brief Method get_zzzw, addr 0x6ad1034, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzzw();

  /// @brief Method get_zzzx, addr 0x6ad0fe4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x6ad1000, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x6ad101c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::half4>* i___System__IEquatable_1___Unity__Mathematics__half4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x6acfa44, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half4 rhs);

  /// @brief Method op_Equality, addr 0x6acf9fc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::half4 lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Equality, addr 0x6acf9c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::half4 lhs, ::Unity::Mathematics::half4 rhs);

  /// @brief Method op_Explicit, addr 0x6acf884, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Explicit___Unity__Mathematics__half4(::Unity::Mathematics::double4 v);

  /// @brief Method op_Explicit, addr 0x6acf6e8, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Explicit___Unity__Mathematics__half4(::Unity::Mathematics::float4 v);

  /// @brief Method op_Explicit, addr 0x6acf818, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Explicit___Unity__Mathematics__half4(double_t v);

  /// @brief Method op_Explicit, addr 0x6acf680, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Explicit___Unity__Mathematics__half4(float_t v);

  /// @brief Method op_Implicit, addr 0x6acf670, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 op_Implicit___Unity__Mathematics__half4(::Unity::Mathematics::half v);

  /// @brief Method op_Inequality, addr 0x6acfb0c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half4 rhs);

  /// @brief Method op_Inequality, addr 0x6acfac4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::half4 lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Inequality, addr 0x6acfa88, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::half4 lhs, ::Unity::Mathematics::half4 rhs);

  static inline void setStaticF_zero(::Unity::Mathematics::half4 value);

  /// @brief Method set_Item, addr 0x6ad2390, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::Unity::Mathematics::half value);

  /// @brief Method set_wx, addr 0x6ad2330, size 0x10, virtual false, abstract: false, final false
  inline void set_wx(::Unity::Mathematics::half2 value);

  /// @brief Method set_wxy, addr 0x6ad2050, size 0x18, virtual false, abstract: false, final false
  inline void set_wxy(::Unity::Mathematics::half3 value);

  /// @brief Method set_wxyz, addr 0x6ad135c, size 0x20, virtual false, abstract: false, final false
  inline void set_wxyz(::Unity::Mathematics::half4 value);

  /// @brief Method set_wxz, addr 0x6ad2080, size 0x18, virtual false, abstract: false, final false
  inline void set_wxz(::Unity::Mathematics::half3 value);

  /// @brief Method set_wxzy, addr 0x6ad13d8, size 0x20, virtual false, abstract: false, final false
  inline void set_wxzy(::Unity::Mathematics::half4 value);

  /// @brief Method set_wy, addr 0x6ad2350, size 0x10, virtual false, abstract: false, final false
  inline void set_wy(::Unity::Mathematics::half2 value);

  /// @brief Method set_wyx, addr 0x6ad20c8, size 0x18, virtual false, abstract: false, final false
  inline void set_wyx(::Unity::Mathematics::half3 value);

  /// @brief Method set_wyxz, addr 0x6ad1504, size 0x20, virtual false, abstract: false, final false
  inline void set_wyxz(::Unity::Mathematics::half4 value);

  /// @brief Method set_wyz, addr 0x6ad2104, size 0x18, virtual false, abstract: false, final false
  inline void set_wyz(::Unity::Mathematics::half3 value);

  /// @brief Method set_wyzx, addr 0x6ad15d0, size 0x20, virtual false, abstract: false, final false
  inline void set_wyzx(::Unity::Mathematics::half4 value);

  /// @brief Method set_wz, addr 0x6ad2370, size 0xc, virtual false, abstract: false, final false
  inline void set_wz(::Unity::Mathematics::half2 value);

  /// @brief Method set_wzx, addr 0x6ad214c, size 0x14, virtual false, abstract: false, final false
  inline void set_wzx(::Unity::Mathematics::half3 value);

  /// @brief Method set_wzxy, addr 0x6ad16f4, size 0x1c, virtual false, abstract: false, final false
  inline void set_wzxy(::Unity::Mathematics::half4 value);

  /// @brief Method set_wzy, addr 0x6ad2178, size 0x14, virtual false, abstract: false, final false
  inline void set_wzy(::Unity::Mathematics::half3 value);

  /// @brief Method set_wzyx, addr 0x6ad176c, size 0x1c, virtual false, abstract: false, final false
  inline void set_wzyx(::Unity::Mathematics::half4 value);

  /// @brief Method set_xw, addr 0x6ad2260, size 0x10, virtual false, abstract: false, final false
  inline void set_xw(::Unity::Mathematics::half2 value);

  /// @brief Method set_xwy, addr 0x6ad1c14, size 0x18, virtual false, abstract: false, final false
  inline void set_xwy(::Unity::Mathematics::half3 value);

  /// @brief Method set_xwyz, addr 0x6ad01c0, size 0x20, virtual false, abstract: false, final false
  inline void set_xwyz(::Unity::Mathematics::half4 value);

  /// @brief Method set_xwz, addr 0x6ad1c44, size 0x18, virtual false, abstract: false, final false
  inline void set_xwz(::Unity::Mathematics::half3 value);

  /// @brief Method set_xwzy, addr 0x6ad023c, size 0x20, virtual false, abstract: false, final false
  inline void set_xwzy(::Unity::Mathematics::half4 value);

  /// @brief Method set_xy, addr 0x6ad2228, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::half2 value);

  /// @brief Method set_xyw, addr 0x6ad1b48, size 0x18, virtual false, abstract: false, final false
  inline void set_xyw(::Unity::Mathematics::half3 value);

  /// @brief Method set_xywz, addr 0x6acfeac, size 0x20, virtual false, abstract: false, final false
  inline void set_xywz(::Unity::Mathematics::half4 value);

  /// @brief Method set_xyz, addr 0x6ad1b20, size 0x18, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::half3 value);

  /// @brief Method set_xyzw, addr 0x6acfe50, size 0x8, virtual false, abstract: false, final false
  inline void set_xyzw(::Unity::Mathematics::half4 value);

  /// @brief Method set_xz, addr 0x6ad2240, size 0x10, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::half2 value);

  /// @brief Method set_xzw, addr 0x6ad1bcc, size 0x18, virtual false, abstract: false, final false
  inline void set_xzw(::Unity::Mathematics::half3 value);

  /// @brief Method set_xzwy, addr 0x6ad009c, size 0x20, virtual false, abstract: false, final false
  inline void set_xzwy(::Unity::Mathematics::half4 value);

  /// @brief Method set_xzy, addr 0x6ad1b90, size 0x18, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::half3 value);

  /// @brief Method set_xzyw, addr 0x6acffd0, size 0x20, virtual false, abstract: false, final false
  inline void set_xzyw(::Unity::Mathematics::half4 value);

  /// @brief Method set_yw, addr 0x6ad22b8, size 0x10, virtual false, abstract: false, final false
  inline void set_yw(::Unity::Mathematics::half2 value);

  /// @brief Method set_ywx, addr 0x6ad1de4, size 0x18, virtual false, abstract: false, final false
  inline void set_ywx(::Unity::Mathematics::half3 value);

  /// @brief Method set_ywxz, addr 0x6ad0920, size 0x20, virtual false, abstract: false, final false
  inline void set_ywxz(::Unity::Mathematics::half4 value);

  /// @brief Method set_ywz, addr 0x6ad1e2c, size 0x18, virtual false, abstract: false, final false
  inline void set_ywz(::Unity::Mathematics::half3 value);

  /// @brief Method set_ywzx, addr 0x6ad09f4, size 0x20, virtual false, abstract: false, final false
  inline void set_ywzx(::Unity::Mathematics::half4 value);

  /// @brief Method set_yx, addr 0x6ad2280, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::half2 value);

  /// @brief Method set_yxw, addr 0x6ad1ce4, size 0x18, virtual false, abstract: false, final false
  inline void set_yxw(::Unity::Mathematics::half3 value);

  /// @brief Method set_yxwz, addr 0x6ad04d0, size 0x20, virtual false, abstract: false, final false
  inline void set_yxwz(::Unity::Mathematics::half4 value);

  /// @brief Method set_yxz, addr 0x6ad1cb4, size 0x18, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::half3 value);

  /// @brief Method set_yxzw, addr 0x6ad0454, size 0x20, virtual false, abstract: false, final false
  inline void set_yxzw(::Unity::Mathematics::half4 value);

  /// @brief Method set_yz, addr 0x6ad22a0, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::half2 value);

  /// @brief Method set_yzw, addr 0x6ad1db4, size 0x18, virtual false, abstract: false, final false
  inline void set_yzw(::Unity::Mathematics::half3 value);

  /// @brief Method set_yzwx, addr 0x6ad0854, size 0x20, virtual false, abstract: false, final false
  inline void set_yzwx(::Unity::Mathematics::half4 value);

  /// @brief Method set_yzx, addr 0x6ad1d68, size 0x10, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::half3 value);

  /// @brief Method set_yzxw, addr 0x6ad0740, size 0x18, virtual false, abstract: false, final false
  inline void set_yzxw(::Unity::Mathematics::half4 value);

  /// @brief Method set_zw, addr 0x6ad2318, size 0x8, virtual false, abstract: false, final false
  inline void set_zw(::Unity::Mathematics::half2 value);

  /// @brief Method set_zwx, addr 0x6ad1fd0, size 0x10, virtual false, abstract: false, final false
  inline void set_zwx(::Unity::Mathematics::half3 value);

  /// @brief Method set_zwxy, addr 0x6ad10e8, size 0x18, virtual false, abstract: false, final false
  inline void set_zwxy(::Unity::Mathematics::half4 value);

  /// @brief Method set_zwy, addr 0x6ad1ff0, size 0x10, virtual false, abstract: false, final false
  inline void set_zwy(::Unity::Mathematics::half3 value);

  /// @brief Method set_zwyx, addr 0x6ad1154, size 0x18, virtual false, abstract: false, final false
  inline void set_zwyx(::Unity::Mathematics::half4 value);

  /// @brief Method set_zx, addr 0x6ad22d8, size 0x10, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::half2 value);

  /// @brief Method set_zxw, addr 0x6ad1ec4, size 0x18, virtual false, abstract: false, final false
  inline void set_zxw(::Unity::Mathematics::half3 value);

  /// @brief Method set_zxwy, addr 0x6ad0c90, size 0x20, virtual false, abstract: false, final false
  inline void set_zxwy(::Unity::Mathematics::half4 value);

  /// @brief Method set_zxy, addr 0x6ad1e7c, size 0x18, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::half3 value);

  /// @brief Method set_zxyw, addr 0x6ad0bbc, size 0x20, virtual false, abstract: false, final false
  inline void set_zxyw(::Unity::Mathematics::half4 value);

  /// @brief Method set_zy, addr 0x6ad22f8, size 0xc, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::half2 value);

  /// @brief Method set_zyw, addr 0x6ad1f4c, size 0x18, virtual false, abstract: false, final false
  inline void set_zyw(::Unity::Mathematics::half3 value);

  /// @brief Method set_zywx, addr 0x6ad0e84, size 0x20, virtual false, abstract: false, final false
  inline void set_zywx(::Unity::Mathematics::half4 value);

  /// @brief Method set_zyx, addr 0x6ad1ef4, size 0x14, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::half3 value);

  /// @brief Method set_zyxw, addr 0x6ad0d64, size 0x1c, virtual false, abstract: false, final false
  inline void set_zyxw(::Unity::Mathematics::half4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr half4();

  // Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "z", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "::Unity::Mathematics::half",
  // modifiers: "", def_value: None, comment: None }]
  constexpr half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13428 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x2, def value: None
  ::Unity::Mathematics::half x;

  /// @brief Field y, offset: 0x2, size: 0x2, def value: None
  ::Unity::Mathematics::half y;

  /// @brief Field z, offset: 0x4, size: 0x2, def value: None
  ::Unity::Mathematics::half z;

  /// @brief Field w, offset: 0x6, size: 0x2, def value: None
  ::Unity::Mathematics::half w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::half4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, y) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, z) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, w) == 0x6, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::half4) == 0x8, "Size mismatch!");

} // namespace Unity::Mathematics
