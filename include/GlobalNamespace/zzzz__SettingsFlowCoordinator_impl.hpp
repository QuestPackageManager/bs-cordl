#pragma once
#include "GlobalNamespace/zzzz__SettingsNavigationController_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction::__SettingsFlowCoordinator__FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction::__SettingsFlowCoordinator__FinishAction() {}
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction GlobalNamespace::__SettingsFlowCoordinator__FinishAction::Cancel{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction GlobalNamespace::__SettingsFlowCoordinator__FinishAction::Ok{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction GlobalNamespace::__SettingsFlowCoordinator__FinishAction::Apply{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::*)()>(
    &::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x24c62d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14>::get(),
                                   "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24c670c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14>::get(),
                                   "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "finishAction", ty:
// "::GlobalNamespace::__SettingsNavigationController__FinishAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::__SettingsNavigationController__FinishAction finishAction,
    ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->finishAction = finishAction;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::*)()>(
    &::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x24c6718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24c6968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::__SettingsFlowCoordinator___ApplySettingsAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15::__SettingsFlowCoordinator___ApplySettingsAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24b5f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24b6794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::SettingsFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x24c5c78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::SettingsFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x24c5f28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ShowSecretViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24c6034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "ShowSecretViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.HandleDidSelectSettingsSubMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::GlobalNamespace::SettingsSubMenuInfo*, int32_t)>(
    &::GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24c60cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "HandleDidSelectSettingsSubMenu", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ReplaceViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24c6038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "ReplaceViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.HandleSettingsNavigationControllerDidFinishAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(
    ::GlobalNamespace::__SettingsNavigationController__FinishAction)>(&::GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinishAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24c6138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "HandleSettingsNavigationControllerDidFinishAsync",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsNavigationController__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ApplySettingsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::SettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::SettingsFlowCoordinator::ApplySettingsAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24c61d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                               "ApplySettingsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.CancelSettingsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::SettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::SettingsFlowCoordinator::CancelSettingsAsync)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c62a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                               "CancelSettingsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)()>(&::GlobalNamespace::SettingsFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c62c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__mainSettingsMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__mainSettingsMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsMenuViewController;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__mainSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsMenuViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SettingsNavigationController>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__settingsNavigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsNavigationController;
}
constexpr ::UnityW<::GlobalNamespace::SettingsNavigationController> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__settingsNavigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsNavigationController;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__settingsNavigationController(::UnityW<::GlobalNamespace::SettingsNavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsNavigationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*&
GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*> const&
GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SettingsFlowCoordinator::setStaticF__selectedSettingsSubMenuInfoIdx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_selectedSettingsSubMenuInfoIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SettingsFlowCoordinator::getStaticF__selectedSettingsSubMenuInfoIdx() {
  return ::cordl_internals::getStaticField<int32_t, "_selectedSettingsSubMenuInfoIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get>();
}
inline void GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SettingsFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "ShowSecretViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu(::GlobalNamespace::SettingsSubMenuInfo* settingsSubMenuInfo, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "HandleDidSelectSettingsSubMenu", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsSubMenuInfo, idx);
}
inline void GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "ReplaceViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinishAsync(::GlobalNamespace::__SettingsNavigationController__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "HandleSettingsNavigationControllerDidFinishAsync",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsNavigationController__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishAction);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SettingsFlowCoordinator::ApplySettingsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                             "ApplySettingsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SettingsFlowCoordinator::CancelSettingsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                             "CancelSettingsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsFlowCoordinator* GlobalNamespace::SettingsFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SettingsFlowCoordinator*>());
}
inline void GlobalNamespace::SettingsFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsFlowCoordinator::SettingsFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
