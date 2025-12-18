#pragma once
// IWYU pragma private; include "GlobalNamespace/MainSystemInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainSystemInit)
namespace GlobalNamespace {
class BeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
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
class DeterminismConfig;
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
class GameLiftNetworkPlayerModel;
}
namespace GlobalNamespace {
class IRandom;
}
namespace GlobalNamespace {
class LeaderboardIdsModel;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class LocalServerNetworkPlayerModel;
}
namespace GlobalNamespace {
class MainSystemInit___c;
}
namespace GlobalNamespace {
class MainSystemInit___c__DisplayClass33_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
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
class PackDefinitionSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class PersistentAudioNoiseController;
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
class RichPresenceManager;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class SongPackMasksModelSO;
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
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class MainSystemInit___c;
}
namespace GlobalNamespace {
class MainSystemInit___c__DisplayClass33_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSystemInit);
MARK_REF_PTR_T(::GlobalNamespace::MainSystemInit___c);
MARK_REF_PTR_T(::GlobalNamespace::MainSystemInit___c__DisplayClass33_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainSystemInit/<>c
class CORDL_TYPE MainSystemInit___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MainSystemInit___c* __9;

  /// @brief Field <>9__33_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_1, put = setStaticF___9__33_1)) ::System::Func_2<::Zenject::InjectContext*, ::GlobalNamespace::IRandom*>* __9__33_1;

  /// @brief Field <>9__33_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_2, put = setStaticF___9__33_2)) ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*,
                                                                                                ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>* __9__33_2;

  /// @brief Field <>9__33_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_3, put = setStaticF___9__33_3)) ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*,
                                                                                                ::GlobalNamespace::OculusLevelProductCollectionModel*>* __9__33_3;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__36_0, put = setStaticF___9__36_0)) ::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* __9__36_0;

  static inline ::GlobalNamespace::MainSystemInit___c* New_ctor();

  /// @brief Method <InstallBindings>b__33_1, addr 0x3676de0, size 0x100, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IRandom* _InstallBindings_b__33_1(::Zenject::InjectContext* ctx);

  /// @brief Method <InstallBindings>b__33_2, addr 0x3676ee0, size 0x74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PerceivedLoudnessPerLevelModel* _InstallBindings_b__33_2(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method <InstallBindings>b__33_3, addr 0x3676f54, size 0x74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel* _InstallBindings_b__33_3(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method <InstallPlatformLeaderboardsModel>b__36_0, addr 0x3676fc8, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LeaderboardIdsModel* _InstallPlatformLeaderboardsModel_b__36_0(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method .ctor, addr 0x3676ddc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MainSystemInit___c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::InjectContext*, ::GlobalNamespace::IRandom*>* getStaticF___9__33_1();

  static inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*
  getStaticF___9__33_2();

  static inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*
  getStaticF___9__33_3();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* getStaticF___9__36_0();

  static inline void setStaticF___9(::GlobalNamespace::MainSystemInit___c* value);

  static inline void setStaticF___9__33_1(::System::Func_2<::Zenject::InjectContext*, ::GlobalNamespace::IRandom*>* value);

  static inline void
  setStaticF___9__33_2(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>* value);

  static inline void
  setStaticF___9__33_3(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>* value);

  static inline void setStaticF___9__36_0(::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSystemInit___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSystemInit___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSystemInit___c(MainSystemInit___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSystemInit___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSystemInit___c(MainSystemInit___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSystemInit___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainSystemInit/<>c__DisplayClass33_0
class CORDL_TYPE MainSystemInit___c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field isRunningFromTests, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isRunningFromTests, put = __cordl_internal_set_isRunningFromTests)) bool isRunningFromTests;

  static inline ::GlobalNamespace::MainSystemInit___c__DisplayClass33_0* New_ctor();

  /// @brief Method <InstallBindings>b__0, addr 0x3677044, size 0x70, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DeterminismConfig* _InstallBindings_b__0(::GlobalNamespace::TimeHelper* timeHelper);

  constexpr bool const& __cordl_internal_get_isRunningFromTests() const;

  constexpr bool& __cordl_internal_get_isRunningFromTests();

  constexpr void __cordl_internal_set_isRunningFromTests(bool value);

  /// @brief Method .ctor, addr 0x3676884, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSystemInit___c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSystemInit___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSystemInit___c__DisplayClass33_0(MainSystemInit___c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSystemInit___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSystemInit___c__DisplayClass33_0(MainSystemInit___c__DisplayClass33_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21011 };

  /// @brief Field isRunningFromTests, offset: 0x10, size: 0x1, def value: None
  bool ___isRunningFromTests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainSystemInit___c__DisplayClass33_0, ___isRunningFromTests) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSystemInit___c__DisplayClass33_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainSystemInit
