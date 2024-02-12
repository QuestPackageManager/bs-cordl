#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyGameStateController)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyGameStateControllerBase;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class LevelGameplaySetupData;
}
namespace GlobalNamespace {
class LobbyGameStateModel;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class MultiplayerLevelLoader;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerLobbyPermissionConfigurationNetSerializable;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
namespace GlobalNamespace {
class __LobbyGameStateController____c;
}
namespace GlobalNamespace {
class __LobbyGameStateController____c__DisplayClass98_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyGameStateController;
}
namespace GlobalNamespace {
class __LobbyGameStateController____c;
}
namespace GlobalNamespace {
class __LobbyGameStateController____c__DisplayClass98_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyGameStateController);
MARK_REF_PTR_T(::GlobalNamespace::__LobbyGameStateController____c);
MARK_REF_PTR_T(::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0);
// Type: ::<>c__DisplayClass98_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4485))
// CS Name: ::LobbyGameStateController::<>c__DisplayClass98_0*
class CORDL_TYPE __LobbyGameStateController____c__DisplayClass98_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::LobbyGameStateController* __4__this;

  /// @brief Field getGameStateAsyncTcs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_getGameStateAsyncTcs, put = __cordl_internal_set_getGameStateAsyncTcs))::System::Threading::Tasks::TaskCompletionSource_1<bool>* getGameStateAsyncTcs;

  /// @brief Field getPlayerPermissionAsyncTcs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_getPlayerPermissionAsyncTcs,
                      put = __cordl_internal_set_getPlayerPermissionAsyncTcs))::System::Threading::Tasks::TaskCompletionSource_1<bool>* getPlayerPermissionAsyncTcs;

  constexpr ::GlobalNamespace::LobbyGameStateController*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateController*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::LobbyGameStateController* value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_getGameStateAsyncTcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __cordl_internal_get_getGameStateAsyncTcs() const;

  constexpr void __cordl_internal_set_getGameStateAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_getPlayerPermissionAsyncTcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __cordl_internal_get_getPlayerPermissionAsyncTcs() const;

  constexpr void __cordl_internal_set_getPlayerPermissionAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  static inline ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0* New_ctor();

  /// @brief Method .ctor, addr 0x2394f7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0, addr 0x2396814, size 0x264, virtual false, abstract: false, final false
  inline void _GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0(::StringW userId, ::GlobalNamespace::MultiplayerGameState newMultiplayerGameState);

  /// @brief Method <GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1, addr 0x2396a78, size 0x1e4, virtual false, abstract: false, final false
  inline void
  _GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1(::StringW userId,
                                                                                 ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration);

  /// @brief Method <GetGameStateAndConfigurationAsync>b__2, addr 0x2396c5c, size 0xc8, virtual false, abstract: false, final false
  inline bool _GetGameStateAndConfigurationAsync_b__2(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* p);

  // Ctor Parameters [CppParam { name: "", ty: "__LobbyGameStateController____c__DisplayClass98_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LobbyGameStateController____c__DisplayClass98_0(__LobbyGameStateController____c__DisplayClass98_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LobbyGameStateController____c__DisplayClass98_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LobbyGameStateController____c__DisplayClass98_0(__LobbyGameStateController____c__DisplayClass98_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LobbyGameStateController____c__DisplayClass98_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LobbyGameStateController* _____4__this;

  /// @brief Field getGameStateAsyncTcs, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___getGameStateAsyncTcs;

  /// @brief Field getPlayerPermissionAsyncTcs, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___getPlayerPermissionAsyncTcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0, ___getGameStateAsyncTcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0, ___getPlayerPermissionAsyncTcs) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4486))
