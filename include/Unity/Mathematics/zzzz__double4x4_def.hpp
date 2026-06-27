#pragma once
// IWYU pragma private; include "Unity/Mathematics/double4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double4x4)
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
struct bool4x4;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int4x4;
}
namespace Unity::Mathematics {
struct uint4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double4x4);
// Dependencies Unity.Mathematics.double4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double4x4
struct CORDL_TYPE double4x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double4  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x80 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::double4x4  identity;

/// @brief Field zero, offset 0xffffffff, size 0x80 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double4x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double4x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double4x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x64f4464, size 0x16c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x64f4358, size 0x10c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method GetHashCode, addr 0x64f45d0, size 0x190, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x64f4760, size 0x4a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x64f4c00, size 0x49c, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x64f23ac, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2, ::Unity::Mathematics::double4  c3) ;

/// @brief Method .ctor, addr 0x64f23f0, size 0x54, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23, double_t  m30, double_t  m31, double_t  m32, double_t  m33) ;

/// @brief Method .ctor, addr 0x64f249c, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method .ctor, addr 0x64f26c8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  v) ;

/// @brief Method .ctor, addr 0x64f2570, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4x4  v) ;

/// @brief Method .ctor, addr 0x64f261c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method .ctor, addr 0x64f2468, size 0x34, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x64f2444, size 0x24, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x64f26a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x64f2548, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x64f25f4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double4x4 getStaticF_identity() ;

static inline ::Unity::Mathematics::double4x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x64f434c, size 0xc, virtual false, abstract: false, final false
inline ::ByRef<::Unity::Mathematics::double4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double4x4>* i___System__IEquatable_1___Unity__Mathematics__double4x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x64f2ab0, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Addition(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Addition, addr 0x64f2b04, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Addition(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x64f2b4c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Addition(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Decrement, addr 0x64f3274, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Decrement(::Unity::Mathematics::double4x4  val) ;

/// @brief Method op_Division, addr 0x64f2c78, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Division(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Division, addr 0x64f2ccc, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Division(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x64f2d14, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Division(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Equality, addr 0x64f3de4, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Equality, addr 0x64f3ef0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x64f3fc0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Explicit, addr 0x64f2764, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Explicit___Unity__Mathematics__double4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method op_Explicit, addr 0x64f2730, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Explicit___Unity__Mathematics__double4x4(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x64f3824, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64f3930, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64f3a00, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64f3ad0, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64f3bdc, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64f3cac, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Implicit, addr 0x64f2990, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Implicit___Unity__Mathematics__double4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method op_Implicit, addr 0x64f2838, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Implicit___Unity__Mathematics__double4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method op_Implicit, addr 0x64f28e4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Implicit___Unity__Mathematics__double4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method op_Implicit, addr 0x64f270c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Implicit___Unity__Mathematics__double4x4(double_t  v) ;

/// @brief Method op_Implicit, addr 0x64f2968, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Implicit___Unity__Mathematics__double4x4(float_t  v) ;

/// @brief Method op_Implicit, addr 0x64f2810, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Implicit___Unity__Mathematics__double4x4(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x64f28bc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Implicit___Unity__Mathematics__double4x4(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x64f321c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Increment(::Unity::Mathematics::double4x4  val) ;

/// @brief Method op_Inequality, addr 0x64f4090, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Inequality, addr 0x64f419c, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x64f4274, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_LessThan, addr 0x64f32cc, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_LessThan, addr 0x64f33d8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x64f34a8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64f3578, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64f3684, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64f3754, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Modulus, addr 0x64f2d5c, size 0x1a8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Modulus(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Modulus, addr 0x64f2f04, size 0x194, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Modulus(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x64f3098, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Modulus(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x64f29d4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Multiply(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x64f2a28, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Multiply(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x64f2a6c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Multiply(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x64f2b94, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Subtraction(::Unity::Mathematics::double4x4  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x64f2be8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Subtraction(::Unity::Mathematics::double4x4  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x64f2c30, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double4x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x64f3d7c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_UnaryNegation(::Unity::Mathematics::double4x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x64f3dc0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 op_UnaryPlus(::Unity::Mathematics::double4x4  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::double4x4  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::double4x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double4x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }]
constexpr double4x4(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2, ::Unity::Mathematics::double4  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13142};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field c0, offset: 0x0, size: 0x20, def value: None
 ::Unity::Mathematics::double4  c0;

/// @brief Field c1, offset: 0x20, size: 0x20, def value: None
 ::Unity::Mathematics::double4  c1;

/// @brief Field c2, offset: 0x40, size: 0x20, def value: None
 ::Unity::Mathematics::double4  c2;

/// @brief Field c3, offset: 0x60, size: 0x20, def value: None
 ::Unity::Mathematics::double4  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x4, c1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x4, c2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x4, c3) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double4x4, 0x80>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double4x4, "Unity.Mathematics", "double4x4");
