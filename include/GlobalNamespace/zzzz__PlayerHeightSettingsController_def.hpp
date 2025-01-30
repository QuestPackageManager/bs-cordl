#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHeightSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerHeightSettingsController)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace HMUI {
class ButtonBinder;
}
namespace System {
template <typename T> class Action_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeightSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeightSettingsController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerHeightSettingsController
class CORDL_TYPE PlayerHeightSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _setButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__setButton, put = __cordl_internal_set__setButton)) ::UnityW<::UnityEngine::UI::Button> _setButton;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _value, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) float_t _value;

  /// @brief Field _vrPlatformHelper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_value)) float_t value;

  /// @brief Field valueDidChangeEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent, put = __cordl_internal_set_valueDidChangeEvent)) ::System::Action_1<float_t>* valueDidChangeEvent;

  /// @brief Method AutoSetHeight, addr 0x3c15e30, size 0x114, virtual false, abstract: false, final false
  inline void AutoSetHeight();

  /// @brief Method Awake, addr 0x3c15cc0, size 0xc0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x3c15d80, size 0x8, virtual false, abstract: false, final false
  inline void Init(float_t playerHeight);

  static inline ::GlobalNamespace::PlayerHeightSettingsController* New_ctor();

  /// @brief Method RefreshUI, addr 0x3c15d88, size 0xa8, virtual false, abstract: false, final false
  inline void RefreshUI();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__setButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__setButton();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr float_t const& __cordl_internal_get__value() const;

  constexpr float_t& __cordl_internal_get__value();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__setButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__value(float_t value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x3c15f44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueDidChangeEvent, addr 0x3c15b58, size 0xb0, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_value, addr 0x3c15cb8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method remove_valueDidChangeEvent, addr 0x3c15c08, size 0xb0, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeightSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeightSettingsController(PlayerHeightSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeightSettingsController(PlayerHeightSettingsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4867 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _setButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____setButton;

  /// @brief Field _vrPlatformHelper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field valueDidChangeEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___valueDidChangeEvent;

  /// @brief Field _buttonBinder, offset: 0x48, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _value, offset: 0x50, size: 0x4, def value: None
  float_t ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHeightSettingsController, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightSettingsController, ____setButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightSettingsController, ____vrPlatformHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightSettingsController, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightSettingsController, ___valueDidChangeEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightSettingsController, ____buttonBinder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightSettingsController, ____value) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeightSettingsController, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeightSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightSettingsController*, "", "PlayerHeightSettingsController");
