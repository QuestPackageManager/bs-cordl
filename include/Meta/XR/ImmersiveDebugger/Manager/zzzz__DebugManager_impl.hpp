#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/DebugManager.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRSampledEventSender_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__IDebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x584cf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x584cfa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x584cfbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::*)(
    ::System::IAsyncResult*)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x584cfd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*
Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::DebugManager_ShouldRetrieveInstanceDelegate() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x584d050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c.__ctor_b__43_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::*)(
    ::GlobalNamespace::OVRTelemetryMarker)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::__ctor_b__43_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x584d054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>::get(), "<.ctor>b__43_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::setStaticF___9(::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>::get>(
      std::forward<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::setStaticF___9__43_0(::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*, "<>9__43_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::getStaticF___9__43_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*, "<>9__43_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetryMarker Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::__ctor_b__43_0(::GlobalNamespace::OVRTelemetryMarker marker) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>::get(), "<.ctor>b__43_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker, false>(this, ___internal_method, marker);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::DebugManager___c() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x584bb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> (*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::get_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x584bbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.set_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::Manager::DebugManager*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x584bc34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_OnReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnReady)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x584bc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_OnReady", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_OnReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnReady)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x584bd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_OnReady", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_OnFocusLostAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnFocusLostAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584be4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_OnFocusLostAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_OnFocusLostAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnFocusLostAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584bef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_OnFocusLostAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_OnDisableAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnDisableAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584bfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_OnDisableAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_OnDisableAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnDisableAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584c050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_OnDisableAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_OnUpdateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnUpdateAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584c0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_OnUpdateAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_OnUpdateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnUpdateAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584c1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_OnUpdateAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_CustomShouldRetrieveInstanceCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(
    ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_CustomShouldRetrieveInstanceCondition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584c254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_CustomShouldRetrieveInstanceCondition",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_CustomShouldRetrieveInstanceCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(
    ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_CustomShouldRetrieveInstanceCondition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584c300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_CustomShouldRetrieveInstanceCondition",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.get_UiPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* (
    ::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::get_UiPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584c3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "get_UiPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.set_UiPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::set_UiPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584c3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "set_UiPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x584c3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::Start)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x584c520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x584c904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "OnApplicationFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x584c924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnDestroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x584c940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x584c9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.RetrieveInstancesIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::RetrieveInstancesIfNeeded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x584c834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "RetrieveInstancesIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.InitSubManagers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::InitSubManagers)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x584ca44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.ProcessLoadedTypeBySubManagers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::ProcessLoadedTypeBySubManagers)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x584cafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "ProcessLoadedTypeBySubManagers",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.UnregisterInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::UnregisterInspector)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x584cc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "UnregisterInspector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.RegisterTypesFromInspectedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::RegisterTypesFromInspectedData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x584c6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               "RegisterTypesFromInspectedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x584cda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnFocusLostAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnFocusLostAction;
}
constexpr ::System::Action* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnFocusLostAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnFocusLostAction;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_OnFocusLostAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnFocusLostAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnDisableAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnDisableAction;
}
constexpr ::System::Action* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnDisableAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnDisableAction;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_OnDisableAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnDisableAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnUpdateAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnUpdateAction;
}
constexpr ::System::Action* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnUpdateAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnUpdateAction;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_OnUpdateAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnUpdateAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*&
Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_CustomShouldRetrieveInstanceCondition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomShouldRetrieveInstanceCondition;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* const&
Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_CustomShouldRetrieveInstanceCondition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomShouldRetrieveInstanceCondition;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_CustomShouldRetrieveInstanceCondition(
    ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomShouldRetrieveInstanceCondition)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_InstanceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstanceCache;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_InstanceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstanceCache;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_InstanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InstanceCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_SubDebugManagers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubDebugManagers;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* const&
Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_SubDebugManagers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubDebugManagers;
}
constexpr void
Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_SubDebugManagers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SubDebugManagers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_ShouldRetrieveInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShouldRetrieveInstances;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_ShouldRetrieveInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShouldRetrieveInstances;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_ShouldRetrieveInstances(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShouldRetrieveInstances = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__lastRetrievedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRetrievedTime;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__lastRetrievedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRetrievedTime;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set__lastRetrievedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastRetrievedTime = value;
}
constexpr ::GlobalNamespace::OVRSampledEventSender*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__frameUpdateRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameUpdateRecorder;
}
constexpr ::GlobalNamespace::OVRSampledEventSender* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__frameUpdateRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameUpdateRecorder;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set__frameUpdateRecorder(::GlobalNamespace::OVRSampledEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____frameUpdateRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__UiPanel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UiPanel_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__UiPanel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UiPanel_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set__UiPanel_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UiPanel_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::setStaticF__Instance_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get>(
      std::forward<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>(value));
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> Meta::XR::ImmersiveDebugger::Manager::DebugManager::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::setStaticF_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*, "OnReady",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get>(
      std::forward<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>(value));
}
inline ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* Meta::XR::ImmersiveDebugger::Manager::DebugManager::getStaticF_OnReady() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*, "OnReady",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> Meta::XR::ImmersiveDebugger::Manager::DebugManager::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>, false>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::set_Instance(::Meta::XR::ImmersiveDebugger::Manager::DebugManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_OnReady", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_OnReady", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnFocusLostAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_OnFocusLostAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnFocusLostAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_OnFocusLostAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnDisableAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_OnDisableAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnDisableAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_OnDisableAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnUpdateAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_OnUpdateAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnUpdateAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_OnUpdateAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_CustomShouldRetrieveInstanceCondition(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "add_CustomShouldRetrieveInstanceCondition",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_CustomShouldRetrieveInstanceCondition(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "remove_CustomShouldRetrieveInstanceCondition",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* Meta::XR::ImmersiveDebugger::Manager::DebugManager::get_UiPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "get_UiPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::set_UiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "set_UiPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnApplicationFocus(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "OnApplicationFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasFocus);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::RetrieveInstancesIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "RetrieveInstancesIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::InitSubManagers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TManagerType> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::RegisterManager() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "RegisterManager",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TManagerType>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TManagerType>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::ProcessLoadedTypeBySubManagers(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "ProcessLoadedTypeBySubManagers",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::UnregisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(), "UnregisterInspector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::RegisterTypesFromInspectedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             "RegisterTypesFromInspectedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager* Meta::XR::ImmersiveDebugger::Manager::DebugManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager::DebugManager() {}
