#pragma once
// IWYU pragma private; include "GlobalNamespace/ExplicitContentWarningViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompletableViewController_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
CORDL_MODULE_EXPORT(ExplicitContentWarningViewController)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class ExplicitContentWarningViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExplicitContentWarningViewController);
// Dependencies CompletableViewController`1<T>, PlayerSensitivityFlag
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExplicitContentWarningViewController
class CORDL_TYPE ExplicitContentWarningViewController : public ::GlobalNamespace::CompletableViewController_1<::GlobalNamespace::PlayerSensitivityFlag> {
public:
  // Declarations
  /// @brief Field _continueButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _toggleExplicit, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleExplicit, put = __cordl_internal_set__toggleExplicit)) ::UnityW<::UnityEngine::UI::Toggle> _toggleExplicit;

  /// @brief Method DidActivate, addr 0x580f294, size 0xec, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x580f380, size 0x34, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleClickedEvent, addr 0x580f3b4, size 0x68, virtual false, abstract: false, final false
  inline void HandleClickedEvent();

  static inline ::GlobalNamespace::ExplicitContentWarningViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggleExplicit() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggleExplicit();

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__toggleExplicit(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x580f41c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExplicitContentWarningViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExplicitContentWarningViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExplicitContentWarningViewController(ExplicitContentWarningViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExplicitContentWarningViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExplicitContentWarningViewController(ExplicitContentWarningViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6479 };

  /// @brief Field _toggleExplicit, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____toggleExplicit;

  /// @brief Field _continueButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____toggleExplicit) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____continueButton) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExplicitContentWarningViewController, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExplicitContentWarningViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExplicitContentWarningViewController*, "", "ExplicitContentWarningViewController");
