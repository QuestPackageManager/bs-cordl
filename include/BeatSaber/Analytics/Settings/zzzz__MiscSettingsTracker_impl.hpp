#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/MiscSettingsTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__MiscSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "BeatSaber/Settings/zzzz__MiscSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::MiscSettingsTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::MiscSettingsTracker::*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::MiscSettingsTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3506330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::MiscSettingsTracker.TakeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::MiscSettingsTracker::*)(::BeatSaber::Settings::MiscSettings)>(
    &::BeatSaber::Analytics::Settings::MiscSettingsTracker::TakeSnapshot)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3508bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(),
                                                                                           { "TakeSnapshot", {}, { ::i2c::type_of<::BeatSaber::Settings::MiscSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::MiscSettingsTracker.DiffAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::MiscSettingsTracker::*)(::BeatSaber::Settings::MiscSettings)>(
    &::BeatSaber::Analytics::Settings::MiscSettingsTracker::DiffAndSend)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3508c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(), { "DiffAndSend", {}, { ::i2c::type_of<::BeatSaber::Settings::MiscSettings>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sender = value;
}
constexpr bool& BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_get__hasSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr bool const& BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_get__hasSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr void BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_set__hasSnapshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSnapshot = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_get__pauseButtonResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseButtonResponse;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_get__pauseButtonResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseButtonResponse;
}
constexpr void BeatSaber::Analytics::Settings::MiscSettingsTracker::__cordl_internal_set__pauseButtonResponse(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseButtonResponse = value;
}
inline void BeatSaber::Analytics::Settings::MiscSettingsTracker::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void BeatSaber::Analytics::Settings::MiscSettingsTracker::TakeSnapshot(::BeatSaber::Settings::MiscSettings s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(), { "TakeSnapshot", {}, { ::i2c::type_of<::BeatSaber::Settings::MiscSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void BeatSaber::Analytics::Settings::MiscSettingsTracker::DiffAndSend(::BeatSaber::Settings::MiscSettings s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(), { "DiffAndSend", {}, { ::i2c::type_of<::BeatSaber::Settings::MiscSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::BeatSaber::Analytics::Settings::MiscSettingsTracker*
BeatSaber::Analytics::Settings::MiscSettingsTracker::New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(sender));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::MiscSettingsTracker::MiscSettingsTracker() {}
