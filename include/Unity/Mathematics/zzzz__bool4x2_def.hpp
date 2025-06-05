#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool4x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool4x2)
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool4x2);
// Dependencies System.IEquatable`1<T>, Unity.Mathematics.bool4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool4x2
struct CORDL_TYPE bool4x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::bool4 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool4x2>*();

  /// @brief Method Equals, addr 0x4671320, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4671294, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method GetHashCode, addr 0x467140c, size 0xf4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4671500, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4670dc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1);

  /// @brief Method .ctor, addr 0x4670dc8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31);

  /// @brief Method .ctor, addr 0x4670e28, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x467128c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::bool4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4x2>* i___System__IEquatable_1___Unity__Mathematics__bool4x2_();

  /// @brief Method op_BitwiseAnd, addr 0x4671014, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseAnd(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4671020, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseAnd(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4671078, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46710cc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseOr(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46710d8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseOr(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x4671148, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_Equality, addr 0x4670e50, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_Equality, addr 0x4670e5c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x4670ec8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46711b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_ExclusiveOr(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46711c4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_ExclusiveOr(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4671228, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_Implicit, addr 0x4670e3c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Implicit___Unity__Mathematics__bool4x2(bool v);

  /// @brief Method op_Inequality, addr 0x4670f34, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_Inequality, addr 0x4670f40, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x4670fa4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_LogicalNot, addr 0x4671008, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LogicalNot(::Unity::Mathematics::bool4x2 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool4x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value:
  // None }]
  constexpr bool4x2(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9956 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field c0, offset: 0x0, size: 0x4, def value: None
  ::Unity::Mathematics::bool4 c0;

  /// @brief Field c1, offset: 0x4, size: 0x4, def value: None
  ::Unity::Mathematics::bool4 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x2, c1) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool4x2, 0x8>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool4x2, "Unity.Mathematics", "bool4x2");
