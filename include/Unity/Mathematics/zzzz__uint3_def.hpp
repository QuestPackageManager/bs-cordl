#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint3)
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
struct int3;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
class uint3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class uint3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::uint3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::uint3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint3_DebuggerProxy*, "Unity.Mathematics", "uint3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint3, "Unity.Mathematics", "uint3");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.uint3/DebuggerProxy
class CORDL_TYPE uint3_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) uint32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) uint32_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) uint32_t z;

  static inline ::Unity::Mathematics::uint3_DebuggerProxy* New_ctor(::Unity::Mathematics::uint3 v);

  constexpr uint32_t const& __cordl_internal_get_x() const;

  constexpr uint32_t& __cordl_internal_get_x();

  constexpr uint32_t const& __cordl_internal_get_y() const;

  constexpr uint32_t& __cordl_internal_get_y();

  constexpr uint32_t const& __cordl_internal_get_z() const;

  constexpr uint32_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_x(uint32_t value);

  constexpr void __cordl_internal_set_y(uint32_t value);

  constexpr void __cordl_internal_set_z(uint32_t value);

  /// @brief Method .ctor, addr 0x6a3a8ac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr uint3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "uint3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  uint3_DebuggerProxy(uint3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "uint3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  uint3_DebuggerProxy(uint3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13446 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  uint32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  uint32_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  uint32_t ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint3_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3_DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint3_DebuggerProxy) == 0x20, "Size mismatch!");

} // namespace Unity::Mathematics
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.uint3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint3
struct CORDL_TYPE uint3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::uint3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) uint32_t Item[];

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xx)) ::Unity::Mathematics::uint2 xx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxx)) ::Unity::Mathematics::uint3 xxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::uint4 xxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::uint4 xxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::uint4 xxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxy)) ::Unity::Mathematics::uint3 xxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::uint4 xxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::uint4 xxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::uint4 xxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxz)) ::Unity::Mathematics::uint3 xxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::uint4 xxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::uint4 xxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::uint4 xxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::uint2 xy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyx)) ::Unity::Mathematics::uint3 xyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::uint4 xyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::uint4 xyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::uint4 xyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyy)) ::Unity::Mathematics::uint3 xyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::uint4 xyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::uint4 xyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::uint4 xyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::uint3 xyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::uint4 xyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::uint4 xyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::uint4 xyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::uint2 xz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzx)) ::Unity::Mathematics::uint3 xzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::uint4 xzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::uint4 xzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::uint4 xzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::uint3 xzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::uint4 xzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::uint4 xzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::uint4 xzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzz)) ::Unity::Mathematics::uint3 xzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::uint4 xzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::uint4 xzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::uint4 xzzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::uint2 yx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxx)) ::Unity::Mathematics::uint3 yxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::uint4 yxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::uint4 yxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::uint4 yxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxy)) ::Unity::Mathematics::uint3 yxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::uint4 yxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::uint4 yxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::uint4 yxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::uint3 yxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::uint4 yxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::uint4 yxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::uint4 yxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yy)) ::Unity::Mathematics::uint2 yy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyx)) ::Unity::Mathematics::uint3 yyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::uint4 yyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::uint4 yyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::uint4 yyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyy)) ::Unity::Mathematics::uint3 yyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::uint4 yyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::uint4 yyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::uint4 yyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyz)) ::Unity::Mathematics::uint3 yyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::uint4 yyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::uint4 yyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::uint4 yyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::uint2 yz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::uint3 yzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::uint4 yzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::uint4 yzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::uint4 yzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzy)) ::Unity::Mathematics::uint3 yzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::uint4 yzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::uint4 yzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::uint4 yzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzz)) ::Unity::Mathematics::uint3 yzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::uint4 yzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::uint4 yzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::uint4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint3 zero;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::uint2 zx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxx)) ::Unity::Mathematics::uint3 zxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::uint4 zxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::uint4 zxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::uint4 zxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::uint3 zxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::uint4 zxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::uint4 zxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::uint4 zxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxz)) ::Unity::Mathematics::uint3 zxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::uint4 zxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::uint4 zxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::uint4 zxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::uint2 zy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::uint3 zyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::uint4 zyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::uint4 zyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::uint4 zyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyy)) ::Unity::Mathematics::uint3 zyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::uint4 zyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::uint4 zyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::uint4 zyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyz)) ::Unity::Mathematics::uint3 zyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::uint4 zyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::uint4 zyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::uint4 zyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zz)) ::Unity::Mathematics::uint2 zz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzx)) ::Unity::Mathematics::uint3 zzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::uint4 zzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::uint4 zzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::uint4 zzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzy)) ::Unity::Mathematics::uint3 zzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::uint4 zzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::uint4 zzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::uint4 zzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzz)) ::Unity::Mathematics::uint3 zzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::uint4 zzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::uint4 zzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::uint4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6a3a614, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a3a5e0, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint3 rhs);

  /// @brief Method GetHashCode, addr 0x6a3a6b0, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a3a6f8, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6a3a7d0, size 0xdc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6a39588, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

  /// @brief Method .ctor, addr 0x6a39634, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 v);

  /// @brief Method .ctor, addr 0x6a395e8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 v);

  /// @brief Method .ctor, addr 0x6a395bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 v);

  /// @brief Method .ctor, addr 0x6a39578, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6a39618, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6a395cc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6a395b0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6a3956c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x6a39530, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method .ctor, addr 0x6a3953c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, ::Unity::Mathematics::uint2 yz);

  /// @brief Method .ctor, addr 0x6a3954c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 xy, uint32_t z);

  /// @brief Method .ctor, addr 0x6a3955c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 xyz);

  static inline ::Unity::Mathematics::uint3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6a3a5d0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x6a3a51c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xx();

  /// @brief Method get_xxx, addr 0x6a3a34c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxx();

  /// @brief Method get_xxxx, addr 0x6a39d54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6a39d64, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x6a39d74, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxz();

  /// @brief Method get_xxy, addr 0x6a3a358, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxy();

  /// @brief Method get_xxyx, addr 0x6a39d88, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6a39d98, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x6a39db4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyz();

  /// @brief Method get_xxz, addr 0x6a3a364, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxz();

  /// @brief Method get_xxzx, addr 0x6a39dc4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x6a39dd8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x6a39dec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxzz();

  /// @brief Method get_xy, addr 0x6a3a528, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xy();

  /// @brief Method get_xyx, addr 0x6a3a374, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyx();

  /// @brief Method get_xyxx, addr 0x6a39e00, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6a39e10, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x6a39e1c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxz();

  /// @brief Method get_xyy, addr 0x6a3a380, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyy();

  /// @brief Method get_xyyx, addr 0x6a39e30, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6a39e40, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x6a39e50, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyz();

  /// @brief Method get_xyz, addr 0x6a3a38c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyz();

  /// @brief Method get_xyzx, addr 0x6a39e64, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x6a39e78, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x6a39e8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyzz();

  /// @brief Method get_xz, addr 0x6a3a538, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xz();

  /// @brief Method get_xzx, addr 0x6a3a3ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xzx();

  /// @brief Method get_xzxx, addr 0x6a39e9c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x6a39eb0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x6a39ec4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzxz();

  /// @brief Method get_xzy, addr 0x6a3a3bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xzy();

  /// @brief Method get_xzyx, addr 0x6a39ed8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x6a39eec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x6a39f00, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzyz();

  /// @brief Method get_xzz, addr 0x6a3a3dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xzz();

  /// @brief Method get_xzzx, addr 0x6a39f14, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x6a39f28, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x6a39f3c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xzzz();

  /// @brief Method get_yx, addr 0x6a3a558, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yx();

  /// @brief Method get_yxx, addr 0x6a3a3ec, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxx();

  /// @brief Method get_yxxx, addr 0x6a39f50, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6a39f64, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x6a39f70, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxz();

  /// @brief Method get_yxy, addr 0x6a3a3f8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxy();

  /// @brief Method get_yxyx, addr 0x6a39f84, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6a39f94, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x6a39fa4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyz();

  /// @brief Method get_yxz, addr 0x6a3a404, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxz();

  /// @brief Method get_yxzx, addr 0x6a39fb8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x6a39fd0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x6a39fe4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxzz();

  /// @brief Method get_yy, addr 0x6a3a570, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yy();

  /// @brief Method get_yyx, addr 0x6a3a424, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyx();

  /// @brief Method get_yyxx, addr 0x6a39ff8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6a3a014, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x6a3a024, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxz();

  /// @brief Method get_yyy, addr 0x6a3a430, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyy();

  /// @brief Method get_yyyx, addr 0x6a3a038, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6a3a048, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x6a3a058, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyz();

  /// @brief Method get_yyz, addr 0x6a3a43c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyz();

  /// @brief Method get_yyzx, addr 0x6a3a068, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x6a3a07c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x6a3a08c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyzz();

  /// @brief Method get_yz, addr 0x6a3a57c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yz();

  /// @brief Method get_yzx, addr 0x6a3a448, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yzx();

  /// @brief Method get_yzxx, addr 0x6a3a0a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x6a3a0b8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x6a3a0cc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzxz();

  /// @brief Method get_yzy, addr 0x6a3a464, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yzy();

  /// @brief Method get_yzyx, addr 0x6a3a0e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x6a3a0f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x6a3a104, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzyz();

  /// @brief Method get_yzz, addr 0x6a3a470, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yzz();

  /// @brief Method get_yzzx, addr 0x6a3a110, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x6a3a124, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x6a3a134, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yzzz();

  /// @brief Method get_zx, addr 0x6a3a58c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_zx();

  /// @brief Method get_zxx, addr 0x6a3a47c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zxx();

  /// @brief Method get_zxxx, addr 0x6a3a144, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x6a3a15c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x6a3a170, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxxz();

  /// @brief Method get_zxy, addr 0x6a3a48c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zxy();

  /// @brief Method get_zxyx, addr 0x6a3a184, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x6a3a19c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x6a3a1b0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxyz();

  /// @brief Method get_zxz, addr 0x6a3a4ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zxz();

  /// @brief Method get_zxzx, addr 0x6a3a1c4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x6a3a1d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x6a3a1ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zxzz();

  /// @brief Method get_zy, addr 0x6a3a5ac, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_zy();

  /// @brief Method get_zyx, addr 0x6a3a4bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zyx();

  /// @brief Method get_zyxx, addr 0x6a3a200, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x6a3a214, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x6a3a228, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyxz();

  /// @brief Method get_zyy, addr 0x6a3a4dc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zyy();

  /// @brief Method get_zyyx, addr 0x6a3a23c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x6a3a250, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x6a3a260, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyyz();

  /// @brief Method get_zyz, addr 0x6a3a4e8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zyz();

  /// @brief Method get_zyzx, addr 0x6a3a26c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x6a3a280, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x6a3a290, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zyzz();

  /// @brief Method get_zz, addr 0x6a3a5c4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_zz();

  /// @brief Method get_zzx, addr 0x6a3a4f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zzx();

  /// @brief Method get_zzxx, addr 0x6a3a2a0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x6a3a2b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x6a3a2c4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzxz();

  /// @brief Method get_zzy, addr 0x6a3a504, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zzy();

  /// @brief Method get_zzyx, addr 0x6a3a2d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x6a3a2ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x6a3a308, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzyz();

  /// @brief Method get_zzz, addr 0x6a3a510, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_zzz();

  /// @brief Method get_zzzx, addr 0x6a3a318, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x6a3a32c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x6a3a33c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3>* i___System__IEquatable_1___Unity__Mathematics__uint3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6a397b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Addition(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Addition, addr 0x6a397d4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Addition(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x6a397ec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a39c94, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_BitwiseAnd(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a39ca0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_BitwiseAnd(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a39cb8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a39cd4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_BitwiseOr(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a39ce0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_BitwiseOr(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a39cf8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Decrement, addr 0x6a39930, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Decrement(::Unity::Mathematics::uint3 val);

  /// @brief Method op_Division, addr 0x6a39858, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Division(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Division, addr 0x6a39874, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Division(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x6a3988c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Division(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Equality, addr 0x6a39b88, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Equality, addr 0x6a39bb8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x6a39be0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a39d14, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_ExclusiveOr(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a39d20, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_ExclusiveOr(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a39d38, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Explicit, addr 0x6a396a0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::bool3 v);

  /// @brief Method op_Explicit, addr 0x6a39734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::double3 v);

  /// @brief Method op_Explicit, addr 0x6a396e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::float3 v);

  /// @brief Method op_Explicit, addr 0x6a396c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::int3 v);

  /// @brief Method op_Explicit, addr 0x6a39684, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(bool v);

  /// @brief Method op_Explicit, addr 0x6a3971c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(double_t v);

  /// @brief Method op_Explicit, addr 0x6a396cc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(float_t v);

  /// @brief Method op_Explicit, addr 0x6a396b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x6a39a44, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_GreaterThan, addr 0x6a39a70, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6a39a98, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a39ac0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a39aec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a39b14, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Implicit, addr 0x6a39678, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Implicit___Unity__Mathematics__uint3(uint32_t v);

  /// @brief Method op_Increment, addr 0x6a39914, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Increment(::Unity::Mathematics::uint3 val);

  /// @brief Method op_Inequality, addr 0x6a39c08, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Inequality, addr 0x6a39c38, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x6a39c60, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_LeftShift, addr 0x6a39b58, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_LeftShift(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6a3994c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_LessThan, addr 0x6a39978, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x6a399a0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a399c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a399f4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a39a1c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Modulus, addr 0x6a398a4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Modulus(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Modulus, addr 0x6a398cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Modulus(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x6a398f0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Multiply, addr 0x6a3976c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Multiply(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Multiply, addr 0x6a39788, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Multiply(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x6a397a0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_OnesComplement, addr 0x6a39c88, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_OnesComplement(::Unity::Mathematics::uint3 val);

  /// @brief Method op_RightShift, addr 0x6a39b70, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_RightShift(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6a39808, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Subtraction(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_Subtraction, addr 0x6a39824, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Subtraction(::Unity::Mathematics::uint3 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x6a3983c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6a39b3c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_UnaryNegation(::Unity::Mathematics::uint3 val);

  /// @brief Method op_UnaryPlus, addr 0x6a39b50, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 op_UnaryPlus(::Unity::Mathematics::uint3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint3 value);

  /// @brief Method set_Item, addr 0x6a3a5d8, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, uint32_t value);

  /// @brief Method set_xy, addr 0x6a3a530, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::uint2 value);

  /// @brief Method set_xyz, addr 0x6a3a39c, size 0x10, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::uint3 value);

  /// @brief Method set_xz, addr 0x6a3a548, size 0x10, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::uint2 value);

  /// @brief Method set_xzy, addr 0x6a3a3cc, size 0x10, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::uint3 value);

  /// @brief Method set_yx, addr 0x6a3a564, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::uint2 value);

  /// @brief Method set_yxz, addr 0x6a3a414, size 0x10, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::uint3 value);

  /// @brief Method set_yz, addr 0x6a3a584, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::uint2 value);

  /// @brief Method set_yzx, addr 0x6a3a458, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::uint3 value);

  /// @brief Method set_zx, addr 0x6a3a59c, size 0x10, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::uint2 value);

  /// @brief Method set_zxy, addr 0x6a3a49c, size 0x10, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::uint3 value);

  /// @brief Method set_zy, addr 0x6a3a5b8, size 0xc, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::uint2 value);

  /// @brief Method set_zyx, addr 0x6a3a4cc, size 0x10, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::uint3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint3();

  // Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "z", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr uint3(uint32_t x, uint32_t y, uint32_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13447 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  uint32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  uint32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  uint32_t z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint3) == 0xc, "Size mismatch!");

} // namespace Unity::Mathematics
