#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerInstaller)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerInstaller);
// Dependencies MultiplayerPlayerStartState, Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerInstaller
class CORDL_TYPE MultiplayerConnectedPlayerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _connectedPlayerAudioTimeSyncControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerAudioTimeSyncControllerPrefab,
                      put = __cordl_internal_set__connectedPlayerAudioTimeSyncControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>
      _connectedPlayerAudioTimeSyncControllerPrefab;

  /// @brief Field _connectedPlayerBeatmapObjectEventManagerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerBeatmapObjectEventManagerPrefab,
                      put = __cordl_internal_set__connectedPlayerBeatmapObjectEventManagerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager>
      _connectedPlayerBeatmapObjectEventManagerPrefab;

  /// @brief Field _localPlayerStartState, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__localPlayerStartState, put = __cordl_internal_set__localPlayerStartState)) ::GlobalNamespace::MultiplayerPlayerStartState _localPlayerStartState;

  /// @brief Field _multiplayerBombNoteControllerPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerBombNoteControllerPrefab,
                      put = __cordl_internal_set__multiplayerBombNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>
      _multiplayerBombNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderGameNoteControllerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerBurstSliderGameNoteControllerPrefab,
                      put = __cordl_internal_set__multiplayerBurstSliderGameNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>
      _multiplayerBurstSliderGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderHeadGameNoteControllerPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerBurstSliderHeadGameNoteControllerPrefab,
                      put = __cordl_internal_set__multiplayerBurstSliderHeadGameNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>
      _multiplayerBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _multiplayerGameNoteControllerPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerGameNoteControllerPrefab,
                      put = __cordl_internal_set__multiplayerGameNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>
      _multiplayerGameNoteControllerPrefab;

  /// @brief Field _multiplayerObstacleControllerPrefab, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerObstacleControllerPrefab,
                      put = __cordl_internal_set__multiplayerObstacleControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>
      _multiplayerObstacleControllerPrefab;

  /// @brief Field _playersSpecificSettingsAtGameStartModel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__playersSpecificSettingsAtGameStartModel,
                      put = __cordl_internal_set__playersSpecificSettingsAtGameStartModel)) ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersSpecificSettingsAtGameStartModel;

  /// @brief Field _sceneSetupData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Method InstallBindings, addr 0x3bb976c, size 0xa48, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerInstaller* New_ctor();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> const& __cordl_internal_get__connectedPlayerAudioTimeSyncControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>& __cordl_internal_get__connectedPlayerAudioTimeSyncControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager> const& __cordl_internal_get__connectedPlayerBeatmapObjectEventManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager>& __cordl_internal_get__connectedPlayerBeatmapObjectEventManagerPrefab();

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __cordl_internal_get__localPlayerStartState() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __cordl_internal_get__localPlayerStartState();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> const& __cordl_internal_get__multiplayerBombNoteControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>& __cordl_internal_get__multiplayerBombNoteControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const& __cordl_internal_get__multiplayerBurstSliderGameNoteControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>& __cordl_internal_get__multiplayerBurstSliderGameNoteControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const& __cordl_internal_get__multiplayerBurstSliderHeadGameNoteControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>& __cordl_internal_get__multiplayerBurstSliderHeadGameNoteControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const& __cordl_internal_get__multiplayerGameNoteControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>& __cordl_internal_get__multiplayerGameNoteControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController> const& __cordl_internal_get__multiplayerObstacleControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>& __cordl_internal_get__multiplayerObstacleControllerPrefab();

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& __cordl_internal_get__playersSpecificSettingsAtGameStartModel() const;

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __cordl_internal_get__playersSpecificSettingsAtGameStartModel();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__connectedPlayerAudioTimeSyncControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> value);

  constexpr void __cordl_internal_set__connectedPlayerBeatmapObjectEventManagerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager> value);

  constexpr void __cordl_internal_set__localPlayerStartState(::GlobalNamespace::MultiplayerPlayerStartState value);

  constexpr void __cordl_internal_set__multiplayerBombNoteControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> value);

  constexpr void __cordl_internal_set__multiplayerBurstSliderGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value);

  constexpr void __cordl_internal_set__multiplayerBurstSliderHeadGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value);

  constexpr void __cordl_internal_set__multiplayerGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value);

  constexpr void __cordl_internal_set__multiplayerObstacleControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController> value);

  constexpr void __cordl_internal_set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3bba1f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerInstaller(MultiplayerConnectedPlayerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerInstaller(MultiplayerConnectedPlayerInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4487 };

  /// @brief Field _connectedPlayerAudioTimeSyncControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> ____connectedPlayerAudioTimeSyncControllerPrefab;

  /// @brief Field _connectedPlayerBeatmapObjectEventManagerPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager> ____connectedPlayerBeatmapObjectEventManagerPrefab;

  /// @brief Field _multiplayerGameNoteControllerPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> ____multiplayerGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderHeadGameNoteControllerPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> ____multiplayerBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderGameNoteControllerPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> ____multiplayerBurstSliderGameNoteControllerPrefab;

  /// @brief Field _multiplayerBombNoteControllerPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> ____multiplayerBombNoteControllerPrefab;

  /// @brief Field _multiplayerObstacleControllerPrefab, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController> ____multiplayerObstacleControllerPrefab;

  /// @brief Field _connectedPlayer, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _localPlayerStartState, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerStartState ____localPlayerStartState;

  /// @brief Field _sceneSetupData, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _playersSpecificSettingsAtGameStartModel, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playersSpecificSettingsAtGameStartModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____connectedPlayerAudioTimeSyncControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____connectedPlayerBeatmapObjectEventManagerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____multiplayerGameNoteControllerPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____multiplayerBurstSliderHeadGameNoteControllerPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____multiplayerBurstSliderGameNoteControllerPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____multiplayerBombNoteControllerPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____multiplayerObstacleControllerPrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____connectedPlayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____localPlayerStartState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____sceneSetupData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller, ____playersSpecificSettingsAtGameStartModel) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerInstaller, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerInstaller*, "", "MultiplayerConnectedPlayerInstaller");
