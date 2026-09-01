#pragma once
// IWYU pragma private; include "Unity\Mathematics\bool3x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool3x2, "Unity.Mathematics", "bool3x2");
// Dependencies Unity.Mathematics.bool3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool3x2
struct CORDL_TYPE bool3x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::bool3 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool3x2>*();

  /// @brief Method Equals, addr 0x6603be4, size 0xdc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6603b74, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method GetHashCode, addr 0x6603cc0, size 0xb8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6603d78, size 0x220, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6603614, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1);

  /// @brief Method .ctor, addr 0x6603630, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21);

  /// @brief Method .ctor, addr 0x660364c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x6603b64, size 0x10, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::bool3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3x2>* i___System__IEquatable_1___Unity__Mathematics__bool3x2_();

  /// @brief Method op_BitwiseAnd, addr 0x660390c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6603934, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6603974, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x66039b4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x66039e0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x6603a24, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_Equality, addr 0x6603694, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_Equality, addr 0x66036cc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x6603754, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6603a68, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6603a94, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6603afc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_Implicit, addr 0x6603678, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Implicit___Unity__Mathematics__bool3x2(bool v);

  /// @brief Method op_Inequality, addr 0x66037dc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::bool3x2 lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_Inequality, addr 0x6603808, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::bool3x2 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x6603870, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(bool lhs, ::Unity::Mathematics::bool3x2 rhs);

  /// @brief Method op_LogicalNot, addr 0x66038d8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LogicalNot(::Unity::Mathematics::bool3x2 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool3x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value:
  // None }]
  constexpr bool3x2(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13135 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  /// @brief Field c0, offset: 0x0, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c0;

  /// @brief Field c1, offset: 0x3, size: 0x3, def value: None
  ::Unity::Mathematics::bool3 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x2, c1) == 0x3, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::bool3x2) == 0x6, "Size mismatch!");

} // namespace Unity::Mathematics
