#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool4x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool4x3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool4x3);
// Type: Unity.Mathematics::bool4x3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool4x3
struct CORDL_TYPE bool4x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::bool4 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool4x3>*();

  /// @brief Method Equals, addr 0x3200888, size 0x130, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x32007bc, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method GetHashCode, addr 0x32009b8, size 0x184, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3200b3c, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x32001c0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2);

  /// @brief Method .ctor, addr 0x32001cc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32);

  /// @brief Method .ctor, addr 0x3200240, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x32007b4, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::bool4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4x3>* i___System__IEquatable_1___Unity__Mathematics__bool4x3_();

  /// @brief Method op_BitwiseAnd, addr 0x320051c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_BitwiseAnd(::Unity::Mathematics::bool4x3 lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3200534, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_BitwiseAnd(::Unity::Mathematics::bool4x3 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3200560, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x320058c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_BitwiseOr(::Unity::Mathematics::bool4x3 lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x32005a4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_BitwiseOr(::Unity::Mathematics::bool4x3 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x3200624, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_Equality, addr 0x320026c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::bool4x3 lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_Equality, addr 0x3200284, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::bool4x3 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x3200324, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(bool lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3200674, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_ExclusiveOr(::Unity::Mathematics::bool4x3 lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x320068c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_ExclusiveOr(::Unity::Mathematics::bool4x3 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3200720, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_Implicit, addr 0x3200258, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Implicit___Unity__Mathematics__bool4x3(bool v);

  /// @brief Method op_Inequality, addr 0x32003c4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::bool4x3 lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_Inequality, addr 0x32003dc, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::bool4x3 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x3200470, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(bool lhs, ::Unity::Mathematics::bool4x3 rhs);

  /// @brief Method op_LogicalNot, addr 0x3200504, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LogicalNot(::Unity::Mathematics::bool4x3 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool4x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None }]
  constexpr bool4x3(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x4, def value: None
  ::Unity::Mathematics::bool4 c0;

  /// @brief Field c1, offset: 0x4, size: 0x4, def value: None
  ::Unity::Mathematics::bool4 c1;

  /// @brief Field c2, offset: 0x8, size: 0x4, def value: None
  ::Unity::Mathematics::bool4 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool4x3, 0xc>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x3, c1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x3, c2) == 0x8, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool4x3, "Unity.Mathematics", "bool4x3");
