#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x3)
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
struct double3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x3);
// Dependencies Unity.Mathematics.double3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3x3
struct CORDL_TYPE double3x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double3  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x48 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::double3x3  identity;

/// @brief Field zero, offset 0xffffffff, size 0x48 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double3x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double3x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x6473598, size 0xfc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x64734fc, size 0x9c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method GetHashCode, addr 0x6473694, size 0xe0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x6473774, size 0x2e0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x6473a54, size 0x2dc, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x6471fc8, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2) ;

/// @brief Method .ctor, addr 0x6471fec, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22) ;

/// @brief Method .ctor, addr 0x6472048, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method .ctor, addr 0x64721c8, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x3  v) ;

/// @brief Method .ctor, addr 0x64720e0, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x3  v) ;

/// @brief Method .ctor, addr 0x6472154, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method .ctor, addr 0x6472020, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x6472008, size 0x18, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x64721ac, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x64720c4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x6472138, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double3x3 getStaticF_identity() ;

static inline ::Unity::Mathematics::double3x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x64734f0, size 0xc, virtual false, abstract: false, final false
inline ::ByRef<::Unity::Mathematics::double3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x3>* i___System__IEquatable_1___Unity__Mathematics__double3x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x647248c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Addition(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Addition, addr 0x64724c8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Addition(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x64724fc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Addition(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Decrement, addr 0x64729c8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Decrement(::Unity::Mathematics::double3x3  val) ;

/// @brief Method op_Division, addr 0x64725d4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Division(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Division, addr 0x6472610, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Division(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x6472644, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Division(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Equality, addr 0x6473168, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Equality, addr 0x647320c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x647329c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Explicit, addr 0x6472254, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Explicit___Unity__Mathematics__double3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method op_Explicit, addr 0x647222c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Explicit___Unity__Mathematics__double3x3(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x6472d94, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x6472e38, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x6472ec8, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x6472f58, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x6472ffc, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x647308c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Implicit, addr 0x64723c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method op_Implicit, addr 0x64722e8, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method op_Implicit, addr 0x6472354, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method op_Implicit, addr 0x6472214, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(double_t  v) ;

/// @brief Method op_Implicit, addr 0x64723a4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x64722cc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x6472338, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x6472984, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Increment(::Unity::Mathematics::double3x3  val) ;

/// @brief Method op_Inequality, addr 0x647332c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Inequality, addr 0x64733d0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x6473460, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x6472a0c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x6472ab0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x6472b40, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6472bd0, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6472c74, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6472d04, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x6472678, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Modulus(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x6472788, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Modulus(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x647288c, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Modulus(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x64723f0, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Multiply(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x647242c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Multiply(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x647245c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Multiply(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x6472530, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Subtraction(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x647256c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Subtraction(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x64725a0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x647311c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_UnaryNegation(::Unity::Mathematics::double3x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x647314c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_UnaryPlus(::Unity::Mathematics::double3x3  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::double3x3  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::double3x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double3x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }]
constexpr double3x3(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field c0, offset: 0x0, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c0;

/// @brief Field c1, offset: 0x18, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c1;

/// @brief Field c2, offset: 0x30, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double3x3, 0x48>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double3x3, "Unity.Mathematics", "double3x3");
