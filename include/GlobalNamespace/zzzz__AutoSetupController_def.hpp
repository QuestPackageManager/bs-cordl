#pragma once
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
// Type: ::AutoSetupController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AutoSetupController*
class CORDL_TYPE AutoSetupController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _autoSetupData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__autoSetupData, put = __cordl_internal_set__autoSetupData))::GlobalNamespace::AutoSetupData* _autoSetupData;

  /// @brief Field _autoStartWhenAllReadyToggle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__autoStartWhenAllReadyToggle,
                      put = __cordl_internal_set__autoStartWhenAllReadyToggle))::UnityW<::UnityEngine::UI::Toggle> _autoStartWhenAllReadyToggle;

  /// @brief Field _buttonBinder, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _closeButton, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__closeButton, put = __cordl_internal_set__closeButton))::UnityW<::UnityEngine::UI::Button> _closeButton;

  /// @brief Field _forceAutoStartAfterSongSelectionToggle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__forceAutoStartAfterSongSelectionToggle,
                      put = __cordl_internal_set__forceAutoStartAfterSongSelectionToggle))::UnityW<::UnityEngine::UI::Toggle> _forceAutoStartAfterSongSelectionToggle;

  /// @brief Field _randomSongIfNoneSuggestedToggle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__randomSongIfNoneSuggestedToggle,
                      put = __cordl_internal_set__randomSongIfNoneSuggestedToggle))::UnityW<::UnityEngine::UI::Toggle> _randomSongIfNoneSuggestedToggle;

  /// @brief Field _selectBasedOnSuggestionsToggle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__selectBasedOnSuggestionsToggle,
                      put = __cordl_internal_set__selectBasedOnSuggestionsToggle))::UnityW<::UnityEngine::UI::Toggle> _selectBasedOnSuggestionsToggle;

  /// @brief Field _toggleBinder, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field didFinishEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action_1<::GlobalNamespace::AutoSetupData*>* didFinishEvent;

  static inline ::GlobalNamespace::AutoSetupController* New_ctor();

  /// @brief Method OnDisable, addr 0x252b188, size 0x1c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x252af88, size 0x200, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Setup, addr 0x252af80, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::AutoSetupData* autoSetupData);

  /// @brief Method <OnEnable>b__12_0, addr 0x252b274, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_0();

  /// @brief Method <OnEnable>b__12_1, addr 0x252b294, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_1(bool isOn);

  /// @brief Method <OnEnable>b__12_2, addr 0x252b2b4, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_2(bool isOn);

  /// @brief Method <OnEnable>b__12_3, addr 0x252b2d4, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_3(bool isOn);

  /// @brief Method <OnEnable>b__12_4, addr 0x252b2f4, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__12_4(bool isOn);

  constexpr ::GlobalNamespace::AutoSetupData*& __cordl_internal_get__autoSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AutoSetupData*> const& __cordl_internal_get__autoSetupData() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__autoStartWhenAllReadyToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__autoStartWhenAllReadyToggle();

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__closeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__closeButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__forceAutoStartAfterSongSelectionToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__forceAutoStartAfterSongSelectionToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__randomSongIfNoneSuggestedToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__randomSongIfNoneSuggestedToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__selectBasedOnSuggestionsToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__selectBasedOnSuggestionsToggle();

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr ::System::Action_1<::GlobalNamespace::AutoSetupData*>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::AutoSetupData*>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__autoSetupData(::GlobalNamespace::AutoSetupData* value);

  constexpr void __cordl_internal_set__autoStartWhenAllReadyToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__closeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__forceAutoStartAfterSongSelectionToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__randomSongIfNoneSuggestedToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__selectBasedOnSuggestionsToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>* value);

  /// @brief Method .ctor, addr 0x252b1a4, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x252ae20, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x252aed0, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief Field _closeButton, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____closeButton;

  /// @brief Field _selectBasedOnSuggestionsToggle, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____selectBasedOnSuggestionsToggle;

  /// @brief Field _autoStartWhenAllReadyToggle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____autoStartWhenAllReadyToggle;

  /// @brief Field _forceAutoStartAfterSongSelectionToggle, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____forceAutoStartAfterSongSelectionToggle;

  /// @brief Field _randomSongIfNoneSuggestedToggle, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____randomSongIfNoneSuggestedToggle;

  /// @brief Field didFinishEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::AutoSetupData*>* ___didFinishEvent;

  /// @brief Field _buttonBinder, offset: 0x48, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _toggleBinder, offset: 0x50, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _autoSetupData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::AutoSetupData* ____autoSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutoSetupController, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____closeButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____selectBasedOnSuggestionsToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____autoStartWhenAllReadyToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____forceAutoStartAfterSongSelectionToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____randomSongIfNoneSuggestedToggle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ___didFinishEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____buttonBinder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____toggleBinder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSetupController, ____autoSetupData) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutoSetupController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoSetupController*, "", "AutoSetupController");
