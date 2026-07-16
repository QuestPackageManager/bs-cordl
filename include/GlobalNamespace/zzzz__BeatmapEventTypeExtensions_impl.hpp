#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventTypeExtensions.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTypeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTypeExtensions.IsCoreLightIntensityChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BasicBeatmapEventType)>(&::GlobalNamespace::BeatmapEventTypeExtensions::IsCoreLightIntensityChangeEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3259630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTypeExtensions*>(),
                                                                                           { "IsCoreLightIntensityChangeEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::BeatmapEventTypeExtensions::IsCoreLightIntensityChangeEvent(::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTypeExtensions*>(),
                                                                                         { "IsCoreLightIntensityChangeEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, basicBeatmapEventType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventTypeExtensions::BeatmapEventTypeExtensions() {}
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kLights1{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kLights2{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kLights3{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kLights4{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kLights5{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kColorBoost{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kRotateRings{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kCompressExpand{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kLegacyEarlySpawnRotation{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kLegacyLateSpawnRotation{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapEventTypeExtensions::kNoteJumpMovementSpeedChange{ static_cast<int32_t>(0x3e8) };
