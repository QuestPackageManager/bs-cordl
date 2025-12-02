#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool2x4)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool2x4);
// Dependencies Unity.Mathematics.bool2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool2x4
struct CORDL_TYPE bool2x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::bool2 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool2x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool2x4>*();

  /// @brief Method Equals, addr 0x63e3be8, size 0xf8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x63e3b54, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method GetHashCode, addr 0x63e3ce0, size 0xc0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x63e3da0, size 0x2a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x63e35a0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method .ctor, addr 0x63e35b4, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13);

  /// @brief Method .ctor, addr 0x63e3600, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x63e3b4c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::bool2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2x4>* i___System__IEquatable_1___Unity__Mathematics__bool2x4_();

  /// @brief Method op_BitwiseAnd, addr 0x63e38b0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x63e38bc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x63e3910, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x63e395c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x63e3968, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x63e39d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Equality, addr 0x63e3638, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Equality, addr 0x63e3648, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x63e36f0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x63e3a40, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x63e3a4c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x63e3acc, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Implicit, addr 0x63e361c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Implicit___Unity__Mathematics__bool2x4(bool v);

  /// @brief Method op_Inequality, addr 0x63e3798, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Inequality, addr 0x63e37a4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x63e3824, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_LogicalNot, addr 0x63e38a4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LogicalNot(::Unity::Mathematics::bool2x4 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool2x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }]
  constexpr bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13101 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field c0, offset: 0x0, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c0;

  /// @brief Field c1, offset: 0x2, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c1;

  /// @brief Field c2, offset: 0x4, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c2;

  /// @brief Field c3, offset: 0x6, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x4, c1) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x4, c2) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x4, c3) == 0x6, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool2x4, 0x8>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool2x4, "Unity.Mathematics", "bool2x4");
