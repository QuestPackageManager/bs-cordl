#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3x3)
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
struct float3x3;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int3x3);
// Dependencies Unity.Mathematics.int3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int3x3
struct CORDL_TYPE int3x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::int3  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x24 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::int3x3  identity;

/// @brief Field zero, offset 0xffffffff, size 0x24 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int3x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int3x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x652235c, size 0xfc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x65222c0, size 0x9c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method GetHashCode, addr 0x6522458, size 0xac, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x6522504, size 0x2e0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x65227e4, size 0x2dc, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x6520450, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2) ;

/// @brief Method .ctor, addr 0x652046c, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22) ;

/// @brief Method .ctor, addr 0x65204d8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method .ctor, addr 0x65206c0, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3x3  v) ;

/// @brief Method .ctor, addr 0x65205c0, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x3  v) ;

/// @brief Method .ctor, addr 0x6520554, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method .ctor, addr 0x65204b0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x6520688, size 0x38, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x6520588, size 0x38, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x652048c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x6520530, size 0x24, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::int3x3 getStaticF_identity() ;

static inline ::Unity::Mathematics::int3x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x65222b4, size 0xc, virtual false, abstract: false, final false
inline ::ByRef<::Unity::Mathematics::int3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x3>* i___System__IEquatable_1___Unity__Mathematics__int3x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x6520bd4, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Addition(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Addition, addr 0x6520c68, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Addition(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x6520cc8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Addition(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x6521f48, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_BitwiseAnd(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x6521fac, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_BitwiseAnd(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x652200c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x652206c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_BitwiseOr(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x65220d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_BitwiseOr(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x6522130, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Decrement, addr 0x652121c, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Decrement(::Unity::Mathematics::int3x3  val) ;

/// @brief Method op_Division, addr 0x6520e7c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Division(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Division, addr 0x6520ef8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Division(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x6520f58, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Division(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Equality, addr 0x6521b30, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Equality, addr 0x6521bf4, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x6521c84, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x6522190, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_ExclusiveOr(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x65221f4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_ExclusiveOr(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x6522254, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Explicit, addr 0x65207d4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method op_Explicit, addr 0x65209b4, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method op_Explicit, addr 0x65208b8, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method op_Explicit, addr 0x652084c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method op_Explicit, addr 0x65207ac, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(bool  v) ;

/// @brief Method op_Explicit, addr 0x652097c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(double_t  v) ;

/// @brief Method op_Explicit, addr 0x6520880, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(float_t  v) ;

/// @brief Method op_Explicit, addr 0x6520828, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x652163c, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x65216e4, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x6521774, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x6521804, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x65218ac, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x6521940, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Implicit, addr 0x6520788, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Implicit___Unity__Mathematics__int3x3(int32_t  v) ;

/// @brief Method op_Increment, addr 0x6521190, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Increment(::Unity::Mathematics::int3x3  val) ;

/// @brief Method op_Inequality, addr 0x6521d14, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Inequality, addr 0x6521dd8, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x6521e6c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_LeftShift, addr 0x6521a68, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_LeftShift(::Unity::Mathematics::int3x3  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x65212a8, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x6521350, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x65213e0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6521470, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6521518, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x65215ac, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x6520fb8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Modulus(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x6521078, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Modulus(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x6521104, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x6520a78, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Multiply(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x6520b0c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Multiply(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x6520b70, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_OnesComplement, addr 0x6521efc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_OnesComplement(::Unity::Mathematics::int3x3  val) ;

/// @brief Method op_RightShift, addr 0x6521acc, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_RightShift(::Unity::Mathematics::int3x3  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x6520d28, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Subtraction(::Unity::Mathematics::int3x3  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x6520dbc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Subtraction(::Unity::Mathematics::int3x3  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x6520e1c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int3x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x65219d0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_UnaryNegation(::Unity::Mathematics::int3x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x6521a34, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 op_UnaryPlus(::Unity::Mathematics::int3x3  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::int3x3  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::int3x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int3x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }]
constexpr int3x3(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13173};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::int3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::int3  c1;

/// @brief Field c2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::int3  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x3, c2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3x3, 0x24>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3x3, "Unity.Mathematics", "int3x3");
