#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/BasePlatformSessionAnalyticsEvent.hpp"
#include "OSCE/Analytics/zzzz__UserSessionAnalyticsEvent_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__BasePlatformSessionAnalyticsEvent_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent.GetIDType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IDType (::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::*)()>(
    &::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3257788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(),
                                                                                          { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent.EventRequiresAnalyticsID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::*)()>(
    &::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::EventRequiresAnalyticsID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3257790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(),
                                                                                          { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::*)()>(
    &::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3257798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(),
                                                                                          { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent.ApplyTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*, int32_t)>(
    &::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::ApplyTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x32577b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(),
                                                                                          { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32577f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(),
                                                                                          { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::*)()>(
    &::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3257cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_event_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_time;
}
constexpr float_t const& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_event_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_time;
}
constexpr void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_set_event_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___event_time = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_client_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_version;
}
constexpr ::StringW const& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_client_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_version;
}
constexpr void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_set_client_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___client_version = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_game_client_session_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___game_client_session_id;
}
constexpr ::StringW const& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_game_client_session_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___game_client_session_id;
}
constexpr void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_set_game_client_session_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___game_client_session_id = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_runtime_platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runtime_platform;
}
constexpr ::StringW const& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_runtime_platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runtime_platform;
}
constexpr void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_set_runtime_platform(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___runtime_platform = value;
}
constexpr int32_t& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_vros_major_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vros_major_version;
}
constexpr int32_t const& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_vros_major_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vros_major_version;
}
constexpr void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_set_vros_major_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vros_major_version = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_device_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___device_type;
}
constexpr ::StringW const& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_device_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___device_type;
}
constexpr void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_set_device_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___device_type = value;
}
constexpr int64_t& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_time_since_session_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time_since_session_start;
}
constexpr int64_t const& BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_get_time_since_session_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time_since_session_start;
}
constexpr void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::__cordl_internal_set_time_since_session_start(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time_since_session_start = value;
}
inline ::GlobalNamespace::IDType BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::GetIDType() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType>(this, ___internal_method);
}
inline bool BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::EventRequiresAnalyticsID() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::ReturnedToPool() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::ApplyTime(::OSCE::Analytics::AnalyticsManager* manager, int32_t timestamp) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager, timestamp);
}
inline void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent* BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*>());
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent::BasePlatformSessionAnalyticsEvent() {}
