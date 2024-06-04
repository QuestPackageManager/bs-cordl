#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool3x2)
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
struct bool3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool3x2);
// Type: Unity.Mathematics::bool3x2
// SizeInfo { instance_size: 6, native_size: 6, calculated_instance_size: 6, calculated_native_size: 22, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool3x2
struct CORDL_TYPE bool3x2 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::bool3 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool3x2>*();

  /// @brief Method Equals, addr 0x31ea870, size 0xd4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x31ea804, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method GetHashCode, addr 0x31ea944, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x31eaa08, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x31ea368, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1);

  /// @brief Method .ctor, addr 0x31ea384, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21);

  /// @brief Method .ctor, addr 0x31ea3b8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x31ea7f4, size 0x10, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::bool3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3x2>* i___System__IEquatable_1___Unity__Mathematics__bool3x2_();

  /// @brief Method op_BitwiseAnd, addr 0x31ea5a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31ea5bc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31ea604, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31ea64c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31ea660, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x31ea6b8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_Equality, addr 0x31ea3f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_Equality, addr 0x31ea404, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x31ea46c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31ea710, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31ea724, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31ea78c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_Implicit, addr 0x31ea3d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Implicit___Unity__Mathematics__bool3x2(bool v);

  /// @brief Method op_Inequality, addr 0x31ea4d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_Inequality, addr 0x31ea4e8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x31ea540, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_LogicalNot, addr 0x31ea598, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LogicalNot(::Unity::Mathematics::bool3x2 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool3x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value:
  // None }]
  constexpr bool3x2(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c0;

  /// @brief Field c1, offset: 0x3, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool3x2, 0x6>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x2, c1) == 0x3, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool3x2, "Unity.Mathematics", "bool3x2");
