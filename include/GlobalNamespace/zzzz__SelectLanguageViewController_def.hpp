#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectLanguageViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(SelectLanguageViewController)
namespace GlobalNamespace {
class LanguageSettingsController;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectLanguageViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectLanguageViewController);
// Type: ::SelectLanguageViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectLanguageViewController*
class CORDL_TYPE SelectLanguageViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _continueButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton))::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _languageSettingsController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__languageSettingsController,
                      put = __cordl_internal_set__languageSettingsController))::UnityW<::GlobalNamespace::LanguageSettingsController> _languageSettingsController;

  /// @brief Field didChangeLanguageEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeLanguageEvent, put = __cordl_internal_set_didChangeLanguageEvent))::System::Action* didChangeLanguageEvent;

  /// @brief Field didPressContinueButtonEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressContinueButtonEvent, put = __cordl_internal_set_didPressContinueButtonEvent))::System::Action* didPressContinueButtonEvent;

  /// @brief Method DidActivate, addr 0x265db00, size 0x100, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleLanguageSettingsControllerOndropDownValueDidChange, addr 0x265dce0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLanguageSettingsControllerOndropDownValueDidChange();

  static inline ::GlobalNamespace::SelectLanguageViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x265dc00, size 0xe0, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method <DidActivate>b__8_0, addr 0x265dd04, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::UnityW<::GlobalNamespace::LanguageSettingsController> const& __cordl_internal_get__languageSettingsController() const;

  constexpr ::UnityW<::GlobalNamespace::LanguageSettingsController>& __cordl_internal_get__languageSettingsController();

  constexpr ::System::Action*& __cordl_internal_get_didChangeLanguageEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didChangeLanguageEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressContinueButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPressContinueButtonEvent() const;

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__languageSettingsController(::UnityW<::GlobalNamespace::LanguageSettingsController> value);

  constexpr void __cordl_internal_set_didChangeLanguageEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x265dcfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeLanguageEvent, addr 0x265d890, size 0x9c, virtual false, abstract: false, final false
  inline void add_didChangeLanguageEvent(::System::Action* value);

  /// @brief Method add_didPressContinueButtonEvent, addr 0x265d9c8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method remove_didChangeLanguageEvent, addr 0x265d92c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didChangeLanguageEvent(::System::Action* value);

  /// @brief Method remove_didPressContinueButtonEvent, addr 0x265da64, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressContinueButtonEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLanguageViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectLanguageViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLanguageViewController(SelectLanguageViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLanguageViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLanguageViewController(SelectLanguageViewController const&) = delete;

  /// @brief Field _continueButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _languageSettingsController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LanguageSettingsController> ____languageSettingsController;

  /// @brief Field didChangeLanguageEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___didChangeLanguageEvent;

  /// @brief Field didPressContinueButtonEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didPressContinueButtonEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLanguageViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLanguageViewController, ____continueButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLanguageViewController, ____languageSettingsController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLanguageViewController, ___didChangeLanguageEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLanguageViewController, ___didPressContinueButtonEvent) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectLanguageViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLanguageViewController*, "", "SelectLanguageViewController");
