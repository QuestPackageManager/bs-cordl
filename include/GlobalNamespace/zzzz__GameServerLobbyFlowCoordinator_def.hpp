#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerLobbyFlowCoordinator)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace GlobalNamespace {
class CenterStageScreenController;
}
namespace GlobalNamespace {
class ConnectionErrorDialogViewController;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class LobbyGameStateModel;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class LobbySetupViewController;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class MultiplayerLobbyController;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerResultsViewController;
}
namespace GlobalNamespace {
class MultiplayerSettingsPanelController;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
namespace GlobalNamespace {
class SelectModifiersViewController;
}
namespace GlobalNamespace {
class ServerPlayerListViewController;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
struct __GameServerLobbyFlowCoordinator__LobbyType;
}
namespace GlobalNamespace {
class __GameServerLobbyFlowCoordinator____c__DisplayClass70_0;
}
namespace GlobalNamespace {
class __GameServerLobbyFlowCoordinator____c__DisplayClass85_0;
}
namespace GlobalNamespace {
class __LevelSelectionFlowCoordinator__State;
}
namespace HMUI {
class ScreenModeController;
}
namespace HMUI {
class ScreenModeSO;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class Action;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GameServerLobbyFlowCoordinator__LobbyType;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
namespace GlobalNamespace {
class __GameServerLobbyFlowCoordinator____c__DisplayClass70_0;
}
namespace GlobalNamespace {
class __GameServerLobbyFlowCoordinator____c__DisplayClass85_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType);
MARK_REF_PTR_T(::GlobalNamespace::GameServerLobbyFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0);
// Type: ::LobbyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4813))
// CS Name: ::GameServerLobbyFlowCoordinator::LobbyType
struct CORDL_TYPE __GameServerLobbyFlowCoordinator__LobbyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameServerLobbyFlowCoordinator__LobbyType_Unwrapped
  enum struct ____GameServerLobbyFlowCoordinator__LobbyType_Unwrapped : int32_t {
    __E_HostSetup = static_cast<int32_t>(0x0),
    __E_ClientSetup = static_cast<int32_t>(0x1),
    __E_QuickPlayLobby = static_cast<int32_t>(0x2),
    __E_Party = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameServerLobbyFlowCoordinator__LobbyType_Unwrapped() const noexcept {
    return static_cast<____GameServerLobbyFlowCoordinator__LobbyType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameServerLobbyFlowCoordinator__LobbyType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameServerLobbyFlowCoordinator__LobbyType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HostSetup value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType const HostSetup;

  /// @brief Field ClientSetup value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType const ClientSetup;

  /// @brief Field QuickPlayLobby value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType const QuickPlayLobby;

  /// @brief Field Party value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType const Party;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass70_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4814))
// CS Name: ::GameServerLobbyFlowCoordinator::<>c__DisplayClass70_0*
class CORDL_TYPE __GameServerLobbyFlowCoordinator____c__DisplayClass70_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field eventSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_eventSystem, put = __cordl_internal_set_eventSystem))::UnityW<::UnityEngine::EventSystems::EventSystem> eventSystem;

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> value);

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_finishedCallback() const;

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get_eventSystem();

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get_eventSystem() const;

  constexpr void __cordl_internal_set_eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  static inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0* New_ctor();

