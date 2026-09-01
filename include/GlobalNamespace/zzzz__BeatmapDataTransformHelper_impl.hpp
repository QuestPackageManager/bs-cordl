#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataTransformHelper.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataTransformHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataTransformHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0._CreateTransformedBeatmapDataAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::_CreateTransformedBeatmapDataAsync_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x370778c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0*>(), { "<CreateTransformedBeatmapDataAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr void GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapData = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerSpecificSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_originalEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalEnvironmentInfo;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_originalEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalEnvironmentInfo;
}
constexpr void GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_set_originalEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalEnvironmentInfo = value;
}
constexpr bool& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_screenDisplacementEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffects;
}
constexpr bool const& GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_get_screenDisplacementEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffects;
}
constexpr void GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::__cordl_internal_set_screenDisplacementEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenDisplacementEffects = value;
}
inline void GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::_CreateTransformedBeatmapDataAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0*>(), { "<CreateTransformedBeatmapDataAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0* GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0::BeatmapDataTransformHelper___c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.CreateTransformedBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::IReadonlyBeatmapData*>* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*,
                                                   ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::EnvironmentInfoSO*, bool)>(
    &::GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x37070b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                         { "CreateTransformedBeatmapDataAsync",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                             ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                             ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.CreateTransformedBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapLevel*,
                                                             ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::EnvironmentInfoSO*, bool)>(
        &::GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3707230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                         { "CreateTransformedBeatmapData",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                             ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                             ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataTransformHelper.AddTestBurstSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int32_t, int32_t,
                                                                ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int32_t, float_t, ::GlobalNamespace::BeatmapData*)>(
    &::GlobalNamespace::BeatmapDataTransformHelper::AddTestBurstSlider)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x37074bc;

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
  constexpr static std::size_t addrs = 0x37075f0;

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
  constexpr static std::size_t addrs = 0x37074b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                                                                           { "IsObstaclesMergingNeeded", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapDataAsync(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                               ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                               ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                               ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, bool screenDisplacementEffects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                              { "CreateTransformedBeatmapDataAsync",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                  ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                  ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>(
      nullptr, ___internal_method, beatmapData, beatmapKey, beatmapLevel, gameplayModifiers, playerSpecificSettings, originalEnvironmentInfo, screenDisplacementEffects);
}
inline ::GlobalNamespace::IReadonlyBeatmapData*
GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                          ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                          ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                          ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, bool screenDisplacementEffects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataTransformHelper*>(),
                                              { "CreateTransformedBeatmapData",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                  ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                  ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(nullptr, ___internal_method, beatmapData, beatmapKey, beatmapLevel, gameplayModifiers, playerSpecificSettings,
                                                                                       originalEnvironmentInfo, screenDisplacementEffects);
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
