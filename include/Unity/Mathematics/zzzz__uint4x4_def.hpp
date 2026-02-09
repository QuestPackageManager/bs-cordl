#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint4x4)
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
struct double4x4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int4x4;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint4x4);
// Dependencies Unity.Mathematics.uint4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint4x4
struct CORDL_TYPE uint4x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::uint4  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::uint4x4  identity;

/// @brief Field zero, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::uint4x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint4x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint4x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x64662f0, size 0x16c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x64661e4, size 0x10c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method GetHashCode, addr 0x646645c, size 0x114, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x6466570, size 0x4a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x6466a10, size 0x49c, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x646363c, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2, ::Unity::Mathematics::uint4  c3) ;

/// @brief Method .ctor, addr 0x646365c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23, uint32_t  m30, uint32_t  m31, uint32_t  m32, uint32_t  m33) ;

/// @brief Method .ctor, addr 0x64636f0, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method .ctor, addr 0x6463968, size 0x154, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double4x4  v) ;

/// @brief Method .ctor, addr 0x64637ec, size 0x154, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  v) ;

/// @brief Method .ctor, addr 0x64637a0, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4x4  v) ;

/// @brief Method .ctor, addr 0x64636d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x6463940, size 0x28, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x64637c4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x6463784, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x64636b4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::uint4x4 getStaticF_identity() ;

static inline ::Unity::Mathematics::uint4x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x64661dc, size 0x8, virtual false, abstract: false, final false
inline ::ByRef<::Unity::Mathematics::uint4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint4x4>* i___System__IEquatable_1___Unity__Mathematics__uint4x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x64640b8, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Addition(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Addition, addr 0x646418c, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Addition(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Addition, addr 0x6464214, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Addition(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x6465e28, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_BitwiseAnd(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x6465e54, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_BitwiseAnd(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x6465edc, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_BitwiseAnd(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x6465f64, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_BitwiseOr(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x6465f90, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_BitwiseOr(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x6466018, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_BitwiseOr(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Decrement, addr 0x6464ae8, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Decrement(::Unity::Mathematics::uint4x4  val) ;

/// @brief Method op_Division, addr 0x6464480, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Division(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Division, addr 0x6464558, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Division(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Division, addr 0x64645ec, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Division(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Equality, addr 0x646581c, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Equality, addr 0x6465938, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Equality, addr 0x6465a24, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x64660a0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_ExclusiveOr(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x64660cc, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_ExclusiveOr(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x6466154, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_ExclusiveOr(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Explicit, addr 0x6463af8, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method op_Explicit, addr 0x6463d60, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method op_Explicit, addr 0x6463be4, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method op_Explicit, addr 0x6463ba8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method op_Explicit, addr 0x6463ad8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x6463d38, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(double_t  v) ;

/// @brief Method op_Explicit, addr 0x6463bbc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(float_t  v) ;

/// @brief Method op_Explicit, addr 0x6463b8c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Explicit___Unity__Mathematics__uint4x4(int32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x64650e8, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64651e4, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64652d0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64653bc, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64654b8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64655a4, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Implicit, addr 0x6463abc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Implicit___Unity__Mathematics__uint4x4(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x6464a88, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Increment(::Unity::Mathematics::uint4x4  val) ;

/// @brief Method op_Inequality, addr 0x6465b10, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Inequality, addr 0x6465c2c, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x6465d18, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_LeftShift, addr 0x6465700, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_LeftShift(::Unity::Mathematics::uint4x4  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x6464b40, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_LessThan, addr 0x6464c3c, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x6464d28, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6464e14, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6464f10, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6464ffc, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Modulus, addr 0x6464680, size 0x1b8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Modulus(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Modulus, addr 0x6464838, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Modulus(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x6464960, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Modulus(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x6463eb4, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Multiply(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x6463fa8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Multiply(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x6464030, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Multiply(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_OnesComplement, addr 0x6465e04, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_OnesComplement(::Unity::Mathematics::uint4x4  val) ;

/// @brief Method op_RightShift, addr 0x646578c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_RightShift(::Unity::Mathematics::uint4x4  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x646429c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Subtraction(::Unity::Mathematics::uint4x4  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x6464370, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Subtraction(::Unity::Mathematics::uint4x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x64643f8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_Subtraction(uint32_t  lhs, ::Unity::Mathematics::uint4x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x6465690, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_UnaryNegation(::Unity::Mathematics::uint4x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x64656ec, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 op_UnaryPlus(::Unity::Mathematics::uint4x4  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::uint4x4  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::uint4x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint4x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }]
constexpr uint4x4(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2, ::Unity::Mathematics::uint4  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13193};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::uint4  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::uint4  c1;

/// @brief Field c2, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::uint4  c2;

/// @brief Field c3, offset: 0x30, size: 0x10, def value: None
 ::Unity::Mathematics::uint4  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x4, c3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint4x4, 0x40>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint4x4, "Unity.Mathematics", "uint4x4");
