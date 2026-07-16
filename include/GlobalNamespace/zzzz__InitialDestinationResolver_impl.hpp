#pragma once
// IWYU pragma private; include "GlobalNamespace/InitialDestinationResolver.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__InitialDestinationResolver_def.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__GameplayEnvironmentOverride_def.hpp"
#include "BeatSaber/Destinations/zzzz__IInitialDestinationResolver_def.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationController_def.hpp"
#include "BeatSaber/Destinations/zzzz__LevelStartDestinationParameters_def.hpp"
#include "BeatSaber/Destinations/zzzz__SimpleMissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__CreditsScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__InitialDestinationResolver_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeCollection_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__StartupErrorScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__TerminalController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x376d56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x376da88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldReplace", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::CreditsScenesTransitionSetupData*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::InitialDestinationResolver__GoToCreditsAsync_d__37(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace, ::GlobalNamespace::CreditsScenesTransitionSetupData* _transition_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->targetDestination = targetDestination;
  this->shouldReplace = shouldReplace;
  this->_transition_5__2 = _transition_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37::InitialDestinationResolver__GoToCreditsAsync_d__37() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x376daf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x376de14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "shouldReplace", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::InitialDestinationResolver__GoToMainMenuAsync_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this, bool shouldReplace,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->shouldReplace = shouldReplace;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40::InitialDestinationResolver__GoToMainMenuAsync_d__40() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x376de80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x376e5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldReplace", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::MissionLevelScenesTransitionSetupData*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::InitialDestinationResolver__GoToMissionLevelAsync_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace, ::GlobalNamespace::MissionLevelScenesTransitionSetupData* _transition_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->targetDestination = targetDestination;
  this->shouldReplace = shouldReplace;
  this->_transition_5__2 = _transition_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32::InitialDestinationResolver__GoToMissionLevelAsync_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0xa7c;
  constexpr static std::size_t addrs = 0x376e648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x376f0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldReplace",
// ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_parameters_5__3", ty: "::BeatSaber::Destinations::LevelStartDestinationParameters*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_additionalInformation_5__4", ty:
// "::GlobalNamespace::GameplayAdditionalInformation*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapLevelKey_5__5", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_beatmapLevel_5__6", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_playerSpecificSettings_5__7", ty:
// "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapLevelDataVersion_5__8", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Destinations::Destination* targetDestination,
    ::GlobalNamespace::InitialDestinationResolver* __4__this, bool shouldReplace, ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* _transition_5__2,
    ::BeatSaber::Destinations::LevelStartDestinationParameters* _parameters_5__3, ::GlobalNamespace::GameplayAdditionalInformation* _additionalInformation_5__4,
    ::GlobalNamespace::BeatmapKey _beatmapLevelKey_5__5, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__6, ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings_5__7,
    ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion_5__8, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->targetDestination = targetDestination;
  this->__4__this = __4__this;
  this->shouldReplace = shouldReplace;
  this->_transition_5__2 = _transition_5__2;
  this->_parameters_5__3 = _parameters_5__3;
  this->_additionalInformation_5__4 = _additionalInformation_5__4;
  this->_beatmapLevelKey_5__5 = _beatmapLevelKey_5__5;
  this->_beatmapLevel_5__6 = _beatmapLevel_5__6;
  this->_playerSpecificSettings_5__7 = _playerSpecificSettings_5__7;
  this->_beatmapLevelDataVersion_5__8 = _beatmapLevelDataVersion_5__8;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x376f130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x376f5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldReplace", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::StandardLevelScenesTransitionSetupData*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::InitialDestinationResolver__GoToStandardLevelAsync_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace, ::GlobalNamespace::StandardLevelScenesTransitionSetupData* _transition_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->targetDestination = targetDestination;
  this->shouldReplace = shouldReplace;
  this->_transition_5__2 = _transition_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31::InitialDestinationResolver__GoToStandardLevelAsync_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x376f63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x376f98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::InitialDestinationResolver__GoToStartupErrorAsync_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Destinations::Destination* targetDestination,
    ::GlobalNamespace::InitialDestinationResolver* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->targetDestination = targetDestination;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34::InitialDestinationResolver__GoToStartupErrorAsync_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x376f9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37700b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldReplace",
// ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::InitialDestinationResolver__GoToTargetDestinationAsync_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Destinations::Destination* targetDestination,
    ::GlobalNamespace::InitialDestinationResolver* __4__this, bool shouldReplace, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->targetDestination = targetDestination;
  this->__4__this = __4__this;
  this->shouldReplace = shouldReplace;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29::InitialDestinationResolver__GoToTargetDestinationAsync_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x3770120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37706e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldReplace", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::TutorialScenesTransitionSetupData*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::InitialDestinationResolver__GoToTutorialAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace, ::GlobalNamespace::TutorialScenesTransitionSetupData* _transition_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->targetDestination = targetDestination;
  this->shouldReplace = shouldReplace;
  this->_transition_5__2 = _transition_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35::InitialDestinationResolver__GoToTutorialAsync_d__35() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x3770750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3770cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_targetDestination_5__2", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::InitialDestinationResolver__InitializeScenesAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::BeatSaber::Destinations::Destination* _targetDestination_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_targetDestination_5__2 = _targetDestination_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27::InitialDestinationResolver__InitializeScenesAsync_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x3770d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3771118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_sceneSetupData_5__2", ty: "::GlobalNamespace::HealthWarningSceneSetupData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::InitialDestinationResolver__PresentHealthWarningAsync_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::GlobalNamespace::HealthWarningSceneSetupData* _sceneSetupData_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_sceneSetupData_5__2 = _sceneSetupData_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42::InitialDestinationResolver__PresentHealthWarningAsync_d__42() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x3771184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3771558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_sceneSetupData_5__2", ty: "::GlobalNamespace::ShaderWarmupSceneSetupData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::GlobalNamespace::ShaderWarmupSceneSetupData* _sceneSetupData_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_sceneSetupData_5__2 = _sceneSetupData_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)()>(&::GlobalNamespace::InitialDestinationResolver::Initialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x376c1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.InitializeScenesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::InitializeScenesAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x376c1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "InitializeScenesAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.ClearPreviousState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)()>(&::GlobalNamespace::InitialDestinationResolver::ClearPreviousState)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x376c274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "ClearPreviousState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToTargetDestinationAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*, bool)>(
    &::GlobalNamespace::InitialDestinationResolver::GoToTargetDestinationAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x376c430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "GoToTargetDestinationAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.DelaySmallAmountOfTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GlobalNamespace::InitialDestinationResolver::DelaySmallAmountOfTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x376c4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "DelaySmallAmountOfTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToStandardLevelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*, bool)>(
    &::GlobalNamespace::InitialDestinationResolver::GoToStandardLevelAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x376c554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "GoToStandardLevelAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToMissionLevelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*, bool)>(
    &::GlobalNamespace::InitialDestinationResolver::GoToMissionLevelAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x376c624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "GoToMissionLevelAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.HandleMissionSceneDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)(
    ::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::InitialDestinationResolver::HandleMissionSceneDidFinish)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x376c6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
            { "HandleMissionSceneDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToStartupErrorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*)>(
    &::GlobalNamespace::InitialDestinationResolver::GoToStartupErrorAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x376c7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                                                           { "GoToStartupErrorAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToTutorialAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*, bool)>(
    &::GlobalNamespace::InitialDestinationResolver::GoToTutorialAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x376c870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "GoToTutorialAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.HandleTutorialSceneDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)(::GlobalNamespace::TutorialScenesTransitionSetupData*,
                                                                                                               ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType)>(
    &::GlobalNamespace::InitialDestinationResolver::HandleTutorialSceneDidFinish)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x376c940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                                                           { "HandleTutorialSceneDidFinish",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToCreditsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*, bool)>(
    &::GlobalNamespace::InitialDestinationResolver::GoToCreditsAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x376caa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "GoToCreditsAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.HandleCreditsSceneDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)(::GlobalNamespace::CreditsScenesTransitionSetupData*)>(
    &::GlobalNamespace::InitialDestinationResolver::HandleCreditsSceneDidFinish)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x376cb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "HandleCreditsSceneDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToMultiplayerLevelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*, bool)>(
    &::GlobalNamespace::InitialDestinationResolver::GoToMultiplayerLevelAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x376cc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "GoToMultiplayerLevelAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToMainMenuAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)(bool)>(
    &::GlobalNamespace::InitialDestinationResolver::GoToMainMenuAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x376ccfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "GoToMainMenuAsync", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.PresentShaderWarmUpAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::PresentShaderWarmUpAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x376cdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "PresentShaderWarmUpAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.PresentHealthWarningAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::PresentHealthWarningAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x376ce74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "PresentHealthWarningAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.InitializeStandardLevelSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::BeatSaber::Destinations::Destination*)>(&::GlobalNamespace::InitialDestinationResolver::InitializeStandardLevelSetupData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x376cf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
            { "InitializeStandardLevelSetupData", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.PrepareParametersForLevelSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)(
    ::BeatSaber::Destinations::LevelStartDestinationParameters*, ::by_ref<::GlobalNamespace::BeatmapKey>, ::by_ref<::GlobalNamespace::BeatmapLevel*>,
    ::by_ref<::GlobalNamespace::PlayerSpecificSettings*>, ::by_ref<::GlobalNamespace::OverrideEnvironmentSettings*>, ::by_ref<::GlobalNamespace::ColorScheme*>,
    ::by_ref<::BeatSaber::Destinations::GameplayEnvironmentOverride*>)>(&::GlobalNamespace::InitialDestinationResolver::PrepareParametersForLevelSetupData)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x376d100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                { "PrepareParametersForLevelSetupData",
                                                  {},
                                                  { ::i2c::type_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(),
                                                    ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapLevel*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlayerSpecificSettings*>>(),
                                                    ::i2c::type_of<::by_ref<::GlobalNamespace::OverrideEnvironmentSettings*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ColorScheme*>>(),
                                                    ::i2c::type_of<::by_ref<::BeatSaber::Destinations::GameplayEnvironmentOverride*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.HandleStandardLevelSetupDataFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::InitialDestinationResolver::HandleStandardLevelSetupDataFinishEvent)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x376d370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                { "HandleStandardLevelSetupDataFinishEvent",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.ShouldGoDirectlyToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InitialDestinationResolver::*)()>(&::GlobalNamespace::InitialDestinationResolver::ShouldGoDirectlyToMenu)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x376d4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "ShouldGoDirectlyToMenu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)()>(&::GlobalNamespace::InitialDestinationResolver::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x376d4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver._GoToMissionLevelAsync_b__32_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MissionObjective* (::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::SimpleMissionObjective*)>(
    &::GlobalNamespace::InitialDestinationResolver::_GoToMissionLevelAsync_b__32_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x376d548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "<GoToMissionLevelAsync>b__32_0", {}, { ::i2c::type_of<::BeatSaber::Destinations::SimpleMissionObjective*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver._GoToMultiplayerLevelAsync_g__InitializeMultiplayerMocks_39_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::InitialDestinationResolver::_GoToMultiplayerLevelAsync_g__InitializeMultiplayerMocks_39_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x376d568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                             { "<GoToMultiplayerLevelAsync>g__InitializeMultiplayerMocks|39_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::BeatSaber::Destinations::InitialDestinationController*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr ::BeatSaber::Destinations::InitialDestinationController* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__controller(::BeatSaber::Destinations::InitialDestinationController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controller = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentsListModel = value;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClipAsyncLoader = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::BeatmapDataLoader*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapDataLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr ::GlobalNamespace::BeatmapDataLoader* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapDataLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataLoader = value;
}
constexpr ::GlobalNamespace::PlayerDataFileModel*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__playerDataFileModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileModel;
}
constexpr ::GlobalNamespace::PlayerDataFileModel* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__playerDataFileModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__playerDataFileModel(::GlobalNamespace::PlayerDataFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataFileModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapLevelsEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapLevelsEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsEntitlementModel = value;
}
constexpr ::GlobalNamespace::ColorSchemesSettings*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__colorSchemesSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr ::GlobalNamespace::ColorSchemesSettings* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__colorSchemesSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemesSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::MissionObjectiveTypeCollection*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__missionObjectiveTypeCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveTypeCollection;
}
constexpr ::GlobalNamespace::MissionObjectiveTypeCollection* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__missionObjectiveTypeCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveTypeCollection;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__missionObjectiveTypeCollection(::GlobalNamespace::MissionObjectiveTypeCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveTypeCollection = value;
}
constexpr ::GlobalNamespace::RecordingToolManager*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__recordingToolManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolManager;
}
constexpr ::GlobalNamespace::RecordingToolManager* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__recordingToolManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolManager;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordingToolManager = value;
}
constexpr ::GlobalNamespace::TerminalController*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__terminalRunner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terminalRunner;
}
constexpr ::GlobalNamespace::TerminalController* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__terminalRunner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terminalRunner;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__terminalRunner(::GlobalNamespace::TerminalController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terminalRunner = value;
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__appInitSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitSceneSetupData;
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__appInitSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitSceneSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__appInitSceneSetupData(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appInitSceneSetupData = value;
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__appInitScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__appInitScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__appInitScenesTransitionSetupData(::GlobalNamespace::AppInitScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appInitScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__tutorialScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__tutorialScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__tutorialScenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__creditsScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creditsScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__creditsScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creditsScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__creditsScenesTransitionSetupData(::GlobalNamespace::CreditsScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creditsScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__healthWarningScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__healthWarningScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__healthWarningScenesTransitionSetupData(::GlobalNamespace::HealthWarningScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____healthWarningScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__shaderWarmupSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderWarmupSceneSetupData;
}
constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__shaderWarmupSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderWarmupSceneSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__shaderWarmupSceneSetupData(::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shaderWarmupSceneSetupData = value;
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__menuScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__menuScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::StartupErrorScenesTransitionSetupData*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__startupErrorScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupErrorScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::StartupErrorScenesTransitionSetupData* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__startupErrorScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupErrorScenesTransitionSetupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__startupErrorScenesTransitionSetupData(::GlobalNamespace::StartupErrorScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startupErrorScenesTransitionSetupData = value;
}
constexpr ::BeatSaber::Destinations::Destination*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__lastDestination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastDestination;
}
constexpr ::BeatSaber::Destinations::Destination* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__lastDestination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastDestination;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__lastDestination(::BeatSaber::Destinations::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastDestination = value;
}
inline void GlobalNamespace::InitialDestinationResolver::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::InitializeScenesAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "InitializeScenesAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver::ClearPreviousState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "ClearPreviousState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToTargetDestinationAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "GoToTargetDestinationAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, targetDestination, shouldReplace);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::DelaySmallAmountOfTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "DelaySmallAmountOfTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToStandardLevelAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "GoToStandardLevelAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, targetDestination, shouldReplace);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToMissionLevelAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "GoToMissionLevelAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, targetDestination, shouldReplace);
}
inline void GlobalNamespace::InitialDestinationResolver::HandleMissionSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupData* setupData,
                                                                                     ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
          { "HandleMissionSceneDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setupData, missionCompletionResults);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToStartupErrorAsync(::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                                                         { "GoToStartupErrorAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, targetDestination);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToTutorialAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "GoToTutorialAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, targetDestination, shouldReplace);
}
inline void GlobalNamespace::InitialDestinationResolver::HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupData* setupData,
                                                                                      ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType tutorialEndStateType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                                                         { "HandleTutorialSceneDidFinish",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setupData, tutorialEndStateType);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToCreditsAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "GoToCreditsAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, targetDestination, shouldReplace);
}
inline void GlobalNamespace::InitialDestinationResolver::HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupData* setupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "HandleCreditsSceneDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setupData);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToMultiplayerLevelAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "GoToMultiplayerLevelAsync", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, targetDestination, shouldReplace);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToMainMenuAsync(bool shouldReplace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "GoToMainMenuAsync", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, shouldReplace);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::PresentShaderWarmUpAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "PresentShaderWarmUpAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::PresentHealthWarningAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "PresentHealthWarningAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver::InitializeStandardLevelSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* setupData,
                                                                                          ::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
          { "InitializeStandardLevelSetupData", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setupData, targetDestination);
}
inline void GlobalNamespace::InitialDestinationResolver::PrepareParametersForLevelSetupData(
    ::BeatSaber::Destinations::LevelStartDestinationParameters* parameters, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapLevelKey, ::by_ref<::GlobalNamespace::BeatmapLevel*> beatmapLevel,
    ::by_ref<::GlobalNamespace::PlayerSpecificSettings*> playerSpecificSettings, ::by_ref<::GlobalNamespace::OverrideEnvironmentSettings*> overrideEnvironmentSettings,
    ::by_ref<::GlobalNamespace::ColorScheme*> playerOverrideColorScheme, ::by_ref<::BeatSaber::Destinations::GameplayEnvironmentOverride*> environmentOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "PrepareParametersForLevelSetupData",
                                                             {},
                                                             { ::i2c::type_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(),
                                                               ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapLevel*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlayerSpecificSettings*>>(),
                                                               ::i2c::type_of<::by_ref<::GlobalNamespace::OverrideEnvironmentSettings*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ColorScheme*>>(),
                                                               ::i2c::type_of<::by_ref<::BeatSaber::Destinations::GameplayEnvironmentOverride*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters, beatmapLevelKey, beatmapLevel, playerSpecificSettings, overrideEnvironmentSettings, playerOverrideColorScheme,
                                                   environmentOverride);
}
inline void GlobalNamespace::InitialDestinationResolver::HandleStandardLevelSetupDataFinishEvent(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                                                                 ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                              { "HandleStandardLevelSetupDataFinishEvent",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline bool GlobalNamespace::InitialDestinationResolver::ShouldGoDirectlyToMenu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { "ShouldGoDirectlyToMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective* GlobalNamespace::InitialDestinationResolver::_GoToMissionLevelAsync_b__32_0(::BeatSaber::Destinations::SimpleMissionObjective* objective) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "<GoToMissionLevelAsync>b__32_0", {}, { ::i2c::type_of<::BeatSaber::Destinations::SimpleMissionObjective*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective*>(this, ___internal_method, objective);
}
inline void GlobalNamespace::InitialDestinationResolver::_GoToMultiplayerLevelAsync_g__InitializeMultiplayerMocks_39_0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitialDestinationResolver*>(),
                                                           { "<GoToMultiplayerLevelAsync>g__InitializeMultiplayerMocks|39_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container);
}
inline ::GlobalNamespace::InitialDestinationResolver* GlobalNamespace::InitialDestinationResolver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InitialDestinationResolver*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::InitialDestinationResolver::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::InitialDestinationResolver::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BeatSaber::Destinations::IInitialDestinationResolver"
constexpr GlobalNamespace::InitialDestinationResolver::operator ::BeatSaber::Destinations::IInitialDestinationResolver*() noexcept {
  return static_cast<::BeatSaber::Destinations::IInitialDestinationResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Destinations::IInitialDestinationResolver"
constexpr ::BeatSaber::Destinations::IInitialDestinationResolver* GlobalNamespace::InitialDestinationResolver::i___BeatSaber__Destinations__IInitialDestinationResolver() noexcept {
  return static_cast<::BeatSaber::Destinations::IInitialDestinationResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver::InitialDestinationResolver() {}
