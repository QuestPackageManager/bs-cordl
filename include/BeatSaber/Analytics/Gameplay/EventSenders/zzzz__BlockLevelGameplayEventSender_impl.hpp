#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/BlockLevelGameplayEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__BlockLevelGameplayEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBlockLevelGameplayEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderFactory_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::*)(
    ::OSCE::Analytics::AnalyticsManager*, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32634ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender.SendBlockLevelGameplayEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, ::StringW)>(
        &::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::SendBlockLevelGameplayEvent)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x326436c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender*>(),
                            { "SendBlockLevelGameplayEvent", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::__cordl_internal_get__eventsBuilderFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderFactory;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const&
BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::__cordl_internal_get__eventsBuilderFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderFactory;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::__cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventsBuilderFactory = value;
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                               ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, analyticsManager, eventsBuilderFactory);
}
inline void
BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::SendBlockLevelGameplayEvent(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData,
                                                                                                         ::StringW blockLevelJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender*>(),
                          { "SendBlockLevelGameplayEvent", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData, blockLevelJSON);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                      ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender*>(analyticsManager, eventsBuilderFactory));
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender"
constexpr BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__IBlockLevelGameplayEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::BlockLevelGameplayEventSender::BlockLevelGameplayEventSender() {}
