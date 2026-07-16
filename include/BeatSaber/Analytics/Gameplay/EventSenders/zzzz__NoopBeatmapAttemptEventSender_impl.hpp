#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/NoopBeatmapAttemptEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__NoopBeatmapAttemptEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapAttemptEventData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBeatmapAttemptEventSender_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender.SendStartedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::SendStartedLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3264b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>(),
                                                             { "SendStartedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender.SendFinishedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::SendFinishedLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3264b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>(),
                                                { "SendFinishedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender.SendAbortedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::SendAbortedLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3264b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>(),
                                                             { "SendAbortedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3262cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::SendStartedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>(),
                                                           { "SendStartedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData);
}
inline void
BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::SendFinishedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>(),
                                                           { "SendFinishedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::SendAbortedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>(),
                                                           { "SendAbortedLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender* BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender*>());
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
constexpr BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__IBeatmapAttemptEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBeatmapAttemptEventSender::NoopBeatmapAttemptEventSender() {}
