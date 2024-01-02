#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemViewController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::__AvatarSystemSelectionFlowCoordinator__FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::__AvatarSystemSelectionFlowCoordinator__FinishAction() {}
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::Continue{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction::Back{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::*)()>(
    &::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x2286774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2286e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "avatarSystemsMetadata", ty:
// "::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap1", ty:
// "::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_selectableAvatarSystemMetadata_5__3", ty: "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystemsMetadata, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* __4__this,
    ::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* __7__wrap1, ::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectableAvatarSystemMetadata_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->avatarSystemsMetadata = avatarSystemsMetadata;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->_selectableAvatarSystemMetadata_5__3 = _selectableAvatarSystemMetadata_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10::__AvatarSystemSelectionFlowCoordinator___Initialize_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2285aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2285b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Initialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2285c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "Initialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2285cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "Setup",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2285cf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2285efc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2286088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.SetAvatarSystemPreferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::SetAvatarSystemPreferred)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2286108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "SetAvatarSystemPreferred", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22861ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x22861f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2286364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleAvatarEditorFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleAvatarEditorFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22864d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "HandleAvatarEditorFlowCoordinatorDidFinish",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidPressContinueButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22865f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                                 "HandleSelectAvatarSystemViewControllerDidPressContinueButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2286618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x228663c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator._Initialize_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_Initialize_b__10_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22866b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "<Initialize>b__10_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SelectAvatarSystemViewController*& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__selectAvatarSystemViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectAvatarSystemViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectAvatarSystemViewController*> const&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__selectAvatarSystemViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectAvatarSystemViewController;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__selectAvatarSystemViewController(::GlobalNamespace::SelectAvatarSystemViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectAvatarSystemViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarSystemCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*> const&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__avatarFlowCoordinators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarFlowCoordinators;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>*> const&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__avatarFlowCoordinators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarFlowCoordinators;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__avatarFlowCoordinators(
    ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarFlowCoordinators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__continueButtonVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButtonVisible;
}
constexpr bool const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__get__continueButtonVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButtonVisible;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__set__continueButtonVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continueButtonVisible = value;
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::add_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::remove_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Initialize(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystemsMetadata) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "Initialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSystemsMetadata);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Setup(bool continueButtonVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "Setup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continueButtonVisible);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                               ::HMUI::__ViewController__AnimationType animationType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::SetAvatarSystemPreferred(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "SetAvatarSystemPreferred", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator,
                                                                                                              ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem,
                                                                                                              ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "HandleAvatarEditorFlowCoordinatorDidFinish",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator, avatarSystem, finishAction);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidPressContinueButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                               "HandleSelectAvatarSystemViewControllerDidPressContinueButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topViewController);
}
inline ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>());
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_Initialize_b__10_0(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), "<Initialize>b__10_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, avatarSystem);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::AvatarSystemSelectionFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
