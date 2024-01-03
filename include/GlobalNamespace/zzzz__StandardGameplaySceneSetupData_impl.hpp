#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__StandardGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardGameplaySceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardGameplaySceneSetupData::*)(
    bool, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, ::StringW, ::GlobalNamespace::GameplayModifiers*, bool)>(
    &::GlobalNamespace::StandardGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x231cdfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplaySceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::StandardGameplaySceneSetupData::__get_autoRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr bool const& GlobalNamespace::StandardGameplaySceneSetupData::__get_autoRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_autoRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoRestart = value;
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::StandardGameplaySceneSetupData::__get_previewBeatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewBeatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::StandardGameplaySceneSetupData::__get_previewBeatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewBeatmapLevel;
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewBeatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::StandardGameplaySceneSetupData::__get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::StandardGameplaySceneSetupData::__get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::StandardGameplaySceneSetupData::__get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::StandardGameplaySceneSetupData::__get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardGameplaySceneSetupData::__get_backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr ::StringW const& GlobalNamespace::StandardGameplaySceneSetupData::__get_backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::StandardGameplaySceneSetupData::__get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& GlobalNamespace::StandardGameplaySceneSetupData::__get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::StandardGameplaySceneSetupData::__get_startPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr bool const& GlobalNamespace::StandardGameplaySceneSetupData::__get_startPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_startPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPaused = value;
}
inline ::GlobalNamespace::StandardGameplaySceneSetupData* GlobalNamespace::StandardGameplaySceneSetupData::New_ctor(bool autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                                    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                                                                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                                                                    ::StringW backButtonText, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                                                                    bool startPaused) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardGameplaySceneSetupData*>(autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, backButtonText,
                                                                                              gameplayModifiers, startPaused));
}
inline void GlobalNamespace::StandardGameplaySceneSetupData::_ctor(bool autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                   ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                   ::StringW backButtonText, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool startPaused) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplaySceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, backButtonText, gameplayModifiers,
                                                          startPaused);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardGameplaySceneSetupData::StandardGameplaySceneSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
