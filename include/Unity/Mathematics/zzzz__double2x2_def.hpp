#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x2)
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
struct bool2x2;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x2);
// Dependencies Unity.Mathematics.double2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2x2
struct CORDL_TYPE double2x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double2  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::double2x2  identity;

/// @brief Field zero, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double2x2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double2x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x64e0328, size 0xac, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x64e02ec, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method GetHashCode, addr 0x64e03d4, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x64e0448, size 0x1a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x64e05e8, size 0x19c, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x64dfa88, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1) ;

/// @brief Method .ctor, addr 0x64dfa94, size 0xc, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m10, double_t  m11) ;

/// @brief Method .ctor, addr 0x64dfac8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method .ctor, addr 0x64dfb74, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2x2  v) ;

/// @brief Method .ctor, addr 0x64dfb0c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x2  v) ;

/// @brief Method .ctor, addr 0x64dfb40, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method .ctor, addr 0x64dfaac, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x64dfaa0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x64dfb64, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x64dfafc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x64dfb30, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double2x2 getStaticF_identity() ;

static inline ::Unity::Mathematics::double2x2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x64e02e4, size 0x8, virtual false, abstract: false, final false
inline ::ByRef<::Unity::Mathematics::double2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x2>* i___System__IEquatable_1___Unity__Mathematics__double2x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x64dfcb4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Addition(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Addition, addr 0x64dfcc8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Addition(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x64dfcdc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Addition(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Decrement, addr 0x64dff0c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Decrement(::Unity::Mathematics::double2x2  val) ;

/// @brief Method op_Division, addr 0x64dfd34, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Division(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Division, addr 0x64dfd48, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Division(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x64dfd5c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Division(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Equality, addr 0x64e01ac, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Equality, addr 0x64e01e0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x64e0214, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Explicit, addr 0x64dfbc0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Explicit___Unity__Mathematics__double2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method op_Explicit, addr 0x64dfba0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Explicit___Unity__Mathematics__double2x2(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x64e005c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64e0090, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x64e00c4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64e00f8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64e012c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x64e0160, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Implicit, addr 0x64dfc60, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method op_Implicit, addr 0x64dfc00, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method op_Implicit, addr 0x64dfc30, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method op_Implicit, addr 0x64dfb90, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(double_t  v) ;

/// @brief Method op_Implicit, addr 0x64dfc4c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(float_t  v) ;

/// @brief Method op_Implicit, addr 0x64dfbec, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x64dfc1c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x64dfef4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Increment(::Unity::Mathematics::double2x2  val) ;

/// @brief Method op_Inequality, addr 0x64e0248, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Inequality, addr 0x64e027c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x64e02b0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_LessThan, addr 0x64dff24, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_LessThan, addr 0x64dff58, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x64dff8c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64dffc0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64dfff4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x64e0028, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x64dfd74, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Modulus(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x64dfe00, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Modulus(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x64dfe7c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Modulus(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x64dfc74, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Multiply(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x64dfc88, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Multiply(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x64dfc9c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Multiply(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x64dfcf4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Subtraction(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x64dfd08, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Subtraction(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x64dfd1c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x64e0194, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_UnaryNegation(::Unity::Mathematics::double2x2  val) ;

/// @brief Method op_UnaryPlus, addr 0x64e01a8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_UnaryPlus(::Unity::Mathematics::double2x2  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::double2x2  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::double2x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double2x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }]
constexpr double2x2(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::double2  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::double2  c1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x2, c1) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2x2, 0x20>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2x2, "Unity.Mathematics", "double2x2");
