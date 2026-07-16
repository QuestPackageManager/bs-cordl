#pragma once
// IWYU pragma private; include "GlobalNamespace/MainFlowCoordinator.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__CampaignFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__HelpFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MainFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__OptionsViewController_def.hpp"
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerOptionsViewController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__SoloFreePlayFlowCoordinator_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5925fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592622c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "finishAction", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "flowCoordinator", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this,
    ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction finishAction, ::UnityW<::HMUI::FlowCoordinator> flowCoordinator,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->finishAction = finishAction;
  this->flowCoordinator = flowCoordinator;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44::MainFlowCoordinator__HandleEditAvatarFlowCoordinatorHelperDidFinish_d__44() {}
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x5926234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "buttonNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, int32_t buttonNumber, ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->buttonNumber = buttonNumber;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40::MainFlowCoordinator__HandleMultiplayerDisclaimerDidFinishAction_d__40() {}
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x5926914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5926fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52>(),
                                                { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52>(),
                                              { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "presentImmediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::
    MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52(int32_t __1__state,
                                                                                                            ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                            ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this, bool presentImmediately,
                                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->presentImmediately = presentImmediately;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52::
    MainFlowCoordinator__PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__52() {}
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x5926fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59279b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "destination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this,
    ::GlobalNamespace::MenuDestination* destination, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->destination = destination;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51::MainFlowCoordinator__ProcessMenuDestinationRequest_d__51() {}
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::*)(int32_t)>(
    &::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5925de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59279b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59279bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5927a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(),
                                                             { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5927a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::*)()>(
    &::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5927a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(),
                                                             { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MainFlowCoordinator>& GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MainFlowCoordinator> const& GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MainFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::MenuDestination*& GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::GlobalNamespace::MenuDestination* const& GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::__cordl_internal_set_destination(::GlobalNamespace::MenuDestination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
inline void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(),
                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(),
                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*
GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53::MainFlowCoordinator__ProcessMenuDestinationRequestAfterFrameCoroutine_d__53() {}
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::MainFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5924344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
    &::GlobalNamespace::MainFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5924a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.InitialViewControllerWasPresented
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5924bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::MainFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x5924c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.PresentFlowCoordinatorOrAskForTutorial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::FlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::PresentFlowCoordinatorOrAskForTutorial)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5925258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                                                           { "PresentFlowCoordinatorOrAskForTutorial", {}, { ::i2c::type_of<::HMUI::FlowCoordinator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMainMenuViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(
    ::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::MainMenuViewController_MenuButton)>(&::GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x59254e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                { "HandleMainMenuViewControllerDidFinish",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MainMenuViewController*>(), ::i2c::type_of<::GlobalNamespace::MainMenuViewController_MenuButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMultiplayerDisclaimerDidFinishAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleMultiplayerDisclaimerDidFinishAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x592575c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "HandleMultiplayerDisclaimerDidFinishAction", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleOptionsViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::OptionsViewController_OptionsButton)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleOptionsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5925810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "HandleOptionsViewControllerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::OptionsViewController_OptionsButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandlePlayerOptionsViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandlePlayerOptionsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x592590c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                                                           { "HandlePlayerOptionsViewControllerDidFinish", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleCampaignFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::CampaignFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleCampaignFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5925920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "HandleCampaignFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CampaignFlowCoordinator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleEditAvatarFlowCoordinatorHelperDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::FlowCoordinator*, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleEditAvatarFlowCoordinatorHelperDidFinish)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5925934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "HandleEditAvatarFlowCoordinatorHelperDidFinish",
                                                               {},
                                                               { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleSoloFreePlayFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleSoloFreePlayFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59259f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "HandleSoloFreePlayFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandlePartyFreePlayFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandlePartyFreePlayFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5925a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "HandlePartyFreePlayFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleSettingsFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(
    ::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction)>(&::GlobalNamespace::MainFlowCoordinator::HandleSettingsFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5925a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                { "HandleSettingsFlowCoordinatorDidFinish",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::SettingsFlowCoordinator*>(), ::i2c::type_of<::GlobalNamespace::SettingsFlowCoordinator_FinishAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleHelpFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::HelpFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleHelpFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5925abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "HandleHelpFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::HelpFlowCoordinator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMultiplayerModeSelectionFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleMultiplayerModeSelectionFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5925ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                { "HandleMultiplayerModeSelectionFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMainMenuViewControllerPromoButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerPromoButtonWasPressed)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5925ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "HandleMainMenuViewControllerPromoButtonWasPressed", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.ProcessMenuDestinationRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MenuDestination*)>(
    &::GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequest)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5925d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                                                           { "ProcessMenuDestinationRequest", {}, { ::i2c::type_of<::GlobalNamespace::MenuDestination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::MainFlowCoordinator::PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59256a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.ProcessMenuDestinationRequestAfterFrameCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MenuDestination*)>(
    &::GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequestAfterFrameCoroutine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59249c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "ProcessMenuDestinationRequestAfterFrameCoroutine", {}, { ::i2c::type_of<::GlobalNamespace::MenuDestination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::ViewController*)>(&::GlobalNamespace::MainFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5925df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5925e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentFlowCoordinatorOrAskForTutorial_b__38_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__38_0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5925e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "<PresentFlowCoordinatorOrAskForTutorial>b__38_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentFlowCoordinatorOrAskForTutorial_b__38_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__38_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5925fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "<PresentFlowCoordinatorOrAskForTutorial>b__38_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._HandleMainMenuViewControllerDidFinish_b__39_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::_HandleMainMenuViewControllerDidFinish_b__39_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5925fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "<HandleMainMenuViewControllerDidFinish>b__39_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__52_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MainFlowCoordinator::_PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__52_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5925fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                             { "<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__52_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__defaultLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsPreset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__defaultLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsPreset;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__defaultLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultLightsPreset = value;
}
constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__soloFreePlayFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soloFreePlayFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__soloFreePlayFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soloFreePlayFlowCoordinator;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__soloFreePlayFlowCoordinator(::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____soloFreePlayFlowCoordinator = value;
}
constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__partyFreePlayFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyFreePlayFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__partyFreePlayFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyFreePlayFlowCoordinator;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__partyFreePlayFlowCoordinator(::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyFreePlayFlowCoordinator = value;
}
constexpr ::UnityW<::GlobalNamespace::CampaignFlowCoordinator>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__campaignFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__campaignFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignFlowCoordinator;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__campaignFlowCoordinator(::UnityW<::GlobalNamespace::CampaignFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____campaignFlowCoordinator = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsFlowCoordinator>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__settingsFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__settingsFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsFlowCoordinator;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__settingsFlowCoordinator(::UnityW<::GlobalNamespace::SettingsFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsFlowCoordinator = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__multiplayerModeSelectionFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerModeSelectionFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__multiplayerModeSelectionFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerModeSelectionFlowCoordinator;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__multiplayerModeSelectionFlowCoordinator(::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerModeSelectionFlowCoordinator = value;
}
constexpr ::UnityW<::GlobalNamespace::HelpFlowCoordinator>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__helpFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::HelpFlowCoordinator> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__helpFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpFlowCoordinator;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__helpFlowCoordinator(::UnityW<::GlobalNamespace::HelpFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____helpFlowCoordinator = value;
}
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__editAvatarFlowCoordinatorHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarFlowCoordinatorHelper;
}
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__editAvatarFlowCoordinatorHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarFlowCoordinatorHelper;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__editAvatarFlowCoordinatorHelper(::GlobalNamespace::EditAvatarFlowCoordinatorHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editAvatarFlowCoordinatorHelper = value;
}
constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__simpleDialogPromptViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleDialogPromptViewController;
}
constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__simpleDialogPromptViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleDialogPromptViewController;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__simpleDialogPromptViewController(::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simpleDialogPromptViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::MainMenuViewController>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__mainMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainMenuViewController> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__mainMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainMenuViewController;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__mainMenuViewController(::UnityW<::GlobalNamespace::MainMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainMenuViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerOptionsViewController>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__playerOptionsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerOptionsViewController;
}
constexpr ::UnityW<::GlobalNamespace::PlayerOptionsViewController> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__playerOptionsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerOptionsViewController;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__playerOptionsViewController(::UnityW<::GlobalNamespace::PlayerOptionsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerOptionsViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::OptionsViewController>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__optionsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsViewController;
}
constexpr ::UnityW<::GlobalNamespace::OptionsViewController> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__optionsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsViewController;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__optionsViewController(::UnityW<::GlobalNamespace::OptionsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionsViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuLightsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuLightsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuLightsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__fadeInOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOut;
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__fadeInOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOut;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInOut = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuTransitionsHelper = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystemCollection = value;
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::GlobalNamespace::IAdditionalContentModel* const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additionalContentModel = value;
}
constexpr ::GlobalNamespace::MenuDestination*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuDestinationRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuDestinationRequest;
}
constexpr ::GlobalNamespace::MenuDestination* const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuDestinationRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuDestinationRequest;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__menuDestinationRequest(::GlobalNamespace::MenuDestination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuDestinationRequest = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__afterDialogPromptFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____afterDialogPromptFlowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__afterDialogPromptFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____afterDialogPromptFlowCoordinator;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__afterDialogPromptFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____afterDialogPromptFlowCoordinator = value;
}
constexpr bool& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__goToMultiplayerAfterAvatarCreation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goToMultiplayerAfterAvatarCreation;
}
constexpr bool const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__goToMultiplayerAfterAvatarCreation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goToMultiplayerAfterAvatarCreation;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__goToMultiplayerAfterAvatarCreation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goToMultiplayerAfterAvatarCreation = value;
}
inline void GlobalNamespace::MainFlowCoordinator::setStaticF__startWithSettings(bool value) {
  ::cordl_internals::setStaticField<bool, "_startWithSettings", ::GlobalNamespace::MainFlowCoordinator*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::MainFlowCoordinator::getStaticF__startWithSettings() {
  return ::cordl_internals::getStaticField<bool, "_startWithSettings", ::GlobalNamespace::MainFlowCoordinator*>();
}
inline void GlobalNamespace::MainFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MainFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                              ::HMUI::ViewController_AnimationType animationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::MainFlowCoordinator::InitialViewControllerWasPresented() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::MainFlowCoordinator::PresentFlowCoordinatorOrAskForTutorial(::HMUI::FlowCoordinator* flowCoordinator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "PresentFlowCoordinatorOrAskForTutorial", {}, { ::i2c::type_of<::HMUI::FlowCoordinator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController* viewController,
                                                                                        ::GlobalNamespace::MainMenuViewController_MenuButton subMenuType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
          { "HandleMainMenuViewControllerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MainMenuViewController*>(), ::i2c::type_of<::GlobalNamespace::MainMenuViewController_MenuButton>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, subMenuType);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMultiplayerDisclaimerDidFinishAction(int32_t buttonNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "HandleMultiplayerDisclaimerDidFinishAction", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonNumber);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleOptionsViewControllerDidFinish(::GlobalNamespace::OptionsViewController_OptionsButton optionsType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "HandleOptionsViewControllerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::OptionsViewController_OptionsButton>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optionsType);
}
inline void GlobalNamespace::MainFlowCoordinator::HandlePlayerOptionsViewControllerDidFinish(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                                                         { "HandlePlayerOptionsViewControllerDidFinish", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleCampaignFlowCoordinatorDidFinish(::GlobalNamespace::CampaignFlowCoordinator* flowCoordinator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "HandleCampaignFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CampaignFlowCoordinator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleEditAvatarFlowCoordinatorHelperDidFinish(::HMUI::FlowCoordinator* flowCoordinator,
                                                                                                 ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction finishAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "HandleEditAvatarFlowCoordinatorHelperDidFinish",
                                                             {},
                                                             { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, finishAction);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleSoloFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "HandleSoloFreePlayFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandlePartyFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "HandlePartyFreePlayFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleSettingsFlowCoordinatorDidFinish(::GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator,
                                                                                         ::GlobalNamespace::SettingsFlowCoordinator_FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                              { "HandleSettingsFlowCoordinatorDidFinish",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::SettingsFlowCoordinator*>(), ::i2c::type_of<::GlobalNamespace::SettingsFlowCoordinator_FinishAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsFlowCoordinator, finishAction);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleHelpFlowCoordinatorDidFinish(::GlobalNamespace::HelpFlowCoordinator* helpFlowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                                                         { "HandleHelpFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::HelpFlowCoordinator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, helpFlowCoordinator);
}
inline void
GlobalNamespace::MainFlowCoordinator::HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* multiplayerModeSelectionFlowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                              { "HandleMultiplayerModeSelectionFlowCoordinatorDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerModeSelectionFlowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerPromoButtonWasPressed(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* promoInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "HandleMainMenuViewControllerPromoButtonWasPressed", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, promoInfo);
}
inline void GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequest(::GlobalNamespace::MenuDestination* destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                                                         { "ProcessMenuDestinationRequest", {}, { ::i2c::type_of<::GlobalNamespace::MenuDestination*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void GlobalNamespace::MainFlowCoordinator::PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator(bool presentImmediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, presentImmediately);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequestAfterFrameCoroutine(::GlobalNamespace::MenuDestination* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "ProcessMenuDestinationRequestAfterFrameCoroutine", {}, { ::i2c::type_of<::GlobalNamespace::MenuDestination*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, destination);
}
inline void GlobalNamespace::MainFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::MainFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__38_0(int32_t buttonNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "<PresentFlowCoordinatorOrAskForTutorial>b__38_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonNumber);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__38_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "<PresentFlowCoordinatorOrAskForTutorial>b__38_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_HandleMainMenuViewControllerDidFinish_b__39_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(), { "<HandleMainMenuViewControllerDidFinish>b__39_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__52_0(int32_t buttonNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainFlowCoordinator*>(),
                                                           { "<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__52_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonNumber);
}
inline ::GlobalNamespace::MainFlowCoordinator* GlobalNamespace::MainFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainFlowCoordinator::MainFlowCoordinator() {}
