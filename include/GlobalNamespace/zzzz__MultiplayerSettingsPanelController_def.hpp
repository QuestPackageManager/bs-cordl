#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerSettingsPanelController)
namespace UnityEngine::UI {
class Toggle;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class ServerCodeView;
}
namespace System {
template <typename T> class Action_1;
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
// Type: ::MultiplayerSettingsPanelController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5639))
// CS Name: ::MultiplayerSettingsPanelController*
class CORDL_TYPE MultiplayerSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _serverCodeView, offset 0x18, size 0x8
  __declspec(property(get = __get__serverCodeView, put = __set__serverCodeView))::GlobalNamespace::ServerCodeView* _serverCodeView;

  /// @brief Field _spectateToggle, offset 0x20, size 0x8
  __declspec(property(get = __get__spectateToggle, put = __set__spectateToggle))::UnityEngine::UI::Toggle* _spectateToggle;

  /// @brief Field _connectionSettingsWrapper, offset 0x28, size 0x8
  __declspec(property(get = __get__connectionSettingsWrapper, put = __set__connectionSettingsWrapper))::UnityEngine::GameObject* _connectionSettingsWrapper;

  /// @brief Field _spectateSettingsWrapper, offset 0x30, size 0x8
  __declspec(property(get = __get__spectateSettingsWrapper, put = __set__spectateSettingsWrapper))::UnityEngine::GameObject* _spectateSettingsWrapper;

  /// @brief Field _toggleBinder, offset 0x38, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _lobbyPlayerData, offset 0x40, size 0x8
  __declspec(property(get = __get__lobbyPlayerData, put = __set__lobbyPlayerData))::GlobalNamespace::ILobbyPlayerData* _lobbyPlayerData;

  /// @brief Field _refreshed, offset 0x48, size 0x1
  __declspec(property(get = __get__refreshed, put = __set__refreshed)) bool _refreshed;

  /// @brief Field playerActiveStateChangedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_playerActiveStateChangedEvent, put = __set_playerActiveStateChangedEvent))::System::Action_1<bool>* playerActiveStateChangedEvent;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  constexpr ::GlobalNamespace::ServerCodeView*& __get__serverCodeView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ServerCodeView*> const& __get__serverCodeView() const;

  constexpr void __set__serverCodeView(::GlobalNamespace::ServerCodeView* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__spectateToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__spectateToggle() const;

  constexpr void __set__spectateToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::GameObject*& __get__connectionSettingsWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__connectionSettingsWrapper() const;

  constexpr void __set__connectionSettingsWrapper(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__spectateSettingsWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__spectateSettingsWrapper() const;

  constexpr void __set__spectateSettingsWrapper(::UnityEngine::GameObject* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr ::GlobalNamespace::ILobbyPlayerData*& __get__lobbyPlayerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayerData*> const& __get__lobbyPlayerData() const;

  constexpr void __set__lobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* value);

  constexpr bool& __get__refreshed();

  constexpr bool const& __get__refreshed() const;

  constexpr void __set__refreshed(bool value);

  constexpr ::System::Action_1<bool>*& __get_playerActiveStateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_playerActiveStateChangedEvent() const;

  constexpr void __set_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method add_playerActiveStateChangedEvent, addr 0x22b3170, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_playerActiveStateChangedEvent, addr 0x22b3220, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method SetLobbyPlayerDataModel, addr 0x22b32d0, size 0xc, virtual false, abstract: false, final false
  inline void SetLobbyPlayerDataModel(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData);

  /// @brief Method HideConnectionSettings, addr 0x22b33e8, size 0x24, virtual false, abstract: false, final false
  inline void HideConnectionSettings(bool hide);

  /// @brief Method HideSpectateSettings, addr 0x22b340c, size 0x24, virtual false, abstract: false, final false
  inline void HideSpectateSettings(bool hide);

  /// @brief Method SetLobbyCode, addr 0x22b3430, size 0x1c, virtual false, abstract: false, final false
  inline void SetLobbyCode(::StringW code);

  /// @brief Method Awake, addr 0x22b344c, size 0xc4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x22b3510, size 0x14, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UpdateLocalPlayerIsActiveState, addr 0x22b3524, size 0x24, virtual false, abstract: false, final false
  inline void UpdateLocalPlayerIsActiveState(bool isActive);

  /// @brief Method Refresh, addr 0x22b32dc, size 0x10c, virtual true, abstract: false, final true
  inline void Refresh();

  static inline ::GlobalNamespace::MultiplayerSettingsPanelController* New_ctor();

  /// @brief Method .ctor, addr 0x22b3548, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__14_0, addr 0x22b3550, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__14_0(bool on);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSettingsPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSettingsPanelController(MultiplayerSettingsPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSettingsPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSettingsPanelController(MultiplayerSettingsPanelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSettingsPanelController();

public:
  /// @brief Field _serverCodeView, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ServerCodeView* ____serverCodeView;

  /// @brief Field _spectateToggle, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____spectateToggle;

  /// @brief Field _connectionSettingsWrapper, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____connectionSettingsWrapper;

  /// @brief Field _spectateSettingsWrapper, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____spectateSettingsWrapper;

  /// @brief Field _toggleBinder, offset: 0x38, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _lobbyPlayerData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyPlayerData* ____lobbyPlayerData;

  /// @brief Field _refreshed, offset: 0x48, size: 0x1, def value: None
  bool ____refreshed;

  /// @brief Field playerActiveStateChangedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<bool>* ___playerActiveStateChangedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSettingsPanelController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____serverCodeView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____spectateToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____connectionSettingsWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____spectateSettingsWrapper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____toggleBinder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____lobbyPlayerData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ____refreshed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSettingsPanelController, ___playerActiveStateChangedEvent) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSettingsPanelController*, "", "MultiplayerSettingsPanelController");
