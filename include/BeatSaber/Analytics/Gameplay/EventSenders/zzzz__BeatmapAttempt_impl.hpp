#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventSenders\BeatmapAttempt.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__BeatmapAttempt_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapAttemptEventData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBeatmapAttemptEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderFactory_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilder_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.NewEventsBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::NewEventsBuilder)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3263d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(), { "NewEventsBuilder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(
    ::OSCE::Analytics::AnalyticsManager*, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3263aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.SendStartedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendStartedLevel)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x3263d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                                             { "SendStartedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.SendFinishedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendFinishedLevel)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x32641b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                                { "SendFinishedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.SendAbortedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendAbortedLevel)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3264740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                                             { "SendAbortedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.GetBuilderForBeatmapAttempt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (
    ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::GetBuilderForBeatmapAttempt)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x326430c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                                { "GetBuilderForBeatmapAttempt", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::__cordl_internal_get__eventsBuilderFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderFactory;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const& BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::__cordl_internal_get__eventsBuilderFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderFactory;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::__cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventsBuilderFactory = value;
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::NewEventsBuilder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(), { "NewEventsBuilder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, analyticsManager, eventsBuilderFactory);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendStartedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                                           { "SendStartedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendFinishedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                                           { "SendFinishedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendAbortedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                                           { "SendAbortedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder*
BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::GetBuilderForBeatmapAttempt(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(),
                                              { "GetBuilderForBeatmapAttempt", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method, eventData);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*
BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                       ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(analyticsManager, eventsBuilderFactory));
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
constexpr BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::operator ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::i___BeatSaber__Analytics__Gameplay__EventSenders__IBeatmapAttemptEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::BeatmapAttempt() {}
