#pragma once
// IWYU pragma private; include "GlobalNamespace\NoUserAgeWarningViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompletableViewController_def.hpp"
CORDL_MODULE_EXPORT(NoUserAgeWarningViewController)
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class NoUserAgeWarningViewController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoUserAgeWarningViewController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoUserAgeWarningViewController*, "", "NoUserAgeWarningViewController");
// Dependencies CompletableViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoUserAgeWarningViewController
class CORDL_TYPE NoUserAgeWarningViewController : public ::GlobalNamespace::CompletableViewController {
public:
  // Declarations
  /// @brief Field _confirmButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__confirmButton, put = __cordl_internal_set__confirmButton)) ::UnityW<::UnityEngine::UI::Button> _confirmButton;

  /// @brief Method DidActivate, addr 0x5a1c194, size 0xec, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x5a1c280, size 0x34, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::GlobalNamespace::NoUserAgeWarningViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__confirmButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__confirmButton();

  constexpr void __cordl_internal_set__confirmButton(::UnityW<::UnityEngine::UI::Button> value);

  /// @brief Method .ctor, addr 0x5a1c2b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoUserAgeWarningViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoUserAgeWarningViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoUserAgeWarningViewController(NoUserAgeWarningViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoUserAgeWarningViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoUserAgeWarningViewController(NoUserAgeWarningViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6452 };

  /// @brief Field _confirmButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____confirmButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoUserAgeWarningViewController, ____confirmButton) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NoUserAgeWarningViewController) == 0x88, "Size mismatch!");

} // namespace GlobalNamespace
