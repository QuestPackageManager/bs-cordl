#pragma once
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
#include "GlobalNamespace/zzzz__HowToPlayViewController_def.hpp"
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
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::*)()>(
    &::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x24b75f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24b7bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "buttonNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29(
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
constexpr ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::*)()>(
    &::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x24b7bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24b7df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "finishAction", ty: "::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction", modifiers: "", def_value: Some("{}") },
// CppParam { name: "flowCoordinator", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this,
    ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction finishAction, ::UnityW<::HMUI::FlowCoordinator> flowCoordinator,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->finishAction = finishAction;
  this->flowCoordinator = flowCoordinator;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::*)()>(
    &::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x24b7dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24b8860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "destination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this,
    ::GlobalNamespace::MenuDestination* destination, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->destination = destination;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41() {}
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::*)()>(
        &::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x24b886c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42>::get(),
        "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (
    ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24b8e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42>::get(),
      "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "presentImmediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::
    __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42(int32_t __1__state,
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
constexpr ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42::
    __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42() {}
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::*)(int32_t)>(
    &::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24b7414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::*)()>(
    &::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b8e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                    "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::*)()>(
    &::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24b8e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::*)()>(
        &::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b8ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::*)()>(
    &::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24b8ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                    "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::*)()>(
        &::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b8f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                    "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainFlowCoordinator>& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MainFlowCoordinator> const&
GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MainFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuDestination*& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const&
GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__cordl_internal_set_destination(::GlobalNamespace::MenuDestination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*
GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>(__1__state));
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                  "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                  "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*>::get(),
                                  "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43() {}
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::MainFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x24b5a0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::MainFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x24b6140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.InitialViewControllerWasPresented
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(
    &::GlobalNamespace::MainFlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24b62d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::MainFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x24b634c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.PresentFlowCoordinatorOrAskForTutorial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::FlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::PresentFlowCoordinatorOrAskForTutorial)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x24b69ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "PresentFlowCoordinatorOrAskForTutorial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMainMenuViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(
    ::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton)>(&::GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24b6bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleMainMenuViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainMenuViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMultiplayerDisclaimerDidFinishAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleMultiplayerDisclaimerDidFinishAction)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24b6dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleMultiplayerDisclaimerDidFinishAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleOptionsViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::__OptionsViewController__OptionsButton)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleOptionsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x24b6e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleOptionsViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OptionsViewController__OptionsButton>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandlePlayerOptionsViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandlePlayerOptionsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b6f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandlePlayerOptionsViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleHowToPlayViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleHowToPlayViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24b6f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleHowToPlayViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleCampaignFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::CampaignFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleCampaignFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b6fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleCampaignFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CampaignFlowCoordinator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleEditAvatarFlowCoordinatorHelperDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(
    ::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction)>(&::GlobalNamespace::MainFlowCoordinator::HandleEditAvatarFlowCoordinatorHelperDidFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24b6ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleEditAvatarFlowCoordinatorHelperDidFinish",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleSoloFreePlayFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleSoloFreePlayFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b70a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleSoloFreePlayFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandlePartyFreePlayFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandlePartyFreePlayFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b70bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandlePartyFreePlayFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleSettingsFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(
    ::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction)>(&::GlobalNamespace::MainFlowCoordinator::HandleSettingsFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24b70d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleSettingsFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleHelpFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::HelpFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleHelpFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b7164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleHelpFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HelpFlowCoordinator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMultiplayerModeSelectionFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleMultiplayerModeSelectionFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b7178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleMultiplayerModeSelectionFlowCoordinatorDidFinish",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMainMenuViewControllerPromoButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*)>(
    &::GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerPromoButtonWasPressed)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x24b718c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleMainMenuViewControllerPromoButtonWasPressed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.ProcessMenuDestinationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MenuDestination*)>(
    &::GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24b7378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "ProcessMenuDestinationRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::MainFlowCoordinator::PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24b6d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                                               "PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.ProcessMenuDestinationRequestAfterFrameCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MenuDestination*)>(
    &::GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequestAfterFrameCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24b60cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "ProcessMenuDestinationRequestAfterFrameCoroutine",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::MainFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24b743c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b74d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentFlowCoordinatorOrAskForTutorial_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__27_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x24b74e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "<PresentFlowCoordinatorOrAskForTutorial>b__27_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentFlowCoordinatorOrAskForTutorial_b__27_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(
    &::GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__27_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b75c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                 "<PresentFlowCoordinatorOrAskForTutorial>b__27_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._HandleMainMenuViewControllerDidFinish_b__28_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(
    &::GlobalNamespace::MainFlowCoordinator::_HandleMainMenuViewControllerDidFinish_b__28_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24b75d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                 "<HandleMainMenuViewControllerDidFinish>b__28_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__42_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MainFlowCoordinator::_PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__42_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b75f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__42_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____soloFreePlayFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partyFreePlayFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____campaignFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerModeSelectionFlowCoordinator)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helpFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__editAvatarFlowCoordinatorHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarFlowCoordinatorHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*> const&
GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__editAvatarFlowCoordinatorHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarFlowCoordinatorHelper;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__editAvatarFlowCoordinatorHelper(::GlobalNamespace::EditAvatarFlowCoordinatorHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____editAvatarFlowCoordinatorHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleDialogPromptViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainMenuViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerOptionsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuLightsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarSystemCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuDestination*& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuDestinationRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuDestinationRequest;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& GlobalNamespace::MainFlowCoordinator::__cordl_internal_get__menuDestinationRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuDestinationRequest;
}
constexpr void GlobalNamespace::MainFlowCoordinator::__cordl_internal_set__menuDestinationRequest(::GlobalNamespace::MenuDestination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuDestinationRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____afterDialogPromptFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<bool, "_startWithSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::MainFlowCoordinator::getStaticF__startWithSettings() {
  return ::cordl_internals::getStaticField<bool, "_startWithSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get>();
}
inline void GlobalNamespace::MainFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MainFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                              ::HMUI::__ViewController__AnimationType animationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::MainFlowCoordinator::InitialViewControllerWasPresented() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::MainFlowCoordinator::PresentFlowCoordinatorOrAskForTutorial(::HMUI::FlowCoordinator* flowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "PresentFlowCoordinatorOrAskForTutorial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController* viewController,
                                                                                        ::GlobalNamespace::__MainMenuViewController__MenuButton subMenuType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleMainMenuViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainMenuViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, subMenuType);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMultiplayerDisclaimerDidFinishAction(int32_t buttonNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleMultiplayerDisclaimerDidFinishAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonNumber);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleOptionsViewControllerDidFinish(::GlobalNamespace::__OptionsViewController__OptionsButton optionsType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleOptionsViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OptionsViewController__OptionsButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionsType);
}
inline void GlobalNamespace::MainFlowCoordinator::HandlePlayerOptionsViewControllerDidFinish(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandlePlayerOptionsViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions howToPlayOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleHowToPlayViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, howToPlayOptions);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleCampaignFlowCoordinatorDidFinish(::GlobalNamespace::CampaignFlowCoordinator* flowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleCampaignFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CampaignFlowCoordinator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleEditAvatarFlowCoordinatorHelperDidFinish(::HMUI::FlowCoordinator* flowCoordinator,
                                                                                                 ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleEditAvatarFlowCoordinatorHelperDidFinish",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator, finishAction);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleSoloFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleSoloFreePlayFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandlePartyFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandlePartyFreePlayFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleSettingsFlowCoordinatorDidFinish(::GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator,
                                                                                         ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleSettingsFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsFlowCoordinator, finishAction);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleHelpFlowCoordinatorDidFinish(::GlobalNamespace::HelpFlowCoordinator* helpFlowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleHelpFlowCoordinatorDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HelpFlowCoordinator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, helpFlowCoordinator);
}
inline void
GlobalNamespace::MainFlowCoordinator::HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* multiplayerModeSelectionFlowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleMultiplayerModeSelectionFlowCoordinatorDidFinish",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerModeSelectionFlowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerPromoButtonWasPressed(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* promoInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "HandleMainMenuViewControllerPromoButtonWasPressed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, promoInfo);
}
inline void GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequest(::GlobalNamespace::MenuDestination* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "ProcessMenuDestinationRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination);
}
/// @param presentImmediately: bool (default: true)
inline void GlobalNamespace::MainFlowCoordinator::PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator(bool presentImmediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                                                             "PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, presentImmediately);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequestAfterFrameCoroutine(::GlobalNamespace::MenuDestination* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "ProcessMenuDestinationRequestAfterFrameCoroutine",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, destination);
}
inline void GlobalNamespace::MainFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topViewController);
}
inline ::GlobalNamespace::MainFlowCoordinator* GlobalNamespace::MainFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainFlowCoordinator*>());
}
inline void GlobalNamespace::MainFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__27_0(int32_t buttonNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "<PresentFlowCoordinatorOrAskForTutorial>b__27_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonNumber);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__27_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                               "<PresentFlowCoordinatorOrAskForTutorial>b__27_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_HandleMainMenuViewControllerDidFinish_b__28_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "<HandleMainMenuViewControllerDidFinish>b__28_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__42_0(int32_t buttonNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(), "<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__42_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonNumber);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainFlowCoordinator::MainFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
