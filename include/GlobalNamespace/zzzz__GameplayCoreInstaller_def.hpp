#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(GameplayCoreInstaller)
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
}
namespace GlobalNamespace {
class BeatLineManager;
}
namespace GlobalNamespace {
class NoteCutScoreSpawner;
}
namespace GlobalNamespace {
class BadNoteCutEffectSpawner;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace GlobalNamespace {
class MissedNoteEffectSpawner;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayCoreInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayCoreInstaller);
// Type: ::GameplayCoreInstaller
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5484))
// CS Name: ::GameplayCoreInstaller*
class CORDL_TYPE GameplayCoreInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _beatLineManagerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__beatLineManagerPrefab, put = __set__beatLineManagerPrefab))::GlobalNamespace::BeatLineManager* _beatLineManagerPrefab;

  /// @brief Field _songTimeTweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __get__songTimeTweeningManager, put = __set__songTimeTweeningManager))::Tweening::SongTimeTweeningManager* _songTimeTweeningManager;

  /// @brief Field _audioManager, offset 0x30, size 0x8
  __declspec(property(get = __get__audioManager, put = __set__audioManager))::GlobalNamespace::AudioManagerSO* _audioManager;

  /// @brief Field _playerHeightDetectorPrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__playerHeightDetectorPrefab, put = __set__playerHeightDetectorPrefab))::GlobalNamespace::PlayerHeightDetector* _playerHeightDetectorPrefab;

  /// @brief Field _noteCutScoreSpawnerPrefab, offset 0x40, size 0x8
  __declspec(property(get = __get__noteCutScoreSpawnerPrefab, put = __set__noteCutScoreSpawnerPrefab))::GlobalNamespace::NoteCutScoreSpawner* _noteCutScoreSpawnerPrefab;

  /// @brief Field _badNoteCutEffectSpawnerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__badNoteCutEffectSpawnerPrefab, put = __set__badNoteCutEffectSpawnerPrefab))::GlobalNamespace::BadNoteCutEffectSpawner* _badNoteCutEffectSpawnerPrefab;

  /// @brief Field _missedNoteEffectSpawnerPrefab, offset 0x50, size 0x8
  __declspec(property(get = __get__missedNoteEffectSpawnerPrefab, put = __set__missedNoteEffectSpawnerPrefab))::GlobalNamespace::MissedNoteEffectSpawner* _missedNoteEffectSpawnerPrefab;

  /// @brief Field _effectPoolsManualInstaller, offset 0x58, size 0x8
  __declspec(property(get = __get__effectPoolsManualInstaller, put = __set__effectPoolsManualInstaller))::GlobalNamespace::EffectPoolsManualInstaller* _effectPoolsManualInstaller;

  /// @brief Field _sceneSetupData, offset 0x60, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0x68, size 0x8
  __declspec(property(get = __get__perceivedLoudnessPerLevelModel, put = __set__perceivedLoudnessPerLevelModel))::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field _relativeSfxVolumePerLevelModel, offset 0x70, size 0x8
  __declspec(property(get = __get__relativeSfxVolumePerLevelModel, put = __set__relativeSfxVolumePerLevelModel))::GlobalNamespace::RelativeSfxVolumePerLevelModel* _relativeSfxVolumePerLevelModel;

  constexpr ::GlobalNamespace::BeatLineManager*& __get__beatLineManagerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatLineManager*> const& __get__beatLineManagerPrefab() const;

  constexpr void __set__beatLineManagerPrefab(::GlobalNamespace::BeatLineManager* value);

  constexpr ::Tweening::SongTimeTweeningManager*& __get__songTimeTweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& __get__songTimeTweeningManager() const;

  constexpr void __set__songTimeTweeningManager(::Tweening::SongTimeTweeningManager* value);

  constexpr ::GlobalNamespace::AudioManagerSO*& __get__audioManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& __get__audioManager() const;

  constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO* value);

  constexpr ::GlobalNamespace::PlayerHeightDetector*& __get__playerHeightDetectorPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightDetector*> const& __get__playerHeightDetectorPrefab() const;

  constexpr void __set__playerHeightDetectorPrefab(::GlobalNamespace::PlayerHeightDetector* value);

  constexpr ::GlobalNamespace::NoteCutScoreSpawner*& __get__noteCutScoreSpawnerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutScoreSpawner*> const& __get__noteCutScoreSpawnerPrefab() const;

  constexpr void __set__noteCutScoreSpawnerPrefab(::GlobalNamespace::NoteCutScoreSpawner* value);

  constexpr ::GlobalNamespace::BadNoteCutEffectSpawner*& __get__badNoteCutEffectSpawnerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BadNoteCutEffectSpawner*> const& __get__badNoteCutEffectSpawnerPrefab() const;

  constexpr void __set__badNoteCutEffectSpawnerPrefab(::GlobalNamespace::BadNoteCutEffectSpawner* value);

  constexpr ::GlobalNamespace::MissedNoteEffectSpawner*& __get__missedNoteEffectSpawnerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissedNoteEffectSpawner*> const& __get__missedNoteEffectSpawnerPrefab() const;

  constexpr void __set__missedNoteEffectSpawnerPrefab(::GlobalNamespace::MissedNoteEffectSpawner* value);

  constexpr ::GlobalNamespace::EffectPoolsManualInstaller*& __get__effectPoolsManualInstaller();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EffectPoolsManualInstaller*> const& __get__effectPoolsManualInstaller() const;

  constexpr void __set__effectPoolsManualInstaller(::GlobalNamespace::EffectPoolsManualInstaller* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __get__perceivedLoudnessPerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& __get__perceivedLoudnessPerLevelModel() const;

  constexpr void __set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel*& __get__relativeSfxVolumePerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelModel*> const& __get__relativeSfxVolumePerLevelModel() const;

  constexpr void __set__relativeSfxVolumePerLevelModel(::GlobalNamespace::RelativeSfxVolumePerLevelModel* value);

  /// @brief Method InstallBindings addr 0x212a93c size 0x1b28 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::GameplayCoreInstaller* New_ctor();

  /// @brief Method .ctor addr 0x212c464 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameplayCoreInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayCoreInstaller(GameplayCoreInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayCoreInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayCoreInstaller(GameplayCoreInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayCoreInstaller();

public:
  /// @brief Field _beatLineManagerPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatLineManager* ____beatLineManagerPrefab;

  /// @brief Field _songTimeTweeningManager, offset: 0x28, size: 0x8, def value: None
  ::Tweening::SongTimeTweeningManager* ____songTimeTweeningManager;

  /// @brief Field _audioManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AudioManagerSO* ____audioManager;

  /// @brief Field _playerHeightDetectorPrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerHeightDetector* ____playerHeightDetectorPrefab;

  /// @brief Field _noteCutScoreSpawnerPrefab, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::NoteCutScoreSpawner* ____noteCutScoreSpawnerPrefab;

  /// @brief Field _badNoteCutEffectSpawnerPrefab, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BadNoteCutEffectSpawner* ____badNoteCutEffectSpawnerPrefab;

  /// @brief Field _missedNoteEffectSpawnerPrefab, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MissedNoteEffectSpawner* ____missedNoteEffectSpawnerPrefab;

  /// @brief Field _effectPoolsManualInstaller, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::EffectPoolsManualInstaller* ____effectPoolsManualInstaller;

  /// @brief Field _sceneSetupData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  /// @brief Field _relativeSfxVolumePerLevelModel, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::RelativeSfxVolumePerLevelModel* ____relativeSfxVolumePerLevelModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreInstaller, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____beatLineManagerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____songTimeTweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____audioManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____playerHeightDetectorPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____noteCutScoreSpawnerPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____badNoteCutEffectSpawnerPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____missedNoteEffectSpawnerPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____effectPoolsManualInstaller) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____sceneSetupData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____perceivedLoudnessPerLevelModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreInstaller, ____relativeSfxVolumePerLevelModel) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreInstaller*, "", "GameplayCoreInstaller");
