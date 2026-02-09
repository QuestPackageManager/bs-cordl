#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3.hpp"
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
template<typename T>
class IEquatable_1;
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
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) int32_t  y;

/// @brief Field z, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) int32_t  z;

static inline ::Unity::Mathematics::int3_DebuggerProxy* New_ctor(::Unity::Mathematics::int3  v) ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_y() const;

constexpr int32_t& __cordl_internal_get_y() ;

constexpr int32_t const& __cordl_internal_get_z() const;

constexpr int32_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_y(int32_t  value) ;

constexpr void __cordl_internal_set_z(int32_t  value) ;

/// @brief Method .ctor, addr 0x64aaf04, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr int3_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "int3_DebuggerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
int3_DebuggerProxy(int3_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "int3_DebuggerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
int3_DebuggerProxy(int3_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13162};

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 int32_t  ___y;

/// @brief Field z, offset: 0x18, size: 0x4, def value: None
 int32_t  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int3_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3_DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3_DebuggerProxy, 0x20>, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int3
struct CORDL_TYPE int3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::int3_DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) int32_t  Item[];

 __declspec(property(get=get_xx)) ::Unity::Mathematics::int2  xx;

 __declspec(property(get=get_xxx)) ::Unity::Mathematics::int3  xxx;

 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::int4  xxxx;

 __declspec(property(get=get_xxxy)) ::Unity::Mathematics::int4  xxxy;

 __declspec(property(get=get_xxxz)) ::Unity::Mathematics::int4  xxxz;

 __declspec(property(get=get_xxy)) ::Unity::Mathematics::int3  xxy;

 __declspec(property(get=get_xxyx)) ::Unity::Mathematics::int4  xxyx;

 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::int4  xxyy;

 __declspec(property(get=get_xxyz)) ::Unity::Mathematics::int4  xxyz;

 __declspec(property(get=get_xxz)) ::Unity::Mathematics::int3  xxz;

 __declspec(property(get=get_xxzx)) ::Unity::Mathematics::int4  xxzx;

 __declspec(property(get=get_xxzy)) ::Unity::Mathematics::int4  xxzy;

 __declspec(property(get=get_xxzz)) ::Unity::Mathematics::int4  xxzz;

 __declspec(property(get=get_xy, put=set_xy)) ::Unity::Mathematics::int2  xy;

 __declspec(property(get=get_xyx)) ::Unity::Mathematics::int3  xyx;

 __declspec(property(get=get_xyxx)) ::Unity::Mathematics::int4  xyxx;

 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::int4  xyxy;

 __declspec(property(get=get_xyxz)) ::Unity::Mathematics::int4  xyxz;

 __declspec(property(get=get_xyy)) ::Unity::Mathematics::int3  xyy;

 __declspec(property(get=get_xyyx)) ::Unity::Mathematics::int4  xyyx;

 __declspec(property(get=get_xyyy)) ::Unity::Mathematics::int4  xyyy;

 __declspec(property(get=get_xyyz)) ::Unity::Mathematics::int4  xyyz;

 __declspec(property(get=get_xyz, put=set_xyz)) ::Unity::Mathematics::int3  xyz;

 __declspec(property(get=get_xyzx)) ::Unity::Mathematics::int4  xyzx;

 __declspec(property(get=get_xyzy)) ::Unity::Mathematics::int4  xyzy;

 __declspec(property(get=get_xyzz)) ::Unity::Mathematics::int4  xyzz;

 __declspec(property(get=get_xz, put=set_xz)) ::Unity::Mathematics::int2  xz;

 __declspec(property(get=get_xzx)) ::Unity::Mathematics::int3  xzx;

 __declspec(property(get=get_xzxx)) ::Unity::Mathematics::int4  xzxx;

 __declspec(property(get=get_xzxy)) ::Unity::Mathematics::int4  xzxy;

 __declspec(property(get=get_xzxz)) ::Unity::Mathematics::int4  xzxz;

 __declspec(property(get=get_xzy, put=set_xzy)) ::Unity::Mathematics::int3  xzy;

 __declspec(property(get=get_xzyx)) ::Unity::Mathematics::int4  xzyx;

 __declspec(property(get=get_xzyy)) ::Unity::Mathematics::int4  xzyy;

 __declspec(property(get=get_xzyz)) ::Unity::Mathematics::int4  xzyz;

 __declspec(property(get=get_xzz)) ::Unity::Mathematics::int3  xzz;

 __declspec(property(get=get_xzzx)) ::Unity::Mathematics::int4  xzzx;

 __declspec(property(get=get_xzzy)) ::Unity::Mathematics::int4  xzzy;

 __declspec(property(get=get_xzzz)) ::Unity::Mathematics::int4  xzzz;

 __declspec(property(get=get_yx, put=set_yx)) ::Unity::Mathematics::int2  yx;

 __declspec(property(get=get_yxx)) ::Unity::Mathematics::int3  yxx;

 __declspec(property(get=get_yxxx)) ::Unity::Mathematics::int4  yxxx;

 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::int4  yxxy;

 __declspec(property(get=get_yxxz)) ::Unity::Mathematics::int4  yxxz;

 __declspec(property(get=get_yxy)) ::Unity::Mathematics::int3  yxy;

 __declspec(property(get=get_yxyx)) ::Unity::Mathematics::int4  yxyx;

 __declspec(property(get=get_yxyy)) ::Unity::Mathematics::int4  yxyy;

 __declspec(property(get=get_yxyz)) ::Unity::Mathematics::int4  yxyz;

 __declspec(property(get=get_yxz, put=set_yxz)) ::Unity::Mathematics::int3  yxz;

 __declspec(property(get=get_yxzx)) ::Unity::Mathematics::int4  yxzx;

 __declspec(property(get=get_yxzy)) ::Unity::Mathematics::int4  yxzy;

 __declspec(property(get=get_yxzz)) ::Unity::Mathematics::int4  yxzz;

 __declspec(property(get=get_yy)) ::Unity::Mathematics::int2  yy;

 __declspec(property(get=get_yyx)) ::Unity::Mathematics::int3  yyx;

 __declspec(property(get=get_yyxx)) ::Unity::Mathematics::int4  yyxx;

 __declspec(property(get=get_yyxy)) ::Unity::Mathematics::int4  yyxy;

 __declspec(property(get=get_yyxz)) ::Unity::Mathematics::int4  yyxz;

 __declspec(property(get=get_yyy)) ::Unity::Mathematics::int3  yyy;

 __declspec(property(get=get_yyyx)) ::Unity::Mathematics::int4  yyyx;

 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::int4  yyyy;

 __declspec(property(get=get_yyyz)) ::Unity::Mathematics::int4  yyyz;

 __declspec(property(get=get_yyz)) ::Unity::Mathematics::int3  yyz;

 __declspec(property(get=get_yyzx)) ::Unity::Mathematics::int4  yyzx;

 __declspec(property(get=get_yyzy)) ::Unity::Mathematics::int4  yyzy;

 __declspec(property(get=get_yyzz)) ::Unity::Mathematics::int4  yyzz;

 __declspec(property(get=get_yz, put=set_yz)) ::Unity::Mathematics::int2  yz;

 __declspec(property(get=get_yzx, put=set_yzx)) ::Unity::Mathematics::int3  yzx;

 __declspec(property(get=get_yzxx)) ::Unity::Mathematics::int4  yzxx;

 __declspec(property(get=get_yzxy)) ::Unity::Mathematics::int4  yzxy;

 __declspec(property(get=get_yzxz)) ::Unity::Mathematics::int4  yzxz;

 __declspec(property(get=get_yzy)) ::Unity::Mathematics::int3  yzy;

 __declspec(property(get=get_yzyx)) ::Unity::Mathematics::int4  yzyx;

 __declspec(property(get=get_yzyy)) ::Unity::Mathematics::int4  yzyy;

 __declspec(property(get=get_yzyz)) ::Unity::Mathematics::int4  yzyz;

 __declspec(property(get=get_yzz)) ::Unity::Mathematics::int3  yzz;

 __declspec(property(get=get_yzzx)) ::Unity::Mathematics::int4  yzzx;

 __declspec(property(get=get_yzzy)) ::Unity::Mathematics::int4  yzzy;

 __declspec(property(get=get_yzzz)) ::Unity::Mathematics::int4  yzzz;

