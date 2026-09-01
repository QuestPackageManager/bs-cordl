#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventSenders\HMDSessionEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__HMDSessionEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IHMDSessionEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderFactory_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilder_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender.SegmentNameFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::SegmentNameFor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3264c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "SegmentNameFor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender.get_CurrentSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::get_CurrentSegment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3264cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "get_CurrentSegment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender.NewEventsBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::NewEventsBuilder)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3264cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "NewEventsBuilder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::*)(
    ::OSCE::Analytics::AnalyticsManager*, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*, ::StringW)>(&::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3263b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(),
            { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender.SendHMDSessionStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::SendHMDSessionStart)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3264cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "SendHMDSessionStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender.SendHMDSessionEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::SendHMDSessionEnd)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x3264ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "SendHMDSessionEnd", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_get__eventsBuilderFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderFactory;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const& BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_get__eventsBuilderFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderFactory;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventsBuilderFactory = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_set__platform(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
constexpr ::System::DateTime& BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_get__startSessionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSessionTime;
}
constexpr ::System::DateTime const& BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_get__startSessionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSessionTime;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_set__startSessionTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startSessionTime = value;
}
constexpr bool& BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_get__hasOngoingSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasOngoingSession;
}
constexpr bool const& BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_get__hasOngoingSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasOngoingSession;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::__cordl_internal_set__hasOngoingSession(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasOngoingSession = value;
}
inline ::StringW BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::SegmentNameFor(::StringW platform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "SegmentNameFor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platform);
}
inline ::StringW BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::get_CurrentSegment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "get_CurrentSegment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::NewEventsBuilder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "NewEventsBuilder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                       ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory, ::StringW platform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(),
          { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, analyticsManager, eventsBuilderFactory, platform);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::SendHMDSessionStart() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "SendHMDSessionStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::SendHMDSessionEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(), { "SendHMDSessionEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                              ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory, ::StringW platform) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender*>(analyticsManager, eventsBuilderFactory, platform));
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
constexpr BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__IHMDSessionEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::HMDSessionEventSender::HMDSessionEventSender() {}
