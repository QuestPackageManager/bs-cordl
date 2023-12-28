#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MissionGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionGameplaySceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionGameplaySceneSetupData::*)(
    ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>, bool, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty,
    ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::GameplayModifiers*, ::StringW)>(&::GlobalNamespace::MissionGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x231cce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplaySceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& GlobalNamespace::MissionGameplaySceneSetupData::__get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& GlobalNamespace::MissionGameplaySceneSetupData::__get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionObjectives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MissionGameplaySceneSetupData::__get_autoRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr bool const& GlobalNamespace::MissionGameplaySceneSetupData::__get_autoRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_autoRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoRestart = value;
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::MissionGameplaySceneSetupData::__get_previewBeatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewBeatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::MissionGameplaySceneSetupData::__get_previewBeatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewBeatmapLevel;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewBeatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MissionGameplaySceneSetupData::__get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& GlobalNamespace::MissionGameplaySceneSetupData::__get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MissionGameplaySceneSetupData::__get_backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr ::StringW const& GlobalNamespace::MissionGameplaySceneSetupData::__get_backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MissionGameplaySceneSetupData*
GlobalNamespace::MissionGameplaySceneSetupData::New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives, bool autoRestart,
                                                         ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                         ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                         ::StringW backButtonText) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionGameplaySceneSetupData*>(missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic,
                                                                                             gameplayModifiers, backButtonText));
}
inline void GlobalNamespace::MissionGameplaySceneSetupData::_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives, bool autoRestart,
                                                                  ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                  ::StringW backButtonText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplaySceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers,
                                                          backButtonText);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionGameplaySceneSetupData::MissionGameplaySceneSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
