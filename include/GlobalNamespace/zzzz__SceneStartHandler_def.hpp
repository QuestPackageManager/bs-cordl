#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneStartHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneStartHandler)
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneStartHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneStartHandler);
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneStartHandler
class CORDL_TYPE SceneStartHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameplayRpcManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager, put = __cordl_internal_set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _playersAtGameStartModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playersAtGameStartModel,
                      put = __cordl_internal_set__playersAtGameStartModel)) ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersAtGameStartModel;

  /// @brief Field _playersSpecificSettings, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__playersSpecificSettings,
      put =
          __cordl_internal_set__playersSpecificSettings)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* _playersSpecificSettings;

  /// @brief Field _readyPlayers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__readyPlayers, put = __cordl_internal_set__readyPlayers)) ::System::Collections::Generic::HashSet_1<::StringW>* _readyPlayers;

  /// @brief Field _sessionGameId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionGameId, put = __cordl_internal_set__sessionGameId)) ::StringW _sessionGameId;

  /// @brief Field _started, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__started, put = __cordl_internal_set__started)) bool _started;

  /// @brief Field sceneSetupDidFinishEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneSetupDidFinishEvent, put = __cordl_internal_set_sceneSetupDidFinishEvent)) ::System::Action_1<::StringW>* sceneSetupDidFinishEvent;

  /// @brief Field sceneSetupDidReceiveTooLateEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneSetupDidReceiveTooLateEvent,
                      put = __cordl_internal_set_sceneSetupDidReceiveTooLateEvent)) ::System::Action_1<::StringW>* sceneSetupDidReceiveTooLateEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddPlayerSpecificSettingsToDictionary, addr 0x22e5824, size 0x6c, virtual false, abstract: false, final false
  inline void AddPlayerSpecificSettingsToDictionary(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable);

  /// @brief Method CreatePlayersSpecificSettingsAtGameStartData, addr 0x22e5890, size 0x304, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* CreatePlayersSpecificSettingsAtGameStartData();

  /// @brief Method Dispose, addr 0x22e4de0, size 0x35c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ForceStart, addr 0x22e5b94, size 0x6f4, virtual false, abstract: false, final false
  inline void ForceStart();

  /// @brief Method GetSceneLoadStatus, addr 0x22e513c, size 0x6e8, virtual false, abstract: false, final false
  inline void GetSceneLoadStatus();

  /// @brief Method HandleGetGameplaySceneReady, addr 0x22e6650, size 0xb4, virtual false, abstract: false, final false
  inline void HandleGetGameplaySceneReady(::StringW userId);

  /// @brief Method HandleSetGameplaySceneReady, addr 0x22e6288, size 0x3c8, virtual false, abstract: false, final false
  inline void HandleSetGameplaySceneReady(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);

  /// @brief Method HandleSetGameplaySceneSyncFinished, addr 0x22e6704, size 0x68, virtual false, abstract: false, final false
  inline void HandleSetGameplaySceneSyncFinished(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionId);

  /// @brief Method HandleSetPlayerDidConnectLate, addr 0x22e676c, size 0x2a0, virtual false, abstract: false, final false
  inline void HandleSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionId);

  static inline ::GlobalNamespace::SceneStartHandler* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                               ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);

  constexpr ::GlobalNamespace::IGameplayRpcManager* const& __cordl_internal_get__gameplayRpcManager() const;

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__gameplayRpcManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& __cordl_internal_get__playersAtGameStartModel() const;

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __cordl_internal_get__playersAtGameStartModel();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* const& __cordl_internal_get__playersSpecificSettings() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& __cordl_internal_get__playersSpecificSettings();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__readyPlayers() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__readyPlayers();

  constexpr ::StringW const& __cordl_internal_get__sessionGameId() const;

  constexpr ::StringW& __cordl_internal_get__sessionGameId();

  constexpr bool const& __cordl_internal_get__started() const;

  constexpr bool& __cordl_internal_get__started();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_sceneSetupDidFinishEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_sceneSetupDidFinishEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_sceneSetupDidReceiveTooLateEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_sceneSetupDidReceiveTooLateEvent();

  constexpr void __cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr void __cordl_internal_set__playersSpecificSettings(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  constexpr void __cordl_internal_set__readyPlayers(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__sessionGameId(::StringW value);

  constexpr void __cordl_internal_set__started(bool value);

  constexpr void __cordl_internal_set_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x22e4cfc, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);

  /// @brief Method add_sceneSetupDidFinishEvent, addr 0x22e4a3c, size 0xb0, virtual false, abstract: false, final false
  inline void add_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_sceneSetupDidReceiveTooLateEvent, addr 0x22e4b9c, size 0xb0, virtual false, abstract: false, final false
  inline void add_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_sceneSetupDidFinishEvent, addr 0x22e4aec, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_sceneSetupDidReceiveTooLateEvent, addr 0x22e4c4c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneStartHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneStartHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneStartHandler(SceneStartHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneStartHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneStartHandler(SceneStartHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14965 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _playersAtGameStartModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playersAtGameStartModel;

  /// @brief Field _readyPlayers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____readyPlayers;

  /// @brief Field _playersSpecificSettings, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* ____playersSpecificSettings;

  /// @brief Field _started, offset: 0x38, size: 0x1, def value: None
  bool ____started;

  /// @brief Field _sessionGameId, offset: 0x40, size: 0x8, def value: None
  ::StringW ____sessionGameId;

  /// @brief Field sceneSetupDidFinishEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___sceneSetupDidFinishEvent;

  /// @brief Field sceneSetupDidReceiveTooLateEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___sceneSetupDidReceiveTooLateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____gameplayRpcManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____playersAtGameStartModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____readyPlayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____playersSpecificSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____started) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____sessionGameId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ___sceneSetupDidFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ___sceneSetupDidReceiveTooLateEvent) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneStartHandler, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneStartHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneStartHandler*, "", "SceneStartHandler");