/// @brief Field zero, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int3  zero;

 __declspec(property(get=get_zx, put=set_zx)) ::Unity::Mathematics::int2  zx;

 __declspec(property(get=get_zxx)) ::Unity::Mathematics::int3  zxx;

 __declspec(property(get=get_zxxx)) ::Unity::Mathematics::int4  zxxx;

 __declspec(property(get=get_zxxy)) ::Unity::Mathematics::int4  zxxy;

 __declspec(property(get=get_zxxz)) ::Unity::Mathematics::int4  zxxz;

 __declspec(property(get=get_zxy, put=set_zxy)) ::Unity::Mathematics::int3  zxy;

 __declspec(property(get=get_zxyx)) ::Unity::Mathematics::int4  zxyx;

 __declspec(property(get=get_zxyy)) ::Unity::Mathematics::int4  zxyy;

 __declspec(property(get=get_zxyz)) ::Unity::Mathematics::int4  zxyz;

 __declspec(property(get=get_zxz)) ::Unity::Mathematics::int3  zxz;

 __declspec(property(get=get_zxzx)) ::Unity::Mathematics::int4  zxzx;

 __declspec(property(get=get_zxzy)) ::Unity::Mathematics::int4  zxzy;

 __declspec(property(get=get_zxzz)) ::Unity::Mathematics::int4  zxzz;

 __declspec(property(get=get_zy, put=set_zy)) ::Unity::Mathematics::int2  zy;

 __declspec(property(get=get_zyx, put=set_zyx)) ::Unity::Mathematics::int3  zyx;

 __declspec(property(get=get_zyxx)) ::Unity::Mathematics::int4  zyxx;

 __declspec(property(get=get_zyxy)) ::Unity::Mathematics::int4  zyxy;

 __declspec(property(get=get_zyxz)) ::Unity::Mathematics::int4  zyxz;

 __declspec(property(get=get_zyy)) ::Unity::Mathematics::int3  zyy;

 __declspec(property(get=get_zyyx)) ::Unity::Mathematics::int4  zyyx;

 __declspec(property(get=get_zyyy)) ::Unity::Mathematics::int4  zyyy;

 __declspec(property(get=get_zyyz)) ::Unity::Mathematics::int4  zyyz;

 __declspec(property(get=get_zyz)) ::Unity::Mathematics::int3  zyz;

 __declspec(property(get=get_zyzx)) ::Unity::Mathematics::int4  zyzx;

 __declspec(property(get=get_zyzy)) ::Unity::Mathematics::int4  zyzy;

 __declspec(property(get=get_zyzz)) ::Unity::Mathematics::int4  zyzz;

 __declspec(property(get=get_zz)) ::Unity::Mathematics::int2  zz;

 __declspec(property(get=get_zzx)) ::Unity::Mathematics::int3  zzx;

 __declspec(property(get=get_zzxx)) ::Unity::Mathematics::int4  zzxx;

 __declspec(property(get=get_zzxy)) ::Unity::Mathematics::int4  zzxy;

 __declspec(property(get=get_zzxz)) ::Unity::Mathematics::int4  zzxz;

 __declspec(property(get=get_zzy)) ::Unity::Mathematics::int3  zzy;

 __declspec(property(get=get_zzyx)) ::Unity::Mathematics::int4  zzyx;

 __declspec(property(get=get_zzyy)) ::Unity::Mathematics::int4  zzyy;

 __declspec(property(get=get_zzyz)) ::Unity::Mathematics::int4  zzyz;

 __declspec(property(get=get_zzz)) ::Unity::Mathematics::int3  zzz;

 __declspec(property(get=get_zzzx)) ::Unity::Mathematics::int4  zzzx;

 __declspec(property(get=get_zzzy)) ::Unity::Mathematics::int4  zzzy;

 __declspec(property(get=get_zzzz)) ::Unity::Mathematics::int4  zzzz;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x64aac6c, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x64aac38, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int3  rhs) ;

