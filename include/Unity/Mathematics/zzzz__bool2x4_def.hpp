#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: Unity.Mathematics::bool2x4
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool2x4
struct CORDL_TYPE bool2x4 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::bool2 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool2x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool2x4>*();

  /// @brief Method Equals, addr 0x31c187c, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x31c17f0, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method GetHashCode, addr 0x31c1968, size 0xfc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x31c1a64, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x31c12e8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method .ctor, addr 0x31c12fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13);

  /// @brief Method .ctor, addr 0x31c1344, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x31c17e8, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::bool2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2x4>* i___System__IEquatable_1___Unity__Mathematics__bool2x4_();

  /// @brief Method op_BitwiseAnd, addr 0x31c1584, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31c1590, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31c15c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31c15f8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31c1604, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x31c166c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Equality, addr 0x31c1370, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Equality, addr 0x31c137c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x31c1400, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31c16d4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31c16e0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31c1764, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Implicit, addr 0x31c1358, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Implicit___Unity__Mathematics__bool2x4(bool v);

  /// @brief Method op_Inequality, addr 0x31c1484, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Inequality, addr 0x31c1490, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x31c1504, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_LogicalNot, addr 0x31c1578, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LogicalNot(::Unity::Mathematics::bool2x4 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool2x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }]
  constexpr bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c0;

  /// @brief Field c1, offset: 0x2, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c1;

  /// @brief Field c2, offset: 0x4, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c2;

  /// @brief Field c3, offset: 0x6, size: 0x2, def value: None
  ::Unity::Mathematics::bool2 c3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool2x4, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x4, c1) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x4, c2) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x4, c3) == 0x6, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool2x4, "Unity.Mathematics", "bool2x4");
