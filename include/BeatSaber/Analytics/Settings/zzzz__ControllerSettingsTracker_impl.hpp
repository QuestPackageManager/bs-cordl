#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/ControllerSettingsTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__ControllerSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "BeatSaber/Settings/zzzz__ControllerSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::ControllerSettingsTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::ControllerSettingsTracker::*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::ControllerSettingsTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3506228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::ControllerSettingsTracker.TakeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::ControllerSettingsTracker::*)(::BeatSaber::Settings::ControllerSettings)>(
    &::BeatSaber::Analytics::Settings::ControllerSettingsTracker::TakeSnapshot)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3506ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(),
                                                                                           { "TakeSnapshot", {}, { ::i2c::type_of<::BeatSaber::Settings::ControllerSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::ControllerSettingsTracker.DiffAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::ControllerSettingsTracker::*)(::BeatSaber::Settings::ControllerSettings)>(
    &::BeatSaber::Analytics::Settings::ControllerSettingsTracker::DiffAndSend)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3506cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(),
                                                                                           { "DiffAndSend", {}, { ::i2c::type_of<::BeatSaber::Settings::ControllerSettings>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sender = value;
}
constexpr bool& BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_get__hasSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr bool const& BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_get__hasSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr void BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_set__hasSnapshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSnapshot = value;
}
constexpr bool& BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_get__hapticFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedback;
}
constexpr bool const& BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_get__hapticFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedback;
}
constexpr void BeatSaber::Analytics::Settings::ControllerSettingsTracker::__cordl_internal_set__hapticFeedback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedback = value;
}
inline void BeatSaber::Analytics::Settings::ControllerSettingsTracker::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void BeatSaber::Analytics::Settings::ControllerSettingsTracker::TakeSnapshot(::BeatSaber::Settings::ControllerSettings s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(),
                                                                                         { "TakeSnapshot", {}, { ::i2c::type_of<::BeatSaber::Settings::ControllerSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void BeatSaber::Analytics::Settings::ControllerSettingsTracker::DiffAndSend(::BeatSaber::Settings::ControllerSettings s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(),
                                                                                         { "DiffAndSend", {}, { ::i2c::type_of<::BeatSaber::Settings::ControllerSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::BeatSaber::Analytics::Settings::ControllerSettingsTracker*
BeatSaber::Analytics::Settings::ControllerSettingsTracker::New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(sender));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::ControllerSettingsTracker::ControllerSettingsTracker() {}
