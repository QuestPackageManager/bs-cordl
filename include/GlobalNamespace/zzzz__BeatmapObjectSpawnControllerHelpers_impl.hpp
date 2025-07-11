#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectSpawnControllerHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnControllerHelpers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers.GetNoteJumpValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::PlayerSpecificSettings*, float_t, ::ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>, ::ByRef<float_t>)>(
        &::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetNoteJumpValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3ae29f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*>::get(), "GetNoteJumpValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetNoteJumpValues(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, float_t defaultNoteJumpStartBeatOffset,
                                                                                    ::ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType> noteJumpValueType,
                                                                                    ::ByRef<float_t> noteJumpValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*>::get(), "GetNoteJumpValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerSpecificSettings, defaultNoteJumpStartBeatOffset, noteJumpValueType, noteJumpValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::BeatmapObjectSpawnControllerHelpers() {}
