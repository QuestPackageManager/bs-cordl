#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoSetupController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AutoSetupController)
namespace GlobalNamespace {
class AutoSetupData;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ToggleBinder;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class AutoSetupController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutoSetupController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutoSetupController
class CORDL_TYPE AutoSetupController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _autoSetupData, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__autoSetupData, put = __cordl_internal_set__autoSetupData)) ::GlobalNamespace::AutoSetupData* _autoSetupData;

  /// @brief Field _autoStartWhenAllReadyToggle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__autoStartWhenAllReadyToggle, put = __cordl_internal_set__autoStartWhenAllReadyToggle)) ::UnityW<::UnityEngine::UI::Toggle>
      _autoStartWhenAllReadyToggle;

  /// @brief Field _buttonBinder, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _closeButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__closeButton, put = __cordl_internal_set__closeButton)) ::UnityW<::UnityEngine::UI::Button> _closeButton;

  /// @brief Field _forceAutoStartAfterSongSelectionToggle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__forceAutoStartAfterSongSelectionToggle, put = __cordl_internal_set__forceAutoStartAfterSongSelectionToggle)) ::UnityW<::UnityEngine::UI::Toggle>
      _forceAutoStartAfterSongSelectionToggle;

  /// @brief Field _randomSongIfNoneSuggestedToggle, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__randomSongIfNoneSuggestedToggle, put = __cordl_internal_set__randomSongIfNoneSuggestedToggle)) ::UnityW<::UnityEngine::UI::Toggle>
      _randomSongIfNoneSuggestedToggle;

  /// @brief Field _selectBasedOnSuggestionsToggle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__selectBasedOnSuggestionsToggle, put = __cordl_internal_set__selectBasedOnSuggestionsToggle)) ::UnityW<::UnityEngine::UI::Toggle>
      _selectBasedOnSuggestionsToggle;

  /// @brief Field _toggleBinder, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field didFinishEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::AutoSetupData*>* didFinishEvent;

  static inline ::GlobalNamespace::AutoSetupController* New_ctor();

  /// @brief Method OnDisable, addr 0x3b55560, size 0x1c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b5536c, size 0x1f4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Setup, addr 0x3b55364, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::AutoSetupData* autoSetupData);

  /// @brief Method <OnEnable>b__12_0, addr 0x3b55644, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_0();

  /// @brief Method <OnEnable>b__12_1, addr 0x3b55664, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_1(bool isOn);

  /// @brief Method <OnEnable>b__12_2, addr 0x3b55684, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_2(bool isOn);

  /// @brief Method <OnEnable>b__12_3, addr 0x3b556a4, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_3(bool isOn);

  /// @brief Method <OnEnable>b__12_4, addr 0x3b556c4, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_4(bool isOn);

  constexpr ::GlobalNamespace::AutoSetupData* const& __cordl_internal_get__autoSetupData() const;

  constexpr ::GlobalNamespace::AutoSetupData*& __cordl_internal_get__autoSetupData();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__autoStartWhenAllReadyToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__autoStartWhenAllReadyToggle();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__closeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__closeButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__forceAutoStartAfterSongSelectionToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__forceAutoStartAfterSongSelectionToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__randomSongIfNoneSuggestedToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__randomSongIfNoneSuggestedToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__selectBasedOnSuggestionsToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__selectBasedOnSuggestionsToggle();

  constexpr ::HMUI::ToggleBinder* const& __cordl_internal_get__toggleBinder() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::System::Action_1<::GlobalNamespace::AutoSetupData*>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::AutoSetupData*>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__autoSetupData(::GlobalNamespace::AutoSetupData* value);

  constexpr void __cordl_internal_set__autoStartWhenAllReadyToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__closeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__forceAutoStartAfterSongSelectionToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__randomSongIfNoneSuggestedToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__selectBasedOnSuggestionsToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>* value);

  /// @brief Method .ctor, addr 0x3b5557c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b55204, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3b552b4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoSetupController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoSetupController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoSetupController(AutoSetupController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoSetupController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoSetupController(AutoSetupController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5315 };

  /// @brief Field _closeButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____closeButton;

  /// @brief Field _selectBasedOnSuggestionsToggle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____selectBasedOnSuggestionsToggle;

  /// @brief Field _autoStartWhenAllReadyToggle, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____autoStartWhenAllReadyToggle;

  /// @brief Field _forceAutoStartAfterSongSelectionToggle, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____forceAutoStartAfterSongSelectionToggle;

  /// @brief Field _randomSongIfNoneSuggestedToggle, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____randomSongIfNoneSuggestedToggle;

  /// @brief Field didFinishEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::AutoSetupData*>* ___didFinishEvent;

  /// @brief Field _buttonBinder, offset: 0x50, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _toggleBinder, offset: 0x58, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _autoSetupData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::AutoSetupData* ____autoSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____closeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____selectBasedOnSuggestionsToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____autoStartWhenAllReadyToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____forceAutoStartAfterSongSelectionToggle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____randomSongIfNoneSuggestedToggle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ___didFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____buttonBinder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____toggleBinder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____autoSetupData) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutoSetupController, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutoSetupController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoSetupController*, "", "AutoSetupController");
