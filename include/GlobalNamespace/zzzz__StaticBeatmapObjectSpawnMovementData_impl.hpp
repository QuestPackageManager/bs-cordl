#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBeatmapObjectSpawnMovementData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticBeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData.Get2DNoteOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::Get2DNoteOffset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3260f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*>(),
                                                             { "Get2DNoteOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData.LineYPosForLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::LineYPosForLineLayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32611b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*>(),
                                                                                           { "LineYPosForLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 GlobalNamespace::StaticBeatmapObjectSpawnMovementData::Get2DNoteOffset(int32_t noteLineIndex, int32_t noteLinesCount, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*>(),
                                                           { "Get2DNoteOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, noteLineIndex, noteLinesCount, noteLineLayer);
}
inline float_t GlobalNamespace::StaticBeatmapObjectSpawnMovementData::LineYPosForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*>(),
                                                                                         { "LineYPosForLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lineLayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::StaticBeatmapObjectSpawnMovementData() {}
