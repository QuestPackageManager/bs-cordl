#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3)
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
struct float2;
}
namespace Unity::Mathematics {
class float3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Mathematics {
class float3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::float3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::float3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3_DebuggerProxy*, "Unity.Mathematics", "float3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3, "Unity.Mathematics", "float3");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.float3/DebuggerProxy
class CORDL_TYPE float3_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) float_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) float_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) float_t z;

  static inline ::Unity::Mathematics::float3_DebuggerProxy* New_ctor(::Unity::Mathematics::float3 v);

  constexpr float_t const& __cordl_internal_get_x() const;

  constexpr float_t& __cordl_internal_get_x();

  constexpr float_t const& __cordl_internal_get_y() const;

  constexpr float_t& __cordl_internal_get_y();

  constexpr float_t const& __cordl_internal_get_z() const;

  constexpr float_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_x(float_t value);

  constexpr void __cordl_internal_set_y(float_t value);

  constexpr void __cordl_internal_set_z(float_t value);

  /// @brief Method .ctor, addr 0x6ab6e90, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr float3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "float3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  float3_DebuggerProxy(float3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "float3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  float3_DebuggerProxy(float3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13412 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  float_t ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3_DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float3_DebuggerProxy) == 0x20, "Size mismatch!");

} // namespace Unity::Mathematics
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.float3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3
struct CORDL_TYPE float3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::float3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xx)) ::Unity::Mathematics::float2 xx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxx)) ::Unity::Mathematics::float3 xxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::float4 xxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::float4 xxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::float4 xxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxy)) ::Unity::Mathematics::float3 xxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::float4 xxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::float4 xxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::float4 xxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxz)) ::Unity::Mathematics::float3 xxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::float4 xxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::float4 xxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::float4 xxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::float2 xy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyx)) ::Unity::Mathematics::float3 xyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::float4 xyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::float4 xyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::float4 xyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyy)) ::Unity::Mathematics::float3 xyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::float4 xyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::float4 xyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::float4 xyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::float3 xyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::float4 xyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::float4 xyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::float4 xyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::float2 xz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzx)) ::Unity::Mathematics::float3 xzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::float4 xzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::float4 xzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::float4 xzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::float3 xzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::float4 xzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::float4 xzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::float4 xzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzz)) ::Unity::Mathematics::float3 xzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::float4 xzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::float4 xzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::float4 xzzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::float2 yx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxx)) ::Unity::Mathematics::float3 yxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::float4 yxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::float4 yxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::float4 yxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxy)) ::Unity::Mathematics::float3 yxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::float4 yxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::float4 yxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::float4 yxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::float3 yxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::float4 yxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::float4 yxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::float4 yxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yy)) ::Unity::Mathematics::float2 yy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyx)) ::Unity::Mathematics::float3 yyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::float4 yyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::float4 yyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::float4 yyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyy)) ::Unity::Mathematics::float3 yyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::float4 yyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::float4 yyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::float4 yyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyz)) ::Unity::Mathematics::float3 yyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::float4 yyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::float4 yyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::float4 yyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::float2 yz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::float3 yzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::float4 yzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::float4 yzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::float4 yzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzy)) ::Unity::Mathematics::float3 yzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::float4 yzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::float4 yzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::float4 yzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzz)) ::Unity::Mathematics::float3 yzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::float4 yzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::float4 yzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::float4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float3 zero;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::float2 zx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxx)) ::Unity::Mathematics::float3 zxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::float4 zxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::float4 zxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::float4 zxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::float3 zxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::float4 zxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::float4 zxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::float4 zxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxz)) ::Unity::Mathematics::float3 zxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::float4 zxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::float4 zxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::float4 zxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::float2 zy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::float3 zyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::float4 zyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::float4 zyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::float4 zyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyy)) ::Unity::Mathematics::float3 zyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::float4 zyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::float4 zyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::float4 zyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyz)) ::Unity::Mathematics::float3 zyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::float4 zyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::float4 zyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::float4 zyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zz)) ::Unity::Mathematics::float2 zz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzx)) ::Unity::Mathematics::float3 zzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::float4 zzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::float4 zzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::float4 zzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzy)) ::Unity::Mathematics::float3 zzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::float4 zzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::float4 zzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::float4 zzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzz)) ::Unity::Mathematics::float3 zzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::float4 zzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::float4 zzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::float4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6ab6bf4, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6ab6bc4, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float3 rhs);

  /// @brief Method GetHashCode, addr 0x6ab6c90, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6ab6cd4, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6ab6dac, size 0xdc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6ab5b50, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

  /// @brief Method .ctor, addr 0x6ab5d24, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 v);

  /// @brief Method .ctor, addr 0x6ab5be4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x6ab5c44, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half3 v);

  /// @brief Method .ctor, addr 0x6ab5b9c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 v);

  /// @brief Method .ctor, addr 0x6ab5bc8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 v);

  /// @brief Method .ctor, addr 0x6ab5b34, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6ab5d14, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6ab5b28, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6ab5b8c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6ab5bb8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x6ab5af8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

  /// @brief Method .ctor, addr 0x6ab5b04, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, ::Unity::Mathematics::float2 yz);

  /// @brief Method .ctor, addr 0x6ab5b10, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 xy, float_t z);

  /// @brief Method .ctor, addr 0x6ab5b1c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 xyz);

  static inline ::Unity::Mathematics::float3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6ab6bb4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x6ab6b20, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xx();

  /// @brief Method get_xxx, addr 0x6ab6970, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxx();

  /// @brief Method get_xxxx, addr 0x6ab641c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6ab6430, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x6ab6440, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxz();

  /// @brief Method get_xxy, addr 0x6ab6980, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxy();

  /// @brief Method get_xxyx, addr 0x6ab6454, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6ab6464, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x6ab6474, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyz();

  /// @brief Method get_xxz, addr 0x6ab698c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxz();

  /// @brief Method get_xxzx, addr 0x6ab6484, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x6ab6498, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x6ab64a8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzz();

  /// @brief Method get_xy, addr 0x6ab6b2c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xy();

  /// @brief Method get_xyx, addr 0x6ab699c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyx();

  /// @brief Method get_xyxx, addr 0x6ab64bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6ab64cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x6ab64dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxz();

  /// @brief Method get_xyy, addr 0x6ab69a8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyy();

  /// @brief Method get_xyyx, addr 0x6ab64ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6ab64fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x6ab650c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyz();

  /// @brief Method get_xyz, addr 0x6ab69b4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyz();

  /// @brief Method get_xyzx, addr 0x6ab651c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x6ab652c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x6ab653c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzz();

  /// @brief Method get_xz, addr 0x6ab6b3c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xz();

  /// @brief Method get_xzx, addr 0x6ab69cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzx();

  /// @brief Method get_xzxx, addr 0x6ab654c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x6ab6560, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x6ab6570, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxz();

  /// @brief Method get_xzy, addr 0x6ab69dc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzy();

  /// @brief Method get_xzyx, addr 0x6ab6584, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x6ab6594, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x6ab65a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyz();

  /// @brief Method get_xzz, addr 0x6ab69f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzz();

  /// @brief Method get_xzzx, addr 0x6ab65b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x6ab65c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x6ab65d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzz();

  /// @brief Method get_yx, addr 0x6ab6b54, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yx();

  /// @brief Method get_yxx, addr 0x6ab6a04, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxx();

  /// @brief Method get_yxxx, addr 0x6ab65ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6ab65fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x6ab660c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxz();

  /// @brief Method get_yxy, addr 0x6ab6a10, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxy();

  /// @brief Method get_yxyx, addr 0x6ab661c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6ab662c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x6ab663c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyz();

  /// @brief Method get_yxz, addr 0x6ab6a1c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxz();

  /// @brief Method get_yxzx, addr 0x6ab664c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x6ab665c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x6ab666c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzz();

  /// @brief Method get_yy, addr 0x6ab6b64, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yy();

  /// @brief Method get_yyx, addr 0x6ab6a34, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyx();

  /// @brief Method get_yyxx, addr 0x6ab667c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6ab668c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x6ab669c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxz();

  /// @brief Method get_yyy, addr 0x6ab6a40, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyy();

  /// @brief Method get_yyyx, addr 0x6ab66ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6ab66bc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x6ab66d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyz();

  /// @brief Method get_yyz, addr 0x6ab6a50, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyz();

  /// @brief Method get_yyzx, addr 0x6ab66e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x6ab66f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x6ab6700, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzz();

  /// @brief Method get_yz, addr 0x6ab6b70, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yz();

  /// @brief Method get_yzx, addr 0x6ab6a5c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzx();

  /// @brief Method get_yzxx, addr 0x6ab6710, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x6ab6720, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x6ab6730, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxz();

  /// @brief Method get_yzy, addr 0x6ab6a74, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzy();

  /// @brief Method get_yzyx, addr 0x6ab6740, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x6ab6750, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x6ab6760, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyz();

  /// @brief Method get_yzz, addr 0x6ab6a80, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzz();

  /// @brief Method get_yzzx, addr 0x6ab6770, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x6ab6780, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x6ab6790, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzz();

  /// @brief Method get_zx, addr 0x6ab6b80, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zx();

  /// @brief Method get_zxx, addr 0x6ab6a8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxx();

  /// @brief Method get_zxxx, addr 0x6ab67a0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x6ab67b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x6ab67c4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxz();

  /// @brief Method get_zxy, addr 0x6ab6a9c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxy();

  /// @brief Method get_zxyx, addr 0x6ab67d8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x6ab67e8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x6ab67f8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyz();

  /// @brief Method get_zxz, addr 0x6ab6ab4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxz();

  /// @brief Method get_zxzx, addr 0x6ab6808, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x6ab681c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x6ab682c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzz();

  /// @brief Method get_zy, addr 0x6ab6b98, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zy();

  /// @brief Method get_zyx, addr 0x6ab6ac4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyx();

  /// @brief Method get_zyxx, addr 0x6ab6840, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x6ab6850, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x6ab6860, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxz();

  /// @brief Method get_zyy, addr 0x6ab6adc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyy();

  /// @brief Method get_zyyx, addr 0x6ab6870, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x6ab6880, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x6ab6890, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyz();

  /// @brief Method get_zyz, addr 0x6ab6ae8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyz();

  /// @brief Method get_zyzx, addr 0x6ab68a0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x6ab68b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x6ab68c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzz();

  /// @brief Method get_zz, addr 0x6ab6ba8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zz();

  /// @brief Method get_zzx, addr 0x6ab6af4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzx();

  /// @brief Method get_zzxx, addr 0x6ab68d0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x6ab68e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x6ab68f4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxz();

  /// @brief Method get_zzy, addr 0x6ab6b04, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzy();

  /// @brief Method get_zzyx, addr 0x6ab6908, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x6ab6918, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x6ab6928, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyz();

  /// @brief Method get_zzz, addr 0x6ab6b10, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzz();

  /// @brief Method get_zzzx, addr 0x6ab6938, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x6ab694c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x6ab695c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float3>* i___System__IEquatable_1___Unity__Mathematics__float3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6ab5f58, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Addition, addr 0x6ab5f68, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x6ab5f78, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Addition(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Decrement, addr 0x6ab6124, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Decrement(::Unity::Mathematics::float3 val);

  /// @brief Method op_Division, addr 0x6ab5fc0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Division, addr 0x6ab5fd0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x6ab5fe0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Division(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Equality, addr 0x6ab632c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Equality, addr 0x6ab6354, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x6ab637c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Explicit, addr 0x6ab5d64, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::bool3 v);

  /// @brief Method op_Explicit, addr 0x6ab5f14, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::double3 v);

  /// @brief Method op_Explicit, addr 0x6ab5d48, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(bool v);

  /// @brief Method op_Explicit, addr 0x6ab5f04, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(double_t v);

  /// @brief Method op_GreaterThan, addr 0x6ab6228, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_GreaterThan, addr 0x6ab6250, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6ab6278, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ab62a0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ab62c8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ab62f0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Implicit, addr 0x6ab6e88, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::Unity::Mathematics::float3 v);

  /// @brief Method op_Implicit, addr 0x6ab5dd0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x6ab5e34, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half3 v);

  /// @brief Method op_Implicit, addr 0x6ab5d98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::int3 v);

  /// @brief Method op_Implicit, addr 0x6ab5dbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::uint3 v);

  /// @brief Method op_Implicit, addr 0x6ab6e8c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::UnityEngine::Vector3 v);

  /// @brief Method op_Implicit, addr 0x6ab5d3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(float_t v);

  /// @brief Method op_Implicit, addr 0x6ab5d88, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(int32_t v);

  /// @brief Method op_Implicit, addr 0x6ab5dac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(uint32_t v);

  /// @brief Method op_Increment, addr 0x6ab6110, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Increment(::Unity::Mathematics::float3 val);

  /// @brief Method op_Inequality, addr 0x6ab63a4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Inequality, addr 0x6ab63cc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x6ab63f4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_LessThan, addr 0x6ab6138, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_LessThan, addr 0x6ab6160, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x6ab6188, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ab61b0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ab61d8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ab6200, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Modulus, addr 0x6ab5ff4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Modulus(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Modulus, addr 0x6ab605c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Modulus(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x6ab60b8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Modulus(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Multiply, addr 0x6ab5f24, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Multiply, addr 0x6ab5f34, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x6ab5f44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Multiply(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Subtraction, addr 0x6ab5f8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Subtraction, addr 0x6ab5f9c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x6ab5fac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Subtraction(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6ab6318, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_UnaryNegation(::Unity::Mathematics::float3 val);

  /// @brief Method op_UnaryPlus, addr 0x6ab6328, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_UnaryPlus(::Unity::Mathematics::float3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float3 value);

  /// @brief Method set_Item, addr 0x6ab6bbc, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method set_xy, addr 0x6ab6b34, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::float2 value);

  /// @brief Method set_xyz, addr 0x6ab69c0, size 0xc, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::float3 value);

  /// @brief Method set_xz, addr 0x6ab6b48, size 0xc, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::float2 value);

  /// @brief Method set_xzy, addr 0x6ab69e8, size 0xc, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::float3 value);

  /// @brief Method set_yx, addr 0x6ab6b5c, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::float2 value);

  /// @brief Method set_yxz, addr 0x6ab6a28, size 0xc, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::float3 value);

  /// @brief Method set_yz, addr 0x6ab6b78, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::float2 value);

  /// @brief Method set_yzx, addr 0x6ab6a68, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::float3 value);

  /// @brief Method set_zx, addr 0x6ab6b8c, size 0xc, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::float2 value);

  /// @brief Method set_zxy, addr 0x6ab6aa8, size 0xc, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::float3 value);

  /// @brief Method set_zy, addr 0x6ab6ba0, size 0x8, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::float2 value);

  /// @brief Method set_zyx, addr 0x6ab6ad0, size 0xc, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::float3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float3();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr float3(float_t x, float_t y, float_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13413 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float3) == 0xc, "Size mismatch!");

} // namespace Unity::Mathematics
