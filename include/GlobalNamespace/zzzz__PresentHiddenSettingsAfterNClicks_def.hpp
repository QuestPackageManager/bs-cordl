#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PresentHiddenSettingsAfterNClicks)
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class ButtonBinder;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5609))
// CS Name: ::PresentHiddenSettingsAfterNClicks*
class CORDL_TYPE PresentHiddenSettingsAfterNClicks : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hiddenSettingsButton, offset 0x18, size 0x8
  __declspec(property(get = __get__hiddenSettingsButton, put = __set__hiddenSettingsButton))::UnityEngine::UI::Button* _hiddenSettingsButton;

  /// @brief Field _hiddenSettingsViewController, offset 0x20, size 0x8
  __declspec(property(get = __get__hiddenSettingsViewController, put = __set__hiddenSettingsViewController))::HMUI::ViewController* _hiddenSettingsViewController;

  /// @brief Field _numberOfClicksRequired, offset 0x28, size 0x4
  __declspec(property(get = __get__numberOfClicksRequired, put = __set__numberOfClicksRequired)) int32_t _numberOfClicksRequired;

  /// @brief Field _settingsFlowCoordinator, offset 0x30, size 0x8
  __declspec(property(get = __get__settingsFlowCoordinator, put = __set__settingsFlowCoordinator))::GlobalNamespace::SettingsFlowCoordinator* _settingsFlowCoordinator;

  /// @brief Field _currentNumberOfClicks, offset 0x38, size 0x4
  __declspec(property(get = __get__currentNumberOfClicks, put = __set__currentNumberOfClicks)) int32_t _currentNumberOfClicks;

  /// @brief Field _buttonBinder, offset 0x40, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  constexpr ::UnityEngine::UI::Button*& __get__hiddenSettingsButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__hiddenSettingsButton() const;

  constexpr void __set__hiddenSettingsButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::ViewController*& __get__hiddenSettingsViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__hiddenSettingsViewController() const;

  constexpr void __set__hiddenSettingsViewController(::HMUI::ViewController* value);

  constexpr int32_t& __get__numberOfClicksRequired();

  constexpr int32_t const& __get__numberOfClicksRequired() const;

  constexpr void __set__numberOfClicksRequired(int32_t value);

  constexpr ::GlobalNamespace::SettingsFlowCoordinator*& __get__settingsFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsFlowCoordinator*> const& __get__settingsFlowCoordinator() const;

  constexpr void __set__settingsFlowCoordinator(::GlobalNamespace::SettingsFlowCoordinator* value);

  constexpr int32_t& __get__currentNumberOfClicks();

  constexpr int32_t const& __get__currentNumberOfClicks() const;

  constexpr void __set__currentNumberOfClicks(int32_t value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method OnEnable addr 0x22abe84 size 0x9c virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x22abf20 size 0x1c virtual false final false
  inline void OnDisable();

  static inline ::GlobalNamespace::PresentHiddenSettingsAfterNClicks* New_ctor();

  /// @brief Method .ctor addr 0x22abf3c size 0x70 virtual false final false
  inline void _ctor();

  /// @brief Method <OnEnable>b__6_0 addr 0x22abfac size 0x48 virtual false final false
  inline void _OnEnable_b__6_0();

  // Ctor Parameters [CppParam { name: "", ty: "PresentHiddenSettingsAfterNClicks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PresentHiddenSettingsAfterNClicks(PresentHiddenSettingsAfterNClicks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PresentHiddenSettingsAfterNClicks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PresentHiddenSettingsAfterNClicks(PresentHiddenSettingsAfterNClicks const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PresentHiddenSettingsAfterNClicks();

public:
  /// @brief Field _hiddenSettingsButton, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____hiddenSettingsButton;

  /// @brief Field _hiddenSettingsViewController, offset: 0x20, size: 0x8, def value: None
  ::HMUI::ViewController* ____hiddenSettingsViewController;

  /// @brief Field _numberOfClicksRequired, offset: 0x28, size: 0x4, def value: None
  int32_t ____numberOfClicksRequired;

  /// @brief Field _settingsFlowCoordinator, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SettingsFlowCoordinator* ____settingsFlowCoordinator;

  /// @brief Field _currentNumberOfClicks, offset: 0x38, size: 0x4, def value: None
  int32_t ____currentNumberOfClicks;

  /// @brief Field _buttonBinder, offset: 0x40, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PresentHiddenSettingsAfterNClicks, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PresentHiddenSettingsAfterNClicks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PresentHiddenSettingsAfterNClicks*, "", "PresentHiddenSettingsAfterNClicks");
