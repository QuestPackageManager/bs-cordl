#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectSpawnControllerHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnControllerHelpers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers.GetNoteJumpValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerSpecificSettings*, float_t, ::by_ref<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>,
                                                                ::by_ref<float_t>)>(&::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetNoteJumpValues)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58cae78;

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
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::BeatmapObjectSpawnControllerHelpers() {}
