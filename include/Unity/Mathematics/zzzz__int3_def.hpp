#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3.hpp"
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
CORDL_MODULE_EXPORT(int3)
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
MARK_REF_PTR_T(::Unity::Mathematics::int3_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::int3);
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

  /// @brief Method .ctor, addr 0x46b2b80, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr int3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "int3_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  int3_DebuggerProxy(int3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "int3_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  int3_DebuggerProxy(int3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10001 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3_DebuggerProxy, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int3
struct CORDL_TYPE int3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::int3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::int2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::int3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::int4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::int4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::int4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::int3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::int4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::int4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::int4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::int3 xxz;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::int4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::int4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::int4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::int2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::int3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::int4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::int4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::int4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::int3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::int4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::int4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::int4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::int3 xyz;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::int4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::int4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::int4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::int2 xz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::int3 xzx;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::int4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::int4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::int4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::int3 xzy;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::int4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::int4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::int4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::int3 xzz;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::int4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::int4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::int4 xzzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::int2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::int3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::int4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::int4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::int4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::int3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::int4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::int4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::int4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::int3 yxz;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::int4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::int4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::int4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::int2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::int3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::int4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::int4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::int4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::int3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::int4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::int4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::int4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::int3 yyz;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::int4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::int4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::int4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::int2 yz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::int3 yzx;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::int4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::int4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::int4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::int3 yzy;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::int4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::int4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::int4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::int3 yzz;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::int4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::int4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::int4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int3 zero;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::int2 zx;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::int3 zxx;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::int4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::int4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::int4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::int3 zxy;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::int4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::int4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::int4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::int3 zxz;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::int4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::int4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::int4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::int2 zy;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::int3 zyx;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::int4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::int4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::int4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::int3 zyy;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::int4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::int4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::int4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::int3 zyz;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::int4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::int4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::int4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::int2 zz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::int3 zzx;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::int4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::int4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::int4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::int3 zzy;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::int4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::int4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::int4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::int3 zzz;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::int4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::int4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::int4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46b2928, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46b28f4, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3 rhs);

  /// @brief Method GetHashCode, addr 0x46b29c0, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46b2a08, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46b2acc, size 0xb4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46b16f8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

  /// @brief Method .ctor, addr 0x46b17c8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 v);

  /// @brief Method .ctor, addr 0x46b1768, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 v);

  /// @brief Method .ctor, addr 0x46b1734, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 v);

  /// @brief Method .ctor, addr 0x46b16e8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46b17a4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46b1744, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46b16dc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46b1728, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x46b16a0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y, int32_t z);

  /// @brief Method .ctor, addr 0x46b16ac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, ::Unity::Mathematics::int2 yz);

  /// @brief Method .ctor, addr 0x46b16bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 xy, int32_t z);

  /// @brief Method .ctor, addr 0x46b16cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 xyz);

  static inline ::Unity::Mathematics::int3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46b28e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x46b2820, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xx();

  /// @brief Method get_xxx, addr 0x46b25f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxx();

  /// @brief Method get_xxxx, addr 0x46b1f14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x46b1f24, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x46b1f3c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxz();

  /// @brief Method get_xxy, addr 0x46b2604, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxy();

  /// @brief Method get_xxyx, addr 0x46b1f58, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x46b1f6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x46b1f7c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyz();

  /// @brief Method get_xxz, addr 0x46b2614, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxz();

  /// @brief Method get_xxzx, addr 0x46b1f90, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x46b1fa8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x46b1fbc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxzz();

  /// @brief Method get_xy, addr 0x46b282c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xy();

  /// @brief Method get_xyx, addr 0x46b2628, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyx();

  /// @brief Method get_xyxx, addr 0x46b1fd0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x46b1fe8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x46b1ff4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxz();

  /// @brief Method get_xyy, addr 0x46b2638, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyy();

  /// @brief Method get_xyyx, addr 0x46b2010, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x46b2024, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x46b2038, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyz();

  /// @brief Method get_xyz, addr 0x46b2648, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyz();

  /// @brief Method get_xyzx, addr 0x46b2050, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x46b2068, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x46b207c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyzz();

  /// @brief Method get_xz, addr 0x46b283c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xz();

  /// @brief Method get_xzx, addr 0x46b2664, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzx();

  /// @brief Method get_xzxx, addr 0x46b208c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x46b20a8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x46b20c4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzxz();

  /// @brief Method get_xzy, addr 0x46b2678, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzy();

  /// @brief Method get_xzyx, addr 0x46b20d8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x46b20f0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x46b2108, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzyz();

  /// @brief Method get_xzz, addr 0x46b269c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xzz();

  /// @brief Method get_xzzx, addr 0x46b211c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x46b2134, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x46b214c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xzzz();

  /// @brief Method get_yx, addr 0x46b2860, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yx();

  /// @brief Method get_yxx, addr 0x46b26b0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxx();

  /// @brief Method get_yxxx, addr 0x46b2164, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x46b2178, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x46b218c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxz();

  /// @brief Method get_yxy, addr 0x46b26c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxy();

  /// @brief Method get_yxyx, addr 0x46b21a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x46b21b4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x46b21cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyz();

  /// @brief Method get_yxz, addr 0x46b26d0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxz();

  /// @brief Method get_yxzx, addr 0x46b21e8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x46b21fc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x46b2214, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxzz();

  /// @brief Method get_yy, addr 0x46b287c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yy();

  /// @brief Method get_yyx, addr 0x46b26f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyx();

  /// @brief Method get_yyxx, addr 0x46b222c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x46b223c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x46b2250, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxz();

  /// @brief Method get_yyy, addr 0x46b2704, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyy();

  /// @brief Method get_yyyx, addr 0x46b2264, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x46b227c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x46b228c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyz();

  /// @brief Method get_yyz, addr 0x46b2714, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyz();

  /// @brief Method get_yyzx, addr 0x46b22a4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x46b22b8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x46b22cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyzz();

  /// @brief Method get_yz, addr 0x46b2888, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yz();

  /// @brief Method get_yzx, addr 0x46b2724, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzx();

  /// @brief Method get_yzxx, addr 0x46b22dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x46b22ec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x46b2304, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzxz();

  /// @brief Method get_yzy, addr 0x46b273c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzy();

  /// @brief Method get_yzyx, addr 0x46b2318, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x46b2334, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x46b234c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzyz();

  /// @brief Method get_yzz, addr 0x46b274c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yzz();

  /// @brief Method get_yzzx, addr 0x46b2358, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x46b2370, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x46b2384, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yzzz();

  /// @brief Method get_zx, addr 0x46b2898, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zx();

  /// @brief Method get_zxx, addr 0x46b275c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxx();

  /// @brief Method get_zxxx, addr 0x46b2398, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x46b23b0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x46b23c8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxxz();

  /// @brief Method get_zxy, addr 0x46b2770, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxy();

  /// @brief Method get_zxyx, addr 0x46b23e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x46b23f4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x46b240c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxyz();

  /// @brief Method get_zxz, addr 0x46b2794, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zxz();

  /// @brief Method get_zxzx, addr 0x46b2424, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x46b2438, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x46b2454, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zxzz();

  /// @brief Method get_zy, addr 0x46b28bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zy();

  /// @brief Method get_zyx, addr 0x46b27a8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyx();

  /// @brief Method get_zyxx, addr 0x46b2470, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x46b2488, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x46b249c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyxz();

  /// @brief Method get_zyy, addr 0x46b27cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyy();

  /// @brief Method get_zyyx, addr 0x46b24b4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x46b24cc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x46b24e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyyz();

  /// @brief Method get_zyz, addr 0x46b27dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zyz();

  /// @brief Method get_zyzx, addr 0x46b24f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x46b2510, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x46b2520, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zyzz();

  /// @brief Method get_zz, addr 0x46b28d8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_zz();

  /// @brief Method get_zzx, addr 0x46b27ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzx();

  /// @brief Method get_zzxx, addr 0x46b2538, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x46b254c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x46b2560, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzxz();

  /// @brief Method get_zzy, addr 0x46b2800, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzy();

  /// @brief Method get_zzyx, addr 0x46b2578, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x46b258c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x46b259c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzyz();

  /// @brief Method get_zzz, addr 0x46b2810, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_zzz();

  /// @brief Method get_zzzx, addr 0x46b25b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x46b25cc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x46b25e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3>* i___System__IEquatable_1___Unity__Mathematics__int3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46b1978, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Addition, addr 0x46b1994, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46b19ac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Addition(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b1e54, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b1e60, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b1e78, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b1e94, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b1ea0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b1eb8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Decrement, addr 0x46b1af8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Decrement(::Unity::Mathematics::int3 val);

  /// @brief Method op_Division, addr 0x46b1a18, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Division, addr 0x46b1a34, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46b1a4c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Division(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Equality, addr 0x46b1d50, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Equality, addr 0x46b1d7c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46b1da4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b1ed4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b1ee0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b1ef8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Explicit, addr 0x46b1830, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::bool3 v);

  /// @brief Method op_Explicit, addr 0x46b18e8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::double3 v);

  /// @brief Method op_Explicit, addr 0x46b1884, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::float3 v);

  /// @brief Method op_Explicit, addr 0x46b1858, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::uint3 v);

  /// @brief Method op_Explicit, addr 0x46b1814, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(bool v);

  /// @brief Method op_Explicit, addr 0x46b18c4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(double_t v);

  /// @brief Method op_Explicit, addr 0x46b1860, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(float_t v);

  /// @brief Method op_Explicit, addr 0x46b1848, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46b1c0c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThan, addr 0x46b1c38, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46b1c60, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b1c88, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b1cb4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b1cdc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Implicit, addr 0x46b1804, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Implicit___Unity__Mathematics__int3(int32_t v);

  /// @brief Method op_Increment, addr 0x46b1adc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Increment(::Unity::Mathematics::int3 val);

  /// @brief Method op_Inequality, addr 0x46b1dcc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Inequality, addr 0x46b1df8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46b1e20, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LeftShift, addr 0x46b1d20, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_LeftShift(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46b1b14, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThan, addr 0x46b1b40, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46b1b68, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b1b90, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b1bbc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b1be4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Modulus, addr 0x46b1a68, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Modulus, addr 0x46b1a90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46b1ab4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Multiply, addr 0x46b1928, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Multiply, addr 0x46b1944, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46b195c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_OnesComplement, addr 0x46b1e48, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_OnesComplement(::Unity::Mathematics::int3 val);

  /// @brief Method op_RightShift, addr 0x46b1d38, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_RightShift(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46b19c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3 lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_Subtraction, addr 0x46b19e4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46b19fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46b1d04, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_UnaryNegation(::Unity::Mathematics::int3 val);

  /// @brief Method op_UnaryPlus, addr 0x46b1d18, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 op_UnaryPlus(::Unity::Mathematics::int3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int3 value);

  /// @brief Method set_Item, addr 0x46b28ec, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

  /// @brief Method set_xy, addr 0x46b2834, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::int2 value);

  /// @brief Method set_xyz, addr 0x46b2654, size 0x10, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::int3 value);

  /// @brief Method set_xz, addr 0x46b2850, size 0x10, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::int2 value);

  /// @brief Method set_xzy, addr 0x46b268c, size 0x10, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::int3 value);

  /// @brief Method set_yx, addr 0x46b2870, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::int2 value);

  /// @brief Method set_yxz, addr 0x46b26e4, size 0x10, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::int3 value);

  /// @brief Method set_yz, addr 0x46b2890, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::int2 value);

  /// @brief Method set_yzx, addr 0x46b2730, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::int3 value);

  /// @brief Method set_zx, addr 0x46b28ac, size 0x10, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::int2 value);

  /// @brief Method set_zxy, addr 0x46b2784, size 0x10, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::int3 value);

  /// @brief Method set_zy, addr 0x46b28cc, size 0xc, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::int2 value);

  /// @brief Method set_zyx, addr 0x46b27bc, size 0x10, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::int3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr int3(int32_t x, int32_t y, int32_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10002 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3, 0xc>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::int3_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3_DebuggerProxy*, "Unity.Mathematics", "int3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3, "Unity.Mathematics", "int3");
