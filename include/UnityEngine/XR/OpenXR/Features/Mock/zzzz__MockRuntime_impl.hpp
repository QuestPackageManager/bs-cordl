#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Mock/MockRuntime.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Mock/zzzz__MockRuntime_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceDomain_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceLevelHint_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceNotificationLevel_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceSubDomain_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Mock/zzzz__MockRuntime_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrReferenceSpaceType_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSessionState_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpaceLocationFlags_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewConfigurationType_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewStateFlags_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent::MockRuntime_ScriptEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent::MockRuntime_ScriptEvent() {}
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent::EndFrame{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent::HapticImpulse{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent::HapticStop{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67d5db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::*)(
    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent, uint64_t)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67d5e20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent, uint64_t, ::System::AsyncCallback*,
                                                                                   ::System::Object*)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67d5e34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67d5ed8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::Invoke(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt, uint64_t param) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, param);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::BeginInvoke(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt,
                                                                                                                     uint64_t param, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, evt, param, callback, object);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::MockRuntime_ScriptEventDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67d5018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (
    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67d5ee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67d5ef8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::*)(::System::IAsyncResult*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67d5f18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::Invoke(::StringW functionName) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(this, ___internal_method, functionName);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::BeginInvoke(::StringW functionName, ::System::AsyncCallback* callback,
                                                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, functionName, callback, object);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::MockRuntime_BeforeFunctionDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67d5094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::*)(
    ::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67d5f3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::*)(::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67d5f50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67d5fe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::Invoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, functionName, result);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::BeginInvoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result,
                                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, functionName, result, callback, object);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::MockRuntime_AfterFunctionDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.add_onScriptEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::add_onScriptEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x67d4968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "add_onScriptEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.remove_onScriptEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::remove_onScriptEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x67d4a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "remove_onScriptEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime> (*)()>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::get_Instance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67d4b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ReceiveScriptEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent, uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ReceiveScriptEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67d4868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "ReceiveScriptEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.BeforeFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::BeforeFunctionCallback)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67d48ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "BeforeFunctionCallback",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.AfterFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::AfterFunctionCallback)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67d4920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "AfterFunctionCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x67d4c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67d51ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67d51d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetBeforeFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetBeforeFunctionCallback)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67d4b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetBeforeFunctionCallback",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetAfterFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetAfterFunctionCallback)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67d4bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetAfterFunctionCallback",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ClearFunctionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ClearFunctionCallbacks)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67d5204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "ClearFunctionCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ResetDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ResetDefaults)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67d5258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "ResetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.OnInstanceDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d52a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.HookCreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::HookCreateInstance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67d52a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "HookCreateInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetKeepFunctionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetKeepFunctionCallbacks)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67d5320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetKeepFunctionCallbacks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetViewPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector4)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewPose)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x67d539c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetViewPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetViewState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67d5488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetViewState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, ::UnityEngine::Vector3,
                                                                                           ::UnityEngine::Quaternion, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x67d5508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    uint64_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x67d55e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_RegisterScriptEventCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_RegisterScriptEventCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67d56c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_RegisterScriptEventCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_TransitionToState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, bool)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_TransitionToState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67d573c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_TransitionToState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_GetSessionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState (*)()>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetSessionState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67d57c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "Internal_GetSessionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.RequestExitSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::RequestExitSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67d5828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "RequestExitSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.CauseInstanceLoss
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseInstanceLoss)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67d588c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "CauseInstanceLoss", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.CauseUserPresenceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseUserPresenceChange)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67d58f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "CauseUserPresenceChange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetReferenceSpaceBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, ::UnityEngine::Vector2)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetReferenceSpaceBounds)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67d596c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetReferenceSpaceBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetEndFrameStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetEndFrameStats)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67d5a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "GetEndFrameStats", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ActivateSecondaryView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, bool)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ActivateSecondaryView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67d5a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "ActivateSecondaryView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.MockRuntime_RegisterFunctionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime_RegisterFunctionCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67d5114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "MockRuntime_RegisterFunctionCallbacks",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.MetaPerformanceMetrics_SeedCounterOnce_Float
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, float_t, uint32_t)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MetaPerformanceMetrics_SeedCounterOnce_Float)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67d5b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "MetaPerformanceMetrics_SeedCounterOnce_Float", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.PerformanceSettings_CauseNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain,
                                                                                           ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain,
                                                                                           ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::PerformanceSettings_CauseNotification)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67d5bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "PerformanceSettings_CauseNotification",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.PerformanceSettings_GetPerformanceLevelHint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint (*)(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::PerformanceSettings_GetPerformanceLevelHint)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67d5c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "PerformanceSettings_GetPerformanceLevelHint",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_IsAndroidThreadTypeRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_IsAndroidThreadTypeRegistered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67d5cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_IsAndroidThreadTypeRegistered",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_GetRegisteredAndroidThreadsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetRegisteredAndroidThreadsCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67d5d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                 "Internal_GetRegisteredAndroidThreadsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.IsAndroidThreadTypeRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::IsAndroidThreadTypeRegistered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d5da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "IsAndroidThreadTypeRegistered",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetRegisteredAndroidThreadsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetRegisteredAndroidThreadsCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d5da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                 "GetRegisteredAndroidThreadsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67d5dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__cordl_internal_get_ignoreValidationErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreValidationErrors;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__cordl_internal_get_ignoreValidationErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreValidationErrors;
}
constexpr void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__cordl_internal_set_ignoreValidationErrors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreValidationErrors = value;
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::setStaticF_s_AfterFunctionCallbacks(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>*, "s_AfterFunctionCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>*
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_s_AfterFunctionCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>*,
                                           "s_AfterFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::setStaticF_s_BeforeFunctionCallbacks(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>*,
                                    "s_BeforeFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>*
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_s_BeforeFunctionCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>*,
                                           "s_BeforeFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::setStaticF_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*, "onScriptEvent",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(value));
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_onScriptEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*, "onScriptEvent",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::add_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "add_onScriptEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::remove_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "remove_onScriptEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime> UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ReceiveScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt, uint64_t param) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "ReceiveScriptEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt, param);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::BeforeFunctionCallback(::StringW function) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "BeforeFunctionCallback",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(nullptr, ___internal_method, function);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::AfterFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "AfterFunctionCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, result);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* beforeCallback,
                                                                                      ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* afterCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, beforeCallback, afterCallback);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function,
                                                                                      ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* beforeCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, beforeCallback);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* afterCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, afterCallback);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetBeforeFunctionCallback(::StringW function) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetBeforeFunctionCallback",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*, false>(nullptr, ___internal_method, function);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetAfterFunctionCallback(::StringW function) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetAfterFunctionCallback",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*, false>(nullptr, ___internal_method, function);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ClearFunctionCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "ClearFunctionCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ResetDefaults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "ResetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::OnInstanceDestroy(uint64_t instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::HookCreateInstance(::System::IntPtr func) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "HookCreateInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, func);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetKeepFunctionCallbacks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetKeepFunctionCallbacks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewPose(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, int32_t viewIndex,
                                                                              ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector4 fov) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetViewPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, viewIndex, position, orientation, fov);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewState(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType,
                                                                               ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags viewStateFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetViewState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, viewStateFlags);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector3 position,
                                                                           ::UnityEngine::Quaternion orientation, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, referenceSpace, position, orientation, locationFlags);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace(uint64_t actionHandle, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                                                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionHandle, position, orientation, locationFlags);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_RegisterScriptEventCallback(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_RegisterScriptEventCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(nullptr, ___internal_method, callback);
}
inline bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_TransitionToState(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState state, bool forceTransition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_TransitionToState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state, forceTransition);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetSessionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "Internal_GetSessionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::RequestExitSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "RequestExitSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseInstanceLoss() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "CauseInstanceLoss", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseUserPresenceChange(bool hasUserPresent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "CauseUserPresenceChange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hasUserPresent);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetReferenceSpaceBounds(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector2 bounds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetReferenceSpaceBounds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, referenceSpace, bounds);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetEndFrameStats(::ByRef<int32_t> primaryLayerCount, ::ByRef<int32_t> secondaryLayerCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "GetEndFrameStats", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, primaryLayerCount, secondaryLayerCount);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ActivateSecondaryView(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, bool activate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "ActivateSecondaryView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, activate);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime_RegisterFunctionCallbacks(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* hookBefore,
                                                                                                        ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* hookAfter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "MockRuntime_RegisterFunctionCallbacks",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hookBefore, hookAfter);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MetaPerformanceMetrics_SeedCounterOnce_Float(::StringW xrPathString, float_t value, uint32_t unit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "MetaPerformanceMetrics_SeedCounterOnce_Float", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrPathString, value, unit);
}
inline void
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::PerformanceSettings_CauseNotification(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain,
                                                                                            ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain subDomain,
                                                                                            ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel level) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "PerformanceSettings_CauseNotification",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, domain, subDomain, level);
}
inline ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::PerformanceSettings_GetPerformanceLevelHint(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "PerformanceSettings_GetPerformanceLevelHint",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint, false>(nullptr, ___internal_method, domain);
}
inline bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_IsAndroidThreadTypeRegistered(uint32_t threadType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_IsAndroidThreadTypeRegistered",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, threadType);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetRegisteredAndroidThreadsCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                               "Internal_GetRegisteredAndroidThreadsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::IsAndroidThreadTypeRegistered(uint32_t threadType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "IsAndroidThreadTypeRegistered",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, threadType);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetRegisteredAndroidThreadsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "GetRegisteredAndroidThreadsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime() {}
