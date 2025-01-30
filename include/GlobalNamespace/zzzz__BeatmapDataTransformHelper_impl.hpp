#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataTransformHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataTransformHelper_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.CreateTransformedBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, bool,
                                                             ::GlobalNamespace::EnvironmentEffectsFilterPreset, ::GlobalNamespace::EnvironmentIntensityReductionOptions*,
                                                             ::ByRef<::BeatSaber::Settings::Settings>)>(&::GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x26ace00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataTransformHelper*>::get(), "CreateTransformedBeatmapData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentEffectsFilterPreset>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.AddTestBurstSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer,
                         ::GlobalNamespace::NoteCutDirection, int32_t, float_t, ::GlobalNamespace::BeatmapData*)>(&::GlobalNamespace::BeatmapDataTransformHelper::AddTestBurstSlider)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x26ad048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataTransformHelper*>::get(), "AddTestBurstSlider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 14>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.AddTestSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    float_t, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer,
    ::GlobalNamespace::NoteCutDirection, float_t, bool, bool, ::GlobalNamespace::BeatmapData*)>(&::GlobalNamespace::BeatmapDataTransformHelper::AddTestSlider)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x26ad14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataTransformHelper*>::get(), "AddTestSlider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 16>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.IsObstaclesMergingNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevel*, bool)>(
    &::GlobalNamespace::BeatmapDataTransformHelper::IsObstaclesMergingNeeded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26ad03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataTransformHelper*>::get(), "IsObstaclesMergingNeeded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData(
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool leftHanded,
    ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset, ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions,
    ::ByRef<::BeatSaber::Settings::Settings> settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataTransformHelper*>::get(), "CreateTransformedBeatmapData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentEffectsFilterPreset>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(nullptr, ___internal_method, beatmapData, beatmapLevel, gameplayModifiers, leftHanded,
                                                                                              environmentEffectsFilterPreset, environmentIntensityReductionOptions, settings);
}
inline void GlobalNamespace::BeatmapDataTransformHelper::AddTestBurstSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex,
                                                                            ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                                                                            int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer,
                                                                            ::GlobalNamespace::NoteCutDirection tailCutDirection, int32_t sliceCount, float_t squishAmount,
                                                                            ::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataTransformHelper*>::get(), "AddTestBurstSlider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 14>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, time, beat, duration, headRotation, headLineIndex, headNoteLineLayer, headCutDirection, tailRotation,
                                                          tailLineIndex, tailNoteLineLayer, tailCutDirection, sliceCount, squishAmount, beatmapData);
}
inline void GlobalNamespace::BeatmapDataTransformHelper::AddTestSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex,
                                                                       ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                                                                       float_t headControlPointLength, int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer,
                                                                       ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailControlPointLength, bool hasHeadNote, bool hasTailNote,
                                                                       ::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataTransformHelper*>::get(), "AddTestSlider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 16>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, time, beat, duration, headRotation, headLineIndex, headNoteLineLayer, headCutDirection, headControlPointLength,
                                                          tailRotation, tailLineIndex, tailNoteLineLayer, tailCutDirection, tailControlPointLength, hasHeadNote, hasTailNote, beatmapData);
}
inline bool GlobalNamespace::BeatmapDataTransformHelper::IsObstaclesMergingNeeded(::GlobalNamespace::BeatmapLevel* beatmapLevel, bool screenDisplacementEffectsEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataTransformHelper*>::get(), "IsObstaclesMergingNeeded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapLevel, screenDisplacementEffectsEnabled);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataTransformHelper::BeatmapDataTransformHelper() {}
