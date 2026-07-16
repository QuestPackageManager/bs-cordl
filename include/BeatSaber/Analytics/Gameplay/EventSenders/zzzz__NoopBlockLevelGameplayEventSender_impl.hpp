#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/NoopBlockLevelGameplayEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__NoopBlockLevelGameplayEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBlockLevelGameplayEventSender_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender.SendBlockLevelGameplayEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, ::StringW)>(
        &::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::SendBlockLevelGameplayEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3264b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender*>(),
                            { "SendBlockLevelGameplayEvent", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3262ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void
BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::SendBlockLevelGameplayEvent(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData,
                                                                                                             ::StringW blockLevelJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender*>(),
                          { "SendBlockLevelGameplayEvent", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData, blockLevelJSON);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender* BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender*>());
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender"
constexpr BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__IBlockLevelGameplayEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::NoopBlockLevelGameplayEventSender::NoopBlockLevelGameplayEventSender() {}
