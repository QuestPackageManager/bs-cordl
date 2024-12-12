#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool2x3)
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool2x3);
// Dependencies System.IEquatable`1<T>, Unity.Mathematics.bool2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool2x3
struct CORDL_TYPE bool2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::bool2 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool2x3>*();

  /// @brief Method Equals, addr 0x4655464, size 0xd4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46553f8, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method GetHashCode, addr 0x4655538, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46555fc, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4654fa0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2);

  /// @brief Method .ctor, addr 0x4654fb0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12);

  /// @brief Method .ctor, addr 0x4654fe8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x46553f0, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::bool2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2x3>* i___System__IEquatable_1___Unity__Mathematics__bool2x3_();

  /// @brief Method op_BitwiseAnd, addr 0x46551c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseAnd(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46551d8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseAnd(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4655218, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x4655258, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseOr(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x465526c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseOr(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x46552c0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_Equality, addr 0x4655024, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_Equality, addr 0x4655038, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x465509c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4655314, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_ExclusiveOr(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4655328, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_ExclusiveOr(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x465538c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_Implicit, addr 0x4655008, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Implicit___Unity__Mathematics__bool2x3(bool v);

  /// @brief Method op_Inequality, addr 0x4655100, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_Inequality, addr 0x4655114, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x4655164, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_LogicalNot, addr 0x46551b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LogicalNot(::Unity::Mathematics::bool2x3 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }]
  constexpr bool2x3(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  /// @brief Field c0, offset: 0x0, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c0;

  /// @brief Field c1, offset: 0x2, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c1;

  /// @brief Field c2, offset: 0x4, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x3, c1) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x3, c2) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool2x3, 0x6>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool2x3, "Unity.Mathematics", "bool2x3");