/// @brief Method GetHashCode, addr 0x64aad08, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x64aad50, size 0xd8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x64aae28, size 0xdc, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x64a9ba4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3  v) ;

/// @brief Method .ctor, addr 0x64a9c6c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  v) ;

/// @brief Method .ctor, addr 0x64a9c0c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  v) ;

/// @brief Method .ctor, addr 0x64a9bd8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3  v) ;

/// @brief Method .ctor, addr 0x64a9b94, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x64a9c48, size 0x24, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x64a9be8, size 0x24, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x64a9b88, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x64a9bcc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

/// @brief Method .ctor, addr 0x64a9b4c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method .ctor, addr 0x64a9b58, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, ::Unity::Mathematics::int2  yz) ;

/// @brief Method .ctor, addr 0x64a9b68, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2  xy, int32_t  z) ;

/// @brief Method .ctor, addr 0x64a9b78, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  xyz) ;

static inline ::Unity::Mathematics::int3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x64aac28, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method get_xx, addr 0x64aab74, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_xx() ;

/// @brief Method get_xxx, addr 0x64aa9a4, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xxx() ;

/// @brief Method get_xxxx, addr 0x64aa3ac, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxxx() ;

/// @brief Method get_xxxy, addr 0x64aa3bc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxxy() ;

/// @brief Method get_xxxz, addr 0x64aa3cc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxxz() ;

