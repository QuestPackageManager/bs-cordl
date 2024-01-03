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
class PreviewDifficultyBeatmap;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5509))
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5510))
// CS Name: ::GameServerLobbyFlowCoordinator::<>c__DisplayClass70_0*
class CORDL_TYPE __GameServerLobbyFlowCoordinator____c__DisplayClass70_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameServerLobbyFlowCoordinator* __4__this;

  /// @brief Field finishedCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_finishedCallback, put = __set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field eventSystem, offset 0x20, size 0x8
  __declspec(property(get = __get_eventSystem, put = __set_eventSystem))::UnityEngine::EventSystems::EventSystem* eventSystem;

  constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerLobbyFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameServerLobbyFlowCoordinator* value);

  constexpr ::System::Action*& __get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_finishedCallback() const;

  constexpr void __set_finishedCallback(::System::Action* value);

  constexpr ::UnityEngine::EventSystems::EventSystem*& __get_eventSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> const& __get_eventSystem() const;

  constexpr void __set_eventSystem(::UnityEngine::EventSystems::EventSystem* value);

  static inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0* New_ctor();

  /// @brief Method .ctor, addr 0x22932d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Finish>b__0, addr 0x2295ef0, size 0x70, virtual false, abstract: false, final false
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
  ::GlobalNamespace::GameServerLobbyFlowCoordinator* _____4__this;

  /// @brief Field finishedCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field eventSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::EventSystems::EventSystem* ___eventSystem;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5511))
// CS Name: ::GameServerLobbyFlowCoordinator::<>c__DisplayClass85_0*
class CORDL_TYPE __GameServerLobbyFlowCoordinator____c__DisplayClass85_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameServerLobbyFlowCoordinator* __4__this;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerLobbyFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameServerLobbyFlowCoordinator* value);

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  static inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0* New_ctor();

  /// @brief Method .ctor, addr 0x22945f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleServerPlayerListViewControllerKickPlayer>b__0, addr 0x2295f60, size 0xd8, virtual false, abstract: false, final false
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
  ::GlobalNamespace::GameServerLobbyFlowCoordinator* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5512))
