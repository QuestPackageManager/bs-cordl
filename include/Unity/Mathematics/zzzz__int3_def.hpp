#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class __int3__DebuggerProxy;
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
struct int4;
}
namespace Unity::Mathematics {
struct uint3;
}
// Forward declare root types
namespace Unity::Mathematics {
class __int3__DebuggerProxy;
}
namespace Unity::Mathematics {
struct int3;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__int3__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::int3);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::int3::DebuggerProxy*
class CORDL_TYPE __int3__DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) int32_t z;

  static inline ::Unity::Mathematics::__int3__DebuggerProxy* New_ctor(::Unity::Mathematics::int3 v);

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr int32_t const& __cordl_internal_get_z() const;

  constexpr int32_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  constexpr void __cordl_internal_set_z(int32_t value);

  /// @brief Method .ctor, addr 0x3218644, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __int3__DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__int3__DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __int3__DebuggerProxy(__int3__DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__int3__DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __int3__DebuggerProxy(__int3__DebuggerProxy const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  int32_t ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__int3__DebuggerProxy, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int3__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int3__DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int3__DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::int3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int3
struct CORDL_TYPE int3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::__int3__DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  __declspec(property(get = get_xx))::Unity::Mathematics::int2 xx;

  __declspec(property(get = get_xxx))::Unity::Mathematics::int3 xxx;

  __declspec(property(get = get_xxxx))::Unity::Mathematics::int4 xxxx;

  __declspec(property(get = get_xxxy))::Unity::Mathematics::int4 xxxy;

  __declspec(property(get = get_xxxz))::Unity::Mathematics::int4 xxxz;

  __declspec(property(get = get_xxy))::Unity::Mathematics::int3 xxy;

  __declspec(property(get = get_xxyx))::Unity::Mathematics::int4 xxyx;

  __declspec(property(get = get_xxyy))::Unity::Mathematics::int4 xxyy;

  __declspec(property(get = get_xxyz))::Unity::Mathematics::int4 xxyz;

  __declspec(property(get = get_xxz))::Unity::Mathematics::int3 xxz;

  __declspec(property(get = get_xxzx))::Unity::Mathematics::int4 xxzx;

  __declspec(property(get = get_xxzy))::Unity::Mathematics::int4 xxzy;

  __declspec(property(get = get_xxzz))::Unity::Mathematics::int4 xxzz;

  __declspec(property(get = get_xy, put = set_xy))::Unity::Mathematics::int2 xy;

  __declspec(property(get = get_xyx))::Unity::Mathematics::int3 xyx;

  __declspec(property(get = get_xyxx))::Unity::Mathematics::int4 xyxx;

  __declspec(property(get = get_xyxy))::Unity::Mathematics::int4 xyxy;

  __declspec(property(get = get_xyxz))::Unity::Mathematics::int4 xyxz;

  __declspec(property(get = get_xyy))::Unity::Mathematics::int3 xyy;

  __declspec(property(get = get_xyyx))::Unity::Mathematics::int4 xyyx;

  __declspec(property(get = get_xyyy))::Unity::Mathematics::int4 xyyy;

  __declspec(property(get = get_xyyz))::Unity::Mathematics::int4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz))::Unity::Mathematics::int3 xyz;

  __declspec(property(get = get_xyzx))::Unity::Mathematics::int4 xyzx;

  __declspec(property(get = get_xyzy))::Unity::Mathematics::int4 xyzy;

  __declspec(property(get = get_xyzz))::Unity::Mathematics::int4 xyzz;

  __declspec(property(get = get_xz, put = set_xz))::Unity::Mathematics::int2 xz;

  __declspec(property(get = get_xzx))::Unity::Mathematics::int3 xzx;

  __declspec(property(get = get_xzxx))::Unity::Mathematics::int4 xzxx;

  __declspec(property(get = get_xzxy))::Unity::Mathematics::int4 xzxy;

  __declspec(property(get = get_xzxz))::Unity::Mathematics::int4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy))::Unity::Mathematics::int3 xzy;

  __declspec(property(get = get_xzyx))::Unity::Mathematics::int4 xzyx;

  __declspec(property(get = get_xzyy))::Unity::Mathematics::int4 xzyy;

  __declspec(property(get = get_xzyz))::Unity::Mathematics::int4 xzyz;

  __declspec(property(get = get_xzz))::Unity::Mathematics::int3 xzz;

  __declspec(property(get = get_xzzx))::Unity::Mathematics::int4 xzzx;

  __declspec(property(get = get_xzzy))::Unity::Mathematics::int4 xzzy;

  __declspec(property(get = get_xzzz))::Unity::Mathematics::int4 xzzz;

  __declspec(property(get = get_yx, put = set_yx))::Unity::Mathematics::int2 yx;

  __declspec(property(get = get_yxx))::Unity::Mathematics::int3 yxx;

  __declspec(property(get = get_yxxx))::Unity::Mathematics::int4 yxxx;

  __declspec(property(get = get_yxxy))::Unity::Mathematics::int4 yxxy;

  __declspec(property(get = get_yxxz))::Unity::Mathematics::int4 yxxz;

  __declspec(property(get = get_yxy))::Unity::Mathematics::int3 yxy;

  __declspec(property(get = get_yxyx))::Unity::Mathematics::int4 yxyx;

  __declspec(property(get = get_yxyy))::Unity::Mathematics::int4 yxyy;

  __declspec(property(get = get_yxyz))::Unity::Mathematics::int4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz))::Unity::Mathematics::int3 yxz;

  __declspec(property(get = get_yxzx))::Unity::Mathematics::int4 yxzx;

  __declspec(property(get = get_yxzy))::Unity::Mathematics::int4 yxzy;

  __declspec(property(get = get_yxzz))::Unity::Mathematics::int4 yxzz;

  __declspec(property(get = get_yy))::Unity::Mathematics::int2 yy;

  __declspec(property(get = get_yyx))::Unity::Mathematics::int3 yyx;

  __declspec(property(get = get_yyxx))::Unity::Mathematics::int4 yyxx;

  __declspec(property(get = get_yyxy))::Unity::Mathematics::int4 yyxy;

  __declspec(property(get = get_yyxz))::Unity::Mathematics::int4 yyxz;

  __declspec(property(get = get_yyy))::Unity::Mathematics::int3 yyy;

  __declspec(property(get = get_yyyx))::Unity::Mathematics::int4 yyyx;

  __declspec(property(get = get_yyyy))::Unity::Mathematics::int4 yyyy;

  __declspec(property(get = get_yyyz))::Unity::Mathematics::int4 yyyz;

  __declspec(property(get = get_yyz))::Unity::Mathematics::int3 yyz;

  __declspec(property(get = get_yyzx))::Unity::Mathematics::int4 yyzx;

  __declspec(property(get = get_yyzy))::Unity::Mathematics::int4 yyzy;

  __declspec(property(get = get_yyzz))::Unity::Mathematics::int4 yyzz;

  __declspec(property(get = get_yz, put = set_yz))::Unity::Mathematics::int2 yz;

  __declspec(property(get = get_yzx, put = set_yzx))::Unity::Mathematics::int3 yzx;

  __declspec(property(get = get_yzxx))::Unity::Mathematics::int4 yzxx;

  __declspec(property(get = get_yzxy))::Unity::Mathematics::int4 yzxy;

  __declspec(property(get = get_yzxz))::Unity::Mathematics::int4 yzxz;

  __declspec(property(get = get_yzy))::Unity::Mathematics::int3 yzy;

  __declspec(property(get = get_yzyx))::Unity::Mathematics::int4 yzyx;

  __declspec(property(get = get_yzyy))::Unity::Mathematics::int4 yzyy;

  __declspec(property(get = get_yzyz))::Unity::Mathematics::int4 yzyz;

  __declspec(property(get = get_yzz))::Unity::Mathematics::int3 yzz;

  __declspec(property(get = get_yzzx))::Unity::Mathematics::int4 yzzx;

  __declspec(property(get = get_yzzy))::Unity::Mathematics::int4 yzzy;

  __declspec(property(get = get_yzzz))::Unity::Mathematics::int4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::int3 zero;

  __declspec(property(get = get_zx, put = set_zx))::Unity::Mathematics::int2 zx;

  __declspec(property(get = get_zxx))::Unity::Mathematics::int3 zxx;

  __declspec(property(get = get_zxxx))::Unity::Mathematics::int4 zxxx;

  __declspec(property(get = get_zxxy))::Unity::Mathematics::int4 zxxy;

  __declspec(property(get = get_zxxz))::Unity::Mathematics::int4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy))::Unity::Mathematics::int3 zxy;

  __declspec(property(get = get_zxyx))::Unity::Mathematics::int4 zxyx;

  __declspec(property(get = get_zxyy))::Unity::Mathematics::int4 zxyy;

  __declspec(property(get = get_zxyz))::Unity::Mathematics::int4 zxyz;

  __declspec(property(get = get_zxz))::Unity::Mathematics::int3 zxz;

  __declspec(property(get = get_zxzx))::Unity::Mathematics::int4 zxzx;

  __declspec(property(get = get_zxzy))::Unity::Mathematics::int4 zxzy;

  __declspec(property(get = get_zxzz))::Unity::Mathematics::int4 zxzz;

  __declspec(property(get = get_zy, put = set_zy))::Unity::Mathematics::int2 zy;

  __declspec(property(get = get_zyx, put = set_zyx))::Unity::Mathematics::int3 zyx;

  __declspec(property(get = get_zyxx))::Unity::Mathematics::int4 zyxx;

  __declspec(property(get = get_zyxy))::Unity::Mathematics::int4 zyxy;

  __declspec(property(get = get_zyxz))::Unity::Mathematics::int4 zyxz;

  __declspec(property(get = get_zyy))::Unity::Mathematics::int3 zyy;

  __declspec(property(get = get_zyyx))::Unity::Mathematics::int4 zyyx;

  __declspec(property(get = get_zyyy))::Unity::Mathematics::int4 zyyy;

  __declspec(property(get = get_zyyz))::Unity::Mathematics::int4 zyyz;

  __declspec(property(get = get_zyz))::Unity::Mathematics::int3 zyz;

  __declspec(property(get = get_zyzx))::Unity::Mathematics::int4 zyzx;

  __declspec(property(get = get_zyzy))::Unity::Mathematics::int4 zyzy;

  __declspec(property(get = get_zyzz))::Unity::Mathematics::int4 zyzz;

  __declspec(property(get = get_zz))::Unity::Mathematics::int2 zz;

  __declspec(property(get = get_zzx))::Unity::Mathematics::int3 zzx;

  __declspec(property(get = get_zzxx))::Unity::Mathematics::int4 zzxx;

  __declspec(property(get = get_zzxy))::Unity::Mathematics::int4 zzxy;

  __declspec(property(get = get_zzxz))::Unity::Mathematics::int4 zzxz;

  __declspec(property(get = get_zzy))::Unity::Mathematics::int3 zzy;

  __declspec(property(get = get_zzyx))::Unity::Mathematics::int4 zzyx;

  __declspec(property(get = get_zzyy))::Unity::Mathematics::int4 zzyy;

  __declspec(property(get = get_zzyz))::Unity::Mathematics::int4 zzyz;

  __declspec(property(get = get_zzz))::Unity::Mathematics::int3 zzz;

  __declspec(property(get = get_zzzx))::Unity::Mathematics::int4 zzzx;

  __declspec(property(get = get_zzzy))::Unity::Mathematics::int4 zzzy;

  __declspec(property(get = get_zzzz))::Unity::Mathematics::int4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x32183ec, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x32183b8, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3 rhs);

  /// @brief Method GetHashCode, addr 0x3218484, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x32184cc, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3218590, size 0xb4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x32171cc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

  /// @brief Method .ctor, addr 0x321729c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 v);

  /// @brief Method .ctor, addr 0x321723c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 v);

  /// @brief Method .ctor, addr 0x3217208, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 v);

  /// @brief Method .ctor, addr 0x32171bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x3217278, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3217218, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x32171b0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x32171fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x3217174, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y, int32_t z);

  /// @brief Method .ctor, addr 0x3217180, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, ::Unity::Mathematics::int2 yz);

  /// @brief Method .ctor, addr 0x3217190, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 xy, int32_t z);

  /// @brief Method .ctor, addr 0x32171a0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 xyz);

  static inline ::Unity::Mathematics::int3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x32183a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x32182e4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xx();

  /// @brief Method get_xxx, addr 0x32180bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxx();

  /// @brief Method get_xxxx, addr 0x32179f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x3217a04, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x3217a1c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxz();

  /// @brief Method get_xxy, addr 0x32180cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxy();

  /// @brief Method get_xxyx, addr 0x3217a38, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x3217a4c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x3217a5c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyz();

  /// @brief Method get_xxz, addr 0x32180dc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxz();

  /// @brief Method get_xxzx, addr 0x3217a70, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x3217a88, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x3217a9c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzz();

  /// @brief Method get_xy, addr 0x32182f0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xy();

  /// @brief Method get_xyx, addr 0x32180f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyx();

  /// @brief Method get_xyxx, addr 0x3217ab0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x3217ac8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x3217ad4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxz();

  /// @brief Method get_xyy, addr 0x3218100, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyy();

  /// @brief Method get_xyyx, addr 0x3217af0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x3217b04, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x3217b18, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyz();

  /// @brief Method get_xyz, addr 0x3218110, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyz();

  /// @brief Method get_xyzx, addr 0x3217b30, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x3217b48, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x3217b5c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzz();

  /// @brief Method get_xz, addr 0x3218304, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xz();

  /// @brief Method get_xzx, addr 0x321812c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzx();

  /// @brief Method get_xzxx, addr 0x3217b6c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x3217b88, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x3217ba4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxz();

  /// @brief Method get_xzy, addr 0x3218140, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzy();

  /// @brief Method get_xzyx, addr 0x3217bb8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x3217bd0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x3217be8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyz();

  /// @brief Method get_xzz, addr 0x3218164, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzz();

  /// @brief Method get_xzzx, addr 0x3217bfc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x3217c14, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x3217c2c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzz();

  /// @brief Method get_yx, addr 0x3218328, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yx();

  /// @brief Method get_yxx, addr 0x3218178, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxx();

  /// @brief Method get_yxxx, addr 0x3217c44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x3217c54, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x3217c68, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxz();

  /// @brief Method get_yxy, addr 0x3218184, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxy();

  /// @brief Method get_yxyx, addr 0x3217c80, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x3217c90, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x3217ca8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyz();

  /// @brief Method get_yxz, addr 0x3218194, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxz();

  /// @brief Method get_yxzx, addr 0x3217cc4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x3217cd8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x3217cf0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzz();

  /// @brief Method get_yy, addr 0x3218340, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yy();

  /// @brief Method get_yyx, addr 0x32181b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyx();

  /// @brief Method get_yyxx, addr 0x3217d04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x3217d14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x3217d24, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxz();

  /// @brief Method get_yyy, addr 0x32181c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyy();

  /// @brief Method get_yyyx, addr 0x3217d38, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x3217d50, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x3217d60, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyz();

  /// @brief Method get_yyz, addr 0x32181d8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyz();

  /// @brief Method get_yyzx, addr 0x3217d78, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x3217d8c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x3217da0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzz();

  /// @brief Method get_yz, addr 0x321834c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yz();

  /// @brief Method get_yzx, addr 0x32181e8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzx();

  /// @brief Method get_yzxx, addr 0x3217db0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x3217dc0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x3217dd8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxz();

  /// @brief Method get_yzy, addr 0x3218204, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzy();

  /// @brief Method get_yzyx, addr 0x3217dec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x3217e08, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x3217e20, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyz();

  /// @brief Method get_yzz, addr 0x3218214, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzz();

  /// @brief Method get_yzzx, addr 0x3217e2c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x3217e44, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x3217e58, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzz();

  /// @brief Method get_zx, addr 0x3218360, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zx();

  /// @brief Method get_zxx, addr 0x3218224, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxx();

  /// @brief Method get_zxxx, addr 0x3217e6c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x3217e84, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x3217e9c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxz();

  /// @brief Method get_zxy, addr 0x3218238, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxy();

  /// @brief Method get_zxyx, addr 0x3217eb4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x3217ec8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x3217edc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyz();

  /// @brief Method get_zxz, addr 0x321825c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxz();

  /// @brief Method get_zxzx, addr 0x3217ef4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x3217f08, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x3217f24, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzz();

  /// @brief Method get_zy, addr 0x3218384, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zy();

  /// @brief Method get_zyx, addr 0x3218270, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyx();

  /// @brief Method get_zyxx, addr 0x3217f40, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x3217f58, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x3217f6c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxz();

  /// @brief Method get_zyy, addr 0x3218294, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyy();

  /// @brief Method get_zyyx, addr 0x3217f84, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x3217f9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x3217fac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyz();

  /// @brief Method get_zyz, addr 0x32182a0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyz();

  /// @brief Method get_zyzx, addr 0x3217fc0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x3217fdc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x3217fec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzz();

  /// @brief Method get_zz, addr 0x321839c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zz();

  /// @brief Method get_zzx, addr 0x32182b0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzx();

  /// @brief Method get_zzxx, addr 0x3218004, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x3218018, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x321802c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxz();

  /// @brief Method get_zzy, addr 0x32182c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzy();

  /// @brief Method get_zzyx, addr 0x3218044, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x3218058, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x3218068, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyz();

  /// @brief Method get_zzz, addr 0x32182d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzz();

  /// @brief Method get_zzzx, addr 0x3218078, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x3218094, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x32180ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3>* i___System__IEquatable_1___Unity__Mathematics__int3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x3217440, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Addition, addr 0x321745c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x3217474, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3217934, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3217940, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3217958, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x3217974, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x3217980, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x3217998, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Decrement, addr 0x32175c0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Decrement(::Unity::Mathematics::int3 val);

  /// @brief Method op_Division, addr 0x32174e0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Division, addr 0x32174fc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x3217514, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Equality, addr 0x3217828, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Equality, addr 0x3217854, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x321787c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x32179b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x32179c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x32179d8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Explicit, addr 0x32172f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::bool3 v);

  /// @brief Method op_Explicit, addr 0x32173b0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::double3 v);

  /// @brief Method op_Explicit, addr 0x321734c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::float3 v);

  /// @brief Method op_Explicit, addr 0x3217320, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::uint3 v);

  /// @brief Method op_Explicit, addr 0x32172e8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(bool v);

  /// @brief Method op_Explicit, addr 0x321738c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(double_t v);

  /// @brief Method op_Explicit, addr 0x3217328, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(float_t v);

  /// @brief Method op_Explicit, addr 0x3217310, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x32176dc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThan, addr 0x3217708, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x3217730, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x321775c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3217788, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32177b0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Implicit, addr 0x32172d8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Implicit___Unity__Mathematics__int3(int32_t v);

  /// @brief Method op_Increment, addr 0x32175a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Increment(::Unity::Mathematics::int3 val);

  /// @brief Method op_Inequality, addr 0x32178a8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Inequality, addr 0x32178d4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x32178fc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LeftShift, addr 0x32177f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_LeftShift(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x32175dc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThan, addr 0x3217608, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x3217630, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x321765c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3217688, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x32176b0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Modulus, addr 0x3217530, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Modulus, addr 0x3217558, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x321757c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Multiply, addr 0x32173f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Multiply, addr 0x321740c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x3217424, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_OnesComplement, addr 0x3217928, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_OnesComplement(::Unity::Mathematics::int3 val);

  /// @brief Method op_RightShift, addr 0x3217810, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_RightShift(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x3217490, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Subtraction, addr 0x32174ac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x32174c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x32177dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_UnaryNegation(::Unity::Mathematics::int3 val);

  /// @brief Method op_UnaryPlus, addr 0x32177f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_UnaryPlus(::Unity::Mathematics::int3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int3 value);

  /// @brief Method set_Item, addr 0x32183b0, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

  /// @brief Method set_xy, addr 0x32182f8, size 0xc, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::int2 value);

  /// @brief Method set_xyz, addr 0x321811c, size 0x10, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::int3 value);

  /// @brief Method set_xz, addr 0x3218318, size 0x10, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::int2 value);

  /// @brief Method set_xzy, addr 0x3218154, size 0x10, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::int3 value);

  /// @brief Method set_yx, addr 0x3218334, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::int2 value);

  /// @brief Method set_yxz, addr 0x32181a8, size 0x10, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::int3 value);

  /// @brief Method set_yz, addr 0x3218354, size 0xc, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::int2 value);

  /// @brief Method set_yzx, addr 0x32181f4, size 0x10, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::int3 value);

  /// @brief Method set_zx, addr 0x3218374, size 0x10, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::int2 value);

  /// @brief Method set_zxy, addr 0x321824c, size 0x10, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::int3 value);

  /// @brief Method set_zy, addr 0x3218390, size 0xc, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::int2 value);

  /// @brief Method set_zyx, addr 0x3218284, size 0x10, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::int3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr int3(int32_t x, int32_t y, int32_t z) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  int32_t z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3, 0xc>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, z) == 0x8, "Offset mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__int3__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__int3__DebuggerProxy*, "Unity.Mathematics", "int3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3, "Unity.Mathematics", "int3");