  /// @brief Method .ctor, addr 0x23ee0a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Finish>b__0, addr 0x23f0ad8, size 0x70, virtual false, abstract: false, final false
  inline void _Finish_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__GameServerLobbyFlowCoordinator____c__DisplayClass70_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameServerLobbyFlowCoordinator____c__DisplayClass70_0(__GameServerLobbyFlowCoordinator____c__DisplayClass70_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameServerLobbyFlowCoordinator____c__DisplayClass70_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameServerLobbyFlowCoordinator____c__DisplayClass70_0(__GameServerLobbyFlowCoordinator____c__DisplayClass70_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameServerLobbyFlowCoordinator____c__DisplayClass70_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> _____4__this;

  /// @brief Field finishedCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field eventSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ___eventSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0, ___finishedCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0, ___eventSystem) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass85_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4815))
// CS Name: ::GameServerLobbyFlowCoordinator::<>c__DisplayClass85_0*
class CORDL_TYPE __GameServerLobbyFlowCoordinator____c__DisplayClass85_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> __4__this;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::StringW userId;

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> value);

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr void __cordl_internal_set_userId(::StringW value);

  static inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0* New_ctor();

  /// @brief Method .ctor, addr 0x23ef1bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleServerPlayerListViewControllerKickPlayer>b__0, addr 0x23f0b48, size 0xd8, virtual false, abstract: false, final false
  inline void _HandleServerPlayerListViewControllerKickPlayer_b__0(int32_t btnId);

  // Ctor Parameters [CppParam { name: "", ty: "__GameServerLobbyFlowCoordinator____c__DisplayClass85_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameServerLobbyFlowCoordinator____c__DisplayClass85_0(__GameServerLobbyFlowCoordinator____c__DisplayClass85_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameServerLobbyFlowCoordinator____c__DisplayClass85_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameServerLobbyFlowCoordinator____c__DisplayClass85_0(__GameServerLobbyFlowCoordinator____c__DisplayClass85_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameServerLobbyFlowCoordinator____c__DisplayClass85_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> _____4__this;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0, ___userId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameServerLobbyFlowCoordinator
// SizeInfo { instance_size: 448, native_size: -1, calculated_instance_size: 448, calculated_native_size: 441, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13535))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4816))
// CS Name: ::GameServerLobbyFlowCoordinator*
class CORDL_TYPE GameServerLobbyFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass85_0 = ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0;

  using __c__DisplayClass70_0 = ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0;

  using LobbyType = ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType;

  /// @brief Field _screenMode, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__screenMode, put = __cordl_internal_set__screenMode))::UnityW<::HMUI::ScreenModeSO> _screenMode;

  /// @brief Field _ambienceAudioClip, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__ambienceAudioClip, put = __cordl_internal_set__ambienceAudioClip))::UnityW<::UnityEngine::AudioClip> _ambienceAudioClip;

  /// @brief Field _serverPlayerListViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__serverPlayerListViewController,
                      put = __cordl_internal_set__serverPlayerListViewController))::UnityW<::GlobalNamespace::ServerPlayerListViewController> _serverPlayerListViewController;

  /// @brief Field _selectModifiersViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectModifiersViewController,
                      put = __cordl_internal_set__selectModifiersViewController))::UnityW<::GlobalNamespace::SelectModifiersViewController> _selectModifiersViewController;

  /// @brief Field _multiplayerLevelSelectionFlowCoordinator, offset 0xc8, size 0x8
  __declspec(
      property(get = __cordl_internal_get__multiplayerLevelSelectionFlowCoordinator,
               put = __cordl_internal_set__multiplayerLevelSelectionFlowCoordinator))::UnityW<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator> _multiplayerLevelSelectionFlowCoordinator;

  /// @brief Field _multiplayerResultsViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerResultsViewController,
                      put = __cordl_internal_set__multiplayerResultsViewController))::UnityW<::GlobalNamespace::MultiplayerResultsViewController> _multiplayerResultsViewController;

  /// @brief Field _simpleDialogPromptViewController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleDialogPromptViewController,
                      put = __cordl_internal_set__simpleDialogPromptViewController))::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> _simpleDialogPromptViewController;

  /// @brief Field _connectionErrorDialogViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionErrorDialogViewController,
                      put = __cordl_internal_set__connectionErrorDialogViewController))::UnityW<::GlobalNamespace::ConnectionErrorDialogViewController> _connectionErrorDialogViewController;

  /// @brief Field _multiplayerSettingsPanelController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSettingsPanelController,
                      put = __cordl_internal_set__multiplayerSettingsPanelController))::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> _multiplayerSettingsPanelController;

  /// @brief Field _gameplaySetupViewController, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplaySetupViewController,
                      put = __cordl_internal_set__gameplaySetupViewController))::UnityW<::GlobalNamespace::GameplaySetupViewController> _gameplaySetupViewController;

  /// @brief Field _multiplayerLobbyController, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLobbyController,
                      put = __cordl_internal_set__multiplayerLobbyController))::UnityW<::GlobalNamespace::MultiplayerLobbyController> _multiplayerLobbyController;

  /// @brief Field _fadeInOutController, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOutController, put = __cordl_internal_set__fadeInOutController))::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOutController;

  /// @brief Field _centerStageScreenController, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__centerStageScreenController,
                      put = __cordl_internal_set__centerStageScreenController))::UnityW<::GlobalNamespace::CenterStageScreenController> _centerStageScreenController;

  /// @brief Field _lobbyStateDataModel, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyStateDataModel, put = __cordl_internal_set__lobbyStateDataModel))::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _lobbyGameStateModel, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateModel, put = __cordl_internal_set__lobbyGameStateModel))::GlobalNamespace::LobbyGameStateModel* _lobbyGameStateModel;

  /// @brief Field _lobbyPlayersDataModel, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayersDataModel, put = __cordl_internal_set__lobbyPlayersDataModel))::GlobalNamespace::ILobbyPlayersDataModel* _lobbyPlayersDataModel;

  /// @brief Field _lobbyGameStateController, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateController,
                      put = __cordl_internal_set__lobbyGameStateController))::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field _lobbyPlayerPermissionsModel, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayerPermissionsModel,
                      put = __cordl_internal_set__lobbyPlayerPermissionsModel))::GlobalNamespace::LobbyPlayerPermissionsModel* _lobbyPlayerPermissionsModel;

  /// @brief Field _lobbySetupViewController, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbySetupViewController,
                      put = __cordl_internal_set__lobbySetupViewController))::UnityW<::GlobalNamespace::LobbySetupViewController> _lobbySetupViewController;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__unifiedNetworkPlayerModel,
                      put = __cordl_internal_set__unifiedNetworkPlayerModel))::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  /// @brief Field _screenModeController, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__screenModeController, put = __cordl_internal_set__screenModeController))::UnityW<::HMUI::ScreenModeController> _screenModeController;

  /// @brief Field _playerDataModel, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _platformLeaderboardsModel, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardsModel,
                      put = __cordl_internal_set__platformLeaderboardsModel))::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _platformLeaderboardsModel;

  /// @brief Field _songPreviewPlayer, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer))::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _analyticsModel, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _lastSimpleLevelSelectionFlowCoordinatorState, offset 0x170, size 0x8
  __declspec(
      property(get = __cordl_internal_get__lastSimpleLevelSelectionFlowCoordinatorState,
               put = __cordl_internal_set__lastSimpleLevelSelectionFlowCoordinatorState))::GlobalNamespace::__LevelSelectionFlowCoordinator__State* _lastSimpleLevelSelectionFlowCoordinatorState;

  /// @brief Field _isAlreadyFinishing, offset 0x178, size 0x1
  __declspec(property(get = __cordl_internal_get__isAlreadyFinishing, put = __cordl_internal_set__isAlreadyFinishing)) bool _isAlreadyFinishing;

  /// @brief Field _stringBuilder, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__stringBuilder, put = __cordl_internal_set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Field _canStartGameCts, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__canStartGameCts, put = __cordl_internal_set__canStartGameCts))::System::Threading::CancellationTokenSource* _canStartGameCts;

  /// @brief Field willFinishEvent, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_willFinishEvent, put = __cordl_internal_set_willFinishEvent))::System::Action* willFinishEvent;

  /// @brief Field didFinishEvent, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action* didFinishEvent;

  /// @brief Field startGameOrReadyEvent, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_startGameOrReadyEvent, put = __cordl_internal_set_startGameOrReadyEvent))::System::Action* startGameOrReadyEvent;

  /// @brief Field didSetupEvent, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSetupEvent, put = __cordl_internal_set_didSetupEvent))::System::Action* didSetupEvent;

  /// @brief Field didOpenInvitePanelEvent, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_didOpenInvitePanelEvent, put = __cordl_internal_set_didOpenInvitePanelEvent))::System::Action* didOpenInvitePanelEvent;

  /// @brief Field <rejoinQuickPlay>k__BackingField, offset 0x1b8, size 0x1
  __declspec(property(get = __cordl_internal_get__rejoinQuickPlay_k__BackingField, put = __cordl_internal_set__rejoinQuickPlay_k__BackingField)) bool _rejoinQuickPlay_k__BackingField;

  __declspec(property(get = get_isPartyOwner)) bool isPartyOwner;

  __declspec(property(get = get_isPublicGame)) bool isPublicGame;

  __declspec(property(get = get_isManaged)) bool isManaged;

  __declspec(property(get = get_isQuickStartServer)) bool isQuickStartServer;

  __declspec(property(get = get_isQuickPlayServer)) bool isQuickPlayServer;

  __declspec(property(get = get_rejoinQuickPlay, put = set_rejoinQuickPlay)) bool rejoinQuickPlay;

  constexpr ::UnityW<::HMUI::ScreenModeSO>& __cordl_internal_get__screenMode();

  constexpr ::UnityW<::HMUI::ScreenModeSO> const& __cordl_internal_get__screenMode() const;

  constexpr void __cordl_internal_set__screenMode(::UnityW<::HMUI::ScreenModeSO> value);

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__ambienceAudioClip();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__ambienceAudioClip() const;

  constexpr void __cordl_internal_set__ambienceAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr ::UnityW<::GlobalNamespace::ServerPlayerListViewController>& __cordl_internal_get__serverPlayerListViewController();

  constexpr ::UnityW<::GlobalNamespace::ServerPlayerListViewController> const& __cordl_internal_get__serverPlayerListViewController() const;

  constexpr void __cordl_internal_set__serverPlayerListViewController(::UnityW<::GlobalNamespace::ServerPlayerListViewController> value);

  constexpr ::UnityW<::GlobalNamespace::SelectModifiersViewController>& __cordl_internal_get__selectModifiersViewController();

  constexpr ::UnityW<::GlobalNamespace::SelectModifiersViewController> const& __cordl_internal_get__selectModifiersViewController() const;

  constexpr void __cordl_internal_set__selectModifiersViewController(::UnityW<::GlobalNamespace::SelectModifiersViewController> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator>& __cordl_internal_get__multiplayerLevelSelectionFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator> const& __cordl_internal_get__multiplayerLevelSelectionFlowCoordinator() const;

  constexpr void __cordl_internal_set__multiplayerLevelSelectionFlowCoordinator(::UnityW<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsViewController>& __cordl_internal_get__multiplayerResultsViewController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsViewController> const& __cordl_internal_get__multiplayerResultsViewController() const;

  constexpr void __cordl_internal_set__multiplayerResultsViewController(::UnityW<::GlobalNamespace::MultiplayerResultsViewController> value);

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>& __cordl_internal_get__simpleDialogPromptViewController();

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> const& __cordl_internal_get__simpleDialogPromptViewController() const;

  constexpr void __cordl_internal_set__simpleDialogPromptViewController(::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> value);

  constexpr ::UnityW<::GlobalNamespace::ConnectionErrorDialogViewController>& __cordl_internal_get__connectionErrorDialogViewController();

  constexpr ::UnityW<::GlobalNamespace::ConnectionErrorDialogViewController> const& __cordl_internal_get__connectionErrorDialogViewController() const;

  constexpr void __cordl_internal_set__connectionErrorDialogViewController(::UnityW<::GlobalNamespace::ConnectionErrorDialogViewController> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController>& __cordl_internal_get__multiplayerSettingsPanelController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> const& __cordl_internal_get__multiplayerSettingsPanelController() const;

  constexpr void __cordl_internal_set__multiplayerSettingsPanelController(::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> value);

  constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController>& __cordl_internal_get__gameplaySetupViewController();

  constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController> const& __cordl_internal_get__gameplaySetupViewController() const;

  constexpr void __cordl_internal_set__gameplaySetupViewController(::UnityW<::GlobalNamespace::GameplaySetupViewController> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyController>& __cordl_internal_get__multiplayerLobbyController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyController> const& __cordl_internal_get__multiplayerLobbyController() const;

  constexpr void __cordl_internal_set__multiplayerLobbyController(::UnityW<::GlobalNamespace::MultiplayerLobbyController> value);

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOutController();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOutController() const;

  constexpr void __cordl_internal_set__fadeInOutController(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr ::UnityW<::GlobalNamespace::CenterStageScreenController>& __cordl_internal_get__centerStageScreenController();

  constexpr ::UnityW<::GlobalNamespace::CenterStageScreenController> const& __cordl_internal_get__centerStageScreenController() const;

  constexpr void __cordl_internal_set__centerStageScreenController(::UnityW<::GlobalNamespace::CenterStageScreenController> value);

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __cordl_internal_get__lobbyStateDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __cordl_internal_get__lobbyStateDataModel() const;

  constexpr void __cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr ::GlobalNamespace::LobbyGameStateModel*& __cordl_internal_get__lobbyGameStateModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> const& __cordl_internal_get__lobbyGameStateModel() const;

  constexpr void __cordl_internal_set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value);

  constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& __cordl_internal_get__lobbyPlayersDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& __cordl_internal_get__lobbyPlayersDataModel() const;

  constexpr void __cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value);

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __cordl_internal_get__lobbyGameStateController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& __cordl_internal_get__lobbyGameStateController() const;

  constexpr void __cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __cordl_internal_get__lobbyPlayerPermissionsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& __cordl_internal_get__lobbyPlayerPermissionsModel() const;

  constexpr void __cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value);

  constexpr ::UnityW<::GlobalNamespace::LobbySetupViewController>& __cordl_internal_get__lobbySetupViewController();

  constexpr ::UnityW<::GlobalNamespace::LobbySetupViewController> const& __cordl_internal_get__lobbySetupViewController() const;

  constexpr void __cordl_internal_set__lobbySetupViewController(::UnityW<::GlobalNamespace::LobbySetupViewController> value);

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __cordl_internal_get__unifiedNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const& __cordl_internal_get__unifiedNetworkPlayerModel() const;

  constexpr void __cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  constexpr ::UnityW<::HMUI::ScreenModeController>& __cordl_internal_get__screenModeController();

  constexpr ::UnityW<::HMUI::ScreenModeController> const& __cordl_internal_get__screenModeController() const;

  constexpr void __cordl_internal_set__screenModeController(::UnityW<::HMUI::ScreenModeController> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__platformLeaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__platformLeaderboardsModel() const;

  constexpr void __cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*& __cordl_internal_get__lastSimpleLevelSelectionFlowCoordinatorState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*> const& __cordl_internal_get__lastSimpleLevelSelectionFlowCoordinatorState() const;

  constexpr void __cordl_internal_set__lastSimpleLevelSelectionFlowCoordinatorState(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* value);

  constexpr bool& __cordl_internal_get__isAlreadyFinishing();

  constexpr bool const& __cordl_internal_get__isAlreadyFinishing() const;

  constexpr void __cordl_internal_set__isAlreadyFinishing(bool value);

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__stringBuilder() const;

  constexpr void __cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value);

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__canStartGameCts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__canStartGameCts() const;

  constexpr void __cordl_internal_set__canStartGameCts(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Action*& __cordl_internal_get_willFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_willFinishEvent() const;

  constexpr void __cordl_internal_set_willFinishEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_startGameOrReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_startGameOrReadyEvent() const;

  constexpr void __cordl_internal_set_startGameOrReadyEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didSetupEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didSetupEvent() const;

  constexpr void __cordl_internal_set_didSetupEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didOpenInvitePanelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didOpenInvitePanelEvent() const;

  constexpr void __cordl_internal_set_didOpenInvitePanelEvent(::System::Action* value);

  constexpr bool& __cordl_internal_get__rejoinQuickPlay_k__BackingField();

  constexpr bool const& __cordl_internal_get__rejoinQuickPlay_k__BackingField() const;

  constexpr void __cordl_internal_set__rejoinQuickPlay_k__BackingField(bool value);

  /// @brief Method get_isPartyOwner, addr 0x23e9798, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isPartyOwner();

  /// @brief Method get_isPublicGame, addr 0x23e97b4, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isPublicGame();

  /// @brief Method get_isManaged, addr 0x23e9874, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isManaged();

  /// @brief Method get_isQuickStartServer, addr 0x23e9934, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isQuickStartServer();

  /// @brief Method get_isQuickPlayServer, addr 0x23e99f4, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isQuickPlayServer();

  /// @brief Method add_willFinishEvent, addr 0x23e9ab4, size 0xa0, virtual false, abstract: false, final false
  inline void add_willFinishEvent(::System::Action* value);

  /// @brief Method remove_willFinishEvent, addr 0x23e9b54, size 0xa0, virtual false, abstract: false, final false
  inline void remove_willFinishEvent(::System::Action* value);

  /// @brief Method add_didFinishEvent, addr 0x23e9bf4, size 0xa0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x23e9c94, size 0xa0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

  /// @brief Method add_startGameOrReadyEvent, addr 0x23e9d34, size 0xa0, virtual false, abstract: false, final false
  inline void add_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method remove_startGameOrReadyEvent, addr 0x23e9dd4, size 0xa0, virtual false, abstract: false, final false
  inline void remove_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method add_didSetupEvent, addr 0x23e9e74, size 0xa0, virtual false, abstract: false, final false
  inline void add_didSetupEvent(::System::Action* value);

  /// @brief Method remove_didSetupEvent, addr 0x23e9f14, size 0xa0, virtual false, abstract: false, final false
  inline void remove_didSetupEvent(::System::Action* value);

  /// @brief Method add_didOpenInvitePanelEvent, addr 0x23e9fb4, size 0xa0, virtual false, abstract: false, final false
  inline void add_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method remove_didOpenInvitePanelEvent, addr 0x23ea054, size 0xa0, virtual false, abstract: false, final false
  inline void remove_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method get_rejoinQuickPlay, addr 0x23ea0f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_rejoinQuickPlay();

  /// @brief Method set_rejoinQuickPlay, addr 0x23ea0fc, size 0xc, virtual false, abstract: false, final false
  inline void set_rejoinQuickPlay(bool value);

  /// @brief Method GetLobbyType, addr 0x23ea108, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType GetLobbyType();

  /// @brief Method DidActivate, addr 0x23ea158, size 0x1170, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x23ebad4, size 0xe58, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method InitialViewControllerWasPresented, addr 0x23eca78, size 0xdc, virtual true, abstract: false, final false
  inline void InitialViewControllerWasPresented();

  /// @brief Method TransitionDidStart, addr 0x23ecc9c, size 0x1d8, virtual true, abstract: false, final false
  inline void TransitionDidStart();

  /// @brief Method TransitionDidFinish, addr 0x23ece74, size 0x584, virtual true, abstract: false, final false
  inline void TransitionDidFinish();

  /// @brief Method TopViewControllerWillChange, addr 0x23ed84c, size 0xa8, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method BackButtonWasPressed, addr 0x23eda90, size 0x168, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method PresentBackButtonConfirmationDialog, addr 0x23edbf8, size 0x2b4, virtual false, abstract: false, final false
  inline void PresentBackButtonConfirmationDialog();

  /// @brief Method Finish, addr 0x23edeac, size 0x1f4, virtual false, abstract: false, final false
  inline void Finish(::System::Action* finishedCallback, bool withFadeOut);

  /// @brief Method GetInitialGameState, addr 0x23ecb54, size 0x148, virtual false, abstract: false, final false
  inline void GetInitialGameState();

  /// @brief Method HandleLobbyPlayersDataModelDidChange, addr 0x23ee1a0, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyPlayersDataModelDidChange(::StringW userId);

  /// @brief Method HandleServerPlayerListViewControllerDidOpenInvitePanel, addr 0x23ee1a4, size 0x1c, virtual false, abstract: false, final false
  inline void HandleServerPlayerListViewControllerDidOpenInvitePanel();

  /// @brief Method HandleLobbySetupViewControllerSelectBeatmap, addr 0x23ee1c0, size 0x1e8, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerSelectBeatmap();

  /// @brief Method HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged, addr 0x23ee3c8, size 0x230, virtual false, abstract: false, final false
  inline void HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged(bool isActive);

  /// @brief Method HandleLobbyGameStateControllerLobbyDisconnected, addr 0x23ee818, size 0xb0, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLobbyDisconnected();

  /// @brief Method HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel, addr 0x23ee8c8, size 0xe8, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* state);

  /// @brief Method HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel, addr 0x23ee9b0, size 0x38, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel();

  /// @brief Method HandleLobbySetupViewControllerSelectModifiers, addr 0x23ee9e8, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerSelectModifiers();

  /// @brief Method HandleLobbySetupViewControllerClearSelectedBeatmap, addr 0x23eebe0, size 0xa4, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerClearSelectedBeatmap();

  /// @brief Method HandleLobbySetupViewControllerClearSelectedModifiers, addr 0x23eec84, size 0xa4, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerClearSelectedModifiers();

  /// @brief Method HandleLobbyGameStateControllerGameStateChanged, addr 0x23eed28, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerGameStateChanged(::GlobalNamespace::MultiplayerLobbyState state);

  /// @brief Method HandleServerPlayerListViewControllerSelectSuggestedBeatmap, addr 0x23eed44, size 0xac, virtual false, abstract: false, final false
  inline void HandleServerPlayerListViewControllerSelectSuggestedBeatmap(::GlobalNamespace::BeatmapKey beatmapKey);

  /// @brief Method HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers, addr 0x23eedf0, size 0xac, virtual false, abstract: false, final false
  inline void HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers(::GlobalNamespace::GameplayModifiers* modifiers);

  /// @brief Method HandleServerPlayerListViewControllerKickPlayer, addr 0x23eee9c, size 0x320, virtual false, abstract: false, final false
  inline void HandleServerPlayerListViewControllerKickPlayer(::StringW userId);

  /// @brief Method HandleLobbyGameStateControllerCountdownStarted, addr 0x23ef1c4, size 0x20c, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerCountdownStarted();

  /// @brief Method HandleLobbyGameStateControllerCountdownCancelled, addr 0x23ef3d0, size 0x38, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerCountdownCancelled();

  /// @brief Method HandleLobbyGameStateControllerGameStarted, addr 0x23ef408, size 0x2c8, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerGameStarted(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method HandleLobbyGameStateControllerStartTimeChanged, addr 0x23ef6d0, size 0x1ec, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerStartTimeChanged();

  /// @brief Method HandleLobbyGameStateControllerSongStillDownloading, addr 0x23ef8bc, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerSongStillDownloading();

  /// @brief Method HandleLobbySetupViewControllerStartGameOrReady, addr 0x23ef8c0, size 0x318, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerStartGameOrReady();

  /// @brief Method HandleLobbySetupViewControllerCancelGameOrUnready, addr 0x23efbd8, size 0x174, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerCancelGameOrUnready();

  /// @brief Method HandleLobbyGameStateControllerCancelStartTime, addr 0x23efd4c, size 0x38, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerCancelStartTime();

  /// @brief Method HandleLobbyGameStateControllerGameStartedPresentView, addr 0x23efd84, size 0xac, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerGameStartedPresentView(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method HandleLobbyGameStateControllerLevelFinished, addr 0x23efe30, size 0x40c, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLevelFinished(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                          ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleLobbyGameStateControllerLevelDidGetDisconnected, addr 0x23f023c, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLevelDidGetDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerResultsViewControllerBackToLobbyPressed, addr 0x23f0240, size 0x14c, virtual false, abstract: false, final false
  inline void HandleMultiplayerResultsViewControllerBackToLobbyPressed(::GlobalNamespace::MultiplayerResultsViewController* viewController);

  /// @brief Method HandleMultiplayerResultsViewControllerBackToMenuPressed, addr 0x23f038c, size 0xc, virtual false, abstract: false, final false
  inline void HandleMultiplayerResultsViewControllerBackToMenuPressed(::GlobalNamespace::MultiplayerResultsViewController* viewController);

  /// @brief Method SetupLobbyWithPermissions, addr 0x23eb618, size 0x4bc, virtual false, abstract: false, final false
  inline void SetupLobbyWithPermissions();

  /// @brief Method SetLobbyPlayerDataToViews, addr 0x23eb414, size 0x204, virtual false, abstract: false, final false
  inline void SetLobbyPlayerDataToViews(::StringW userId);

  /// @brief Method ShowSideViewControllers, addr 0x23ed8f4, size 0x64, virtual false, abstract: false, final false
  inline void ShowSideViewControllers(bool showSideViewControllers, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method ShowBackButton, addr 0x23ed958, size 0xc, virtual false, abstract: false, final false
  inline void ShowBackButton(bool show);

  /// @brief Method GetLocalizedTitle, addr 0x23f0398, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetLocalizedTitle();

  /// @brief Method SetTitle, addr 0x23ed964, size 0x12c, virtual false, abstract: false, final false
  inline void SetTitle(::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method ShowDisconnectDialogAndFinish, addr 0x23ed3f8, size 0x454, virtual false, abstract: false, final false
  inline void ShowDisconnectDialogAndFinish(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method UpdateLocalPlayerIsActiveState, addr 0x23ee5f8, size 0x220, virtual false, abstract: false, final false
  inline void UpdateLocalPlayerIsActiveState(bool isActive);

  /// @brief Method HandleLobbyGameBeforeSceneSwitchCallback, addr 0x23f0424, size 0x1f4, virtual false, abstract: false, final false
  inline void HandleLobbyGameBeforeSceneSwitchCallback();

  /// @brief Method HandleLobbyGameStateStartButtonEnabled, addr 0x23f0618, size 0x34, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateStartButtonEnabled(::GlobalNamespace::CannotStartGameReason cannotStartGameReason);

  /// @brief Method HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel, addr 0x23f064c, size 0x2cc, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements);

  /// @brief Method HandleLobbyPlayerPermissionsModelPermissionsChanged, addr 0x23f0918, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyPlayerPermissionsModelPermissionsChanged();

  /// @brief Method DismissViewControllersAndCoordinators, addr 0x23ee0a8, size 0xf8, virtual false, abstract: false, final false
  inline void DismissViewControllersAndCoordinators();

  static inline ::GlobalNamespace::GameServerLobbyFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x23f091c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <PresentBackButtonConfirmationDialog>b__69_0, addr 0x23f0984, size 0x148, virtual false, abstract: false, final false
  inline void _PresentBackButtonConfirmationDialog_b__69_0(int32_t btnIndex);

  /// @brief Method <ShowDisconnectDialogAndFinish>b__105_0, addr 0x23f0acc, size 0xc, virtual false, abstract: false, final false
  inline void _ShowDisconnectDialogAndFinish_b__105_0();

  // Ctor Parameters [CppParam { name: "", ty: "GameServerLobbyFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerLobbyFlowCoordinator(GameServerLobbyFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerLobbyFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerLobbyFlowCoordinator(GameServerLobbyFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerLobbyFlowCoordinator();

public:
  /// @brief Field _screenMode, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::HMUI::ScreenModeSO> ____screenMode;

  /// @brief Field _ambienceAudioClip, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____ambienceAudioClip;

  /// @brief Field _serverPlayerListViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ServerPlayerListViewController> ____serverPlayerListViewController;

  /// @brief Field _selectModifiersViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectModifiersViewController> ____selectModifiersViewController;

  /// @brief Field _multiplayerLevelSelectionFlowCoordinator, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator> ____multiplayerLevelSelectionFlowCoordinator;

  /// @brief Field _multiplayerResultsViewController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerResultsViewController> ____multiplayerResultsViewController;

  /// @brief Field _simpleDialogPromptViewController, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> ____simpleDialogPromptViewController;

  /// @brief Field _connectionErrorDialogViewController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ConnectionErrorDialogViewController> ____connectionErrorDialogViewController;

  /// @brief Field _multiplayerSettingsPanelController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> ____multiplayerSettingsPanelController;

  /// @brief Field _gameplaySetupViewController, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplaySetupViewController> ____gameplaySetupViewController;

  /// @brief Field _multiplayerLobbyController, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyController> ____multiplayerLobbyController;

  /// @brief Field _fadeInOutController, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOutController;

  /// @brief Field _centerStageScreenController, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CenterStageScreenController> ____centerStageScreenController;

  /// @brief Field _lobbyStateDataModel, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _lobbyGameStateModel, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::LobbyGameStateModel* ____lobbyGameStateModel;

  /// @brief Field _lobbyPlayersDataModel, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyPlayersDataModel* ____lobbyPlayersDataModel;

  /// @brief Field _lobbyGameStateController, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyGameStateController* ____lobbyGameStateController;

  /// @brief Field _lobbyPlayerPermissionsModel, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayerPermissionsModel* ____lobbyPlayerPermissionsModel;

  /// @brief Field _lobbySetupViewController, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LobbySetupViewController> ____lobbySetupViewController;

  /// @brief Field _unifiedNetworkPlayerModel, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::IUnifiedNetworkPlayerModel* ____unifiedNetworkPlayerModel;

  /// @brief Field _screenModeController, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::HMUI::ScreenModeController> ____screenModeController;

  /// @brief Field _playerDataModel, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _platformLeaderboardsModel, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____platformLeaderboardsModel;

  /// @brief Field _songPreviewPlayer, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _analyticsModel, offset: 0x168, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _lastSimpleLevelSelectionFlowCoordinatorState, offset: 0x170, size: 0x8, def value: None
  ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* ____lastSimpleLevelSelectionFlowCoordinatorState;

  /// @brief Field _isAlreadyFinishing, offset: 0x178, size: 0x1, def value: None
  bool ____isAlreadyFinishing;

  /// @brief Field _stringBuilder, offset: 0x180, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  /// @brief Field _canStartGameCts, offset: 0x188, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____canStartGameCts;

  /// @brief Field willFinishEvent, offset: 0x190, size: 0x8, def value: None
  ::System::Action* ___willFinishEvent;

  /// @brief Field didFinishEvent, offset: 0x198, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  /// @brief Field startGameOrReadyEvent, offset: 0x1a0, size: 0x8, def value: None
  ::System::Action* ___startGameOrReadyEvent;

  /// @brief Field didSetupEvent, offset: 0x1a8, size: 0x8, def value: None
  ::System::Action* ___didSetupEvent;

  /// @brief Field didOpenInvitePanelEvent, offset: 0x1b0, size: 0x8, def value: None
  ::System::Action* ___didOpenInvitePanelEvent;

  /// @brief Field <rejoinQuickPlay>k__BackingField, offset: 0x1b8, size: 0x1, def value: None
  bool ____rejoinQuickPlay_k__BackingField;

  /// @brief Field kPlayersMissingEntitlementKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayersMissingEntitlementKey{ u"LABEL_PLAYERS_MISSING_ENTITLEMENT" };

  /// @brief Field kMaxPredictedStartTimeDifferenceMs offset 0xffffffff size 0x8
  static constexpr int64_t kMaxPredictedStartTimeDifferenceMs{ static_cast<int64_t>(0x5dc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerLobbyFlowCoordinator, 0x1c0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____screenMode) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____ambienceAudioClip) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____serverPlayerListViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____selectModifiersViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____multiplayerLevelSelectionFlowCoordinator) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____multiplayerResultsViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____simpleDialogPromptViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____connectionErrorDialogViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____multiplayerSettingsPanelController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____gameplaySetupViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____multiplayerLobbyController) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____fadeInOutController) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____centerStageScreenController) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____lobbyStateDataModel) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____lobbyGameStateModel) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____lobbyPlayersDataModel) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____lobbyGameStateController) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____lobbyPlayerPermissionsModel) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____lobbySetupViewController) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____unifiedNetworkPlayerModel) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____screenModeController) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____playerDataModel) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____platformLeaderboardsModel) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____songPreviewPlayer) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____analyticsModel) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____lastSimpleLevelSelectionFlowCoordinatorState) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____isAlreadyFinishing) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____stringBuilder) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____canStartGameCts) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ___willFinishEvent) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ___didFinishEvent) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ___startGameOrReadyEvent) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ___didSetupEvent) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ___didOpenInvitePanelEvent) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerLobbyFlowCoordinator, ____rejoinQuickPlay_k__BackingField) == 0x1b8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType, "", "GameServerLobbyFlowCoordinator/LobbyType");
NEED_NO_BOX(::GlobalNamespace::GameServerLobbyFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerLobbyFlowCoordinator*, "", "GameServerLobbyFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0*, "", "GameServerLobbyFlowCoordinator/<>c__DisplayClass70_0");
NEED_NO_BOX(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0*, "", "GameServerLobbyFlowCoordinator/<>c__DisplayClass85_0");