// CS Name: ::GameServerLobbyFlowCoordinator*
class CORDL_TYPE GameServerLobbyFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass85_0 = ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0;

  using __c__DisplayClass70_0 = ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0;

  using LobbyType = ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType;

  /// @brief Field _screenMode, offset 0xa8, size 0x8
  __declspec(property(get = __get__screenMode, put = __set__screenMode))::HMUI::ScreenModeSO* _screenMode;

  /// @brief Field _ambienceAudioClip, offset 0xb0, size 0x8
  __declspec(property(get = __get__ambienceAudioClip, put = __set__ambienceAudioClip))::UnityEngine::AudioClip* _ambienceAudioClip;

  /// @brief Field _serverPlayerListViewController, offset 0xb8, size 0x8
  __declspec(property(get = __get__serverPlayerListViewController, put = __set__serverPlayerListViewController))::GlobalNamespace::ServerPlayerListViewController* _serverPlayerListViewController;

  /// @brief Field _selectModifiersViewController, offset 0xc0, size 0x8
  __declspec(property(get = __get__selectModifiersViewController, put = __set__selectModifiersViewController))::GlobalNamespace::SelectModifiersViewController* _selectModifiersViewController;

  /// @brief Field _multiplayerLevelSelectionFlowCoordinator, offset 0xc8, size 0x8
  __declspec(property(get = __get__multiplayerLevelSelectionFlowCoordinator,
                      put = __set__multiplayerLevelSelectionFlowCoordinator))::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* _multiplayerLevelSelectionFlowCoordinator;

  /// @brief Field _multiplayerResultsViewController, offset 0xd0, size 0x8
  __declspec(property(get = __get__multiplayerResultsViewController,
                      put = __set__multiplayerResultsViewController))::GlobalNamespace::MultiplayerResultsViewController* _multiplayerResultsViewController;

  /// @brief Field _simpleDialogPromptViewController, offset 0xd8, size 0x8
  __declspec(property(get = __get__simpleDialogPromptViewController,
                      put = __set__simpleDialogPromptViewController))::GlobalNamespace::SimpleDialogPromptViewController* _simpleDialogPromptViewController;

  /// @brief Field _connectionErrorDialogViewController, offset 0xe0, size 0x8
  __declspec(property(get = __get__connectionErrorDialogViewController,
                      put = __set__connectionErrorDialogViewController))::GlobalNamespace::ConnectionErrorDialogViewController* _connectionErrorDialogViewController;

  /// @brief Field _multiplayerSettingsPanelController, offset 0xe8, size 0x8
  __declspec(property(get = __get__multiplayerSettingsPanelController,
                      put = __set__multiplayerSettingsPanelController))::GlobalNamespace::MultiplayerSettingsPanelController* _multiplayerSettingsPanelController;

  /// @brief Field _gameplaySetupViewController, offset 0xf0, size 0x8
  __declspec(property(get = __get__gameplaySetupViewController, put = __set__gameplaySetupViewController))::GlobalNamespace::GameplaySetupViewController* _gameplaySetupViewController;

  /// @brief Field _multiplayerLobbyController, offset 0xf8, size 0x8
  __declspec(property(get = __get__multiplayerLobbyController, put = __set__multiplayerLobbyController))::GlobalNamespace::MultiplayerLobbyController* _multiplayerLobbyController;

  /// @brief Field _fadeInOutController, offset 0x100, size 0x8
  __declspec(property(get = __get__fadeInOutController, put = __set__fadeInOutController))::GlobalNamespace::FadeInOutController* _fadeInOutController;

  /// @brief Field _centerStageScreenController, offset 0x108, size 0x8
  __declspec(property(get = __get__centerStageScreenController, put = __set__centerStageScreenController))::GlobalNamespace::CenterStageScreenController* _centerStageScreenController;

  /// @brief Field _lobbyStateDataModel, offset 0x110, size 0x8
  __declspec(property(get = __get__lobbyStateDataModel, put = __set__lobbyStateDataModel))::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _lobbyGameStateModel, offset 0x118, size 0x8
  __declspec(property(get = __get__lobbyGameStateModel, put = __set__lobbyGameStateModel))::GlobalNamespace::LobbyGameStateModel* _lobbyGameStateModel;

  /// @brief Field _lobbyPlayersDataModel, offset 0x120, size 0x8
  __declspec(property(get = __get__lobbyPlayersDataModel, put = __set__lobbyPlayersDataModel))::GlobalNamespace::ILobbyPlayersDataModel* _lobbyPlayersDataModel;

  /// @brief Field _lobbyGameStateController, offset 0x128, size 0x8
  __declspec(property(get = __get__lobbyGameStateController, put = __set__lobbyGameStateController))::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field _lobbyPlayerPermissionsModel, offset 0x130, size 0x8
  __declspec(property(get = __get__lobbyPlayerPermissionsModel, put = __set__lobbyPlayerPermissionsModel))::GlobalNamespace::LobbyPlayerPermissionsModel* _lobbyPlayerPermissionsModel;

  /// @brief Field _lobbySetupViewController, offset 0x138, size 0x8
  __declspec(property(get = __get__lobbySetupViewController, put = __set__lobbySetupViewController))::GlobalNamespace::LobbySetupViewController* _lobbySetupViewController;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0x140, size 0x8
  __declspec(property(get = __get__unifiedNetworkPlayerModel, put = __set__unifiedNetworkPlayerModel))::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  /// @brief Field _screenModeController, offset 0x148, size 0x8
  __declspec(property(get = __get__screenModeController, put = __set__screenModeController))::HMUI::ScreenModeController* _screenModeController;

  /// @brief Field _playerDataModel, offset 0x150, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _platformLeaderboardsModel, offset 0x158, size 0x8
  __declspec(property(get = __get__platformLeaderboardsModel, put = __set__platformLeaderboardsModel))::GlobalNamespace::PlatformLeaderboardsModel* _platformLeaderboardsModel;

  /// @brief Field _songPreviewPlayer, offset 0x160, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::SongPreviewPlayer* _songPreviewPlayer;

  /// @brief Field _analyticsModel, offset 0x168, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _lastSimpleLevelSelectionFlowCoordinatorState, offset 0x170, size 0x8
  __declspec(property(get = __get__lastSimpleLevelSelectionFlowCoordinatorState,
                      put = __set__lastSimpleLevelSelectionFlowCoordinatorState))::GlobalNamespace::__LevelSelectionFlowCoordinator__State* _lastSimpleLevelSelectionFlowCoordinatorState;

  /// @brief Field _isAlreadyFinishing, offset 0x178, size 0x1
  __declspec(property(get = __get__isAlreadyFinishing, put = __set__isAlreadyFinishing)) bool _isAlreadyFinishing;

  /// @brief Field _stringBuilder, offset 0x180, size 0x8
  __declspec(property(get = __get__stringBuilder, put = __set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Field _canStartGameCts, offset 0x188, size 0x8
  __declspec(property(get = __get__canStartGameCts, put = __set__canStartGameCts))::System::Threading::CancellationTokenSource* _canStartGameCts;

  /// @brief Field willFinishEvent, offset 0x190, size 0x8
  __declspec(property(get = __get_willFinishEvent, put = __set_willFinishEvent))::System::Action* willFinishEvent;

  /// @brief Field didFinishEvent, offset 0x198, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action* didFinishEvent;

  /// @brief Field startGameOrReadyEvent, offset 0x1a0, size 0x8
  __declspec(property(get = __get_startGameOrReadyEvent, put = __set_startGameOrReadyEvent))::System::Action* startGameOrReadyEvent;

  /// @brief Field didSetupEvent, offset 0x1a8, size 0x8
  __declspec(property(get = __get_didSetupEvent, put = __set_didSetupEvent))::System::Action* didSetupEvent;

  /// @brief Field didOpenInvitePanelEvent, offset 0x1b0, size 0x8
  __declspec(property(get = __get_didOpenInvitePanelEvent, put = __set_didOpenInvitePanelEvent))::System::Action* didOpenInvitePanelEvent;

  /// @brief Field <rejoinQuickPlay>k__BackingField, offset 0x1b8, size 0x1
  __declspec(property(get = __get__rejoinQuickPlay_k__BackingField, put = __set__rejoinQuickPlay_k__BackingField)) bool _rejoinQuickPlay_k__BackingField;

  __declspec(property(get = get_isPartyOwner)) bool isPartyOwner;

  __declspec(property(get = get_isPublicGame)) bool isPublicGame;

  __declspec(property(get = get_isManaged)) bool isManaged;

  __declspec(property(get = get_isQuickStartServer)) bool isQuickStartServer;

  __declspec(property(get = get_isQuickPlayServer)) bool isQuickPlayServer;

  __declspec(property(get = get_rejoinQuickPlay, put = set_rejoinQuickPlay)) bool rejoinQuickPlay;

  constexpr ::HMUI::ScreenModeSO*& __get__screenMode();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeSO*> const& __get__screenMode() const;

  constexpr void __set__screenMode(::HMUI::ScreenModeSO* value);

  constexpr ::UnityEngine::AudioClip*& __get__ambienceAudioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__ambienceAudioClip() const;

  constexpr void __set__ambienceAudioClip(::UnityEngine::AudioClip* value);

  constexpr ::GlobalNamespace::ServerPlayerListViewController*& __get__serverPlayerListViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ServerPlayerListViewController*> const& __get__serverPlayerListViewController() const;

  constexpr void __set__serverPlayerListViewController(::GlobalNamespace::ServerPlayerListViewController* value);

  constexpr ::GlobalNamespace::SelectModifiersViewController*& __get__selectModifiersViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectModifiersViewController*> const& __get__selectModifiersViewController() const;

  constexpr void __set__selectModifiersViewController(::GlobalNamespace::SelectModifiersViewController* value);

  constexpr ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*& __get__multiplayerLevelSelectionFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*> const& __get__multiplayerLevelSelectionFlowCoordinator() const;

  constexpr void __set__multiplayerLevelSelectionFlowCoordinator(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* value);

  constexpr ::GlobalNamespace::MultiplayerResultsViewController*& __get__multiplayerResultsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsViewController*> const& __get__multiplayerResultsViewController() const;

  constexpr void __set__multiplayerResultsViewController(::GlobalNamespace::MultiplayerResultsViewController* value);

  constexpr ::GlobalNamespace::SimpleDialogPromptViewController*& __get__simpleDialogPromptViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> const& __get__simpleDialogPromptViewController() const;

  constexpr void __set__simpleDialogPromptViewController(::GlobalNamespace::SimpleDialogPromptViewController* value);

  constexpr ::GlobalNamespace::ConnectionErrorDialogViewController*& __get__connectionErrorDialogViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectionErrorDialogViewController*> const& __get__connectionErrorDialogViewController() const;

  constexpr void __set__connectionErrorDialogViewController(::GlobalNamespace::ConnectionErrorDialogViewController* value);

  constexpr ::GlobalNamespace::MultiplayerSettingsPanelController*& __get__multiplayerSettingsPanelController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSettingsPanelController*> const& __get__multiplayerSettingsPanelController() const;

  constexpr void __set__multiplayerSettingsPanelController(::GlobalNamespace::MultiplayerSettingsPanelController* value);

  constexpr ::GlobalNamespace::GameplaySetupViewController*& __get__gameplaySetupViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplaySetupViewController*> const& __get__gameplaySetupViewController() const;

  constexpr void __set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController* value);

  constexpr ::GlobalNamespace::MultiplayerLobbyController*& __get__multiplayerLobbyController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyController*> const& __get__multiplayerLobbyController() const;

  constexpr void __set__multiplayerLobbyController(::GlobalNamespace::MultiplayerLobbyController* value);

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOutController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOutController() const;

  constexpr void __set__fadeInOutController(::GlobalNamespace::FadeInOutController* value);

  constexpr ::GlobalNamespace::CenterStageScreenController*& __get__centerStageScreenController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CenterStageScreenController*> const& __get__centerStageScreenController() const;

  constexpr void __set__centerStageScreenController(::GlobalNamespace::CenterStageScreenController* value);

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __get__lobbyStateDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __get__lobbyStateDataModel() const;

  constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr ::GlobalNamespace::LobbyGameStateModel*& __get__lobbyGameStateModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> const& __get__lobbyGameStateModel() const;

  constexpr void __set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value);

  constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& __get__lobbyPlayersDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& __get__lobbyPlayersDataModel() const;

  constexpr void __set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value);

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __get__lobbyGameStateController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& __get__lobbyGameStateController() const;

  constexpr void __set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __get__lobbyPlayerPermissionsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& __get__lobbyPlayerPermissionsModel() const;

  constexpr void __set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value);

  constexpr ::GlobalNamespace::LobbySetupViewController*& __get__lobbySetupViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbySetupViewController*> const& __get__lobbySetupViewController() const;

  constexpr void __set__lobbySetupViewController(::GlobalNamespace::LobbySetupViewController* value);

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __get__unifiedNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const& __get__unifiedNetworkPlayerModel() const;

  constexpr void __set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  constexpr ::HMUI::ScreenModeController*& __get__screenModeController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeController*> const& __get__screenModeController() const;

  constexpr void __set__screenModeController(::HMUI::ScreenModeController* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel*& __get__platformLeaderboardsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsModel*> const& __get__platformLeaderboardsModel() const;

  constexpr void __set__platformLeaderboardsModel(::GlobalNamespace::PlatformLeaderboardsModel* value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*& __get__lastSimpleLevelSelectionFlowCoordinatorState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*> const& __get__lastSimpleLevelSelectionFlowCoordinatorState() const;

  constexpr void __set__lastSimpleLevelSelectionFlowCoordinatorState(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* value);

  constexpr bool& __get__isAlreadyFinishing();

  constexpr bool const& __get__isAlreadyFinishing() const;

  constexpr void __set__isAlreadyFinishing(bool value);

  constexpr ::System::Text::StringBuilder*& __get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get__stringBuilder() const;

  constexpr void __set__stringBuilder(::System::Text::StringBuilder* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__canStartGameCts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__canStartGameCts() const;

  constexpr void __set__canStartGameCts(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Action*& __get_willFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_willFinishEvent() const;

  constexpr void __set_willFinishEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action* value);

  constexpr ::System::Action*& __get_startGameOrReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_startGameOrReadyEvent() const;

  constexpr void __set_startGameOrReadyEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didSetupEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didSetupEvent() const;

  constexpr void __set_didSetupEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didOpenInvitePanelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didOpenInvitePanelEvent() const;

  constexpr void __set_didOpenInvitePanelEvent(::System::Action* value);

  constexpr bool& __get__rejoinQuickPlay_k__BackingField();

  constexpr bool const& __get__rejoinQuickPlay_k__BackingField() const;

  constexpr void __set__rejoinQuickPlay_k__BackingField(bool value);

  /// @brief Method get_isPartyOwner, addr 0x228ea30, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isPartyOwner();

  /// @brief Method get_isPublicGame, addr 0x228ea4c, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isPublicGame();

  /// @brief Method get_isManaged, addr 0x228eb0c, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isManaged();

  /// @brief Method get_isQuickStartServer, addr 0x228ebcc, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isQuickStartServer();

  /// @brief Method get_isQuickPlayServer, addr 0x228ec8c, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isQuickPlayServer();

  /// @brief Method add_willFinishEvent, addr 0x228ed4c, size 0xa0, virtual false, abstract: false, final false
  inline void add_willFinishEvent(::System::Action* value);

  /// @brief Method remove_willFinishEvent, addr 0x228edec, size 0xa0, virtual false, abstract: false, final false
  inline void remove_willFinishEvent(::System::Action* value);

  /// @brief Method add_didFinishEvent, addr 0x228ee8c, size 0xa0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x228ef2c, size 0xa0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

  /// @brief Method add_startGameOrReadyEvent, addr 0x228efcc, size 0xa0, virtual false, abstract: false, final false
  inline void add_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method remove_startGameOrReadyEvent, addr 0x228f06c, size 0xa0, virtual false, abstract: false, final false
  inline void remove_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method add_didSetupEvent, addr 0x228f10c, size 0xa0, virtual false, abstract: false, final false
  inline void add_didSetupEvent(::System::Action* value);

  /// @brief Method remove_didSetupEvent, addr 0x228f1ac, size 0xa0, virtual false, abstract: false, final false
  inline void remove_didSetupEvent(::System::Action* value);

  /// @brief Method add_didOpenInvitePanelEvent, addr 0x228f24c, size 0xa0, virtual false, abstract: false, final false
  inline void add_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method remove_didOpenInvitePanelEvent, addr 0x228f2ec, size 0xa0, virtual false, abstract: false, final false
  inline void remove_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method get_rejoinQuickPlay, addr 0x228f38c, size 0x8, virtual false, abstract: false, final false
  inline bool get_rejoinQuickPlay();

  /// @brief Method set_rejoinQuickPlay, addr 0x228f394, size 0xc, virtual false, abstract: false, final false
  inline void set_rejoinQuickPlay(bool value);

  /// @brief Method GetLobbyType, addr 0x228f3a0, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType GetLobbyType();

  /// @brief Method DidActivate, addr 0x228f3f0, size 0x1170, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2290d6c, size 0xe58, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method InitialViewControllerWasPresented, addr 0x2291d10, size 0xdc, virtual true, abstract: false, final false
  inline void InitialViewControllerWasPresented();

  /// @brief Method TransitionDidStart, addr 0x2291f34, size 0x1d8, virtual true, abstract: false, final false
  inline void TransitionDidStart();

  /// @brief Method TransitionDidFinish, addr 0x229210c, size 0x584, virtual true, abstract: false, final false
  inline void TransitionDidFinish();

  /// @brief Method TopViewControllerWillChange, addr 0x2292ad0, size 0xa8, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method BackButtonWasPressed, addr 0x2292d14, size 0x168, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method PresentBackButtonConfirmationDialog, addr 0x2292e7c, size 0x260, virtual false, abstract: false, final false
  inline void PresentBackButtonConfirmationDialog();

  /// @brief Method Finish, addr 0x22930dc, size 0x1f4, virtual false, abstract: false, final false
  inline void Finish(::System::Action* finishedCallback, bool withFadeOut);

  /// @brief Method GetInitialGameState, addr 0x2291dec, size 0x148, virtual false, abstract: false, final false
  inline void GetInitialGameState();

  /// @brief Method HandleLobbyPlayersDataModelDidChange, addr 0x22933d0, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyPlayersDataModelDidChange(::StringW userId);

  /// @brief Method HandleServerPlayerListViewControllerDidOpenInvitePanel, addr 0x22933d4, size 0x1c, virtual false, abstract: false, final false
  inline void HandleServerPlayerListViewControllerDidOpenInvitePanel();

  /// @brief Method HandleLobbySetupViewControllerSelectBeatmap, addr 0x22933f0, size 0x1e8, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerSelectBeatmap();

  /// @brief Method HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged, addr 0x22935f8, size 0x230, virtual false, abstract: false, final false
  inline void HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged(bool isActive);

  /// @brief Method HandleLobbyGameStateControllerLobbyDisconnected, addr 0x2293a48, size 0xb0, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLobbyDisconnected();

  /// @brief Method HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel, addr 0x2293af8, size 0x304, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* state);

  /// @brief Method HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel, addr 0x2293dfc, size 0x38, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel();

  /// @brief Method HandleLobbySetupViewControllerSelectModifiers, addr 0x2293e34, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerSelectModifiers();

  /// @brief Method HandleLobbySetupViewControllerClearSelectedBeatmap, addr 0x229402c, size 0xa4, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerClearSelectedBeatmap();

  /// @brief Method HandleLobbySetupViewControllerClearSelectedModifiers, addr 0x22940d0, size 0xa4, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerClearSelectedModifiers();

  /// @brief Method HandleLobbyGameStateControllerGameStateChanged, addr 0x2294174, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerGameStateChanged(::GlobalNamespace::MultiplayerLobbyState state);

  /// @brief Method HandleServerPlayerListViewControllerSelectSuggestedBeatmap, addr 0x2294190, size 0xac, virtual false, abstract: false, final false
  inline void HandleServerPlayerListViewControllerSelectSuggestedBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel);

  /// @brief Method HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers, addr 0x229423c, size 0xac, virtual false, abstract: false, final false
  inline void HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers(::GlobalNamespace::GameplayModifiers* modifiers);

  /// @brief Method HandleServerPlayerListViewControllerKickPlayer, addr 0x22942e8, size 0x30c, virtual false, abstract: false, final false
  inline void HandleServerPlayerListViewControllerKickPlayer(::StringW userId);

  /// @brief Method HandleLobbyGameStateControllerCountdownStarted, addr 0x22945fc, size 0x20c, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerCountdownStarted();

  /// @brief Method HandleLobbyGameStateControllerCountdownCancelled, addr 0x2294808, size 0x38, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerCountdownCancelled();

  /// @brief Method HandleLobbyGameStateControllerGameStarted, addr 0x2294840, size 0x2c8, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerGameStarted(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method HandleLobbyGameStateControllerStartTimeChanged, addr 0x2294b08, size 0x1ec, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerStartTimeChanged();

  /// @brief Method HandleLobbyGameStateControllerSongStillDownloading, addr 0x2294cf4, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerSongStillDownloading();

  /// @brief Method HandleLobbySetupViewControllerStartGameOrReady, addr 0x2294cf8, size 0x318, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerStartGameOrReady();

  /// @brief Method HandleLobbySetupViewControllerCancelGameOrUnready, addr 0x2295010, size 0x174, virtual false, abstract: false, final false
  inline void HandleLobbySetupViewControllerCancelGameOrUnready();

  /// @brief Method HandleLobbyGameStateControllerCancelStartTime, addr 0x2295184, size 0x38, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerCancelStartTime();

  /// @brief Method HandleLobbyGameStateControllerGameStartedPresentView, addr 0x22951bc, size 0xac, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerGameStartedPresentView(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method HandleLobbyGameStateControllerLevelFinished, addr 0x2295268, size 0x3ec, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLevelFinished(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                          ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleLobbyGameStateControllerLevelDidGetDisconnected, addr 0x2295654, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLevelDidGetDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerResultsViewControllerBackToLobbyPressed, addr 0x2295658, size 0x14c, virtual false, abstract: false, final false
  inline void HandleMultiplayerResultsViewControllerBackToLobbyPressed(::GlobalNamespace::MultiplayerResultsViewController* viewController);

  /// @brief Method HandleMultiplayerResultsViewControllerBackToMenuPressed, addr 0x22957a4, size 0xc, virtual false, abstract: false, final false
  inline void HandleMultiplayerResultsViewControllerBackToMenuPressed(::GlobalNamespace::MultiplayerResultsViewController* viewController);

  /// @brief Method SetupLobbyWithPermissions, addr 0x22908b0, size 0x4bc, virtual false, abstract: false, final false
  inline void SetupLobbyWithPermissions();

  /// @brief Method SetLobbyPlayerDataToViews, addr 0x22906ac, size 0x204, virtual false, abstract: false, final false
  inline void SetLobbyPlayerDataToViews(::StringW userId);

  /// @brief Method ShowSideViewControllers, addr 0x2292b78, size 0x64, virtual false, abstract: false, final false
  inline void ShowSideViewControllers(bool showSideViewControllers, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method ShowBackButton, addr 0x2292bdc, size 0xc, virtual false, abstract: false, final false
  inline void ShowBackButton(bool show);

  /// @brief Method GetLocalizedTitle, addr 0x22957b0, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetLocalizedTitle();

  /// @brief Method SetTitle, addr 0x2292be8, size 0x12c, virtual false, abstract: false, final false
  inline void SetTitle(::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method ShowDisconnectDialogAndFinish, addr 0x2292690, size 0x440, virtual false, abstract: false, final false
  inline void ShowDisconnectDialogAndFinish(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method UpdateLocalPlayerIsActiveState, addr 0x2293828, size 0x220, virtual false, abstract: false, final false
  inline void UpdateLocalPlayerIsActiveState(bool isActive);

  /// @brief Method HandleLobbyGameBeforeSceneSwitchCallback, addr 0x229583c, size 0x1f4, virtual false, abstract: false, final false
  inline void HandleLobbyGameBeforeSceneSwitchCallback();

  /// @brief Method HandleLobbyGameStateStartButtonEnabled, addr 0x2295a30, size 0x34, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateStartButtonEnabled(::GlobalNamespace::CannotStartGameReason cannotStartGameReason);

  /// @brief Method HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel, addr 0x2295a64, size 0x2cc, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements);

  /// @brief Method HandleLobbyPlayerPermissionsModelPermissionsChanged, addr 0x2295d30, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyPlayerPermissionsModelPermissionsChanged();

  /// @brief Method DismissViewControllersAndCoordinators, addr 0x22932d8, size 0xf8, virtual false, abstract: false, final false
  inline void DismissViewControllersAndCoordinators();

  static inline ::GlobalNamespace::GameServerLobbyFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x2295d34, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <PresentBackButtonConfirmationDialog>b__69_0, addr 0x2295d9c, size 0x148, virtual false, abstract: false, final false
  inline void _PresentBackButtonConfirmationDialog_b__69_0(int32_t btnIndex);

  /// @brief Method <ShowDisconnectDialogAndFinish>b__105_0, addr 0x2295ee4, size 0xc, virtual false, abstract: false, final false
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
  ::HMUI::ScreenModeSO* ____screenMode;

  /// @brief Field _ambienceAudioClip, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____ambienceAudioClip;

  /// @brief Field _serverPlayerListViewController, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::ServerPlayerListViewController* ____serverPlayerListViewController;

  /// @brief Field _selectModifiersViewController, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::SelectModifiersViewController* ____selectModifiersViewController;

  /// @brief Field _multiplayerLevelSelectionFlowCoordinator, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* ____multiplayerLevelSelectionFlowCoordinator;

  /// @brief Field _multiplayerResultsViewController, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsViewController* ____multiplayerResultsViewController;

  /// @brief Field _simpleDialogPromptViewController, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::SimpleDialogPromptViewController* ____simpleDialogPromptViewController;

  /// @brief Field _connectionErrorDialogViewController, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::ConnectionErrorDialogViewController* ____connectionErrorDialogViewController;

  /// @brief Field _multiplayerSettingsPanelController, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSettingsPanelController* ____multiplayerSettingsPanelController;

  /// @brief Field _gameplaySetupViewController, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::GameplaySetupViewController* ____gameplaySetupViewController;

  /// @brief Field _multiplayerLobbyController, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyController* ____multiplayerLobbyController;

  /// @brief Field _fadeInOutController, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOutController;

  /// @brief Field _centerStageScreenController, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::CenterStageScreenController* ____centerStageScreenController;

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
  ::GlobalNamespace::LobbySetupViewController* ____lobbySetupViewController;

  /// @brief Field _unifiedNetworkPlayerModel, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::IUnifiedNetworkPlayerModel* ____unifiedNetworkPlayerModel;

  /// @brief Field _screenModeController, offset: 0x148, size: 0x8, def value: None
  ::HMUI::ScreenModeController* ____screenModeController;

  /// @brief Field _playerDataModel, offset: 0x150, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _platformLeaderboardsModel, offset: 0x158, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel* ____platformLeaderboardsModel;

  /// @brief Field _songPreviewPlayer, offset: 0x160, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* ____songPreviewPlayer;

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
