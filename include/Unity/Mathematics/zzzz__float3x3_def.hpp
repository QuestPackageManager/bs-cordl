#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x3)
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
struct bool3x3;
}
namespace Unity::Mathematics {
struct double3x3;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x3);
// Dependencies Unity.Mathematics.float3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3x3
struct CORDL_TYPE float3x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float3  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x24 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::float3x3  identity;

/// @brief Field zero, offset 0xffffffff, size 0x24 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float3x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float3x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method AxisAngle, addr 0x64ff768, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 AxisAngle(::Unity::Mathematics::float3  axis, float_t  angle) ;

/// @brief Method Equals, addr 0x64fef1c, size 0xfc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x64fee80, size 0x9c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method Euler, addr 0x65005c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Euler(float_t  x, float_t  y, float_t  z, ::Unity::Mathematics::math_RotationOrder  order) ;

/// @brief Method Euler, addr 0x650017c, size 0x44c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Euler(::Unity::Mathematics::float3  xyz, ::Unity::Mathematics::math_RotationOrder  order) ;

/// @brief Method EulerXYZ, addr 0x64ffd20, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXYZ(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerXYZ, addr 0x64ff8c4, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXYZ(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerXZY, addr 0x64ffddc, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXZY(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerXZY, addr 0x64ff980, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXZY(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerYXZ, addr 0x64ffe8c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYXZ(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerYXZ, addr 0x64ffa30, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYXZ(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerYZX, addr 0x64fff48, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYZX(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerYZX, addr 0x64ffaec, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYZX(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerZXY, addr 0x64ffffc, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZXY(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerZXY, addr 0x64ffba0, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZXY(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerZYX, addr 0x65000c4, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZYX(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerZYX, addr 0x64ffc68, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZYX(::Unity::Mathematics::float3  xyz) ;

/// @brief Method GetHashCode, addr 0x64ff018, size 0x84, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method LookRotation, addr 0x650091c, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 LookRotation(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up) ;

/// @brief Method LookRotationSafe, addr 0x6500a28, size 0x2e8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 LookRotationSafe(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up) ;

/// @brief Method RotateX, addr 0x6500600, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateX(float_t  angle) ;

/// @brief Method RotateY, addr 0x65006e0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateY(float_t  angle) ;

/// @brief Method RotateZ, addr 0x65007d0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateZ(float_t  angle) ;

/// @brief Method Scale, addr 0x65008b0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(float_t  s) ;

/// @brief Method Scale, addr 0x65008f8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(::Unity::Mathematics::float3  v) ;

/// @brief Method Scale, addr 0x65008d4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(float_t  x, float_t  y, float_t  z) ;

/// @brief Method ToString, addr 0x64ff09c, size 0x2e0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x64ff37c, size 0x2dc, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x64fdab8, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method .ctor, addr 0x64ff658, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method .ctor, addr 0x64fdadc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method .ctor, addr 0x64ff68c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::quaternion  q) ;

/// @brief Method .ctor, addr 0x64fdb30, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method .ctor, addr 0x64fdc98, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3x3  v) ;

/// @brief Method .ctor, addr 0x64fdbc0, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x3  v) ;

/// @brief Method .ctor, addr 0x64fdc2c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method .ctor, addr 0x64fdb08, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x64fdc84, size 0x14, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x64fdaf8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x64fdbac, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x64fdc18, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float3x3 getStaticF_identity() ;

static inline ::Unity::Mathematics::float3x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x64fee74, size 0xc, virtual false, abstract: false, final false
inline ::ByRef<::Unity::Mathematics::float3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x3>* i___System__IEquatable_1___Unity__Mathematics__float3x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x64fdf04, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Addition, addr 0x64fdf2c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x64fdf50, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Decrement, addr 0x64fe378, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Decrement(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_Division, addr 0x64fdfe4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Division, addr 0x64fe00c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x64fe030, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Equality, addr 0x64feaec, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Equality, addr 0x64feb90, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x64fec20, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Explicit, addr 0x6500d10, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method op_Explicit, addr 0x64fdd1c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method op_Explicit, addr 0x64fde70, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method op_Explicit, addr 0x64fdcf4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(bool  v) ;

/// @brief Method op_Explicit, addr 0x64fde5c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x64fe730, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64fe7d4, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64fe864, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64fe8f4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64fe998, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64fea28, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Implicit, addr 0x64fdda8, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method op_Implicit, addr 0x64fde0c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method op_Implicit, addr 0x64fdce4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x64fdd94, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x64fddf8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x64fe348, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Increment(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_Inequality, addr 0x64fecb0, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Inequality, addr 0x64fed54, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x64fede4, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x64fe3a8, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x64fe44c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x64fe4dc, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64fe56c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64fe610, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64fe6a0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x64fe054, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x64fe164, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x64fe25c, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x64fde9c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x64fdec4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x64fdee4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x64fdf74, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x64fdf9c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x64fdfc0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x64feab8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_UnaryNegation(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x64fead8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_UnaryPlus(::Unity::Mathematics::float3x3  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::float3x3  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::float3x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float3x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c1;

/// @brief Field c2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3x3, 0x24>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3x3, "Unity.Mathematics", "float3x3");