/// @brief Method get_xxy, addr 0x64aa9b0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xxy() ;

/// @brief Method get_xxyx, addr 0x64aa3e0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxyx() ;

/// @brief Method get_xxyy, addr 0x64aa3f0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxyy() ;

/// @brief Method get_xxyz, addr 0x64aa40c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxyz() ;

/// @brief Method get_xxz, addr 0x64aa9bc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xxz() ;

/// @brief Method get_xxzx, addr 0x64aa41c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxzx() ;

/// @brief Method get_xxzy, addr 0x64aa430, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxzy() ;

/// @brief Method get_xxzz, addr 0x64aa444, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxzz() ;

/// @brief Method get_xy, addr 0x64aab80, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_xy() ;

/// @brief Method get_xyx, addr 0x64aa9cc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xyx() ;

/// @brief Method get_xyxx, addr 0x64aa458, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyxx() ;

/// @brief Method get_xyxy, addr 0x64aa468, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyxy() ;

/// @brief Method get_xyxz, addr 0x64aa474, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyxz() ;

/// @brief Method get_xyy, addr 0x64aa9d8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xyy() ;

/// @brief Method get_xyyx, addr 0x64aa488, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyyx() ;

/// @brief Method get_xyyy, addr 0x64aa498, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyyy() ;

/// @brief Method get_xyyz, addr 0x64aa4a8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyyz() ;

/// @brief Method get_xyz, addr 0x64aa9e4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xyz() ;

/// @brief Method get_xyzx, addr 0x64aa4bc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyzx() ;

/// @brief Method get_xyzy, addr 0x64aa4d0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyzy() ;

/// @brief Method get_xyzz, addr 0x64aa4e4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyzz() ;

/// @brief Method get_xz, addr 0x64aab90, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_xz() ;

/// @brief Method get_xzx, addr 0x64aaa04, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xzx() ;

/// @brief Method get_xzxx, addr 0x64aa4f4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzxx() ;

/// @brief Method get_xzxy, addr 0x64aa508, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzxy() ;

/// @brief Method get_xzxz, addr 0x64aa51c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzxz() ;

/// @brief Method get_xzy, addr 0x64aaa14, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xzy() ;

/// @brief Method get_xzyx, addr 0x64aa530, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzyx() ;

/// @brief Method get_xzyy, addr 0x64aa544, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzyy() ;

