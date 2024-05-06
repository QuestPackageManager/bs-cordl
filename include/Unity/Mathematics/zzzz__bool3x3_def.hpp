#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: Unity.Mathematics::bool3x3
// SizeInfo { instance_size: 9, native_size: 9, calculated_instance_size: 9, calculated_native_size: 25, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool3x3
struct CORDL_TYPE bool3x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::bool3 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool3x3>*();

  /// @brief Method Equals, addr 0x31c4398, size 0x120, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x31c42e0, size 0xb8, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method GetHashCode, addr 0x31c44b8, size 0x12c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x31c45e4, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x31c38e0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2);

  /// @brief Method .ctor, addr 0x31c3908, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22);

  /// @brief Method .ctor, addr 0x31c395c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x31c42d0, size 0x10, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::bool3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3x3>* i___System__IEquatable_1___Unity__Mathematics__bool3x3_();

  /// @brief Method op_BitwiseAnd, addr 0x31c3dc0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseAnd(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31c3e44, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseAnd(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31c3ebc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31c3f34, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseOr(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31c3fb0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseOr(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x31c4048, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_Equality, addr 0x31c39bc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_Equality, addr 0x31c3a44, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x31c3afc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31c40e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_ExclusiveOr(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31c4160, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_ExclusiveOr(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31c4218, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_Implicit, addr 0x31c3980, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Implicit___Unity__Mathematics__bool3x3(bool v);

  /// @brief Method op_Inequality, addr 0x31c3bb4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::bool3x3 lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_Inequality, addr 0x31c3c30, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::bool3x3 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x31c3cc4, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(bool lhs, ::Unity::Mathematics::bool3x3 rhs);

  /// @brief Method op_LogicalNot, addr 0x31c3d58, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LogicalNot(::Unity::Mathematics::bool3x3 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool3x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }]
  constexpr bool3x3(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c0;

  /// @brief Field c1, offset: 0x3, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c1;

  /// @brief Field c2, offset: 0x6, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x9 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool3x3, 0x9>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x3, c1) == 0x3, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x3, c2) == 0x6, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool3x3, "Unity.Mathematics", "bool3x3");
