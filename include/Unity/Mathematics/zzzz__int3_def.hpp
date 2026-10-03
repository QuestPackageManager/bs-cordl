#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3)
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
struct bool3;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
class int3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint3;
}
// Forward declare root types
namespace Unity::Mathematics {
class int3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::int3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::int3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int3_DebuggerProxy*, "Unity.Mathematics", "int3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int3, "Unity.Mathematics", "int3");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.int3/DebuggerProxy
class CORDL_TYPE int3_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) int32_t z;

  static inline ::Unity::Mathematics::int3_DebuggerProxy* New_ctor(::Unity::Mathematics::int3 v);

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr int32_t const& __cordl_internal_get_z() const;

  constexpr int32_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  constexpr void __cordl_internal_set_z(int32_t value);

  /// @brief Method .ctor, addr 0x6a9c444, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr int3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "int3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  int3_DebuggerProxy(int3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "int3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  int3_DebuggerProxy(int3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13427 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  int32_t ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int3_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3_DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int3_DebuggerProxy) == 0x20, "Size mismatch!");

} // namespace Unity::Mathematics
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.int3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int3
struct CORDL_TYPE int3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::int3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xx)) ::Unity::Mathematics::int2 xx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxx)) ::Unity::Mathematics::int3 xxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::int4 xxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::int4 xxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::int4 xxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxy)) ::Unity::Mathematics::int3 xxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::int4 xxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::int4 xxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::int4 xxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxz)) ::Unity::Mathematics::int3 xxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::int4 xxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::int4 xxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::int4 xxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::int2 xy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyx)) ::Unity::Mathematics::int3 xyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::int4 xyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::int4 xyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::int4 xyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyy)) ::Unity::Mathematics::int3 xyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::int4 xyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::int4 xyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::int4 xyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::int3 xyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::int4 xyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::int4 xyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::int4 xyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::int2 xz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzx)) ::Unity::Mathematics::int3 xzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::int4 xzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::int4 xzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::int4 xzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::int3 xzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::int4 xzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::int4 xzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::int4 xzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzz)) ::Unity::Mathematics::int3 xzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::int4 xzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::int4 xzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::int4 xzzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::int2 yx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxx)) ::Unity::Mathematics::int3 yxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::int4 yxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::int4 yxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::int4 yxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxy)) ::Unity::Mathematics::int3 yxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::int4 yxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::int4 yxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::int4 yxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::int3 yxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::int4 yxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::int4 yxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::int4 yxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yy)) ::Unity::Mathematics::int2 yy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyx)) ::Unity::Mathematics::int3 yyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::int4 yyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::int4 yyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::int4 yyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyy)) ::Unity::Mathematics::int3 yyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::int4 yyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::int4 yyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::int4 yyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyz)) ::Unity::Mathematics::int3 yyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::int4 yyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::int4 yyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::int4 yyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::int2 yz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::int3 yzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::int4 yzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::int4 yzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::int4 yzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzy)) ::Unity::Mathematics::int3 yzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::int4 yzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::int4 yzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::int4 yzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzz)) ::Unity::Mathematics::int3 yzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::int4 yzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::int4 yzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::int4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int3 zero;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::int2 zx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxx)) ::Unity::Mathematics::int3 zxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::int4 zxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::int4 zxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::int4 zxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::int3 zxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::int4 zxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::int4 zxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::int4 zxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxz)) ::Unity::Mathematics::int3 zxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::int4 zxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::int4 zxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::int4 zxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::int2 zy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::int3 zyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::int4 zyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::int4 zyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::int4 zyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyy)) ::Unity::Mathematics::int3 zyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::int4 zyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::int4 zyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::int4 zyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyz)) ::Unity::Mathematics::int3 zyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::int4 zyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::int4 zyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::int4 zyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zz)) ::Unity::Mathematics::int2 zz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzx)) ::Unity::Mathematics::int3 zzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::int4 zzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::int4 zzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::int4 zzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzy)) ::Unity::Mathematics::int3 zzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::int4 zzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::int4 zzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::int4 zzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzz)) ::Unity::Mathematics::int3 zzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::int4 zzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::int4 zzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::int4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6a9c1ac, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a9c178, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3 rhs);

  /// @brief Method GetHashCode, addr 0x6a9c248, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a9c290, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6a9c368, size 0xdc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6a9b0e4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

  /// @brief Method .ctor, addr 0x6a9b1ac, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 v);

  /// @brief Method .ctor, addr 0x6a9b14c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 v);

  /// @brief Method .ctor, addr 0x6a9b118, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 v);

  /// @brief Method .ctor, addr 0x6a9b0d4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6a9b188, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6a9b128, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6a9b0c8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6a9b10c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x6a9b08c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y, int32_t z);

  /// @brief Method .ctor, addr 0x6a9b098, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, ::Unity::Mathematics::int2 yz);

  /// @brief Method .ctor, addr 0x6a9b0a8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 xy, int32_t z);

  /// @brief Method .ctor, addr 0x6a9b0b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 xyz);

  static inline ::Unity::Mathematics::int3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6a9c168, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x6a9c0b4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xx();

  /// @brief Method get_xxx, addr 0x6a9bee4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxx();

  /// @brief Method get_xxxx, addr 0x6a9b8ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6a9b8fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x6a9b90c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxz();

  /// @brief Method get_xxy, addr 0x6a9bef0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxy();

  /// @brief Method get_xxyx, addr 0x6a9b920, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6a9b930, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x6a9b94c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyz();

  /// @brief Method get_xxz, addr 0x6a9befc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxz();

  /// @brief Method get_xxzx, addr 0x6a9b95c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x6a9b970, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x6a9b984, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzz();

  /// @brief Method get_xy, addr 0x6a9c0c0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xy();

  /// @brief Method get_xyx, addr 0x6a9bf0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyx();

  /// @brief Method get_xyxx, addr 0x6a9b998, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6a9b9a8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x6a9b9b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxz();

  /// @brief Method get_xyy, addr 0x6a9bf18, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyy();

  /// @brief Method get_xyyx, addr 0x6a9b9c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6a9b9d8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x6a9b9e8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyz();

  /// @brief Method get_xyz, addr 0x6a9bf24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyz();

  /// @brief Method get_xyzx, addr 0x6a9b9fc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x6a9ba10, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x6a9ba24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzz();

  /// @brief Method get_xz, addr 0x6a9c0d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xz();

  /// @brief Method get_xzx, addr 0x6a9bf44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzx();

  /// @brief Method get_xzxx, addr 0x6a9ba34, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x6a9ba48, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x6a9ba5c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxz();

  /// @brief Method get_xzy, addr 0x6a9bf54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzy();

  /// @brief Method get_xzyx, addr 0x6a9ba70, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x6a9ba84, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x6a9ba98, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyz();

  /// @brief Method get_xzz, addr 0x6a9bf74, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzz();

  /// @brief Method get_xzzx, addr 0x6a9baac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x6a9bac0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x6a9bad4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzz();

  /// @brief Method get_yx, addr 0x6a9c0f0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yx();

  /// @brief Method get_yxx, addr 0x6a9bf84, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxx();

  /// @brief Method get_yxxx, addr 0x6a9bae8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6a9bafc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x6a9bb08, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxz();

  /// @brief Method get_yxy, addr 0x6a9bf90, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxy();

  /// @brief Method get_yxyx, addr 0x6a9bb1c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6a9bb2c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x6a9bb3c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyz();

  /// @brief Method get_yxz, addr 0x6a9bf9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxz();

  /// @brief Method get_yxzx, addr 0x6a9bb50, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x6a9bb68, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x6a9bb7c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzz();

  /// @brief Method get_yy, addr 0x6a9c108, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yy();

  /// @brief Method get_yyx, addr 0x6a9bfbc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyx();

  /// @brief Method get_yyxx, addr 0x6a9bb90, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6a9bbac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x6a9bbbc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxz();

  /// @brief Method get_yyy, addr 0x6a9bfc8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyy();

  /// @brief Method get_yyyx, addr 0x6a9bbd0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6a9bbe0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x6a9bbf0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyz();

  /// @brief Method get_yyz, addr 0x6a9bfd4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyz();

  /// @brief Method get_yyzx, addr 0x6a9bc00, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x6a9bc14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x6a9bc24, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzz();

  /// @brief Method get_yz, addr 0x6a9c114, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yz();

  /// @brief Method get_yzx, addr 0x6a9bfe0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzx();

  /// @brief Method get_yzxx, addr 0x6a9bc40, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x6a9bc50, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x6a9bc64, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxz();

  /// @brief Method get_yzy, addr 0x6a9bffc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzy();

  /// @brief Method get_yzyx, addr 0x6a9bc78, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x6a9bc8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x6a9bc9c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyz();

  /// @brief Method get_yzz, addr 0x6a9c008, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzz();

  /// @brief Method get_yzzx, addr 0x6a9bca8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x6a9bcbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x6a9bccc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzz();

  /// @brief Method get_zx, addr 0x6a9c124, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zx();

  /// @brief Method get_zxx, addr 0x6a9c014, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxx();

  /// @brief Method get_zxxx, addr 0x6a9bcdc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x6a9bcf4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x6a9bd08, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxz();

  /// @brief Method get_zxy, addr 0x6a9c024, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxy();

  /// @brief Method get_zxyx, addr 0x6a9bd1c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x6a9bd34, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x6a9bd48, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyz();

  /// @brief Method get_zxz, addr 0x6a9c044, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxz();

  /// @brief Method get_zxzx, addr 0x6a9bd5c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x6a9bd70, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x6a9bd84, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzz();

  /// @brief Method get_zy, addr 0x6a9c144, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zy();

  /// @brief Method get_zyx, addr 0x6a9c054, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyx();

  /// @brief Method get_zyxx, addr 0x6a9bd98, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x6a9bdac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x6a9bdc0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxz();

  /// @brief Method get_zyy, addr 0x6a9c074, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyy();

  /// @brief Method get_zyyx, addr 0x6a9bdd4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x6a9bde8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x6a9bdf8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyz();

  /// @brief Method get_zyz, addr 0x6a9c080, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyz();

  /// @brief Method get_zyzx, addr 0x6a9be04, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x6a9be18, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x6a9be28, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzz();

  /// @brief Method get_zz, addr 0x6a9c15c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zz();

  /// @brief Method get_zzx, addr 0x6a9c08c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzx();

  /// @brief Method get_zzxx, addr 0x6a9be38, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x6a9be4c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x6a9be5c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxz();

  /// @brief Method get_zzy, addr 0x6a9c09c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzy();

  /// @brief Method get_zzyx, addr 0x6a9be70, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x6a9be84, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x6a9bea0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyz();

  /// @brief Method get_zzz, addr 0x6a9c0a8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzz();

  /// @brief Method get_zzzx, addr 0x6a9beb0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x6a9bec4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x6a9bed4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3>* i___System__IEquatable_1___Unity__Mathematics__int3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6a9b350, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Addition, addr 0x6a9b36c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x6a9b384, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a9b82c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a9b838, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a9b850, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a9b86c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a9b878, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a9b890, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Decrement, addr 0x6a9b4c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Decrement(::Unity::Mathematics::int3 val);

  /// @brief Method op_Division, addr 0x6a9b3f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Division, addr 0x6a9b40c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x6a9b424, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Equality, addr 0x6a9b720, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Equality, addr 0x6a9b750, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x6a9b778, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a9b8ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a9b8b8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a9b8d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Explicit, addr 0x6a9b218, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::bool3 v);

  /// @brief Method op_Explicit, addr 0x6a9b2c4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::double3 v);

  /// @brief Method op_Explicit, addr 0x6a9b264, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::float3 v);

  /// @brief Method op_Explicit, addr 0x6a9b23c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::uint3 v);

  /// @brief Method op_Explicit, addr 0x6a9b1fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(bool v);

  /// @brief Method op_Explicit, addr 0x6a9b2a4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(double_t v);

  /// @brief Method op_Explicit, addr 0x6a9b244, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(float_t v);

  /// @brief Method op_Explicit, addr 0x6a9b230, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x6a9b5dc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThan, addr 0x6a9b608, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6a9b630, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a9b658, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a9b684, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a9b6ac, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Implicit, addr 0x6a9b1f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Implicit___Unity__Mathematics__int3(int32_t v);

  /// @brief Method op_Increment, addr 0x6a9b4ac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Increment(::Unity::Mathematics::int3 val);

  /// @brief Method op_Inequality, addr 0x6a9b7a0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Inequality, addr 0x6a9b7d0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x6a9b7f8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LeftShift, addr 0x6a9b6f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_LeftShift(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6a9b4e4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThan, addr 0x6a9b510, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x6a9b538, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a9b560, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a9b58c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a9b5b4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Modulus, addr 0x6a9b43c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Modulus, addr 0x6a9b464, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x6a9b488, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Multiply, addr 0x6a9b304, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Multiply, addr 0x6a9b320, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x6a9b338, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_OnesComplement, addr 0x6a9b820, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_OnesComplement(::Unity::Mathematics::int3 val);

  /// @brief Method op_RightShift, addr 0x6a9b708, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_RightShift(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6a9b3a0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Subtraction, addr 0x6a9b3bc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x6a9b3d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6a9b6d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_UnaryNegation(::Unity::Mathematics::int3 val);

  /// @brief Method op_UnaryPlus, addr 0x6a9b6e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_UnaryPlus(::Unity::Mathematics::int3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int3 value);

  /// @brief Method set_Item, addr 0x6a9c170, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

  /// @brief Method set_xy, addr 0x6a9c0c8, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::int2 value);

  /// @brief Method set_xyz, addr 0x6a9bf34, size 0x10, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::int3 value);

  /// @brief Method set_xz, addr 0x6a9c0e0, size 0x10, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::int2 value);

  /// @brief Method set_xzy, addr 0x6a9bf64, size 0x10, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::int3 value);

  /// @brief Method set_yx, addr 0x6a9c0fc, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::int2 value);

  /// @brief Method set_yxz, addr 0x6a9bfac, size 0x10, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::int3 value);

  /// @brief Method set_yz, addr 0x6a9c11c, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::int2 value);

  /// @brief Method set_yzx, addr 0x6a9bff0, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::int3 value);

  /// @brief Method set_zx, addr 0x6a9c134, size 0x10, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::int2 value);

  /// @brief Method set_zxy, addr 0x6a9c034, size 0x10, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::int3 value);

  /// @brief Method set_zy, addr 0x6a9c150, size 0xc, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::int2 value);

  /// @brief Method set_zyx, addr 0x6a9c064, size 0x10, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::int3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr int3(int32_t x, int32_t y, int32_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13428 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  int32_t z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int3) == 0xc, "Size mismatch!");

} // namespace Unity::Mathematics