/// @brief Method get_xzyz, addr 0x64aa558, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzyz() ;

/// @brief Method get_xzz, addr 0x64aaa34, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xzz() ;

/// @brief Method get_xzzx, addr 0x64aa56c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzzx() ;

/// @brief Method get_xzzy, addr 0x64aa580, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzzy() ;

/// @brief Method get_xzzz, addr 0x64aa594, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzzz() ;

/// @brief Method get_yx, addr 0x64aabb0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_yx() ;

/// @brief Method get_yxx, addr 0x64aaa44, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yxx() ;

/// @brief Method get_yxxx, addr 0x64aa5a8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxxx() ;

/// @brief Method get_yxxy, addr 0x64aa5bc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxxy() ;

/// @brief Method get_yxxz, addr 0x64aa5c8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxxz() ;

/// @brief Method get_yxy, addr 0x64aaa50, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yxy() ;

/// @brief Method get_yxyx, addr 0x64aa5dc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxyx() ;

/// @brief Method get_yxyy, addr 0x64aa5ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxyy() ;

/// @brief Method get_yxyz, addr 0x64aa5fc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxyz() ;

/// @brief Method get_yxz, addr 0x64aaa5c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yxz() ;

/// @brief Method get_yxzx, addr 0x64aa610, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxzx() ;

/// @brief Method get_yxzy, addr 0x64aa628, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxzy() ;

/// @brief Method get_yxzz, addr 0x64aa63c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxzz() ;

/// @brief Method get_yy, addr 0x64aabc8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_yy() ;

/// @brief Method get_yyx, addr 0x64aaa7c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yyx() ;

/// @brief Method get_yyxx, addr 0x64aa650, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyxx() ;

/// @brief Method get_yyxy, addr 0x64aa66c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyxy() ;

/// @brief Method get_yyxz, addr 0x64aa67c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyxz() ;

/// @brief Method get_yyy, addr 0x64aaa88, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yyy() ;

/// @brief Method get_yyyx, addr 0x64aa690, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyyx() ;

/// @brief Method get_yyyy, addr 0x64aa6a0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyyy() ;

/// @brief Method get_yyyz, addr 0x64aa6b0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyyz() ;

/// @brief Method get_yyz, addr 0x64aaa94, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yyz() ;

/// @brief Method get_yyzx, addr 0x64aa6c0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyzx() ;

/// @brief Method get_yyzy, addr 0x64aa6d4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyzy() ;

/// @brief Method get_yyzz, addr 0x64aa6e4, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyzz() ;

/// @brief Method get_yz, addr 0x64aabd4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_yz() ;

/// @brief Method get_yzx, addr 0x64aaaa0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yzx() ;

/// @brief Method get_yzxx, addr 0x64aa700, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzxx() ;

/// @brief Method get_yzxy, addr 0x64aa710, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzxy() ;

/// @brief Method get_yzxz, addr 0x64aa724, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzxz() ;

/// @brief Method get_yzy, addr 0x64aaabc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yzy() ;

/// @brief Method get_yzyx, addr 0x64aa738, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzyx() ;

/// @brief Method get_yzyy, addr 0x64aa74c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzyy() ;

/// @brief Method get_yzyz, addr 0x64aa75c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzyz() ;

/// @brief Method get_yzz, addr 0x64aaac8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yzz() ;

/// @brief Method get_yzzx, addr 0x64aa768, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzzx() ;

/// @brief Method get_yzzy, addr 0x64aa77c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzzy() ;

/// @brief Method get_yzzz, addr 0x64aa78c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzzz() ;

/// @brief Method get_zx, addr 0x64aabe4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_zx() ;

/// @brief Method get_zxx, addr 0x64aaad4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zxx() ;

/// @brief Method get_zxxx, addr 0x64aa79c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxxx() ;

/// @brief Method get_zxxy, addr 0x64aa7b4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxxy() ;

/// @brief Method get_zxxz, addr 0x64aa7c8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxxz() ;

/// @brief Method get_zxy, addr 0x64aaae4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zxy() ;

