#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionLevelScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupData::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x597271c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(),
            { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupData::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59727dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(),
            { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData.get_missionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupData::get_missionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { "get_missionId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData.set_missionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)(::StringW)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupData::set_missionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59728a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { "set_missionId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupData::get_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59728ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData.set_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupData::set_beatmapKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59728b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)(
    ::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::ArrayW<::GlobalNamespace::MissionObjective*>,
    ::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::EnvironmentsListModel*,
    ::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::GameplayAdditionalInformation*, ::GlobalNamespace::BeatmapDataLoader*, ::StringW,
    ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::IBeatmapLevelData*)>(&::GlobalNamespace::MissionLevelScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x59728c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(),
                                         { "Init",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                             ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>(),
                                             ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                             ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                             ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                                             ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)(::GlobalNamespace::MissionCompletionResults*)>(
    &::GlobalNamespace::MissionLevelScenesTransitionSetupData::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5972cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(),
                                                                                           { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelScenesTransitionSetupData::*)()>(&::GlobalNamespace::MissionLevelScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5972ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*&
GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* const&
GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::StringW& GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_get__missionId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_get__missionId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionId_k__BackingField;
}
constexpr void GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_set__missionId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionId_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_get__beatmapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_get__beatmapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr void GlobalNamespace::MissionLevelScenesTransitionSetupData::__cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_k__BackingField = value;
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupData::add_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(),
          { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupData::remove_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(),
          { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MissionLevelScenesTransitionSetupData::get_missionId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { "get_missionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupData::set_missionId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { "set_missionId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::MissionLevelScenesTransitionSetupData::get_beatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupData::set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupData::Init(
    ::StringW missionId, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
    ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation,
    ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::StringW backButtonText, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(),
                                              { "Init",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                  ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>(),
                                                  ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                  ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                                  ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                                                  ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionId, beatmapKey, beatmapLevel, overrideEnvironmentSettings, missionObjectives, playerOverrideColorScheme,
                                                   playerOverrideLightshowColors, gameplayModifiers, playerSpecificSettings, environmentsListModel, audioClipAsyncLoader, settingsManager,
                                                   gameplayAdditionalInformation, beatmapDataLoader, backButtonText, beatmapLevelsModel, beatmapLevelData);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupData::Finish(::GlobalNamespace::MissionCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(),
                                                                                         { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults);
}
inline void GlobalNamespace::MissionLevelScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelScenesTransitionSetupData* GlobalNamespace::MissionLevelScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData::MissionLevelScenesTransitionSetupData() {}