// CS Name: ::LobbyGameStateController::<>c*
class CORDL_TYPE __LobbyGameStateController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LobbyGameStateController____c* __9;

  /// @brief Field <>9__99_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__99_0,
                             put = setStaticF___9__99_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>, bool>* __9__99_0;

  static inline void setStaticF___9(::GlobalNamespace::__LobbyGameStateController____c* value);

  static inline ::GlobalNamespace::__LobbyGameStateController____c* getStaticF___9();

  static inline void setStaticF___9__99_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>, bool>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>, bool>* getStaticF___9__99_0();

  static inline ::GlobalNamespace::__LobbyGameStateController____c* New_ctor();

  /// @brief Method .ctor, addr 0x2396d88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <PredictCountdownEndTime>b__99_0, addr 0x2396d90, size 0x118, virtual false, abstract: false, final false
  inline bool _PredictCountdownEndTime_b__99_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*> pair);

  // Ctor Parameters [CppParam { name: "", ty: "__LobbyGameStateController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LobbyGameStateController____c(__LobbyGameStateController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LobbyGameStateController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LobbyGameStateController____c(__LobbyGameStateController____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LobbyGameStateController____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LobbyGameStateController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LobbyGameStateController
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12586)), TypeDefinitionIndex(TypeDefinitionIndex(12618)),
// TypeDefinitionIndex(TypeDefinitionIndex(12777))] Self: TypeDefinitionIndex(TypeDefinitionIndex(4487)) CS Name: ::LobbyGameStateController*
class CORDL_TYPE LobbyGameStateController : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__LobbyGameStateController____c;

  using __c__DisplayClass98_0 = ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0;

  /// @brief Field _lobbyPlayersDataModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayersDataModel, put = __cordl_internal_set__lobbyPlayersDataModel))::GlobalNamespace::ILobbyPlayersDataModel* _lobbyPlayersDataModel;

  /// @brief Field _playerDataModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _menuRpcManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__menuRpcManager, put = __cordl_internal_set__menuRpcManager))::GlobalNamespace::IMenuRpcManager* _menuRpcManager;

  /// @brief Field _multiplayerSessionManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _multiplayerLevelLoader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelLoader, put = __cordl_internal_set__multiplayerLevelLoader))::GlobalNamespace::MultiplayerLevelLoader* _multiplayerLevelLoader;

  /// @brief Field _menuTransitionsHelper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper))::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _lobbyGameStateModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateModel, put = __cordl_internal_set__lobbyGameStateModel))::GlobalNamespace::LobbyGameStateModel* _lobbyGameStateModel;

  /// @brief Field _lobbyPlayerPermissionsModel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayerPermissionsModel,
                      put = __cordl_internal_set__lobbyPlayerPermissionsModel))::GlobalNamespace::LobbyPlayerPermissionsModel* _lobbyPlayerPermissionsModel;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapLevelsModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field selectedLevelGameplaySetupDataChangedEvent, offset 0x60, size 0x8
  __declspec(
      property(get = __cordl_internal_get_selectedLevelGameplaySetupDataChangedEvent,
               put = __cordl_internal_set_selectedLevelGameplaySetupDataChangedEvent))::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* selectedLevelGameplaySetupDataChangedEvent;

  /// @brief Field gameStartedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_gameStartedEvent, put = __cordl_internal_set_gameStartedEvent))::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* gameStartedEvent;

  /// @brief Field gameStartCancelledEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_gameStartCancelledEvent, put = __cordl_internal_set_gameStartCancelledEvent))::System::Action* gameStartCancelledEvent;

  /// @brief Field countdownStartedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_countdownStartedEvent, put = __cordl_internal_set_countdownStartedEvent))::System::Action* countdownStartedEvent;

  /// @brief Field countdownCancelledEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_countdownCancelledEvent, put = __cordl_internal_set_countdownCancelledEvent))::System::Action* countdownCancelledEvent;

  /// @brief Field songStillDownloadingEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_songStillDownloadingEvent, put = __cordl_internal_set_songStillDownloadingEvent))::System::Action* songStillDownloadingEvent;

  /// @brief Field startTimeChangedEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_startTimeChangedEvent, put = __cordl_internal_set_startTimeChangedEvent))::System::Action* startTimeChangedEvent;

  /// @brief Field levelFinishedEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFinishedEvent,
                      put = __cordl_internal_set_levelFinishedEvent))::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,
                                                                                        ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedEvent;

  /// @brief Field levelDidGetDisconnectedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDidGetDisconnectedEvent,
                      put = __cordl_internal_set_levelDidGetDisconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* levelDidGetDisconnectedEvent;

  /// @brief Field lobbyDisconnectedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_lobbyDisconnectedEvent, put = __cordl_internal_set_lobbyDisconnectedEvent))::System::Action* lobbyDisconnectedEvent;

  /// @brief Field beforeSceneSwitchCallbackEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_beforeSceneSwitchCallbackEvent, put = __cordl_internal_set_beforeSceneSwitchCallbackEvent))::System::Action* beforeSceneSwitchCallbackEvent;

  /// @brief Field lobbyStateChangedEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_lobbyStateChangedEvent,
                      put = __cordl_internal_set_lobbyStateChangedEvent))::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* lobbyStateChangedEvent;

  /// @brief Field startButtonEnabledEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_startButtonEnabledEvent,
                      put = __cordl_internal_set_startButtonEnabledEvent))::System::Action_1<::GlobalNamespace::CannotStartGameReason>* startButtonEnabledEvent;

  /// @brief Field playerMissingEntitlementsChangedEvent, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_playerMissingEntitlementsChangedEvent,
      put = __cordl_internal_set_playerMissingEntitlementsChangedEvent))::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* playerMissingEntitlementsChangedEvent;

  /// @brief Field <levelStartInitiated>k__BackingField, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__levelStartInitiated_k__BackingField, put = __cordl_internal_set__levelStartInitiated_k__BackingField)) bool _levelStartInitiated_k__BackingField;

  /// @brief Field <countdownStarted>k__BackingField, offset 0xd1, size 0x1
  __declspec(property(get = __cordl_internal_get__countdownStarted_k__BackingField, put = __cordl_internal_set__countdownStarted_k__BackingField)) bool _countdownStarted_k__BackingField;

  /// @brief Field <countdownEndTime>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__countdownEndTime_k__BackingField, put = __cordl_internal_set__countdownEndTime_k__BackingField)) int64_t _countdownEndTime_k__BackingField;

  /// @brief Field <isDisconnected>k__BackingField, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get__isDisconnected_k__BackingField, put = __cordl_internal_set__isDisconnected_k__BackingField)) bool _isDisconnected_k__BackingField;

  /// @brief Field <disconnectedReason>k__BackingField, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get__disconnectedReason_k__BackingField,
                      put = __cordl_internal_set__disconnectedReason_k__BackingField))::GlobalNamespace::DisconnectedReason _disconnectedReason_k__BackingField;

  /// @brief Field _predictedStartTime, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__predictedStartTime, put = __cordl_internal_set__predictedStartTime)) int64_t _predictedStartTime;

  /// @brief Field _startTime, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) int64_t _startTime;

  /// @brief Field _levelStartedOnTime, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get__levelStartedOnTime, put = __cordl_internal_set__levelStartedOnTime)) bool _levelStartedOnTime;

  /// @brief Field _state, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::GlobalNamespace::MultiplayerLobbyState _state;

  /// @brief Field _cannotStartGameReason, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__cannotStartGameReason, put = __cordl_internal_set__cannotStartGameReason))::GlobalNamespace::CannotStartGameReason _cannotStartGameReason;

  /// @brief Field _selectedLevelGameplaySetupData, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedLevelGameplaySetupData,
                      put = __cordl_internal_set__selectedLevelGameplaySetupData))::GlobalNamespace::LevelGameplaySetupData* _selectedLevelGameplaySetupData;

  __declspec(property(get = get_predictedCountdownEndTime)) int64_t predictedCountdownEndTime;

  __declspec(property(get = get_startTime, put = set_startTime)) int64_t startTime;

  __declspec(property(get = get_levelStartInitiated, put = set_levelStartInitiated)) bool levelStartInitiated;

  __declspec(property(get = get_selectedLevelGameplaySetupData))::GlobalNamespace::ILevelGameplaySetupData* selectedLevelGameplaySetupData;

  __declspec(property(get = get_countdownStarted, put = set_countdownStarted)) bool countdownStarted;

  __declspec(property(get = get_countdownEndTime, put = set_countdownEndTime)) int64_t countdownEndTime;

  __declspec(property(get = get_state, put = set_state))::GlobalNamespace::MultiplayerLobbyState state;

  __declspec(property(get = get_cannotStartGameReason))::GlobalNamespace::CannotStartGameReason cannotStartGameReason;

  __declspec(property(get = get_isDisconnected, put = set_isDisconnected)) bool isDisconnected;

  __declspec(property(get = get_disconnectedReason, put = set_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  /// @brief Convert operator to "::GlobalNamespace::ILobbyGameStateController"
  constexpr operator ::GlobalNamespace::ILobbyGameStateController*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILobbyGameStateController"
  constexpr ::GlobalNamespace::ILobbyGameStateController* i___GlobalNamespace__ILobbyGameStateController() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ILobbyGameStateControllerBase"
  constexpr operator ::GlobalNamespace::ILobbyGameStateControllerBase*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILobbyGameStateControllerBase"
  constexpr ::GlobalNamespace::ILobbyGameStateControllerBase* i___GlobalNamespace__ILobbyGameStateControllerBase() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& __cordl_internal_get__lobbyPlayersDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& __cordl_internal_get__lobbyPlayersDataModel() const;

  constexpr void __cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::GlobalNamespace::IMenuRpcManager*& __cordl_internal_get__menuRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> const& __cordl_internal_get__menuRpcManager() const;

  constexpr void __cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::MultiplayerLevelLoader*& __cordl_internal_get__multiplayerLevelLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelLoader*> const& __cordl_internal_get__multiplayerLevelLoader() const;

  constexpr void __cordl_internal_set__multiplayerLevelLoader(::GlobalNamespace::MultiplayerLevelLoader* value);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr ::GlobalNamespace::LobbyGameStateModel*& __cordl_internal_get__lobbyGameStateModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> const& __cordl_internal_get__lobbyGameStateModel() const;

  constexpr void __cordl_internal_set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value);

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __cordl_internal_get__lobbyPlayerPermissionsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& __cordl_internal_get__lobbyPlayerPermissionsModel() const;

  constexpr void __cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*& __cordl_internal_get_selectedLevelGameplaySetupDataChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*> const& __cordl_internal_get_selectedLevelGameplaySetupDataChangedEvent() const;

  constexpr void __cordl_internal_set_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*& __cordl_internal_get_gameStartedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*> const& __cordl_internal_get_gameStartedEvent() const;

  constexpr void __cordl_internal_set_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  constexpr ::System::Action*& __cordl_internal_get_gameStartCancelledEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_gameStartCancelledEvent() const;

  constexpr void __cordl_internal_set_gameStartCancelledEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_countdownStartedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_countdownStartedEvent() const;

  constexpr void __cordl_internal_set_countdownStartedEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_countdownCancelledEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_countdownCancelledEvent() const;

  constexpr void __cordl_internal_set_countdownCancelledEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_songStillDownloadingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_songStillDownloadingEvent() const;

  constexpr void __cordl_internal_set_songStillDownloadingEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_startTimeChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_startTimeChangedEvent() const;

  constexpr void __cordl_internal_set_startTimeChangedEvent(::System::Action* value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>*& __cordl_internal_get_levelFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>*> const&
  __cordl_internal_get_levelFinishedEvent() const;

  constexpr void
  __cordl_internal_set_levelFinishedEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_levelDidGetDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __cordl_internal_get_levelDidGetDisconnectedEvent() const;

  constexpr void __cordl_internal_set_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action*& __cordl_internal_get_lobbyDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_lobbyDisconnectedEvent() const;

  constexpr void __cordl_internal_set_lobbyDisconnectedEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_beforeSceneSwitchCallbackEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_beforeSceneSwitchCallbackEvent() const;

  constexpr void __cordl_internal_set_beforeSceneSwitchCallbackEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*& __cordl_internal_get_lobbyStateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*> const& __cordl_internal_get_lobbyStateChangedEvent() const;

  constexpr void __cordl_internal_set_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* value);

  constexpr ::System::Action_1<::GlobalNamespace::CannotStartGameReason>*& __cordl_internal_get_startButtonEnabledEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*> const& __cordl_internal_get_startButtonEnabledEvent() const;

  constexpr void __cordl_internal_set_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*& __cordl_internal_get_playerMissingEntitlementsChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*> const&
  __cordl_internal_get_playerMissingEntitlementsChangedEvent() const;

  constexpr void __cordl_internal_set_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  constexpr bool& __cordl_internal_get__levelStartInitiated_k__BackingField();

  constexpr bool const& __cordl_internal_get__levelStartInitiated_k__BackingField() const;

  constexpr void __cordl_internal_set__levelStartInitiated_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__countdownStarted_k__BackingField();

  constexpr bool const& __cordl_internal_get__countdownStarted_k__BackingField() const;

  constexpr void __cordl_internal_set__countdownStarted_k__BackingField(bool value);

  constexpr int64_t& __cordl_internal_get__countdownEndTime_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__countdownEndTime_k__BackingField() const;

  constexpr void __cordl_internal_set__countdownEndTime_k__BackingField(int64_t value);

  constexpr bool& __cordl_internal_get__isDisconnected_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDisconnected_k__BackingField() const;

  constexpr void __cordl_internal_set__isDisconnected_k__BackingField(bool value);

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get__disconnectedReason_k__BackingField();

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get__disconnectedReason_k__BackingField() const;

  constexpr void __cordl_internal_set__disconnectedReason_k__BackingField(::GlobalNamespace::DisconnectedReason value);

  constexpr int64_t& __cordl_internal_get__predictedStartTime();

  constexpr int64_t const& __cordl_internal_get__predictedStartTime() const;

  constexpr void __cordl_internal_set__predictedStartTime(int64_t value);

  constexpr int64_t& __cordl_internal_get__startTime();

  constexpr int64_t const& __cordl_internal_get__startTime() const;

  constexpr void __cordl_internal_set__startTime(int64_t value);

  constexpr bool& __cordl_internal_get__levelStartedOnTime();

  constexpr bool const& __cordl_internal_get__levelStartedOnTime() const;

  constexpr void __cordl_internal_set__levelStartedOnTime(bool value);

  constexpr ::GlobalNamespace::MultiplayerLobbyState& __cordl_internal_get__state();

  constexpr ::GlobalNamespace::MultiplayerLobbyState const& __cordl_internal_get__state() const;

  constexpr void __cordl_internal_set__state(::GlobalNamespace::MultiplayerLobbyState value);

  constexpr ::GlobalNamespace::CannotStartGameReason& __cordl_internal_get__cannotStartGameReason();

  constexpr ::GlobalNamespace::CannotStartGameReason const& __cordl_internal_get__cannotStartGameReason() const;

  constexpr void __cordl_internal_set__cannotStartGameReason(::GlobalNamespace::CannotStartGameReason value);

  constexpr ::GlobalNamespace::LevelGameplaySetupData*& __cordl_internal_get__selectedLevelGameplaySetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelGameplaySetupData*> const& __cordl_internal_get__selectedLevelGameplaySetupData() const;

  constexpr void __cordl_internal_set__selectedLevelGameplaySetupData(::GlobalNamespace::LevelGameplaySetupData* value);

  /// @brief Method add_selectedLevelGameplaySetupDataChangedEvent, addr 0x2391f08, size 0xb0, virtual true, abstract: false, final true
  inline void add_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  /// @brief Method remove_selectedLevelGameplaySetupDataChangedEvent, addr 0x2391fb8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  /// @brief Method add_gameStartedEvent, addr 0x2392068, size 0xb0, virtual true, abstract: false, final true
  inline void add_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  /// @brief Method remove_gameStartedEvent, addr 0x2392118, size 0xb0, virtual true, abstract: false, final true
  inline void remove_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  /// @brief Method add_gameStartCancelledEvent, addr 0x23921c8, size 0x9c, virtual true, abstract: false, final true
  inline void add_gameStartCancelledEvent(::System::Action* value);

  /// @brief Method remove_gameStartCancelledEvent, addr 0x2392264, size 0x9c, virtual true, abstract: false, final true
  inline void remove_gameStartCancelledEvent(::System::Action* value);

  /// @brief Method add_countdownStartedEvent, addr 0x2392300, size 0x9c, virtual true, abstract: false, final true
  inline void add_countdownStartedEvent(::System::Action* value);

  /// @brief Method remove_countdownStartedEvent, addr 0x239239c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_countdownStartedEvent(::System::Action* value);

  /// @brief Method add_countdownCancelledEvent, addr 0x2392438, size 0x9c, virtual true, abstract: false, final true
  inline void add_countdownCancelledEvent(::System::Action* value);

  /// @brief Method remove_countdownCancelledEvent, addr 0x23924d4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_countdownCancelledEvent(::System::Action* value);

  /// @brief Method add_songStillDownloadingEvent, addr 0x2392570, size 0x9c, virtual true, abstract: false, final true
  inline void add_songStillDownloadingEvent(::System::Action* value);

  /// @brief Method remove_songStillDownloadingEvent, addr 0x239260c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_songStillDownloadingEvent(::System::Action* value);

  /// @brief Method add_startTimeChangedEvent, addr 0x23926a8, size 0x9c, virtual true, abstract: false, final true
  inline void add_startTimeChangedEvent(::System::Action* value);

  /// @brief Method remove_startTimeChangedEvent, addr 0x2392744, size 0x9c, virtual true, abstract: false, final true
  inline void remove_startTimeChangedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent, addr 0x23927e0, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelFinishedEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x2392890, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelFinishedEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method add_levelDidGetDisconnectedEvent, addr 0x2392940, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_levelDidGetDisconnectedEvent, addr 0x23929f0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_lobbyDisconnectedEvent, addr 0x2392aa0, size 0x9c, virtual true, abstract: false, final true
  inline void add_lobbyDisconnectedEvent(::System::Action* value);

  /// @brief Method remove_lobbyDisconnectedEvent, addr 0x2392b3c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_lobbyDisconnectedEvent(::System::Action* value);

  /// @brief Method add_beforeSceneSwitchCallbackEvent, addr 0x2392bd8, size 0x9c, virtual true, abstract: false, final true
  inline void add_beforeSceneSwitchCallbackEvent(::System::Action* value);

  /// @brief Method remove_beforeSceneSwitchCallbackEvent, addr 0x2392c74, size 0x9c, virtual true, abstract: false, final true
  inline void remove_beforeSceneSwitchCallbackEvent(::System::Action* value);

  /// @brief Method add_lobbyStateChangedEvent, addr 0x2392d10, size 0xb0, virtual true, abstract: false, final true
  inline void add_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* value);

  /// @brief Method remove_lobbyStateChangedEvent, addr 0x2392dc0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* value);

  /// @brief Method add_startButtonEnabledEvent, addr 0x2392e70, size 0xb0, virtual true, abstract: false, final true
  inline void add_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method remove_startButtonEnabledEvent, addr 0x2392f20, size 0xb0, virtual true, abstract: false, final true
  inline void remove_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method add_playerMissingEntitlementsChangedEvent, addr 0x2392fd0, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method remove_playerMissingEntitlementsChangedEvent, addr 0x2393080, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method get_predictedCountdownEndTime, addr 0x2393130, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_predictedCountdownEndTime();

  /// @brief Method get_startTime, addr 0x2393138, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_startTime();

  /// @brief Method set_startTime, addr 0x2393140, size 0x20, virtual false, abstract: false, final false
  inline void set_startTime(int64_t value);

  /// @brief Method get_levelStartInitiated, addr 0x2393160, size 0x8, virtual true, abstract: false, final true
  inline bool get_levelStartInitiated();

  /// @brief Method set_levelStartInitiated, addr 0x2393168, size 0xc, virtual false, abstract: false, final false
  inline void set_levelStartInitiated(bool value);

  /// @brief Method get_selectedLevelGameplaySetupData, addr 0x2393174, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ILevelGameplaySetupData* get_selectedLevelGameplaySetupData();

  /// @brief Method get_countdownStarted, addr 0x239317c, size 0x8, virtual true, abstract: false, final true
  inline bool get_countdownStarted();

  /// @brief Method set_countdownStarted, addr 0x2393184, size 0xc, virtual false, abstract: false, final false
  inline void set_countdownStarted(bool value);

  /// @brief Method get_countdownEndTime, addr 0x2393190, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_countdownEndTime();

  /// @brief Method set_countdownEndTime, addr 0x2393198, size 0x8, virtual false, abstract: false, final false
  inline void set_countdownEndTime(int64_t value);

  /// @brief Method get_state, addr 0x23931a0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerLobbyState get_state();

  /// @brief Method set_state, addr 0x23931a8, size 0x2c, virtual true, abstract: false, final true
  inline void set_state(::GlobalNamespace::MultiplayerLobbyState value);

  /// @brief Method get_cannotStartGameReason, addr 0x23931d4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::CannotStartGameReason get_cannotStartGameReason();

  /// @brief Method get_isDisconnected, addr 0x23931dc, size 0x8, virtual true, abstract: false, final true
  inline bool get_isDisconnected();

  /// @brief Method set_isDisconnected, addr 0x23931e4, size 0xc, virtual false, abstract: false, final false
  inline void set_isDisconnected(bool value);

  /// @brief Method get_disconnectedReason, addr 0x23931f0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method set_disconnectedReason, addr 0x23931f8, size 0x8, virtual false, abstract: false, final false
  inline void set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method Activate, addr 0x2393200, size 0x898, virtual true, abstract: false, final true
  inline void Activate();

  /// @brief Method Deactivate, addr 0x2393a98, size 0x934, virtual true, abstract: false, final true
  inline void Deactivate();

  /// @brief Method Dispose, addr 0x23943dc, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method StartListeningToGameStart, addr 0x23943e0, size 0x6cc, virtual true, abstract: false, final true
  inline void StartListeningToGameStart();

  /// @brief Method GetCurrentLevelIfGameStarted, addr 0x2394aac, size 0xa4, virtual true, abstract: false, final true
  inline void GetCurrentLevelIfGameStarted();

  /// @brief Method ClearDisconnectedState, addr 0x23943cc, size 0x10, virtual true, abstract: false, final true
  inline void ClearDisconnectedState();

  /// @brief Method GetGameStateAndConfigurationAsync, addr 0x2394b50, size 0x42c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* GetGameStateAndConfigurationAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method PredictCountdownEndTime, addr 0x2394f84, size 0x198, virtual true, abstract: false, final true
  inline void PredictCountdownEndTime();

  /// @brief Method IsCloseToStartGame, addr 0x239511c, size 0xc8, virtual true, abstract: false, final true
  inline bool IsCloseToStartGame();

  /// @brief Method HandleMultiplayerSessionManagerDisconnected, addr 0x23951e4, size 0x28, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerSessionManagerConnectionOwnerStateChanged, addr 0x239520c, size 0xf8, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerConnectionOwnerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method StopListeningToGameStart, addr 0x2395304, size 0x26c, virtual false, abstract: false, final false
  inline void StopListeningToGameStart();

  /// @brief Method HandleMenuRpcManagerStartedLevel, addr 0x2395570, size 0x298, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerStartedLevel(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeyNetSerializable, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                               int64_t startTime);

  /// @brief Method HandleMenuRpcManagerCancelledLevelStart, addr 0x2395808, size 0x88, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerCancelledLevelStart(::StringW userId);

  /// @brief Method HandleMenuRpcManagerSetCountdownEndTime, addr 0x2395994, size 0x238, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetCountdownEndTime(::StringW userId, int64_t countdownTime);

  /// @brief Method HandleMenuRpcManagerCancelCountdown, addr 0x2395bcc, size 0x228, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerCancelCountdown(::StringW userId);

  /// @brief Method HandleMenuRpcManagerSetStartGameTime, addr 0x2395df4, size 0x48, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetStartGameTime(::StringW userId, int64_t startTime);

  /// @brief Method HandleSetIsStartButtonEnabled, addr 0x2395e3c, size 0x28, virtual false, abstract: false, final false
  inline void HandleSetIsStartButtonEnabled(::StringW userId, ::GlobalNamespace::CannotStartGameReason cannotStartGameReason);

  /// @brief Method HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel, addr 0x2395e64, size 0x24, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::StringW userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements);

  /// @brief Method HandleStartTimeChanged, addr 0x2395e88, size 0x20, virtual false, abstract: false, final false
  inline void HandleStartTimeChanged();

  /// @brief Method HandleMultiplayerLevelLoaderStillDownloadingSong, addr 0x2395ea8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelLoaderStillDownloadingSong();

  /// @brief Method HandleMenuRpcManagerSetSelectedBeatmap, addr 0x2395ec4, size 0x84, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetSelectedBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable);

  /// @brief Method HandleMenuRpcManagerSetSelectedGameplayModifiers, addr 0x2395f48, size 0x48, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetSelectedGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* modifiers);

  /// @brief Method HandleMenuRpcManagerClearSelectedBeatmap, addr 0x2395f90, size 0x54, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerClearSelectedBeatmap(::StringW userId);

  /// @brief Method HandleMenuRpcManagerClearSelectedGameplayModifiers, addr 0x2395fe4, size 0x48, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerClearSelectedGameplayModifiers(::StringW userId);

  /// @brief Method HandleMultiplayerLevelLoaderCountdownFinished, addr 0x239602c, size 0x33c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelLoaderCountdownFinished(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method StartMultiplayerLevel, addr 0x2396368, size 0x314, virtual false, abstract: false, final false
  inline void StartMultiplayerLevel(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::System::Action* beforeSceneSwitchCallback);

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x239667c, size 0x94, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleMultiplayerLevelDidDisconnect, addr 0x2396710, size 0x8c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method StopLoading, addr 0x2395890, size 0x104, virtual false, abstract: false, final false
  inline void StopLoading();

  static inline ::GlobalNamespace::LobbyGameStateController* New_ctor();

  /// @brief Method .ctor, addr 0x239679c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyGameStateController(LobbyGameStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyGameStateController(LobbyGameStateController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyGameStateController();

