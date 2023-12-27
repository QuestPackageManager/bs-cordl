#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerInstaller)
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerInstaller);
// Type: ::MultiplayerConnectedPlayerInstaller
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138)), TypeDefinitionIndex(TypeDefinitionIndex(5239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5124))
// CS Name: ::MultiplayerConnectedPlayerInstaller*
class CORDL_TYPE MultiplayerConnectedPlayerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _connectedPlayerAudioTimeSyncControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__connectedPlayerAudioTimeSyncControllerPrefab,
                      put = __set__connectedPlayerAudioTimeSyncControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* _connectedPlayerAudioTimeSyncControllerPrefab;

  /// @brief Field _connectedPlayerBeatmapObjectEventManagerPrefab, offset 0x28, size 0x8
  __declspec(
      property(get = __get__connectedPlayerBeatmapObjectEventManagerPrefab,
               put = __set__connectedPlayerBeatmapObjectEventManagerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* _connectedPlayerBeatmapObjectEventManagerPrefab;

  /// @brief Field _multiplayerGameNoteControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__multiplayerGameNoteControllerPrefab,
                      put = __set__multiplayerGameNoteControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* _multiplayerGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderHeadGameNoteControllerPrefab, offset 0x38, size 0x8
  __declspec(
      property(get = __get__multiplayerBurstSliderHeadGameNoteControllerPrefab,
               put = __set__multiplayerBurstSliderHeadGameNoteControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* _multiplayerBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderGameNoteControllerPrefab, offset 0x40, size 0x8
  __declspec(property(get = __get__multiplayerBurstSliderGameNoteControllerPrefab,
                      put = __set__multiplayerBurstSliderGameNoteControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* _multiplayerBurstSliderGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderFillControllerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__multiplayerBurstSliderFillControllerPrefab,
                      put = __set__multiplayerBurstSliderFillControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* _multiplayerBurstSliderFillControllerPrefab;

  /// @brief Field _multiplayerBombNoteControllerPrefab, offset 0x50, size 0x8
  __declspec(property(get = __get__multiplayerBombNoteControllerPrefab,
                      put = __set__multiplayerBombNoteControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* _multiplayerBombNoteControllerPrefab;

  /// @brief Field _multiplayerObstacleControllerPrefab, offset 0x58, size 0x8
  __declspec(property(get = __get__multiplayerObstacleControllerPrefab,
                      put = __set__multiplayerObstacleControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* _multiplayerObstacleControllerPrefab;

  /// @brief Field _connectedPlayer, offset 0x60, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _localPlayerStartState, offset 0x68, size 0x4
  __declspec(property(get = __get__localPlayerStartState, put = __set__localPlayerStartState))::GlobalNamespace::MultiplayerPlayerStartState _localPlayerStartState;

  /// @brief Field _sceneSetupData, offset 0x70, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _playersSpecificSettingsAtGameStartModel, offset 0x78, size 0x8
  __declspec(property(get = __get__playersSpecificSettingsAtGameStartModel,
                      put = __set__playersSpecificSettingsAtGameStartModel))::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersSpecificSettingsAtGameStartModel;

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*& __get__connectedPlayerAudioTimeSyncControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*> const& __get__connectedPlayerAudioTimeSyncControllerPrefab() const;

  constexpr void __set__connectedPlayerAudioTimeSyncControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*& __get__connectedPlayerBeatmapObjectEventManagerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*> const& __get__connectedPlayerBeatmapObjectEventManagerPrefab() const;

  constexpr void __set__connectedPlayerBeatmapObjectEventManagerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& __get__multiplayerGameNoteControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const& __get__multiplayerGameNoteControllerPrefab() const;

  constexpr void __set__multiplayerGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& __get__multiplayerBurstSliderHeadGameNoteControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const& __get__multiplayerBurstSliderHeadGameNoteControllerPrefab() const;

  constexpr void __set__multiplayerBurstSliderHeadGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& __get__multiplayerBurstSliderGameNoteControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const& __get__multiplayerBurstSliderGameNoteControllerPrefab() const;

  constexpr void __set__multiplayerBurstSliderGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& __get__multiplayerBurstSliderFillControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const& __get__multiplayerBurstSliderFillControllerPrefab() const;

  constexpr void __set__multiplayerBurstSliderFillControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*& __get__multiplayerBombNoteControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*> const& __get__multiplayerBombNoteControllerPrefab() const;

  constexpr void __set__multiplayerBombNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*& __get__multiplayerObstacleControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*> const& __get__multiplayerObstacleControllerPrefab() const;

  constexpr void __set__multiplayerObstacleControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __get__localPlayerStartState();

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __get__localPlayerStartState() const;

  constexpr void __set__localPlayerStartState(::GlobalNamespace::MultiplayerPlayerStartState value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __get__playersSpecificSettingsAtGameStartModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> const& __get__playersSpecificSettingsAtGameStartModel() const;

  constexpr void __set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  /// @brief Method InstallBindings addr 0x23d5814 size 0xc84 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerInstaller* New_ctor();

  /// @brief Method .ctor addr 0x23d64d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerInstaller(MultiplayerConnectedPlayerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerInstaller(MultiplayerConnectedPlayerInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerInstaller();

public:
  /// @brief Field _connectedPlayerAudioTimeSyncControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* ____connectedPlayerAudioTimeSyncControllerPrefab;

  /// @brief Field _connectedPlayerBeatmapObjectEventManagerPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* ____connectedPlayerBeatmapObjectEventManagerPrefab;

  /// @brief Field _multiplayerGameNoteControllerPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* ____multiplayerGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderHeadGameNoteControllerPrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* ____multiplayerBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderGameNoteControllerPrefab, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* ____multiplayerBurstSliderGameNoteControllerPrefab;

  /// @brief Field _multiplayerBurstSliderFillControllerPrefab, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* ____multiplayerBurstSliderFillControllerPrefab;

  /// @brief Field _multiplayerBombNoteControllerPrefab, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* ____multiplayerBombNoteControllerPrefab;

  /// @brief Field _multiplayerObstacleControllerPrefab, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* ____multiplayerObstacleControllerPrefab;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerInstaller, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerInstaller*, "", "MultiplayerConnectedPlayerInstaller");
