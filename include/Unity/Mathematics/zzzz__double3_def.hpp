#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3.hpp"
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
CORDL_MODULE_EXPORT(double3)
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
MARK_REF_PTR_T(::Unity::Mathematics::double3_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::double3);
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

  /// @brief Method .ctor, addr 0x4678d54, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr double3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "double3_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  double3_DebuggerProxy(double3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "double3_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  double3_DebuggerProxy(double3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9964 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double3_DebuggerProxy, 0x28>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3
struct CORDL_TYPE double3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::double3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) double_t Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::double2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::double3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::double4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::double4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::double4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::double3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::double4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::double4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::double4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::double3 xxz;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::double4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::double4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::double4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::double2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::double3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::double4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::double4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::double4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::double3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::double4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::double4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::double4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::double3 xyz;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::double4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::double4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::double4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::double2 xz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::double3 xzx;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::double4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::double4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::double4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::double3 xzy;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::double4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::double4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::double4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::double3 xzz;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::double4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::double4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::double4 xzzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::double2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::double3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::double4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::double4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::double4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::double3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::double4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::double4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::double4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::double3 yxz;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::double4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::double4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::double4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::double2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::double3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::double4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::double4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::double4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::double3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::double4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::double4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::double4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::double3 yyz;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::double4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::double4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::double4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::double2 yz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::double3 yzx;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::double4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::double4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::double4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::double3 yzy;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::double4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::double4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::double4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::double3 yzz;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::double4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::double4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::double4 yzzz;

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double3 zero;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::double2 zx;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::double3 zxx;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::double4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::double4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::double4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::double3 zxy;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::double4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::double4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::double4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::double3 zxz;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::double4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::double4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::double4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::double2 zy;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::double3 zyx;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::double4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::double4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::double4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::double3 zyy;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::double4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::double4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::double4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::double3 zyz;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::double4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::double4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::double4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::double2 zz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::double3 zzx;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::double4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::double4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::double4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::double3 zzy;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::double4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::double4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::double4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::double3 zzz;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::double4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::double4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::double4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4678aec, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4678abc, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double3 rhs);

  /// @brief Method GetHashCode, addr 0x4678b84, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4678bdc, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4678ca0, size 0xb4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4677a14, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

  /// @brief Method .ctor, addr 0x4677bec, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 v);

  /// @brief Method .ctor, addr 0x4677a98, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x4677b04, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half3 v);

  /// @brief Method .ctor, addr 0x4677a50, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 v);

  /// @brief Method .ctor, addr 0x4677a7c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 v);

  /// @brief Method .ctor, addr 0x46779f8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46779ec, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x4677bdc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x4677a40, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4677a6c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x46779bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y, double_t z);

  /// @brief Method .ctor, addr 0x46779c8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t x, ::Unity::Mathematics::double2 yz);

  /// @brief Method .ctor, addr 0x46779d4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 xy, double_t z);

  /// @brief Method .ctor, addr 0x46779e0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 xyz);

  static inline ::Unity::Mathematics::double3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4678aac, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x4678a18, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xx();

  /// @brief Method get_xxx, addr 0x4678868, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxx();

  /// @brief Method get_xxxx, addr 0x4678314, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x4678328, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x4678338, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxz();

  /// @brief Method get_xxy, addr 0x4678878, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxy();

  /// @brief Method get_xxyx, addr 0x467834c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x467835c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x467836c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyz();

  /// @brief Method get_xxz, addr 0x4678884, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxz();

  /// @brief Method get_xxzx, addr 0x467837c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x4678390, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x46783a0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxzz();

  /// @brief Method get_xy, addr 0x4678a24, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xy();

  /// @brief Method get_xyx, addr 0x4678894, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyx();

  /// @brief Method get_xyxx, addr 0x46783b4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x46783c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x46783d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxz();

  /// @brief Method get_xyy, addr 0x46788a0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyy();

  /// @brief Method get_xyyx, addr 0x46783e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x46783f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x4678404, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyz();

  /// @brief Method get_xyz, addr 0x46788ac, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyz();

  /// @brief Method get_xyzx, addr 0x4678414, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x4678424, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x4678434, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyzz();

  /// @brief Method get_xz, addr 0x4678a34, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xz();

  /// @brief Method get_xzx, addr 0x46788c4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzx();

  /// @brief Method get_xzxx, addr 0x4678444, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x4678458, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x4678468, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzxz();

  /// @brief Method get_xzy, addr 0x46788d4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzy();

  /// @brief Method get_xzyx, addr 0x467847c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x467848c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x467849c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzyz();

  /// @brief Method get_xzz, addr 0x46788ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xzz();

  /// @brief Method get_xzzx, addr 0x46784ac, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x46784c0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x46784d0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xzzz();

  /// @brief Method get_yx, addr 0x4678a4c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yx();

  /// @brief Method get_yxx, addr 0x46788fc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxx();

  /// @brief Method get_yxxx, addr 0x46784e4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x46784f4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x4678504, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxz();

  /// @brief Method get_yxy, addr 0x4678908, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxy();

  /// @brief Method get_yxyx, addr 0x4678514, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x4678524, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x4678534, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyz();

  /// @brief Method get_yxz, addr 0x4678914, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxz();

  /// @brief Method get_yxzx, addr 0x4678544, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x4678554, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x4678564, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxzz();

  /// @brief Method get_yy, addr 0x4678a5c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yy();

  /// @brief Method get_yyx, addr 0x467892c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyx();

  /// @brief Method get_yyxx, addr 0x4678574, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x4678584, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x4678594, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxz();

  /// @brief Method get_yyy, addr 0x4678938, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyy();

  /// @brief Method get_yyyx, addr 0x46785a4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x46785b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x46785c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyz();

  /// @brief Method get_yyz, addr 0x4678948, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyz();

  /// @brief Method get_yyzx, addr 0x46785d8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x46785e8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x46785f8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyzz();

  /// @brief Method get_yz, addr 0x4678a68, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yz();

  /// @brief Method get_yzx, addr 0x4678954, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzx();

  /// @brief Method get_yzxx, addr 0x4678608, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x4678618, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x4678628, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzxz();

  /// @brief Method get_yzy, addr 0x467896c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzy();

  /// @brief Method get_yzyx, addr 0x4678638, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x4678648, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x4678658, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzyz();

  /// @brief Method get_yzz, addr 0x4678978, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yzz();

  /// @brief Method get_yzzx, addr 0x4678668, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x4678678, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x4678688, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yzzz();

  /// @brief Method get_zx, addr 0x4678a78, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zx();

  /// @brief Method get_zxx, addr 0x4678984, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxx();

  /// @brief Method get_zxxx, addr 0x4678698, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x46786ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x46786bc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxxz();

  /// @brief Method get_zxy, addr 0x4678994, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxy();

  /// @brief Method get_zxyx, addr 0x46786d0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x46786e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x46786f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxyz();

  /// @brief Method get_zxz, addr 0x46789ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zxz();

  /// @brief Method get_zxzx, addr 0x4678700, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x4678714, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x4678724, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zxzz();

  /// @brief Method get_zy, addr 0x4678a90, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zy();

  /// @brief Method get_zyx, addr 0x46789bc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyx();

  /// @brief Method get_zyxx, addr 0x4678738, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x4678748, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x4678758, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyxz();

  /// @brief Method get_zyy, addr 0x46789d4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyy();

  /// @brief Method get_zyyx, addr 0x4678768, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x4678778, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x4678788, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyyz();

  /// @brief Method get_zyz, addr 0x46789e0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zyz();

  /// @brief Method get_zyzx, addr 0x4678798, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x46787a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x46787b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zyzz();

  /// @brief Method get_zz, addr 0x4678aa0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_zz();

  /// @brief Method get_zzx, addr 0x46789ec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzx();

  /// @brief Method get_zzxx, addr 0x46787c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x46787dc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x46787ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzxz();

  /// @brief Method get_zzy, addr 0x46789fc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzy();

  /// @brief Method get_zzyx, addr 0x4678800, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x4678810, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x4678820, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzyz();

  /// @brief Method get_zzz, addr 0x4678a08, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_zzz();

  /// @brief Method get_zzzx, addr 0x4678830, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x4678844, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x4678854, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double3>* i___System__IEquatable_1___Unity__Mathematics__double3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4677e50, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Addition(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Addition, addr 0x4677e60, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Addition(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x4677e70, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Addition(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Decrement, addr 0x467801c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Decrement(::Unity::Mathematics::double3 val);

  /// @brief Method op_Division, addr 0x4677eb8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Division(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Division, addr 0x4677ec8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Division(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x4677ed8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Division(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Equality, addr 0x4678224, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Equality, addr 0x467824c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x4678274, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Explicit, addr 0x4677c2c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Explicit___Unity__Mathematics__double3(::Unity::Mathematics::bool3 v);

  /// @brief Method op_Explicit, addr 0x4677c10, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Explicit___Unity__Mathematics__double3(bool v);

  /// @brief Method op_GreaterThan, addr 0x4678120, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_GreaterThan, addr 0x4678148, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4678170, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4678198, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46781c0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46781e8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Implicit, addr 0x4677e0c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::float3 v);

  /// @brief Method op_Implicit, addr 0x4677c98, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x4677d04, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::half3 v);

  /// @brief Method op_Implicit, addr 0x4677c60, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::int3 v);

  /// @brief Method op_Implicit, addr 0x4677c84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::uint3 v);

  /// @brief Method op_Implicit, addr 0x4677c04, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(double_t v);

  /// @brief Method op_Implicit, addr 0x4677dfc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(float_t v);

  /// @brief Method op_Implicit, addr 0x4677c50, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(int32_t v);

  /// @brief Method op_Implicit, addr 0x4677c74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(uint32_t v);

  /// @brief Method op_Increment, addr 0x4678008, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Increment(::Unity::Mathematics::double3 val);

  /// @brief Method op_Inequality, addr 0x467829c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Inequality, addr 0x46782c4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x46782ec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_LessThan, addr 0x4678030, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_LessThan, addr 0x4678058, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x4678080, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThan(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46780a8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46780d0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46780f8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Modulus, addr 0x4677eec, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Modulus(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Modulus, addr 0x4677f54, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Modulus(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x4677fb0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Modulus(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Multiply, addr 0x4677e1c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Multiply(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Multiply, addr 0x4677e2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Multiply(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x4677e3c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Multiply(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Subtraction, addr 0x4677e84, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Subtraction(::Unity::Mathematics::double3 lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_Subtraction, addr 0x4677e94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Subtraction(::Unity::Mathematics::double3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x4677ea4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4678210, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_UnaryNegation(::Unity::Mathematics::double3 val);

  /// @brief Method op_UnaryPlus, addr 0x4678220, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 op_UnaryPlus(::Unity::Mathematics::double3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double3 value);

  /// @brief Method set_Item, addr 0x4678ab4, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, double_t value);

  /// @brief Method set_xy, addr 0x4678a2c, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::double2 value);

  /// @brief Method set_xyz, addr 0x46788b8, size 0xc, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::double3 value);

  /// @brief Method set_xz, addr 0x4678a40, size 0xc, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::double2 value);

  /// @brief Method set_xzy, addr 0x46788e0, size 0xc, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::double3 value);

  /// @brief Method set_yx, addr 0x4678a54, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::double2 value);

  /// @brief Method set_yxz, addr 0x4678920, size 0xc, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::double3 value);

  /// @brief Method set_yz, addr 0x4678a70, size 0x8, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::double2 value);

  /// @brief Method set_yzx, addr 0x4678960, size 0xc, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::double3 value);

  /// @brief Method set_zx, addr 0x4678a84, size 0xc, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::double2 value);

  /// @brief Method set_zxy, addr 0x46789a0, size 0xc, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::double3 value);

  /// @brief Method set_zy, addr 0x4678a98, size 0x8, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::double2 value);

  /// @brief Method set_zyx, addr 0x46789c8, size 0xc, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::double3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double3();

  // Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "z", ty:
  // "double_t", modifiers: "", def_value: None }]
  constexpr double3(double_t x, double_t y, double_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9965 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double3, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::double3_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double3_DebuggerProxy*, "Unity.Mathematics", "double3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double3, "Unity.Mathematics", "double3");