public:
  /// @brief Field _lobbyPlayersDataModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyPlayersDataModel* ____lobbyPlayersDataModel;

  /// @brief Field _playerDataModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _menuRpcManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMenuRpcManager* ____menuRpcManager;

  /// @brief Field _multiplayerSessionManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _multiplayerLevelLoader, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelLoader* ____multiplayerLevelLoader;

  /// @brief Field _menuTransitionsHelper, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _lobbyGameStateModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::LobbyGameStateModel* ____lobbyGameStateModel;

  /// @brief Field _lobbyPlayerPermissionsModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayerPermissionsModel* ____lobbyPlayerPermissionsModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field _beatmapLevelsModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field selectedLevelGameplaySetupDataChangedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* ___selectedLevelGameplaySetupDataChangedEvent;

  /// @brief Field gameStartedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* ___gameStartedEvent;

  /// @brief Field gameStartCancelledEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___gameStartCancelledEvent;

  /// @brief Field countdownStartedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___countdownStartedEvent;

  /// @brief Field countdownCancelledEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___countdownCancelledEvent;

  /// @brief Field songStillDownloadingEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___songStillDownloadingEvent;

  /// @brief Field startTimeChangedEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action* ___startTimeChangedEvent;

  /// @brief Field levelFinishedEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* ___levelFinishedEvent;

  /// @brief Field levelDidGetDisconnectedEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___levelDidGetDisconnectedEvent;

  /// @brief Field lobbyDisconnectedEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___lobbyDisconnectedEvent;

  /// @brief Field beforeSceneSwitchCallbackEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action* ___beforeSceneSwitchCallbackEvent;

  /// @brief Field lobbyStateChangedEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* ___lobbyStateChangedEvent;

  /// @brief Field startButtonEnabledEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::CannotStartGameReason>* ___startButtonEnabledEvent;

  /// @brief Field playerMissingEntitlementsChangedEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* ___playerMissingEntitlementsChangedEvent;

  /// @brief Field <levelStartInitiated>k__BackingField, offset: 0xd0, size: 0x1, def value: None
  bool ____levelStartInitiated_k__BackingField;

  /// @brief Field <countdownStarted>k__BackingField, offset: 0xd1, size: 0x1, def value: None
  bool ____countdownStarted_k__BackingField;

  /// @brief Field <countdownEndTime>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  int64_t ____countdownEndTime_k__BackingField;

  /// @brief Field <isDisconnected>k__BackingField, offset: 0xe0, size: 0x1, def value: None
  bool ____isDisconnected_k__BackingField;

  /// @brief Field <disconnectedReason>k__BackingField, offset: 0xe4, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ____disconnectedReason_k__BackingField;

  /// @brief Field _predictedStartTime, offset: 0xe8, size: 0x8, def value: None
  int64_t ____predictedStartTime;

  /// @brief Field _startTime, offset: 0xf0, size: 0x8, def value: None
  int64_t ____startTime;

  /// @brief Field _levelStartedOnTime, offset: 0xf8, size: 0x1, def value: None
  bool ____levelStartedOnTime;

  /// @brief Field _state, offset: 0xfc, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerLobbyState ____state;

  /// @brief Field _cannotStartGameReason, offset: 0x100, size: 0x4, def value: None
  ::GlobalNamespace::CannotStartGameReason ____cannotStartGameReason;

  /// @brief Field _selectedLevelGameplaySetupData, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::LevelGameplaySetupData* ____selectedLevelGameplaySetupData;

  /// @brief Field kShortTimerMs offset 0xffffffff size 0x8
  static constexpr int64_t kShortTimerMs{ static_cast<int64_t>(0x1388) };

  /// @brief Field kLongTimerMs offset 0xffffffff size 0x8
  static constexpr int64_t kLongTimerMs{ static_cast<int64_t>(0xea60) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyGameStateController, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____lobbyPlayersDataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____playerDataModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____menuRpcManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____multiplayerSessionManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____multiplayerLevelLoader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____menuTransitionsHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____lobbyGameStateModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____lobbyPlayerPermissionsModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____beatmapCharacteristicCollection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____beatmapLevelsModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___selectedLevelGameplaySetupDataChangedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___gameStartedEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___gameStartCancelledEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___countdownStartedEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___countdownCancelledEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___songStillDownloadingEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___startTimeChangedEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___levelFinishedEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___levelDidGetDisconnectedEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___lobbyDisconnectedEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___beforeSceneSwitchCallbackEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___lobbyStateChangedEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___startButtonEnabledEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ___playerMissingEntitlementsChangedEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____levelStartInitiated_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____countdownStarted_k__BackingField) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____countdownEndTime_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____isDisconnected_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____disconnectedReason_k__BackingField) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____predictedStartTime) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____startTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____levelStartedOnTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____state) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____cannotStartGameReason) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateController, ____selectedLevelGameplaySetupData) == 0x108, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyGameStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyGameStateController*, "", "LobbyGameStateController");
NEED_NO_BOX(::GlobalNamespace::__LobbyGameStateController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LobbyGameStateController____c*, "", "LobbyGameStateController/<>c");
NEED_NO_BOX(::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*, "", "LobbyGameStateController/<>c__DisplayClass98_0");
