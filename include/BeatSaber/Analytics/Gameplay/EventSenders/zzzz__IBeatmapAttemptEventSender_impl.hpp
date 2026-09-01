#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventSenders\IBeatmapAttemptEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBeatmapAttemptEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapAttemptEventData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender.SendStartedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::SendStartedLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender.SendFinishedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::SendFinishedLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender.SendAbortedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::SendAbortedLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(), 2 }));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::SendStartedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData);
}
inline void
BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::SendFinishedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender::SendAbortedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData);
}