/// @brief Method get_zxyx, addr 0x64aa7dc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxyx() ;

/// @brief Method get_zxyy, addr 0x64aa7f4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxyy() ;

/// @brief Method get_zxyz, addr 0x64aa808, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxyz() ;

/// @brief Method get_zxz, addr 0x64aab04, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zxz() ;

/// @brief Method get_zxzx, addr 0x64aa81c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxzx() ;

/// @brief Method get_zxzy, addr 0x64aa830, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxzy() ;

/// @brief Method get_zxzz, addr 0x64aa844, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxzz() ;

/// @brief Method get_zy, addr 0x64aac04, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_zy() ;

/// @brief Method get_zyx, addr 0x64aab14, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zyx() ;

/// @brief Method get_zyxx, addr 0x64aa858, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyxx() ;

/// @brief Method get_zyxy, addr 0x64aa86c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyxy() ;

/// @brief Method get_zyxz, addr 0x64aa880, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyxz() ;

/// @brief Method get_zyy, addr 0x64aab34, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zyy() ;

/// @brief Method get_zyyx, addr 0x64aa894, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyyx() ;

/// @brief Method get_zyyy, addr 0x64aa8a8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyyy() ;

/// @brief Method get_zyyz, addr 0x64aa8b8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyyz() ;

/// @brief Method get_zyz, addr 0x64aab40, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zyz() ;

/// @brief Method get_zyzx, addr 0x64aa8c4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyzx() ;

/// @brief Method get_zyzy, addr 0x64aa8d8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyzy() ;

/// @brief Method get_zyzz, addr 0x64aa8e8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyzz() ;

/// @brief Method get_zz, addr 0x64aac1c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_zz() ;

/// @brief Method get_zzx, addr 0x64aab4c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zzx() ;

/// @brief Method get_zzxx, addr 0x64aa8f8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzxx() ;

/// @brief Method get_zzxy, addr 0x64aa90c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzxy() ;

/// @brief Method get_zzxz, addr 0x64aa91c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzxz() ;

/// @brief Method get_zzy, addr 0x64aab5c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zzy() ;

/// @brief Method get_zzyx, addr 0x64aa930, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzyx() ;

/// @brief Method get_zzyy, addr 0x64aa944, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzyy() ;

/// @brief Method get_zzyz, addr 0x64aa960, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzyz() ;

/// @brief Method get_zzz, addr 0x64aab68, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zzz() ;

/// @brief Method get_zzzx, addr 0x64aa970, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzzx() ;

/// @brief Method get_zzzy, addr 0x64aa984, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzzy() ;

/// @brief Method get_zzzz, addr 0x64aa994, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzzz() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int3>* i___System__IEquatable_1___Unity__Mathematics__int3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x64a9e10, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Addition, addr 0x64a9e2c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x64a9e44, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Addition(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x64aa2ec, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_BitwiseAnd(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x64aa2f8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_BitwiseAnd(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x64aa310, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x64aa32c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_BitwiseOr(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x64aa338, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_BitwiseOr(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x64aa350, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Decrement, addr 0x64a9f88, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Decrement(::Unity::Mathematics::int3  val) ;

/// @brief Method op_Division, addr 0x64a9eb0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Division, addr 0x64a9ecc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x64a9ee4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Division(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Equality, addr 0x64aa1e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Equality, addr 0x64aa210, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x64aa238, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x64aa36c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_ExclusiveOr(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x64aa378, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_ExclusiveOr(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x64aa390, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Explicit, addr 0x64a9cd8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::bool3  v) ;

/// @brief Method op_Explicit, addr 0x64a9d84, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::double3  v) ;

/// @brief Method op_Explicit, addr 0x64a9d24, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::float3  v) ;

/// @brief Method op_Explicit, addr 0x64a9cfc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::uint3  v) ;

/// @brief Method op_Explicit, addr 0x64a9cbc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(bool  v) ;

/// @brief Method op_Explicit, addr 0x64a9d64, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(double_t  v) ;

