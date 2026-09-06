#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/IBlockLevelGameplayEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBlockLevelGameplayEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender.SendBlockLevelGameplayEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender::*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, ::StringW)>(
        &::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender::SendBlockLevelGameplayEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(), 0 }));
    return ___internal_method;
  }
};
inline void
BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender::SendBlockLevelGameplayEvent(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData,
                                                                                                          ::StringW blockLevelJSON) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelData, blockLevelJSON);
}
