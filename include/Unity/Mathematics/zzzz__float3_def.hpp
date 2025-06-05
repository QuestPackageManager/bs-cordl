#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3.hpp"
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
CORDL_MODULE_EXPORT(float3)
namespace System {
class IFormatProvider;
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
MARK_REF_PTR_T(::Unity::Mathematics::float3_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::float3);
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

  /// @brief Method .ctor, addr 0x4690e2c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr float3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "float3_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  float3_DebuggerProxy(float3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "float3_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  float3_DebuggerProxy(float3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9979 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3_DebuggerProxy, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3
struct CORDL_TYPE float3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::float3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::float2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::float3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::float4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::float4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::float4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::float3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::float4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::float4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::float4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::float3 xxz;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::float4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::float4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::float4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::float2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::float3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::float4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::float4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::float4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::float3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::float4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::float4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::float4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::float3 xyz;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::float4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::float4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::float4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::float2 xz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::float3 xzx;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::float4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::float4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::float4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::float3 xzy;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::float4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::float4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::float4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::float3 xzz;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::float4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::float4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::float4 xzzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::float2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::float3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::float4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::float4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::float4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::float3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::float4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::float4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::float4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::float3 yxz;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::float4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::float4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::float4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::float2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::float3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::float4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::float4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::float4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::float3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::float4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::float4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::float4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::float3 yyz;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::float4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::float4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::float4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::float2 yz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::float3 yzx;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::float4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::float4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::float4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::float3 yzy;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::float4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::float4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::float4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::float3 yzz;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::float4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::float4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::float4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float3 zero;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::float2 zx;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::float3 zxx;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::float4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::float4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::float4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::float3 zxy;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::float4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::float4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::float4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::float3 zxz;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::float4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::float4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::float4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::float2 zy;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::float3 zyx;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::float4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::float4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::float4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::float3 zyy;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::float4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::float4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::float4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::float3 zyz;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::float4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::float4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::float4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::float2 zz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::float3 zzx;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::float4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::float4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::float4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::float3 zzy;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::float4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::float4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::float4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::float3 zzz;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::float4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::float4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::float4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4690bd0, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4690ba0, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float3 rhs);

  /// @brief Method GetHashCode, addr 0x4690c68, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4690cac, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4690d70, size 0xb4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x468fb1c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

  /// @brief Method .ctor, addr 0x468fce0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 v);

  /// @brief Method .ctor, addr 0x468fba0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x468fc04, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half3 v);

  /// @brief Method .ctor, addr 0x468fb58, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 v);

  /// @brief Method .ctor, addr 0x468fb84, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 v);

  /// @brief Method .ctor, addr 0x468fb00, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x468fcd0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x468faf4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x468fb48, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x468fb74, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x468fac4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

  /// @brief Method .ctor, addr 0x468fad0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, ::Unity::Mathematics::float2 yz);

  /// @brief Method .ctor, addr 0x468fadc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 xy, float_t z);

  /// @brief Method .ctor, addr 0x468fae8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 xyz);

  static inline ::Unity::Mathematics::float3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4690b90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x4690afc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xx();

  /// @brief Method get_xxx, addr 0x469094c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxx();

  /// @brief Method get_xxxx, addr 0x46903d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x46903ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x46903fc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxz();

  /// @brief Method get_xxy, addr 0x469095c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxy();

  /// @brief Method get_xxyx, addr 0x4690410, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x4690424, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x4690438, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyz();

  /// @brief Method get_xxz, addr 0x4690968, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxz();

  /// @brief Method get_xxzx, addr 0x4690448, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x469045c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x469046c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxzz();

  /// @brief Method get_xy, addr 0x4690b08, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xy();

  /// @brief Method get_xyx, addr 0x4690978, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyx();

  /// @brief Method get_xyxx, addr 0x4690480, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x4690490, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x46904a0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxz();

  /// @brief Method get_xyy, addr 0x4690984, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyy();

  /// @brief Method get_xyyx, addr 0x46904b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x46904c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x46904d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyz();

  /// @brief Method get_xyz, addr 0x4690990, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyz();

  /// @brief Method get_xyzx, addr 0x46904e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x46904f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x4690500, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyzz();

  /// @brief Method get_xz, addr 0x4690b18, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xz();

  /// @brief Method get_xzx, addr 0x46909a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzx();

  /// @brief Method get_xzxx, addr 0x4690510, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x4690524, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x4690534, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzxz();

  /// @brief Method get_xzy, addr 0x46909b8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzy();

  /// @brief Method get_xzyx, addr 0x4690548, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x4690558, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x4690568, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzyz();

  /// @brief Method get_xzz, addr 0x46909d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xzz();

  /// @brief Method get_xzzx, addr 0x4690578, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x469058c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x469059c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xzzz();

  /// @brief Method get_yx, addr 0x4690b30, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yx();

  /// @brief Method get_yxx, addr 0x46909e0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxx();

  /// @brief Method get_yxxx, addr 0x46905b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x46905c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x46905d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxz();

  /// @brief Method get_yxy, addr 0x46909ec, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxy();

  /// @brief Method get_yxyx, addr 0x46905e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x46905f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x4690600, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyz();

  /// @brief Method get_yxz, addr 0x46909f8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxz();

  /// @brief Method get_yxzx, addr 0x4690610, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x4690620, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x4690630, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxzz();

  /// @brief Method get_yy, addr 0x4690b40, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yy();

  /// @brief Method get_yyx, addr 0x4690a10, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyx();

  /// @brief Method get_yyxx, addr 0x4690640, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x4690654, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x4690668, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxz();

  /// @brief Method get_yyy, addr 0x4690a1c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyy();

  /// @brief Method get_yyyx, addr 0x4690678, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x4690688, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x469069c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyz();

  /// @brief Method get_yyz, addr 0x4690a2c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyz();

  /// @brief Method get_yyzx, addr 0x46906ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x46906bc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x46906d0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyzz();

  /// @brief Method get_yz, addr 0x4690b4c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yz();

  /// @brief Method get_yzx, addr 0x4690a38, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzx();

  /// @brief Method get_yzxx, addr 0x46906e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x46906f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x4690704, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzxz();

  /// @brief Method get_yzy, addr 0x4690a50, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzy();

  /// @brief Method get_yzyx, addr 0x4690714, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x4690724, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x4690734, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzyz();

  /// @brief Method get_yzz, addr 0x4690a5c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yzz();

  /// @brief Method get_yzzx, addr 0x4690744, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x4690754, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x4690764, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yzzz();

  /// @brief Method get_zx, addr 0x4690b5c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zx();

  /// @brief Method get_zxx, addr 0x4690a68, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxx();

  /// @brief Method get_zxxx, addr 0x4690774, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x4690788, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x4690798, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxxz();

  /// @brief Method get_zxy, addr 0x4690a78, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxy();

  /// @brief Method get_zxyx, addr 0x46907ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x46907bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x46907cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxyz();

  /// @brief Method get_zxz, addr 0x4690a90, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zxz();

  /// @brief Method get_zxzx, addr 0x46907dc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x46907f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x4690800, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zxzz();

  /// @brief Method get_zy, addr 0x4690b74, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zy();

  /// @brief Method get_zyx, addr 0x4690aa0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyx();

  /// @brief Method get_zyxx, addr 0x4690814, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x4690824, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x4690834, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyxz();

  /// @brief Method get_zyy, addr 0x4690ab8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyy();

  /// @brief Method get_zyyx, addr 0x4690844, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x4690854, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x4690864, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyyz();

  /// @brief Method get_zyz, addr 0x4690ac4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zyz();

  /// @brief Method get_zyzx, addr 0x4690874, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x4690884, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x4690894, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zyzz();

  /// @brief Method get_zz, addr 0x4690b84, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_zz();

  /// @brief Method get_zzx, addr 0x4690ad0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzx();

  /// @brief Method get_zzxx, addr 0x46908a4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x46908b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x46908c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzxz();

  /// @brief Method get_zzy, addr 0x4690ae0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzy();

  /// @brief Method get_zzyx, addr 0x46908dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x46908ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x4690900, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzyz();

  /// @brief Method get_zzz, addr 0x4690aec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_zzz();

  /// @brief Method get_zzzx, addr 0x4690914, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x4690928, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x4690938, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float3>* i___System__IEquatable_1___Unity__Mathematics__float3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x468ff14, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Addition, addr 0x468ff24, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x468ff34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Addition(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Decrement, addr 0x46900e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Decrement(::Unity::Mathematics::float3 val);

  /// @brief Method op_Division, addr 0x468ff7c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Division, addr 0x468ff8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x468ff9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Division(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Equality, addr 0x46902e8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Equality, addr 0x4690310, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x4690338, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Explicit, addr 0x468fd20, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::bool3 v);

  /// @brief Method op_Explicit, addr 0x468fed0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::double3 v);

  /// @brief Method op_Explicit, addr 0x468fd04, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(bool v);

  /// @brief Method op_Explicit, addr 0x468fec0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(double_t v);

  /// @brief Method op_GreaterThan, addr 0x46901e4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_GreaterThan, addr 0x469020c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4690234, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x469025c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4690284, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46902ac, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Implicit, addr 0x4690e24, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::Unity::Mathematics::float3 v);

  /// @brief Method op_Implicit, addr 0x468fd8c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x468fdf4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half3 v);

  /// @brief Method op_Implicit, addr 0x468fd54, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::int3 v);

  /// @brief Method op_Implicit, addr 0x468fd78, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::uint3 v);

  /// @brief Method op_Implicit, addr 0x4690e28, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::UnityEngine::Vector3 v);

  /// @brief Method op_Implicit, addr 0x468fcf8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(float_t v);

  /// @brief Method op_Implicit, addr 0x468fd44, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(int32_t v);

  /// @brief Method op_Implicit, addr 0x468fd68, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(uint32_t v);

  /// @brief Method op_Increment, addr 0x46900cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Increment(::Unity::Mathematics::float3 val);

  /// @brief Method op_Inequality, addr 0x4690360, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Inequality, addr 0x4690388, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x46903b0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_LessThan, addr 0x46900f4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_LessThan, addr 0x469011c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x4690144, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x469016c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4690194, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46901bc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Modulus, addr 0x468ffb0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Modulus(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Modulus, addr 0x4690018, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Modulus(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x4690074, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Modulus(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Multiply, addr 0x468fee0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Multiply, addr 0x468fef0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x468ff00, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Multiply(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Subtraction, addr 0x468ff48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_Subtraction, addr 0x468ff58, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x468ff68, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_Subtraction(float_t lhs, ::Unity::Mathematics::float3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46902d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_UnaryNegation(::Unity::Mathematics::float3 val);

  /// @brief Method op_UnaryPlus, addr 0x46902e4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 op_UnaryPlus(::Unity::Mathematics::float3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float3 value);

  /// @brief Method set_Item, addr 0x4690b98, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method set_xy, addr 0x4690b10, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::float2 value);

  /// @brief Method set_xyz, addr 0x469099c, size 0xc, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::float3 value);

  /// @brief Method set_xz, addr 0x4690b24, size 0xc, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::float2 value);

  /// @brief Method set_xzy, addr 0x46909c4, size 0xc, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::float3 value);

  /// @brief Method set_yx, addr 0x4690b38, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::float2 value);

  /// @brief Method set_yxz, addr 0x4690a04, size 0xc, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::float3 value);

  /// @brief Method set_yz, addr 0x4690b54, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::float2 value);

  /// @brief Method set_yzx, addr 0x4690a44, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::float3 value);

  /// @brief Method set_zx, addr 0x4690b68, size 0xc, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::float2 value);

  /// @brief Method set_zxy, addr 0x4690a84, size 0xc, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::float3 value);

  /// @brief Method set_zy, addr 0x4690b7c, size 0x8, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::float2 value);

  /// @brief Method set_zyx, addr 0x4690aac, size 0xc, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::float3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float3();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr float3(float_t x, float_t y, float_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9980 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3, 0xc>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::float3_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3_DebuggerProxy*, "Unity.Mathematics", "float3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3, "Unity.Mathematics", "float3");
