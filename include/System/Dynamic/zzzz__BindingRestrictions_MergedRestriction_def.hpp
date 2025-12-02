#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_MergedRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
CORDL_MODULE_EXPORT(BindingRestrictions_MergedRestriction)
namespace System::Dynamic {
class BindingRestrictions;
}
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace GlobalNamespace {
class BindingRestrictions_MergedRestriction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BindingRestrictions_MergedRestriction);
// Dependencies System.Dynamic.BindingRestrictions
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions/MergedRestriction
class CORDL_TYPE BindingRestrictions_MergedRestriction : public ::System::Dynamic::BindingRestrictions {
public:
  // Declarations
  /// @brief Field Left, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Left, put = __cordl_internal_set_Left)) ::System::Dynamic::BindingRestrictions* Left;

  /// @brief Field Right, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Right, put = __cordl_internal_set_Right)) ::System::Dynamic::BindingRestrictions* Right;

  /// @brief Method GetExpression, addr 0x5da5c58, size 0x16c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  static inline ::GlobalNamespace::BindingRestrictions_MergedRestriction* New_ctor(::System::Dynamic::BindingRestrictions* left, ::System::Dynamic::BindingRestrictions* right);

  constexpr ::System::Dynamic::BindingRestrictions* const& __cordl_internal_get_Left() const;

  constexpr ::System::Dynamic::BindingRestrictions*& __cordl_internal_get_Left();

  constexpr ::System::Dynamic::BindingRestrictions* const& __cordl_internal_get_Right() const;

  constexpr ::System::Dynamic::BindingRestrictions*& __cordl_internal_get_Right();

  constexpr void __cordl_internal_set_Left(::System::Dynamic::BindingRestrictions* value);

  constexpr void __cordl_internal_set_Right(::System::Dynamic::BindingRestrictions* value);

  /// @brief Method .ctor, addr 0x5da53a4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Dynamic::BindingRestrictions* left, ::System::Dynamic::BindingRestrictions* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingRestrictions_MergedRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_MergedRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingRestrictions_MergedRestriction(BindingRestrictions_MergedRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_MergedRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingRestrictions_MergedRestriction(BindingRestrictions_MergedRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16595 };

  /// @brief Field Left, offset: 0x10, size: 0x8, def value: None
  ::System::Dynamic::BindingRestrictions* ___Left;

  /// @brief Field Right, offset: 0x18, size: 0x8, def value: None
  ::System::Dynamic::BindingRestrictions* ___Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BindingRestrictions_MergedRestriction, ___Left) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BindingRestrictions_MergedRestriction, ___Right) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BindingRestrictions_MergedRestriction, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BindingRestrictions_MergedRestriction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BindingRestrictions_MergedRestriction*, "System.Dynamic", "BindingRestrictions/MergedRestriction");
