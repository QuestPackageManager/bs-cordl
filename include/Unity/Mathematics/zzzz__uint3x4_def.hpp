#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint3x4)
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
struct bool3x4;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct uint3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint3x4);
// Dependencies Unity.Mathematics.uint3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint3x4
struct CORDL_TYPE uint3x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::uint3  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x30 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::uint3x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint3x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x6459c38, size 0x12c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x6459b6c, size 0xcc, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method GetHashCode, addr 0x6459d64, size 0xdc, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x6459e40, size 0x3a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x645a1e0, size 0x39c, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x6457308, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2, ::Unity::Mathematics::uint3  c3) ;

/// @brief Method .ctor, addr 0x6457334, size 0x38, virtual false, abstract: false, final false
inline void _ctor(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23) ;

/// @brief Method .ctor, addr 0x64573c8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method .ctor, addr 0x6457630, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3x4  v) ;

/// @brief Method .ctor, addr 0x64574e4, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x4  v) ;

/// @brief Method .ctor, addr 0x6457468, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x4  v) ;

/// @brief Method .ctor, addr 0x6457398, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x64575f8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x64574ac, size 0x38, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x645743c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x645736c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::uint3x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x6459b60, size 0xc, virtual false, abstract: false, final false
inline ::ByRef<::Unity::Mathematics::uint3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3x4>* i___System__IEquatable_1___Unity__Mathematics__uint3x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x6457cc8, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Addition(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Addition, addr 0x6457d8c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Addition(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Addition, addr 0x6457e08, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Addition(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x64596ec, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x6459770, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x64597ec, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x6459868, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x64598ec, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x6459968, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Decrement, addr 0x6458550, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Decrement(::Unity::Mathematics::uint3x4  val) ;

/// @brief Method op_Division, addr 0x6458040, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Division(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Division, addr 0x64580dc, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Division(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Division, addr 0x6458158, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Division(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Equality, addr 0x6459188, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Equality, addr 0x645928c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Equality, addr 0x6459348, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x64599e4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x6459a68, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x6459ae4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Explicit, addr 0x64577a0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method op_Explicit, addr 0x6457a00, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method op_Explicit, addr 0x64578bc, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method op_Explicit, addr 0x6457840, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method op_Explicit, addr 0x6457770, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x64579c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(double_t  v) ;

/// @brief Method op_Explicit, addr 0x6457884, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(float_t  v) ;

/// @brief Method op_Explicit, addr 0x6457814, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(int32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x6458ae8, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x6458bdc, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x6458c98, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x6458d54, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x6458e48, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x6458f08, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Implicit, addr 0x6457744, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Implicit___Unity__Mathematics__uint3x4(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x6458498, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Increment(::Unity::Mathematics::uint3x4  val) ;

/// @brief Method op_Inequality, addr 0x6459404, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Inequality, addr 0x6459508, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x64595c8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_LeftShift, addr 0x6459090, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_LeftShift(::Unity::Mathematics::uint3x4  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x6458608, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_LessThan, addr 0x64586fc, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x64587b8, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6458874, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6458968, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x6458a28, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Modulus, addr 0x64581d4, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Modulus(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Modulus, addr 0x6458300, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Modulus(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x64583cc, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Modulus(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Multiply, addr 0x6457b0c, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Multiply(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Multiply, addr 0x6457bd0, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Multiply(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x6457c4c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Multiply(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_OnesComplement, addr 0x6459688, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_OnesComplement(::Unity::Mathematics::uint3x4  val) ;

/// @brief Method op_RightShift, addr 0x645910c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_RightShift(::Unity::Mathematics::uint3x4  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x6457e84, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Subtraction(::Unity::Mathematics::uint3x4  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x6457f48, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Subtraction(::Unity::Mathematics::uint3x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x6457fc4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_Subtraction(uint32_t  lhs, ::Unity::Mathematics::uint3x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x6458fc8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_UnaryNegation(::Unity::Mathematics::uint3x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x645904c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 op_UnaryPlus(::Unity::Mathematics::uint3x4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::uint3x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint3x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }]
constexpr uint3x4(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2, ::Unity::Mathematics::uint3  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::uint3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::uint3  c1;

/// @brief Field c2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::uint3  c2;

/// @brief Field c3, offset: 0x24, size: 0xc, def value: None
 ::Unity::Mathematics::uint3  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c3) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint3x4, 0x30>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint3x4, "Unity.Mathematics", "uint3x4");
