#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLevelSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSceneSetupData::*)(::by_ref<::GlobalNamespace::BeatmapKey>, bool)>(
    &::GlobalNamespace::MultiplayerLevelSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x590dc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSceneSetupData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr bool& GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_get_hasSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr bool const& GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_get_hasSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr void GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_set_hasSong(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSong = value;
}
inline void GlobalNamespace::MultiplayerLevelSceneSetupData::_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSceneSetupData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey, hasSong);
}
inline ::GlobalNamespace::MultiplayerLevelSceneSetupData* GlobalNamespace::MultiplayerLevelSceneSetupData::New_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLevelSceneSetupData*>(beatmapKey, hasSong));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData::MultiplayerLevelSceneSetupData() {}
