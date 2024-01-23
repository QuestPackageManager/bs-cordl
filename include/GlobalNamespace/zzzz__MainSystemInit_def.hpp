#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainSystemInit)
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class BloomPrePassLightsUpdateSystem;
}
namespace GlobalNamespace {
class CachedMediaAsyncLoader;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class CoroutineStarter;
}
namespace GlobalNamespace {
class CustomLevelLoader;
}
namespace GlobalNamespace {
class DevicelessVRHelper;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
namespace GlobalNamespace {
class EnvironmentCommandLineArgsProvider;
}
namespace GlobalNamespace {
class ExternalCamerasManager;
}
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
namespace GlobalNamespace {
class NetworkConfigSO;
}
namespace GlobalNamespace {
class NetworkPlayerEntitlementChecker;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
namespace GlobalNamespace {
class OculusVRHelper;
}
namespace GlobalNamespace {
class PS4LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class PS4LevelProductsModelSO;
}
namespace GlobalNamespace {
class PS4NetworkPlayerModel;
}
namespace GlobalNamespace {
class PS5ActivityIdsModelSO;
}
namespace GlobalNamespace {
class PS5LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
namespace GlobalNamespace {
class PS5NetworkPlayerModel;
}
namespace GlobalNamespace {
class PSVR2Helper;
}
namespace GlobalNamespace {
class PSVRHelper;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelSO;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelSO;
}
namespace GlobalNamespace {
class RichPresenceManager;
}
namespace GlobalNamespace {
class SongPackMasksModelSO;
}
namespace GlobalNamespace {
class SonyAchievementIdsModelSO;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
class SteamNetworkPlayerModel;
}
namespace GlobalNamespace {
class TimeHelper;
}
namespace GlobalNamespace {
class UnityXRHelper;
}
namespace GlobalNamespace {
class VoipManager;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSystemInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSystemInit);
// Type: ::MainSystemInit
// SizeInfo { instance_size: 560, native_size: -1, calculated_instance_size: 560, calculated_native_size: 560, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4029))
// CS Name: ::MainSystemInit*
class CORDL_TYPE MainSystemInit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSettingsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _audioManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager))::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _perceivedLoudnessPerLevel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevel))::UnityW<::GlobalNamespace::PerceivedLoudnessPerLevelSO> _perceivedLoudnessPerLevel;

  /// @brief Field _relativeSfxVolumePerLevel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__relativeSfxVolumePerLevel,
                      put = __cordl_internal_set__relativeSfxVolumePerLevel))::UnityW<::GlobalNamespace::RelativeSfxVolumePerLevelSO> _relativeSfxVolumePerLevel;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRendererGraphicsSettingsPresets,
                      put = __cordl_internal_set__mirrorRendererGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> _mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectGraphicsSettingsPresets,
                      put = __cordl_internal_set__mainEffectGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> _mainEffectGraphicsSettingsPresets;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassGraphicsSettingsPresets,
                      put = __cordl_internal_set__bloomPrePassGraphicsSettingsPresets))::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> _bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer))::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _mainEffectContainer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer))::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field _bloomPrePassEffectContainer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffectContainer,
                      put = __cordl_internal_set__bloomPrePassEffectContainer))::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> _bloomPrePassEffectContainer;

  /// @brief Field _songPackMasksModel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel))::UnityW<::GlobalNamespace::SongPackMasksModelSO> _songPackMasksModel;

  /// @brief Field _appStaticSettings, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__appStaticSettings, put = __cordl_internal_set__appStaticSettings))::UnityW<::GlobalNamespace::AppStaticSettingsSO> _appStaticSettings;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> _standardLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _timeHelperPrefab, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__timeHelperPrefab, put = __cordl_internal_set__timeHelperPrefab))::UnityW<::GlobalNamespace::TimeHelper> _timeHelperPrefab;

  /// @brief Field _playerDataModelPrefab, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModelPrefab, put = __cordl_internal_set__playerDataModelPrefab))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModelPrefab;

  /// @brief Field _campaignProgressModelPrefab, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__campaignProgressModelPrefab,
                      put = __cordl_internal_set__campaignProgressModelPrefab))::UnityW<::GlobalNamespace::CampaignProgressModel> _campaignProgressModelPrefab;

  /// @brief Field _beatmapLevelsModelPrefab, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModelPrefab,
                      put = __cordl_internal_set__beatmapLevelsModelPrefab))::UnityW<::GlobalNamespace::BeatmapLevelsModel> _beatmapLevelsModelPrefab;

  /// @brief Field _customLevelLoaderPrefab, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__customLevelLoaderPrefab, put = __cordl_internal_set__customLevelLoaderPrefab))::UnityW<::GlobalNamespace::CustomLevelLoader> _customLevelLoaderPrefab;

  /// @brief Field _cachedMediaAsyncLoaderPrefab, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedMediaAsyncLoaderPrefab,
                      put = __cordl_internal_set__cachedMediaAsyncLoaderPrefab))::UnityW<::GlobalNamespace::CachedMediaAsyncLoader> _cachedMediaAsyncLoaderPrefab;

  /// @brief Field _externalCamerasManagerPrefab, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__externalCamerasManagerPrefab,
                      put = __cordl_internal_set__externalCamerasManagerPrefab))::UnityW<::GlobalNamespace::ExternalCamerasManager> _externalCamerasManagerPrefab;

  /// @brief Field _multiplayerSessionManagerPrefab, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManagerPrefab,
                      put = __cordl_internal_set__multiplayerSessionManagerPrefab))::UnityW<::GlobalNamespace::MultiplayerSessionManager> _multiplayerSessionManagerPrefab;

  /// @brief Field _voipManagerPrefab, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__voipManagerPrefab, put = __cordl_internal_set__voipManagerPrefab))::UnityW<::GlobalNamespace::VoipManager> _voipManagerPrefab;

  /// @brief Field _gameLiftNetworkPlayerModelPrefab, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__gameLiftNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__gameLiftNetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> _gameLiftNetworkPlayerModelPrefab;

  /// @brief Field _networkPlayerEntitlementCheckerPrefab, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__networkPlayerEntitlementCheckerPrefab,
                      put = __cordl_internal_set__networkPlayerEntitlementCheckerPrefab))::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> _networkPlayerEntitlementCheckerPrefab;

  /// @brief Field _hapticFeedbackControllerPrefab, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackControllerPrefab,
                      put = __cordl_internal_set__hapticFeedbackControllerPrefab))::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackControllerPrefab;

  /// @brief Field _tweeningManagerPrefab, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManagerPrefab, put = __cordl_internal_set__tweeningManagerPrefab))::UnityW<::Tweening::TimeTweeningManager> _tweeningManagerPrefab;

  /// @brief Field _lightsUpdateSystemPrefab, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__lightsUpdateSystemPrefab,
                      put = __cordl_internal_set__lightsUpdateSystemPrefab))::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> _lightsUpdateSystemPrefab;

  /// @brief Field _environmentAudioEffectsPlayerPrefab, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentAudioEffectsPlayerPrefab,
                      put = __cordl_internal_set__environmentAudioEffectsPlayerPrefab))::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> _environmentAudioEffectsPlayerPrefab;

  /// @brief Field _nodePoseSyncStateManagerPrefab, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManagerPrefab,
                      put = __cordl_internal_set__nodePoseSyncStateManagerPrefab))::UnityW<::GlobalNamespace::NodePoseSyncStateManager> _nodePoseSyncStateManagerPrefab;

  /// @brief Field _alwaysOwnedContentContainer, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__alwaysOwnedContentContainer,
                      put = __cordl_internal_set__alwaysOwnedContentContainer))::UnityW<::GlobalNamespace::AlwaysOwnedContentContainerSO> _alwaysOwnedContentContainer;

  /// @brief Field _psVRHelperPrefab, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__psVRHelperPrefab, put = __cordl_internal_set__psVRHelperPrefab))::UnityW<::GlobalNamespace::PSVRHelper> _psVRHelperPrefab;

  /// @brief Field _psVR2HelperPrefab, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__psVR2HelperPrefab, put = __cordl_internal_set__psVR2HelperPrefab))::UnityW<::GlobalNamespace::PSVR2Helper> _psVR2HelperPrefab;

  /// @brief Field _oculusVRHelperPrefab, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusVRHelperPrefab, put = __cordl_internal_set__oculusVRHelperPrefab))::UnityW<::GlobalNamespace::OculusVRHelper> _oculusVRHelperPrefab;

  /// @brief Field _unityXRHelperPrefab, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__unityXRHelperPrefab, put = __cordl_internal_set__unityXRHelperPrefab))::UnityW<::GlobalNamespace::UnityXRHelper> _unityXRHelperPrefab;

  /// @brief Field _devicelessVRHelperPrefab, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__devicelessVRHelperPrefab,
                      put = __cordl_internal_set__devicelessVRHelperPrefab))::UnityW<::GlobalNamespace::DevicelessVRHelper> _devicelessVRHelperPrefab;

  /// @brief Field _steamLevelProductsModel, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__steamLevelProductsModel,
                      put = __cordl_internal_set__steamLevelProductsModel))::UnityW<::GlobalNamespace::SteamLevelProductsModelSO> _steamLevelProductsModel;

  /// @brief Field _oculusLevelProducsModel, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusLevelProducsModel,
                      put = __cordl_internal_set__oculusLevelProducsModel))::UnityW<::GlobalNamespace::OculusLevelProductsModelSO> _oculusLevelProducsModel;

  /// @brief Field _ps4LevelProductsModel, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4LevelProductsModel, put = __cordl_internal_set__ps4LevelProductsModel))::UnityW<::GlobalNamespace::PS4LevelProductsModelSO> _ps4LevelProductsModel;

  /// @brief Field _ps5LevelProductsModel, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5LevelProductsModel, put = __cordl_internal_set__ps5LevelProductsModel))::UnityW<::GlobalNamespace::PS5LevelProductsModelSO> _ps5LevelProductsModel;

  /// @brief Field _ps4LeaderboardIdsModel, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4LeaderboardIdsModel,
                      put = __cordl_internal_set__ps4LeaderboardIdsModel))::UnityW<::GlobalNamespace::PS4LeaderboardIdsModelSO> _ps4LeaderboardIdsModel;

  /// @brief Field _ps5LeaderboardIdsModel, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5LeaderboardIdsModel,
                      put = __cordl_internal_set__ps5LeaderboardIdsModel))::UnityW<::GlobalNamespace::PS5LeaderboardIdsModelSO> _ps5LeaderboardIdsModel;

  /// @brief Field _riftLeaderboardIdsModel, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__riftLeaderboardIdsModel,
                      put = __cordl_internal_set__riftLeaderboardIdsModel))::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> _riftLeaderboardIdsModel;

  /// @brief Field _questLeaderboardIdsModel, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__questLeaderboardIdsModel,
                      put = __cordl_internal_set__questLeaderboardIdsModel))::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> _questLeaderboardIdsModel;

  /// @brief Field _steamLeaderboardIdsModel, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__steamLeaderboardIdsModel,
                      put = __cordl_internal_set__steamLeaderboardIdsModel))::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> _steamLeaderboardIdsModel;

  /// @brief Field _richPresenceManagerPrefab, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__richPresenceManagerPrefab,
                      put = __cordl_internal_set__richPresenceManagerPrefab))::UnityW<::GlobalNamespace::RichPresenceManager> _richPresenceManagerPrefab;

  /// @brief Field _dlcPromoPanelData, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelData, put = __cordl_internal_set__dlcPromoPanelData))::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> _dlcPromoPanelData;

  /// @brief Field _beatmapLevelsPromoData, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsPromoData,
                      put = __cordl_internal_set__beatmapLevelsPromoData))::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> _beatmapLevelsPromoData;

  /// @brief Field _networkConfig, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig))::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  /// @brief Field _steamNetworkPlayerModelPrefab, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__steamNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__steamNetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> _steamNetworkPlayerModelPrefab;

  /// @brief Field _oculusNetworkPlayerModelPrefab, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__oculusNetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> _oculusNetworkPlayerModelPrefab;

  /// @brief Field _ps4NetworkPlayerModelPrefab, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4NetworkPlayerModelPrefab,
                      put = __cordl_internal_set__ps4NetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::PS4NetworkPlayerModel> _ps4NetworkPlayerModelPrefab;

  /// @brief Field _ps5NetworkPlayerModelPrefab, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5NetworkPlayerModelPrefab,
                      put = __cordl_internal_set__ps5NetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::PS5NetworkPlayerModel> _ps5NetworkPlayerModelPrefab;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection))::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO> _beatmapCharacteristicCollection;

  /// @brief Field _leaderboardScoreUploader, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardScoreUploader,
                      put = __cordl_internal_set__leaderboardScoreUploader))::UnityW<::GlobalNamespace::LeaderboardScoreUploader> _leaderboardScoreUploader;

  /// @brief Field _platformLeaderboardsModel, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardsModel,
                      put = __cordl_internal_set__platformLeaderboardsModel))::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _platformLeaderboardsModel;

  /// @brief Field _ps4AchievementIdsModel, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4AchievementIdsModel,
                      put = __cordl_internal_set__ps4AchievementIdsModel))::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> _ps4AchievementIdsModel;

  /// @brief Field _ps5AchievmentIdsModel, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5AchievmentIdsModel,
                      put = __cordl_internal_set__ps5AchievmentIdsModel))::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> _ps5AchievmentIdsModel;

  /// @brief Field _achievementIdsModel, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementIdsModel, put = __cordl_internal_set__achievementIdsModel))::UnityW<::GlobalNamespace::AchievementIdsModelSO> _achievementIdsModel;

  /// @brief Field _achievementsModel, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementsModel, put = __cordl_internal_set__achievementsModel))::UnityW<::GlobalNamespace::AchievementsModelSO> _achievementsModel;

  /// @brief Field _ps5ActivityIdsModel, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5ActivityIdsModel, put = __cordl_internal_set__ps5ActivityIdsModel))::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> _ps5ActivityIdsModel;

  /// @brief Field _anyBeatmapLevelSO, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__anyBeatmapLevelSO, put = __cordl_internal_set__anyBeatmapLevelSO))::UnityW<::GlobalNamespace::BeatmapLevelSO> _anyBeatmapLevelSO;

  /// @brief Field _coroutineStarter, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter))::UnityW<::GlobalNamespace::CoroutineStarter> _coroutineStarter;

  /// @brief Field _commandLineArgsProvider, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__commandLineArgsProvider,
                      put = __cordl_internal_set__commandLineArgsProvider))::GlobalNamespace::EnvironmentCommandLineArgsProvider* _commandLineArgsProvider;

  /// @brief Field _menuTransitionHelperPrefab, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionHelperPrefab,
                      put = __cordl_internal_set__menuTransitionHelperPrefab))::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionHelperPrefab;

  /// @brief Field _defaultMaxCachedBeatmapLevels, offset 0x228, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultMaxCachedBeatmapLevels, put = __cordl_internal_set__defaultMaxCachedBeatmapLevels)) int32_t _defaultMaxCachedBeatmapLevels;

  /// @brief Field _ps4MaxCachedBeatmapLevels, offset 0x22c, size 0x4
  __declspec(property(get = __cordl_internal_get__ps4MaxCachedBeatmapLevels, put = __cordl_internal_set__ps4MaxCachedBeatmapLevels)) int32_t _ps4MaxCachedBeatmapLevels;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessPerLevelSO>& __cordl_internal_get__perceivedLoudnessPerLevel();

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessPerLevelSO> const& __cordl_internal_get__perceivedLoudnessPerLevel() const;

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevel(::UnityW<::GlobalNamespace::PerceivedLoudnessPerLevelSO> value);

  constexpr ::UnityW<::GlobalNamespace::RelativeSfxVolumePerLevelSO>& __cordl_internal_get__relativeSfxVolumePerLevel();

  constexpr ::UnityW<::GlobalNamespace::RelativeSfxVolumePerLevelSO> const& __cordl_internal_get__relativeSfxVolumePerLevel() const;

  constexpr void __cordl_internal_set__relativeSfxVolumePerLevel(::UnityW<::GlobalNamespace::RelativeSfxVolumePerLevelSO> value);

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const;

  constexpr void __cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value);

  constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO>& __cordl_internal_get__mainEffectGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> const& __cordl_internal_get__mainEffectGraphicsSettingsPresets() const;

  constexpr void __cordl_internal_set__mainEffectGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> value);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO>& __cordl_internal_get__bloomPrePassGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> const& __cordl_internal_get__bloomPrePassGraphicsSettingsPresets() const;

  constexpr void __cordl_internal_set__bloomPrePassGraphicsSettingsPresets(::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> value);

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& __cordl_internal_get__mirrorRenderer();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& __cordl_internal_get__mirrorRenderer() const;

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__mainEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__mainEffectContainer() const;

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& __cordl_internal_get__bloomPrePassEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& __cordl_internal_get__bloomPrePassEffectContainer() const;

  constexpr void __cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value);

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO>& __cordl_internal_get__songPackMasksModel();

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO> const& __cordl_internal_get__songPackMasksModel() const;

  constexpr void __cordl_internal_set__songPackMasksModel(::UnityW<::GlobalNamespace::SongPackMasksModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO>& __cordl_internal_get__appStaticSettings();

  constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO> const& __cordl_internal_get__appStaticSettings() const;

  constexpr void __cordl_internal_set__appStaticSettings(::UnityW<::GlobalNamespace::AppStaticSettingsSO> value);

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::TimeHelper>& __cordl_internal_get__timeHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& __cordl_internal_get__timeHelperPrefab() const;

  constexpr void __cordl_internal_set__timeHelperPrefab(::UnityW<::GlobalNamespace::TimeHelper> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModelPrefab() const;

  constexpr void __cordl_internal_set__playerDataModelPrefab(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& __cordl_internal_get__campaignProgressModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& __cordl_internal_get__campaignProgressModelPrefab() const;

  constexpr void __cordl_internal_set__campaignProgressModelPrefab(::UnityW<::GlobalNamespace::CampaignProgressModel> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsModel>& __cordl_internal_get__beatmapLevelsModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsModel> const& __cordl_internal_get__beatmapLevelsModelPrefab() const;

  constexpr void __cordl_internal_set__beatmapLevelsModelPrefab(::UnityW<::GlobalNamespace::BeatmapLevelsModel> value);

  constexpr ::UnityW<::GlobalNamespace::CustomLevelLoader>& __cordl_internal_get__customLevelLoaderPrefab();

  constexpr ::UnityW<::GlobalNamespace::CustomLevelLoader> const& __cordl_internal_get__customLevelLoaderPrefab() const;

  constexpr void __cordl_internal_set__customLevelLoaderPrefab(::UnityW<::GlobalNamespace::CustomLevelLoader> value);

  constexpr ::UnityW<::GlobalNamespace::CachedMediaAsyncLoader>& __cordl_internal_get__cachedMediaAsyncLoaderPrefab();

  constexpr ::UnityW<::GlobalNamespace::CachedMediaAsyncLoader> const& __cordl_internal_get__cachedMediaAsyncLoaderPrefab() const;

  constexpr void __cordl_internal_set__cachedMediaAsyncLoaderPrefab(::UnityW<::GlobalNamespace::CachedMediaAsyncLoader> value);

  constexpr ::UnityW<::GlobalNamespace::ExternalCamerasManager>& __cordl_internal_get__externalCamerasManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::ExternalCamerasManager> const& __cordl_internal_get__externalCamerasManagerPrefab() const;

  constexpr void __cordl_internal_set__externalCamerasManagerPrefab(::UnityW<::GlobalNamespace::ExternalCamerasManager> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSessionManager>& __cordl_internal_get__multiplayerSessionManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSessionManager> const& __cordl_internal_get__multiplayerSessionManagerPrefab() const;

  constexpr void __cordl_internal_set__multiplayerSessionManagerPrefab(::UnityW<::GlobalNamespace::MultiplayerSessionManager> value);

  constexpr ::UnityW<::GlobalNamespace::VoipManager>& __cordl_internal_get__voipManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::VoipManager> const& __cordl_internal_get__voipManagerPrefab() const;

  constexpr void __cordl_internal_set__voipManagerPrefab(::UnityW<::GlobalNamespace::VoipManager> value);

  constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel>& __cordl_internal_get__gameLiftNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> const& __cordl_internal_get__gameLiftNetworkPlayerModelPrefab() const;

  constexpr void __cordl_internal_set__gameLiftNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> value);

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>& __cordl_internal_get__networkPlayerEntitlementCheckerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> const& __cordl_internal_get__networkPlayerEntitlementCheckerPrefab() const;

  constexpr void __cordl_internal_set__networkPlayerEntitlementCheckerPrefab(::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> value);

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackControllerPrefab() const;

  constexpr void __cordl_internal_set__hapticFeedbackControllerPrefab(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManagerPrefab();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManagerPrefab() const;

  constexpr void __cordl_internal_set__tweeningManagerPrefab(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem>& __cordl_internal_get__lightsUpdateSystemPrefab();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> const& __cordl_internal_get__lightsUpdateSystemPrefab() const;

  constexpr void __cordl_internal_set__lightsUpdateSystemPrefab(::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> value);

  constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer>& __cordl_internal_get__environmentAudioEffectsPlayerPrefab();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> const& __cordl_internal_get__environmentAudioEffectsPlayerPrefab() const;

  constexpr void __cordl_internal_set__environmentAudioEffectsPlayerPrefab(::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> value);

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& __cordl_internal_get__nodePoseSyncStateManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& __cordl_internal_get__nodePoseSyncStateManagerPrefab() const;

  constexpr void __cordl_internal_set__nodePoseSyncStateManagerPrefab(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value);

  constexpr ::UnityW<::GlobalNamespace::AlwaysOwnedContentContainerSO>& __cordl_internal_get__alwaysOwnedContentContainer();

  constexpr ::UnityW<::GlobalNamespace::AlwaysOwnedContentContainerSO> const& __cordl_internal_get__alwaysOwnedContentContainer() const;

  constexpr void __cordl_internal_set__alwaysOwnedContentContainer(::UnityW<::GlobalNamespace::AlwaysOwnedContentContainerSO> value);

  constexpr ::UnityW<::GlobalNamespace::PSVRHelper>& __cordl_internal_get__psVRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::PSVRHelper> const& __cordl_internal_get__psVRHelperPrefab() const;

  constexpr void __cordl_internal_set__psVRHelperPrefab(::UnityW<::GlobalNamespace::PSVRHelper> value);

  constexpr ::UnityW<::GlobalNamespace::PSVR2Helper>& __cordl_internal_get__psVR2HelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::PSVR2Helper> const& __cordl_internal_get__psVR2HelperPrefab() const;

  constexpr void __cordl_internal_set__psVR2HelperPrefab(::UnityW<::GlobalNamespace::PSVR2Helper> value);

  constexpr ::UnityW<::GlobalNamespace::OculusVRHelper>& __cordl_internal_get__oculusVRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::OculusVRHelper> const& __cordl_internal_get__oculusVRHelperPrefab() const;

  constexpr void __cordl_internal_set__oculusVRHelperPrefab(::UnityW<::GlobalNamespace::OculusVRHelper> value);

  constexpr ::UnityW<::GlobalNamespace::UnityXRHelper>& __cordl_internal_get__unityXRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::UnityXRHelper> const& __cordl_internal_get__unityXRHelperPrefab() const;

  constexpr void __cordl_internal_set__unityXRHelperPrefab(::UnityW<::GlobalNamespace::UnityXRHelper> value);

  constexpr ::UnityW<::GlobalNamespace::DevicelessVRHelper>& __cordl_internal_get__devicelessVRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::DevicelessVRHelper> const& __cordl_internal_get__devicelessVRHelperPrefab() const;

  constexpr void __cordl_internal_set__devicelessVRHelperPrefab(::UnityW<::GlobalNamespace::DevicelessVRHelper> value);

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductsModelSO>& __cordl_internal_get__steamLevelProductsModel();

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductsModelSO> const& __cordl_internal_get__steamLevelProductsModel() const;

  constexpr void __cordl_internal_set__steamLevelProductsModel(::UnityW<::GlobalNamespace::SteamLevelProductsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductsModelSO>& __cordl_internal_get__oculusLevelProducsModel();

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductsModelSO> const& __cordl_internal_get__oculusLevelProducsModel() const;

  constexpr void __cordl_internal_set__oculusLevelProducsModel(::UnityW<::GlobalNamespace::OculusLevelProductsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS4LevelProductsModelSO>& __cordl_internal_get__ps4LevelProductsModel();

  constexpr ::UnityW<::GlobalNamespace::PS4LevelProductsModelSO> const& __cordl_internal_get__ps4LevelProductsModel() const;

  constexpr void __cordl_internal_set__ps4LevelProductsModel(::UnityW<::GlobalNamespace::PS4LevelProductsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS5LevelProductsModelSO>& __cordl_internal_get__ps5LevelProductsModel();

  constexpr ::UnityW<::GlobalNamespace::PS5LevelProductsModelSO> const& __cordl_internal_get__ps5LevelProductsModel() const;

  constexpr void __cordl_internal_set__ps5LevelProductsModel(::UnityW<::GlobalNamespace::PS5LevelProductsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS4LeaderboardIdsModelSO>& __cordl_internal_get__ps4LeaderboardIdsModel();

  constexpr ::UnityW<::GlobalNamespace::PS4LeaderboardIdsModelSO> const& __cordl_internal_get__ps4LeaderboardIdsModel() const;

  constexpr void __cordl_internal_set__ps4LeaderboardIdsModel(::UnityW<::GlobalNamespace::PS4LeaderboardIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS5LeaderboardIdsModelSO>& __cordl_internal_get__ps5LeaderboardIdsModel();

  constexpr ::UnityW<::GlobalNamespace::PS5LeaderboardIdsModelSO> const& __cordl_internal_get__ps5LeaderboardIdsModel() const;

  constexpr void __cordl_internal_set__ps5LeaderboardIdsModel(::UnityW<::GlobalNamespace::PS5LeaderboardIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO>& __cordl_internal_get__riftLeaderboardIdsModel();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> const& __cordl_internal_get__riftLeaderboardIdsModel() const;

  constexpr void __cordl_internal_set__riftLeaderboardIdsModel(::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO>& __cordl_internal_get__questLeaderboardIdsModel();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> const& __cordl_internal_get__questLeaderboardIdsModel() const;

  constexpr void __cordl_internal_set__questLeaderboardIdsModel(::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO>& __cordl_internal_get__steamLeaderboardIdsModel();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> const& __cordl_internal_get__steamLeaderboardIdsModel() const;

  constexpr void __cordl_internal_set__steamLeaderboardIdsModel(::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::RichPresenceManager>& __cordl_internal_get__richPresenceManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::RichPresenceManager> const& __cordl_internal_get__richPresenceManagerPrefab() const;

  constexpr void __cordl_internal_set__richPresenceManagerPrefab(::UnityW<::GlobalNamespace::RichPresenceManager> value);

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& __cordl_internal_get__dlcPromoPanelData();

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& __cordl_internal_get__dlcPromoPanelData() const;

  constexpr void __cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO>& __cordl_internal_get__beatmapLevelsPromoData();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> const& __cordl_internal_get__beatmapLevelsPromoData() const;

  constexpr void __cordl_internal_set__beatmapLevelsPromoData(::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  constexpr ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel>& __cordl_internal_get__steamNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> const& __cordl_internal_get__steamNetworkPlayerModelPrefab() const;

  constexpr void __cordl_internal_set__steamNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> value);

  constexpr ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel>& __cordl_internal_get__oculusNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> const& __cordl_internal_get__oculusNetworkPlayerModelPrefab() const;

  constexpr void __cordl_internal_set__oculusNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> value);

  constexpr ::UnityW<::GlobalNamespace::PS4NetworkPlayerModel>& __cordl_internal_get__ps4NetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::PS4NetworkPlayerModel> const& __cordl_internal_get__ps4NetworkPlayerModelPrefab() const;

  constexpr void __cordl_internal_set__ps4NetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::PS4NetworkPlayerModel> value);

  constexpr ::UnityW<::GlobalNamespace::PS5NetworkPlayerModel>& __cordl_internal_get__ps5NetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::PS5NetworkPlayerModel> const& __cordl_internal_get__ps5NetworkPlayerModelPrefab() const;

  constexpr void __cordl_internal_set__ps5NetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::PS5NetworkPlayerModel> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO> const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO> value);

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& __cordl_internal_get__leaderboardScoreUploader();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& __cordl_internal_get__leaderboardScoreUploader() const;

  constexpr void __cordl_internal_set__leaderboardScoreUploader(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value);

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__platformLeaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__platformLeaderboardsModel() const;

  constexpr void __cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& __cordl_internal_get__ps4AchievementIdsModel();

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& __cordl_internal_get__ps4AchievementIdsModel() const;

  constexpr void __cordl_internal_set__ps4AchievementIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& __cordl_internal_get__ps5AchievmentIdsModel();

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& __cordl_internal_get__ps5AchievmentIdsModel() const;

  constexpr void __cordl_internal_set__ps5AchievmentIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& __cordl_internal_get__achievementIdsModel();

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& __cordl_internal_get__achievementIdsModel() const;

  constexpr void __cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO>& __cordl_internal_get__achievementsModel();

  constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO> const& __cordl_internal_get__achievementsModel() const;

  constexpr void __cordl_internal_set__achievementsModel(::UnityW<::GlobalNamespace::AchievementsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO>& __cordl_internal_get__ps5ActivityIdsModel();

  constexpr ::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> const& __cordl_internal_get__ps5ActivityIdsModel() const;

  constexpr void __cordl_internal_set__ps5ActivityIdsModel(::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__anyBeatmapLevelSO();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__anyBeatmapLevelSO() const;

  constexpr void __cordl_internal_set__anyBeatmapLevelSO(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr ::UnityW<::GlobalNamespace::CoroutineStarter>& __cordl_internal_get__coroutineStarter();

  constexpr ::UnityW<::GlobalNamespace::CoroutineStarter> const& __cordl_internal_get__coroutineStarter() const;

  constexpr void __cordl_internal_set__coroutineStarter(::UnityW<::GlobalNamespace::CoroutineStarter> value);

  constexpr ::GlobalNamespace::EnvironmentCommandLineArgsProvider*& __cordl_internal_get__commandLineArgsProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentCommandLineArgsProvider*> const& __cordl_internal_get__commandLineArgsProvider() const;

  constexpr void __cordl_internal_set__commandLineArgsProvider(::GlobalNamespace::EnvironmentCommandLineArgsProvider* value);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionHelperPrefab() const;

  constexpr void __cordl_internal_set__menuTransitionHelperPrefab(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr int32_t& __cordl_internal_get__defaultMaxCachedBeatmapLevels();

  constexpr int32_t const& __cordl_internal_get__defaultMaxCachedBeatmapLevels() const;

  constexpr void __cordl_internal_set__defaultMaxCachedBeatmapLevels(int32_t value);

  constexpr int32_t& __cordl_internal_get__ps4MaxCachedBeatmapLevels();

  constexpr int32_t const& __cordl_internal_get__ps4MaxCachedBeatmapLevels() const;

  constexpr void __cordl_internal_set__ps4MaxCachedBeatmapLevels(int32_t value);

  /// @brief Method Init, addr 0x2226700, size 0x384, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method InstallBindings, addr 0x2226b90, size 0x1838, virtual false, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container, bool isRunningFromTests);

  /// @brief Method InstallHapticsController, addr 0x2228718, size 0x1c0, virtual false, abstract: false, final false
  inline void InstallHapticsController(::Zenject::DiContainer* container);

  /// @brief Method InstallRichPresence, addr 0x22284c0, size 0xf0, virtual false, abstract: false, final false
  inline void InstallRichPresence(::Zenject::DiContainer* container, bool isRunningFromTests);

  /// @brief Method InstallOculusDestinationBindings, addr 0x22283c8, size 0xf8, virtual false, abstract: false, final false
  inline void InstallOculusDestinationBindings(::Zenject::DiContainer* container);

  /// @brief Method InstallPlatformLeaderboardsModel, addr 0x22285b0, size 0x168, virtual false, abstract: false, final false
  inline void InstallPlatformLeaderboardsModel(::Zenject::DiContainer* container, bool isRunningFromTests);

  /// @brief Method InstallPS5Bindings, addr 0x22288d8, size 0x4, virtual false, abstract: false, final false
  inline void InstallPS5Bindings(::Zenject::DiContainer* container);

  /// @brief Method InstallPS4Bindings, addr 0x22288dc, size 0x4, virtual false, abstract: false, final false
  inline void InstallPS4Bindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::MainSystemInit* New_ctor();

  /// @brief Method .ctor, addr 0x22288e0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainSystemInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSystemInit(MainSystemInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSystemInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSystemInit(MainSystemInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSystemInit();

public:
  /// @brief Field _mainSettingsModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _audioManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _perceivedLoudnessPerLevel, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerceivedLoudnessPerLevelSO> ____perceivedLoudnessPerLevel;

  /// @brief Field _relativeSfxVolumePerLevel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RelativeSfxVolumePerLevelSO> ____relativeSfxVolumePerLevel;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> ____mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> ____mainEffectGraphicsSettingsPresets;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> ____bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererSO> ____mirrorRenderer;

  /// @brief Field _mainEffectContainer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____mainEffectContainer;

  /// @brief Field _bloomPrePassEffectContainer, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> ____bloomPrePassEffectContainer;

  /// @brief Field _songPackMasksModel, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPackMasksModelSO> ____songPackMasksModel;

  /// @brief Field _appStaticSettings, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppStaticSettingsSO> ____appStaticSettings;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _timeHelperPrefab, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TimeHelper> ____timeHelperPrefab;

  /// @brief Field _playerDataModelPrefab, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModelPrefab;

  /// @brief Field _campaignProgressModelPrefab, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignProgressModel> ____campaignProgressModelPrefab;

  /// @brief Field _beatmapLevelsModelPrefab, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelsModel> ____beatmapLevelsModelPrefab;

  /// @brief Field _customLevelLoaderPrefab, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CustomLevelLoader> ____customLevelLoaderPrefab;

  /// @brief Field _cachedMediaAsyncLoaderPrefab, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CachedMediaAsyncLoader> ____cachedMediaAsyncLoaderPrefab;

  /// @brief Field _externalCamerasManagerPrefab, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExternalCamerasManager> ____externalCamerasManagerPrefab;

  /// @brief Field _multiplayerSessionManagerPrefab, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSessionManager> ____multiplayerSessionManagerPrefab;

  /// @brief Field _voipManagerPrefab, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoipManager> ____voipManagerPrefab;

  /// @brief Field _gameLiftNetworkPlayerModelPrefab, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> ____gameLiftNetworkPlayerModelPrefab;

  /// @brief Field _networkPlayerEntitlementCheckerPrefab, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> ____networkPlayerEntitlementCheckerPrefab;

  /// @brief Field _hapticFeedbackControllerPrefab, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackControllerPrefab;

  /// @brief Field _tweeningManagerPrefab, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManagerPrefab;

  /// @brief Field _lightsUpdateSystemPrefab, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> ____lightsUpdateSystemPrefab;

  /// @brief Field _environmentAudioEffectsPlayerPrefab, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> ____environmentAudioEffectsPlayerPrefab;

  /// @brief Field _nodePoseSyncStateManagerPrefab, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> ____nodePoseSyncStateManagerPrefab;

  /// @brief Field _alwaysOwnedContentContainer, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AlwaysOwnedContentContainerSO> ____alwaysOwnedContentContainer;

  /// @brief Field _psVRHelperPrefab, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PSVRHelper> ____psVRHelperPrefab;

  /// @brief Field _psVR2HelperPrefab, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PSVR2Helper> ____psVR2HelperPrefab;

  /// @brief Field _oculusVRHelperPrefab, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusVRHelper> ____oculusVRHelperPrefab;

  /// @brief Field _unityXRHelperPrefab, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::UnityXRHelper> ____unityXRHelperPrefab;

  /// @brief Field _devicelessVRHelperPrefab, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DevicelessVRHelper> ____devicelessVRHelperPrefab;

  /// @brief Field _steamLevelProductsModel, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SteamLevelProductsModelSO> ____steamLevelProductsModel;

  /// @brief Field _oculusLevelProducsModel, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusLevelProductsModelSO> ____oculusLevelProducsModel;

  /// @brief Field _ps4LevelProductsModel, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4LevelProductsModelSO> ____ps4LevelProductsModel;

  /// @brief Field _ps5LevelProductsModel, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5LevelProductsModelSO> ____ps5LevelProductsModel;

  /// @brief Field _ps4LeaderboardIdsModel, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4LeaderboardIdsModelSO> ____ps4LeaderboardIdsModel;

  /// @brief Field _ps5LeaderboardIdsModel, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5LeaderboardIdsModelSO> ____ps5LeaderboardIdsModel;

  /// @brief Field _riftLeaderboardIdsModel, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> ____riftLeaderboardIdsModel;

  /// @brief Field _questLeaderboardIdsModel, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> ____questLeaderboardIdsModel;

  /// @brief Field _steamLeaderboardIdsModel, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsModelSO> ____steamLeaderboardIdsModel;

  /// @brief Field _richPresenceManagerPrefab, offset: 0x188, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RichPresenceManager> ____richPresenceManagerPrefab;

  /// @brief Field _dlcPromoPanelData, offset: 0x190, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> ____dlcPromoPanelData;

  /// @brief Field _beatmapLevelsPromoData, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> ____beatmapLevelsPromoData;

  /// @brief Field _networkConfig, offset: 0x1a0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkConfigSO> ____networkConfig;

  /// @brief Field _steamNetworkPlayerModelPrefab, offset: 0x1a8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> ____steamNetworkPlayerModelPrefab;

  /// @brief Field _oculusNetworkPlayerModelPrefab, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> ____oculusNetworkPlayerModelPrefab;

  /// @brief Field _ps4NetworkPlayerModelPrefab, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4NetworkPlayerModel> ____ps4NetworkPlayerModelPrefab;

  /// @brief Field _ps5NetworkPlayerModelPrefab, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5NetworkPlayerModel> ____ps5NetworkPlayerModelPrefab;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x1c8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO> ____beatmapCharacteristicCollection;

  /// @brief Field _leaderboardScoreUploader, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> ____leaderboardScoreUploader;

  /// @brief Field _platformLeaderboardsModel, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____platformLeaderboardsModel;

  /// @brief Field _ps4AchievementIdsModel, offset: 0x1e0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> ____ps4AchievementIdsModel;

  /// @brief Field _ps5AchievmentIdsModel, offset: 0x1e8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> ____ps5AchievmentIdsModel;

  /// @brief Field _achievementIdsModel, offset: 0x1f0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementIdsModelSO> ____achievementIdsModel;

  /// @brief Field _achievementsModel, offset: 0x1f8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementsModelSO> ____achievementsModel;

  /// @brief Field _ps5ActivityIdsModel, offset: 0x200, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> ____ps5ActivityIdsModel;

  /// @brief Field _anyBeatmapLevelSO, offset: 0x208, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____anyBeatmapLevelSO;

  /// @brief Field _coroutineStarter, offset: 0x210, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CoroutineStarter> ____coroutineStarter;

  /// @brief Field _commandLineArgsProvider, offset: 0x218, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentCommandLineArgsProvider* ____commandLineArgsProvider;

  /// @brief Field _menuTransitionHelperPrefab, offset: 0x220, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionHelperPrefab;

  /// @brief Field _defaultMaxCachedBeatmapLevels, offset: 0x228, size: 0x4, def value: None
  int32_t ____defaultMaxCachedBeatmapLevels;

  /// @brief Field _ps4MaxCachedBeatmapLevels, offset: 0x22c, size: 0x4, def value: None
  int32_t ____ps4MaxCachedBeatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSystemInit, 0x230>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mainSettingsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____audioManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____perceivedLoudnessPerLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____relativeSfxVolumePerLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mirrorRendererGraphicsSettingsPresets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mainEffectGraphicsSettingsPresets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____bloomPrePassGraphicsSettingsPresets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mirrorRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mainEffectContainer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____bloomPrePassEffectContainer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____songPackMasksModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____appStaticSettings) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____standardLevelScenesTransitionSetupData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____missionLevelScenesTransitionSetupData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____multiplayerLevelScenesTransitionSetupData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____timeHelperPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____playerDataModelPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____campaignProgressModelPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____beatmapLevelsModelPrefab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____customLevelLoaderPrefab) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____cachedMediaAsyncLoaderPrefab) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____externalCamerasManagerPrefab) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____multiplayerSessionManagerPrefab) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____voipManagerPrefab) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____gameLiftNetworkPlayerModelPrefab) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____networkPlayerEntitlementCheckerPrefab) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____hapticFeedbackControllerPrefab) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____tweeningManagerPrefab) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____lightsUpdateSystemPrefab) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____environmentAudioEffectsPlayerPrefab) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____nodePoseSyncStateManagerPrefab) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____alwaysOwnedContentContainer) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____psVRHelperPrefab) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____psVR2HelperPrefab) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____oculusVRHelperPrefab) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____unityXRHelperPrefab) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____devicelessVRHelperPrefab) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____steamLevelProductsModel) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____oculusLevelProducsModel) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps4LevelProductsModel) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps5LevelProductsModel) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps4LeaderboardIdsModel) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps5LeaderboardIdsModel) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____riftLeaderboardIdsModel) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____questLeaderboardIdsModel) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____steamLeaderboardIdsModel) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____richPresenceManagerPrefab) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____dlcPromoPanelData) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____beatmapLevelsPromoData) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____networkConfig) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____steamNetworkPlayerModelPrefab) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____oculusNetworkPlayerModelPrefab) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps4NetworkPlayerModelPrefab) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps5NetworkPlayerModelPrefab) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____beatmapCharacteristicCollection) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____leaderboardScoreUploader) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____platformLeaderboardsModel) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps4AchievementIdsModel) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps5AchievmentIdsModel) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____achievementIdsModel) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____achievementsModel) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps5ActivityIdsModel) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____anyBeatmapLevelSO) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____coroutineStarter) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____commandLineArgsProvider) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____menuTransitionHelperPrefab) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____defaultMaxCachedBeatmapLevels) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps4MaxCachedBeatmapLevels) == 0x22c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSystemInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSystemInit*, "", "MainSystemInit");