class CORDL_TYPE MainSystemInit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::MainSystemInit___c;

  using __c__DisplayClass33_0 = ::GlobalNamespace::MainSystemInit___c__DisplayClass33_0;

  /// @brief Field _beatmapLevelsPromoData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsPromoData, put = __cordl_internal_set__beatmapLevelsPromoData)) ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO>
      _beatmapLevelsPromoData;

  /// @brief Field _campaignProgressModelPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__campaignProgressModelPrefab, put = __cordl_internal_set__campaignProgressModelPrefab)) ::UnityW<::GlobalNamespace::CampaignProgressModel>
      _campaignProgressModelPrefab;

  /// @brief Field _coroutineStarter, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::UnityW<::GlobalNamespace::CoroutineStarter> _coroutineStarter;

  /// @brief Field _customLevelLoaderPrefab, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__customLevelLoaderPrefab, put = __cordl_internal_set__customLevelLoaderPrefab)) ::UnityW<::GlobalNamespace::CustomLevelLoader>
      _customLevelLoaderPrefab;

  /// @brief Field _defaultMaxCachedBeatmapLevels, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultMaxCachedBeatmapLevels, put = __cordl_internal_set__defaultMaxCachedBeatmapLevels)) int32_t _defaultMaxCachedBeatmapLevels;

  /// @brief Field _devicelessVRHelperPrefab, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__devicelessVRHelperPrefab, put = __cordl_internal_set__devicelessVRHelperPrefab)) ::UnityW<::GlobalNamespace::DevicelessVRHelper>
      _devicelessVRHelperPrefab;

  /// @brief Field _dlcPromoPanelData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelData, put = __cordl_internal_set__dlcPromoPanelData)) ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> _dlcPromoPanelData;

  /// @brief Field _environmentAudioEffectsPlayerPrefab, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentAudioEffectsPlayerPrefab,
                      put = __cordl_internal_set__environmentAudioEffectsPlayerPrefab)) ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer>
      _environmentAudioEffectsPlayerPrefab;

  /// @brief Field _gameLiftNetworkPlayerModelPrefab, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__gameLiftNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__gameLiftNetworkPlayerModelPrefab)) ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel>
      _gameLiftNetworkPlayerModelPrefab;

  /// @brief Field _leaderboardScoreUploader, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardScoreUploader, put = __cordl_internal_set__leaderboardScoreUploader)) ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>
      _leaderboardScoreUploader;

  /// @brief Field _lightsUpdateSystemPrefab, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__lightsUpdateSystemPrefab, put = __cordl_internal_set__lightsUpdateSystemPrefab)) ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem>
      _lightsUpdateSystemPrefab;

  /// @brief Field _localServerNetworkPlayerModelPrefab, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__localServerNetworkPlayerModelPrefab,
                      put = __cordl_internal_set__localServerNetworkPlayerModelPrefab)) ::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel>
      _localServerNetworkPlayerModelPrefab;

  /// @brief Field _menuTransitionHelperPrefab, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionHelperPrefab, put = __cordl_internal_set__menuTransitionHelperPrefab)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper>
      _menuTransitionHelperPrefab;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>
      _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>
      _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerSessionManagerPrefab, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManagerPrefab,
                      put = __cordl_internal_set__multiplayerSessionManagerPrefab)) ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager>
      _multiplayerSessionManagerPrefab;

  /// @brief Field _networkConfig, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  /// @brief Field _networkPlayerEntitlementCheckerPrefab, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__networkPlayerEntitlementCheckerPrefab,
                      put = __cordl_internal_set__networkPlayerEntitlementCheckerPrefab)) ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>
      _networkPlayerEntitlementCheckerPrefab;

  /// @brief Field _nodePoseSyncStateManagerPrefab, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManagerPrefab, put = __cordl_internal_set__nodePoseSyncStateManagerPrefab)) ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>
      _nodePoseSyncStateManagerPrefab;

  /// @brief Field _oculusNetworkPlayerModelPrefab, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusNetworkPlayerModelPrefab, put = __cordl_internal_set__oculusNetworkPlayerModelPrefab)) ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel>
      _oculusNetworkPlayerModelPrefab;

  /// @brief Field _persistentAudioNoisePrefab, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__persistentAudioNoisePrefab, put = __cordl_internal_set__persistentAudioNoisePrefab)) ::UnityW<::GlobalNamespace::PersistentAudioNoiseController>
      _persistentAudioNoisePrefab;

  /// @brief Field _platformLeaderboardsModel, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardsModel, put = __cordl_internal_set__platformLeaderboardsModel)) ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>
      _platformLeaderboardsModel;

  /// @brief Field _playerDataFileManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileManager, put = __cordl_internal_set__playerDataFileManager)) ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>
      _playerDataFileManager;

  /// @brief Field _playerDataModelPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModelPrefab, put = __cordl_internal_set__playerDataModelPrefab)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModelPrefab;

  /// @brief Field _richPresenceManagerPrefab, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__richPresenceManagerPrefab, put = __cordl_internal_set__richPresenceManagerPrefab)) ::UnityW<::GlobalNamespace::RichPresenceManager>
      _richPresenceManagerPrefab;

  /// @brief Field _settingsManager, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _songPackMasksModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel)) ::UnityW<::GlobalNamespace::SongPackMasksModelSO> _songPackMasksModel;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>
      _standardLevelScenesTransitionSetupData;

  /// @brief Field _steamNetworkPlayerModelPrefab, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__steamNetworkPlayerModelPrefab, put = __cordl_internal_set__steamNetworkPlayerModelPrefab)) ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel>
      _steamNetworkPlayerModelPrefab;

  /// @brief Field _tweeningManagerPrefab, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManagerPrefab, put = __cordl_internal_set__tweeningManagerPrefab)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManagerPrefab;

  /// @brief Field _unityXRHelperPrefab, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__unityXRHelperPrefab, put = __cordl_internal_set__unityXRHelperPrefab)) ::UnityW<::GlobalNamespace::UnityXRHelper> _unityXRHelperPrefab;

  /// @brief Field _voipManagerPrefab, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__voipManagerPrefab, put = __cordl_internal_set__voipManagerPrefab)) ::UnityW<::GlobalNamespace::VoipManager> _voipManagerPrefab;

  /// @brief Method Init, addr 0x366ee48, size 0x7c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::SettingsApplicatorSO* settingsApplicator);

  /// @brief Method InstallBindings, addr 0x366f658, size 0x1bb8, virtual false, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container, bool isRunningFromTests);

  /// @brief Method InstallOculusDestinationBindings, addr 0x3676888, size 0x124, virtual false, abstract: false, final false
  inline void InstallOculusDestinationBindings(::Zenject::DiContainer* container);

  /// @brief Method InstallPlatformLeaderboardsModel, addr 0x3676ae4, size 0x298, virtual false, abstract: false, final false
  inline void InstallPlatformLeaderboardsModel(::Zenject::DiContainer* container, bool isRunningFromTests);

  /// @brief Method InstallRichPresence, addr 0x36769ac, size 0x138, virtual false, abstract: false, final false
  inline void InstallRichPresence(::Zenject::DiContainer* container, bool isRunningFromTests);

  static inline ::GlobalNamespace::MainSystemInit* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> const& __cordl_internal_get__beatmapLevelsPromoData() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO>& __cordl_internal_get__beatmapLevelsPromoData();

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

  constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> const& __cordl_internal_get__gameLiftNetworkPlayerModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel>& __cordl_internal_get__gameLiftNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& __cordl_internal_get__leaderboardScoreUploader() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& __cordl_internal_get__leaderboardScoreUploader();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> const& __cordl_internal_get__lightsUpdateSystemPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem>& __cordl_internal_get__lightsUpdateSystemPrefab();

  constexpr ::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel> const& __cordl_internal_get__localServerNetworkPlayerModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel>& __cordl_internal_get__localServerNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionHelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager> const& __cordl_internal_get__multiplayerSessionManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager>& __cordl_internal_get__multiplayerSessionManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> const& __cordl_internal_get__networkPlayerEntitlementCheckerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>& __cordl_internal_get__networkPlayerEntitlementCheckerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& __cordl_internal_get__nodePoseSyncStateManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& __cordl_internal_get__nodePoseSyncStateManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> const& __cordl_internal_get__oculusNetworkPlayerModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel>& __cordl_internal_get__oculusNetworkPlayerModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::PersistentAudioNoiseController> const& __cordl_internal_get__persistentAudioNoisePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::PersistentAudioNoiseController>& __cordl_internal_get__persistentAudioNoisePrefab();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__platformLeaderboardsModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__platformLeaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> const& __cordl_internal_get__playerDataFileManager() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>& __cordl_internal_get__playerDataFileManager();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModelPrefab();

  constexpr ::UnityW<::GlobalNamespace::RichPresenceManager> const& __cordl_internal_get__richPresenceManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::RichPresenceManager>& __cordl_internal_get__richPresenceManagerPrefab();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO> const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO>& __cordl_internal_get__songPackMasksModel();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> const& __cordl_internal_get__steamNetworkPlayerModelPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel>& __cordl_internal_get__steamNetworkPlayerModelPrefab();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManagerPrefab() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::UnityXRHelper> const& __cordl_internal_get__unityXRHelperPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::UnityXRHelper>& __cordl_internal_get__unityXRHelperPrefab();

  constexpr ::UnityW<::GlobalNamespace::VoipManager> const& __cordl_internal_get__voipManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::VoipManager>& __cordl_internal_get__voipManagerPrefab();

  constexpr void __cordl_internal_set__beatmapLevelsPromoData(::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> value);

  constexpr void __cordl_internal_set__campaignProgressModelPrefab(::UnityW<::GlobalNamespace::CampaignProgressModel> value);

  constexpr void __cordl_internal_set__coroutineStarter(::UnityW<::GlobalNamespace::CoroutineStarter> value);

  constexpr void __cordl_internal_set__customLevelLoaderPrefab(::UnityW<::GlobalNamespace::CustomLevelLoader> value);

  constexpr void __cordl_internal_set__defaultMaxCachedBeatmapLevels(int32_t value);

  constexpr void __cordl_internal_set__devicelessVRHelperPrefab(::UnityW<::GlobalNamespace::DevicelessVRHelper> value);

  constexpr void __cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value);

  constexpr void __cordl_internal_set__environmentAudioEffectsPlayerPrefab(::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> value);

  constexpr void __cordl_internal_set__gameLiftNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__leaderboardScoreUploader(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value);

  constexpr void __cordl_internal_set__lightsUpdateSystemPrefab(::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> value);

  constexpr void __cordl_internal_set__localServerNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__menuTransitionHelperPrefab(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerSessionManagerPrefab(::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager> value);

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  constexpr void __cordl_internal_set__networkPlayerEntitlementCheckerPrefab(::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManagerPrefab(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value);

  constexpr void __cordl_internal_set__oculusNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__persistentAudioNoisePrefab(::UnityW<::GlobalNamespace::PersistentAudioNoiseController> value);

  constexpr void __cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr void __cordl_internal_set__playerDataFileManager(::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> value);

  constexpr void __cordl_internal_set__playerDataModelPrefab(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__richPresenceManagerPrefab(::UnityW<::GlobalNamespace::RichPresenceManager> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__songPackMasksModel(::UnityW<::GlobalNamespace::SongPackMasksModelSO> value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__steamNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__tweeningManagerPrefab(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set__unityXRHelperPrefab(::UnityW<::GlobalNamespace::UnityXRHelper> value);

  constexpr void __cordl_internal_set__voipManagerPrefab(::UnityW<::GlobalNamespace::VoipManager> value);

  /// @brief Method .ctor, addr 0x3676d7c, size 0xc, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21012 };

  /// @brief Field _songPackMasksModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPackMasksModelSO> ____songPackMasksModel;

  /// @brief Field _playerDataFileManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> ____playerDataFileManager;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _playerDataModelPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModelPrefab;

  /// @brief Field _campaignProgressModelPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignProgressModel> ____campaignProgressModelPrefab;

  /// @brief Field _customLevelLoaderPrefab, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CustomLevelLoader> ____customLevelLoaderPrefab;

  /// @brief Field _multiplayerSessionManagerPrefab, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager> ____multiplayerSessionManagerPrefab;

  /// @brief Field _voipManagerPrefab, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoipManager> ____voipManagerPrefab;

  /// @brief Field _gameLiftNetworkPlayerModelPrefab, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> ____gameLiftNetworkPlayerModelPrefab;

  /// @brief Field _localServerNetworkPlayerModelPrefab, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel> ____localServerNetworkPlayerModelPrefab;

  /// @brief Field _networkPlayerEntitlementCheckerPrefab, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> ____networkPlayerEntitlementCheckerPrefab;

  /// @brief Field _tweeningManagerPrefab, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManagerPrefab;

  /// @brief Field _lightsUpdateSystemPrefab, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> ____lightsUpdateSystemPrefab;

  /// @brief Field _environmentAudioEffectsPlayerPrefab, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> ____environmentAudioEffectsPlayerPrefab;

  /// @brief Field _nodePoseSyncStateManagerPrefab, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> ____nodePoseSyncStateManagerPrefab;

  /// @brief Field _unityXRHelperPrefab, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::UnityXRHelper> ____unityXRHelperPrefab;

  /// @brief Field _devicelessVRHelperPrefab, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DevicelessVRHelper> ____devicelessVRHelperPrefab;

  /// @brief Field _richPresenceManagerPrefab, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RichPresenceManager> ____richPresenceManagerPrefab;

  /// @brief Field _dlcPromoPanelData, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> ____dlcPromoPanelData;

  /// @brief Field _beatmapLevelsPromoData, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> ____beatmapLevelsPromoData;

  /// @brief Field _networkConfig, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkConfigSO> ____networkConfig;

  /// @brief Field _steamNetworkPlayerModelPrefab, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> ____steamNetworkPlayerModelPrefab;

  /// @brief Field _oculusNetworkPlayerModelPrefab, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> ____oculusNetworkPlayerModelPrefab;

  /// @brief Field _leaderboardScoreUploader, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> ____leaderboardScoreUploader;

  /// @brief Field _platformLeaderboardsModel, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____platformLeaderboardsModel;

  /// @brief Field _coroutineStarter, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CoroutineStarter> ____coroutineStarter;

  /// @brief Field _menuTransitionHelperPrefab, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionHelperPrefab;

  /// @brief Field _defaultMaxCachedBeatmapLevels, offset: 0x108, size: 0x4, def value: None
  int32_t ____defaultMaxCachedBeatmapLevels;

  /// @brief Field _persistentAudioNoisePrefab, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PersistentAudioNoiseController> ____persistentAudioNoisePrefab;

  /// @brief Field _settingsManager, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____songPackMasksModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____playerDataFileManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____standardLevelScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____missionLevelScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____multiplayerLevelScenesTransitionSetupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____playerDataModelPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____campaignProgressModelPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____customLevelLoaderPrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____multiplayerSessionManagerPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____voipManagerPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____gameLiftNetworkPlayerModelPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____localServerNetworkPlayerModelPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____networkPlayerEntitlementCheckerPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____tweeningManagerPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____lightsUpdateSystemPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____environmentAudioEffectsPlayerPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____nodePoseSyncStateManagerPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____unityXRHelperPrefab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____devicelessVRHelperPrefab) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____richPresenceManagerPrefab) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____dlcPromoPanelData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____beatmapLevelsPromoData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____networkConfig) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____steamNetworkPlayerModelPrefab) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____oculusNetworkPlayerModelPrefab) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____leaderboardScoreUploader) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____platformLeaderboardsModel) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____coroutineStarter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____menuTransitionHelperPrefab) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____defaultMaxCachedBeatmapLevels) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____persistentAudioNoisePrefab) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSystemInit, ____settingsManager) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSystemInit, 0x120>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSystemInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSystemInit*, "", "MainSystemInit");
NEED_NO_BOX(::GlobalNamespace::MainSystemInit___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSystemInit___c*, "", "MainSystemInit/<>c");
NEED_NO_BOX(::GlobalNamespace::MainSystemInit___c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSystemInit___c__DisplayClass33_0*, "", "MainSystemInit/<>c__DisplayClass33_0");
