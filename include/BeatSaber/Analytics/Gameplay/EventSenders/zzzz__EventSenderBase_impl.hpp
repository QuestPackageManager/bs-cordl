#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/EventSenderBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilder_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326376c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase.GetSegmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::GetSegmentName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3263a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>(),
                                                             { "GetSegmentName", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase.SendEventsBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::*)(::BeatSaber::Analytics::Gameplay::EventsBuilder*)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::SendEventsBatch)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3263b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>(),
                                                                                           { "SendEventsBatch", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsManager = value;
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, analyticsManager);
}
inline ::StringW BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::GetSegmentName(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>(),
                                                           { "GetSegmentName", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::SendEventsBatch(::BeatSaber::Analytics::Gameplay::EventsBuilder* eventsBuilder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>(),
                                                                                         { "SendEventsBatch", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventsBuilder);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase* BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>(analyticsManager));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::EventSenderBase() {}
