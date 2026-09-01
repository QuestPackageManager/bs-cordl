#pragma once
// IWYU pragma private; include "BeatGames\Analytics\Events\SessionEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__SessionEventSender_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::SessionEventSender::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatGames::Analytics::Events::SessionEventSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3257a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEventSender*>(), { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEventSender.SendSessionStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::SessionEventSender::*)()>(&::BeatGames::Analytics::Events::SessionEventSender::SendSessionStart)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x32582a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEventSender*>(), { "SendSessionStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEventSender.SendSessionFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::SessionEventSender::*)()>(&::BeatGames::Analytics::Events::SessionEventSender::SendSessionFinish)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x325836c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEventSender*>(), { "SendSessionFinish", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatGames::Analytics::Events::SessionEventSender::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatGames::Analytics::Events::SessionEventSender::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void BeatGames::Analytics::Events::SessionEventSender::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsManager = value;
}
inline void BeatGames::Analytics::Events::SessionEventSender::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEventSender*>(), { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, analyticsManager);
}
inline void BeatGames::Analytics::Events::SessionEventSender::SendSessionStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEventSender*>(), { "SendSessionStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::SessionEventSender::SendSessionFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEventSender*>(), { "SendSessionFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::SessionEventSender* BeatGames::Analytics::Events::SessionEventSender::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatGames::Analytics::Events::SessionEventSender*>(analyticsManager));
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::SessionEventSender::SessionEventSender() {}
