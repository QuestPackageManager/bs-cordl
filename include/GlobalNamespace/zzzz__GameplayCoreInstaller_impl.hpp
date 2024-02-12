#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreInstaller_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__BadNoteCutEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatLineManager_def.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissedNoteEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__SongAutopilot_def.hpp"
#include "GlobalNamespace/zzzz__SongProfilingController_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayCoreInstaller::*)()>(&::GlobalNamespace::GameplayCoreInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x1524;
  constexpr static std::size_t addrs = 0x23cbc14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreInstaller.InstallRecordingTool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayCoreInstaller::*)()>(
    &::GlobalNamespace::GameplayCoreInstaller::InstallRecordingTool)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23cd138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                                                                               "InstallRecordingTool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayCoreInstaller::*)()>(&::GlobalNamespace::GameplayCoreInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cd25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatLineManager>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__beatLineManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLineManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BeatLineManager> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__beatLineManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLineManagerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__beatLineManagerPrefab(::UnityW<::GlobalNamespace::BeatLineManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatLineManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__songTimeTweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__songTimeTweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songTimeTweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__playerHeightDetectorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__playerHeightDetectorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__playerHeightDetectorPrefab(::UnityW<::GlobalNamespace::PlayerHeightDetector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightDetectorPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NoteCutScoreSpawner>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__noteCutScoreSpawnerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutScoreSpawnerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutScoreSpawner> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__noteCutScoreSpawnerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutScoreSpawnerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__noteCutScoreSpawnerPrefab(::UnityW<::GlobalNamespace::NoteCutScoreSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCutScoreSpawnerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__badNoteCutEffectSpawnerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badNoteCutEffectSpawnerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__badNoteCutEffectSpawnerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badNoteCutEffectSpawnerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__badNoteCutEffectSpawnerPrefab(::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____badNoteCutEffectSpawnerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__missedNoteEffectSpawnerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedNoteEffectSpawnerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__missedNoteEffectSpawnerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedNoteEffectSpawnerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__missedNoteEffectSpawnerPrefab(::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missedNoteEffectSpawnerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__effectPoolsManualInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__effectPoolsManualInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__effectPoolsManualInstaller(::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectPoolsManualInstaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongAutopilot>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get_songAutopilotPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songAutopilotPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SongAutopilot> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get_songAutopilotPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songAutopilotPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set_songAutopilotPrefab(::UnityW<::GlobalNamespace::SongAutopilot> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songAutopilotPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongProfilingController>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__songProfilingControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songProfilingControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SongProfilingController> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__songProfilingControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songProfilingControllerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__songProfilingControllerPrefab(::UnityW<::GlobalNamespace::SongProfilingController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songProfilingControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__perceivedLoudnessPerLevelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const&
GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__perceivedLoudnessPerLevelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perceivedLoudnessPerLevelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__relativeSfxVolumePerLevelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevelModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelModel*> const&
GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__relativeSfxVolumePerLevelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevelModel;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__relativeSfxVolumePerLevelModel(::GlobalNamespace::RelativeSfxVolumePerLevelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeSfxVolumePerLevelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameplayCoreInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayCoreInstaller::InstallRecordingTool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                                                                             "InstallRecordingTool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayCoreInstaller* GlobalNamespace::GameplayCoreInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameplayCoreInstaller*>());
}
inline void GlobalNamespace::GameplayCoreInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayCoreInstaller::GameplayCoreInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
