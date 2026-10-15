#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/AudioSettingsTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__AudioSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "BeatSaber/Settings/zzzz__AudioSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::AudioSettingsTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::AudioSettingsTracker::*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::AudioSettingsTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3506178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::AudioSettingsTracker.TakeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::AudioSettingsTracker::*)(::BeatSaber::Settings::AudioSettings)>(
    &::BeatSaber::Analytics::Settings::AudioSettingsTracker::TakeSnapshot)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3506390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(),
                                                                                           { "TakeSnapshot", {}, { ::i2c::type_of<::BeatSaber::Settings::AudioSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::AudioSettingsTracker.DiffAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::AudioSettingsTracker::*)(::BeatSaber::Settings::AudioSettings)>(
    &::BeatSaber::Analytics::Settings::AudioSettingsTracker::DiffAndSend)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x35063a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(),
                                                                                           { "DiffAndSend", {}, { ::i2c::type_of<::BeatSaber::Settings::AudioSettings>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sender = value;
}
constexpr bool& BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_get__hasSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr bool const& BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_get__hasSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr void BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_set__hasSnapshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSnapshot = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_get__ambientVolumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientVolumeScale;
}
constexpr float_t const& BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_get__ambientVolumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientVolumeScale;
}
constexpr void BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_set__ambientVolumeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ambientVolumeScale = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_get__volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr float_t const& BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_get__volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr void BeatSaber::Analytics::Settings::AudioSettingsTracker::__cordl_internal_set__volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volume = value;
}
inline void BeatSaber::Analytics::Settings::AudioSettingsTracker::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void BeatSaber::Analytics::Settings::AudioSettingsTracker::TakeSnapshot(::BeatSaber::Settings::AudioSettings s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(),
                                                                                         { "TakeSnapshot", {}, { ::i2c::type_of<::BeatSaber::Settings::AudioSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void BeatSaber::Analytics::Settings::AudioSettingsTracker::DiffAndSend(::BeatSaber::Settings::AudioSettings s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(), { "DiffAndSend", {}, { ::i2c::type_of<::BeatSaber::Settings::AudioSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::BeatSaber::Analytics::Settings::AudioSettingsTracker*
BeatSaber::Analytics::Settings::AudioSettingsTracker::New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(sender));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::AudioSettingsTracker::AudioSettingsTracker() {}
