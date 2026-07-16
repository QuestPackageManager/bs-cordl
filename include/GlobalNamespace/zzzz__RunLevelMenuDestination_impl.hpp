#pragma once
// IWYU pragma private; include "GlobalNamespace/RunLevelMenuDestination.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__RunLevelMenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RunLevelMenuDestination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunLevelMenuDestination::*)(
    ::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::GameplayModifiers*, bool,
    float_t, float_t, bool, ::StringW, ::StringW, bool)>(&::GlobalNamespace::RunLevelMenuDestination::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x37051a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunLevelMenuDestination*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelPack = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapCharacteristic = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr bool& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_practice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr bool const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_practice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_practice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practice = value;
}
constexpr float_t& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_songSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_songSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMultiplier;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_songSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeedMultiplier = value;
}
constexpr bool& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr bool const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideEnvironments = value;
}
constexpr ::StringW& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_environmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentType;
}
constexpr ::StringW const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_environmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentType;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_environmentType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentType = value;
}
constexpr ::StringW& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentName;
}
constexpr ::StringW const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentName;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_environmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentName = value;
}
constexpr bool& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_quitAppAfterRun() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quitAppAfterRun;
}
constexpr bool const& GlobalNamespace::RunLevelMenuDestination::__cordl_internal_get_quitAppAfterRun() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quitAppAfterRun;
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__cordl_internal_set_quitAppAfterRun(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quitAppAfterRun = value;
}
inline void GlobalNamespace::RunLevelMenuDestination::_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                            ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic,
                                                            ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice, float_t startSongTime, float_t songSpeedMultiplier,
                                                            bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName, bool quitAppAfterRun) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunLevelMenuDestination*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                              ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPack, beatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, practice, startSongTime,
                                                   songSpeedMultiplier, overrideEnvironments, environmentType, environmentName, quitAppAfterRun);
}
inline ::GlobalNamespace::RunLevelMenuDestination*
GlobalNamespace::RunLevelMenuDestination::New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                   ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic,
                                                   ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice, float_t startSongTime, float_t songSpeedMultiplier,
                                                   bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName, bool quitAppAfterRun) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::RunLevelMenuDestination*>(beatmapLevelPack, beatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, practice, startSongTime,
                                                                                   songSpeedMultiplier, overrideEnvironments, environmentType, environmentName, quitAppAfterRun));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunLevelMenuDestination::RunLevelMenuDestination() {}
