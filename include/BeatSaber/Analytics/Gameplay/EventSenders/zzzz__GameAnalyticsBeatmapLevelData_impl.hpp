#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventSenders\GameAnalyticsBeatmapLevelData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapPracticeSettings_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsGameplayModifiers_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*,
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*, ::StringW, bool)>(&::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3264910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*>(),
                                ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_gameMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_gameMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_gameMode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameMode = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelID = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristic = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_missionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionID;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_missionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionID;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_missionID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionID = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_practiceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* const&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_practiceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_practiceSettings(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practiceSettings = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* const&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_gameplayModifiers(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentName;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentName;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_environmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentName = value;
}
constexpr bool& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_isEnvironmentOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnvironmentOverride;
}
constexpr bool const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_isEnvironmentOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnvironmentOverride;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_isEnvironmentOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEnvironmentOverride = value;
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::_ctor(::StringW gameMode, ::StringW levelID, ::StringW difficulty, ::StringW characteristic,
                                                                                               ::StringW missionID,
                                                                                               ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* practiceSettings,
                                                                                               ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* gameplayModifiers,
                                                                                               ::StringW environmentName, bool isEnvironmentOverride) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*>(),
                              ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, levelID, difficulty, characteristic, missionID, practiceSettings, gameplayModifiers, environmentName,
                                                   isEnvironmentOverride);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::New_ctor(::StringW gameMode, ::StringW levelID, ::StringW difficulty, ::StringW characteristic, ::StringW missionID,
                                                                                      ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* practiceSettings,
                                                                                      ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* gameplayModifiers,
                                                                                      ::StringW environmentName, bool isEnvironmentOverride) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(
                                              gameMode, levelID, difficulty, characteristic, missionID, practiceSettings, gameplayModifiers, environmentName, isEnvironmentOverride));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::GameAnalyticsBeatmapLevelData() {}
