#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool4x4)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool4x4);
// Dependencies Unity.Mathematics.bool4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool4x4
struct CORDL_TYPE bool4x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::bool4  Item[];

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool4x4>*() ;

/// @brief Method Equals, addr 0x646adfc, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x646ace8, size 0x114, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method GetHashCode, addr 0x646ae80, size 0x16c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x646afec, size 0x4a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x646a2cc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) ;

/// @brief Method .ctor, addr 0x646a2d8, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23, bool  m30, bool  m31, bool  m32, bool  m33) ;

/// @brief Method .ctor, addr 0x646a3ac, size 0x18, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method get_Item, addr 0x646ace0, size 0x8, virtual false, abstract: false, final false
inline ::ByRef<::Unity::Mathematics::bool4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4x4>* i___System__IEquatable_1___Unity__Mathematics__bool4x4_() ;

/// @brief Method op_BitwiseAnd, addr 0x646a924, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_BitwiseAnd(::Unity::Mathematics::bool4x4  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x646a938, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_BitwiseAnd(::Unity::Mathematics::bool4x4  lhs, bool  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x646a970, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_BitwiseAnd(bool  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x646a9a8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_BitwiseOr(::Unity::Mathematics::bool4x4  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x646a9bc, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_BitwiseOr(::Unity::Mathematics::bool4x4  lhs, bool  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x646aa24, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_BitwiseOr(bool  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_Equality, addr 0x646a3d8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::bool4x4  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_Equality, addr 0x646a3f0, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::bool4x4  lhs, bool  rhs) ;

/// @brief Method op_Equality, addr 0x646a558, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(bool  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x646aa8c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_ExclusiveOr(::Unity::Mathematics::bool4x4  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x646aaa0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_ExclusiveOr(::Unity::Mathematics::bool4x4  lhs, bool  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x646abc0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_ExclusiveOr(bool  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_Implicit, addr 0x646a3c4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Implicit___Unity__Mathematics__bool4x4(bool  v) ;

/// @brief Method op_Inequality, addr 0x646a6c0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::bool4x4  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_Inequality, addr 0x646a6d4, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::bool4x4  lhs, bool  rhs) ;

/// @brief Method op_Inequality, addr 0x646a7f4, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(bool  lhs, ::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method op_LogicalNot, addr 0x646a914, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LogicalNot(::Unity::Mathematics::bool4x4  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr bool4x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None }]
constexpr bool4x4(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13119};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field c0, offset: 0x0, size: 0x4, def value: None
 ::Unity::Mathematics::bool4  c0;

/// @brief Field c1, offset: 0x4, size: 0x4, def value: None
 ::Unity::Mathematics::bool4  c1;

/// @brief Field c2, offset: 0x8, size: 0x4, def value: None
 ::Unity::Mathematics::bool4  c2;

/// @brief Field c3, offset: 0xc, size: 0x4, def value: None
 ::Unity::Mathematics::bool4  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x4, c1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x4, c2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x4, c3) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool4x4, 0x10>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool4x4, "Unity.Mathematics", "bool4x4");
