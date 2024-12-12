#pragma once
// IWYU pragma private; include "GlobalNamespace/RichPresenceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RichPresenceManager)
namespace GlobalNamespace {
class BrowsingMenusRichPresenceData;
}
namespace GlobalNamespace {
struct GameScenesManager_SceneTransitionType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class InMultiplayerRichPresenceData;
}
namespace GlobalNamespace {
class LobbyGameStateModel;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PlayingCampaignRichPresenceData;
}
namespace GlobalNamespace {
class PlayingTutorialPresenceData;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class RichPresenceManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RichPresenceManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RichPresenceManager
class CORDL_TYPE RichPresenceManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _browsingMenusRichPresenceData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__browsingMenusRichPresenceData,
                      put = __cordl_internal_set__browsingMenusRichPresenceData)) ::GlobalNamespace::BrowsingMenusRichPresenceData* _browsingMenusRichPresenceData;

  /// @brief Field _currentPresenceData, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__currentPresenceData, put = __cordl_internal_set__currentPresenceData)) ::GlobalNamespace::IRichPresenceData* _currentPresenceData;

  /// @brief Field _gameScenesManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _inMultiplayerRichPresenceData, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__inMultiplayerRichPresenceData,
                      put = __cordl_internal_set__inMultiplayerRichPresenceData)) ::GlobalNamespace::InMultiplayerRichPresenceData* _inMultiplayerRichPresenceData;

  /// @brief Field _isInMultiplayerLobby, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get__isInMultiplayerLobby, put = __cordl_internal_set__isInMultiplayerLobby)) bool _isInMultiplayerLobby;

  /// @brief Field _lobbyGameStateModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateModel, put = __cordl_internal_set__lobbyGameStateModel)) ::GlobalNamespace::LobbyGameStateModel* _lobbyGameStateModel;

  /// @brief Field _lobbyPlayerPermissionsModel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayerPermissionsModel,
                      put = __cordl_internal_set__lobbyPlayerPermissionsModel)) ::GlobalNamespace::LobbyPlayerPermissionsModel* _lobbyPlayerPermissionsModel;

  /// @brief Field _menuScenesTransitionSetupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__menuScenesTransitionSetupData,
                      put = __cordl_internal_set__menuScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>
      _menuScenesTransitionSetupData;

  /// @brief Field _menuWasLoaded, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__menuWasLoaded, put = __cordl_internal_set__menuWasLoaded)) bool _menuWasLoaded;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>
      _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>
      _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _playingCampaignRichPresenceData, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playingCampaignRichPresenceData,
                      put = __cordl_internal_set__playingCampaignRichPresenceData)) ::GlobalNamespace::PlayingCampaignRichPresenceData* _playingCampaignRichPresenceData;

  /// @brief Field _playingTutorialPresenceData, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__playingTutorialPresenceData,
                      put = __cordl_internal_set__playingTutorialPresenceData)) ::GlobalNamespace::PlayingTutorialPresenceData* _playingTutorialPresenceData;

  /// @brief Field _richPresencePlatformHandler, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__richPresencePlatformHandler,
                      put = __cordl_internal_set__richPresencePlatformHandler)) ::GlobalNamespace::IRichPresencePlatformHandler* _richPresencePlatformHandler;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>
      _standardLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialScenesTransitionSetupData,
                      put = __cordl_internal_set__tutorialScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      _tutorialScenesTransitionSetupData;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__unifiedNetworkPlayerModel,
                      put = __cordl_internal_set__unifiedNetworkPlayerModel)) ::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  /// @brief Method Awake, addr 0x3b2bd1c, size 0x29c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Clear, addr 0x3b2c824, size 0xa8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method HandleGameScenesManagerTransitionDidFinish, addr 0x3b2c504, size 0x320, virtual false, abstract: false, final false
  inline void HandleGameScenesManagerTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType,
                                                         ::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* diContainer);

  /// @brief Method HandleLobbyGameStateModelDidChange, addr 0x3b2c20c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateModelDidChange(::GlobalNamespace::MultiplayerGameState newGameState);

  /// @brief Method HandleLobbyPlayerPermissionChanged, addr 0x3b2caa0, size 0x158, virtual false, abstract: false, final false
  inline void HandleLobbyPlayerPermissionChanged();

  /// @brief Method HandleMultiplayerPartySizeChanged, addr 0x3b2c8cc, size 0x1d4, virtual false, abstract: false, final false
  inline void HandleMultiplayerPartySizeChanged(int32_t currentPartySize);

  static inline ::GlobalNamespace::RichPresenceManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b2bfb8, size 0x254, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetMenuPresence, addr 0x3b2c228, size 0x230, virtual false, abstract: false, final false
  inline void SetMenuPresence();

  /// @brief Method SetPresence, addr 0x3b2c458, size 0xac, virtual false, abstract: false, final false
  inline void SetPresence(::GlobalNamespace::IRichPresenceData* presenceData);

  constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData* const& __cordl_internal_get__browsingMenusRichPresenceData() const;

  constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData*& __cordl_internal_get__browsingMenusRichPresenceData();

  constexpr ::GlobalNamespace::IRichPresenceData* const& __cordl_internal_get__currentPresenceData() const;

  constexpr ::GlobalNamespace::IRichPresenceData*& __cordl_internal_get__currentPresenceData();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::InMultiplayerRichPresenceData* const& __cordl_internal_get__inMultiplayerRichPresenceData() const;

  constexpr ::GlobalNamespace::InMultiplayerRichPresenceData*& __cordl_internal_get__inMultiplayerRichPresenceData();

  constexpr bool const& __cordl_internal_get__isInMultiplayerLobby() const;

  constexpr bool& __cordl_internal_get__isInMultiplayerLobby();

  constexpr ::GlobalNamespace::LobbyGameStateModel* const& __cordl_internal_get__lobbyGameStateModel() const;

  constexpr ::GlobalNamespace::LobbyGameStateModel*& __cordl_internal_get__lobbyGameStateModel();

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* const& __cordl_internal_get__lobbyPlayerPermissionsModel() const;

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __cordl_internal_get__lobbyPlayerPermissionsModel();

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> const& __cordl_internal_get__menuScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>& __cordl_internal_get__menuScenesTransitionSetupData();

  constexpr bool const& __cordl_internal_get__menuWasLoaded() const;

  constexpr bool& __cordl_internal_get__menuWasLoaded();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData* const& __cordl_internal_get__playingCampaignRichPresenceData() const;

  constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData*& __cordl_internal_get__playingCampaignRichPresenceData();

  constexpr ::GlobalNamespace::PlayingTutorialPresenceData* const& __cordl_internal_get__playingTutorialPresenceData() const;

  constexpr ::GlobalNamespace::PlayingTutorialPresenceData*& __cordl_internal_get__playingTutorialPresenceData();

  constexpr ::GlobalNamespace::IRichPresencePlatformHandler* const& __cordl_internal_get__richPresencePlatformHandler() const;

  constexpr ::GlobalNamespace::IRichPresencePlatformHandler*& __cordl_internal_get__richPresencePlatformHandler();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get__tutorialScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get__tutorialScenesTransitionSetupData();

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* const& __cordl_internal_get__unifiedNetworkPlayerModel() const;

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __cordl_internal_get__unifiedNetworkPlayerModel();

  constexpr void __cordl_internal_set__browsingMenusRichPresenceData(::GlobalNamespace::BrowsingMenusRichPresenceData* value);

  constexpr void __cordl_internal_set__currentPresenceData(::GlobalNamespace::IRichPresenceData* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__inMultiplayerRichPresenceData(::GlobalNamespace::InMultiplayerRichPresenceData* value);

  constexpr void __cordl_internal_set__isInMultiplayerLobby(bool value);

  constexpr void __cordl_internal_set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value);

  constexpr void __cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value);

  constexpr void __cordl_internal_set__menuScenesTransitionSetupData(::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__menuWasLoaded(bool value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__playingCampaignRichPresenceData(::GlobalNamespace::PlayingCampaignRichPresenceData* value);

  constexpr void __cordl_internal_set__playingTutorialPresenceData(::GlobalNamespace::PlayingTutorialPresenceData* value);

  constexpr void __cordl_internal_set__richPresencePlatformHandler(::GlobalNamespace::IRichPresencePlatformHandler* value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__tutorialScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  /// @brief Method .ctor, addr 0x3b2cbf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresenceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichPresenceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichPresenceManager(RichPresenceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichPresenceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichPresenceManager(RichPresenceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5158 };

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ____tutorialScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _menuScenesTransitionSetupData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> ____menuScenesTransitionSetupData;

  /// @brief Field _richPresencePlatformHandler, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IRichPresencePlatformHandler* ____richPresencePlatformHandler;

  /// @brief Field _gameScenesManager, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _lobbyGameStateModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::LobbyGameStateModel* ____lobbyGameStateModel;

  /// @brief Field _unifiedNetworkPlayerModel, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IUnifiedNetworkPlayerModel* ____unifiedNetworkPlayerModel;

  /// @brief Field _lobbyPlayerPermissionsModel, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayerPermissionsModel* ____lobbyPlayerPermissionsModel;

  /// @brief Field _menuWasLoaded, offset: 0x70, size: 0x1, def value: None
  bool ____menuWasLoaded;

  /// @brief Field _isInMultiplayerLobby, offset: 0x71, size: 0x1, def value: None
  bool ____isInMultiplayerLobby;

  /// @brief Field _browsingMenusRichPresenceData, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BrowsingMenusRichPresenceData* ____browsingMenusRichPresenceData;

  /// @brief Field _inMultiplayerRichPresenceData, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::InMultiplayerRichPresenceData* ____inMultiplayerRichPresenceData;

  /// @brief Field _playingCampaignRichPresenceData, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::PlayingCampaignRichPresenceData* ____playingCampaignRichPresenceData;

  /// @brief Field _playingTutorialPresenceData, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::PlayingTutorialPresenceData* ____playingTutorialPresenceData;

  /// @brief Field _currentPresenceData, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::IRichPresenceData* ____currentPresenceData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____standardLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____tutorialScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____missionLevelScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____multiplayerLevelScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____menuScenesTransitionSetupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____richPresencePlatformHandler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____gameScenesManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____lobbyGameStateModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____unifiedNetworkPlayerModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____lobbyPlayerPermissionsModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____menuWasLoaded) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____isInMultiplayerLobby) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____browsingMenusRichPresenceData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____inMultiplayerRichPresenceData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____playingCampaignRichPresenceData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____playingTutorialPresenceData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichPresenceManager, ____currentPresenceData) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RichPresenceManager, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RichPresenceManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RichPresenceManager*, "", "RichPresenceManager");
