#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectSpawnControllerHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnControllerHelpers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers.GetNoteJumpValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerSpecificSettings*, float_t, ::by_ref<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>,
                                                                ::by_ref<float_t>)>(&::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetNoteJumpValues)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d1afd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*>(),
                                                { "GetNoteJumpValues",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers.GetMinRelativeNoteJumpSpeedUntilLastBeatmapObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetMinRelativeNoteJumpSpeedUntilLastBeatmapObject)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x5d1a354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*>(),
                                                             { "GetMinRelativeNoteJumpSpeedUntilLastBeatmapObject", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetNoteJumpValues(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, float_t defaultNoteJumpStartBeatOffset,
                                                                                    ::by_ref<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType> noteJumpValueType,
                                                                                    ::by_ref<float_t> noteJumpValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*>(),
                                              { "GetNoteJumpValues",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerSpecificSettings, defaultNoteJumpStartBeatOffset, noteJumpValueType, noteJumpValue);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetMinRelativeNoteJumpSpeedUntilLastBeatmapObject(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*>(),
                                                           { "GetMinRelativeNoteJumpSpeedUntilLastBeatmapObject", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, beatmapData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::BeatmapObjectSpawnControllerHelpers() {}
