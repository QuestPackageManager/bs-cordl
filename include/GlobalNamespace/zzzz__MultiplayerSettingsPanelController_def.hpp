#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSettingsPanelController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerSettingsPanelController)
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class ServerCodeView;
}
namespace HMUI {
class ToggleBinder;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSettingsPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSettingsPanelController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSettingsPanelController
class CORDL_TYPE MultiplayerSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _connectionSettingsWrapper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionSettingsWrapper, put = __cordl_internal_set__connectionSettingsWrapper)) ::UnityW<::UnityEngine::GameObject> _connectionSettingsWrapper;

  /// @brief Field _lobbyPlayerData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayerData, put = __cordl_internal_set__lobbyPlayerData)) ::GlobalNamespace::ILobbyPlayerData* _lobbyPlayerData;

  /// @brief Field _refreshed, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshed, put = __cordl_internal_set__refreshed)) bool _refreshed;

  /// @brief Field _serverCodeView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__serverCodeView, put = __cordl_internal_set__serverCodeView)) ::UnityW<::GlobalNamespace::ServerCodeView> _serverCodeView;

  /// @brief Field _spectateSettingsWrapper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__spectateSettingsWrapper, put = __cordl_internal_set__spectateSettingsWrapper)) ::UnityW<::UnityEngine::GameObject> _spectateSettingsWrapper;

  /// @brief Field _spectateToggle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spectateToggle, put = __cordl_internal_set__spectateToggle)) ::UnityW<::UnityEngine::UI::Toggle> _spectateToggle;

  /// @brief Field _toggleBinder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field playerActiveStateChangedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_playerActiveStateChangedEvent, put = __cordl_internal_set_playerActiveStateChangedEvent)) ::System::Action_1<bool>* playerActiveStateChangedEvent;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  /// @brief Method Awake, addr 0x5874e98, size 0xc8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HideConnectionSettings, addr 0x5874e38, size 0x20, virtual false, abstract: false, final false
  inline void HideConnectionSettings(bool hide);

  /// @brief Method HideSpectateSettings, addr 0x5874e58, size 0x20, virtual false, abstract: false, final false
  inline void HideSpectateSettings(bool hide);

  static inline ::GlobalNamespace::MultiplayerSettingsPanelController* New_ctor();

  /// @brief Method OnDestroy, addr 0x5874f60, size 0x14, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Refresh, addr 0x5874d28, size 0x110, virtual true, abstract: false, final true
  inline void Refresh();

  /// @brief Method SetLobbyCode, addr 0x5874e78, size 0x20, virtual false, abstract: false, final false
  inline void SetLobbyCode(::StringW code);

  /// @brief Method SetLobbyPlayerDataModel, addr 0x5874d1c, size 0xc, virtual false, abstract: false, final false
  inline void SetLobbyPlayerDataModel(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData);

  /// @brief Method UpdateLocalPlayerIsActiveState, addr 0x5874f74, size 0x24, virtual false, abstract: false, final false
  inline void UpdateLocalPlayerIsActiveState(bool isActive);

  /// @brief Method <Awake>b__14_0, addr 0x5874f9c, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__14_0(bool on);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__connectionSettingsWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__connectionSettingsWrapper();

  constexpr ::GlobalNamespace::ILobbyPlayerData* const& __cordl_internal_get__lobbyPlayerData() const;

  constexpr ::GlobalNamespace::ILobbyPlayerData*& __cordl_internal_get__lobbyPlayerData();

  constexpr bool const& __cordl_internal_get__refreshed() const;

  constexpr bool& __cordl_internal_get__refreshed();

  constexpr ::UnityW<::GlobalNamespace::ServerCodeView> const& __cordl_internal_get__serverCodeView() const;

  constexpr ::UnityW<::GlobalNamespace::ServerCodeView>& __cordl_internal_get__serverCodeView();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__spectateSettingsWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__spectateSettingsWrapper();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__spectateToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__spectateToggle();

  constexpr ::HMUI::ToggleBinder* const& __cordl_internal_get__toggleBinder() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_playerActiveStateChangedEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_playerActiveStateChangedEvent();

  constexpr void __cordl_internal_set__connectionSettingsWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__lobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* value);

  constexpr void __cordl_internal_set__refreshed(bool value);

  constexpr void __cordl_internal_set__serverCodeView(::UnityW<::GlobalNamespace::ServerCodeView> value);

  constexpr void __cordl_internal_set__spectateSettingsWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__spectateToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x5874f98, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerActiveStateChangedEvent, addr 0x5874b9c, size 0xc0, virtual false, abstract: false, final false
  inline void add_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

  /// @brief Convert to "::GlobalNamespace::IRefreshable"
  constexpr ::GlobalNamespace::IRefreshable* i___GlobalNamespace__IRefreshable() noexcept;

  /// @brief Method remove_playerActiveStateChangedEvent, addr 0x5874c5c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSettingsPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSettingsPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSettingsPanelController(MultiplayerSettingsPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSettingsPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSettingsPanelController(MultiplayerSettingsPanelController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6478 };

  /// @brief Field _serverCodeView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ServerCodeView> ____serverCodeView;

  /// @brief Field _spectateToggle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____spectateToggle;

  /// @brief Field _connectionSettingsWrapper, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____connectionSettingsWrapper;

  /// @brief Field _spectateSettingsWrapper, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____spectateSettingsWrapper;

  /// @brief Field _toggleBinder, offset: 0x40, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _lobbyPlayerData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyPlayerData* ____lobbyPlayerData;

  /// @brief Field _refreshed, offset: 0x50, size: 0x1, def value: None
  bool ____refreshed;

  /// @brief Field playerActiveStateChangedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<bool>* ___playerActiveStateChangedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____serverCodeView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____spectateToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____connectionSettingsWrapper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____spectateSettingsWrapper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____toggleBinder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____lobbyPlayerData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____refreshed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ___playerActiveStateChangedEvent) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSettingsPanelController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSettingsPanelController*, "", "MultiplayerSettingsPanelController");
