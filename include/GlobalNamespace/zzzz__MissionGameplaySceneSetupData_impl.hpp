#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionGameplaySceneSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MissionGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionGameplaySceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionGameplaySceneSetupData::*)(
    ::ArrayW<::GlobalNamespace::MissionObjective*>, bool, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::StringW)>(
    &::GlobalNamespace::MissionGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5972700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionGameplaySceneSetupData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(),
                                                    ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*>& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*> const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionObjectives = value;
}
constexpr bool& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_autoRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr bool const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_autoRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_autoRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoRestart = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr ::StringW& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr ::StringW const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backButtonText = value;
}
inline void GlobalNamespace::MissionGameplaySceneSetupData::_ctor(::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives, bool autoRestart,
                                                                  ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                  ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::StringW backButtonText) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionGameplaySceneSetupData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(),
                                                  ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjectives, autoRestart, beatmapKey, beatmapLevel, gameplayModifiers, backButtonText);
}
inline ::GlobalNamespace::MissionGameplaySceneSetupData* GlobalNamespace::MissionGameplaySceneSetupData::New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives, bool autoRestart,
                                                                                                                  ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                                                                  ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                  ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::StringW backButtonText) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::MissionGameplaySceneSetupData*>(missionObjectives, autoRestart, beatmapKey, beatmapLevel, gameplayModifiers, backButtonText));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionGameplaySceneSetupData::MissionGameplaySceneSetupData() {}
