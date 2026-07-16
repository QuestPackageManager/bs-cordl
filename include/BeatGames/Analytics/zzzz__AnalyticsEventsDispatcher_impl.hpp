#pragma once
// IWYU pragma private; include "BeatGames/Analytics/AnalyticsEventsDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/zzzz__AnalyticsEventsDispatcher_def.hpp"
#include "BeatGames/Analytics/Events/zzzz__SessionEventSender_def.hpp"
#include "BeatGames/Analytics/Events/zzzz__TelemetryEventSender_def.hpp"
#include "BeatGames/Analytics/zzzz__NavigationEventSender_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::AnalyticsEventsDispatcher.get_Navigation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatGames::Analytics::NavigationEventSender* (::BeatGames::Analytics::AnalyticsEventsDispatcher::*)()>(
    &::BeatGames::Analytics::AnalyticsEventsDispatcher::get_Navigation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3257320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(), { "get_Navigation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::AnalyticsEventsDispatcher.get_Session
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatGames::Analytics::Events::SessionEventSender* (::BeatGames::Analytics::AnalyticsEventsDispatcher::*)()>(
    &::BeatGames::Analytics::AnalyticsEventsDispatcher::get_Session)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3257328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(), { "get_Session", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::AnalyticsEventsDispatcher.get_Telemetry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatGames::Analytics::Events::TelemetryEventSender* (::BeatGames::Analytics::AnalyticsEventsDispatcher::*)()>(
    &::BeatGames::Analytics::AnalyticsEventsDispatcher::get_Telemetry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3257330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(), { "get_Telemetry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::AnalyticsEventsDispatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::AnalyticsEventsDispatcher::*)(::OSCE::Analytics::AnalyticsManager*, ::StringW)>(
    &::BeatGames::Analytics::AnalyticsEventsDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3257338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatGames::Analytics::NavigationEventSender*& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__navigationEventSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____navigationEventSender;
}
constexpr ::BeatGames::Analytics::NavigationEventSender* const& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__navigationEventSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____navigationEventSender;
}
constexpr void BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_set__navigationEventSender(::BeatGames::Analytics::NavigationEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____navigationEventSender = value;
}
constexpr ::BeatGames::Analytics::Events::SessionEventSender*& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__sessionEventSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionEventSender;
}
constexpr ::BeatGames::Analytics::Events::SessionEventSender* const& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__sessionEventSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionEventSender;
}
constexpr void BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_set__sessionEventSender(::BeatGames::Analytics::Events::SessionEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionEventSender = value;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsManager = value;
}
constexpr ::BeatGames::Analytics::Events::TelemetryEventSender*& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__telemetryEventSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryEventSender;
}
constexpr ::BeatGames::Analytics::Events::TelemetryEventSender* const& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__telemetryEventSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryEventSender;
}
constexpr void BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_set__telemetryEventSender(::BeatGames::Analytics::Events::TelemetryEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryEventSender = value;
}
inline ::BeatGames::Analytics::NavigationEventSender* BeatGames::Analytics::AnalyticsEventsDispatcher::get_Navigation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(), { "get_Navigation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatGames::Analytics::NavigationEventSender*>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::SessionEventSender* BeatGames::Analytics::AnalyticsEventsDispatcher::get_Session() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(), { "get_Session", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatGames::Analytics::Events::SessionEventSender*>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::TelemetryEventSender* BeatGames::Analytics::AnalyticsEventsDispatcher::get_Telemetry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(), { "get_Telemetry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatGames::Analytics::Events::TelemetryEventSender*>(this, ___internal_method);
}
inline void BeatGames::Analytics::AnalyticsEventsDispatcher::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::StringW oculusAuthToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, analyticsManager, oculusAuthToken);
}
inline ::BeatGames::Analytics::AnalyticsEventsDispatcher* BeatGames::Analytics::AnalyticsEventsDispatcher::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::StringW oculusAuthToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(analyticsManager, oculusAuthToken));
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::AnalyticsEventsDispatcher::AnalyticsEventsDispatcher() {}
