#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerInstaller.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerInstaller_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xb7c;
  constexpr static std::size_t addrs = 0x59b54bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b6044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__connectedPlayerAudioTimeSyncControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerAudioTimeSyncControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__connectedPlayerAudioTimeSyncControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerAudioTimeSyncControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__connectedPlayerAudioTimeSyncControllerPrefab(
    ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayerAudioTimeSyncControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager>&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__connectedPlayerBeatmapObjectEventManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerBeatmapObjectEventManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__connectedPlayerBeatmapObjectEventManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerBeatmapObjectEventManagerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__connectedPlayerBeatmapObjectEventManagerPrefab(
    ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayerBeatmapObjectEventManagerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerGameNoteControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerGameNoteControllerPrefab;
}
constexpr void
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__multiplayerGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerGameNoteControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerBurstSliderHeadGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerBurstSliderHeadGameNoteControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerBurstSliderHeadGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerBurstSliderHeadGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__multiplayerBurstSliderHeadGameNoteControllerPrefab(
    ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerBurstSliderHeadGameNoteControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerBurstSliderGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerBurstSliderGameNoteControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerBurstSliderGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerBurstSliderGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__multiplayerBurstSliderGameNoteControllerPrefab(
    ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerBurstSliderGameNoteControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerBombNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerBombNoteControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerBombNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerBombNoteControllerPrefab;
}
constexpr void
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__multiplayerBombNoteControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerBombNoteControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerObstacleControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerObstacleControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__multiplayerObstacleControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerObstacleControllerPrefab;
}
constexpr void
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__multiplayerObstacleControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerObstacleControllerPrefab = value;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__localPlayerStartState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerStartState;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__localPlayerStartState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerStartState;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__localPlayerStartState(::GlobalNamespace::MultiplayerPlayerStartState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerStartState = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__playersSpecificSettingsAtGameStartModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpecificSettingsAtGameStartModel;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_get__playersSpecificSettingsAtGameStartModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpecificSettingsAtGameStartModel;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__cordl_internal_set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersSpecificSettingsAtGameStartModel = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerInstaller* GlobalNamespace::MultiplayerConnectedPlayerInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::MultiplayerConnectedPlayerInstaller() {}
