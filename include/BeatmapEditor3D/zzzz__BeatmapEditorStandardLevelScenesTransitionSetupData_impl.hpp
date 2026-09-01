#pragma once
// IWYU pragma private; include "BeatmapEditor3D\BeatmapEditorStandardLevelScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupData_impl.hpp"
#include "BeatmapEditor3D/zzzz__BeatmapEditorStandardLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5975a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(),
                            { "add_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5975b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(),
                            { "remove_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::LevelCompletionResults*)>(
    &::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5975bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(),
                                                                                           { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::*)(
    ::GlobalNamespace::IBeatmapLevelData*, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*,
    ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::EnvironmentsListModel*, ::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::SettingsManager*,
    ::GlobalNamespace::BeatmapDataLoader*, ::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>)>(&::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5975c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(),
                            { "Init",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                                ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::*)()>(
    &::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5975c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*&
BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const&
BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::add_didFinishEvent(
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(),
                          { "add_didFinishEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::remove_didFinishEvent(
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(),
                          { "remove_didFinishEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(),
                                                                                         { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults);
}
inline void BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::Init(
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
    ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
    ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                              ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                              ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                              ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                              ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelData, beatmapKey, beatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, colorScheme,
                                                   environmentsListModel, audioClipAsyncLoader, settingsManager, beatmapDataLoader, data);
}
inline void BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData* BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData::BeatmapEditorStandardLevelScenesTransitionSetupData() {}
