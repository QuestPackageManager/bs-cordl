#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/ColorsSettingsTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__ColorsSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::ColorsSettingsTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::ColorsSettingsTracker::*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::ColorsSettingsTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35061d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::ColorsSettingsTracker.TakeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::ColorsSettingsTracker::*)(::GlobalNamespace::ColorSchemesSettings*)>(
    &::BeatSaber::Analytics::Settings::ColorsSettingsTracker::TakeSnapshot)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x35067ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(),
                                                                                           { "TakeSnapshot", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::ColorsSettingsTracker.DiffAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::ColorsSettingsTracker::*)(::GlobalNamespace::ColorSchemesSettings*)>(
    &::BeatSaber::Analytics::Settings::ColorsSettingsTracker::DiffAndSend)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x350688c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(),
                                                                                           { "DiffAndSend", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sender = value;
}
constexpr bool& BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_get__hasSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr bool const& BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_get__hasSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr void BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_set__hasSnapshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSnapshot = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_get__colorOverrideType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorOverrideType;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_get__colorOverrideType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorOverrideType;
}
constexpr void BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_set__colorOverrideType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorOverrideType = value;
}
constexpr bool& BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_get__overrideDefaultColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultColors;
}
constexpr bool const& BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_get__overrideDefaultColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultColors;
}
constexpr void BeatSaber::Analytics::Settings::ColorsSettingsTracker::__cordl_internal_set__overrideDefaultColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideDefaultColors = value;
}
inline void BeatSaber::Analytics::Settings::ColorsSettingsTracker::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void BeatSaber::Analytics::Settings::ColorsSettingsTracker::TakeSnapshot(::GlobalNamespace::ColorSchemesSettings* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(),
                                                                                         { "TakeSnapshot", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void BeatSaber::Analytics::Settings::ColorsSettingsTracker::DiffAndSend(::GlobalNamespace::ColorSchemesSettings* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(),
                                                                                         { "DiffAndSend", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::BeatSaber::Analytics::Settings::ColorsSettingsTracker*
BeatSaber::Analytics::Settings::ColorsSettingsTracker::New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(sender));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::ColorsSettingsTracker::ColorsSettingsTracker() {}
