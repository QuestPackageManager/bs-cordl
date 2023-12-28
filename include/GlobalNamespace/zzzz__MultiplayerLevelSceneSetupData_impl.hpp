#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelSceneSetupData::*)(
    ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, bool)>(&::GlobalNamespace::MultiplayerLevelSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x231cd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelSceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::MultiplayerLevelSceneSetupData::__get_previewBeatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewBeatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::MultiplayerLevelSceneSetupData::__get_previewBeatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewBeatmapLevel;
}
constexpr void GlobalNamespace::MultiplayerLevelSceneSetupData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewBeatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MultiplayerLevelSceneSetupData::__get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MultiplayerLevelSceneSetupData::__get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::MultiplayerLevelSceneSetupData::__set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::MultiplayerLevelSceneSetupData::__get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::MultiplayerLevelSceneSetupData::__get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::MultiplayerLevelSceneSetupData::__set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerLevelSceneSetupData::__get_hasSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr bool const& GlobalNamespace::MultiplayerLevelSceneSetupData::__get_hasSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr void GlobalNamespace::MultiplayerLevelSceneSetupData::__set_hasSong(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSong = value;
}
inline ::GlobalNamespace::MultiplayerLevelSceneSetupData* GlobalNamespace::MultiplayerLevelSceneSetupData::New_ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                                    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                                                                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool hasSong) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLevelSceneSetupData*>(previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, hasSong));
}
inline void GlobalNamespace::MultiplayerLevelSceneSetupData::_ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                   ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool hasSong) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelSceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, hasSong);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData::MultiplayerLevelSceneSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
