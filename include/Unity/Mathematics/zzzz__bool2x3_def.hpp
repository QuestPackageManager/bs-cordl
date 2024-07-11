#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool2x3)
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
struct bool2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool2x3);
// Type: Unity.Mathematics::bool2x3
// SizeInfo { instance_size: 6, native_size: 6, calculated_instance_size: 6, calculated_native_size: 22, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool2x3
struct CORDL_TYPE bool2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::bool2 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool2x3>*();

  /// @brief Method Equals, addr 0x31f80f8, size 0xd4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x31f808c, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method GetHashCode, addr 0x31f81cc, size 0xc8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x31f8294, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x31f7c80, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2);

  /// @brief Method .ctor, addr 0x31f7c90, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12);

  /// @brief Method .ctor, addr 0x31f7cc4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x31f8084, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::bool2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2x3>* i___System__IEquatable_1___Unity__Mathematics__bool2x3_();

  /// @brief Method op_BitwiseAnd, addr 0x31f7e98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseAnd(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31f7eac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseAnd(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31f7ed0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31f7ef4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseOr(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31f7f08, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseOr(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x31f7f54, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_Equality, addr 0x31f7cf0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_Equality, addr 0x31f7d04, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x31f7d68, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31f7fa8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_ExclusiveOr(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31f7fbc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_ExclusiveOr(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31f8020, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_Implicit, addr 0x31f7cdc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Implicit___Unity__Mathematics__bool2x3(bool v);

  /// @brief Method op_Inequality, addr 0x31f7dcc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::bool2x3 lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_Inequality, addr 0x31f7de0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::bool2x3 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x31f7e34, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(bool lhs, ::Unity::Mathematics::bool2x3 rhs);

  /// @brief Method op_LogicalNot, addr 0x31f7e88, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LogicalNot(::Unity::Mathematics::bool2x3 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }]
  constexpr bool2x3(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c0;

  /// @brief Field c1, offset: 0x2, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c1;

  /// @brief Field c2, offset: 0x4, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool2x3, 0x6>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x3, c1) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x3, c2) == 0x4, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool2x3, "Unity.Mathematics", "bool2x3");
