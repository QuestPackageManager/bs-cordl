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

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, bool,
                                                             ::GlobalNamespace::EnvironmentEffectsFilterPreset, ::GlobalNamespace::EnvironmentIntensityReductionOptions*,
                                                             ::by_ref<::BeatSaber::Settings::Settings>)>(&::GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x370443c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                         { "CreateTransformedBeatmapData",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                             ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EnvironmentEffectsFilterPreset>(),
                                             ::i2c::type_of<::GlobalNamespace::EnvironmentIntensityReductionOptions*>(), ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.AddTestBurstSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int32_t, int32_t,
                                                                ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int32_t, float_t, ::GlobalNamespace::BeatmapData*)>(
    &::GlobalNamespace::BeatmapDataTransformHelper::AddTestBurstSlider)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x37046a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                                             { "AddTestBurstSlider",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.AddTestSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, float_t, int32_t,
                                                                int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, float_t, bool, bool, ::GlobalNamespace::BeatmapData*)>(
    &::GlobalNamespace::BeatmapDataTransformHelper::AddTestSlider)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x37047d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                            { "AddTestSlider",
                              {},
                              { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.IsObstaclesMergingNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, bool)>(&::GlobalNamespace::BeatmapDataTransformHelper::IsObstaclesMergingNeeded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3704698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                                                                           { "IsObstaclesMergingNeeded", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData(
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool leftHanded,
    ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset, ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions,
    ::by_ref<::BeatSaber::Settings::Settings> settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                              { "CreateTransformedBeatmapData",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                  ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EnvironmentEffectsFilterPreset>(),
                                                  ::i2c::type_of<::GlobalNamespace::EnvironmentIntensityReductionOptions*>(), ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(nullptr, ___internal_method, beatmapData, beatmapLevel, gameplayModifiers, leftHanded,
                                                                                       environmentEffectsFilterPreset, environmentIntensityReductionOptions, settings);
}
inline void GlobalNamespace::BeatmapDataTransformHelper::AddTestBurstSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex,
                                                                            ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                                                                            int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer,
                                                                            ::GlobalNamespace::NoteCutDirection tailCutDirection, int32_t sliceCount, float_t squishAmount,
                                                                            ::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                                           { "AddTestBurstSlider",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, time, beat, duration, headRotation, headLineIndex, headNoteLineLayer, headCutDirection, tailRotation, tailLineIndex,
                                                   tailNoteLineLayer, tailCutDirection, sliceCount, squishAmount, beatmapData);
}
inline void GlobalNamespace::BeatmapDataTransformHelper::AddTestSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex,
                                                                       ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                                                                       float_t headControlPointLength, int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer,
                                                                       ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailControlPointLength, bool hasHeadNote, bool hasTailNote,
                                                                       ::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                          { "AddTestSlider",
                            {},
                            { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, time, beat, duration, headRotation, headLineIndex, headNoteLineLayer, headCutDirection, headControlPointLength,
                                                   tailRotation, tailLineIndex, tailNoteLineLayer, tailCutDirection, tailControlPointLength, hasHeadNote, hasTailNote, beatmapData);
}
inline bool GlobalNamespace::BeatmapDataTransformHelper::IsObstaclesMergingNeeded(::StringW beatmapLevelId, bool screenDisplacementEffectsEnabled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                                                                         { "IsObstaclesMergingNeeded", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, beatmapLevelId, screenDisplacementEffectsEnabled);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataTransformHelper::BeatmapDataTransformHelper() {}
