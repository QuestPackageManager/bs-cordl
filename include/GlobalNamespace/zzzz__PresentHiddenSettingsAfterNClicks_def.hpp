#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PresentHiddenSettingsAfterNClicks)
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ViewController;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class PresentHiddenSettingsAfterNClicks;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PresentHiddenSettingsAfterNClicks);
// Type: ::PresentHiddenSettingsAfterNClicks
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PresentHiddenSettingsAfterNClicks*
class CORDL_TYPE PresentHiddenSettingsAfterNClicks : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _currentNumberOfClicks, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__currentNumberOfClicks, put = __cordl_internal_set__currentNumberOfClicks)) int32_t _currentNumberOfClicks;

  /// @brief Field _hiddenSettingsButton, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hiddenSettingsButton, put = __cordl_internal_set__hiddenSettingsButton))::UnityW<::UnityEngine::UI::Button> _hiddenSettingsButton;

  /// @brief Field _hiddenSettingsViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hiddenSettingsViewController,
                      put = __cordl_internal_set__hiddenSettingsViewController))::UnityW<::HMUI::ViewController> _hiddenSettingsViewController;

  /// @brief Field _numberOfClicksRequired, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfClicksRequired, put = __cordl_internal_set__numberOfClicksRequired)) int32_t _numberOfClicksRequired;

  /// @brief Field _settingsFlowCoordinator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsFlowCoordinator,
                      put = __cordl_internal_set__settingsFlowCoordinator))::UnityW<::GlobalNamespace::SettingsFlowCoordinator> _settingsFlowCoordinator;

  static inline ::GlobalNamespace::PresentHiddenSettingsAfterNClicks* New_ctor();

  /// @brief Method OnDisable, addr 0x23ae0f0, size 0x1c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x23ae054, size 0x9c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method <OnEnable>b__6_0, addr 0x23ae17c, size 0x48, virtual false, abstract: false, final false
  inline void _OnEnable_b__6_0();

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr int32_t const& __cordl_internal_get__currentNumberOfClicks() const;

  constexpr int32_t& __cordl_internal_get__currentNumberOfClicks();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__hiddenSettingsButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__hiddenSettingsButton();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__hiddenSettingsViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__hiddenSettingsViewController();

  constexpr int32_t const& __cordl_internal_get__numberOfClicksRequired() const;

  constexpr int32_t& __cordl_internal_get__numberOfClicksRequired();

  constexpr ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> const& __cordl_internal_get__settingsFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsFlowCoordinator>& __cordl_internal_get__settingsFlowCoordinator();

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__currentNumberOfClicks(int32_t value);

  constexpr void __cordl_internal_set__hiddenSettingsButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__hiddenSettingsViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__numberOfClicksRequired(int32_t value);

  constexpr void __cordl_internal_set__settingsFlowCoordinator(::UnityW<::GlobalNamespace::SettingsFlowCoordinator> value);

  /// @brief Method .ctor, addr 0x23ae10c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PresentHiddenSettingsAfterNClicks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PresentHiddenSettingsAfterNClicks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PresentHiddenSettingsAfterNClicks(PresentHiddenSettingsAfterNClicks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PresentHiddenSettingsAfterNClicks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PresentHiddenSettingsAfterNClicks(PresentHiddenSettingsAfterNClicks const&) = delete;

  /// @brief Field _hiddenSettingsButton, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____hiddenSettingsButton;

  /// @brief Field _hiddenSettingsViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____hiddenSettingsViewController;

  /// @brief Field _numberOfClicksRequired, offset: 0x28, size: 0x4, def value: None
  int32_t ____numberOfClicksRequired;

  /// @brief Field _settingsFlowCoordinator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> ____settingsFlowCoordinator;

  /// @brief Field _currentNumberOfClicks, offset: 0x38, size: 0x4, def value: None
  int32_t ____currentNumberOfClicks;

  /// @brief Field _buttonBinder, offset: 0x40, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PresentHiddenSettingsAfterNClicks, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PresentHiddenSettingsAfterNClicks, ____hiddenSettingsButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresentHiddenSettingsAfterNClicks, ____hiddenSettingsViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresentHiddenSettingsAfterNClicks, ____numberOfClicksRequired) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresentHiddenSettingsAfterNClicks, ____settingsFlowCoordinator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresentHiddenSettingsAfterNClicks, ____currentNumberOfClicks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresentHiddenSettingsAfterNClicks, ____buttonBinder) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PresentHiddenSettingsAfterNClicks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PresentHiddenSettingsAfterNClicks*, "", "PresentHiddenSettingsAfterNClicks");
