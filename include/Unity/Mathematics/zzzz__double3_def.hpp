#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3)
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
struct double2;
}
namespace Unity::Mathematics {
class double3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float3;
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
// Forward declare root types
namespace Unity::Mathematics {
class double3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct double3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::double3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::double3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double3_DebuggerProxy*, "Unity.Mathematics", "double3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double3, "Unity.Mathematics", "double3");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.double3/DebuggerProxy
class CORDL_TYPE double3_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) double_t x;

  /// @brief Field y, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) double_t y;

  /// @brief Field z, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) double_t z;

  static inline ::Unity::Mathematics::double3_DebuggerProxy* New_ctor(::Unity::Mathematics::double3 v);

  constexpr double_t const& __cordl_internal_get_x() const;

  constexpr double_t& __cordl_internal_get_x();

  constexpr double_t const& __cordl_internal_get_y() const;

  constexpr double_t& __cordl_internal_get_y();

  constexpr double_t const& __cordl_internal_get_z() const;

  constexpr double_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_x(double_t value);

  constexpr void __cordl_internal_set_y(double_t value);

  constexpr void __cordl_internal_set_z(double_t value);

  /// @brief Method .ctor, addr 0x6a62e40, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr double3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "double3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  double3_DebuggerProxy(double3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "double3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  double3_DebuggerProxy(double3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13390 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  double_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x8, def value: None
  double_t ___y;

