#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool2x4, "Unity.Mathematics", "bool2x4");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
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

  /// @brief Method Equals, addr 0x6a8e710, size 0xf8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a8e67c, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method GetHashCode, addr 0x6a8e808, size 0xc0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a8e8c8, size 0x2a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6a8e0c8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method .ctor, addr 0x6a8e0dc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13);

  /// @brief Method .ctor, addr 0x6a8e128, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x6a8e674, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::bool2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2x4>* i___System__IEquatable_1___Unity__Mathematics__bool2x4_();

  /// @brief Method op_BitwiseAnd, addr 0x6a8e3d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a8e3e4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a8e438, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a8e484, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a8e490, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a8e4fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Equality, addr 0x6a8e160, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Equality, addr 0x6a8e170, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x6a8e218, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a8e568, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a8e574, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a8e5f4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Implicit, addr 0x6a8e144, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Implicit___Unity__Mathematics__bool2x4(bool v);

  /// @brief Method op_Inequality, addr 0x6a8e2c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::bool2x4 lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_Inequality, addr 0x6a8e2cc, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::bool2x4 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x6a8e34c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(bool lhs, ::Unity::Mathematics::bool2x4 rhs);

  /// @brief Method op_LogicalNot, addr 0x6a8e3cc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LogicalNot(::Unity::Mathematics::bool2x4 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool2x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool2", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None, comment: None }, CppParam { name: "c3", ty:
  // "::Unity::Mathematics::bool2", modifiers: "", def_value: None, comment: None }]
  constexpr bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13381 };

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

static_assert(sizeof(::Unity::Mathematics::bool2x4) == 0x8, "Size mismatch!");

} // namespace Unity::Mathematics
