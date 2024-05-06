#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
// Type: ::GameplayCoreInstaller
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayCoreInstaller*
class CORDL_TYPE GameplayCoreInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _arcAndObstacleHapticManagerEffectPrefab, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__arcAndObstacleHapticManagerEffectPrefab,
                      put = __cordl_internal_set__arcAndObstacleHapticManagerEffectPrefab))::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> _arcAndObstacleHapticManagerEffectPrefab;

  /// @brief Field _audioManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager))::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _badNoteCutEffectSpawnerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__badNoteCutEffectSpawnerPrefab,
                      put = __cordl_internal_set__badNoteCutEffectSpawnerPrefab))::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> _badNoteCutEffectSpawnerPrefab;

  /// @brief Field _beatLineManagerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatLineManagerPrefab, put = __cordl_internal_set__beatLineManagerPrefab))::UnityW<::GlobalNamespace::BeatLineManager> _beatLineManagerPrefab;

  /// @brief Field _effectPoolsManualInstaller, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__effectPoolsManualInstaller,
                      put = __cordl_internal_set__effectPoolsManualInstaller))::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> _effectPoolsManualInstaller;

  /// @brief Field _missedNoteEffectSpawnerPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__missedNoteEffectSpawnerPrefab,
                      put = __cordl_internal_set__missedNoteEffectSpawnerPrefab))::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> _missedNoteEffectSpawnerPrefab;

  /// @brief Field _noteCutScoreSpawnerPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCutScoreSpawnerPrefab,
                      put = __cordl_internal_set__noteCutScoreSpawnerPrefab))::UnityW<::GlobalNamespace::NoteCutScoreSpawner> _noteCutScoreSpawnerPrefab;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevelModel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevelModel))::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field _playerHeightDetectorPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeightDetectorPrefab,
                      put = __cordl_internal_set__playerHeightDetectorPrefab))::UnityW<::GlobalNamespace::PlayerHeightDetector> _playerHeightDetectorPrefab;

  /// @brief Field _sceneSetupData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _songProfilingControllerPrefab, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__songProfilingControllerPrefab,
                      put = __cordl_internal_set__songProfilingControllerPrefab))::UnityW<::GlobalNamespace::SongProfilingController> _songProfilingControllerPrefab;

  /// @brief Field _songTimeTweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimeTweeningManager, put = __cordl_internal_set__songTimeTweeningManager))::UnityW<::Tweening::SongTimeTweeningManager> _songTimeTweeningManager;

  /// @brief Method InstallBindings, addr 0x272ec68, size 0x15bc, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method InstallRecordingTool, addr 0x2730224, size 0xc0, virtual false, abstract: false, final false
  inline void InstallRecordingTool();

  static inline ::GlobalNamespace::GameplayCoreInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> const& __cordl_internal_get__arcAndObstacleHapticManagerEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager>& __cordl_internal_get__arcAndObstacleHapticManagerEffectPrefab();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> const& __cordl_internal_get__badNoteCutEffectSpawnerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner>& __cordl_internal_get__badNoteCutEffectSpawnerPrefab();

  constexpr ::UnityW<::GlobalNamespace::BeatLineManager> const& __cordl_internal_get__beatLineManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BeatLineManager>& __cordl_internal_get__beatLineManagerPrefab();

  constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> const& __cordl_internal_get__effectPoolsManualInstaller() const;

  constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller>& __cordl_internal_get__effectPoolsManualInstaller();

  constexpr ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> const& __cordl_internal_get__missedNoteEffectSpawnerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner>& __cordl_internal_get__missedNoteEffectSpawnerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NoteCutScoreSpawner> const& __cordl_internal_get__noteCutScoreSpawnerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteCutScoreSpawner>& __cordl_internal_get__noteCutScoreSpawnerPrefab();

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __cordl_internal_get__perceivedLoudnessPerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& __cordl_internal_get__perceivedLoudnessPerLevelModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& __cordl_internal_get__playerHeightDetectorPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& __cordl_internal_get__playerHeightDetectorPrefab();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::SongProfilingController> const& __cordl_internal_get__songProfilingControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SongProfilingController>& __cordl_internal_get__songProfilingControllerPrefab();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__songTimeTweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__songTimeTweeningManager();

  constexpr void __cordl_internal_set__arcAndObstacleHapticManagerEffectPrefab(::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> value);

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__badNoteCutEffectSpawnerPrefab(::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> value);

  constexpr void __cordl_internal_set__beatLineManagerPrefab(::UnityW<::GlobalNamespace::BeatLineManager> value);

  constexpr void __cordl_internal_set__effectPoolsManualInstaller(::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> value);

  constexpr void __cordl_internal_set__missedNoteEffectSpawnerPrefab(::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> value);

  constexpr void __cordl_internal_set__noteCutScoreSpawnerPrefab(::UnityW<::GlobalNamespace::NoteCutScoreSpawner> value);

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr void __cordl_internal_set__playerHeightDetectorPrefab(::UnityW<::GlobalNamespace::PlayerHeightDetector> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__songProfilingControllerPrefab(::UnityW<::GlobalNamespace::SongProfilingController> value);

  constexpr void __cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x27302e4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _beatLineManagerPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatLineManager> ____beatLineManagerPrefab;

  /// @brief Field _songTimeTweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____songTimeTweeningManager;

  /// @brief Field _audioManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _playerHeightDetectorPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeightDetector> ____playerHeightDetectorPrefab;

  /// @brief Field _noteCutScoreSpawnerPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteCutScoreSpawner> ____noteCutScoreSpawnerPrefab;

  /// @brief Field _badNoteCutEffectSpawnerPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> ____badNoteCutEffectSpawnerPrefab;

  /// @brief Field _missedNoteEffectSpawnerPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> ____missedNoteEffectSpawnerPrefab;

  /// @brief Field _effectPoolsManualInstaller, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> ____effectPoolsManualInstaller;

  /// @brief Field _arcAndObstacleHapticManagerEffectPrefab, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> ____arcAndObstacleHapticManagerEffectPrefab;

  /// @brief Field _songProfilingControllerPrefab, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongProfilingController> ____songProfilingControllerPrefab;

  /// @brief Field _sceneSetupData, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreInstaller, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____beatLineManagerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____songTimeTweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____audioManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____playerHeightDetectorPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____noteCutScoreSpawnerPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____badNoteCutEffectSpawnerPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____missedNoteEffectSpawnerPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____effectPoolsManualInstaller) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____arcAndObstacleHapticManagerEffectPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____songProfilingControllerPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____sceneSetupData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____perceivedLoudnessPerLevelModel) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreInstaller*, "", "GameplayCoreInstaller");