  /// @brief Field z, offset: 0x20, size: 0x8, def value: None
  double_t ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3_DebuggerProxy, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3_DebuggerProxy, ___z) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double3_DebuggerProxy) == 0x28, "Size mismatch!");

} // namespace Unity::Mathematics
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.double3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3
struct CORDL_TYPE double3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::double3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) double_t Item[];

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xx)) ::Unity::Mathematics::double2 xx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxx)) ::Unity::Mathematics::double3 xxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::double4 xxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::double4 xxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::double4 xxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxy)) ::Unity::Mathematics::double3 xxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::double4 xxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::double4 xxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::double4 xxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxz)) ::Unity::Mathematics::double3 xxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::double4 xxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::double4 xxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::double4 xxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::double2 xy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyx)) ::Unity::Mathematics::double3 xyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::double4 xyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::double4 xyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::double4 xyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyy)) ::Unity::Mathematics::double3 xyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::double4 xyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::double4 xyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::double4 xyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::double3 xyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::double4 xyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::double4 xyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::double4 xyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::double2 xz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzx)) ::Unity::Mathematics::double3 xzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::double4 xzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::double4 xzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::double4 xzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::double3 xzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::double4 xzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::double4 xzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::double4 xzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzz)) ::Unity::Mathematics::double3 xzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::double4 xzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::double4 xzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::double4 xzzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::double2 yx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxx)) ::Unity::Mathematics::double3 yxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::double4 yxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::double4 yxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::double4 yxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxy)) ::Unity::Mathematics::double3 yxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::double4 yxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::double4 yxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::double4 yxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::double3 yxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::double4 yxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::double4 yxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::double4 yxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yy)) ::Unity::Mathematics::double2 yy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyx)) ::Unity::Mathematics::double3 yyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::double4 yyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::double4 yyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::double4 yyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyy)) ::Unity::Mathematics::double3 yyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::double4 yyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::double4 yyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::double4 yyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyz)) ::Unity::Mathematics::double3 yyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::double4 yyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::double4 yyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::double4 yyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::double2 yz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::double3 yzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::double4 yzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::double4 yzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::double4 yzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzy)) ::Unity::Mathematics::double3 yzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::double4 yzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::double4 yzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::double4 yzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzz)) ::Unity::Mathematics::double3 yzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::double4 yzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::double4 yzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::double4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double3 zero;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::double2 zx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxx)) ::Unity::Mathematics::double3 zxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::double4 zxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::double4 zxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::double4 zxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::double3 zxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::double4 zxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::double4 zxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::double4 zxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxz)) ::Unity::Mathematics::double3 zxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::double4 zxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::double4 zxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::double4 zxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::double2 zy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::double3 zyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::double4 zyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::double4 zyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::double4 zyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyy)) ::Unity::Mathematics::double3 zyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::double4 zyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::double4 zyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::double4 zyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyz)) ::Unity::Mathematics::double3 zyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::double4 zyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::double4 zyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::double4 zyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zz)) ::Unity::Mathematics::double2 zz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzx)) ::Unity::Mathematics::double3 zzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::double4 zzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::double4 zzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::double4 zzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzy)) ::Unity::Mathematics::double3 zzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::double4 zzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::double4 zzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::double4 zzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzz)) ::Unity::Mathematics::double3 zzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::double4 zzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::double4 zzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::double4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6a62b98, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a62b68, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double3 rhs);

  /// @brief Method GetHashCode, addr 0x6a62c34, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a62c8c, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6a62d64, size 0xdc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6a61ac0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

  /// @brief Method .ctor, addr 0x6a61ca4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 v);

  /// @brief Method .ctor, addr 0x6a61b50, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x6a61bb8, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half3 v);

  /// @brief Method .ctor, addr 0x6a61b08, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 v);

  /// @brief Method .ctor, addr 0x6a61b34, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 v);

  /// @brief Method .ctor, addr 0x6a61aa4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6a61a98, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6a61c94, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6a61af8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6a61b24, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x6a61a68, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y, double_t z);

  /// @brief Method .ctor, addr 0x6a61a74, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t x, ::Unity::Mathematics::double2 yz);

  /// @brief Method .ctor, addr 0x6a61a80, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 xy, double_t z);

  /// @brief Method .ctor, addr 0x6a61a8c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 xyz);

  static inline ::Unity::Mathematics::double3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6a62b58, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x6a62ac4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xx();

  /// @brief Method get_xxx, addr 0x6a62914, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxx();

  /// @brief Method get_xxxx, addr 0x6a623c0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6a623d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x6a623e4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxz();

  /// @brief Method get_xxy, addr 0x6a62924, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxy();

  /// @brief Method get_xxyx, addr 0x6a623f8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6a62408, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x6a62418, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyz();

  /// @brief Method get_xxz, addr 0x6a62930, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxz();

  /// @brief Method get_xxzx, addr 0x6a62428, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x6a6243c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x6a6244c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzz();

  /// @brief Method get_xy, addr 0x6a62ad0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xy();

  /// @brief Method get_xyx, addr 0x6a62940, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyx();

  /// @brief Method get_xyxx, addr 0x6a62460, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6a62470, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x6a62480, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxz();

  /// @brief Method get_xyy, addr 0x6a6294c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyy();

  /// @brief Method get_xyyx, addr 0x6a62490, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6a624a0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x6a624b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyz();

  /// @brief Method get_xyz, addr 0x6a62958, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyz();

  /// @brief Method get_xyzx, addr 0x6a624c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x6a624d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x6a624e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzz();

  /// @brief Method get_xz, addr 0x6a62ae0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xz();

  /// @brief Method get_xzx, addr 0x6a62970, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzx();

  /// @brief Method get_xzxx, addr 0x6a624f0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x6a62504, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x6a62514, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxz();

  /// @brief Method get_xzy, addr 0x6a62980, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzy();

  /// @brief Method get_xzyx, addr 0x6a62528, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x6a62538, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x6a62548, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyz();

  /// @brief Method get_xzz, addr 0x6a62998, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzz();

  /// @brief Method get_xzzx, addr 0x6a62558, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x6a6256c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x6a6257c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzz();

  /// @brief Method get_yx, addr 0x6a62af8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yx();

  /// @brief Method get_yxx, addr 0x6a629a8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxx();

  /// @brief Method get_yxxx, addr 0x6a62590, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6a625a0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x6a625b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxz();

  /// @brief Method get_yxy, addr 0x6a629b4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxy();

  /// @brief Method get_yxyx, addr 0x6a625c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6a625d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x6a625e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyz();

  /// @brief Method get_yxz, addr 0x6a629c0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxz();

  /// @brief Method get_yxzx, addr 0x6a625f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x6a62600, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x6a62610, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzz();

  /// @brief Method get_yy, addr 0x6a62b08, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yy();

  /// @brief Method get_yyx, addr 0x6a629d8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyx();

  /// @brief Method get_yyxx, addr 0x6a62620, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6a62630, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x6a62640, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxz();

  /// @brief Method get_yyy, addr 0x6a629e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyy();

  /// @brief Method get_yyyx, addr 0x6a62650, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6a62660, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x6a62674, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyz();

  /// @brief Method get_yyz, addr 0x6a629f4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyz();

  /// @brief Method get_yyzx, addr 0x6a62684, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x6a62694, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x6a626a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzz();

  /// @brief Method get_yz, addr 0x6a62b14, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yz();

  /// @brief Method get_yzx, addr 0x6a62a00, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzx();

  /// @brief Method get_yzxx, addr 0x6a626b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x6a626c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x6a626d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxz();

  /// @brief Method get_yzy, addr 0x6a62a18, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzy();

  /// @brief Method get_yzyx, addr 0x6a626e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x6a626f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x6a62704, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyz();

  /// @brief Method get_yzz, addr 0x6a62a24, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzz();

  /// @brief Method get_yzzx, addr 0x6a62714, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x6a62724, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x6a62734, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzz();

  /// @brief Method get_zx, addr 0x6a62b24, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zx();

  /// @brief Method get_zxx, addr 0x6a62a30, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxx();

  /// @brief Method get_zxxx, addr 0x6a62744, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x6a62758, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x6a62768, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxz();

  /// @brief Method get_zxy, addr 0x6a62a40, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxy();

  /// @brief Method get_zxyx, addr 0x6a6277c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x6a6278c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x6a6279c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyz();

  /// @brief Method get_zxz, addr 0x6a62a58, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxz();

  /// @brief Method get_zxzx, addr 0x6a627ac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x6a627c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x6a627d0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzz();

  /// @brief Method get_zy, addr 0x6a62b3c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zy();

  /// @brief Method get_zyx, addr 0x6a62a68, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyx();

  /// @brief Method get_zyxx, addr 0x6a627e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x6a627f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x6a62804, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxz();

  /// @brief Method get_zyy, addr 0x6a62a80, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyy();

  /// @brief Method get_zyyx, addr 0x6a62814, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x6a62824, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x6a62834, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyz();

  /// @brief Method get_zyz, addr 0x6a62a8c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyz();

  /// @brief Method get_zyzx, addr 0x6a62844, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x6a62854, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x6a62864, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzz();

  /// @brief Method get_zz, addr 0x6a62b4c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zz();

  /// @brief Method get_zzx, addr 0x6a62a98, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzx();

  /// @brief Method get_zzxx, addr 0x6a62874, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x6a62888, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x6a62898, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxz();

  /// @brief Method get_zzy, addr 0x6a62aa8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzy();

  /// @brief Method get_zzyx, addr 0x6a628ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x6a628bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x6a628cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyz();

  /// @brief Method get_zzz, addr 0x6a62ab4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzz();

  /// @brief Method get_zzzx, addr 0x6a628dc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x6a628f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x6a62900, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double3>* i___System__IEquatable_1___Unity__Mathematics__double3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6a61efc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Addition(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Addition, addr 0x6a61f0c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Addition(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x6a61f1c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Addition(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Decrement, addr 0x6a620c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Decrement(::Unity::Mathematics::double3 val);

  /// @brief Method op_Division, addr 0x6a61f64, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Division(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Division, addr 0x6a61f74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Division(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x6a61f84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Division(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Equality, addr 0x6a622d0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Equality, addr 0x6a622f8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x6a62320, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Explicit, addr 0x6a61ce4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Explicit___Unity__Mathematics__double3(::Unity::Mathematics::bool3 v);

  /// @brief Method op_Explicit, addr 0x6a61cc8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Explicit___Unity__Mathematics__double3(bool v);

  /// @brief Method op_GreaterThan, addr 0x6a621cc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_GreaterThan, addr 0x6a621f4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6a6221c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a62244, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a6226c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a62294, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Implicit, addr 0x6a61eb8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::float3 v);

  /// @brief Method op_Implicit, addr 0x6a61d50, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x6a61db8, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::half3 v);

  /// @brief Method op_Implicit, addr 0x6a61d18, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::int3 v);

  /// @brief Method op_Implicit, addr 0x6a61d3c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::uint3 v);

  /// @brief Method op_Implicit, addr 0x6a61cbc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(double_t v);

  /// @brief Method op_Implicit, addr 0x6a61ea8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(float_t v);

  /// @brief Method op_Implicit, addr 0x6a61d08, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(int32_t v);

  /// @brief Method op_Implicit, addr 0x6a61d2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(uint32_t v);

  /// @brief Method op_Increment, addr 0x6a620b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Increment(::Unity::Mathematics::double3 val);

  /// @brief Method op_Inequality, addr 0x6a62348, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Inequality, addr 0x6a62370, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x6a62398, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_LessThan, addr 0x6a620dc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_LessThan, addr 0x6a62104, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x6a6212c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a62154, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a6217c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a621a4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Modulus, addr 0x6a61f98, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Modulus(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Modulus, addr 0x6a62000, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Modulus(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x6a6205c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Modulus(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Multiply, addr 0x6a61ec8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Multiply(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Multiply, addr 0x6a61ed8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Multiply(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x6a61ee8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Multiply(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Subtraction, addr 0x6a61f30, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Subtraction(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Subtraction, addr 0x6a61f40, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Subtraction(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x6a61f50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6a622bc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_UnaryNegation(::Unity::Mathematics::double3 val);

  /// @brief Method op_UnaryPlus, addr 0x6a622cc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_UnaryPlus(::Unity::Mathematics::double3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double3 value);

  /// @brief Method set_Item, addr 0x6a62b60, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, double_t value);

  /// @brief Method set_xy, addr 0x6a62ad8, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::double2 value);

  /// @brief Method set_xyz, addr 0x6a62964, size 0xc, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::double3 value);

  /// @brief Method set_xz, addr 0x6a62aec, size 0xc, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::double2 value);

  /// @brief Method set_xzy, addr 0x6a6298c, size 0xc, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::double3 value);

  /// @brief Method set_yx, addr 0x6a62b00, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::double2 value);

  /// @brief Method set_yxz, addr 0x6a629cc, size 0xc, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::double3 value);

  /// @brief Method set_yz, addr 0x6a62b1c, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::double2 value);

  /// @brief Method set_yzx, addr 0x6a62a0c, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::double3 value);

  /// @brief Method set_zx, addr 0x6a62b30, size 0xc, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::double2 value);

  /// @brief Method set_zxy, addr 0x6a62a4c, size 0xc, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::double3 value);

  /// @brief Method set_zy, addr 0x6a62b44, size 0x8, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::double2 value);

  /// @brief Method set_zyx, addr 0x6a62a74, size 0xc, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::double3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double3();

  // Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "z", ty: "double_t", modifiers: "", def_value: None, comment: None }]
  constexpr double3(double_t x, double_t y, double_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13391 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field x, offset: 0x0, size: 0x8, def value: None
  double_t x;

  /// @brief Field y, offset: 0x8, size: 0x8, def value: None
  double_t y;

  /// @brief Field z, offset: 0x10, size: 0x8, def value: None
  double_t z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3, z) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double3) == 0x18, "Size mismatch!");

} // namespace Unity::Mathematics
