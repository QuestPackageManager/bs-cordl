#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/PlayerSettingsTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__PlayerSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::PlayerSettingsTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::PlayerSettingsTracker::*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::PlayerSettingsTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3506388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::PlayerSettingsTracker.TakeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::PlayerSettingsTracker::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::BeatSaber::Analytics::Settings::PlayerSettingsTracker::TakeSnapshot)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3508f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(),
                                                                                           { "TakeSnapshot", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::PlayerSettingsTracker.DiffAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::PlayerSettingsTracker::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::BeatSaber::Analytics::Settings::PlayerSettingsTracker::DiffAndSend)> {
  constexpr static std::size_t size = 0x198c;
  constexpr static std::size_t addrs = 0x3509148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(),
                                                                                           { "DiffAndSend", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sender = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__hasSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__hasSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__hasSnapshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSnapshot = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__adaptiveSfx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adaptiveSfx;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__adaptiveSfx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adaptiveSfx;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__adaptiveSfx(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____adaptiveSfx = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__advancedHud() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHud;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__advancedHud() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHud;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__advancedHud(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____advancedHud = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__arcVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcVisibility;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__arcVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcVisibility;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__arcVisibility(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcVisibility = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__arcsHapticFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcsHapticFeedback;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__arcsHapticFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcsHapticFeedback;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__arcsHapticFeedback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcsHapticFeedback = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__autoRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoRestart;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__autoRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoRestart;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__autoRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoRestart = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__environmentEffectsFilterDefaultPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentEffectsFilterDefaultPreset;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__environmentEffectsFilterDefaultPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentEffectsFilterDefaultPreset;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__environmentEffectsFilterDefaultPreset(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentEffectsFilterDefaultPreset = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__environmentEffectsFilterExpertPlusPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentEffectsFilterExpertPlusPreset;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__environmentEffectsFilterExpertPlusPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentEffectsFilterExpertPlusPreset;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__environmentEffectsFilterExpertPlusPreset(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentEffectsFilterExpertPlusPreset = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__headsetHapticIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headsetHapticIntensity;
}
constexpr float_t const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__headsetHapticIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headsetHapticIntensity;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__headsetHapticIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headsetHapticIntensity = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__hideNoteSpawnEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideNoteSpawnEffect;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__hideNoteSpawnEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideNoteSpawnEffect;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__hideNoteSpawnEffect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideNoteSpawnEffect = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__leftHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHanded;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__leftHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHanded;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__leftHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHanded = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noFailEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noFailEffects;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noFailEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noFailEffects;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__noFailEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noFailEffects = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noTextsAndHuds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noTextsAndHuds;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noTextsAndHuds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noTextsAndHuds;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__noTextsAndHuds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noTextsAndHuds = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noteJumpDurationTypeSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpDurationTypeSettings;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noteJumpDurationTypeSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpDurationTypeSettings;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__noteJumpDurationTypeSettings(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpDurationTypeSettings = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noteJumpFixedDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpFixedDuration;
}
constexpr float_t const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noteJumpFixedDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpFixedDuration;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__noteJumpFixedDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpFixedDuration = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr float_t const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__noteJumpStartBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffset = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__playerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeight;
}
constexpr float_t const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__playerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeight;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__playerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeight = value;
}
constexpr bool& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__reduceDebris() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reduceDebris;
}
constexpr bool const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__reduceDebris() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reduceDebris;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__reduceDebris(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reduceDebris = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__saberTrailIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTrailIntensity;
}
constexpr float_t const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__saberTrailIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTrailIntensity;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__saberTrailIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberTrailIntensity = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__sfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolume;
}
constexpr float_t const& BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_get__sfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolume;
}
constexpr void BeatSaber::Analytics::Settings::PlayerSettingsTracker::__cordl_internal_set__sfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sfxVolume = value;
}
inline void BeatSaber::Analytics::Settings::PlayerSettingsTracker::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void BeatSaber::Analytics::Settings::PlayerSettingsTracker::TakeSnapshot(::GlobalNamespace::PlayerSpecificSettings* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(),
                                                                                         { "TakeSnapshot", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void BeatSaber::Analytics::Settings::PlayerSettingsTracker::DiffAndSend(::GlobalNamespace::PlayerSpecificSettings* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(),
                                                                                         { "DiffAndSend", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::BeatSaber::Analytics::Settings::PlayerSettingsTracker*
BeatSaber::Analytics::Settings::PlayerSettingsTracker::New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(sender));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::PlayerSettingsTracker::PlayerSettingsTracker() {}