/// @brief Method op_Explicit, addr 0x64a9d04, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(float_t  v) ;

/// @brief Method op_Explicit, addr 0x64a9cf0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x64aa09c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64aa0c8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64aa0f0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64aa118, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64aa144, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64aa16c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Implicit, addr 0x64a9cb0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Implicit___Unity__Mathematics__int3(int32_t  v) ;

/// @brief Method op_Increment, addr 0x64a9f6c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Increment(::Unity::Mathematics::int3  val) ;

/// @brief Method op_Inequality, addr 0x64aa260, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Inequality, addr 0x64aa290, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x64aa2b8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_LeftShift, addr 0x64aa1b0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_LeftShift(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x64a9fa4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_LessThan, addr 0x64a9fd0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x64a9ff8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64aa020, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64aa04c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64aa074, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Modulus, addr 0x64a9efc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Modulus(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Modulus, addr 0x64a9f24, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Modulus(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x64a9f48, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Multiply, addr 0x64a9dc4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Multiply, addr 0x64a9de0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x64a9df8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_OnesComplement, addr 0x64aa2e0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_OnesComplement(::Unity::Mathematics::int3  val) ;

/// @brief Method op_RightShift, addr 0x64aa1c8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_RightShift(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x64a9e60, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Subtraction, addr 0x64a9e7c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x64a9e94, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x64aa194, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_UnaryNegation(::Unity::Mathematics::int3  val) ;

/// @brief Method op_UnaryPlus, addr 0x64aa1a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_UnaryPlus(::Unity::Mathematics::int3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::int3  value) ;

/// @brief Method set_Item, addr 0x64aac30, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, int32_t  value) ;

/// @brief Method set_xy, addr 0x64aab88, size 0x8, virtual false, abstract: false, final false
inline void set_xy(::Unity::Mathematics::int2  value) ;

/// @brief Method set_xyz, addr 0x64aa9f4, size 0x10, virtual false, abstract: false, final false
inline void set_xyz(::Unity::Mathematics::int3  value) ;

/// @brief Method set_xz, addr 0x64aaba0, size 0x10, virtual false, abstract: false, final false
inline void set_xz(::Unity::Mathematics::int2  value) ;

/// @brief Method set_xzy, addr 0x64aaa24, size 0x10, virtual false, abstract: false, final false
inline void set_xzy(::Unity::Mathematics::int3  value) ;

/// @brief Method set_yx, addr 0x64aabbc, size 0xc, virtual false, abstract: false, final false
inline void set_yx(::Unity::Mathematics::int2  value) ;

/// @brief Method set_yxz, addr 0x64aaa6c, size 0x10, virtual false, abstract: false, final false
inline void set_yxz(::Unity::Mathematics::int3  value) ;

/// @brief Method set_yz, addr 0x64aabdc, size 0x8, virtual false, abstract: false, final false
inline void set_yz(::Unity::Mathematics::int2  value) ;

/// @brief Method set_yzx, addr 0x64aaab0, size 0xc, virtual false, abstract: false, final false
inline void set_yzx(::Unity::Mathematics::int3  value) ;

/// @brief Method set_zx, addr 0x64aabf4, size 0x10, virtual false, abstract: false, final false
inline void set_zx(::Unity::Mathematics::int2  value) ;

/// @brief Method set_zxy, addr 0x64aaaf4, size 0x10, virtual false, abstract: false, final false
inline void set_zxy(::Unity::Mathematics::int3  value) ;

/// @brief Method set_zy, addr 0x64aac10, size 0xc, virtual false, abstract: false, final false
inline void set_zy(::Unity::Mathematics::int2  value) ;

/// @brief Method set_zyx, addr 0x64aab24, size 0x10, virtual false, abstract: false, final false
inline void set_zyx(::Unity::Mathematics::int3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int3() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: None }]
constexpr int3(int32_t  x, int32_t  y, int32_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 int32_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, z) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3, 0xc>, "Size mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::int3_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3_DebuggerProxy*, "Unity.Mathematics", "int3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3, "Unity.Mathematics", "int3");
