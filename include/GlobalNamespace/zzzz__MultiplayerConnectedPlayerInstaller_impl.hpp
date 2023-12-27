#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerInstaller::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc84;
  constexpr static std::size_t addrs = 0x23d5814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerInstaller::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d64d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayerAudioTimeSyncControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayerAudioTimeSyncControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayerAudioTimeSyncControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayerAudioTimeSyncControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__connectedPlayerAudioTimeSyncControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayerAudioTimeSyncControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayerBeatmapObjectEventManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayerBeatmapObjectEventManagerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayerBeatmapObjectEventManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayerBeatmapObjectEventManagerPrefab;
}
constexpr void
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__connectedPlayerBeatmapObjectEventManagerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayerBeatmapObjectEventManagerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerGameNoteControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerGameNoteControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderHeadGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerBurstSliderHeadGameNoteControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderHeadGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerBurstSliderHeadGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerBurstSliderHeadGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerBurstSliderHeadGameNoteControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerBurstSliderGameNoteControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerBurstSliderGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerBurstSliderGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerBurstSliderGameNoteControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderFillControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerBurstSliderFillControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderFillControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerBurstSliderFillControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerBurstSliderFillControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerBurstSliderFillControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBombNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerBombNoteControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBombNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerBombNoteControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerBombNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerBombNoteControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerObstacleControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerObstacleControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerObstacleControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerObstacleControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerObstacleControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerObstacleControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__localPlayerStartState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____localPlayerStartState;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__localPlayerStartState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____localPlayerStartState;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__localPlayerStartState(::GlobalNamespace::MultiplayerPlayerStartState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____localPlayerStartState = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__playersSpecificSettingsAtGameStartModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playersSpecificSettingsAtGameStartModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> const&
GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__playersSpecificSettingsAtGameStartModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playersSpecificSettingsAtGameStartModel;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playersSpecificSettingsAtGameStartModel)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerInstaller* GlobalNamespace::MultiplayerConnectedPlayerInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::MultiplayerConnectedPlayerInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
