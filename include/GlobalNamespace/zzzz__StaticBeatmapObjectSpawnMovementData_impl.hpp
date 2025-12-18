#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBeatmapObjectSpawnMovementData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticBeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData.Get2DNoteOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::Get2DNoteOffset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3199c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*>::get(), "Get2DNoteOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData.LineYPosForLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::LineYPosForLineLayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3199f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*>::get(), "LineYPosForLineLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 GlobalNamespace::StaticBeatmapObjectSpawnMovementData::Get2DNoteOffset(int32_t noteLineIndex, int32_t noteLinesCount, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*>::get(), "Get2DNoteOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, noteLineIndex, noteLinesCount, noteLineLayer);
}
inline float_t GlobalNamespace::StaticBeatmapObjectSpawnMovementData::LineYPosForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*>::get(), "LineYPosForLineLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, lineLayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::StaticBeatmapObjectSpawnMovementData() {}
