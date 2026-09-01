#pragma once
// IWYU pragma private; include "GlobalNamespace\MenuTransitionsHelper.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "BeatmapEditor3D/zzzz__BeatmapEditorStandardLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__CreditsScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupData_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c::*)()>(&::GlobalNamespace::MenuTransitionsHelper___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5911e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c._HandleTutorialSceneDidFinish_b__37_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MenuTransitionsHelper___c::_HandleTutorialSceneDidFinish_b__37_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5911e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c*>(),
                                                                                           { "<HandleTutorialSceneDidFinish>b__37_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuTransitionsHelper___c::setStaticF___9(::GlobalNamespace::MenuTransitionsHelper___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MenuTransitionsHelper___c*, "<>9", ::GlobalNamespace::MenuTransitionsHelper___c*>(
      std::forward<::GlobalNamespace::MenuTransitionsHelper___c*>(value));
}
inline ::GlobalNamespace::MenuTransitionsHelper___c* GlobalNamespace::MenuTransitionsHelper___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MenuTransitionsHelper___c*, "<>9", ::GlobalNamespace::MenuTransitionsHelper___c*>();
}
inline void GlobalNamespace::MenuTransitionsHelper___c::setStaticF___9__37_0(::System::Action_1<::Zenject::DiContainer*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::DiContainer*>*, "<>9__37_0", ::GlobalNamespace::MenuTransitionsHelper___c*>(
      std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
inline ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::MenuTransitionsHelper___c::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::DiContainer*>*, "<>9__37_0", ::GlobalNamespace::MenuTransitionsHelper___c*>();
}
inline void GlobalNamespace::MenuTransitionsHelper___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper___c::_HandleTutorialSceneDidFinish_b__37_0(::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c*>(),
                                                                                         { "<HandleTutorialSceneDidFinish>b__37_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::MenuTransitionsHelper___c* GlobalNamespace::MenuTransitionsHelper___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuTransitionsHelper___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuTransitionsHelper___c::MenuTransitionsHelper___c() {}
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::*)()>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590fb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0._StartStandardLevel_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::_StartStandardLevel_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5911e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0*>(),
                                                                                           { "<StartStandardLevel>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get_stopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get_stopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopwatch;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_set_stopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stopwatch = value;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get_serializedBeatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBeatmapKey;
}
constexpr ::StringW const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get_serializedBeatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBeatmapKey;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_set_serializedBeatmapKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializedBeatmapKey = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get_afterSceneSwitchToGameplayCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterSceneSwitchToGameplayCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_get_afterSceneSwitchToGameplayCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterSceneSwitchToGameplayCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::__cordl_internal_set_afterSceneSwitchToGameplayCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___afterSceneSwitchToGameplayCallback = value;
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::_StartStandardLevel_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0*>(),
                                                                                         { "<StartStandardLevel>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0* GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0::MenuTransitionsHelper___c__DisplayClass24_0() {}
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::*)()>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5911634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0._HandleMainGameSceneDidFinish_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::_HandleMainGameSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5911ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0*>(),
                                                                                           { "<HandleMainGameSceneDidFinish>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_get_standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const&
GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_get_standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardLevelScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_set_standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___standardLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::LevelCompletionResults*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_get_levelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr ::GlobalNamespace::LevelCompletionResults* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_get_levelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::__cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelCompletionResults = value;
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::_HandleMainGameSceneDidFinish_b__0(::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0*>(),
                                                                                         { "<HandleMainGameSceneDidFinish>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0* GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0::MenuTransitionsHelper___c__DisplayClass33_0() {}
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::*)()>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59117f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0._HandleMultiplayerLevelDidFinish_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::_HandleMultiplayerLevelDidFinish_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5911f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0*>(),
                                                                                           { "<HandleMultiplayerLevelDidFinish>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*&
GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_get_multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const&
GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_get_multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerLevelScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_set_multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplayerLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MultiplayerResultsData*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_get_multiplayerResultsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerResultsData;
}
constexpr ::GlobalNamespace::MultiplayerResultsData* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_get_multiplayerResultsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerResultsData;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::__cordl_internal_set_multiplayerResultsData(::GlobalNamespace::MultiplayerResultsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplayerResultsData = value;
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::_HandleMultiplayerLevelDidFinish_b__0(::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0*>(),
                                                                                         { "<HandleMultiplayerLevelDidFinish>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0* GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0::MenuTransitionsHelper___c__DisplayClass34_0() {}
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::*)()>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0._HandleMultiplayerLevelDidDisconnect_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::_HandleMultiplayerLevelDidDisconnect_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5911f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0*>(),
                                                                                           { "<HandleMultiplayerLevelDidDisconnect>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::__cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::__cordl_internal_get_disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::__cordl_internal_get_disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::__cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectedReason = value;
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::_HandleMultiplayerLevelDidDisconnect_b__0(::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0*>(),
                                                                                         { "<HandleMultiplayerLevelDidDisconnect>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0* GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0::MenuTransitionsHelper___c__DisplayClass35_0() {}
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::*)()>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5911b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0._HandleMissionLevelSceneDidFinish_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::_HandleMissionLevelSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5911f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0*>(),
                                                                                           { "<HandleMissionLevelSceneDidFinish>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_get_missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const&
GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_get_missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionLevelScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_set_missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MissionCompletionResults*& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_get_missionCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionCompletionResults;
}
constexpr ::GlobalNamespace::MissionCompletionResults* const& GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_get_missionCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionCompletionResults;
}
constexpr void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::__cordl_internal_set_missionCompletionResults(::GlobalNamespace::MissionCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionCompletionResults = value;
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::_HandleMissionLevelSceneDidFinish_b__0(::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0*>(),
                                                                                         { "<HandleMissionLevelSceneDidFinish>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0* GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0::MenuTransitionsHelper___c__DisplayClass36_0() {}
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)()>(&::GlobalNamespace::MenuTransitionsHelper::Dispose)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x590f2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartStandardLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(
    ::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::ColorScheme*, bool,
    ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::EnvironmentsListModel*,
    ::GlobalNamespace::GameplayAdditionalInformation*, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*,
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*,
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*, ::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::MenuTransitionsHelper::StartStandardLevel)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x590f60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                { "StartStandardLevel",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                    ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                    ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                                    ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>(), ::i2c::type_of<::System::Action*>(),
                                                    ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                    ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>(),
                                                    ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>(),
                                                    ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartMissionLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(
    ::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::GameplayModifiers*,
    ::ArrayW<::GlobalNamespace::MissionObjective*>, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::EnvironmentsListModel*, ::System::Action*,
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*,
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*)>(&::GlobalNamespace::MenuTransitionsHelper::StartMissionLevel)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5910304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                         { "StartMissionLevel",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                             ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                             ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                             ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(), ::i2c::type_of<::System::Action*>(),
                                             ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*>(),
                                             ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartMultiplayerLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(
    ::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*,
    ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::EnvironmentsListModel*, ::GlobalNamespace::PracticeSettings*, ::StringW, bool, ::System::Action*,
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*, ::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x59107f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                            { "StartMultiplayerLevel",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>(),
                                ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>(),
                                ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartTutorial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::PlayerSpecificSettings*, ::System::Action*)>(
    &::GlobalNamespace::MenuTransitionsHelper::StartTutorial)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5910e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                             { "StartTutorial", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.ShowCredits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)()>(&::GlobalNamespace::MenuTransitionsHelper::ShowCredits)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59112d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "ShowCredits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartBeatmapEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::System::Action*)>(&::GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59113c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "StartBeatmapEditor", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartBeatmapEditorStandardLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(
    ::GlobalNamespace::IBeatmapLevelData*, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*,
    ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::EnvironmentsListModel*, ::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>, ::System::Action*,
    ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditorStandardLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59113cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
            { "StartBeatmapEditorStandardLevel",
              {},
              { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
                ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                ::i2c::type_of<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.RestartGame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::System::Action_1<::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::MenuTransitionsHelper::RestartGame)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59113d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "RestartGame", {}, { ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StopStandardLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)()>(&::GlobalNamespace::MenuTransitionsHelper::StopStandardLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5911424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "StopStandardLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleMainGameSceneDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleMainGameSceneDidFinish)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x591147c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
            { "HandleMainGameSceneDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleMultiplayerLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(
    ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5911638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                         { "HandleMultiplayerLevelDidFinish",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleMultiplayerLevelDidDisconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(
    ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x59117fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                { "HandleMultiplayerLevelDidDisconnect",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleMissionLevelSceneDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(
    ::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleMissionLevelSceneDidFinish)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5911990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                { "HandleMissionLevelSceneDidFinish",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleTutorialSceneDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType)>(
        &::GlobalNamespace::MenuTransitionsHelper::HandleTutorialSceneDidFinish)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5911b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                                                           { "HandleTutorialSceneDidFinish",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleCreditsSceneDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::CreditsScenesTransitionSetupData*)>(
    &::GlobalNamespace::MenuTransitionsHelper::HandleCreditsSceneDidFinish)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5911d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                             { "HandleCreditsSceneDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)()>(&::GlobalNamespace::MenuTransitionsHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5911dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__appInitScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__appInitScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__appInitScenesTransitionSetupData(::GlobalNamespace::AppInitScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appInitScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__tutorialScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__tutorialScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__tutorialScenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__creditsScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creditsScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__creditsScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creditsScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__creditsScenesTransitionSetupData(::GlobalNamespace::CreditsScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creditsScenesTransitionSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr ::GlobalNamespace::BeatmapDataLoader*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapDataLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr ::GlobalNamespace::BeatmapDataLoader* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapDataLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataLoader = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapLevelsEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapLevelsEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsEntitlementModel = value;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClipAsyncLoader = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::Analytics::Model::TelemetryModel*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__telemetryModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr ::Analytics::Model::TelemetryModel* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__telemetryModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__gameplayEventsDispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayEventsDispatcher;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__gameplayEventsDispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayEventsDispatcher;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__gameplayEventsDispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayEventsDispatcher = value;
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__standardLevelFinishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelFinishedCallback;
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__standardLevelFinishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelFinishedCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__standardLevelFinishedCallback(
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelFinishedCallback = value;
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__standardLevelRestartedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelRestartedCallback;
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__standardLevelRestartedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelRestartedCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__standardLevelRestartedCallback(
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelRestartedCallback = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__multiplayerLevelFinishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelFinishedCallback;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* const&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__multiplayerLevelFinishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelFinishedCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__multiplayerLevelFinishedCallback(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelFinishedCallback = value;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__multiplayerDidDisconnectCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerDidDisconnectCallback;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__multiplayerDidDisconnectCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerDidDisconnectCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__multiplayerDidDisconnectCallback(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerDidDisconnectCallback = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__missionLevelFinishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelFinishedCallback;
}
constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* const&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__missionLevelFinishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelFinishedCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__missionLevelFinishedCallback(
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelFinishedCallback = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__missionLevelRestartedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelRestartedCallback;
}
constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* const&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__missionLevelRestartedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelRestartedCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__missionLevelRestartedCallback(
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelRestartedCallback = value;
}
constexpr ::System::Action*& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapEditorFinishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorFinishedCallback;
}
constexpr ::System::Action* const& GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapEditorFinishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorFinishedCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__beatmapEditorFinishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEditorFinishedCallback = value;
}
constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorGameplayLevelFinishedCallback;
}
constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const&
GlobalNamespace::MenuTransitionsHelper::__cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorGameplayLevelFinishedCallback;
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__cordl_internal_set__beatmapEditorGameplayLevelFinishedCallback(
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEditorGameplayLevelFinishedCallback = value;
}
inline void GlobalNamespace::MenuTransitionsHelper::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartStandardLevel(
    ::StringW gameMode, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
    ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
    ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation, ::System::Action* beforeSceneSwitchToGameplayCallback,
    ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchToGameplayCallback,
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback,
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                          { "StartStandardLevel",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                              ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                              ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                              ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                              ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>(),
                              ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>(),
                              ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, beatmapKey, beatmapLevel, overrideEnvironmentSettings, playerOverrideColorScheme, playerOverrideLightshowColors,
                                                   gameplayModifiers, playerSpecificSettings, practiceSettings, environmentsListModel, gameplayAdditionalInformation,
                                                   beforeSceneSwitchToGameplayCallback, afterSceneSwitchToGameplayCallback, levelFinishedCallback, levelRestartedCallback, beatmapLevelData);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartMissionLevel(
    ::StringW missionId, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme,
    bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::System::Action* beforeSceneSwitchCallback,
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* levelFinishedCallback,
    ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* levelRestartedCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                              { "StartMissionLevel",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                  ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                  ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                  ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(), ::i2c::type_of<::System::Action*>(),
                                                  ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*>(),
                                                  ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionId, beatmapKey, beatmapLevel, playerOverrideColorScheme, playerOverrideLightshowColors, gameplayModifiers,
                                                   missionObjectives, playerSpecificSettings, environmentsListModel, beforeSceneSwitchCallback, levelFinishedCallback, levelRestartedCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel(
    ::StringW gameMode, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
    ::GlobalNamespace::ColorScheme* overrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects,
    ::System::Action* beforeSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                          { "StartMultiplayerLevel",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                              ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                              ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                              ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>(),
                              ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>(),
                              ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, beatmapKey, beatmapLevel, beatmapLevelData, overrideColorScheme, gameplayModifiers, playerSpecificSettings,
                                                   environmentsListModel, practiceSettings, backButtonText, useTestNoteCutSoundEffects, beforeSceneSwitchCallback, levelFinishedCallback,
                                                   didDisconnectCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartTutorial(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::System::Action* beforeSceneSwitchCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                           { "StartTutorial", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerSpecificSettings, beforeSceneSwitchCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::ShowCredits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "ShowCredits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditor(::System::Action* beatmapEditorFinishedCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "StartBeatmapEditor", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEditorFinishedCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditorStandardLevel(
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
    ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData> data,
    ::System::Action* beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
          { "StartBeatmapEditorStandardLevel",
            {},
            { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
              ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
              ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
              ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
              ::i2c::type_of<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelData, beatmapKey, beatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, colorScheme,
                                                   environmentsListModel, data, beforeSceneSwitchCallback, afterSceneSwitchCallback, levelFinishedCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::RestartGame(::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "RestartGame", {}, { ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::StopStandardLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { "StopStandardLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                                                 ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
          { "HandleMainGameSceneDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                                    ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                              { "HandleMultiplayerLevelDidFinish",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                                        ::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                              { "HandleMultiplayerLevelDidDisconnect",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, disconnectedReason);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData,
                                                                                     ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                              { "HandleMissionLevelSceneDidFinish",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionLevelScenesTransitionSetupData, missionCompletionResults);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupData* tutorialSceneTransitionSetupData,
                                                                                 ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType endState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                                                         { "HandleTutorialSceneDidFinish",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tutorialSceneTransitionSetupData, endState);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupData* creditsSceneTransitionSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(),
                                                           { "HandleCreditsSceneDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, creditsSceneTransitionSetupData);
}
inline void GlobalNamespace::MenuTransitionsHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuTransitionsHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::MenuTransitionsHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuTransitionsHelper*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MenuTransitionsHelper::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MenuTransitionsHelper::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuTransitionsHelper::MenuTransitionsHelper() {}
