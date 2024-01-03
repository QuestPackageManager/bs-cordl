#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneStartHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneStartHandler);
// Type: ::SceneStartHandler
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12955))
// CS Name: ::SceneStartHandler*
class CORDL_TYPE SceneStartHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset 0x18, size 0x8
  __declspec(property(get = __get__gameplayRpcManager, put = __set__gameplayRpcManager))::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _playersAtGameStartModel, offset 0x20, size 0x8
  __declspec(property(get = __get__playersAtGameStartModel, put = __set__playersAtGameStartModel))::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersAtGameStartModel;

  /// @brief Field _readyPlayers, offset 0x28, size 0x8
  __declspec(property(get = __get__readyPlayers, put = __set__readyPlayers))::System::Collections::Generic::HashSet_1<::StringW>* _readyPlayers;

  /// @brief Field _playersSpecificSettings, offset 0x30, size 0x8
  __declspec(
      property(get = __get__playersSpecificSettings,
               put = __set__playersSpecificSettings))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* _playersSpecificSettings;

  /// @brief Field _started, offset 0x38, size 0x1
  __declspec(property(get = __get__started, put = __set__started)) bool _started;

  /// @brief Field _sessionGameId, offset 0x40, size 0x8
  __declspec(property(get = __get__sessionGameId, put = __set__sessionGameId))::StringW _sessionGameId;

  /// @brief Field sceneSetupDidFinishEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_sceneSetupDidFinishEvent, put = __set_sceneSetupDidFinishEvent))::System::Action_1<::StringW>* sceneSetupDidFinishEvent;

  /// @brief Field sceneSetupDidReceiveTooLateEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_sceneSetupDidReceiveTooLateEvent, put = __set_sceneSetupDidReceiveTooLateEvent))::System::Action_1<::StringW>* sceneSetupDidReceiveTooLateEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __get__gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __get__gameplayRpcManager() const;

  constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __get__playersAtGameStartModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> const& __get__playersAtGameStartModel() const;

  constexpr void __set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__readyPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__readyPlayers() const;

  constexpr void __set__readyPlayers(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& __get__playersSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*> const&
  __get__playersSpecificSettings() const;

  constexpr void __set__playersSpecificSettings(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  constexpr bool& __get__started();

  constexpr bool const& __get__started() const;

  constexpr void __set__started(bool value);

  constexpr ::StringW& __get__sessionGameId();

  constexpr ::StringW const& __get__sessionGameId() const;

  constexpr void __set__sessionGameId(::StringW value);

  constexpr ::System::Action_1<::StringW>*& __get_sceneSetupDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_sceneSetupDidFinishEvent() const;

  constexpr void __set_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __get_sceneSetupDidReceiveTooLateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_sceneSetupDidReceiveTooLateEvent() const;

  constexpr void __set_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_sceneSetupDidFinishEvent, addr 0xe54748, size 0xb0, virtual false, abstract: false, final false
  inline void add_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_sceneSetupDidFinishEvent, addr 0xe547f8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_sceneSetupDidReceiveTooLateEvent, addr 0xe548a8, size 0xb0, virtual false, abstract: false, final false
  inline void add_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_sceneSetupDidReceiveTooLateEvent, addr 0xe54958, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  static inline ::GlobalNamespace::SceneStartHandler* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                               ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);

  /// @brief Method .ctor, addr 0xe54a08, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);

  /// @brief Method Dispose, addr 0xe54af0, size 0x364, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetSceneLoadStatus, addr 0xe54e54, size 0x6e4, virtual false, abstract: false, final false
  inline void GetSceneLoadStatus();

  /// @brief Method ForceStart, addr 0xe558ac, size 0x6f0, virtual false, abstract: false, final false
  inline void ForceStart();

  /// @brief Method HandleSetGameplaySceneReady, addr 0xe55f9c, size 0x3c8, virtual false, abstract: false, final false
  inline void HandleSetGameplaySceneReady(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);

  /// @brief Method HandleGetGameplaySceneReady, addr 0xe56364, size 0xb4, virtual false, abstract: false, final false
  inline void HandleGetGameplaySceneReady(::StringW userId);

  /// @brief Method HandleSetGameplaySceneSyncFinished, addr 0xe56418, size 0x68, virtual false, abstract: false, final false
  inline void HandleSetGameplaySceneSyncFinished(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionId);

  /// @brief Method HandleSetPlayerDidConnectLate, addr 0xe56480, size 0x2a0, virtual false, abstract: false, final false
  inline void HandleSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionId);

  /// @brief Method AddPlayerSpecificSettingsToDictionary, addr 0xe55538, size 0x6c, virtual false, abstract: false, final false
  inline void AddPlayerSpecificSettingsToDictionary(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable);

  /// @brief Method CreatePlayersSpecificSettingsAtGameStartData, addr 0xe555a4, size 0x308, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* CreatePlayersSpecificSettingsAtGameStartData();

  // Ctor Parameters [CppParam { name: "", ty: "SceneStartHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneStartHandler(SceneStartHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneStartHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneStartHandler(SceneStartHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneStartHandler();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneStartHandler, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____gameplayRpcManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____playersAtGameStartModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____readyPlayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____playersSpecificSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____started) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ____sessionGameId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ___sceneSetupDidFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartHandler, ___sceneSetupDidReceiveTooLateEvent) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneStartHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneStartHandler*, "", "SceneStartHandler");
