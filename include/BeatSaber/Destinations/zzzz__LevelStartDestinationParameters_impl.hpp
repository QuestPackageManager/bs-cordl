#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\LevelStartDestinationParameters.hpp"
#include "BeatSaber/Destinations/zzzz__GameMode_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__LevelStartDestinationParameters_def.hpp"
#include "BeatSaber/Destinations/zzzz__GameMode_def.hpp"
#include "BeatSaber/Destinations/zzzz__GameplayEnvironmentOverride_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::LevelStartDestinationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::LevelStartDestinationParameters::*)()>(&::BeatSaber::Destinations::LevelStartDestinationParameters::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3281210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::LevelStartDestinationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::LevelStartDestinationParameters::*)(
    ::BeatSaber::Destinations::GameMode, ::GlobalNamespace::BeatmapKey, ::BeatSaber::Destinations::GameplayEnvironmentOverride*, ::GlobalNamespace::GameplayModifiers*,
    ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*)>(&::BeatSaber::Destinations::LevelStartDestinationParameters::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32812d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BeatSaber::Destinations::GameMode>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                                 ::i2c::type_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::GameMode& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_gameMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr ::BeatSaber::Destinations::GameMode const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_gameMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_gameMode(::BeatSaber::Destinations::GameMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameMode = value;
}
constexpr ::GlobalNamespace::BeatmapKey& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_environmentOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentOverride;
}
constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_environmentOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentOverride;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_environmentOverride(::BeatSaber::Destinations::GameplayEnvironmentOverride* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentOverride = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_customPlayerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPlayerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_customPlayerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPlayerSpecificSettings;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_customPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___customPlayerSpecificSettings = value;
}
constexpr ::GlobalNamespace::PracticeSettings*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_practiceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr ::GlobalNamespace::PracticeSettings* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_practiceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practiceSettings = value;
}
inline void BeatSaber::Destinations::LevelStartDestinationParameters::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Destinations::LevelStartDestinationParameters::_ctor(::BeatSaber::Destinations::GameMode gameMode, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                            ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride,
                                                                            ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                            ::GlobalNamespace::PlayerSpecificSettings* customPlayerSpecificSettings,
                                                                            ::GlobalNamespace::PracticeSettings* practiceSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BeatSaber::Destinations::GameMode>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                               ::i2c::type_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, beatmapKey, environmentOverride, gameplayModifiers, customPlayerSpecificSettings, practiceSettings);
}
inline ::BeatSaber::Destinations::LevelStartDestinationParameters* BeatSaber::Destinations::LevelStartDestinationParameters::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::LevelStartDestinationParameters*>());
}
inline ::BeatSaber::Destinations::LevelStartDestinationParameters*
BeatSaber::Destinations::LevelStartDestinationParameters::New_ctor(::BeatSaber::Destinations::GameMode gameMode, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                   ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                   ::GlobalNamespace::PlayerSpecificSettings* customPlayerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::LevelStartDestinationParameters*>(gameMode, beatmapKey, environmentOverride, gameplayModifiers,
                                                                                                                       customPlayerSpecificSettings, practiceSettings));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters::LevelStartDestinationParameters() {}
