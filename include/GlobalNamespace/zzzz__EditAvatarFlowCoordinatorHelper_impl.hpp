#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystem_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::__EditAvatarFlowCoordinatorHelper__FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::__EditAvatarFlowCoordinatorHelper__FinishAction() {}
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::Continue{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::Back{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::*)()>(
    &::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x22882d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x228868c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "parentFlowCoordinator", ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "immediately",
// ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "replaceTopViewController", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "backButtonVisible", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__EditAvatarFlowCoordinatorHelper___Show_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this,
    ::HMUI::FlowCoordinator* parentFlowCoordinator, bool immediately, bool replaceTopViewController, bool backButtonVisible, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->parentFlowCoordinator = parentFlowCoordinator;
  this->immediately = immediately;
  this->replaceTopViewController = replaceTopViewController;
  this->backButtonVisible = backButtonVisible;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__EditAvatarFlowCoordinatorHelper___Show_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::*)()>(
    &::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2288698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2288b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_avatarSystem_5__2", ty: "::BeatSaber::AvatarCore::IAvatarSystem*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__EditAvatarFlowCoordinatorHelper___Initialize_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this,
    ::BeatSaber::AvatarCore::IAvatarSystem* _avatarSystem_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_avatarSystem_5__2 = _avatarSystem_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__EditAvatarFlowCoordinatorHelper___Initialize_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(
    ::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*)>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2287dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(
    ::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*)>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2287e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.get__hasOnlyOneAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::get__hasOnlyOneAvatarSystem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2287f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                                                                               "get__hasOnlyOneAvatarSystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.Show
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::HMUI::FlowCoordinator*, bool, bool, bool)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::Show)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2287f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "Show", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2288040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                                                                               "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.PresentAvatarEditorFlowCoordinator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(
    ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode, ::HMUI::FlowCoordinator*, bool, bool)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::PresentAvatarEditorFlowCoordinator)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22880d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "PresentAvatarEditorFlowCoordinator", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.HandleAvatarEditorFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(
    ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarEditorFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22881bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "HandleAvatarEditorFlowCoordinatorDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.HandleAvatarSystemSelectionFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(
    ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarSystemSelectionFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2288288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "HandleAvatarSystemSelectionFlowCoordinatorDidFinish",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22882d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__avatarSystemSelectionFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemSelectionFlowCoordinator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*> const&
GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__avatarSystemSelectionFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemSelectionFlowCoordinator;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__avatarSystemSelectionFlowCoordinator(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarSystemSelectionFlowCoordinator)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarSystemCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*> const&
GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void
GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::FlowCoordinator*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__parentFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentFlowCoordinator;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__parentFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentFlowCoordinator;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__parentFlowCoordinator(::HMUI::FlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__singleAvatarEditorFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleAvatarEditorFlowCoordinator;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> const&
GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__singleAvatarEditorFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleAvatarEditorFlowCoordinator;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__singleAvatarEditorFlowCoordinator(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singleAvatarEditorFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::EditAvatarFlowCoordinatorHelper::add_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::EditAvatarFlowCoordinatorHelper::remove_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::EditAvatarFlowCoordinatorHelper::get__hasOnlyOneAvatarSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                                                                             "get__hasOnlyOneAvatarSystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param immediately: bool (default: false)
/// @param replaceTopViewController: bool (default: false)
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::Show(::HMUI::FlowCoordinator* parentFlowCoordinator, bool backButtonVisible, bool immediately, bool replaceTopViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "Show", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentFlowCoordinator, backButtonVisible, immediately, replaceTopViewController);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                                                                             "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param immediately: bool (default: false)
/// @param replaceTopViewController: bool (default: false)
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::PresentAvatarEditorFlowCoordinator(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator,
                                                                                                 ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode editMode,
                                                                                                 ::HMUI::FlowCoordinator* parentFlowCoordinator, bool immediately, bool replaceTopViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "PresentAvatarEditorFlowCoordinator", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator, editMode, parentFlowCoordinator, immediately, replaceTopViewController);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator,
                                                                                                         ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem,
                                                                                                         ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "HandleAvatarEditorFlowCoordinatorDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator, avatarSystem, finishAction);
}
inline void
GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarSystemSelectionFlowCoordinatorDidFinish(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* flowCoordinator,
                                                                                                      ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(), "HandleAvatarSystemSelectionFlowCoordinatorDidFinish",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator, finishAction);
}
inline ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* GlobalNamespace::EditAvatarFlowCoordinatorHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>());
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper::EditAvatarFlowCoordinatorHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
