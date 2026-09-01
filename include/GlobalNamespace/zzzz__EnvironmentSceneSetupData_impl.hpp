#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSceneSetupData::*)(::StringW, ::GlobalNamespace::BeatmapLevel*, bool)>(
    &::GlobalNamespace::EnvironmentSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x590ce00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetupData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_hideBranding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr bool const& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_hideBranding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_set_hideBranding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideBranding = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_environmentSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentSerializedName;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_environmentSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentSerializedName;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_set_environmentSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentSerializedName = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
inline void GlobalNamespace::EnvironmentSceneSetupData::_ctor(::StringW environmentSerializedName, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hideBranding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetupData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environmentSerializedName, beatmapLevel, hideBranding);
}
inline ::GlobalNamespace::EnvironmentSceneSetupData* GlobalNamespace::EnvironmentSceneSetupData::New_ctor(::StringW environmentSerializedName, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                          bool hideBranding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentSceneSetupData*>(environmentSerializedName, beatmapLevel, hideBranding));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSceneSetupData::EnvironmentSceneSetupData() {}
