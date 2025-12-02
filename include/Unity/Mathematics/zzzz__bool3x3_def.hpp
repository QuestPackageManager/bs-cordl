#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool3x3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool3x3);
// Dependencies Unity.Mathematics.bool3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool3x3
struct CORDL_TYPE bool3x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::bool3 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool3x3>*();

  /// @brief Method Equals, addr 0x63e6740, size 0x124, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x63e6688, size 0xb8, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method GetHashCode, addr 0x63e6864, size 0x120, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x63e6984, size 0x2e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x63e5be4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2);

  /// @brief Method .ctor, addr 0x63e5c0c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22);

  /// @brief Method .ctor, addr 0x63e5c3c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x63e6678, size 0x10, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::bool3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3x3>* i___System__IEquatable_1___Unity__Mathematics__bool3x3_();

  /// @brief Method op_BitwiseAnd, addr 0x63e618c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseAnd(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x63e6214, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseAnd(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x63e6280, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x63e62ec, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseOr(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x63e6370, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseOr(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x63e63f0, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_Equality, addr 0x63e5cb0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_Equality, addr 0x63e5d38, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x63e5e2c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x63e6470, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_ExclusiveOr(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x63e64f4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_ExclusiveOr(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x63e65b8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_Implicit, addr 0x63e5c70, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Implicit___Unity__Mathematics__bool3x3(bool v);

  /// @brief Method op_Inequality, addr 0x63e5f1c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_Inequality, addr 0x63e5fa0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x63e6064, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_LogicalNot, addr 0x63e6124, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LogicalNot(::Unity::Mathematics::bool3x3 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool3x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }]
  constexpr bool3x3(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13105 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x9 };

  /// @brief Field c0, offset: 0x0, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c0;

  /// @brief Field c1, offset: 0x3, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c1;

  /// @brief Field c2, offset: 0x6, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x3, c1) == 0x3, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x3, c2) == 0x6, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool3x3, 0x9>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool3x3, "Unity.Mathematics", "bool3x3");
