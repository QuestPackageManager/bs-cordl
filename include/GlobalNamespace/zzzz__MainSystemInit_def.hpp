#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class AudioManagerSO;
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
class ExternalCamerasManager;
}
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class LeaderboardIdsModel;
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
class OculusLevelProductCollectionModel;
}
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
namespace GlobalNamespace {
class OculusVRHelper;
}
namespace GlobalNamespace {
class PS5ActivityIdsModelSO;
}
namespace GlobalNamespace {
class PSVR2Helper;
}
namespace GlobalNamespace {
class PSVRHelper;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerDataFileManagerSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
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
class SonyNetworkPlayerModel;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
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
namespace GlobalNamespace {
class __MainSystemInit____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
namespace GlobalNamespace {
class __MainSystemInit____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSystemInit);
MARK_REF_PTR_T(::GlobalNamespace::__MainSystemInit____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainSystemInit::<>c*
class CORDL_TYPE __MainSystemInit____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MainSystemInit____c* __9;

  /// @brief Field <>9__51_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__51_0, put = setStaticF___9__51_0))::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*,
                                                                                                      ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>* __9__51_0;

  /// @brief Field <>9__51_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__51_1, put = setStaticF___9__51_1))::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*,
                                                                                                      ::GlobalNamespace::RelativeSfxVolumePerLevelModel*>* __9__51_1;

  /// @brief Field <>9__51_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__51_2, put = setStaticF___9__51_2))::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*,
                                                                                                      ::GlobalNamespace::OculusLevelProductCollectionModel*>* __9__51_2;

  /// @brief Field <>9__55_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__55_0, put = setStaticF___9__55_0))::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* __9__55_0;

  static inline ::GlobalNamespace::__MainSystemInit____c* New_ctor();

  /// @brief Method <InstallBindings>b__51_0, addr 0x2503550, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PerceivedLoudnessPerLevelModel* _InstallBindings_b__51_0(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method <InstallBindings>b__51_1, addr 0x25035c8, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RelativeSfxVolumePerLevelModel* _InstallBindings_b__51_1(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method <InstallBindings>b__51_2, addr 0x250362c, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel* _InstallBindings_b__51_2(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method <InstallPlatformLeaderboardsModel>b__55_0, addr 0x25036a4, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LeaderboardIdsModel* _InstallPlatformLeaderboardsModel_b__55_0(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method .ctor, addr 0x2503548, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MainSystemInit____c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*
  getStaticF___9__51_0();

  static inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::RelativeSfxVolumePerLevelModel*>*
  getStaticF___9__51_1();

  static inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*
  getStaticF___9__51_2();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* getStaticF___9__55_0();

  static inline void setStaticF___9(::GlobalNamespace::__MainSystemInit____c* value);

  static inline void
  setStaticF___9__51_0(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>* value);

  static inline void
  setStaticF___9__51_1(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::RelativeSfxVolumePerLevelModel*>* value);

  static inline void
  setStaticF___9__51_2(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>* value);

  static inline void setStaticF___9__55_0(::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSystemInit____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MainSystemInit____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainSystemInit____c(__MainSystemInit____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainSystemInit____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainSystemInit____c(__MainSystemInit____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSystemInit____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MainSystemInit
// SizeInfo { instance_size: 416, native_size: -1, calculated_instance_size: 416, calculated_native_size: 416, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainSystemInit*
class CORDL_TYPE MainSystemInit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MainSystemInit____c;

  /// @brief Field _achievementIdsModel, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementIdsModel, put = __cordl_internal_set__achievementIdsModel))::UnityW<::GlobalNamespace::AchievementIdsModelSO> _achievementIdsModel;

  /// @brief Field _achievementsModel, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementsModel, put = __cordl_internal_set__achievementsModel))::UnityW<::GlobalNamespace::AchievementsModelSO> _achievementsModel;

  /// @brief Field _audioManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager))::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _beatmapLevelsPromoData, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsPromoData,
                      put = __cordl_internal_set__beatmapLevelsPromoData))::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> _beatmapLevelsPromoData;

  /// @brief Field _bloomPrePassEffectContainer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffectContainer,
                      put = __cordl_internal_set__bloomPrePassEffectContainer))::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> _bloomPrePassEffectContainer;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassGraphicsSettingsPresets,
                      put = __cordl_internal_set__bloomPrePassGraphicsSettingsPresets))::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> _bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _campaignProgressModelPrefab, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__campaignProgressModelPrefab,
                      put = __cordl_internal_set__campaignProgressModelPrefab))::UnityW<::GlobalNamespace::CampaignProgressModel> _campaignProgressModelPrefab;

  /// @brief Field _coroutineStarter, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter))::UnityW<::GlobalNamespace::CoroutineStarter> _coroutineStarter;

  /// @brief Field _customLevelLoaderPrefab, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__customLevelLoaderPrefab, put = __cordl_internal_set__customLevelLoaderPrefab))::UnityW<::GlobalNamespace::CustomLevelLoader> _customLevelLoaderPrefab;

  /// @brief Field _defaultMaxCachedBeatmapLevels, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultMaxCachedBeatmapLevels, put = __cordl_internal_set__defaultMaxCachedBeatmapLevels)) int32_t _defaultMaxCachedBeatmapLevels;

  /// @brief Field _devicelessVRHelperPrefab, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__devicelessVRHelperPrefab,
                      put = __cordl_internal_set__devicelessVRHelperPrefab))::UnityW<::GlobalNamespace::DevicelessVRHelper> _devicelessVRHelperPrefab;

  /// @brief Field _dlcPromoPanelData, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelData, put = __cordl_internal_set__dlcPromoPanelData))::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> _dlcPromoPanelData;

  /// @brief Field _environmentAudioEffectsPlayerPrefab, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentAudioEffectsPlayerPrefab,
                      put = __cordl_internal_set__environmentAudioEffectsPlayerPrefab))::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> _environmentAudioEffectsPlayerPrefab;

  /// @brief Field _externalCamerasManagerPrefab, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__externalCamerasManagerPrefab,
                      put = __cordl_internal_set__externalCamerasManagerPrefab))::UnityW<::GlobalNamespace::ExternalCamerasManager> _externalCamerasManagerPrefab;

  /// @brief Field _gameLiftNetworkPlayerModelPrefab, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__gameLiftNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__gameLiftNetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> _gameLiftNetworkPlayerModelPrefab;

  /// @brief Field _hapticFeedbackControllerPrefab, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackControllerPrefab,
                      put = __cordl_internal_set__hapticFeedbackControllerPrefab))::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackControllerPrefab;

  /// @brief Field _leaderboardScoreUploader, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardScoreUploader,
                      put = __cordl_internal_set__leaderboardScoreUploader))::UnityW<::GlobalNamespace::LeaderboardScoreUploader> _leaderboardScoreUploader;

  /// @brief Field _lightsUpdateSystemPrefab, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__lightsUpdateSystemPrefab,
                      put = __cordl_internal_set__lightsUpdateSystemPrefab))::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> _lightsUpdateSystemPrefab;

  /// @brief Field _mainEffectContainer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer))::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectGraphicsSettingsPresets,
                      put = __cordl_internal_set__mainEffectGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> _mainEffectGraphicsSettingsPresets;

  /// @brief Field _mainSettingsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _menuTransitionHelperPrefab, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionHelperPrefab,
                      put = __cordl_internal_set__menuTransitionHelperPrefab))::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionHelperPrefab;

  /// @brief Field _mirrorRenderer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer))::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRendererGraphicsSettingsPresets,
                      put = __cordl_internal_set__mirrorRendererGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> _mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerSessionManagerPrefab, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManagerPrefab,
                      put = __cordl_internal_set__multiplayerSessionManagerPrefab))::UnityW<::GlobalNamespace::MultiplayerSessionManager> _multiplayerSessionManagerPrefab;

  /// @brief Field _networkConfig, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig))::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  /// @brief Field _networkPlayerEntitlementCheckerPrefab, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__networkPlayerEntitlementCheckerPrefab,
                      put = __cordl_internal_set__networkPlayerEntitlementCheckerPrefab))::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> _networkPlayerEntitlementCheckerPrefab;

  /// @brief Field _nodePoseSyncStateManagerPrefab, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManagerPrefab,
                      put = __cordl_internal_set__nodePoseSyncStateManagerPrefab))::UnityW<::GlobalNamespace::NodePoseSyncStateManager> _nodePoseSyncStateManagerPrefab;

  /// @brief Field _oculusNetworkPlayerModelPrefab, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__oculusNetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> _oculusNetworkPlayerModelPrefab;

  /// @brief Field _oculusVRHelperPrefab, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusVRHelperPrefab, put = __cordl_internal_set__oculusVRHelperPrefab))::UnityW<::GlobalNamespace::OculusVRHelper> _oculusVRHelperPrefab;

  /// @brief Field _platformLeaderboardsModel, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardsModel,
                      put = __cordl_internal_set__platformLeaderboardsModel))::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _platformLeaderboardsModel;

  /// @brief Field _playerDataFileManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileManager, put = __cordl_internal_set__playerDataFileManager))::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> _playerDataFileManager;

  /// @brief Field _playerDataModelPrefab, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModelPrefab, put = __cordl_internal_set__playerDataModelPrefab))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModelPrefab;

  /// @brief Field _ps4AchievementIdsModel, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4AchievementIdsModel,
                      put = __cordl_internal_set__ps4AchievementIdsModel))::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> _ps4AchievementIdsModel;

  /// @brief Field _ps4MaxCachedBeatmapLevels, offset 0x19c, size 0x4
  __declspec(property(get = __cordl_internal_get__ps4MaxCachedBeatmapLevels, put = __cordl_internal_set__ps4MaxCachedBeatmapLevels)) int32_t _ps4MaxCachedBeatmapLevels;

  /// @brief Field _ps5AchievmentIdsModel, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5AchievmentIdsModel,
                      put = __cordl_internal_set__ps5AchievmentIdsModel))::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> _ps5AchievmentIdsModel;

  /// @brief Field _ps5ActivityIdsModel, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5ActivityIdsModel, put = __cordl_internal_set__ps5ActivityIdsModel))::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> _ps5ActivityIdsModel;

  /// @brief Field _psVR2HelperPrefab, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__psVR2HelperPrefab, put = __cordl_internal_set__psVR2HelperPrefab))::UnityW<::GlobalNamespace::PSVR2Helper> _psVR2HelperPrefab;

  /// @brief Field _psVRHelperPrefab, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__psVRHelperPrefab, put = __cordl_internal_set__psVRHelperPrefab))::UnityW<::GlobalNamespace::PSVRHelper> _psVRHelperPrefab;

  /// @brief Field _richPresenceManagerPrefab, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__richPresenceManagerPrefab,
                      put = __cordl_internal_set__richPresenceManagerPrefab))::UnityW<::GlobalNamespace::RichPresenceManager> _richPresenceManagerPrefab;

  /// @brief Field _songPackMasksModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel))::UnityW<::GlobalNamespace::SongPackMasksModelSO> _songPackMasksModel;

  /// @brief Field _sonyNetworkPlayerModelPrefab, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__sonyNetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::SonyNetworkPlayerModel> _sonyNetworkPlayerModelPrefab;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> _standardLevelScenesTransitionSetupData;

  /// @brief Field _steamNetworkPlayerModelPrefab, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__steamNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__steamNetworkPlayerModelPrefab))::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> _steamNetworkPlayerModelPrefab;

  /// @brief Field _timeHelperPrefab, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__timeHelperPrefab, put = __cordl_internal_set__timeHelperPrefab))::UnityW<::GlobalNamespace::TimeHelper> _timeHelperPrefab;

  /// @brief Field _tweeningManagerPrefab, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManagerPrefab, put = __cordl_internal_set__tweeningManagerPrefab))::UnityW<::Tweening::TimeTweeningManager> _tweeningManagerPrefab;

  /// @brief Field _unityXRHelperPrefab, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__unityXRHelperPrefab, put = __cordl_internal_set__unityXRHelperPrefab))::UnityW<::GlobalNamespace::UnityXRHelper> _unityXRHelperPrefab;

  /// @brief Field _voipManagerPrefab, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__voipManagerPrefab, put = __cordl_internal_set__voipManagerPrefab))::UnityW<::GlobalNamespace::VoipManager> _voipManagerPrefab;

  /// @brief Method Init, addr 0x25010c4, size 0x34c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method InstallBindings, addr 0x250151c, size 0x19b0, virtual false, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container, bool isRunningFromTests);

  /// @brief Method InstallHapticsController, addr 0x2503308, size 0x1c0, virtual false, abstract: false, final false
  inline void InstallHapticsController(::Zenject::DiContainer* container);

  /// @brief Method InstallOculusDestinationBindings, addr 0x2502ef4, size 0xf8, virtual false, abstract: false, final false
  inline void InstallOculusDestinationBindings(::Zenject::DiContainer* container);

  /// @brief Method InstallPS4Bindings, addr 0x25034cc, size 0x4, virtual false, abstract: false, final false
  inline void InstallPS4Bindings(::Zenject::DiContainer* container);

  /// @brief Method InstallPS5Bindings, addr 0x25034c8, size 0x4, virtual false, abstract: false, final false
  inline void InstallPS5Bindings(::Zenject::DiContainer* container);

  /// @brief Method InstallPlatformLeaderboardsModel, addr 0x25030dc, size 0x22c, virtual false, abstract: false, final false
  inline void InstallPlatformLeaderboardsModel(::Zenject::DiContainer* container, bool isRunningFromTests);

  /// @brief Method InstallRichPresence, addr 0x2502fec, size 0xf0, virtual false, abstract: false, final false
  inline void InstallRichPresence(::Zenject::DiContainer* container, bool isRunningFromTests);

  static inline ::GlobalNamespace::MainSystemInit* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& __cordl_internal_get__achievementIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& __cordl_internal_get__achievementIdsModel();

  constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO> const& __cordl_internal_get__achievementsModel() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO>& __cordl_internal_get__achievementsModel();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> const& __cordl_internal_get__beatmapLevelsPromoData() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO>& __cordl_internal_get__beatmapLevelsPromoData();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& __cordl_internal_get__bloomPrePassEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& __cordl_internal_get__bloomPrePassEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> const& __cordl_internal_get__bloomPrePassGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO>& __cordl_internal_get__bloomPrePassGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& __cordl_internal_get__campaignProgressModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& __cordl_internal_get__campaignProgressModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::CoroutineStarter> const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::UnityW<::GlobalNamespace::CoroutineStarter>& __cordl_internal_get__coroutineStarter();

  constexpr ::UnityW<::GlobalNamespace::CustomLevelLoader> const& __cordl_internal_get__customLevelLoaderPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::CustomLevelLoader>& __cordl_internal_get__customLevelLoaderPrefab();

  constexpr int32_t const& __cordl_internal_get__defaultMaxCachedBeatmapLevels() const;

  constexpr int32_t& __cordl_internal_get__defaultMaxCachedBeatmapLevels();

  constexpr ::UnityW<::GlobalNamespace::DevicelessVRHelper> const& __cordl_internal_get__devicelessVRHelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::DevicelessVRHelper>& __cordl_internal_get__devicelessVRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& __cordl_internal_get__dlcPromoPanelData() const;

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& __cordl_internal_get__dlcPromoPanelData();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> const& __cordl_internal_get__environmentAudioEffectsPlayerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer>& __cordl_internal_get__environmentAudioEffectsPlayerPrefab();

  constexpr ::UnityW<::GlobalNamespace::ExternalCamerasManager> const& __cordl_internal_get__externalCamerasManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ExternalCamerasManager>& __cordl_internal_get__externalCamerasManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> const& __cordl_internal_get__gameLiftNetworkPlayerModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel>& __cordl_internal_get__gameLiftNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& __cordl_internal_get__leaderboardScoreUploader() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& __cordl_internal_get__leaderboardScoreUploader();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> const& __cordl_internal_get__lightsUpdateSystemPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem>& __cordl_internal_get__lightsUpdateSystemPrefab();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__mainEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__mainEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> const& __cordl_internal_get__mainEffectGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO>& __cordl_internal_get__mainEffectGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionHelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& __cordl_internal_get__mirrorRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& __cordl_internal_get__mirrorRenderer();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSessionManager> const& __cordl_internal_get__multiplayerSessionManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSessionManager>& __cordl_internal_get__multiplayerSessionManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> const& __cordl_internal_get__networkPlayerEntitlementCheckerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>& __cordl_internal_get__networkPlayerEntitlementCheckerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& __cordl_internal_get__nodePoseSyncStateManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& __cordl_internal_get__nodePoseSyncStateManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> const& __cordl_internal_get__oculusNetworkPlayerModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel>& __cordl_internal_get__oculusNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::OculusVRHelper> const& __cordl_internal_get__oculusVRHelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::OculusVRHelper>& __cordl_internal_get__oculusVRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__platformLeaderboardsModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__platformLeaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> const& __cordl_internal_get__playerDataFileManager() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>& __cordl_internal_get__playerDataFileManager();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& __cordl_internal_get__ps4AchievementIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& __cordl_internal_get__ps4AchievementIdsModel();

  constexpr int32_t const& __cordl_internal_get__ps4MaxCachedBeatmapLevels() const;

  constexpr int32_t& __cordl_internal_get__ps4MaxCachedBeatmapLevels();

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& __cordl_internal_get__ps5AchievmentIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& __cordl_internal_get__ps5AchievmentIdsModel();

  constexpr ::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> const& __cordl_internal_get__ps5ActivityIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO>& __cordl_internal_get__ps5ActivityIdsModel();

  constexpr ::UnityW<::GlobalNamespace::PSVR2Helper> const& __cordl_internal_get__psVR2HelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::PSVR2Helper>& __cordl_internal_get__psVR2HelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::PSVRHelper> const& __cordl_internal_get__psVRHelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::PSVRHelper>& __cordl_internal_get__psVRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::RichPresenceManager> const& __cordl_internal_get__richPresenceManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::RichPresenceManager>& __cordl_internal_get__richPresenceManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO> const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO>& __cordl_internal_get__songPackMasksModel();

  constexpr ::UnityW<::GlobalNamespace::SonyNetworkPlayerModel> const& __cordl_internal_get__sonyNetworkPlayerModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SonyNetworkPlayerModel>& __cordl_internal_get__sonyNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> const& __cordl_internal_get__steamNetworkPlayerModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel>& __cordl_internal_get__steamNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& __cordl_internal_get__timeHelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::TimeHelper>& __cordl_internal_get__timeHelperPrefab();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManagerPrefab() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::UnityXRHelper> const& __cordl_internal_get__unityXRHelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::UnityXRHelper>& __cordl_internal_get__unityXRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::VoipManager> const& __cordl_internal_get__voipManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::VoipManager>& __cordl_internal_get__voipManagerPrefab();

  constexpr void __cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value);

  constexpr void __cordl_internal_set__achievementsModel(::UnityW<::GlobalNamespace::AchievementsModelSO> value);

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__beatmapLevelsPromoData(::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> value);

  constexpr void __cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value);

  constexpr void __cordl_internal_set__bloomPrePassGraphicsSettingsPresets(::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> value);

  constexpr void __cordl_internal_set__campaignProgressModelPrefab(::UnityW<::GlobalNamespace::CampaignProgressModel> value);

  constexpr void __cordl_internal_set__coroutineStarter(::UnityW<::GlobalNamespace::CoroutineStarter> value);

  constexpr void __cordl_internal_set__customLevelLoaderPrefab(::UnityW<::GlobalNamespace::CustomLevelLoader> value);

  constexpr void __cordl_internal_set__defaultMaxCachedBeatmapLevels(int32_t value);

  constexpr void __cordl_internal_set__devicelessVRHelperPrefab(::UnityW<::GlobalNamespace::DevicelessVRHelper> value);

  constexpr void __cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value);

  constexpr void __cordl_internal_set__environmentAudioEffectsPlayerPrefab(::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> value);

  constexpr void __cordl_internal_set__externalCamerasManagerPrefab(::UnityW<::GlobalNamespace::ExternalCamerasManager> value);

  constexpr void __cordl_internal_set__gameLiftNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__hapticFeedbackControllerPrefab(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__leaderboardScoreUploader(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value);

  constexpr void __cordl_internal_set__lightsUpdateSystemPrefab(::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> value);

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set__mainEffectGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> value);

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr void __cordl_internal_set__menuTransitionHelperPrefab(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  constexpr void __cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerSessionManagerPrefab(::UnityW<::GlobalNamespace::MultiplayerSessionManager> value);

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  constexpr void __cordl_internal_set__networkPlayerEntitlementCheckerPrefab(::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManagerPrefab(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value);

  constexpr void __cordl_internal_set__oculusNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__oculusVRHelperPrefab(::UnityW<::GlobalNamespace::OculusVRHelper> value);

  constexpr void __cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr void __cordl_internal_set__playerDataFileManager(::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> value);

  constexpr void __cordl_internal_set__playerDataModelPrefab(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__ps4AchievementIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value);

  constexpr void __cordl_internal_set__ps4MaxCachedBeatmapLevels(int32_t value);

  constexpr void __cordl_internal_set__ps5AchievmentIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value);

  constexpr void __cordl_internal_set__ps5ActivityIdsModel(::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> value);

  constexpr void __cordl_internal_set__psVR2HelperPrefab(::UnityW<::GlobalNamespace::PSVR2Helper> value);

  constexpr void __cordl_internal_set__psVRHelperPrefab(::UnityW<::GlobalNamespace::PSVRHelper> value);

  constexpr void __cordl_internal_set__richPresenceManagerPrefab(::UnityW<::GlobalNamespace::RichPresenceManager> value);

  constexpr void __cordl_internal_set__songPackMasksModel(::UnityW<::GlobalNamespace::SongPackMasksModelSO> value);

  constexpr void __cordl_internal_set__sonyNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::SonyNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__steamNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__timeHelperPrefab(::UnityW<::GlobalNamespace::TimeHelper> value);

  constexpr void __cordl_internal_set__tweeningManagerPrefab(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set__unityXRHelperPrefab(::UnityW<::GlobalNamespace::UnityXRHelper> value);

  constexpr void __cordl_internal_set__voipManagerPrefab(::UnityW<::GlobalNamespace::VoipManager> value);

  /// @brief Method .ctor, addr 0x25034d0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSystemInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSystemInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSystemInit(MainSystemInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSystemInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSystemInit(MainSystemInit const&) = delete;

  /// @brief Field _mainSettingsModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _audioManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> ____mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> ____mainEffectGraphicsSettingsPresets;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> ____bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererSO> ____mirrorRenderer;

  /// @brief Field _mainEffectContainer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____mainEffectContainer;

  /// @brief Field _bloomPrePassEffectContainer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> ____bloomPrePassEffectContainer;

  /// @brief Field _songPackMasksModel, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPackMasksModelSO> ____songPackMasksModel;

  /// @brief Field _playerDataFileManager, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> ____playerDataFileManager;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _timeHelperPrefab, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TimeHelper> ____timeHelperPrefab;

  /// @brief Field _playerDataModelPrefab, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModelPrefab;

  /// @brief Field _campaignProgressModelPrefab, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignProgressModel> ____campaignProgressModelPrefab;

  /// @brief Field _customLevelLoaderPrefab, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CustomLevelLoader> ____customLevelLoaderPrefab;

  /// @brief Field _externalCamerasManagerPrefab, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExternalCamerasManager> ____externalCamerasManagerPrefab;

  /// @brief Field _multiplayerSessionManagerPrefab, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSessionManager> ____multiplayerSessionManagerPrefab;

  /// @brief Field _voipManagerPrefab, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoipManager> ____voipManagerPrefab;

  /// @brief Field _gameLiftNetworkPlayerModelPrefab, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> ____gameLiftNetworkPlayerModelPrefab;

  /// @brief Field _networkPlayerEntitlementCheckerPrefab, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> ____networkPlayerEntitlementCheckerPrefab;

  /// @brief Field _hapticFeedbackControllerPrefab, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackControllerPrefab;

  /// @brief Field _tweeningManagerPrefab, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManagerPrefab;

  /// @brief Field _lightsUpdateSystemPrefab, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> ____lightsUpdateSystemPrefab;

  /// @brief Field _environmentAudioEffectsPlayerPrefab, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> ____environmentAudioEffectsPlayerPrefab;

  /// @brief Field _nodePoseSyncStateManagerPrefab, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> ____nodePoseSyncStateManagerPrefab;

  /// @brief Field _psVRHelperPrefab, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PSVRHelper> ____psVRHelperPrefab;

  /// @brief Field _psVR2HelperPrefab, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PSVR2Helper> ____psVR2HelperPrefab;

  /// @brief Field _oculusVRHelperPrefab, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusVRHelper> ____oculusVRHelperPrefab;

  /// @brief Field _unityXRHelperPrefab, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::UnityXRHelper> ____unityXRHelperPrefab;

  /// @brief Field _devicelessVRHelperPrefab, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DevicelessVRHelper> ____devicelessVRHelperPrefab;

  /// @brief Field _richPresenceManagerPrefab, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RichPresenceManager> ____richPresenceManagerPrefab;

  /// @brief Field _dlcPromoPanelData, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> ____dlcPromoPanelData;

  /// @brief Field _beatmapLevelsPromoData, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> ____beatmapLevelsPromoData;

  /// @brief Field _networkConfig, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkConfigSO> ____networkConfig;

  /// @brief Field _steamNetworkPlayerModelPrefab, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> ____steamNetworkPlayerModelPrefab;

  /// @brief Field _oculusNetworkPlayerModelPrefab, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> ____oculusNetworkPlayerModelPrefab;

  /// @brief Field _sonyNetworkPlayerModelPrefab, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyNetworkPlayerModel> ____sonyNetworkPlayerModelPrefab;

  /// @brief Field _leaderboardScoreUploader, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> ____leaderboardScoreUploader;

  /// @brief Field _platformLeaderboardsModel, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____platformLeaderboardsModel;

  /// @brief Field _ps4AchievementIdsModel, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> ____ps4AchievementIdsModel;

  /// @brief Field _ps5AchievmentIdsModel, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> ____ps5AchievmentIdsModel;

  /// @brief Field _achievementIdsModel, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementIdsModelSO> ____achievementIdsModel;

  /// @brief Field _achievementsModel, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementsModelSO> ____achievementsModel;

  /// @brief Field _ps5ActivityIdsModel, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> ____ps5ActivityIdsModel;

  /// @brief Field _coroutineStarter, offset: 0x188, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CoroutineStarter> ____coroutineStarter;

  /// @brief Field _menuTransitionHelperPrefab, offset: 0x190, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionHelperPrefab;

  /// @brief Field _defaultMaxCachedBeatmapLevels, offset: 0x198, size: 0x4, def value: None
  int32_t ____defaultMaxCachedBeatmapLevels;

  /// @brief Field _ps4MaxCachedBeatmapLevels, offset: 0x19c, size: 0x4, def value: None
  int32_t ____ps4MaxCachedBeatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSystemInit, 0x1a0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mainSettingsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____audioManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mirrorRendererGraphicsSettingsPresets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mainEffectGraphicsSettingsPresets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____bloomPrePassGraphicsSettingsPresets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mirrorRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____mainEffectContainer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____bloomPrePassEffectContainer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____songPackMasksModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____playerDataFileManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____standardLevelScenesTransitionSetupData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____missionLevelScenesTransitionSetupData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____multiplayerLevelScenesTransitionSetupData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____timeHelperPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____playerDataModelPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____campaignProgressModelPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____customLevelLoaderPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____externalCamerasManagerPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____multiplayerSessionManagerPrefab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____voipManagerPrefab) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____gameLiftNetworkPlayerModelPrefab) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____networkPlayerEntitlementCheckerPrefab) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____hapticFeedbackControllerPrefab) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____tweeningManagerPrefab) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____lightsUpdateSystemPrefab) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____environmentAudioEffectsPlayerPrefab) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____nodePoseSyncStateManagerPrefab) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____psVRHelperPrefab) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____psVR2HelperPrefab) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____oculusVRHelperPrefab) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____unityXRHelperPrefab) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____devicelessVRHelperPrefab) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____richPresenceManagerPrefab) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____dlcPromoPanelData) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____beatmapLevelsPromoData) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____networkConfig) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____steamNetworkPlayerModelPrefab) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____oculusNetworkPlayerModelPrefab) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____sonyNetworkPlayerModelPrefab) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____leaderboardScoreUploader) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____platformLeaderboardsModel) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps4AchievementIdsModel) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps5AchievmentIdsModel) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____achievementIdsModel) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____achievementsModel) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps5ActivityIdsModel) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____coroutineStarter) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____menuTransitionHelperPrefab) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____defaultMaxCachedBeatmapLevels) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____ps4MaxCachedBeatmapLevels) == 0x19c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSystemInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSystemInit*, "", "MainSystemInit");
NEED_NO_BOX(::GlobalNamespace::__MainSystemInit____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSystemInit____c*, "", "MainSystemInit/<>c");
