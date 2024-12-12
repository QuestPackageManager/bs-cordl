#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayCoreInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(GameplayCoreInstaller)
namespace GlobalNamespace {
class ArcAndObstacleHapticEffectManager;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class BadNoteCutEffectSpawner;
}
namespace GlobalNamespace {
class BeatLineManager;
}
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class MissedNoteEffectSpawner;
}
namespace GlobalNamespace {
class NoteCutScoreSpawner;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace GlobalNamespace {
class SongProfilingController;
}
namespace Tweening {
class SongTimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayCoreInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayCoreInstaller);
// Dependencies BGLib.DotnetExtension.CommandLine.CommandLineParserResult, PerformanceToolLauncher::OverrideConfig, System.Nullable`1<T>, Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayCoreInstaller
class CORDL_TYPE GameplayCoreInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _arcAndObstacleHapticManagerEffectPrefab, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__arcAndObstacleHapticManagerEffectPrefab,
                      put = __cordl_internal_set__arcAndObstacleHapticManagerEffectPrefab)) ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager>
      _arcAndObstacleHapticManagerEffectPrefab;

  /// @brief Field _audioManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _badNoteCutEffectSpawnerPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__badNoteCutEffectSpawnerPrefab, put = __cordl_internal_set__badNoteCutEffectSpawnerPrefab)) ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner>
      _badNoteCutEffectSpawnerPrefab;

  /// @brief Field _beatLineManagerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatLineManagerPrefab, put = __cordl_internal_set__beatLineManagerPrefab)) ::UnityW<::GlobalNamespace::BeatLineManager> _beatLineManagerPrefab;

  /// @brief Field _commandLineArguments, offset 0x88, size 0x18
  __declspec(property(get = __cordl_internal_get__commandLineArguments,
                      put = __cordl_internal_set__commandLineArguments)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult _commandLineArguments;

  /// @brief Field _effectPoolsManualInstaller, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__effectPoolsManualInstaller, put = __cordl_internal_set__effectPoolsManualInstaller)) ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller>
      _effectPoolsManualInstaller;

  /// @brief Field _missedNoteEffectSpawnerPrefab, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__missedNoteEffectSpawnerPrefab, put = __cordl_internal_set__missedNoteEffectSpawnerPrefab)) ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner>
      _missedNoteEffectSpawnerPrefab;

  /// @brief Field _noteCutScoreSpawnerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCutScoreSpawnerPrefab, put = __cordl_internal_set__noteCutScoreSpawnerPrefab)) ::UnityW<::GlobalNamespace::NoteCutScoreSpawner>
      _noteCutScoreSpawnerPrefab;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevelModel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevelModel)) ::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field _performanceToolConfig, offset 0xa0, size 0x3
  __declspec(property(get = __cordl_internal_get__performanceToolConfig,
                      put = __cordl_internal_set__performanceToolConfig)) ::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>
      _performanceToolConfig;

  /// @brief Field _playerHeightDetectorPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeightDetectorPrefab, put = __cordl_internal_set__playerHeightDetectorPrefab)) ::UnityW<::GlobalNamespace::PlayerHeightDetector>
      _playerHeightDetectorPrefab;

  /// @brief Field _sceneSetupData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _songProfilingControllerPrefab, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__songProfilingControllerPrefab, put = __cordl_internal_set__songProfilingControllerPrefab)) ::UnityW<::GlobalNamespace::SongProfilingController>
      _songProfilingControllerPrefab;

  /// @brief Field _songTimeTweeningManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimeTweeningManager, put = __cordl_internal_set__songTimeTweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _songTimeTweeningManager;

  /// @brief Method InstallBindings, addr 0x3bf0144, size 0x18c8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::GameplayCoreInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> const& __cordl_internal_get__arcAndObstacleHapticManagerEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager>& __cordl_internal_get__arcAndObstacleHapticManagerEffectPrefab();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> const& __cordl_internal_get__badNoteCutEffectSpawnerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner>& __cordl_internal_get__badNoteCutEffectSpawnerPrefab();

  constexpr ::UnityW<::GlobalNamespace::BeatLineManager> const& __cordl_internal_get__beatLineManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BeatLineManager>& __cordl_internal_get__beatLineManagerPrefab();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineArguments() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineArguments();

  constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> const& __cordl_internal_get__effectPoolsManualInstaller() const;

  constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller>& __cordl_internal_get__effectPoolsManualInstaller();

  constexpr ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> const& __cordl_internal_get__missedNoteEffectSpawnerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner>& __cordl_internal_get__missedNoteEffectSpawnerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NoteCutScoreSpawner> const& __cordl_internal_get__noteCutScoreSpawnerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteCutScoreSpawner>& __cordl_internal_get__noteCutScoreSpawnerPrefab();

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* const& __cordl_internal_get__perceivedLoudnessPerLevelModel() const;

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __cordl_internal_get__perceivedLoudnessPerLevelModel();

  constexpr ::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig> const& __cordl_internal_get__performanceToolConfig() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>& __cordl_internal_get__performanceToolConfig();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& __cordl_internal_get__playerHeightDetectorPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& __cordl_internal_get__playerHeightDetectorPrefab();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::SongProfilingController> const& __cordl_internal_get__songProfilingControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SongProfilingController>& __cordl_internal_get__songProfilingControllerPrefab();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__songTimeTweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__songTimeTweeningManager();

  constexpr void __cordl_internal_set__arcAndObstacleHapticManagerEffectPrefab(::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> value);

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__badNoteCutEffectSpawnerPrefab(::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> value);

  constexpr void __cordl_internal_set__beatLineManagerPrefab(::UnityW<::GlobalNamespace::BeatLineManager> value);

  constexpr void __cordl_internal_set__commandLineArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  constexpr void __cordl_internal_set__effectPoolsManualInstaller(::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> value);

  constexpr void __cordl_internal_set__missedNoteEffectSpawnerPrefab(::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> value);

  constexpr void __cordl_internal_set__noteCutScoreSpawnerPrefab(::UnityW<::GlobalNamespace::NoteCutScoreSpawner> value);

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr void __cordl_internal_set__performanceToolConfig(::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig> value);

  constexpr void __cordl_internal_set__playerHeightDetectorPrefab(::UnityW<::GlobalNamespace::PlayerHeightDetector> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__songProfilingControllerPrefab(::UnityW<::GlobalNamespace::SongProfilingController> value);

  constexpr void __cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x3bf1a0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayCoreInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayCoreInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayCoreInstaller(GameplayCoreInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayCoreInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayCoreInstaller(GameplayCoreInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4719 };

  /// @brief Field _beatLineManagerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatLineManager> ____beatLineManagerPrefab;

  /// @brief Field _songTimeTweeningManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____songTimeTweeningManager;

  /// @brief Field _audioManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _playerHeightDetectorPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeightDetector> ____playerHeightDetectorPrefab;

  /// @brief Field _noteCutScoreSpawnerPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteCutScoreSpawner> ____noteCutScoreSpawnerPrefab;

  /// @brief Field _badNoteCutEffectSpawnerPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> ____badNoteCutEffectSpawnerPrefab;

  /// @brief Field _missedNoteEffectSpawnerPrefab, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> ____missedNoteEffectSpawnerPrefab;

  /// @brief Field _effectPoolsManualInstaller, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> ____effectPoolsManualInstaller;

  /// @brief Field _arcAndObstacleHapticManagerEffectPrefab, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> ____arcAndObstacleHapticManagerEffectPrefab;

  /// @brief Field _songProfilingControllerPrefab, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongProfilingController> ____songProfilingControllerPrefab;

  /// @brief Field _sceneSetupData, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  /// @brief Field _commandLineArguments, offset: 0x88, size: 0x18, def value: None
  ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ____commandLineArguments;

  /// @brief Field _performanceToolConfig, offset: 0xa0, size: 0x3, def value: None
  ::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig> ____performanceToolConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____beatLineManagerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____songTimeTweeningManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____audioManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____playerHeightDetectorPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____noteCutScoreSpawnerPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____badNoteCutEffectSpawnerPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____missedNoteEffectSpawnerPrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____effectPoolsManualInstaller) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____arcAndObstacleHapticManagerEffectPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____songProfilingControllerPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____sceneSetupData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____perceivedLoudnessPerLevelModel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____commandLineArguments) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____performanceToolConfig) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreInstaller, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreInstaller*, "", "GameplayCoreInstaller");
